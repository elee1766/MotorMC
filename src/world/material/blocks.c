#include "material.h"

const mat_block_t mat_block_air_d = {
	.resistance = 0,
	.hardness = 0
};
const mat_block_t mat_block_acacia_button_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_face,
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_powered
	}
};
const mat_block_t mat_block_acacia_door_d = { 
	.resistance = 3,
	.hardness = 3,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_door_half,
		mat_state_modifier_door_hinge,
		mat_state_modifier_door_open,
		mat_state_modifier_powered
	}
};
const mat_block_t mat_block_acacia_fence_d = { 
	.resistance = 3,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 5,
	.flammability = 20,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_east,
		mat_state_modifier_north,
		mat_state_modifier_south,
		mat_state_modifier_waterlogged,
		mat_state_modifier_west
	}
};
const mat_block_t mat_block_acacia_fence_gate_d = { 
	.resistance = 3,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 5,
	.flammability = 20,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_fencegate_in_wall,
		mat_state_modifier_open,
		mat_state_modifier_powered
	}
};
const mat_block_t mat_block_acacia_leaves_d = { 
	.resistance = 0.2,
	.hardness = 0.2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_light_filtering) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 30,
	.flammability = 60,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_hoe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_distance,
		mat_state_modifier_leaves_persistant
	}
};
const mat_block_t mat_block_acacia_log_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 5,
	.flammability = 5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_axis
	}
};
const mat_block_t mat_block_acacia_planks_d = { 
	.resistance = 3,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 5,
	.flammability = 20,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	}
};
const mat_block_t mat_block_acacia_pressure_plate_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_powered
	}
};
const mat_block_t mat_block_acacia_sapling_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_sapling_stage
	}
};
const mat_block_t mat_block_acacia_sign_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_sign,
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_rotation,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_acacia_slab_d = { 
	.resistance = 3,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 5,
	.flammability = 20,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_acacia_stairs_d = { 
	.resistance = 3,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 5,
	.flammability = 20,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_acacia_trapdoor_d = { 
	.resistance = 3,
	.hardness = 3,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_trapdoor_half,
		mat_state_modifier_trapdoor_open,
		mat_state_modifier_powered,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_acacia_wood_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 5,
	.flammability = 5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_axis
	}
};
const mat_block_t mat_block_activator_rail_d = { 
	.resistance = 0.7,
	.hardness = 0.7,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_powered,
		mat_state_modifier_special_rail_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_allium_d = { 
	.resistance = 0,
	.hardness = 0,
	.encouragement = 60,
	.flammability = 100,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_amethyst_cluster_d = { 
	.resistance = 1.5,
	.hardness = 1.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_facing,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_ancient_debris_d = {
	.resistance = 1200,
	.hardness = 30,
	.best_tool = {
		.tier = mat_equipment_tier_diamond,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_andesite_d = {
	.resistance = 6,
	.hardness = 1.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_andesite_slab_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_andesite_stairs_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_andesite_wall_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 6,
	.modifiers = {
		mat_state_modifier_wall_east,
		mat_state_modifier_wall_north,
		mat_state_modifier_wall_south,
		mat_state_modifier_up,
		mat_state_modifier_waterlogged,
		mat_state_modifier_wall_west
	}
};
const mat_block_t mat_block_anvil_d = {
	.resistance = 1200,
	.hardness = 5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_azalea_d = { 
	.resistance = 0,
	.hardness = 0
};
const mat_block_t mat_block_azalea_leaves_d = { 
	.resistance = 0.2,
	.hardness = 0.2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_light_filtering) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 30,
	.flammability = 60,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_hoe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_distance,
		mat_state_modifier_leaves_persistant
	}
};
const mat_block_t mat_block_azure_bluet_d = { 
	.resistance = 0,
	.hardness = 0,
	.encouragement = 60,
	.flammability = 100,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_bamboo_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 60,
	.flammability = 60,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_bamboo_age,
		mat_state_modifier_bamboo_leaves,
		mat_state_modifier_bamboo_stage
	}
};
const mat_block_t mat_block_bamboo_sapling_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 60,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	}
};
const mat_block_t mat_block_beetroots_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_beetroot_age
	}
};
const mat_block_t mat_block_barrel_d = { 
	.resistance = 2.5,
	.hardness = 2.5,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_container,
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_facing,
		mat_state_modifier_open
	}
};
const mat_block_t mat_block_barrier_d = {
	.resistance = 3600000.8,
	.hardness = -1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_basalt_d = {
	.resistance = 4.2,
	.hardness = 1.25,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_axis
	}
};
const mat_block_t mat_block_beacon_d = { 
	.resistance = 3,
	.hardness = 3,
	.tags = {
		utl_arraybit(mat_block_tag_light_filtering) | utl_arraybit(mat_block_tag_transparent)
	},
	.luminance = 15,
	.entity = mat_block_entity_beacon
};
const mat_block_t mat_block_bedrock_d = {
	.resistance = 3600000,
	.hardness = -1
};
const mat_block_t mat_block_beehive_d = { 
	.resistance = 0.6,
	.hardness = 0.6,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 5,
	.flammability = 20,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_bees,
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_hive_honey_level
	}
};
const mat_block_t mat_block_bee_nest_d = { 
	.resistance = 0.3,
	.hardness = 0.3,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 30,
	.flammability = 20,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_bees,
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_hive_honey_level
	}
};
const mat_block_t mat_block_bell_d = {
	.resistance = 5,
	.hardness = 5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.entity = mat_block_entity_bell,
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_bell_attachment,
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_powered
	}
};
const mat_block_t mat_block_big_dripleaf_d = { 
	.resistance = 0.1,
	.hardness = 0.1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_dripleaf_tilt,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_birch_button_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_face,
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_powered
	}
};
const mat_block_t mat_block_birch_door_d = { 
	.resistance = 3,
	.hardness = 3,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_door_half,
		mat_state_modifier_door_hinge,
		mat_state_modifier_door_open,
		mat_state_modifier_powered
	}
};
const mat_block_t mat_block_birch_fence_d = { 
	.resistance = 3,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 5,
	.flammability = 20,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_east,
		mat_state_modifier_north,
		mat_state_modifier_south,
		mat_state_modifier_waterlogged,
		mat_state_modifier_west
	}
};
const mat_block_t mat_block_birch_fence_gate_d = { 
	.resistance = 3,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 5,
	.flammability = 20,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_fencegate_in_wall,
		mat_state_modifier_open,
		mat_state_modifier_powered
	}
};
const mat_block_t mat_block_birch_leaves_d = { 
	.resistance = 0.2,
	.hardness = 0.2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_light_filtering) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 30,
	.flammability = 60,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_hoe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_distance,
		mat_state_modifier_leaves_persistant
	}
};
const mat_block_t mat_block_birch_log_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 5,
	.flammability = 5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_axis
	}
};
const mat_block_t mat_block_birch_planks_d = { 
	.resistance = 3,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 5,
	.flammability = 20,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	}
};
const mat_block_t mat_block_birch_pressure_plate_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_powered
	}
};
const mat_block_t mat_block_birch_sapling_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_sapling_stage
	}
};
const mat_block_t mat_block_birch_sign_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_sign,
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_rotation,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_birch_slab_d = { 
	.resistance = 3,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 5,
	.flammability = 20,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_birch_stairs_d = { 
	.resistance = 3,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 5,
	.flammability = 20,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_birch_trapdoor_d = { 
	.resistance = 3,
	.hardness = 3,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_trapdoor_half,
		mat_state_modifier_trapdoor_open,
		mat_state_modifier_powered,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_birch_wood_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 5,
	.flammability = 5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_axis
	}
};
const mat_block_t mat_block_black_banner_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_banner,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_rotation
	}
};
const mat_block_t mat_block_black_bed_d = { 
	.resistance = 0.2,
	.hardness = 0.2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.entity = mat_block_entity_bed,
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_bed_occupied,
		mat_state_modifier_bed_part
	}
};
const mat_block_t mat_block_black_candle_d = { 
	.resistance = 0.1,
	.hardness = 0.1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_candle_candles,
		mat_state_modifier_lit,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_black_carpet_d = { 
	.resistance = 0.1,
	.hardness = 0.1,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 60,
	.flammability = 20
};
const mat_block_t mat_block_black_concrete_d = { 
	.resistance = 1.8,
	.hardness = 1.8,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_black_concrete_powder_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shovel
	}
};
const mat_block_t mat_block_black_glazed_terracotta_d = { 
	.resistance = 1.4,
	.hardness = 1.4,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_black_shulker_box_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_light_filtering) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_pickaxe
	},
	.entity = mat_block_entity_locational_container,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing
	}
};
const mat_block_t mat_block_black_stained_glass_d = { 
	.resistance = 0.3,
	.hardness = 0.3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_black_stained_glass_pane_d = { 
	.resistance = 0.3,
	.hardness = 0.3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_east,
		mat_state_modifier_north,
		mat_state_modifier_south,
		mat_state_modifier_waterlogged,
		mat_state_modifier_west
	}
};
const mat_block_t mat_block_black_terracotta_d = { 
	.resistance = 4.2,
	.hardness = 1.25,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_black_wool_d = { 
	.resistance = 0.8,
	.hardness = 0.8,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 30,
	.flammability = 60,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shears
	}
};
const mat_block_t mat_block_blackstone_d = {
	.resistance = 6,
	.hardness = 1.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_blackstone_slab_d = { 
	.resistance = 6,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_blackstone_stairs_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_blackstone_wall_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 6,
	.modifiers = {
		mat_state_modifier_wall_east,
		mat_state_modifier_wall_north,
		mat_state_modifier_wall_south,
		mat_state_modifier_up,
		mat_state_modifier_waterlogged,
		mat_state_modifier_wall_west
	}
};
const mat_block_t mat_block_blast_furnace_d = {
	.resistance = 3.5,
	.hardness = 3.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.entity = mat_block_entity_furnace,
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_lit
	}
};
const mat_block_t mat_block_amethyst_block_d = { 
	.resistance = 1.5,
	.hardness = 1.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_coal_block_d = {
	.resistance = 6,
	.hardness = 5,
	.encouragement = 5,
	.flammability = 5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_copper_block_d = {
	.resistance = 6,
	.hardness = 3,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_diamond_block_d = {
	.resistance = 6,
	.hardness = 5,
	.best_tool = {
		.tier = mat_equipment_tier_iron,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_block_of_emerald_d = {
	.resistance = 6,
	.hardness = 5,
	.best_tool = {
		.tier = mat_equipment_tier_iron,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_gold_block_d = {
	.resistance = 6,
	.hardness = 3,
	.best_tool = {
		.tier = mat_equipment_tier_iron,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_iron_block_d = {
	.resistance = 6,
	.hardness = 5,
	.best_tool = {
		.tier = mat_equipment_tier_stone,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_lapis_block_d = { 
	.resistance = 3,
	.hardness = 3,
	.best_tool = {
		.tier = mat_equipment_tier_stone,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_netherite_block_d = {
	.resistance = 1200,
	.hardness = 50,
	.best_tool = {
		.tier = mat_equipment_tier_diamond,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_quartz_block_d = { 
	.resistance = 0.8,
	.hardness = 0.8,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_raw_copper_block_d = { 
	.resistance = 6,
	.hardness = 5,
	.best_tool = {
		.tier = mat_equipment_tier_stone,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_raw_gold_block_d = { 
	.resistance = 6,
	.hardness = 5,
	.best_tool = {
		.tier = mat_equipment_tier_iron,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_raw_iron_block_d = { 
	.resistance = 6,
	.hardness = 5,
	.best_tool = {
		.tier = mat_equipment_tier_stone,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_redstone_block_d = {
	.resistance = 6,
	.hardness = 5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_blue_banner_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_banner,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_rotation
	}
};
const mat_block_t mat_block_blue_bed_d = { 
	.resistance = 0.2,
	.hardness = 0.2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.entity = mat_block_entity_bed,
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_bed_occupied,
		mat_state_modifier_bed_part
	}
};
const mat_block_t mat_block_blue_candle_d = { 
	.resistance = 0.1,
	.hardness = 0.1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_candle_candles,
		mat_state_modifier_lit,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_blue_carpet_d = { 
	.resistance = 0.1,
	.hardness = 0.1,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 60,
	.flammability = 20
};
const mat_block_t mat_block_blue_concrete_d = { 
	.resistance = 1.8,
	.hardness = 1.8,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_blue_concrete_powder_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shovel
	}
};
const mat_block_t mat_block_blue_glazed_terracotta_d = { 
	.resistance = 1.4,
	.hardness = 1.4,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_blue_ice_d = { 
	.resistance = 2.8,
	.hardness = 2.8,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_blue_orchid_d = { 
	.resistance = 0,
	.hardness = 0,
	.encouragement = 60,
	.flammability = 100,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_blue_shulker_box_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_light_filtering) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_pickaxe
	},
	.entity = mat_block_entity_locational_container,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing
	}
};
const mat_block_t mat_block_blue_stained_glass_d = { 
	.resistance = 0.3,
	.hardness = 0.3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_blue_stained_glass_pane_d = { 
	.resistance = 0.3,
	.hardness = 0.3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_east,
		mat_state_modifier_north,
		mat_state_modifier_south,
		mat_state_modifier_waterlogged,
		mat_state_modifier_west
	}
};
const mat_block_t mat_block_blue_terracotta_d = { 
	.resistance = 4.2,
	.hardness = 1.25,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_blue_wool_d = { 
	.resistance = 0.8,
	.hardness = 0.8,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 30,
	.flammability = 60,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shears
	}
};
const mat_block_t mat_block_bone_block_d = { 
	.resistance = 2,
	.hardness = 2,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_axis
	}
};
const mat_block_t mat_block_bookshelf_d = { 
	.resistance = 1.5,
	.hardness = 1.5,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 30,
	.flammability = 20,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	}
};
const mat_block_t mat_block_brain_coral_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_brain_coral_block_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_brain_coral_fan_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_brewing_stand_d = {
	.resistance = 0.5,
	.hardness = 0.5,
	.luminance = 1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.entity = mat_block_entity_brewing,
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_brewing_stand_has_bottle_0,
		mat_state_modifier_brewing_stand_has_bottle_1,
		mat_state_modifier_brewing_stand_has_bottle_2
	}
};
const mat_block_t mat_block_brick_slab_d = { 
	.resistance = 6,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_brick_stairs_d = { 
	.resistance = 6,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_brick_wall_d = { 
	.resistance = 6,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 6,
	.modifiers = {
		mat_state_modifier_wall_east,
		mat_state_modifier_wall_north,
		mat_state_modifier_wall_south,
		mat_state_modifier_up,
		mat_state_modifier_waterlogged,
		mat_state_modifier_wall_west
	}
};
const mat_block_t mat_block_bricks_d = { 
	.resistance = 6,
	.hardness = 2,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_brown_banner_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_banner,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_rotation
	}
};
const mat_block_t mat_block_brown_bed_d = { 
	.resistance = 0.2,
	.hardness = 0.2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.entity = mat_block_entity_bed,
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_bed_occupied,
		mat_state_modifier_bed_part
	}
};
const mat_block_t mat_block_brown_candle_d = { 
	.resistance = 0.1,
	.hardness = 0.1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_candle_candles,
		mat_state_modifier_lit,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_brown_carpet_d = { 
	.resistance = 0.1,
	.hardness = 0.1,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 60,
	.flammability = 20
};
const mat_block_t mat_block_brown_concrete_d = { 
	.resistance = 1.8,
	.hardness = 1.8,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_brown_concrete_powder_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shovel
	}
};
const mat_block_t mat_block_brown_glazed_terracotta_d = { 
	.resistance = 1.4,
	.hardness = 1.4,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_brown_mushroom_d = { 
	.resistance = 0,
	.hardness = 0,
	.luminance = 1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_brown_mushroom_block_d = { 
	.resistance = 0.2,
	.hardness = 0.2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 6,
	.modifiers = {
		mat_state_modifier_east,
		mat_state_modifier_down,
		mat_state_modifier_north,
		mat_state_modifier_south,
		mat_state_modifier_up,
		mat_state_modifier_west
	}
};
const mat_block_t mat_block_brown_shulker_box_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_light_filtering) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_pickaxe
	},
	.entity = mat_block_entity_locational_container,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing
	}
};
const mat_block_t mat_block_brown_stained_glass_d = { 
	.resistance = 0.3,
	.hardness = 0.3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_brown_stained_glass_pane_d = { 
	.resistance = 0.3,
	.hardness = 0.3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_east,
		mat_state_modifier_north,
		mat_state_modifier_south,
		mat_state_modifier_waterlogged,
		mat_state_modifier_west
	}
};
const mat_block_t mat_block_brown_terracotta_d = { 
	.resistance = 4.2,
	.hardness = 1.25,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_brown_wool_d = { 
	.resistance = 0.8,
	.hardness = 0.8,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 30,
	.flammability = 60,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shears
	}
};
const mat_block_t mat_block_bubble_coral_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_bubble_coral_block_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_bubble_coral_fan_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_budding_amethyst_d = { 
	.resistance = 1.5,
	.hardness = 1.5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_cactus_d = { 
	.resistance = 0.4,
	.hardness = 0.4,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_stock_age
	}
};
const mat_block_t mat_block_cake_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_cake_bites
	}
};
const mat_block_t mat_block_calcite_d = { 
	.resistance = 0.75,
	.hardness = 0.75,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_campfire_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.luminance = 15,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_container,
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_lit,
		mat_state_modifier_campfire_signal,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_candle_d = { 
	.resistance = 0.1,
	.hardness = 0.1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_candle_candles,
		mat_state_modifier_lit,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_carrots_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_crop_age
	}
};
const mat_block_t mat_block_cartography_table_d = { 
	.resistance = 2.5,
	.hardness = 2.5,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	}
};
const mat_block_t mat_block_carved_pumpkin_d = { 
	.resistance = 1,
	.hardness = 1,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_cauldron_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_cave_vines_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_vine_age,
		mat_state_modifier_cave_vines_berries
	}
};
const mat_block_t mat_block_chain_d = { 
	.resistance = 6,
	.hardness = 5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_axis,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_chain_command_block_d = { 
	.resistance = 3600000,
	.hardness = -1,
	.entity = mat_block_entity_command,
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_command_block_conditional,
		mat_state_modifier_facing
	}
};
const mat_block_t mat_block_chest_d = { 
	.resistance = 2.5,
	.hardness = 2.5,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_locational_container,
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_chest_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_chipped_anvil_d = { 
	.resistance = 1200,
	.hardness = 5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_chiseled_deepslate_d = { 
	.resistance = 6,
	.hardness = 3.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_chiseled_nether_bricks_d = { 
	.resistance = 6,
	.hardness = 2,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_chiseled_polished_blackstone_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_chiseled_quartz_block_d = { 
	.resistance = 0.8,
	.hardness = 0.8,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_chiseled_red_sandstone_d = { 
	.resistance = 0.8,
	.hardness = 0.8,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_chiseled_sandstone_d = { 
	.resistance = 0.8,
	.hardness = 0.8,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_chiseled_stone_bricks_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_chorus_flower_d = { 
	.resistance = 0.4,
	.hardness = 0.4,
	.tags = {
		utl_arraybit(mat_block_tag_light_filtering) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_chorus_flower_age
	}
};
const mat_block_t mat_block_chorus_plant_d = { 
	.resistance = 0.4,
	.hardness = 0.4,
	.tags = {
		utl_arraybit(mat_block_tag_light_filtering) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 6,
	.modifiers = {
		mat_state_modifier_down,
		mat_state_modifier_east,
		mat_state_modifier_north,
		mat_state_modifier_south,
		mat_state_modifier_up,
		mat_state_modifier_west
	}
};
const mat_block_t mat_block_clay_d = { 
	.resistance = 0.6,
	.hardness = 0.6,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shovel
	}
};
const mat_block_t mat_block_coal_ore_d = { 
	.resistance = 3,
	.hardness = 3,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_coarse_dirt_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shovel
	}
};
const mat_block_t mat_block_cobbled_deepslate_d = { 
	.resistance = 6,
	.hardness = 3.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_cobbled_deepslate_slab_d = { 
	.resistance = 6,
	.hardness = 3.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_cobbled_deepslate_stairs_d = { 
	.resistance = 6,
	.hardness = 3.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_cobbled_deepslate_wall_d = { 
	.resistance = 6,
	.hardness = 3.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 6,
	.modifiers = {
		mat_state_modifier_wall_east,
		mat_state_modifier_wall_north,
		mat_state_modifier_wall_south,
		mat_state_modifier_up,
		mat_state_modifier_waterlogged,
		mat_state_modifier_wall_west
	}
};
const mat_block_t mat_block_cobblestone_d = {
	.resistance = 6,
	.hardness = 2,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_cobblestone_slab_d = { 
	.resistance = 6,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_cobblestone_stairs_d = {
	.resistance = 6,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_cobblestone_wall_d = { 
	.resistance = 6,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 6,
	.modifiers = {
		mat_state_modifier_wall_east,
		mat_state_modifier_wall_north,
		mat_state_modifier_wall_south,
		mat_state_modifier_up,
		mat_state_modifier_waterlogged,
		mat_state_modifier_wall_west
	}
};
const mat_block_t mat_block_cobweb_d = {
	.resistance = 4,
	.hardness = 4,
	.tags = {
		utl_arraybit(mat_block_tag_light_filtering) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_sword
	}
};
const mat_block_t mat_block_cocoa_d = { 
	.resistance = 3,
	.hardness = 0.2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_cocoa_age,
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_command_block_d = {
	.resistance = 3600000,
	.hardness = -1,
	.entity = mat_block_entity_command,
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_command_block_conditional,
		mat_state_modifier_facing
	}
};
const mat_block_t mat_block_composter_d = { 
	.resistance = 0.6,
	.hardness = 0.6,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 5,
	.flammability = 20,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_composter_level
	}
};
const mat_block_t mat_block_conduit_d = { 
	.resistance = 3,
	.hardness = 3,
	.luminance = 15,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_pickaxe
	},
	.entity = mat_block_entity_conduit,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_copper_ore_d = { 
	.resistance = 3,
	.hardness = 3,
	.best_tool = {
		.tier = mat_equipment_tier_stone,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_cornflower_d = { 
	.resistance = 0,
	.hardness = 0,
	.encouragement = 60,
	.flammability = 100,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_cracked_deepslate_bricks_d = { 
	.resistance = 6,
	.hardness = 3.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_cracked_deepslate_tiles_d = { 
	.resistance = 6,
	.hardness = 3.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_cracked_nether_bricks_d = { 
	.resistance = 6,
	.hardness = 2,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_cracked_polished_blackstone_bricks_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_cracked_stone_bricks_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_crafting_table_d = { 
	.resistance = 2.5,
	.hardness = 2.5,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	}
};
const mat_block_t mat_block_creeper_head_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_rotation
	}
};
const mat_block_t mat_block_crimson_button_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_face,
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_powered
	}
};
const mat_block_t mat_block_crimson_door_d = { 
	.resistance = 3,
	.hardness = 3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_door_half,
		mat_state_modifier_door_hinge,
		mat_state_modifier_door_open,
		mat_state_modifier_powered
	}
};
const mat_block_t mat_block_crimson_fence_d = { 
	.resistance = 3,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_east,
		mat_state_modifier_north,
		mat_state_modifier_south,
		mat_state_modifier_waterlogged,
		mat_state_modifier_west
	}
};
const mat_block_t mat_block_crimson_fence_gate_d = { 
	.resistance = 3,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_fencegate_in_wall,
		mat_state_modifier_open,
		mat_state_modifier_powered
	}
};
const mat_block_t mat_block_crimson_fungus_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_crimson_hyphae_d = { 
	.resistance = 2,
	.hardness = 2,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_axis
	}
};
const mat_block_t mat_block_crimson_nylium_d = { 
	.resistance = 0.4,
	.hardness = 0.4,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_crimson_planks_d = { 
	.resistance = 3,
	.hardness = 2,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	}
};
const mat_block_t mat_block_crimson_pressure_plate_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_powered
	}
};
const mat_block_t mat_block_crimson_roots_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_crimson_sign_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_sign,
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_rotation,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_crimson_slab_d = { 
	.resistance = 3,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_crimson_stairs_d = { 
	.resistance = 3,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_crimson_stem_d = { 
	.resistance = 2,
	.hardness = 2,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_axis
	}
};
const mat_block_t mat_block_crimson_trapdoor_d = { 
	.resistance = 3,
	.hardness = 3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_trapdoor_half,
		mat_state_modifier_trapdoor_open,
		mat_state_modifier_powered,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_crying_obsidian_d = { 
	.resistance = 1200,
	.hardness = 50,
	.best_tool = {
		.tier = mat_equipment_tier_diamond,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_cut_copper_d = { 
	.resistance = 6,
	.hardness = 3,
	.best_tool = {
		.tier = mat_equipment_tier_stone,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_cut_copper_slab_d = { 
	.resistance = 6,
	.hardness = 3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_stone,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_cut_copper_stairs_d = { 
	.resistance = 6,
	.hardness = 3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_stone,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_cut_red_sandstone_d = { 
	.resistance = 0.8,
	.hardness = 0.8,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_cut_red_sandstone_slab_d = { 
	.resistance = 6,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_cut_sandstone_d = { 
	.resistance = 0.8,
	.hardness = 0.8,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_cut_sandstone_slab_d = { 
	.resistance = 6,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_cyan_banner_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_banner,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_rotation
	}
};
const mat_block_t mat_block_cyan_bed_d = { 
	.resistance = 0.2,
	.hardness = 0.2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.entity = mat_block_entity_bed,
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_bed_occupied,
		mat_state_modifier_bed_part
	}
};
const mat_block_t mat_block_cyan_candle_d = { 
	.resistance = 0.1,
	.hardness = 0.1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_candle_candles,
		mat_state_modifier_lit,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_cyan_carpet_d = { 
	.resistance = 0.1,
	.hardness = 0.1,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 60,
	.flammability = 20
};
const mat_block_t mat_block_cyan_concrete_d = { 
	.resistance = 1.8,
	.hardness = 1.8,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_cyan_concrete_powder_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shovel
	}
};
const mat_block_t mat_block_cyan_glazed_terracotta_d = { 
	.resistance = 1.4,
	.hardness = 1.4,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_cyan_shulker_box_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_light_filtering) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_pickaxe
	},
	.entity = mat_block_entity_locational_container,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing
	}
};
const mat_block_t mat_block_cyan_stained_glass_d = { 
	.resistance = 0.3,
	.hardness = 0.3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_cyan_stained_glass_pane_d = { 
	.resistance = 0.3,
	.hardness = 0.3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_east,
		mat_state_modifier_north,
		mat_state_modifier_south,
		mat_state_modifier_waterlogged,
		mat_state_modifier_west
	}
};
const mat_block_t mat_block_cyan_terracotta_d = { 
	.resistance = 4.2,
	.hardness = 1.25,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_cyan_wool_d = { 
	.resistance = 0.8,
	.hardness = 0.8,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 30,
	.flammability = 60,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shears
	}
};
const mat_block_t mat_block_damaged_anvil_d = { 
	.resistance = 1200,
	.hardness = 5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_dandelion_d = { 
	.resistance = 0,
	.hardness = 0,
	.encouragement = 60,
	.flammability = 100,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_dark_oak_button_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_face,
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_powered
	}
};
const mat_block_t mat_block_dark_oak_door_d = { 
	.resistance = 3,
	.hardness = 3,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_door_half,
		mat_state_modifier_door_hinge,
		mat_state_modifier_door_open,
		mat_state_modifier_powered
	}
};
const mat_block_t mat_block_dark_oak_fence_d = { 
	.resistance = 3,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 5,
	.flammability = 20,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_east,
		mat_state_modifier_north,
		mat_state_modifier_south,
		mat_state_modifier_waterlogged,
		mat_state_modifier_west
	}
};
const mat_block_t mat_block_dark_oak_fence_gate_d = { 
	.resistance = 3,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 5,
	.flammability = 20,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_fencegate_in_wall,
		mat_state_modifier_open,
		mat_state_modifier_powered
	}
};
const mat_block_t mat_block_dark_oak_leaves_d = { 
	.resistance = 0.2,
	.hardness = 0.2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_light_filtering) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 30,
	.flammability = 60,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_hoe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_distance,
		mat_state_modifier_leaves_persistant
	}
};
const mat_block_t mat_block_dark_oak_log_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 5,
	.flammability = 5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_axis
	}
};
const mat_block_t mat_block_dark_oak_planks_d = { 
	.resistance = 3,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 5,
	.flammability = 20,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	}
};
const mat_block_t mat_block_dark_oak_pressure_plate_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_powered
	}
};
const mat_block_t mat_block_dark_oak_sapling_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_sapling_stage
	}
};
const mat_block_t mat_block_dark_oak_sign_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_sign,
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_rotation,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_dark_oak_slab_d = { 
	.resistance = 3,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 5,
	.flammability = 20,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_dark_oak_stairs_d = { 
	.resistance = 3,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 5,
	.flammability = 20,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_dark_oak_trapdoor_d = { 
	.resistance = 3,
	.hardness = 3,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_trapdoor_half,
		mat_state_modifier_trapdoor_open,
		mat_state_modifier_powered,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_dark_oak_wood_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 5,
	.flammability = 5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_axis
	}
};
const mat_block_t mat_block_dark_prismarine_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_dark_prismarine_slab_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_dark_prismarine_stairs_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_daylight_detector_d = { 
	.resistance = 0.2,
	.hardness = 0.2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_daylight,
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_daylight_detector_inverted,
		mat_state_modifier_power
	}
};
const mat_block_t mat_block_dead_brain_coral_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_dead_brain_coral_block_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_dead_brain_coral_fan_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_dead_bubble_coral_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_dead_bubble_coral_block_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_dead_bubble_coral_fan_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_dead_bush_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 60,
	.flammability = 100
};
const mat_block_t mat_block_dead_fire_coral_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_dead_fire_coral_block_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_dead_fire_coral_fan_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_dead_horn_coral_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_dead_horn_coral_block_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_dead_horn_coral_fan_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_dead_tube_coral_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_dead_tube_coral_block_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_dead_tube_coral_fan_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_deepslate_d = { 
	.resistance = 6,
	.hardness = 3,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_axis
	}
};
const mat_block_t mat_block_deepslate_bricks_d = { 
	.resistance = 6,
	.hardness = 3.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_deepslate_brick_slab_d = { 
	.resistance = 6,
	.hardness = 3.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_deepslate_brick_stairs_d = { 
	.resistance = 6,
	.hardness = 3.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_deepslate_brick_wall_d = { 
	.resistance = 6,
	.hardness = 3.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 6,
	.modifiers = {
		mat_state_modifier_wall_east,
		mat_state_modifier_wall_north,
		mat_state_modifier_wall_south,
		mat_state_modifier_up,
		mat_state_modifier_waterlogged,
		mat_state_modifier_wall_west
	}
};
const mat_block_t mat_block_deepslate_coal_ore_d = { 
	.resistance = 3,
	.hardness = 4.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_deepslate_copper_ore_d = { 
	.resistance = 3,
	.hardness = 4.5,
	.best_tool = {
		.tier = mat_equipment_tier_stone,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_deepslate_diamond_ore_d = { 
	.resistance = 3,
	.hardness = 4.5,
	.best_tool = {
		.tier = mat_equipment_tier_iron,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_deepslate_emerald_ore_d = { 
	.resistance = 3,
	.hardness = 4.5,
	.best_tool = {
		.tier = mat_equipment_tier_iron,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_deepslate_gold_ore_d = { 
	.resistance = 3,
	.hardness = 4.5,
	.best_tool = {
		.tier = mat_equipment_tier_iron,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_deepslate_iron_ore_d = { 
	.resistance = 3,
	.hardness = 4.5,
	.best_tool = {
		.tier = mat_equipment_tier_stone,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_deepslate_lapis_ore_d = { 
	.resistance = 3,
	.hardness = 4.5,
	.best_tool = {
		.tier = mat_equipment_tier_stone,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_deepslate_redstone_ore_d = { 
	.resistance = 3,
	.hardness = 4.5,
	.best_tool = {
		.tier = mat_equipment_tier_iron,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_lit
	}
};
const mat_block_t mat_block_deepslate_tiles_d = { 
	.resistance = 6,
	.hardness = 3.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_deepslate_tile_slab_d = { 
	.resistance = 6,
	.hardness = 3.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_deepslate_tile_stairs_d = { 
	.resistance = 6,
	.hardness = 3.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_deepslate_tile_wall_d = { 
	.resistance = 6,
	.hardness = 3.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 6,
	.modifiers = {
		mat_state_modifier_wall_east,
		mat_state_modifier_wall_north,
		mat_state_modifier_wall_south,
		mat_state_modifier_up,
		mat_state_modifier_waterlogged,
		mat_state_modifier_wall_west
	}
};
const mat_block_t mat_block_detector_rail_d = { 
	.resistance = 0.7,
	.hardness = 0.7,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_powered,
		mat_state_modifier_special_rail_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_diamond_ore_d = {
	.resistance = 3,
	.hardness = 3,
	.best_tool = {
		.tier = mat_equipment_tier_iron,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_diorite_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_diorite_slab_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_diorite_stairs_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_diorite_wall_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 6,
	.modifiers = {
		mat_state_modifier_wall_east,
		mat_state_modifier_wall_north,
		mat_state_modifier_wall_south,
		mat_state_modifier_up,
		mat_state_modifier_waterlogged,
		mat_state_modifier_wall_west
	}
};
const mat_block_t mat_block_dirt_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shovel
	}
};
const mat_block_t mat_block_dirt_path_d = { 
	.resistance = 0.65,
	.hardness = 0.65,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shovel
	}
};
const mat_block_t mat_block_dispenser_d = { 
	.resistance = 3.5,
	.hardness = 3.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.entity = mat_block_entity_container,
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_facing,
		mat_state_modifier_triggered
	}
};
const mat_block_t mat_block_dragon_egg_d = { 
	.resistance = 9,
	.hardness = 3,
	.luminance = 1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_dragon_head_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_rotation
	}
};
const mat_block_t mat_block_kelp_d = { 
	.resistance = 0,
	.hardness = 0,
	.encouragement = 30,
	.flammability = 60,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_hoe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_vine_age
	}
};
const mat_block_t mat_block_dripstone_block_d = { 
	.resistance = 1,
	.hardness = 1.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_dropper_d = { 
	.resistance = 3.5,
	.hardness = 3.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.entity = mat_block_entity_container,
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_facing,
		mat_state_modifier_triggered
	}
};
const mat_block_t mat_block_emerald_ore_d = { 
	.resistance = 3,
	.hardness = 3,
	.best_tool = {
		.tier = mat_equipment_tier_iron,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_enchanting_table_d = { 
	.resistance = 1200,
	.hardness = 5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.entity = mat_block_entity_enchanting_table
};
const mat_block_t mat_block_end_portal_frame_d = { 
	.resistance = 3600000,
	.hardness = -1,
	.luminance = 1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_end_portal_frame_eye
	}
};
const mat_block_t mat_block_end_rod_d = { 
	.resistance = 0,
	.hardness = 0,
	.luminance = 14,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing
	}
};
const mat_block_t mat_block_end_stone_d = { 
	.resistance = 9,
	.hardness = 3,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_end_stone_brick_slab_d = { 
	.resistance = 9,
	.hardness = 3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_end_stone_brick_stairs_d = { 
	.resistance = 9,
	.hardness = 3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_end_stone_brick_wall_d = { 
	.resistance = 9,
	.hardness = 3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 6,
	.modifiers = {
		mat_state_modifier_wall_east,
		mat_state_modifier_wall_north,
		mat_state_modifier_wall_south,
		mat_state_modifier_up,
		mat_state_modifier_waterlogged,
		mat_state_modifier_wall_west
	}
};
const mat_block_t mat_block_end_stone_bricks_d = { 
	.resistance = 9,
	.hardness = 3,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_ender_chest_d = { 
	.resistance = 600,
	.hardness = 22.5,
	.luminance = 7,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.entity = mat_block_entity_end_particles,
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_exposed_copper_d = { 
	.resistance = 6,
	.hardness = 3,
	.best_tool = {
		.tier = mat_equipment_tier_stone,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_exposed_cut_copper_d = { 
	.resistance = 6,
	.hardness = 3,
	.best_tool = {
		.tier = mat_equipment_tier_stone,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_exposed_cut_copper_slab_d = { 
	.resistance = 6,
	.hardness = 3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_stone,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_exposed_cut_copper_stairs_d = { 
	.resistance = 6,
	.hardness = 3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_stone,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_farmland_d = { 
	.resistance = 0.6,
	.hardness = 0.6,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shovel
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_farmland_moisture
	}
};
const mat_block_t mat_block_fern_d = { 
	.resistance = 0,
	.hardness = 0,
	.encouragement = 60,
	.flammability = 100,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_fire_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 6,
	.modifiers = {
		mat_state_modifier_fire_age,
		mat_state_modifier_east,
		mat_state_modifier_north,
		mat_state_modifier_south,
		mat_state_modifier_up,
		mat_state_modifier_west
	}
};
const mat_block_t mat_block_fire_coral_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_fire_coral_block_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_fire_coral_fan_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_fletching_table_d = { 
	.resistance = 2.5,
	.hardness = 2.5,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_axe
	}
};
const mat_block_t mat_block_flower_pot_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_flowering_azalea_d = { 
	.resistance = 0,
	.hardness = 0
};
const mat_block_t mat_block_flowering_azalea_leaves_d = { 
	.resistance = 0.2,
	.hardness = 0.2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_light_filtering) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 30,
	.flammability = 60,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_hoe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_distance,
		mat_state_modifier_leaves_persistant
	}
};
const mat_block_t mat_block_furnace_d = { 
	.resistance = 3.5,
	.hardness = 3.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.entity = mat_block_entity_furnace,
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_lit
	}
};
const mat_block_t mat_block_gilded_blackstone_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_glass_d = { 
	.resistance = 0.3,
	.hardness = 0.3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_glass_pane_d = { 
	.resistance = 0.3,
	.hardness = 0.3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_east,
		mat_state_modifier_north,
		mat_state_modifier_south,
		mat_state_modifier_waterlogged,
		mat_state_modifier_west
	}
};
const mat_block_t mat_block_glow_lichen_d = { 
	.resistance = 0.2,
	.hardness = 0.2,
	.luminance = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 7,
	.modifiers = {
		mat_state_modifier_down,
		mat_state_modifier_east,
		mat_state_modifier_north,
		mat_state_modifier_south,
		mat_state_modifier_up,
		mat_state_modifier_waterlogged,
		mat_state_modifier_west
	}
};
const mat_block_t mat_block_glowstone_d = { 
	.resistance = 0.3,
	.hardness = 0.3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.luminance = 15
};
const mat_block_t mat_block_gold_ore_d = { 
	.resistance = 3,
	.hardness = 3,
	.best_tool = {
		.tier = mat_equipment_tier_iron,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_granite_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_granite_slab_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_granite_stairs_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_granite_wall_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 6,
	.modifiers = {
		mat_state_modifier_wall_east,
		mat_state_modifier_wall_north,
		mat_state_modifier_wall_south,
		mat_state_modifier_up,
		mat_state_modifier_waterlogged,
		mat_state_modifier_wall_west
	}
};
const mat_block_t mat_block_grass_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 60,
	.flammability = 100
};
const mat_block_t mat_block_grass_block_d = { 
	.resistance = 0.6,
	.hardness = 0.6,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shovel
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_grass_snowy
	}
};
const mat_block_t mat_block_gravel_d = { 
	.resistance = 0.6,
	.hardness = 0.6,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shovel
	}
};
const mat_block_t mat_block_gray_banner_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_banner,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_rotation
	}
};
const mat_block_t mat_block_gray_bed_d = { 
	.resistance = 0.2,
	.hardness = 0.2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.entity = mat_block_entity_bed,
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_bed_occupied,
		mat_state_modifier_bed_part
	}
};
const mat_block_t mat_block_gray_candle_d = { 
	.resistance = 0.1,
	.hardness = 0.1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_candle_candles,
		mat_state_modifier_lit,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_gray_carpet_d = { 
	.resistance = 0.1,
	.hardness = 0.1,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 60,
	.flammability = 20
};
const mat_block_t mat_block_gray_concrete_d = { 
	.resistance = 1.8,
	.hardness = 1.8,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_gray_concrete_powder_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shovel
	}
};
const mat_block_t mat_block_gray_glazed_terracotta_d = { 
	.resistance = 1.4,
	.hardness = 1.4,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_gray_shulker_box_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_light_filtering) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_pickaxe
	},
	.entity = mat_block_entity_locational_container,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing
	}
};
const mat_block_t mat_block_gray_stained_glass_d = { 
	.resistance = 0.3,
	.hardness = 0.3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_gray_stained_glass_pane_d = { 
	.resistance = 0.3,
	.hardness = 0.3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_east,
		mat_state_modifier_north,
		mat_state_modifier_south,
		mat_state_modifier_waterlogged,
		mat_state_modifier_west
	}
};
const mat_block_t mat_block_gray_terracotta_d = { 
	.resistance = 4.2,
	.hardness = 1.25,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_gray_wool_d = { 
	.resistance = 0.8,
	.hardness = 0.8,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 30,
	.flammability = 60,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shears
	}
};
const mat_block_t mat_block_green_banner_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_banner,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_rotation
	}
};
const mat_block_t mat_block_green_bed_d = { 
	.resistance = 0.2,
	.hardness = 0.2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.entity = mat_block_entity_bed,
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_bed_occupied,
		mat_state_modifier_bed_part
	}
};
const mat_block_t mat_block_green_candle_d = { 
	.resistance = 0.1,
	.hardness = 0.1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_candle_candles,
		mat_state_modifier_lit,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_green_carpet_d = { 
	.resistance = 0.1,
	.hardness = 0.1,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 60,
	.flammability = 20
};
const mat_block_t mat_block_green_concrete_d = { 
	.resistance = 1.8,
	.hardness = 1.8,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_green_concrete_powder_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shovel
	}
};
const mat_block_t mat_block_green_glazed_terracotta_d = { 
	.resistance = 1.4,
	.hardness = 1.4,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_green_shulker_box_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_light_filtering) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_pickaxe
	},
	.entity = mat_block_entity_locational_container,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing
	}
};
const mat_block_t mat_block_green_stained_glass_d = { 
	.resistance = 0.3,
	.hardness = 0.3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_green_stained_glass_pane_d = { 
	.resistance = 0.3,
	.hardness = 0.3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_east,
		mat_state_modifier_north,
		mat_state_modifier_south,
		mat_state_modifier_waterlogged,
		mat_state_modifier_west
	}
};
const mat_block_t mat_block_green_terracotta_d = { 
	.resistance = 4.2,
	.hardness = 1.25,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_green_wool_d = { 
	.resistance = 0.8,
	.hardness = 0.8,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 30,
	.flammability = 60,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shears
	}
};
const mat_block_t mat_block_grindstone_d = { 
	.resistance = 6,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_face,
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_hanging_roots_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_hay_block_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.encouragement = 60,
	.flammability = 20,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_hoe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_axis
	}
};
const mat_block_t mat_block_heavy_weighted_pressure_plate_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_power
	}
};
const mat_block_t mat_block_honey_block_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_light_filtering) | utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_honeycomb_block_d = { 
	.resistance = 0.6,
	.hardness = 0.6
};
const mat_block_t mat_block_hopper_d = { 
	.resistance = 4.8,
	.hardness = 3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.entity = mat_block_entity_hopper,
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_hopper_enabled,
		mat_state_modifier_hopper_facing
	}
};
const mat_block_t mat_block_horn_coral_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_horn_coral_block_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_horn_coral_fan_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_ice_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.tags = {
		utl_arraybit(mat_block_tag_light_filtering) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_infested_chiseled_stone_bricks_d = { 
	.resistance = 0.75,
	.hardness = 0.75
};
const mat_block_t mat_block_infested_cobblestone_d = { 
	.resistance = 0.75,
	.hardness = 1
};
const mat_block_t mat_block_infested_cracked_stone_bricks_d = { 
	.resistance = 0.75,
	.hardness = 0.75
};
const mat_block_t mat_block_infested_deepslate_d = { 
	.resistance = 0.75,
	.hardness = 1.5,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_axis
	}
};
const mat_block_t mat_block_infested_mossy_stone_bricks_d = { 
	.resistance = 0.75,
	.hardness = 0.75
};
const mat_block_t mat_block_infested_stone_d = { 
	.resistance = 0.75,
	.hardness = 0.75
};
const mat_block_t mat_block_infested_stone_bricks_d = { 
	.resistance = 0.75,
	.hardness = 0.75
};
const mat_block_t mat_block_iron_bars_d = { 
	.resistance = 6,
	.hardness = 5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_east,
		mat_state_modifier_north,
		mat_state_modifier_south,
		mat_state_modifier_waterlogged,
		mat_state_modifier_west
	}
};
const mat_block_t mat_block_iron_door_d = { 
	.resistance = 5,
	.hardness = 5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_door_half,
		mat_state_modifier_door_hinge,
		mat_state_modifier_door_open,
		mat_state_modifier_powered
	}
};
const mat_block_t mat_block_iron_ore_d = { 
	.resistance = 3,
	.hardness = 3,
	.best_tool = {
		.tier = mat_equipment_tier_stone,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_iron_trapdoor_d = { 
	.resistance = 5,
	.hardness = 5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_trapdoor_half,
		mat_state_modifier_trapdoor_open,
		mat_state_modifier_powered,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_jack_o_lantern_d = { 
	.resistance = 1,
	.hardness = 1,
	.luminance = 15,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_jigsaw_d = { 
	.resistance = 3600000,
	.hardness = -1,
	.entity = mat_block_entity_jigsaw,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_jigsaw_facing
	}
};
const mat_block_t mat_block_jukebox_d = { 
	.resistance = 6,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_jukebox,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_jukebox_has_record
	}
};
const mat_block_t mat_block_jungle_button_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_face,
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_powered
	}
};
const mat_block_t mat_block_jungle_door_d = { 
	.resistance = 3,
	.hardness = 3,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_door_half,
		mat_state_modifier_door_hinge,
		mat_state_modifier_door_open,
		mat_state_modifier_powered
	}
};
const mat_block_t mat_block_jungle_fence_d = { 
	.resistance = 3,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 5,
	.flammability = 20,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_east,
		mat_state_modifier_north,
		mat_state_modifier_south,
		mat_state_modifier_waterlogged,
		mat_state_modifier_west
	}
};
const mat_block_t mat_block_jungle_fence_gate_d = { 
	.resistance = 3,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 5,
	.flammability = 20,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_fencegate_in_wall,
		mat_state_modifier_open,
		mat_state_modifier_powered
	}
};
const mat_block_t mat_block_jungle_leaves_d = { 
	.resistance = 0.2,
	.hardness = 0.2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_light_filtering) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 30,
	.flammability = 60,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_hoe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_distance,
		mat_state_modifier_leaves_persistant
	}
};
const mat_block_t mat_block_jungle_log_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 5,
	.flammability = 5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_axis
	}
};
const mat_block_t mat_block_jungle_planks_d = { 
	.resistance = 3,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 5,
	.flammability = 20,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	}
};
const mat_block_t mat_block_jungle_pressure_plate_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_powered
	}
};
const mat_block_t mat_block_jungle_sapling_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_sapling_stage
	}
};
const mat_block_t mat_block_jungle_sign_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_sign,
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_rotation,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_jungle_slab_d = { 
	.resistance = 3,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 5,
	.flammability = 20,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_jungle_stairs_d = { 
	.resistance = 3,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 5,
	.flammability = 20,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_jungle_trapdoor_d = { 
	.resistance = 3,
	.hardness = 3,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_trapdoor_half,
		mat_state_modifier_trapdoor_open,
		mat_state_modifier_powered,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_jungle_wood_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 5,
	.flammability = 5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_axis
	}
};
const mat_block_t mat_block_kelp_plant_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_ladder_d = { 
	.resistance = 0.4,
	.hardness = 0.4,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_lantern_d = { 
	.resistance = 3.5,
	.hardness = 3.5,
	.luminance = 15,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_lantern_hanging,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_lapis_ore_d = { 
	.resistance = 3,
	.hardness = 3,
	.best_tool = {
		.tier = mat_equipment_tier_stone,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_large_amethyst_bud_d = { 
	.resistance = 1.5,
	.hardness = 1.5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_facing,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_large_fern_d = { 
	.resistance = 0,
	.hardness = 0,
	.encouragement = 60,
	.flammability = 100,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_plant_half
	}
};
const mat_block_t mat_block_lava_d = { 
	.resistance = 100,
	.hardness = 100,
	.tags = {
		utl_arraybit(mat_block_tag_light_filtering)
	},
	.luminance = 15,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_liquid_level
	}
};
const mat_block_t mat_block_lectern_d = { 
	.resistance = 2.5,
	.hardness = 2.5,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 30,
	.flammability = 20,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_lectern,
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_lectern_has_book,
		mat_state_modifier_powered
	}
};
const mat_block_t mat_block_lever_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_face,
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_powered
	}
};
const mat_block_t mat_block_light_d = { 
	.resistance = 3600000.8,
	.hardness = -1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_light_level,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_light_blue_banner_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_banner,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_rotation
	}
};
const mat_block_t mat_block_light_blue_bed_d = { 
	.resistance = 0.2,
	.hardness = 0.2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.entity = mat_block_entity_bed,
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_bed_occupied,
		mat_state_modifier_bed_part
	}
};
const mat_block_t mat_block_light_blue_candle_d = { 
	.resistance = 0.1,
	.hardness = 0.1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_candle_candles,
		mat_state_modifier_lit,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_light_blue_carpet_d = { 
	.resistance = 0.1,
	.hardness = 0.1,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 60,
	.flammability = 20
};
const mat_block_t mat_block_light_blue_concrete_d = { 
	.resistance = 1.8,
	.hardness = 1.8,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_light_blue_concrete_powder_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shovel
	}
};
const mat_block_t mat_block_light_blue_glazed_terracotta_d = { 
	.resistance = 1.4,
	.hardness = 1.4,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_light_blue_shulker_box_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_light_filtering) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_pickaxe
	},
	.entity = mat_block_entity_locational_container,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing
	}
};
const mat_block_t mat_block_light_blue_stained_glass_d = { 
	.resistance = 0.3,
	.hardness = 0.3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_light_blue_stained_glass_pane_d = { 
	.resistance = 0.3,
	.hardness = 0.3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_east,
		mat_state_modifier_north,
		mat_state_modifier_south,
		mat_state_modifier_waterlogged,
		mat_state_modifier_west
	}
};
const mat_block_t mat_block_light_blue_terracotta_d = { 
	.resistance = 4.2,
	.hardness = 1.25,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_light_blue_wool_d = { 
	.resistance = 0.8,
	.hardness = 0.8,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 30,
	.flammability = 60,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shears
	}
};
const mat_block_t mat_block_light_gray_banner_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_banner,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_rotation
	}
};
const mat_block_t mat_block_light_gray_bed_d = { 
	.resistance = 0.2,
	.hardness = 0.2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.entity = mat_block_entity_bed,
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_bed_occupied,
		mat_state_modifier_bed_part
	}
};
const mat_block_t mat_block_light_gray_candle_d = { 
	.resistance = 0.1,
	.hardness = 0.1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_candle_candles,
		mat_state_modifier_lit,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_light_gray_carpet_d = { 
	.resistance = 0.1,
	.hardness = 0.1,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 60,
	.flammability = 20
};
const mat_block_t mat_block_light_gray_concrete_d = { 
	.resistance = 1.8,
	.hardness = 1.8,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_light_gray_concrete_powder_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shovel
	}
};
const mat_block_t mat_block_light_gray_glazed_terracotta_d = { 
	.resistance = 1.4,
	.hardness = 1.4,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_light_gray_shulker_box_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_light_filtering) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_pickaxe
	},
	.entity = mat_block_entity_locational_container,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing
	}
};
const mat_block_t mat_block_light_gray_stained_glass_d = { 
	.resistance = 0.3,
	.hardness = 0.3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_light_gray_stained_glass_pane_d = { 
	.resistance = 0.3,
	.hardness = 0.3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_east,
		mat_state_modifier_north,
		mat_state_modifier_south,
		mat_state_modifier_waterlogged,
		mat_state_modifier_west
	}
};
const mat_block_t mat_block_light_gray_terracotta_d = { 
	.resistance = 4.2,
	.hardness = 1.25,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_light_gray_wool_d = { 
	.resistance = 0.8,
	.hardness = 0.8,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 30,
	.flammability = 60,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shears
	}
};
const mat_block_t mat_block_light_weighted_pressure_plate_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_power
	}
};
const mat_block_t mat_block_lightning_rod_d = { 
	.resistance = 6,
	.hardness = 3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_stone,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_facing,
		mat_state_modifier_powered,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_lilac_d = {
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 60,
	.flammability = 100,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_plant_half
	}
};
const mat_block_t mat_block_lily_of_the_valley_d = {
	.resistance = 0,
	.hardness = 0,
	.encouragement = 60,
	.flammability = 100,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_lily_pad_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_lime_banner_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_banner,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_rotation
	}
};
const mat_block_t mat_block_lime_bed_d = { 
	.resistance = 0.2,
	.hardness = 0.2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.entity = mat_block_entity_bed,
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_bed_occupied,
		mat_state_modifier_bed_part
	}
};
const mat_block_t mat_block_lime_candle_d = { 
	.resistance = 0.1,
	.hardness = 0.1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_candle_candles,
		mat_state_modifier_lit,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_lime_carpet_d = { 
	.resistance = 0.1,
	.hardness = 0.1,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 60,
	.flammability = 20
};
const mat_block_t mat_block_lime_concrete_d = { 
	.resistance = 1.8,
	.hardness = 1.8,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_lime_concrete_powder_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shovel
	}
};
const mat_block_t mat_block_lime_glazed_terracotta_d = { 
	.resistance = 1.4,
	.hardness = 1.4,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_lime_shulker_box_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_light_filtering) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_pickaxe
	},
	.entity = mat_block_entity_locational_container,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing
	}
};
const mat_block_t mat_block_lime_stained_glass_d = { 
	.resistance = 0.3,
	.hardness = 0.3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_lime_stained_glass_pane_d = { 
	.resistance = 0.3,
	.hardness = 0.3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_east,
		mat_state_modifier_north,
		mat_state_modifier_south,
		mat_state_modifier_waterlogged,
		mat_state_modifier_west
	}
};
const mat_block_t mat_block_lime_terracotta_d = { 
	.resistance = 4.2,
	.hardness = 1.25,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_lime_wool_d = { 
	.resistance = 0.8,
	.hardness = 0.8,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 30,
	.flammability = 60,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shears
	}
};
const mat_block_t mat_block_lodestone_d = { 
	.resistance = 3.5,
	.hardness = 3.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_loom_d = { 
	.resistance = 2.5,
	.hardness = 2.5,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_magenta_banner_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_banner,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_rotation
	}
};
const mat_block_t mat_block_magenta_bed_d = { 
	.resistance = 0.2,
	.hardness = 0.2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.entity = mat_block_entity_bed,
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_bed_occupied,
		mat_state_modifier_bed_part
	}
};
const mat_block_t mat_block_magenta_candle_d = { 
	.resistance = 0.1,
	.hardness = 0.1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_candle_candles,
		mat_state_modifier_lit,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_magenta_carpet_d = { 
	.resistance = 0.1,
	.hardness = 0.1,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 60,
	.flammability = 20
};
const mat_block_t mat_block_magenta_concrete_d = { 
	.resistance = 1.8,
	.hardness = 1.8,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_magenta_concrete_powder_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shovel
	}
};
const mat_block_t mat_block_magenta_glazed_terracotta_d = { 
	.resistance = 1.4,
	.hardness = 1.4,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_magenta_shulker_box_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_light_filtering) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_pickaxe
	},
	.entity = mat_block_entity_locational_container,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing
	}
};
const mat_block_t mat_block_magenta_stained_glass_d = { 
	.resistance = 0.3,
	.hardness = 0.3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_magenta_stained_glass_pane_d = { 
	.resistance = 0.3,
	.hardness = 0.3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_east,
		mat_state_modifier_north,
		mat_state_modifier_south,
		mat_state_modifier_waterlogged,
		mat_state_modifier_west
	}
};
const mat_block_t mat_block_magenta_terracotta_d = { 
	.resistance = 4.2,
	.hardness = 1.25,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_magenta_wool_d = { 
	.resistance = 0.8,
	.hardness = 0.8,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 30,
	.flammability = 60,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shears
	}
};
const mat_block_t mat_block_magma_block_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.luminance = 3,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_medium_amethyst_bud_d = { 
	.resistance = 1.5,
	.hardness = 1.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_facing,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_melon_d = { 
	.resistance = 1,
	.hardness = 1,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	}
};
const mat_block_t mat_block_melon_stem_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_crop_age
	}
};
const mat_block_t mat_block_moss_block_d = { 
	.resistance = 0.1,
	.hardness = 0.1,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_hoe
	}
};
const mat_block_t mat_block_moss_carpet_d = { 
	.resistance = 0.1,
	.hardness = 0.1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_hoe
	}
};
const mat_block_t mat_block_mossy_cobblestone_d = { 
	.resistance = 6,
	.hardness = 2,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_mossy_cobblestone_slab_d = { 
	.resistance = 6,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_mossy_cobblestone_stairs_d = { 
	.resistance = 6,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_mossy_cobblestone_wall_d = { 
	.resistance = 6,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 6,
	.modifiers = {
		mat_state_modifier_wall_east,
		mat_state_modifier_wall_north,
		mat_state_modifier_wall_south,
		mat_state_modifier_up,
		mat_state_modifier_waterlogged,
		mat_state_modifier_wall_west
	}
};
const mat_block_t mat_block_mossy_stone_brick_slab_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_mossy_stone_brick_stairs_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_mossy_stone_brick_wall_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 6,
	.modifiers = {
		mat_state_modifier_wall_east,
		mat_state_modifier_wall_north,
		mat_state_modifier_wall_south,
		mat_state_modifier_up,
		mat_state_modifier_waterlogged,
		mat_state_modifier_wall_west
	}
};
const mat_block_t mat_block_mossy_stone_bricks_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_mushroom_stem_d = { 
	.resistance = 0.2,
	.hardness = 0.2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 6,
	.modifiers = {
		mat_state_modifier_down,
		mat_state_modifier_east,
		mat_state_modifier_north,
		mat_state_modifier_south,
		mat_state_modifier_up,
		mat_state_modifier_west
	}
};
const mat_block_t mat_block_mycelium_d = { 
	.resistance = 0.6,
	.hardness = 0.6,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shovel
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_grass_snowy
	}
};
const mat_block_t mat_block_nether_brick_fence_d = { 
	.resistance = 6,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_east,
		mat_state_modifier_north,
		mat_state_modifier_south,
		mat_state_modifier_waterlogged,
		mat_state_modifier_west
	}
};
const mat_block_t mat_block_nether_brick_slab_d = { 
	.resistance = 6,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_nether_brick_stairs_d = { 
	.resistance = 6,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_nether_brick_wall_d = { 
	.resistance = 6,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 6,
	.modifiers = {
		mat_state_modifier_wall_east,
		mat_state_modifier_wall_north,
		mat_state_modifier_wall_south,
		mat_state_modifier_up,
		mat_state_modifier_waterlogged,
		mat_state_modifier_wall_west
	}
};
const mat_block_t mat_block_nether_bricks_d = { 
	.resistance = 6,
	.hardness = 2,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_nether_gold_ore_d = { 
	.resistance = 3,
	.hardness = 3,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_nether_quartz_ore_d = { 
	.resistance = 3,
	.hardness = 3,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_nether_sprouts_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_nether_wart_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_nether_wart_age
	}
};
const mat_block_t mat_block_nether_wart_block_d = { 
	.resistance = 1,
	.hardness = 1,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_hoe
	}
};
const mat_block_t mat_block_netherrack_d = { 
	.resistance = 0.4,
	.hardness = 0.4,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_note_block_d = { 
	.resistance = 0.8,
	.hardness = 0.8,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_note_block_instrument,
		mat_state_modifier_note_block_note,
		mat_state_modifier_powered
	}
};
const mat_block_t mat_block_oak_button_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_face,
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_powered
	}
};
const mat_block_t mat_block_oak_door_d = { 
	.resistance = 3,
	.hardness = 3,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_door_half,
		mat_state_modifier_door_hinge,
		mat_state_modifier_door_open,
		mat_state_modifier_powered
	}
};
const mat_block_t mat_block_oak_fence_d = { 
	.resistance = 3,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 5,
	.flammability = 20,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_east,
		mat_state_modifier_north,
		mat_state_modifier_south,
		mat_state_modifier_waterlogged,
		mat_state_modifier_west
	}
};
const mat_block_t mat_block_oak_fence_gate_d = { 
	.resistance = 3,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 5,
	.flammability = 20,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_fencegate_in_wall,
		mat_state_modifier_open,
		mat_state_modifier_powered
	}
};
const mat_block_t mat_block_oak_leaves_d = { 
	.resistance = 0.2,
	.hardness = 0.2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_light_filtering) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 30,
	.flammability = 60,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_hoe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_distance,
		mat_state_modifier_leaves_persistant
	}
};
const mat_block_t mat_block_oak_log_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 5,
	.flammability = 5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_axis
	}
};
const mat_block_t mat_block_oak_planks_d = { 
	.resistance = 3,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 5,
	.flammability = 20,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	}
};
const mat_block_t mat_block_oak_pressure_plate_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_powered
	}
};
const mat_block_t mat_block_oak_sapling_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_sapling_stage
	}
};
const mat_block_t mat_block_oak_sign_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_sign,
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_rotation,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_oak_slab_d = { 
	.resistance = 3,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 5,
	.flammability = 20,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_oak_stairs_d = { 
	.resistance = 3,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 5,
	.flammability = 20,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_oak_trapdoor_d = { 
	.resistance = 3,
	.hardness = 3,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_trapdoor_half,
		mat_state_modifier_trapdoor_open,
		mat_state_modifier_powered,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_oak_wood_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 5,
	.flammability = 5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_axis
	}
};
const mat_block_t mat_block_observer_d = { 
	.resistance = 3,
	.hardness = 3,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_facing,
		mat_state_modifier_powered
	}
};
const mat_block_t mat_block_obsidian_d = { 
	.resistance = 1200,
	.hardness = 50,
	.best_tool = {
		.tier = mat_equipment_tier_diamond,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_orange_banner_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_banner,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_rotation
	}
};
const mat_block_t mat_block_orange_bed_d = { 
	.resistance = 0.2,
	.hardness = 0.2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.entity = mat_block_entity_bed,
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_bed_occupied,
		mat_state_modifier_bed_part
	}
};
const mat_block_t mat_block_orange_candle_d = { 
	.resistance = 0.1,
	.hardness = 0.1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_candle_candles,
		mat_state_modifier_lit,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_orange_carpet_d = { 
	.resistance = 0.1,
	.hardness = 0.1,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 60,
	.flammability = 20
};
const mat_block_t mat_block_orange_concrete_d = { 
	.resistance = 1.8,
	.hardness = 1.8,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_orange_concrete_powder_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shovel
	}
};
const mat_block_t mat_block_orange_glazed_terracotta_d = { 
	.resistance = 1.4,
	.hardness = 1.4,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_orange_shulker_box_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_light_filtering) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_pickaxe
	},
	.entity = mat_block_entity_locational_container,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing
	}
};
const mat_block_t mat_block_orange_stained_glass_d = { 
	.resistance = 0.3,
	.hardness = 0.3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_orange_stained_glass_pane_d = { 
	.resistance = 0.3,
	.hardness = 0.3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_east,
		mat_state_modifier_north,
		mat_state_modifier_south,
		mat_state_modifier_waterlogged,
		mat_state_modifier_west
	}
};
const mat_block_t mat_block_orange_terracotta_d = { 
	.resistance = 4.2,
	.hardness = 1.25,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_orange_tulip_d = { 
	.resistance = 0,
	.hardness = 0,
	.encouragement = 60,
	.flammability = 100,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_orange_wool_d = { 
	.resistance = 0.8,
	.hardness = 0.8,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 30,
	.flammability = 60,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shears
	}
};
const mat_block_t mat_block_oxeye_daisy_d = { 
	.resistance = 0,
	.hardness = 0,
	.encouragement = 60,
	.flammability = 100,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_oxidized_copper_d = { 
	.resistance = 6,
	.hardness = 3,
	.best_tool = {
		.tier = mat_equipment_tier_stone,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_oxidized_cut_copper_d = { 
	.resistance = 6,
	.hardness = 3,
	.best_tool = {
		.tier = mat_equipment_tier_stone,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_oxidized_cut_copper_slab_d = { 
	.resistance = 6,
	.hardness = 3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_stone,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_oxidized_cut_copper_stairs_d = { 
	.resistance = 6,
	.hardness = 3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_stone,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_packed_ice_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_peony_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 60,
	.flammability = 100,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_plant_half
	}
};
const mat_block_t mat_block_petrified_oak_slab_d = { 
	.resistance = 6,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_pink_banner_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_banner,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_rotation
	}
};
const mat_block_t mat_block_pink_bed_d = { 
	.resistance = 0.2,
	.hardness = 0.2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.entity = mat_block_entity_bed,
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_bed_occupied,
		mat_state_modifier_bed_part
	}
};
const mat_block_t mat_block_pink_candle_d = { 
	.resistance = 0.1,
	.hardness = 0.1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_candle_candles,
		mat_state_modifier_lit,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_pink_carpet_d = { 
	.resistance = 0.1,
	.hardness = 0.1,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 60,
	.flammability = 20
};
const mat_block_t mat_block_pink_concrete_d = { 
	.resistance = 1.8,
	.hardness = 1.8,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_pink_concrete_powder_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shovel
	}
};
const mat_block_t mat_block_pink_glazed_terracotta_d = { 
	.resistance = 1.4,
	.hardness = 1.4,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_pink_shulker_box_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_light_filtering) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_pickaxe
	},
	.entity = mat_block_entity_locational_container,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing
	}
};
const mat_block_t mat_block_pink_stained_glass_d = { 
	.resistance = 0.3,
	.hardness = 0.3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_pink_stained_glass_pane_d = { 
	.resistance = 0.3,
	.hardness = 0.3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_east,
		mat_state_modifier_north,
		mat_state_modifier_south,
		mat_state_modifier_waterlogged,
		mat_state_modifier_west
	}
};
const mat_block_t mat_block_pink_terracotta_d = { 
	.resistance = 4.2,
	.hardness = 1.25,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_pink_tulip_d = { 
	.resistance = 0,
	.hardness = 0,
	.encouragement = 60,
	.flammability = 100,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_pink_wool_d = { 
	.resistance = 0.8,
	.hardness = 0.8,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 30,
	.flammability = 60,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shears
	}
};
const mat_block_t mat_block_piston_d = { 
	.resistance = 1.5,
	.hardness = 1.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_piston_extended,
		mat_state_modifier_facing
	}
};
const mat_block_t mat_block_player_head_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.entity = mat_block_entity_head,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_rotation
	}
};
const mat_block_t mat_block_podzol_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shovel
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_grass_snowy
	}
};
const mat_block_t mat_block_pointed_dripstone_d = { 
	.resistance = 3,
	.hardness = 1.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_dripstone_thickness,
		mat_state_modifier_dripstone_direction,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_polished_andesite_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_polished_andesite_slab_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_polished_andesite_stairs_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_polished_basalt_d = { 
	.resistance = 4.2,
	.hardness = 1.25,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_axis
	}
};
const mat_block_t mat_block_polished_blackstone_d = { 
	.resistance = 6,
	.hardness = 2,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_polished_blackstone_brick_slab_d = { 
	.resistance = 6,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_polished_blackstone_brick_stairs_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_polished_blackstone_brick_wall_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 6,
	.modifiers = {
		mat_state_modifier_wall_east,
		mat_state_modifier_wall_north,
		mat_state_modifier_wall_south,
		mat_state_modifier_up,
		mat_state_modifier_waterlogged,
		mat_state_modifier_wall_west
	}
};
const mat_block_t mat_block_polished_blackstone_bricks_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_polished_blackstone_button_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_face,
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_powered
	}
};
const mat_block_t mat_block_polished_blackstone_pressure_plate_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_powered
	}
};
const mat_block_t mat_block_polished_blackstone_slab_d = { 
	.resistance = 6,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_polished_blackstone_stairs_d = { 
	.resistance = 6,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_polished_blackstone_wall_d = { 
	.resistance = 6,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 6,
	.modifiers = {
		mat_state_modifier_wall_east,
		mat_state_modifier_wall_north,
		mat_state_modifier_wall_south,
		mat_state_modifier_up,
		mat_state_modifier_waterlogged,
		mat_state_modifier_wall_west
	}
};
const mat_block_t mat_block_polished_diorite_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_polished_diorite_slab_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_polished_diorite_stairs_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_polished_granite_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_polished_granite_slab_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_polished_granite_stairs_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_polished_deepslate_d = { 
	.resistance = 6,
	.hardness = 3.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_polished_deepslate_slab_d = { 
	.resistance = 6,
	.hardness = 3.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_polished_deepslate_stairs_d = { 
	.resistance = 6,
	.hardness = 3.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_polished_deepslate_wall_d = { 
	.resistance = 6,
	.hardness = 3.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 6,
	.modifiers = {
		mat_state_modifier_wall_east,
		mat_state_modifier_wall_north,
		mat_state_modifier_wall_south,
		mat_state_modifier_up,
		mat_state_modifier_waterlogged,
		mat_state_modifier_wall_west
	}
};
const mat_block_t mat_block_poppy_d = { 
	.resistance = 0,
	.hardness = 0,
	.encouragement = 60,
	.flammability = 100,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_potatoes_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_crop_age
	}
};
const mat_block_t mat_block_powder_snow_d = { 
	.resistance = 0.25,
	.hardness = 0.25,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_powered_rail_d = { 
	.resistance = 0.7,
	.hardness = 0.7,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_powered,
		mat_state_modifier_special_rail_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_prismarine_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_prismarine_brick_slab_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_prismarine_brick_stairs_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_prismarine_bricks_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_prismarine_slab_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_prismarine_stairs_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_prismarine_wall_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 6,
	.modifiers = {
		mat_state_modifier_wall_east,
		mat_state_modifier_wall_north,
		mat_state_modifier_wall_south,
		mat_state_modifier_up,
		mat_state_modifier_waterlogged,
		mat_state_modifier_wall_west
	}
};
const mat_block_t mat_block_pumpkin_d = { 
	.resistance = 1,
	.hardness = 1,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	}
};
const mat_block_t mat_block_pumpkin_stem_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_crop_age
	}
};
const mat_block_t mat_block_purple_banner_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_banner,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_rotation
	}
};
const mat_block_t mat_block_purple_bed_d = { 
	.resistance = 0.2,
	.hardness = 0.2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.entity = mat_block_entity_bed,
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_bed_occupied,
		mat_state_modifier_bed_part
	}
};
const mat_block_t mat_block_purple_candle_d = { 
	.resistance = 0.1,
	.hardness = 0.1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_candle_candles,
		mat_state_modifier_lit,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_purple_carpet_d = { 
	.resistance = 0.1,
	.hardness = 0.1,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 60,
	.flammability = 20
};
const mat_block_t mat_block_purple_concrete_d = { 
	.resistance = 1.8,
	.hardness = 1.8,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_purple_concrete_powder_d = {
	.resistance = 0.5,
	.hardness = 0.5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shovel
	}
 };
const mat_block_t mat_block_purple_glazed_terracotta_d = { 
	.resistance = 1.4,
	.hardness = 1.4,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_purple_shulker_box_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_light_filtering) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_pickaxe
	},
	.entity = mat_block_entity_locational_container,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing
	}
};
const mat_block_t mat_block_purple_stained_glass_d = { 
	.resistance = 0.3,
	.hardness = 0.3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_purple_stained_glass_pane_d = { 
	.resistance = 0.3,
	.hardness = 0.3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_east,
		mat_state_modifier_north,
		mat_state_modifier_south,
		mat_state_modifier_waterlogged,
		mat_state_modifier_west
	}
};
const mat_block_t mat_block_purple_terracotta_d = { 
	.resistance = 4.2,
	.hardness = 1.25,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_purple_wool_d = { 
	.resistance = 0.8,
	.hardness = 0.8,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 30,
	.flammability = 60,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shears
	}
};
const mat_block_t mat_block_purpur_block_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_purpur_pillar_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_axis
	}
};
const mat_block_t mat_block_purpur_slab_d = { 
	.resistance = 6,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_purpur_stairs_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_quartz_bricks_d = { 
	.resistance = 0.8,
	.hardness = 0.8,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_quartz_pillar_d = { 
	.resistance = 0.8,
	.hardness = 0.8,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_axis
	}
};
const mat_block_t mat_block_quartz_slab_d = { 
	.resistance = 6,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_quartz_stairs_d = { 
	.resistance = 0.8,
	.hardness = 0.8,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_rail_d = { 
	.resistance = 0.7,
	.hardness = 0.7,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_rail_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_red_banner_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_banner,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_rotation
	}
};
const mat_block_t mat_block_red_bed_d = { 
	.resistance = 0.2,
	.hardness = 0.2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.entity = mat_block_entity_bed,
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_bed_occupied,
		mat_state_modifier_bed_part
	}
};
const mat_block_t mat_block_red_candle_d = { 
	.resistance = 0.1,
	.hardness = 0.1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_candle_candles,
		mat_state_modifier_lit,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_red_carpet_d = { 
	.resistance = 0.1,
	.hardness = 0.1,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 60,
	.flammability = 20
};
const mat_block_t mat_block_red_concrete_d = { 
	.resistance = 1.8,
	.hardness = 1.8,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_red_concrete_powder_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shovel
	}
};
const mat_block_t mat_block_red_glazed_terracotta_d = { 
	.resistance = 1.4,
	.hardness = 1.4,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_red_mushroom_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_red_mushroom_block_d = { 
	.resistance = 0.2,
	.hardness = 0.2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 6,
	.modifiers = {
		mat_state_modifier_east,
		mat_state_modifier_down,
		mat_state_modifier_north,
		mat_state_modifier_south,
		mat_state_modifier_up,
		mat_state_modifier_west
	}
};
const mat_block_t mat_block_red_nether_brick_slab_d = { 
	.resistance = 6,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_red_nether_brick_stairs_d = { 
	.resistance = 6,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_red_nether_brick_wall_d = { 
	.resistance = 6,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 6,
	.modifiers = {
		mat_state_modifier_wall_east,
		mat_state_modifier_wall_north,
		mat_state_modifier_wall_south,
		mat_state_modifier_up,
		mat_state_modifier_waterlogged,
		mat_state_modifier_wall_west
	}
};
const mat_block_t mat_block_red_nether_bricks_d = { 
	.resistance = 6,
	.hardness = 2,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_red_sand_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shovel
	}
};
const mat_block_t mat_block_red_sandstone_d = { 
	.resistance = 0.8,
	.hardness = 0.8,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_red_sandstone_slab_d = { 
	.resistance = 6,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_red_sandstone_stairs_d = { 
	.resistance = 0.8,
	.hardness = 0.8,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_red_sandstone_wall_d = { 
	.resistance = 0.8,
	.hardness = 0.8,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 6,
	.modifiers = {
		mat_state_modifier_wall_east,
		mat_state_modifier_wall_north,
		mat_state_modifier_wall_south,
		mat_state_modifier_up,
		mat_state_modifier_waterlogged,
		mat_state_modifier_wall_west
	}
};
const mat_block_t mat_block_red_shulker_box_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_light_filtering) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_pickaxe
	},
	.entity = mat_block_entity_locational_container,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing
	}
};
const mat_block_t mat_block_red_stained_glass_d = { 
	.resistance = 0.3,
	.hardness = 0.3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_red_stained_glass_pane_d = { 
	.resistance = 0.3,
	.hardness = 0.3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_east,
		mat_state_modifier_north,
		mat_state_modifier_south,
		mat_state_modifier_waterlogged,
		mat_state_modifier_west
	}
};
const mat_block_t mat_block_red_terracotta_d = { 
	.resistance = 4.2,
	.hardness = 1.25,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_red_tulip_d = { 
	.resistance = 0,
	.hardness = 0,
	.encouragement = 60,
	.flammability = 100,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_red_wool_d = { 
	.resistance = 0.8,
	.hardness = 0.8,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 30,
	.flammability = 60,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shears
	}
};
const mat_block_t mat_block_comparator_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.entity = mat_block_entity_comparator,
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_comparator_mode,
		mat_state_modifier_powered
	}
};
const mat_block_t mat_block_redstone_lamp_d = { 
	.resistance = 0.3,
	.hardness = 0.3,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_lit
	}
};
const mat_block_t mat_block_redstone_ore_d = { 
	.resistance = 3,
	.hardness = 3,
	.best_tool = {
		.tier = mat_equipment_tier_iron,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_lit
	}
};
const mat_block_t mat_block_repeater_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_repeater_delay,
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_repeater_locked,
		mat_state_modifier_powered
	}
};
const mat_block_t mat_block_redstone_torch_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.luminance = 7,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_lit
	}
};
const mat_block_t mat_block_redstone_wire_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_redstone_east,
		mat_state_modifier_redstone_north,
		mat_state_modifier_power,
		mat_state_modifier_redstone_south,
		mat_state_modifier_redstone_west,
	}
};
const mat_block_t mat_block_repeating_command_block_d = { 
	.resistance = 3600000,
	.hardness = -1,
	.entity = mat_block_entity_command,
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_command_block_conditional,
		mat_state_modifier_facing
	}
};
const mat_block_t mat_block_respawn_anchor_d = { 
	.resistance = 1200,
	.hardness = 50,
	.best_tool = {
		.tier = mat_equipment_tier_diamond,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_respawn_anchor_charges
	}
};
const mat_block_t mat_block_rooted_dirt_d = { 
	.resistance = 0.5,
	.hardness = 0.5
};
const mat_block_t mat_block_rose_bush_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 60,
	.flammability = 100,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_plant_half
	}
};
const mat_block_t mat_block_sand_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shovel
	}
};
const mat_block_t mat_block_sandstone_d = { 
	.resistance = 0.8,
	.hardness = 0.8,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_sandstone_slab_d = { 
	.resistance = 6,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_sandstone_stairs_d = { 
	.resistance = 0.8,
	.hardness = 0.8,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_sandstone_wall_d = { 
	.resistance = 0.8,
	.hardness = 0.8,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 6,
	.modifiers = {
		mat_state_modifier_wall_east,
		mat_state_modifier_wall_north,
		mat_state_modifier_wall_south,
		mat_state_modifier_up,
		mat_state_modifier_waterlogged,
		mat_state_modifier_wall_west
	}
};
const mat_block_t mat_block_scaffolding_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 60,
	.flammability = 60,
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_scaffolding_bottom,
		mat_state_modifier_scaffolding_distance,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_sculk_sensor_d = { 
	.resistance = 1.5,
	.hardness = 1.5,
	.luminance = 1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_hoe
	},
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_power,
		mat_state_modifier_sculk_sensor_phase,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_sea_lantern_d = { 
	.resistance = 0.3,
	.hardness = 0.3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.luminance = 15
};
const mat_block_t mat_block_sea_pickle_d = { 
	.resistance = 0,
	.hardness = 0,
	.luminance = 6,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_sea_pickle_pickles,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_seagrass_d = { 
	.resistance = 0,
	.hardness = 0
};
const mat_block_t mat_block_shroomlight_d = { 
	.resistance = 1,
	.hardness = 1,
	.luminance = 15,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_hoe
	}
};
const mat_block_t mat_block_shulker_box_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_light_filtering) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_pickaxe
	},
	.entity = mat_block_entity_locational_container,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing
	}
};
const mat_block_t mat_block_skeleton_skull_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_rotation
	}
};
const mat_block_t mat_block_slime_block_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_light_filtering) | utl_arraybit(mat_block_tag_light_filtering)
	}
};
const mat_block_t mat_block_small_amethyst_bud_d = { 
	.resistance = 1.5,
	.hardness = 1.5,
	.luminance = 1,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_facing,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_small_dripleaf_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_plant_half,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_smithing_table_d = { 
	.resistance = 2.5,
	.hardness = 2.5,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	}
};
const mat_block_t mat_block_smoker_d = { 
	.resistance = 3.5,
	.hardness = 3.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.entity = mat_block_entity_furnace,
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_lit
	}
};
const mat_block_t mat_block_smooth_basalt_d = { 
	.resistance = 4.2,
	.hardness = 1.25,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_smooth_quartz_d = { 
	.resistance = 6,
	.hardness = 2,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_smooth_quartz_slab_d = { 
	.resistance = 6,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_smooth_quartz_stairs_d = { 
	.resistance = 6,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_smooth_red_sandstone_d = { 
	.resistance = 6,
	.hardness = 2,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_smooth_red_sandstone_slab_d = { 
	.resistance = 6,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_smooth_red_sandstone_stairs_d = { 
	.resistance = 6,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_smooth_sandstone_d = { 
	.resistance = 6,
	.hardness = 2,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_smooth_sandstone_slab_d = { 
	.resistance = 6,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_smooth_sandstone_stairs_d = { 
	.resistance = 6,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_smooth_stone_d = { 
	.resistance = 6,
	.hardness = 2,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_smooth_stone_slab_d = { 
	.resistance = 6,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_snow_d = { 
	.resistance = 0.1,
	.hardness = 0.1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shovel
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_snow_layers
	}
};
const mat_block_t mat_block_snow_block_d = { 
	.resistance = 0.2,
	.hardness = 0.2,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shovel
	}
};
const mat_block_t mat_block_soul_campfire_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.luminance = 10,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_container,
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_lit,
		mat_state_modifier_campfire_signal,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_soul_fire_d = { 
	.resistance = 0,
	.hardness = 0,
	.luminance = 10,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_soul_lantern_d = { 
	.resistance = 3.5,
	.hardness = 3.5,
	.luminance = 10,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_lantern_hanging,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_soul_sand_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shovel
	}
};
const mat_block_t mat_block_soul_soil_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shovel
	}
};
const mat_block_t mat_block_soul_torch_d = { 
	.resistance = 0,
	.hardness = 0,
	.luminance = 10,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_spawner_d = { 
	.resistance = 5,
	.hardness = 5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_sponge_d = { 
	.resistance = 0.6,
	.hardness = 0.6,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_hoe
	}
};
const mat_block_t mat_block_spore_blossom_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_spruce_button_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_face,
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_powered
	}
};
const mat_block_t mat_block_spruce_door_d = { 
	.resistance = 3,
	.hardness = 3,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_door_half,
		mat_state_modifier_door_hinge,
		mat_state_modifier_door_open,
		mat_state_modifier_powered
	}
};
const mat_block_t mat_block_spruce_fence_d = { 
	.resistance = 3,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 5,
	.flammability = 20,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_east,
		mat_state_modifier_north,
		mat_state_modifier_south,
		mat_state_modifier_waterlogged,
		mat_state_modifier_west
	}
};
const mat_block_t mat_block_spruce_fence_gate_d = { 
	.resistance = 3,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 5,
	.flammability = 20,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_fencegate_in_wall,
		mat_state_modifier_open,
		mat_state_modifier_powered
	}
};
const mat_block_t mat_block_spruce_leaves_d = { 
	.resistance = 0.2,
	.hardness = 0.2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_light_filtering) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 30,
	.flammability = 60,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_hoe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_distance,
		mat_state_modifier_leaves_persistant
	}
};
const mat_block_t mat_block_spruce_log_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 5,
	.flammability = 5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_axis
	}
};
const mat_block_t mat_block_spruce_planks_d = { 
	.resistance = 3,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 5,
	.flammability = 20,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	}
};
const mat_block_t mat_block_spruce_pressure_plate_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_powered
	}
};
const mat_block_t mat_block_spruce_sapling_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_sapling_stage
	}
};
const mat_block_t mat_block_spruce_sign_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_sign,
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_rotation,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_spruce_slab_d = { 
	.resistance = 3,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 5,
	.flammability = 20,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_spruce_stairs_d = { 
	.resistance = 3,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 5,
	.flammability = 20,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_spruce_trapdoor_d = { 
	.resistance = 3,
	.hardness = 3,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_trapdoor_half,
		mat_state_modifier_trapdoor_open,
		mat_state_modifier_powered,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_spruce_wood_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 5,
	.flammability = 5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_axis
	}
};
const mat_block_t mat_block_sticky_piston_d = { 
	.resistance = 1.5,
	.hardness = 1.5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_piston_extended,
		mat_state_modifier_facing
	}
};
const mat_block_t mat_block_stone_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_stone_brick_slab_d = { 
	.resistance = 6,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_stone_brick_stairs_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_stone_brick_wall_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 6,
	.modifiers = {
		mat_state_modifier_wall_east,
		mat_state_modifier_wall_north,
		mat_state_modifier_wall_south,
		mat_state_modifier_up,
		mat_state_modifier_waterlogged,
		mat_state_modifier_wall_west
	}
};
const mat_block_t mat_block_stone_bricks_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_stone_button_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_face,
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_powered
	}
};
const mat_block_t mat_block_stone_pressure_plate_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_powered
	}
};
const mat_block_t mat_block_stone_slab_d = { 
	.resistance = 6,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_stone_stairs_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_stonecutter_d = { 
	.resistance = 3.5,
	.hardness = 3.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_stripped_acacia_log_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 5,
	.flammability = 5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_axis
	}
};
const mat_block_t mat_block_stripped_acacia_wood_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 5,
	.flammability = 5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_axis
	}
};
const mat_block_t mat_block_stripped_birch_log_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 5,
	.flammability = 5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_axis
	}
};
const mat_block_t mat_block_stripped_birch_wood_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 5,
	.flammability = 5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_axis
	}
};
const mat_block_t mat_block_stripped_crimson_hyphae_d = { 
	.resistance = 2,
	.hardness = 2,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_axis
	}
};
const mat_block_t mat_block_stripped_crimson_stem_d = { 
	.resistance = 2,
	.hardness = 2,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_axis
	}
};
const mat_block_t mat_block_stripped_dark_oak_log_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 5,
	.flammability = 5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_axis
	}
};
const mat_block_t mat_block_stripped_dark_oak_wood_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 5,
	.flammability = 5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_axis
	}
};
const mat_block_t mat_block_stripped_jungle_log_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 5,
	.flammability = 5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_axis
	}
};
const mat_block_t mat_block_stripped_jungle_wood_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 5,
	.flammability = 5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_axis
	}
};
const mat_block_t mat_block_stripped_oak_log_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 5,
	.flammability = 5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_axis
	}
};
const mat_block_t mat_block_stripped_oak_wood_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 5,
	.flammability = 5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_axis
	}
};
const mat_block_t mat_block_stripped_spruce_log_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 5,
	.flammability = 5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_axis
	}
};
const mat_block_t mat_block_stripped_spruce_wood_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 5,
	.flammability = 5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_axis
	}
};
const mat_block_t mat_block_stripped_warped_hyphae_d = { 
	.resistance = 2,
	.hardness = 2,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_axis
	}
};
const mat_block_t mat_block_stripped_warped_stem_d = { 
	.resistance = 2,
	.hardness = 2,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_axis
	}
};
const mat_block_t mat_block_structure_block_d = { 
	.resistance = 3600000,
	.hardness = -1,
	.entity = mat_block_entity_structure,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_structure_block_mode
	}
};
const mat_block_t mat_block_structure_void_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_sugar_cane_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_stock_age
	}
};
const mat_block_t mat_block_sunflower_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 60,
	.flammability = 100,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_plant_half
	}
};
const mat_block_t mat_block_sweet_berry_bush_d = { 
	.resistance = 0,
	.hardness = 0,
	.encouragement = 60,
	.flammability = 100,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_sweet_berry_bush_age
	}
};
const mat_block_t mat_block_tall_grass_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 60,
	.flammability = 100,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_plant_half
	}
};
const mat_block_t mat_block_tall_seagrass_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_plant_half
	}
};
const mat_block_t mat_block_target_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.encouragement = 15,
	.flammability = 20,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_hoe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_power
	}
};
const mat_block_t mat_block_terracotta_d = { 
	.resistance = 4.2,
	.hardness = 1.25,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_tinted_glass_d = { 
	.resistance = 0.3,
	.hardness = 0.3
};
const mat_block_t mat_block_tnt_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 15,
	.flammability = 100,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_tnt_unstable
	}
};
const mat_block_t mat_block_torch_d = { 
	.resistance = 0,
	.hardness = 0,
	.luminance = 14,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_trapped_chest_d = { 
	.resistance = 2.5,
	.hardness = 2.5,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_locational_container,
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_chest_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_tripwire_d = {
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 7,
	.modifiers = {
		mat_state_modifier_tripwire_attached,
		mat_state_modifier_tripwire_disarmed,
		mat_state_modifier_east,
		mat_state_modifier_north,
		mat_state_modifier_powered,
		mat_state_modifier_south,
		mat_state_modifier_west
	}
 };
const mat_block_t mat_block_tripwire_hook_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_tripwire_attached,
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_powered
	}
};
const mat_block_t mat_block_tube_coral_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_tube_coral_block_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_tube_coral_fan_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_tuff_d = { 
	.resistance = 6,
	.hardness = 1.5,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_turtle_egg_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_turtle_egg_eggs,
		mat_state_modifier_turtle_egg_hatch
	}
};
const mat_block_t mat_block_twisting_vines_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_vine_age
	}
};
const mat_block_t mat_block_vine_d = { 
	.resistance = 0.2,
	.hardness = 0.2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 15,
	.flammability = 100,
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_east,
		mat_state_modifier_north,
		mat_state_modifier_south,
		mat_state_modifier_up,
		mat_state_modifier_west
	}
};
const mat_block_t mat_block_warped_button_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_face,
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_powered
	}
};
const mat_block_t mat_block_warped_door_d = { 
	.resistance = 3,
	.hardness = 3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_door_half,
		mat_state_modifier_door_hinge,
		mat_state_modifier_door_open,
		mat_state_modifier_powered
	}
};
const mat_block_t mat_block_warped_fence_d = { 
	.resistance = 3,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_east,
		mat_state_modifier_north,
		mat_state_modifier_south,
		mat_state_modifier_waterlogged,
		mat_state_modifier_west
	}
};
const mat_block_t mat_block_warped_fence_gate_d = { 
	.resistance = 3,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_fencegate_in_wall,
		mat_state_modifier_open,
		mat_state_modifier_powered
	}
};
const mat_block_t mat_block_warped_fungus_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_warped_hyphae_d = { 
	.resistance = 2,
	.hardness = 2,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_axis
	}
};
const mat_block_t mat_block_warped_nylium_d = { 
	.resistance = 0.4,
	.hardness = 0.4,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_warped_planks_d = { 
	.resistance = 3,
	.hardness = 2,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	}
};
const mat_block_t mat_block_warped_pressure_plate_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_powered
	}
};
const mat_block_t mat_block_warped_roots_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_warped_sign_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_sign,
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_rotation,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_warped_slab_d = { 
	.resistance = 3,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_warped_stairs_d = { 
	.resistance = 3,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_warped_stem_d = { 
	.resistance = 2,
	.hardness = 2,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_axis
	}
};
const mat_block_t mat_block_warped_trapdoor_d = { 
	.resistance = 3,
	.hardness = 3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_trapdoor_half,
		mat_state_modifier_trapdoor_open,
		mat_state_modifier_powered,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_warped_wart_block_d = {
	.resistance = 1,
	.hardness = 1,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_hoe
	}
};
const mat_block_t mat_block_water_d = { 
	.resistance = 100,
	.hardness = 100,
	.tags = {
		utl_arraybit(mat_block_tag_light_filtering) | utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_liquid_level
	}
};
const mat_block_t mat_block_waxed_copper_block_d = { 
	.resistance = 6,
	.hardness = 3,
	.best_tool = {
		.tier = mat_equipment_tier_stone,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_waxed_cut_copper_d = { 
	.resistance = 6,
	.hardness = 3,
	.best_tool = {
		.tier = mat_equipment_tier_stone,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_waxed_cut_copper_slab_d = { 
	.resistance = 6,
	.hardness = 3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_stone,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_waxed_cut_copper_stairs_d = { 
	.resistance = 6,
	.hardness = 3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_stone,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_waxed_exposed_copper_d = { 
	.resistance = 6,
	.hardness = 3,
	.best_tool = {
		.tier = mat_equipment_tier_stone,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_waxed_exposed_cut_copper_d = { 
	.resistance = 6,
	.hardness = 3,
	.best_tool = {
		.tier = mat_equipment_tier_stone,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_waxed_exposed_cut_copper_slab_d = { 
	.resistance = 6,
	.hardness = 3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_stone,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_waxed_exposed_cut_copper_stairs_d = { 
	.resistance = 6,
	.hardness = 3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_stone,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_waxed_oxidized_copper_d = { 
	.resistance = 6,
	.hardness = 3,
	.best_tool = {
		.tier = mat_equipment_tier_stone,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_waxed_oxidized_cut_copper_d = { 
	.resistance = 6,
	.hardness = 3,
	.best_tool = {
		.tier = mat_equipment_tier_stone,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_waxed_oxidized_cut_copper_slab_d = { 
	.resistance = 6,
	.hardness = 3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_stone,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_waxed_oxidized_cut_copper_stairs_d = { 
	.resistance = 6,
	.hardness = 3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_stone,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_waxed_weathered_copper_d = { 
	.resistance = 6,
	.hardness = 3,
	.best_tool = {
		.tier = mat_equipment_tier_stone,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_waxed_weathered_cut_copper_d = { 
	.resistance = 6,
	.hardness = 3,
	.best_tool = {
		.tier = mat_equipment_tier_stone,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_waxed_weathered_cut_copper_slab_d = { 
	.resistance = 6,
	.hardness = 3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_stone,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_waxed_weathered_cut_copper_stairs_d = { 
	.resistance = 6,
	.hardness = 3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_stone,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_weathered_copper_d = { 
	.resistance = 6,
	.hardness = 3,
	.best_tool = {
		.tier = mat_equipment_tier_stone,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_weathered_cut_copper_d = { 
	.resistance = 6,
	.hardness = 3,
	.best_tool = {
		.tier = mat_equipment_tier_stone,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_weathered_cut_copper_slab_d = { 
	.resistance = 6,
	.hardness = 3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_stone,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_slab_type,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_weathered_cut_copper_stairs_d = { 
	.resistance = 6,
	.hardness = 3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_stone,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 4,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_stairs_half,
		mat_state_modifier_stairs_shape,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_weeping_vines_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_vine_age
	}
};
const mat_block_t mat_block_wet_sponge_d = { 
	.resistance = 0.6,
	.hardness = 0.6,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_hoe
	}
};
const mat_block_t mat_block_wheat_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_crop_age
	}
};
const mat_block_t mat_block_white_banner_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_banner,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_rotation
	}
};
const mat_block_t mat_block_white_bed_d = { 
	.resistance = 0.2,
	.hardness = 0.2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.entity = mat_block_entity_bed,
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_bed_occupied,
		mat_state_modifier_bed_part
	}
};
const mat_block_t mat_block_white_candle_d = { 
	.resistance = 0.1,
	.hardness = 0.1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_candle_candles,
		mat_state_modifier_lit,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_white_carpet_d = { 
	.resistance = 0.1,
	.hardness = 0.1,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 60,
	.flammability = 20
};
const mat_block_t mat_block_white_concrete_d = { 
	.resistance = 1.8,
	.hardness = 1.8,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_white_concrete_powder_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shovel
	}
};
const mat_block_t mat_block_white_glazed_terracotta_d = { 
	.resistance = 1.4,
	.hardness = 1.4,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_white_shulker_box_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_light_filtering) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_pickaxe
	},
	.entity = mat_block_entity_locational_container,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing
	}
};
const mat_block_t mat_block_white_stained_glass_d = { 
	.resistance = 0.3,
	.hardness = 0.3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_white_stained_glass_pane_d = { 
	.resistance = 0.3,
	.hardness = 0.3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_east,
		mat_state_modifier_north,
		mat_state_modifier_south,
		mat_state_modifier_waterlogged,
		mat_state_modifier_west
	}
};
const mat_block_t mat_block_white_terracotta_d = { 
	.resistance = 4.2,
	.hardness = 1.25,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_white_tulip_d = { 
	.resistance = 0,
	.hardness = 0,
	.encouragement = 60,
	.flammability = 100,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_white_wool_d = { 
	.resistance = 0.8,
	.hardness = 0.8,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 30,
	.flammability = 60,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shears
	}
};
const mat_block_t mat_block_wither_rose_d = { 
	.resistance = 0,
	.hardness = 0,
	.encouragement = 60,
	.flammability = 100,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_wither_skeleton_skull_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_rotation
	}
};
const mat_block_t mat_block_yellow_banner_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_banner,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_rotation
	}
};
const mat_block_t mat_block_yellow_bed_d = { 
	.resistance = 0.2,
	.hardness = 0.2,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.entity = mat_block_entity_bed,
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_bed_occupied,
		mat_state_modifier_bed_part
	}
};
const mat_block_t mat_block_yellow_candle_d = { 
	.resistance = 0.1,
	.hardness = 0.1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_candle_candles,
		mat_state_modifier_lit,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_yellow_carpet_d = { 
	.resistance = 0.1,
	.hardness = 0.1,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava) | utl_arraybit(mat_block_tag_transparent)
	},
	.encouragement = 60,
	.flammability = 20
};
const mat_block_t mat_block_yellow_concrete_d = { 
	.resistance = 1.8,
	.hardness = 1.8,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_yellow_concrete_powder_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shovel
	}
};
const mat_block_t mat_block_yellow_glazed_terracotta_d = { 
	.resistance = 1.4,
	.hardness = 1.4,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_yellow_shulker_box_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_light_filtering) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_pickaxe
	},
	.entity = mat_block_entity_locational_container,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing
	}
};
const mat_block_t mat_block_yellow_stained_glass_d = { 
	.resistance = 0.3,
	.hardness = 0.3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_yellow_stained_glass_pane_d = { 
	.resistance = 0.3,
	.hardness = 0.3,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 5,
	.modifiers = {
		mat_state_modifier_east,
		mat_state_modifier_north,
		mat_state_modifier_south,
		mat_state_modifier_waterlogged,
		mat_state_modifier_west
	}
};
const mat_block_t mat_block_yellow_terracotta_d = { 
	.resistance = 4.2,
	.hardness = 1.25,
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_yellow_wool_d = { 
	.resistance = 0.8,
	.hardness = 0.8,
	.tags = {
		utl_arraybit(mat_block_tag_catches_fire_from_lava)
	},
	.encouragement = 30,
	.flammability = 60,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_shears
	}
};
const mat_block_t mat_block_zombie_head_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_rotation
	}
};
const mat_block_t mat_block_end_portal_d = {
	.resistance = 3600000,
	.hardness = -1,
	.luminance = 15,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.entity = mat_block_entity_end_particles
};
const mat_block_t mat_block_frosted_ice_d = {
	.resistance = 0.5,
	.hardness = 0.5,
	.tags = {
		utl_arraybit(mat_block_tag_light_filtering) | utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_frosted_ice_age
	}
};
const mat_block_t mat_block_piston_head_d = {
	.resistance = 1.5,
	.hardness = 1.5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 3,
	.modifiers = {
		mat_state_modifier_facing,
		mat_state_modifier_piston_short,
		mat_state_modifier_piston_type,
	}
};
const mat_block_t mat_block_nether_portal_d = {
	.resistance = 0,
	.hardness = -1,
	.luminance = 11,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_cardinal_axis
	}
};
const mat_block_t mat_block_end_gateway_d = {
	.resistance = 3600000,
	.hardness = -1,
	.tags = {
		utl_arraybit(mat_block_tag_light_filtering) | utl_arraybit(mat_block_tag_transparent)
	},
	.luminance = 15,
	.entity = mat_block_entity_gateway
};
const mat_block_t mat_block_big_dripleaf_stem_d = {
	.resistance = 0.1,
	.hardness = 0.1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_bubble_column_d = {
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_light_filtering) | utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_bubble_column_drag
	}
};
const mat_block_t mat_block_moving_piston_d = { 
	.resistance = 0,
	.hardness = -1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.entity = mat_block_entity_piston_extension,
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_facing,
		mat_state_modifier_piston_type
	}
};
const mat_block_t mat_block_wall_torch_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_oak_wall_sign_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_sign,
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_spruce_wall_sign_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_sign,
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_birch_wall_sign_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_sign,
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_acacia_wall_sign_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_sign,
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_jungle_wall_sign_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_sign,
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_dark_oak_wall_sign_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_sign,
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_redstone_wall_torch_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_lit
	}
};
const mat_block_t mat_block_soul_wall_torch_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_attached_pumpkin_stem_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_attached_melon_stem_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_water_cauldron_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_cauldron_level
	}
};
const mat_block_t mat_block_lava_cauldron_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	}
};
const mat_block_t mat_block_powder_snow_cauldron_d = { 
	.resistance = 2,
	.hardness = 2,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_wood,
		.type = mat_equipment_type_pickaxe
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_cauldron_level
	}
};
const mat_block_t mat_block_potted_oak_sapling_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_potted_spruce_sapling_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_potted_birch_sapling_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_potted_jungle_sapling_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_potted_acacia_sapling_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_potted_dark_oak_sapling_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_potted_fern_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_potted_dandelion_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_potted_poppy_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_potted_blue_orchid_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_potted_allium_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_potted_azure_bluet_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_potted_red_tulip_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_potted_orange_tulip_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_potted_white_tulip_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_potted_pink_tulip_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_potted_oxeye_daisy_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_potted_cornflower_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_potted_lily_of_the_valley_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_potted_wither_rose_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_potted_red_mushroom_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_potted_brown_mushroom_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_potted_dead_bush_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_potted_cactus_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_skeleton_wall_skull_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_wither_skeleton_wall_skull_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_zombie_wall_head_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_player_wall_head_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.entity = mat_block_entity_head,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_creeper_wall_head_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_dragon_wall_head_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_white_wall_banner_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_banner,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_orange_wall_banner_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_banner,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_magenta_wall_banner_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_banner,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_light_blue_wall_banner_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_banner,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_yellow_wall_banner_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_banner,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_lime_wall_banner_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_banner,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_pink_wall_banner_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_banner,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_gray_wall_banner_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_banner,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_light_gray_wall_banner_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_banner,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_cyan_wall_banner_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_banner,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_purple_wall_banner_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_banner,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_blue_wall_banner_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_banner,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_brown_wall_banner_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_banner,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_green_wall_banner_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_banner,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_red_wall_banner_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_banner,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_black_wall_banner_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_banner,
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_facing_cardinal
	}
};
const mat_block_t mat_block_dead_tube_coral_wall_fan_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_dead_brain_coral_wall_fan_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_dead_bubble_coral_wall_fan_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_dead_fire_coral_wall_fan_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_dead_horn_coral_wall_fan_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_tube_coral_wall_fan_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_brain_coral_wall_fan_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_bubble_coral_wall_fan_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_fire_coral_wall_fan_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_horn_coral_wall_fan_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_potted_bamboo_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_void_air_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_cave_air_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_weeping_vines_plant_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_twisting_vines_plant_d = {
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_crimson_wall_sign_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_sign,
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_warped_wall_sign_d = { 
	.resistance = 1,
	.hardness = 1,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_axe
	},
	.entity = mat_block_entity_sign,
	.modifiers_count = 2,
	.modifiers = {
		mat_state_modifier_facing_cardinal,
		mat_state_modifier_waterlogged
	}
};
const mat_block_t mat_block_potted_crimson_fungus_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_potted_warped_fungus_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_potted_crimson_roots_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_potted_warped_roots_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_candle_cake_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_lit
	}
};
const mat_block_t mat_block_white_candle_cake_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_lit
	}
};
const mat_block_t mat_block_orange_candle_cake_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_lit
	}
};
const mat_block_t mat_block_magenta_candle_cake_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_lit
	}
};
const mat_block_t mat_block_light_blue_candle_cake_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_lit
	}
};
const mat_block_t mat_block_yellow_candle_cake_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_lit
	}
};
const mat_block_t mat_block_lime_candle_cake_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_lit
	}
};
const mat_block_t mat_block_pink_candle_cake_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_lit
	}
};
const mat_block_t mat_block_gray_candle_cake_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_lit
	}
};
const mat_block_t mat_block_light_gray_candle_cake_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_lit
	}
};
const mat_block_t mat_block_cyan_candle_cake_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_lit
	}
};
const mat_block_t mat_block_purple_candle_cake_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_lit
	}
};
const mat_block_t mat_block_blue_candle_cake_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_lit
	}
};
const mat_block_t mat_block_brown_candle_cake_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_lit
	}
};
const mat_block_t mat_block_green_candle_cake_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_lit
	}
};
const mat_block_t mat_block_red_candle_cake_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_lit
	}
};
const mat_block_t mat_block_black_candle_cake_d = { 
	.resistance = 0.5,
	.hardness = 0.5,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_lit
	}
};
const mat_block_t mat_block_cave_vines_plant_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	},
	.modifiers_count = 1,
	.modifiers = {
		mat_state_modifier_cave_vines_berries
	}
};
const mat_block_t mat_block_potted_azalea_bush_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_potted_flowering_azalea_bush_d = { 
	.resistance = 0,
	.hardness = 0,
	.tags = {
		utl_arraybit(mat_block_tag_transparent)
	}
};
const mat_block_t mat_block_dried_kelp_block_d = {
	.resistance = 2.5,
	.hardness = 0.5,
	.best_tool = {
		.tier = mat_equipment_tier_any,
		.type = mat_equipment_type_hoe
	},
	.encouragement = 30,
	.flammability = 60
};

const mat_block_t* mat_blocks[] = {
	&mat_block_air_d,
	&mat_block_acacia_button_d,
	&mat_block_acacia_door_d,
	&mat_block_acacia_fence_d,
	&mat_block_acacia_fence_gate_d,
	&mat_block_acacia_leaves_d,
	&mat_block_acacia_log_d,
	&mat_block_acacia_planks_d,
	&mat_block_acacia_pressure_plate_d,
	&mat_block_acacia_sapling_d,
	&mat_block_acacia_sign_d,
	&mat_block_acacia_slab_d,
	&mat_block_acacia_stairs_d,
	&mat_block_acacia_trapdoor_d,
	&mat_block_acacia_wood_d,
	&mat_block_activator_rail_d,
	&mat_block_allium_d,
	&mat_block_amethyst_cluster_d,
	&mat_block_ancient_debris_d,
	&mat_block_andesite_d,
	&mat_block_andesite_slab_d,
	&mat_block_andesite_stairs_d,
	&mat_block_andesite_wall_d,
	&mat_block_anvil_d,
	&mat_block_azalea_d,
	&mat_block_azalea_leaves_d,
	&mat_block_azure_bluet_d,
	&mat_block_bamboo_d,
	&mat_block_bamboo_sapling_d,
	&mat_block_beetroots_d,
	&mat_block_barrel_d,
	&mat_block_barrier_d,
	&mat_block_basalt_d,
	&mat_block_beacon_d,
	&mat_block_bedrock_d,
	&mat_block_beehive_d,
	&mat_block_bee_nest_d,
	&mat_block_bell_d,
	&mat_block_big_dripleaf_d,
	&mat_block_birch_button_d,
	&mat_block_birch_door_d,
	&mat_block_birch_fence_d,
	&mat_block_birch_fence_gate_d,
	&mat_block_birch_leaves_d,
	&mat_block_birch_log_d,
	&mat_block_birch_planks_d,
	&mat_block_birch_pressure_plate_d,
	&mat_block_birch_sapling_d,
	&mat_block_birch_sign_d,
	&mat_block_birch_slab_d,
	&mat_block_birch_stairs_d,
	&mat_block_birch_trapdoor_d,
	&mat_block_birch_wood_d,
	&mat_block_black_banner_d,
	&mat_block_black_bed_d,
	&mat_block_black_candle_d,
	&mat_block_black_carpet_d,
	&mat_block_black_concrete_d,
	&mat_block_black_concrete_powder_d,
	&mat_block_black_glazed_terracotta_d,
	&mat_block_black_shulker_box_d,
	&mat_block_black_stained_glass_d,
	&mat_block_black_stained_glass_pane_d,
	&mat_block_black_terracotta_d,
	&mat_block_black_wool_d,
	&mat_block_blackstone_d,
	&mat_block_blackstone_slab_d,
	&mat_block_blackstone_stairs_d,
	&mat_block_blackstone_wall_d,
	&mat_block_blast_furnace_d,
	&mat_block_amethyst_block_d,
	&mat_block_coal_block_d,
	&mat_block_copper_block_d,
	&mat_block_diamond_block_d,
	&mat_block_block_of_emerald_d,
	&mat_block_gold_block_d,
	&mat_block_iron_block_d,
	&mat_block_lapis_block_d,
	&mat_block_netherite_block_d,
	&mat_block_quartz_block_d,
	&mat_block_raw_copper_block_d,
	&mat_block_raw_gold_block_d,
	&mat_block_raw_iron_block_d,
	&mat_block_redstone_block_d,
	&mat_block_blue_banner_d,
	&mat_block_blue_bed_d,
	&mat_block_blue_candle_d,
	&mat_block_blue_carpet_d,
	&mat_block_blue_concrete_d,
	&mat_block_blue_concrete_powder_d,
	&mat_block_blue_glazed_terracotta_d,
	&mat_block_blue_ice_d,
	&mat_block_blue_orchid_d,
	&mat_block_blue_shulker_box_d,
	&mat_block_blue_stained_glass_d,
	&mat_block_blue_stained_glass_pane_d,
	&mat_block_blue_terracotta_d,
	&mat_block_blue_wool_d,
	&mat_block_bone_block_d,
	&mat_block_bookshelf_d,
	&mat_block_brain_coral_d,
	&mat_block_brain_coral_block_d,
	&mat_block_brain_coral_fan_d,
	&mat_block_brewing_stand_d,
	&mat_block_brick_slab_d,
	&mat_block_brick_stairs_d,
	&mat_block_brick_wall_d,
	&mat_block_bricks_d,
	&mat_block_brown_banner_d,
	&mat_block_brown_bed_d,
	&mat_block_brown_candle_d,
	&mat_block_brown_carpet_d,
	&mat_block_brown_concrete_d,
	&mat_block_brown_concrete_powder_d,
	&mat_block_brown_glazed_terracotta_d,
	&mat_block_brown_mushroom_d,
	&mat_block_brown_mushroom_block_d,
	&mat_block_brown_shulker_box_d,
	&mat_block_brown_stained_glass_d,
	&mat_block_brown_stained_glass_pane_d,
	&mat_block_brown_terracotta_d,
	&mat_block_brown_wool_d,
	&mat_block_bubble_coral_d,
	&mat_block_bubble_coral_block_d,
	&mat_block_bubble_coral_fan_d,
	&mat_block_budding_amethyst_d,
	&mat_block_cactus_d,
	&mat_block_cake_d,
	&mat_block_calcite_d,
	&mat_block_campfire_d,
	&mat_block_candle_d,
	&mat_block_carrots_d,
	&mat_block_cartography_table_d,
	&mat_block_carved_pumpkin_d,
	&mat_block_cauldron_d,
	&mat_block_cave_vines_d,
	&mat_block_chain_d,
	&mat_block_chain_command_block_d,
	&mat_block_chest_d,
	&mat_block_chipped_anvil_d,
	&mat_block_chiseled_deepslate_d,
	&mat_block_chiseled_nether_bricks_d,
	&mat_block_chiseled_polished_blackstone_d,
	&mat_block_chiseled_quartz_block_d,
	&mat_block_chiseled_red_sandstone_d,
	&mat_block_chiseled_sandstone_d,
	&mat_block_chiseled_stone_bricks_d,
	&mat_block_chorus_flower_d,
	&mat_block_chorus_plant_d,
	&mat_block_clay_d,
	&mat_block_coal_ore_d,
	&mat_block_coarse_dirt_d,
	&mat_block_cobbled_deepslate_d,
	&mat_block_cobbled_deepslate_slab_d,
	&mat_block_cobbled_deepslate_stairs_d,
	&mat_block_cobbled_deepslate_wall_d,
	&mat_block_cobblestone_d,
	&mat_block_cobblestone_slab_d,
	&mat_block_cobblestone_stairs_d,
	&mat_block_cobblestone_wall_d,
	&mat_block_cobweb_d,
	&mat_block_cocoa_d,
	&mat_block_command_block_d,
	&mat_block_composter_d,
	&mat_block_conduit_d,
	&mat_block_copper_ore_d,
	&mat_block_cornflower_d,
	&mat_block_cracked_deepslate_bricks_d,
	&mat_block_cracked_deepslate_tiles_d,
	&mat_block_cracked_nether_bricks_d,
	&mat_block_cracked_polished_blackstone_bricks_d,
	&mat_block_cracked_stone_bricks_d,
	&mat_block_crafting_table_d,
	&mat_block_creeper_head_d,
	&mat_block_crimson_button_d,
	&mat_block_crimson_door_d,
	&mat_block_crimson_fence_d,
	&mat_block_crimson_fence_gate_d,
	&mat_block_crimson_fungus_d,
	&mat_block_crimson_hyphae_d,
	&mat_block_crimson_nylium_d,
	&mat_block_crimson_planks_d,
	&mat_block_crimson_pressure_plate_d,
	&mat_block_crimson_roots_d,
	&mat_block_crimson_sign_d,
	&mat_block_crimson_slab_d,
	&mat_block_crimson_stairs_d,
	&mat_block_crimson_stem_d,
	&mat_block_crimson_trapdoor_d,
	&mat_block_crying_obsidian_d,
	&mat_block_cut_copper_d,
	&mat_block_cut_copper_slab_d,
	&mat_block_cut_copper_stairs_d,
	&mat_block_cut_red_sandstone_d,
	&mat_block_cut_red_sandstone_slab_d,
	&mat_block_cut_sandstone_d,
	&mat_block_cut_sandstone_slab_d,
	&mat_block_cyan_banner_d,
	&mat_block_cyan_bed_d,
	&mat_block_cyan_candle_d,
	&mat_block_cyan_carpet_d,
	&mat_block_cyan_concrete_d,
	&mat_block_cyan_concrete_powder_d,
	&mat_block_cyan_glazed_terracotta_d,
	&mat_block_cyan_shulker_box_d,
	&mat_block_cyan_stained_glass_d,
	&mat_block_cyan_stained_glass_pane_d,
	&mat_block_cyan_terracotta_d,
	&mat_block_cyan_wool_d,
	&mat_block_damaged_anvil_d,
	&mat_block_dandelion_d,
	&mat_block_dark_oak_button_d,
	&mat_block_dark_oak_door_d,
	&mat_block_dark_oak_fence_d,
	&mat_block_dark_oak_fence_gate_d,
	&mat_block_dark_oak_leaves_d,
	&mat_block_dark_oak_log_d,
	&mat_block_dark_oak_planks_d,
	&mat_block_dark_oak_pressure_plate_d,
	&mat_block_dark_oak_sapling_d,
	&mat_block_dark_oak_sign_d,
	&mat_block_dark_oak_slab_d,
	&mat_block_dark_oak_stairs_d,
	&mat_block_dark_oak_trapdoor_d,
	&mat_block_dark_oak_wood_d,
	&mat_block_dark_prismarine_d,
	&mat_block_dark_prismarine_slab_d,
	&mat_block_dark_prismarine_stairs_d,
	&mat_block_daylight_detector_d,
	&mat_block_dead_brain_coral_d,
	&mat_block_dead_brain_coral_block_d,
	&mat_block_dead_brain_coral_fan_d,
	&mat_block_dead_bubble_coral_d,
	&mat_block_dead_bubble_coral_block_d,
	&mat_block_dead_bubble_coral_fan_d,
	&mat_block_dead_bush_d,
	&mat_block_dead_fire_coral_d,
	&mat_block_dead_fire_coral_block_d,
	&mat_block_dead_fire_coral_fan_d,
	&mat_block_dead_horn_coral_d,
	&mat_block_dead_horn_coral_block_d,
	&mat_block_dead_horn_coral_fan_d,
	&mat_block_dead_tube_coral_d,
	&mat_block_dead_tube_coral_block_d,
	&mat_block_dead_tube_coral_fan_d,
	&mat_block_deepslate_d,
	&mat_block_deepslate_bricks_d,
	&mat_block_deepslate_brick_slab_d,
	&mat_block_deepslate_brick_stairs_d,
	&mat_block_deepslate_brick_wall_d,
	&mat_block_deepslate_coal_ore_d,
	&mat_block_deepslate_copper_ore_d,
	&mat_block_deepslate_diamond_ore_d,
	&mat_block_deepslate_emerald_ore_d,
	&mat_block_deepslate_gold_ore_d,
	&mat_block_deepslate_iron_ore_d,
	&mat_block_deepslate_lapis_ore_d,
	&mat_block_deepslate_redstone_ore_d,
	&mat_block_deepslate_tiles_d,
	&mat_block_deepslate_tile_slab_d,
	&mat_block_deepslate_tile_stairs_d,
	&mat_block_deepslate_tile_wall_d,
	&mat_block_detector_rail_d,
	&mat_block_diamond_ore_d,
	&mat_block_diorite_d,
	&mat_block_diorite_slab_d,
	&mat_block_diorite_stairs_d,
	&mat_block_diorite_wall_d,
	&mat_block_dirt_d,
	&mat_block_dirt_path_d,
	&mat_block_dispenser_d,
	&mat_block_dragon_egg_d,
	&mat_block_dragon_head_d,
	&mat_block_kelp_d,
	&mat_block_dripstone_block_d,
	&mat_block_dropper_d,
	&mat_block_emerald_ore_d,
	&mat_block_enchanting_table_d,
	&mat_block_end_portal_frame_d,
	&mat_block_end_rod_d,
	&mat_block_end_stone_d,
	&mat_block_end_stone_brick_slab_d,
	&mat_block_end_stone_brick_stairs_d,
	&mat_block_end_stone_brick_wall_d,
	&mat_block_end_stone_bricks_d,
	&mat_block_ender_chest_d,
	&mat_block_exposed_copper_d,
	&mat_block_exposed_cut_copper_d,
	&mat_block_exposed_cut_copper_slab_d,
	&mat_block_exposed_cut_copper_stairs_d,
	&mat_block_farmland_d,
	&mat_block_fern_d,
	&mat_block_fire_d,
	&mat_block_fire_coral_d,
	&mat_block_fire_coral_block_d,
	&mat_block_fire_coral_fan_d,
	&mat_block_fletching_table_d,
	&mat_block_flower_pot_d,
	&mat_block_flowering_azalea_d,
	&mat_block_flowering_azalea_leaves_d,
	&mat_block_furnace_d,
	&mat_block_gilded_blackstone_d,
	&mat_block_glass_d,
	&mat_block_glass_pane_d,
	&mat_block_glow_lichen_d,
	&mat_block_glowstone_d,
	&mat_block_gold_ore_d,
	&mat_block_granite_d,
	&mat_block_granite_slab_d,
	&mat_block_granite_stairs_d,
	&mat_block_granite_wall_d,
	&mat_block_grass_d,
	&mat_block_grass_block_d,
	&mat_block_gravel_d,
	&mat_block_gray_banner_d,
	&mat_block_gray_bed_d,
	&mat_block_gray_candle_d,
	&mat_block_gray_carpet_d,
	&mat_block_gray_concrete_d,
	&mat_block_gray_concrete_powder_d,
	&mat_block_gray_glazed_terracotta_d,
	&mat_block_gray_shulker_box_d,
	&mat_block_gray_stained_glass_d,
	&mat_block_gray_stained_glass_pane_d,
	&mat_block_gray_terracotta_d,
	&mat_block_gray_wool_d,
	&mat_block_green_banner_d,
	&mat_block_green_bed_d,
	&mat_block_green_candle_d,
	&mat_block_green_carpet_d,
	&mat_block_green_concrete_d,
	&mat_block_green_concrete_powder_d,
	&mat_block_green_glazed_terracotta_d,
	&mat_block_green_shulker_box_d,
	&mat_block_green_stained_glass_d,
	&mat_block_green_stained_glass_pane_d,
	&mat_block_green_terracotta_d,
	&mat_block_green_wool_d,
	&mat_block_grindstone_d,
	&mat_block_hanging_roots_d,
	&mat_block_hay_block_d,
	&mat_block_heavy_weighted_pressure_plate_d,
	&mat_block_honey_block_d,
	&mat_block_honeycomb_block_d,
	&mat_block_hopper_d,
	&mat_block_horn_coral_d,
	&mat_block_horn_coral_block_d,
	&mat_block_horn_coral_fan_d,
	&mat_block_ice_d,
	&mat_block_infested_chiseled_stone_bricks_d,
	&mat_block_infested_cobblestone_d,
	&mat_block_infested_cracked_stone_bricks_d,
	&mat_block_infested_deepslate_d,
	&mat_block_infested_mossy_stone_bricks_d,
	&mat_block_infested_stone_d,
	&mat_block_infested_stone_bricks_d,
	&mat_block_iron_bars_d,
	&mat_block_iron_door_d,
	&mat_block_iron_ore_d,
	&mat_block_iron_trapdoor_d,
	&mat_block_jack_o_lantern_d,
	&mat_block_jigsaw_d,
	&mat_block_jukebox_d,
	&mat_block_jungle_button_d,
	&mat_block_jungle_door_d,
	&mat_block_jungle_fence_d,
	&mat_block_jungle_fence_gate_d,
	&mat_block_jungle_leaves_d,
	&mat_block_jungle_log_d,
	&mat_block_jungle_planks_d,
	&mat_block_jungle_pressure_plate_d,
	&mat_block_jungle_sapling_d,
	&mat_block_jungle_sign_d,
	&mat_block_jungle_slab_d,
	&mat_block_jungle_stairs_d,
	&mat_block_jungle_trapdoor_d,
	&mat_block_jungle_wood_d,
	&mat_block_kelp_plant_d,
	&mat_block_ladder_d,
	&mat_block_lantern_d,
	&mat_block_lapis_ore_d,
	&mat_block_large_amethyst_bud_d,
	&mat_block_large_fern_d,
	&mat_block_lava_d,
	&mat_block_lectern_d,
	&mat_block_lever_d,
	&mat_block_light_d,
	&mat_block_light_blue_banner_d,
	&mat_block_light_blue_bed_d,
	&mat_block_light_blue_candle_d,
	&mat_block_light_blue_carpet_d,
	&mat_block_light_blue_concrete_d,
	&mat_block_light_blue_concrete_powder_d,
	&mat_block_light_blue_glazed_terracotta_d,
	&mat_block_light_blue_shulker_box_d,
	&mat_block_light_blue_stained_glass_d,
	&mat_block_light_blue_stained_glass_pane_d,
	&mat_block_light_blue_terracotta_d,
	&mat_block_light_blue_wool_d,
	&mat_block_light_gray_banner_d,
	&mat_block_light_gray_bed_d,
	&mat_block_light_gray_candle_d,
	&mat_block_light_gray_carpet_d,
	&mat_block_light_gray_concrete_d,
	&mat_block_light_gray_concrete_powder_d,
	&mat_block_light_gray_glazed_terracotta_d,
	&mat_block_light_gray_shulker_box_d,
	&mat_block_light_gray_stained_glass_d,
	&mat_block_light_gray_stained_glass_pane_d,
	&mat_block_light_gray_terracotta_d,
	&mat_block_light_gray_wool_d,
	&mat_block_light_weighted_pressure_plate_d,
	&mat_block_lightning_rod_d,
	&mat_block_lilac_d,
	&mat_block_lily_of_the_valley_d,
	&mat_block_lily_pad_d,
	&mat_block_lime_banner_d,
	&mat_block_lime_bed_d,
	&mat_block_lime_candle_d,
	&mat_block_lime_carpet_d,
	&mat_block_lime_concrete_d,
	&mat_block_lime_concrete_powder_d,
	&mat_block_lime_glazed_terracotta_d,
	&mat_block_lime_shulker_box_d,
	&mat_block_lime_stained_glass_d,
	&mat_block_lime_stained_glass_pane_d,
	&mat_block_lime_terracotta_d,
	&mat_block_lime_wool_d,
	&mat_block_lodestone_d,
	&mat_block_loom_d,
	&mat_block_magenta_banner_d,
	&mat_block_magenta_bed_d,
	&mat_block_magenta_candle_d,
	&mat_block_magenta_carpet_d,
	&mat_block_magenta_concrete_d,
	&mat_block_magenta_concrete_powder_d,
	&mat_block_magenta_glazed_terracotta_d,
	&mat_block_magenta_shulker_box_d,
	&mat_block_magenta_stained_glass_d,
	&mat_block_magenta_stained_glass_pane_d,
	&mat_block_magenta_terracotta_d,
	&mat_block_magenta_wool_d,
	&mat_block_magma_block_d,
	&mat_block_medium_amethyst_bud_d,
	&mat_block_melon_d,
	&mat_block_melon_stem_d,
	&mat_block_moss_block_d,
	&mat_block_moss_carpet_d,
	&mat_block_mossy_cobblestone_d,
	&mat_block_mossy_cobblestone_slab_d,
	&mat_block_mossy_cobblestone_stairs_d,
	&mat_block_mossy_cobblestone_wall_d,
	&mat_block_mossy_stone_brick_slab_d,
	&mat_block_mossy_stone_brick_stairs_d,
	&mat_block_mossy_stone_brick_wall_d,
	&mat_block_mossy_stone_bricks_d,
	&mat_block_mushroom_stem_d,
	&mat_block_mycelium_d,
	&mat_block_nether_brick_fence_d,
	&mat_block_nether_brick_slab_d,
	&mat_block_nether_brick_stairs_d,
	&mat_block_nether_brick_wall_d,
	&mat_block_nether_bricks_d,
	&mat_block_nether_gold_ore_d,
	&mat_block_nether_quartz_ore_d,
	&mat_block_nether_sprouts_d,
	&mat_block_nether_wart_d,
	&mat_block_nether_wart_block_d,
	&mat_block_netherrack_d,
	&mat_block_note_block_d,
	&mat_block_oak_button_d,
	&mat_block_oak_door_d,
	&mat_block_oak_fence_d,
	&mat_block_oak_fence_gate_d,
	&mat_block_oak_leaves_d,
	&mat_block_oak_log_d,
	&mat_block_oak_planks_d,
	&mat_block_oak_pressure_plate_d,
	&mat_block_oak_sapling_d,
	&mat_block_oak_sign_d,
	&mat_block_oak_slab_d,
	&mat_block_oak_stairs_d,
	&mat_block_oak_trapdoor_d,
	&mat_block_oak_wood_d,
	&mat_block_observer_d,
	&mat_block_obsidian_d,
	&mat_block_orange_banner_d,
	&mat_block_orange_bed_d,
	&mat_block_orange_candle_d,
	&mat_block_orange_carpet_d,
	&mat_block_orange_concrete_d,
	&mat_block_orange_concrete_powder_d,
	&mat_block_orange_glazed_terracotta_d,
	&mat_block_orange_shulker_box_d,
	&mat_block_orange_stained_glass_d,
	&mat_block_orange_stained_glass_pane_d,
	&mat_block_orange_terracotta_d,
	&mat_block_orange_tulip_d,
	&mat_block_orange_wool_d,
	&mat_block_oxeye_daisy_d,
	&mat_block_oxidized_copper_d,
	&mat_block_oxidized_cut_copper_d,
	&mat_block_oxidized_cut_copper_slab_d,
	&mat_block_oxidized_cut_copper_stairs_d,
	&mat_block_packed_ice_d,
	&mat_block_peony_d,
	&mat_block_petrified_oak_slab_d,
	&mat_block_pink_banner_d,
	&mat_block_pink_bed_d,
	&mat_block_pink_candle_d,
	&mat_block_pink_carpet_d,
	&mat_block_pink_concrete_d,
	&mat_block_pink_concrete_powder_d,
	&mat_block_pink_glazed_terracotta_d,
	&mat_block_pink_shulker_box_d,
	&mat_block_pink_stained_glass_d,
	&mat_block_pink_stained_glass_pane_d,
	&mat_block_pink_terracotta_d,
	&mat_block_pink_tulip_d,
	&mat_block_pink_wool_d,
	&mat_block_piston_d,
	&mat_block_player_head_d,
	&mat_block_podzol_d,
	&mat_block_pointed_dripstone_d,
	&mat_block_polished_andesite_d,
	&mat_block_polished_andesite_slab_d,
	&mat_block_polished_andesite_stairs_d,
	&mat_block_polished_basalt_d,
	&mat_block_polished_blackstone_d,
	&mat_block_polished_blackstone_brick_slab_d,
	&mat_block_polished_blackstone_brick_stairs_d,
	&mat_block_polished_blackstone_brick_wall_d,
	&mat_block_polished_blackstone_bricks_d,
	&mat_block_polished_blackstone_button_d,
	&mat_block_polished_blackstone_pressure_plate_d,
	&mat_block_polished_blackstone_slab_d,
	&mat_block_polished_blackstone_stairs_d,
	&mat_block_polished_blackstone_wall_d,
	&mat_block_polished_diorite_d,
	&mat_block_polished_diorite_slab_d,
	&mat_block_polished_diorite_stairs_d,
	&mat_block_polished_granite_d,
	&mat_block_polished_granite_slab_d,
	&mat_block_polished_granite_stairs_d,
	&mat_block_polished_deepslate_d,
	&mat_block_polished_deepslate_slab_d,
	&mat_block_polished_deepslate_stairs_d,
	&mat_block_polished_deepslate_wall_d,
	&mat_block_poppy_d,
	&mat_block_potatoes_d,
	&mat_block_powder_snow_d,
	&mat_block_powered_rail_d,
	&mat_block_prismarine_d,
	&mat_block_prismarine_brick_slab_d,
	&mat_block_prismarine_brick_stairs_d,
	&mat_block_prismarine_bricks_d,
	&mat_block_prismarine_slab_d,
	&mat_block_prismarine_stairs_d,
	&mat_block_prismarine_wall_d,
	&mat_block_pumpkin_d,
	&mat_block_pumpkin_stem_d,
	&mat_block_purple_banner_d,
	&mat_block_purple_bed_d,
	&mat_block_purple_candle_d,
	&mat_block_purple_carpet_d,
	&mat_block_purple_concrete_d,
	&mat_block_purple_concrete_powder_d,
	&mat_block_purple_glazed_terracotta_d,
	&mat_block_purple_shulker_box_d,
	&mat_block_purple_stained_glass_d,
	&mat_block_purple_stained_glass_pane_d,
	&mat_block_purple_terracotta_d,
	&mat_block_purple_wool_d,
	&mat_block_purpur_block_d,
	&mat_block_purpur_pillar_d,
	&mat_block_purpur_slab_d,
	&mat_block_purpur_stairs_d,
	&mat_block_quartz_bricks_d,
	&mat_block_quartz_pillar_d,
	&mat_block_quartz_slab_d,
	&mat_block_quartz_stairs_d,
	&mat_block_rail_d,
	&mat_block_red_banner_d,
	&mat_block_red_bed_d,
	&mat_block_red_candle_d,
	&mat_block_red_carpet_d,
	&mat_block_red_concrete_d,
	&mat_block_red_concrete_powder_d,
	&mat_block_red_glazed_terracotta_d,
	&mat_block_red_mushroom_d,
	&mat_block_red_mushroom_block_d,
	&mat_block_red_nether_brick_slab_d,
	&mat_block_red_nether_brick_stairs_d,
	&mat_block_red_nether_brick_wall_d,
	&mat_block_red_nether_bricks_d,
	&mat_block_red_sand_d,
	&mat_block_red_sandstone_d,
	&mat_block_red_sandstone_slab_d,
	&mat_block_red_sandstone_stairs_d,
	&mat_block_red_sandstone_wall_d,
	&mat_block_red_shulker_box_d,
	&mat_block_red_stained_glass_d,
	&mat_block_red_stained_glass_pane_d,
	&mat_block_red_terracotta_d,
	&mat_block_red_tulip_d,
	&mat_block_red_wool_d,
	&mat_block_comparator_d,
	&mat_block_redstone_lamp_d,
	&mat_block_redstone_ore_d,
	&mat_block_repeater_d,
	&mat_block_redstone_torch_d,
	&mat_block_redstone_wire_d,
	&mat_block_repeating_command_block_d,
	&mat_block_respawn_anchor_d,
	&mat_block_rooted_dirt_d,
	&mat_block_rose_bush_d,
	&mat_block_sand_d,
	&mat_block_sandstone_d,
	&mat_block_sandstone_slab_d,
	&mat_block_sandstone_stairs_d,
	&mat_block_sandstone_wall_d,
	&mat_block_scaffolding_d,
	&mat_block_sculk_sensor_d,
	&mat_block_sea_lantern_d,
	&mat_block_sea_pickle_d,
	&mat_block_seagrass_d,
	&mat_block_shroomlight_d,
	&mat_block_shulker_box_d,
	&mat_block_skeleton_skull_d,
	&mat_block_slime_block_d,
	&mat_block_small_amethyst_bud_d,
	&mat_block_small_dripleaf_d,
	&mat_block_smithing_table_d,
	&mat_block_smoker_d,
	&mat_block_smooth_basalt_d,
	&mat_block_smooth_quartz_d,
	&mat_block_smooth_quartz_slab_d,
	&mat_block_smooth_quartz_stairs_d,
	&mat_block_smooth_red_sandstone_d,
	&mat_block_smooth_red_sandstone_slab_d,
	&mat_block_smooth_red_sandstone_stairs_d,
	&mat_block_smooth_sandstone_d,
	&mat_block_smooth_sandstone_slab_d,
	&mat_block_smooth_sandstone_stairs_d,
	&mat_block_smooth_stone_d,
	&mat_block_smooth_stone_slab_d,
	&mat_block_snow_d,
	&mat_block_snow_block_d,
	&mat_block_soul_campfire_d,
	&mat_block_soul_fire_d,
	&mat_block_soul_lantern_d,
	&mat_block_soul_sand_d,
	&mat_block_soul_soil_d,
	&mat_block_soul_torch_d,
	&mat_block_spawner_d,
	&mat_block_sponge_d,
	&mat_block_spore_blossom_d,
	&mat_block_spruce_button_d,
	&mat_block_spruce_door_d,
	&mat_block_spruce_fence_d,
	&mat_block_spruce_fence_gate_d,
	&mat_block_spruce_leaves_d,
	&mat_block_spruce_log_d,
	&mat_block_spruce_planks_d,
	&mat_block_spruce_pressure_plate_d,
	&mat_block_spruce_sapling_d,
	&mat_block_spruce_sign_d,
	&mat_block_spruce_slab_d,
	&mat_block_spruce_stairs_d,
	&mat_block_spruce_trapdoor_d,
	&mat_block_spruce_wood_d,
	&mat_block_sticky_piston_d,
	&mat_block_stone_d,
	&mat_block_stone_brick_slab_d,
	&mat_block_stone_brick_stairs_d,
	&mat_block_stone_brick_wall_d,
	&mat_block_stone_bricks_d,
	&mat_block_stone_button_d,
	&mat_block_stone_pressure_plate_d,
	&mat_block_stone_slab_d,
	&mat_block_stone_stairs_d,
	&mat_block_stonecutter_d,
	&mat_block_stripped_acacia_log_d,
	&mat_block_stripped_acacia_wood_d,
	&mat_block_stripped_birch_log_d,
	&mat_block_stripped_birch_wood_d,
	&mat_block_stripped_crimson_hyphae_d,
	&mat_block_stripped_crimson_stem_d,
	&mat_block_stripped_dark_oak_log_d,
	&mat_block_stripped_dark_oak_wood_d,
	&mat_block_stripped_jungle_log_d,
	&mat_block_stripped_jungle_wood_d,
	&mat_block_stripped_oak_log_d,
	&mat_block_stripped_oak_wood_d,
	&mat_block_stripped_spruce_log_d,
	&mat_block_stripped_spruce_wood_d,
	&mat_block_stripped_warped_hyphae_d,
	&mat_block_stripped_warped_stem_d,
	&mat_block_structure_block_d,
	&mat_block_structure_void_d,
	&mat_block_sugar_cane_d,
	&mat_block_sunflower_d,
	&mat_block_sweet_berry_bush_d,
	&mat_block_tall_grass_d,
	&mat_block_tall_seagrass_d,
	&mat_block_target_d,
	&mat_block_terracotta_d,
	&mat_block_tinted_glass_d,
	&mat_block_tnt_d,
	&mat_block_torch_d,
	&mat_block_trapped_chest_d,
	&mat_block_tripwire_d,
	&mat_block_tripwire_hook_d,
	&mat_block_tube_coral_d,
	&mat_block_tube_coral_block_d,
	&mat_block_tube_coral_fan_d,
	&mat_block_tuff_d,
	&mat_block_turtle_egg_d,
	&mat_block_twisting_vines_d,
	&mat_block_vine_d,
	&mat_block_warped_button_d,
	&mat_block_warped_door_d,
	&mat_block_warped_fence_d,
	&mat_block_warped_fence_gate_d,
	&mat_block_warped_fungus_d,
	&mat_block_warped_hyphae_d,
	&mat_block_warped_nylium_d,
	&mat_block_warped_planks_d,
	&mat_block_warped_pressure_plate_d,
	&mat_block_warped_roots_d,
	&mat_block_warped_sign_d,
	&mat_block_warped_slab_d,
	&mat_block_warped_stairs_d,
	&mat_block_warped_stem_d,
	&mat_block_warped_trapdoor_d,
	&mat_block_warped_wart_block_d,
	&mat_block_water_d,
	&mat_block_waxed_copper_block_d,
	&mat_block_waxed_cut_copper_d,
	&mat_block_waxed_cut_copper_slab_d,
	&mat_block_waxed_cut_copper_stairs_d,
	&mat_block_waxed_exposed_copper_d,
	&mat_block_waxed_exposed_cut_copper_d,
	&mat_block_waxed_exposed_cut_copper_slab_d,
	&mat_block_waxed_exposed_cut_copper_stairs_d,
	&mat_block_waxed_oxidized_copper_d,
	&mat_block_waxed_oxidized_cut_copper_d,
	&mat_block_waxed_oxidized_cut_copper_slab_d,
	&mat_block_waxed_oxidized_cut_copper_stairs_d,
	&mat_block_waxed_weathered_copper_d,
	&mat_block_waxed_weathered_cut_copper_d,
	&mat_block_waxed_weathered_cut_copper_slab_d,
	&mat_block_waxed_weathered_cut_copper_stairs_d,
	&mat_block_weathered_copper_d,
	&mat_block_weathered_cut_copper_d,
	&mat_block_weathered_cut_copper_slab_d,
	&mat_block_weathered_cut_copper_stairs_d,
	&mat_block_weeping_vines_d,
	&mat_block_wet_sponge_d,
	&mat_block_wheat_d,
	&mat_block_white_banner_d,
	&mat_block_white_bed_d,
	&mat_block_white_candle_d,
	&mat_block_white_carpet_d,
	&mat_block_white_concrete_d,
	&mat_block_white_concrete_powder_d,
	&mat_block_white_glazed_terracotta_d,
	&mat_block_white_shulker_box_d,
	&mat_block_white_stained_glass_d,
	&mat_block_white_stained_glass_pane_d,
	&mat_block_white_terracotta_d,
	&mat_block_white_tulip_d,
	&mat_block_white_wool_d,
	&mat_block_wither_rose_d,
	&mat_block_wither_skeleton_skull_d,
	&mat_block_yellow_banner_d,
	&mat_block_yellow_bed_d,
	&mat_block_yellow_candle_d,
	&mat_block_yellow_carpet_d,
	&mat_block_yellow_concrete_d,
	&mat_block_yellow_concrete_powder_d,
	&mat_block_yellow_glazed_terracotta_d,
	&mat_block_yellow_shulker_box_d,
	&mat_block_yellow_stained_glass_d,
	&mat_block_yellow_stained_glass_pane_d,
	&mat_block_yellow_terracotta_d,
	&mat_block_yellow_wool_d,
	&mat_block_zombie_head_d,
	&mat_block_end_portal_d,
	&mat_block_frosted_ice_d,
	&mat_block_piston_head_d,
	&mat_block_nether_portal_d,
	&mat_block_end_gateway_d,
	&mat_block_big_dripleaf_stem_d,
	&mat_block_bubble_column_d,
	&mat_block_moving_piston_d,
	&mat_block_wall_torch_d,
	&mat_block_oak_wall_sign_d,
	&mat_block_spruce_wall_sign_d,
	&mat_block_birch_wall_sign_d,
	&mat_block_acacia_wall_sign_d,
	&mat_block_jungle_wall_sign_d,
	&mat_block_dark_oak_wall_sign_d,
	&mat_block_redstone_wall_torch_d,
	&mat_block_soul_wall_torch_d,
	&mat_block_attached_pumpkin_stem_d,
	&mat_block_attached_melon_stem_d,
	&mat_block_water_cauldron_d,
	&mat_block_lava_cauldron_d,
	&mat_block_powder_snow_cauldron_d,
	&mat_block_potted_oak_sapling_d,
	&mat_block_potted_spruce_sapling_d,
	&mat_block_potted_birch_sapling_d,
	&mat_block_potted_jungle_sapling_d,
	&mat_block_potted_acacia_sapling_d,
	&mat_block_potted_dark_oak_sapling_d,
	&mat_block_potted_fern_d,
	&mat_block_potted_dandelion_d,
	&mat_block_potted_poppy_d,
	&mat_block_potted_blue_orchid_d,
	&mat_block_potted_allium_d,
	&mat_block_potted_azure_bluet_d,
	&mat_block_potted_red_tulip_d,
	&mat_block_potted_orange_tulip_d,
	&mat_block_potted_white_tulip_d,
	&mat_block_potted_pink_tulip_d,
	&mat_block_potted_oxeye_daisy_d,
	&mat_block_potted_cornflower_d,
	&mat_block_potted_lily_of_the_valley_d,
	&mat_block_potted_wither_rose_d,
	&mat_block_potted_red_mushroom_d,
	&mat_block_potted_brown_mushroom_d,
	&mat_block_potted_dead_bush_d,
	&mat_block_potted_cactus_d,
	&mat_block_skeleton_wall_skull_d,
	&mat_block_wither_skeleton_wall_skull_d,
	&mat_block_zombie_wall_head_d,
	&mat_block_player_wall_head_d,
	&mat_block_creeper_wall_head_d,
	&mat_block_dragon_wall_head_d,
	&mat_block_white_wall_banner_d,
	&mat_block_orange_wall_banner_d,
	&mat_block_magenta_wall_banner_d,
	&mat_block_light_blue_wall_banner_d,
	&mat_block_yellow_wall_banner_d,
	&mat_block_lime_wall_banner_d,
	&mat_block_pink_wall_banner_d,
	&mat_block_gray_wall_banner_d,
	&mat_block_light_gray_wall_banner_d,
	&mat_block_cyan_wall_banner_d,
	&mat_block_purple_wall_banner_d,
	&mat_block_blue_wall_banner_d,
	&mat_block_brown_wall_banner_d,
	&mat_block_green_wall_banner_d,
	&mat_block_red_wall_banner_d,
	&mat_block_black_wall_banner_d,
	&mat_block_dead_tube_coral_wall_fan_d,
	&mat_block_dead_brain_coral_wall_fan_d,
	&mat_block_dead_bubble_coral_wall_fan_d,
	&mat_block_dead_fire_coral_wall_fan_d,
	&mat_block_dead_horn_coral_wall_fan_d,
	&mat_block_tube_coral_wall_fan_d,
	&mat_block_brain_coral_wall_fan_d,
	&mat_block_bubble_coral_wall_fan_d,
	&mat_block_fire_coral_wall_fan_d,
	&mat_block_horn_coral_wall_fan_d,
	&mat_block_potted_bamboo_d,
	&mat_block_void_air_d,
	&mat_block_cave_air_d,
	&mat_block_weeping_vines_plant_d,
	&mat_block_twisting_vines_plant_d,
	&mat_block_crimson_wall_sign_d,
	&mat_block_warped_wall_sign_d,
	&mat_block_potted_crimson_fungus_d,
	&mat_block_potted_warped_fungus_d,
	&mat_block_potted_crimson_roots_d,
	&mat_block_potted_warped_roots_d,
	&mat_block_candle_cake_d,
	&mat_block_white_candle_cake_d,
	&mat_block_orange_candle_cake_d,
	&mat_block_magenta_candle_cake_d,
	&mat_block_light_blue_candle_cake_d,
	&mat_block_yellow_candle_cake_d,
	&mat_block_lime_candle_cake_d,
	&mat_block_pink_candle_cake_d,
	&mat_block_gray_candle_cake_d,
	&mat_block_light_gray_candle_cake_d,
	&mat_block_cyan_candle_cake_d,
	&mat_block_purple_candle_cake_d,
	&mat_block_blue_candle_cake_d,
	&mat_block_brown_candle_cake_d,
	&mat_block_green_candle_cake_d,
	&mat_block_red_candle_cake_d,
	&mat_block_black_candle_cake_d,
	&mat_block_cave_vines_plant_d,
	&mat_block_potted_azalea_bush_d,
	&mat_block_potted_flowering_azalea_bush_d,
	&mat_block_dried_kelp_block_d
};