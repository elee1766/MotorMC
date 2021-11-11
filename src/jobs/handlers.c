#include <time.h>
#include "handlers.h"
#include "../listening/phd/play.h"
#include "../io/chat/translation.h"
#include "../io/logger/logger.h"
#include "../motor.h"

bool job_handle_keep_alive(job_payload_t* payload) {

	struct timespec time;
	clock_gettime(CLOCK_REALTIME, &time);
	const int64_t out_ms = time.tv_sec * 1000 + time.tv_nsec / 0xF4240;

	if (out_ms - payload->client->last_recv >= 30000) {
		ltg_disconnect(payload->client);
		return false;
	} else {
		phd_send_keep_alive(payload->client, out_ms);
		return true;
	}

}

bool job_handle_global_chat_message(job_payload_t* payload) {

	log_info("<%s> %s", UTL_STRTOCSTR(payload->global_chat_message.client->username), UTL_STRTOCSTR(payload->global_chat_message.message));

	cht_translation_t translation = cht_translation_new;
	translation.translate = cht_translation_chat_type_text;
	cht_component_t name = cht_new;
	name.text = payload->global_chat_message.client->username;
	cht_component_t message = cht_new;
	message.text = payload->global_chat_message.message;
	cht_add_with(&translation, &name);
	cht_add_with(&translation, &message);

	char out[1536];
	const size_t out_len = cht_write_translation(&translation, out);
	
	utl_dll_iterator_t iterator = ltg_get_player_iterator(sky_get_listener());
	ltg_client_t* client = ltg_player_iterator_next(sky_get_listener(), &iterator);
	while (client != NULL) {
		phd_send_chat_message(client, out, out_len, payload->global_chat_message.client->uuid);
		client = ltg_player_iterator_next(sky_get_listener(), &iterator);
	}
	cht_term_translation(&translation);

	free(payload->global_chat_message.message.value);
	return true;

}

bool job_handle_player_join(job_payload_t* payload) {

	log_info("%s joined the game", UTL_STRTOCSTR(payload->client->username));

	cht_translation_t translation = cht_translation_new;
	translation.translate = cht_translation_multiplayer_player_joined;
	translation.color = cht_yellow;
	cht_component_t name = cht_new;
	name.text = payload->client->username;
	cht_add_with(&translation, &name);

	char out[128];
	const size_t out_len = cht_write_translation(&translation, out);
	// lock client vector
	utl_dll_iterator_t iterator = ltg_get_player_iterator(sky_get_listener());
	ltg_client_t* client = ltg_player_iterator_next(sky_get_listener(), &iterator);
	while (client != NULL) {
		phd_send_player_info_add_player(client, payload->client);
		phd_send_system_chat_message(client, out, out_len);
		client = ltg_player_iterator_next(sky_get_listener(), &iterator);
	}

	cht_term_translation(&translation);

	ent_entity_t* entity = (ent_entity_t*) payload->client->entity;

	wld_chunk_subscribers_foreach(entity->chunk, ent_send_entity, entity);

	return true;

}

bool job_handle_player_leave(job_payload_t* payload) {

	log_info("%s left the game", payload->player_leave.username);

	cht_translation_t translation = cht_translation_new;
	translation.translate = cht_translation_multiplayer_player_left;
	translation.color = cht_yellow;
	cht_component_t name = cht_new;
	name.text = (string_t) {
		.value = payload->player_leave.username,
		.length = payload->player_leave.username_length
	};
	cht_add_with(&translation, &name);

	char out[128];
	const size_t out_len = cht_write_translation(&translation, out);
	
	utl_dll_iterator_t iterator = ltg_get_player_iterator(sky_get_listener());
	ltg_client_t* client = ltg_player_iterator_next(sky_get_listener(), &iterator);
	while (client != NULL) {
		phd_send_player_info_remove_player(client, payload->player_leave.uuid);
		phd_send_system_chat_message(client, out, out_len);
		client = ltg_player_iterator_next(sky_get_listener(), &iterator);
	}

	cht_term_translation(&translation);

	return true;

}

bool job_handle_send_update_pings(__attribute__((unused)) job_payload_t* payload) {

	utl_dll_iterator_t iterator = ltg_get_player_iterator(sky_get_listener());
	ltg_client_t* client = ltg_player_iterator_next(sky_get_listener(), &iterator);
	while (client != NULL) {
		phd_send_player_info_update_latency(client);
		client = ltg_player_iterator_next(sky_get_listener(), &iterator);
	}

	return true;

}

bool job_handle_tick_region(job_payload_t* payload) {
	
	for (uint32_t i = 0; i < 32 * 32; ++i) {

		const wld_chunk_t* chunk = payload->region->chunks[i];

		if (chunk != NULL) {
			if (wld_chunk_get_ticket(chunk) <= WLD_TICKET_TICK_ENTITIES) {
				// entities and chunk ticks
			}

			if (wld_chunk_get_ticket(chunk) <= WLD_TICKET_TICK) {
				// tick
			}

			if (wld_chunk_get_ticket(chunk) <= WLD_TICKET_BORDER) {
				// border
			}
		}
	}

	return true;

}

bool job_handle_unload_region(job_payload_t* payload) {

	if (payload->region->loaded_chunks == 0) {
		wld_unload_region(payload->region);
		return true;
	}

	return false;

}

bool job_handle_dig_block(job_payload_t* payload) {

	ent_player_t* player = payload->dig_block.client->entity;

	with_lock (&player->living_entity.entity.lock) {
		if (player->digging_block) {
			player->digging_block = false;
		} else {
			pthread_mutex_unlock(&player->living_entity.entity.lock);
			return false;
		}
	}

	// break block
	wld_set_block_type_at(payload->dig_block.chunk, payload->dig_block.x, payload->dig_block.y, payload->dig_block.z, mat_block_air);

	return true;

}

void job_update_entity_move(uint32_t client_id, void* args) {
	
	job_payload_t* payload = args;
	ent_entity_t* entity = payload->entity_move.entity;
	
	ltg_client_t* client = ltg_get_client_by_id(sky_get_listener(), client_id);
	
	if ((ent_entity_t*) ltg_get_entity(client) == entity) {
		if (entity->chunk != payload->entity_move.initial_chunk) {
			phd_update_sent_chunks_move(payload->entity_move.initial_chunk, client);
		}
	} else {
		phd_send_entity_position(client, entity, payload->entity_move.d_x, payload->entity_move.d_y, payload->entity_move.d_z);
	}

}

bool job_handle_entity_move(job_payload_t* payload) {

	ent_entity_t* entity = payload->entity_move.entity;

	// why not +=?
	// well, Atomic implementations vary from PC to PC and operating system to operating system,
	// and additions on floats are not very commonly implemented, but set usually is
	entity->position.x = entity->position.x + payload->entity_move.d_x;
	entity->position.y = entity->position.y + payload->entity_move.d_y;
	entity->position.z = entity->position.z + payload->entity_move.d_z;

	entity->on_ground = payload->entity_move.on_ground;

	// TODO physics

	if (!wld_in_chunk(entity->chunk, utl_int_floor(entity->position.x), utl_int_floor(entity->position.z))) {
		// change chunk
		ent_set_chunk(entity);
	}

	wld_chunk_t* chunk = entity->chunk;
	wld_chunk_subscribers_foreach(chunk, job_update_entity_move, payload);

	return true;

}

void job_update_entity_teleport(uint32_t client_id, void* args) {
	
	job_payload_t* payload = args;
	ent_entity_t* entity = payload->entity_teleport.entity;
	
	ltg_client_t* client = ltg_get_client_by_id(sky_get_listener(), client_id);
	
	if ((ent_entity_t*) ltg_get_entity(client) == entity) {
		if (entity->chunk != payload->entity_teleport.initial_chunk) {
			// TODO phd_update_sent_chunks_teleport(client);
		}
	} else {
		// TODO entering chunks, leaving chunks, etc
	}

}

bool job_handle_entity_teleport(job_payload_t* payload) {

	ent_entity_t* entity = payload->entity_teleport.entity;

	entity->position.world = payload->entity_teleport.world;
	entity->position.x = payload->entity_teleport.x;
	entity->position.y = payload->entity_teleport.y;
	entity->position.z = payload->entity_teleport.z;
	
	ent_remove_chunk(entity);

	entity->on_ground = false;

	// TODO physics
	
	if (!wld_in_chunk(entity->chunk, utl_int_floor(entity->position.x), utl_int_floor(entity->position.z))) {
		// change chunk
		ent_set_chunk(entity);
	}

	wld_chunk_t* chunk = entity->chunk;
	wld_chunk_subscribers_foreach(chunk, job_update_entity_teleport, payload);

	return true;

}

void job_update_living_entity_look(uint32_t client_id, void* args) {
	
	job_payload_t* payload = args;
	ent_living_entity_t* entity = payload->living_entity_look.entity;
	
	ltg_client_t* client = ltg_get_client_by_id(sky_get_listener(), client_id);
	
	if ((ent_living_entity_t*) ltg_get_entity(client) == entity) {
		// Do nothing
	} else {
		phd_send_entity_rotation(client, entity);
		phd_send_entity_head_look(client, entity);
	}

}

bool job_handle_living_entity_look(job_payload_t* payload) {

	ent_living_entity_t* entity = payload->living_entity_look.entity;

	entity->rotation.yaw = payload->living_entity_look.yaw;
	entity->rotation.pitch = payload->living_entity_look.pitch;

	entity->entity.on_ground = payload->living_entity_look.on_ground;

	wld_chunk_t* chunk = entity->entity.chunk;
	wld_chunk_subscribers_foreach(chunk, job_update_living_entity_look, payload);

	return true;

}

void job_update_living_entity_move_look(uint32_t client_id, void* args) {

	job_payload_t* payload = args;
	ent_living_entity_t* entity = payload->living_entity_move_look.entity;

	ltg_client_t* client = ltg_get_client_by_id(sky_get_listener(), client_id);
	
	if ((ent_living_entity_t*) ltg_get_entity(client) == entity) {
		if (entity->entity.chunk != payload->entity_move.initial_chunk) {
			phd_update_sent_chunks_move(payload->entity_move.initial_chunk, client);
		}
	} else {
		phd_send_entity_position_and_rotation(client, entity, payload->living_entity_move_look.d_x, payload->living_entity_move_look.d_y, payload->living_entity_move_look.d_z);
		phd_send_entity_head_look(client, entity);
	}
	
}

bool job_handle_living_entity_move_look(job_payload_t* payload) {

	ent_living_entity_t* entity = payload->living_entity_move_look.entity;

	entity->entity.position.x = entity->entity.position.x + payload->living_entity_move_look.d_x;
	entity->entity.position.y = entity->entity.position.y + payload->living_entity_move_look.d_y;
	entity->entity.position.z = entity->entity.position.z + payload->living_entity_move_look.d_z;

	entity->rotation.yaw = payload->living_entity_move_look.yaw;
	entity->rotation.pitch = payload->living_entity_move_look.pitch;

	entity->entity.on_ground = payload->living_entity_move_look.on_ground;

	// TODO physics

	if (!wld_in_chunk(entity->entity.chunk, utl_int_floor(entity->entity.position.x), utl_int_floor(entity->entity.position.z))) {
		// change chunk
		ent_set_chunk(&entity->entity);
	}

	wld_chunk_t* chunk = entity->entity.chunk;
	wld_chunk_subscribers_foreach(chunk, job_update_living_entity_move_look, payload);

	return true;

}

void job_update_living_entity_teleport_look(uint32_t client_id, void* args) {
	
	job_payload_t* payload = args;
	ent_living_entity_t* entity = payload->living_entity_teleport_look.entity;
	
	ltg_client_t* client = ltg_get_client_by_id(sky_get_listener(), client_id);
	
	if ((ent_living_entity_t*) ltg_get_entity(client) == entity) {
		if (entity->entity.chunk != payload->entity_teleport.initial_chunk) {
			// TODO phd_update_sent_chunks_teleport(client);
		}
	} else {
		// TODO phd_send_entity_teleport_look(...)
	}

}

bool job_handle_living_entity_teleport_look(job_payload_t* payload) {

	ent_living_entity_t* entity = payload->living_entity_teleport_look.entity;

	entity->entity.position.world = payload->living_entity_teleport_look.world;

	entity->entity.position.x = payload->living_entity_teleport_look.x;
	entity->entity.position.y = payload->living_entity_teleport_look.y;
	entity->entity.position.z = payload->living_entity_teleport_look.z;

	entity->rotation.yaw = payload->living_entity_teleport_look.yaw;
	entity->rotation.pitch = payload->living_entity_teleport_look.pitch;

	entity->entity.on_ground = false;
	
	ent_remove_chunk(&entity->entity);

	// TODO physics

	if (!wld_in_chunk(entity->entity.chunk, utl_int_floor(entity->entity.position.x), utl_int_floor(entity->entity.position.z))) {
		// change chunk
		ent_set_chunk(&entity->entity);
	}

	wld_chunk_t* chunk = entity->entity.chunk;
	wld_chunk_subscribers_foreach(chunk, job_update_living_entity_teleport_look, payload);

	return true;

}
