#pragma once

#include "item.d.h"

#include "../../../main.h"
#include "../../../jobs/scheduler/scheduler.h"
#include "../entity.h"
#include "../../item/item.h"

struct ent_item {
	ent_entity_t entity;

	itm_item_t slot;
};



static inline ent_item_t* ent_alloc_item(wld_world_t* world, float64_t x, float64_t y, float64_t z) {

	ent_item_t* item = (ent_item_t*)calloc(1, sizeof(ent_item_t));
	ent_type_t type = ent_item;
	memcpy((ent_type_t*) &item->entity.type, &type, sizeof(type));
	item->entity.position.world = world;
	item->entity.position.x = x;
	item->entity.position.y = y;
	item->entity.position.z = z;
	itm_set_type(&item->slot,mat_item_air);
	itm_set_count(&item->slot, 0);

	return item;
}

static inline void ent_item_set_slot(ent_item_t* item, itm_item_t slot) {
	with_lock (&item->entity.lock) {
		item->slot = slot;
	}
}


static inline void ent_item_serialize_metadata(ent_item_t* item, pck_packet_t* packet) {
	with_lock (&item->entity.lock) {
		pck_write_int8(packet, 8);
		pck_write_var_int(packet, 6);
		itm_serialize(packet, &item->slot);
		pck_write_int8(packet,0xff);
	}
}
