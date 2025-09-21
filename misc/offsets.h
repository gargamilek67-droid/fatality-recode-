#pragma once
#include <cstdint>

namespace offsets {
	// dynamic offsets
	inline uint64_t length_disasm = 0;
	inline uint64_t hook_present = 0;
	inline uint64_t hook_reset = 0;

	// static offsets
	constexpr uint64_t interface_client = 0x4dffe80;
	constexpr uint64_t interface_entity_list = 0x4e251dc;
	constexpr uint64_t interface_engine = 0x59d3e8;
	constexpr uint64_t interface_prediction = 0x5263150;
	constexpr uint64_t interface_move_helper = 0xdf0b18;
	constexpr uint64_t interface_game_movement = 0x5260238;
	constexpr uint64_t interface_globals = 0x59ee60;
	constexpr uint64_t interface_model_info = 0x5ad560;
	constexpr uint64_t interface_model_render = 0x7847a0;
	constexpr uint64_t interface_material_system = 0xe2ac8;
	constexpr uint64_t interface_render_view = 0x5a1d14;
	constexpr uint64_t interface_cvar = 0x3d310;
	constexpr uint64_t interface_view_render = 0x52632c8;
	constexpr uint64_t interface_view_render_beams = 0xdf98a0;
	constexpr uint64_t interface_game_event_manager = 0x81c548;
	constexpr uint64_t interface_input = 0x52627b0;
	constexpr uint64_t interface_surface_props = 0x116078;
	constexpr uint64_t interface_engine_trace = 0x5a7404;
	constexpr uint64_t interface_client_state = 0x59f19c;
	constexpr uint64_t interface_surface = 0xf47d0;
	constexpr uint64_t interface_memalloc = 0x514f0;
	constexpr uint64_t interface_debug_overlay = 0x59feb0;
	constexpr uint64_t interface_glow_object_manager = 0x535fcb8;
	constexpr uint64_t interface_panel = 0x608c4;
	constexpr uint64_t interface_engine_sound = 0x52e65c;
	constexpr uint64_t interface_game_rules_proxy = 0x5334764;
	constexpr uint64_t interface_weapon_system = 0x526388c;
	constexpr uint64_t interface_localize = 0x38a70;
	constexpr uint64_t interface_hud = 0x523bc98;
	constexpr uint64_t interface_player_resource = 0x3231380;
	constexpr uint64_t interface_client_leaf_system = 0x4e35328;
	constexpr uint64_t interface_effects = 0x5a1cf4;
	constexpr uint64_t interface_host_state = 0x5a9a5c;
	constexpr uint64_t interface_mdl_cache = 0x64f18;
	constexpr uint64_t interface_studio_render = 0x41fe98;
	constexpr uint64_t interface_hardware_config = 0xfd5e8;
	constexpr uint64_t interface_client_tools = 0x52a77d4;
	constexpr uint64_t interface_string_tables = 0x5aeeb8;
	constexpr uint64_t interface_file_system = 0x6ffac;
	constexpr uint64_t interface_key_values_system = 0xd0e0;
	constexpr uint64_t interface_panoroama_ui_engine = 0x23c098;
	constexpr uint64_t sig_set_abs_angles = 0x1ea950;
	constexpr uint64_t sig_set_abs_origin = 0x1e7110;
	constexpr uint64_t sig_update_anim_state = 0x43E9E0;
	constexpr uint64_t sig_ret_to_cam_think = 0x2f551f;
	constexpr uint64_t sig_ret_to_draw_notify = 0x106109;
	constexpr uint64_t sig_ret_to_console_print = 0x105b1d;
	constexpr uint64_t sig_ret_to_add_notify = 0x105985;
	constexpr uint64_t sig_ret_to_draw_crosshair = 0x6a1ff8;
	constexpr uint64_t sig_standard_blending_rules = 0x1d1780;
	constexpr uint64_t sig_build_transformations = 0x1ccbf0;
	constexpr uint64_t sig_smoke_count = 0x525caac;
	constexpr uint64_t sig_get_econ_item_view = 0x1abcf0;
	constexpr uint64_t sig_get_sequence_act = 0x1d94a0;
	constexpr uint64_t sig_set_clantag = 0x8dab0;
	constexpr uint64_t sig_invalidate_physics_recursive = 0x1ab580;
	constexpr uint64_t sig_is_breakable_entity = 0x320bd0;
	constexpr uint64_t sig_print_dev_console = 0x105af0;
	constexpr uint64_t sig_find_element = 0x2d3a40;
	constexpr uint64_t sig_physics_run_think = 0x333c40;
	constexpr uint64_t sig_cmbat_get_econ_item_view = 0x1abcf0;
	constexpr uint64_t sig_get_static_data = 0x715880;
	constexpr uint64_t sig_disable_post_processing = 0x5344ac8;
	constexpr uint64_t sig_gc_client_system = 0x526b818;
	constexpr uint64_t sig_lookup_bone = 0x1cf8f0;
	constexpr uint64_t sig_modifier_table = 0xdf7fc0;
	constexpr uint64_t sig_load_named_sky = 0x137780;
	constexpr uint64_t sig_reveal_ranks = 0x3fe600;
	constexpr uint64_t sig_deathnotice_check = 0x526479e;
	constexpr uint64_t sig_clear_deathnotices = 0x51a020;
	constexpr uint64_t sig_get_checksum = 0x307260;
	constexpr uint64_t sig_equip_glove = 0x723170;
	constexpr uint64_t sig_item_system = 0x7109f0;
	constexpr uint64_t sig_parse_kits_addr = 0x403303;
	constexpr uint64_t sig_util_traceline = 0x1ad3c0;
	constexpr uint64_t sig_cl_send_move_limit = 0xdd184;
	constexpr uint64_t sig_is_ready = 0x601760;
	constexpr uint64_t sig_ret_to_setup_velocity = 0x443481;
	constexpr uint64_t sig_ret_to_post_data_update = 0x207918;
	constexpr uint64_t sig_ret_to_enable_inventory = 0x412383;
	constexpr uint64_t sig_interp_clamp = 0x419693;
	constexpr uint64_t sig_ret_to_trace_ray = 0x1b0dad;
	constexpr uint64_t sig_ret_to_scope_arc = 0x4be4ac;
	constexpr uint64_t sig_ret_to_scope_lens = 0x4be062;
	constexpr uint64_t sig_post_process_params = 0xdfa038;
	constexpr uint64_t sig_ret_to_post_network_data_received = 0x1eb9db;
	constexpr uint64_t sig_ret_to_add_viewmodel_stattrak = 0x215c86;
	constexpr uint64_t sig_trace_to_studio_csgo_hitgroups_priority = 0x7df220;
	constexpr uint64_t sig_should_skip_anim_frame_check = 0x1cf9fd;
	constexpr uint64_t sig_somelimit = 0x271199;
	constexpr uint64_t sig_cvar_check = 0x3e3633;
	constexpr uint64_t sig_cs_player_pred_map = 0xdb61dc;
	constexpr uint64_t sig_base_cs_grenade_pred_map = 0xdb9aa8;
	constexpr uint64_t sig_decoy_map = 0xdba138;
	constexpr uint64_t sig_he_map = 0xdba198;
	constexpr uint64_t sig_molotov_map = 0xdba300;
	constexpr uint64_t sig_sensor_map = 0xdba438;
	constexpr uint64_t sig_smoke_map = 0xdba480;
	constexpr uint64_t sig_flash_map = 0xdba180;
	constexpr uint64_t sig_view_matrix = 0x4df5f74;
	constexpr uint64_t sig_get_item_schema = 0x7109f0;
	constexpr uint64_t sig_econ_item_destructor = 0x6d7000;
	constexpr uint64_t sig_create_econ_item = 0x6e86a0;
	constexpr uint64_t sig_animstate_reset = 0x43e550;
	constexpr uint64_t sig_update_layer_order_preset = 0x442b50;
	constexpr uint64_t sig_update_equipped_state = 0x6d7730;
	constexpr uint64_t sig_set_custom_name = 0x6d75e0;
	constexpr uint64_t sig_set_custom_desc = 0x6d79b0;
	constexpr uint64_t sig_set_dynamic_attribute_value = 0x6d8560;
	constexpr uint64_t sig_empty_mapping = 0x524535c;
	constexpr uint64_t sig_simulation_tick = 0x2ac;
	constexpr uint64_t sig_predictable = 0x2ea;
	constexpr uint64_t sig_custom_materials = 0x9e8;
	constexpr uint64_t sig_custom_material_initialized = 0x3370;
	constexpr uint64_t sig_visual_data_processors = 0x230;
	constexpr uint64_t sig_spawn_time = 0x103c0;
	constexpr uint64_t sig_ragdoll = 0x9f4;
	constexpr uint64_t sig_lod_data = 0xa24;
	constexpr uint64_t sig_ik_context = 0x266c;
	constexpr uint64_t sig_snapshot_front = 0x9b20;
	constexpr uint64_t sig_snapshot_back = 0xcf70;
	constexpr uint64_t sig_blend_tick = 0xa68;
	constexpr uint64_t sig_get_follow_entity = 0x1ac960;
	constexpr uint64_t sig_last_client_fire_bullet_time = 0x33cc;
	constexpr uint64_t sig_final_predicted_tick = 0x3444;
	constexpr uint64_t sig_occlusion_mask = 0xa20;
	constexpr uint64_t sig_anim_state = 0x9960;
	constexpr uint64_t sig_command_context = 0x350c;
	constexpr uint64_t sig_send_matching_sequence = 0x1b47a0;
	constexpr uint64_t sig_sound_channels = 0x64b668;
	constexpr uint64_t sig_activity_mapping = 0x19cf5e;
	constexpr uint64_t sig_load_from_buffer = 0x99bcf0;
	constexpr uint64_t sig_modifier_table_find = 0x9a2c40;
	constexpr uint64_t sig_modifier_table_add_string = 0x9A2CF0;
	constexpr uint64_t sig_allocate_thread_id = 0x12910;
	constexpr uint64_t sig_game_tonemap_settings = 0x223840;
	constexpr uint64_t sig_get_active_weapon_prefix = 0x4445f0;
	constexpr uint64_t sig_get_layer_ideal_weight_from_sequence_cycle = 0x43e830;
	constexpr uint64_t sig_on_simulation_time_changing = 0x1e86f0;
	constexpr uint64_t sig_get_root_move_parent = 0x1ab7b0;
	constexpr uint64_t sig_ik_context_construct = 0x7e8de0;
	constexpr uint64_t sig_ik_context_destruct = 0x1ceec0;
	constexpr uint64_t sig_ik_context_init = 0x7e8eb0;
	constexpr uint64_t sig_ik_context_update_targets = 0x7e9ce0;
	constexpr uint64_t sig_ik_context_solve_dependencies = 0x7eb330;
	constexpr uint64_t sig_allocate_and_merge_bones = 0x1ccb70;
	constexpr uint64_t sig_lookup_sequence = 0x1d9130;
	constexpr uint64_t sig_ammodef_get = 0x4136c0;
	constexpr uint64_t sig_get_any_sequence_anim_tag = 0x1d5a40;
	constexpr uint64_t sig_accumulate_interleaved_dispatch_layers = 0x1dc5a0;
	constexpr uint64_t sig_process_sockets = 0x2624a0;
	constexpr uint64_t sig_sequence_hash_find_hash = 0x19df90;
	constexpr uint64_t sig_activity_mapping_reinitialize = 0x36ca60;
	constexpr uint64_t sig_find_mapping = 0x36cac0;
	constexpr uint64_t sig_index_model_sequences = 0x19cdf0;
	constexpr uint64_t sig_get_seq_desc = 0x39d0a0;
	constexpr uint64_t sig_keyvalues_init = 0x999940;
	constexpr uint64_t sig_ret_is_box_visible = 0x38f93a;
	constexpr uint64_t sig_random_int = 0xffb0;
	constexpr uint64_t sig_random_float = 0xff40;
	constexpr uint64_t sig_random_seed = 0xff20;
	constexpr uint64_t sig_var_mapping = 0x24;
	constexpr uint64_t sig_free_thread_id = 0x129a0;
	constexpr uint64_t sig_tls_slots = 0x54e30;
	constexpr uint64_t sig_projectile_throwtime = 0x2a00;
	constexpr uint64_t sig_init_materials = 0x30db20;
	constexpr uint64_t sig_render_box = 0x30eed0;
	constexpr uint64_t sig_render_triangle = 0x30f610;
	constexpr uint64_t sig_vertex_color_ignorez = 0x391ae9c;
	constexpr uint64_t sig_cycle_offset = 0x29f4;
	constexpr uint64_t sig_studio_hdr = 0x2950;
	constexpr uint64_t sig_anim_layers = 0x2990;
	constexpr uint64_t sig_is_ragdoll = 0x9f4;
	constexpr uint64_t sig_bone_accessor = 0x26a8;
	constexpr uint64_t sig_cl_move_rest = 0xdd43c;
	constexpr uint64_t sig_post_build_transformations = 0x432e20;
	constexpr uint64_t sig_ret_to_post_build_transformations = 0x42f085;
	constexpr uint64_t sig_collision_viewheight = 0x9920;
	constexpr uint64_t sig_collision_bounds_change_time = 0x9924;
	constexpr uint64_t sig_velocity_patch = 0x207211;
	constexpr uint64_t sig_kv_find_key = 0x996af0;
	constexpr uint64_t sig_kv_set_string = 0x99b110;
	constexpr uint64_t sig_surface_props = 0x35dc;
	constexpr uint64_t sig_animstate_update_setabsagles = 0x43ee50;
	constexpr uint64_t sig_mdl_create = 0x9ae9a0;
	constexpr uint64_t sig_set_merged_mdl = 0x9af480;
	constexpr uint64_t sig_setup_bones_attachment_queries = 0x9AEED0;
	constexpr uint64_t sig_disable_render_target_allocation = 0x9ec;
	constexpr uint64_t sig_get_sequence_flags = 0x19e0c0;
	constexpr uint64_t sig_get_iron_sight_controller = 0x33d0;
	constexpr uint64_t sig_enable_invalidate_bone_cache = 0xdac0d0;
	constexpr uint64_t sig_line_goes_through_smoke = 0x3d1820;
	constexpr uint64_t sig_keyvalues_from_netsmg = 0x2702e0;
	constexpr uint64_t sig_model_bone_counter = 0x532d0c4;
	constexpr uint64_t sig_most_recent_model_bone_counter = 0x2690;
	constexpr uint64_t sig_accumulated_bone_mask = 0x26a0;
	constexpr uint64_t sig_ret_hitbox_to_world_transforms = 0x1d45d7;
	constexpr uint64_t sig_emit_sound = 0x3644f0;
	constexpr uint64_t sig_add_to_dirty_kd_tree = 0x28c510;
	constexpr uint64_t sig_get_player_viewmodel_arm_config_for_player_model = 0x4364d0;
	constexpr uint64_t sig_client_side_addons_mask = 0xdb6300;
	constexpr uint64_t sig_assassination_target_addon = 0x2a0c;
	constexpr uint64_t sig_update_addon_models = 0x3e13e0;
	constexpr uint64_t sig_msg_voicedata_constructor = 0x19f550;
	constexpr uint64_t sig_parse_svg = 0xab6f0;
	constexpr uint64_t sig_construct_image = 0x9a982;
	constexpr uint64_t sig_load_text_file = 0x26a950;
	constexpr uint64_t sig_econ_item_system = 0x534c958;
	constexpr uint64_t sig_clear_hud_weapon_icon = 0x55a5a0;
	constexpr uint64_t sig_skinchanger_spam_patch = 0x1d9c8f;
	constexpr uint64_t sig_cvar_vac_check = 0x36d0;
	constexpr uint64_t sig_v8_try_catch_ctor = 0x1eeb1;
	constexpr uint64_t sig_v8_try_catch_dtor = 0x2521b;
	constexpr uint64_t sig_v8_handle_scope_ctor = 0x1e6fa;
	constexpr uint64_t sig_v8_handle_scope_dtor = 0x1325;
	constexpr uint64_t sig_v8_handle_scope_create_handle = 0x59c0;
	constexpr uint64_t sig_v8_context_enter = 0x771b;
	constexpr uint64_t sig_v8_context_exit = 0x1e42f;
	constexpr uint64_t sig_v8_isolate_enter = 0x2b9d1;
	constexpr uint64_t sig_v8_isolate_exit = 0x27d86;
	constexpr uint64_t sig_v8_array_get = 0x1da52;
	constexpr uint64_t sig_v8_array_length = 0x2f8dd;
	constexpr uint64_t sig_v8_object_get = 0x1bcbb;
	constexpr uint64_t sig_v8_object_get_property_names = 0x2c949;
	constexpr uint64_t sig_v8_value_is_boolean = 0x273f4;
	constexpr uint64_t sig_v8_value_is_boolean_object = 0x13ffc;
	constexpr uint64_t sig_v8_value_is_number = 0x1375f;
	constexpr uint64_t sig_v8_value_is_number_object = 0x2d3e4;
	constexpr uint64_t sig_v8_value_is_string = 0x1d17e;
	constexpr uint64_t sig_v8_value_is_string_object = 0x25059;
	constexpr uint64_t sig_v8_value_is_object = 0x2509a;
	constexpr uint64_t sig_v8_value_is_array = 0x1725b;
	constexpr uint64_t sig_v8_value_is_function = 0x273f4;
	constexpr uint64_t sig_v8_value_boolean_value = 0x27827;
	constexpr uint64_t sig_v8_value_number_value = 0xf85d;
	constexpr uint64_t sig_v8_value_to_object = 0x1BF90;
	constexpr uint64_t sig_v8_string_utf8_ctor = 0x31bf6;
	constexpr uint64_t sig_v8_string_utf8_dtor = 0x11D1A;
	constexpr uint64_t sig_ui_engine_get_panel_context = 0x4b790;
	constexpr uint64_t sig_ui_engine_compile = 0x4b580;
	constexpr uint64_t sig_ui_engine_run_compiled_script = 0x4c080;
	constexpr uint64_t hook_start_sound_immediate = 0x38cb0;
	constexpr uint64_t hook_set_bodygroup = 0x1d8d20;
	constexpr uint64_t hook_modify_eye_pos = 0x43eea0;
	constexpr uint64_t hook_wnd_proc = 0x3ac0;
	constexpr uint64_t hook_create_move = 0x260c80;
	constexpr uint64_t hook_cl_move = 0xdd290;
	constexpr uint64_t hook_frame_stage_notify = 0x262b20;
	constexpr uint64_t hook_on_latch_interp_var = 0x1e8ce0;
	constexpr uint64_t hook_draw_model_execute = 0x13e6a0;
	constexpr uint64_t hook_render_view = 0x3a5280;
	constexpr uint64_t hook_level_init_post_entity = 0x261840;
	constexpr uint64_t hook_level_init_pre_entity = 0x261670;
	constexpr uint64_t hook_get_tonemap_settings_from_env_tonemap_controller = 0x223840;
	constexpr uint64_t hook_draw_3d_debug_overlays = 0x178dc0;
	constexpr uint64_t hook_shader_api_draw_mesh = 0x16d00;
	constexpr uint64_t hook_is_box_visible = 0xb6ea0;
	constexpr uint64_t hook_scene_end = 0x178f40;
	constexpr uint64_t hook_calc_renderable_world_space_aabb_bloated = 0x26f680;
	constexpr uint64_t hook_add_renderables_to_render_lists = 0x272980;
	constexpr uint64_t hook_do_post_screen_space_effects = 0x3fe450;
	constexpr uint64_t hook_send_net_msg = 0x256910;
	constexpr uint64_t hook_override_view = 0x276d70;
	constexpr uint64_t hook_paint_traverse = 0x19520;
	constexpr uint64_t hook_find_material = 0x1af30;
	constexpr uint64_t hook_emit_sound = 0x23DA0;
	constexpr uint64_t hook_is_connected = 0x260f0;
	constexpr uint64_t hook_lock_cursor = 0x13e00;
	constexpr uint64_t hook_draw_set_color = 0xd890;
	constexpr uint64_t hook_test_hitboxes = 0x1d4900;
	constexpr uint64_t hook_setup_bones = 0x3e8480;
	constexpr uint64_t hook_animating_setup_bones = 0x1d3140;
	constexpr uint64_t hook_post_data_update = 0x3e5f70;
	constexpr uint64_t hook_maintain_sequence_transitions = 0x1d11f0;
	constexpr uint64_t hook_trace_ray = 0x20dea0;
	constexpr uint64_t hook_run_command = 0x343bf0;
	constexpr uint64_t hook_process_movement = 0x2bb170;
	constexpr uint64_t hook_transfer_data = 0x348070;
	constexpr uint64_t hook_perform_prediction = 0x344a70;
	constexpr uint64_t hook_packet_start = 0x286110;
	constexpr uint64_t hook_level_shutdown = 0x2618f0;
	constexpr uint64_t hook_physics_simulate = 0x20e2b0;
	constexpr uint64_t hook_estimate_abs_velocity = 0x1ecae0;
	constexpr uint64_t hook_interpolate = 0x1d2f10;
	constexpr uint64_t hook_reset_latched = 0x1d2ed0;
	constexpr uint64_t hook_send_weapon_anim = 0x1a9bd0;
	constexpr uint64_t hook_fire_event = 0x3ea080;
	constexpr uint64_t hook_do_animation_events = 0x1e01b0;
	constexpr uint64_t hook_deploy = 0x6a16e0;
	constexpr uint64_t hook_get_fov = 0x3ea920;
	constexpr uint64_t hook_effects = 0x1a76a0;
	constexpr uint64_t hook_sequence = 0x1b8c40;
	constexpr uint64_t hook_weapon_handle = 0x1b8a00;
	constexpr uint64_t hook_simulation_time = 0x1e3b50;
	constexpr uint64_t hook_general_float = 0x2a69a0;
	constexpr uint64_t hook_general_vec = 0x2172d0;
	constexpr uint64_t hook_general_int = 0x2a69e0;
	constexpr uint64_t hook_general_bool = 0x2a69d0;
	constexpr uint64_t hook_layer_sequence = 0x1dea80;
	constexpr uint64_t hook_layer_cycle = 0x1DEB50;
	constexpr uint64_t hook_layer_playback_rate = 0x1debc0;
	constexpr uint64_t hook_layer_weight = 0x1deac0;
	constexpr uint64_t hook_layer_weight_delta_rate = 0x1deb30;
	constexpr uint64_t hook_layer_order = 0x1debe0;
	constexpr uint64_t hook_convar_get_float_engine = 0x43290;
	constexpr uint64_t hook_convar_get_int_engine = 0x2cd40;
	constexpr uint64_t hook_convar_get_int_client = 0x198060;
	constexpr uint64_t hook_eye_position_and_vectors = 0x1af290;
	constexpr uint64_t hook_obb_change_callback = 0x432580;
	constexpr uint64_t hook_server_cmd_key_values = 0xb8680;
	constexpr uint64_t hook_calc_view = 0x3e0fb0;
	constexpr uint64_t hook_scale_mouse = 0x308D60;
	constexpr uint64_t hook_convar_network_change_callback = 0x1ed670;
	constexpr uint64_t hook_reevauluate_anim_lod = 0x3e81b0;
	constexpr uint64_t hook_start_sound = 0x31fbc0;
	constexpr uint64_t hook_update_clientside_anim = 0x3e7a80;
	constexpr uint64_t hook_do_animation_events_animating = 0x1d4fd0;
	constexpr uint64_t hook_get_default_fov = 0x1b5bb0;
	constexpr uint64_t hook_ent_info_list_link_before = 0x2a76e0;
	constexpr uint64_t hook_extract_occluded_renderables = 0x272870;
	constexpr uint64_t hook_sv_msg_voicedata = 0x2866a0;
	constexpr uint64_t hook_hud_reticle_process_input = 0x534010;
	constexpr uint64_t hook_update_interp_vars = 0x1cf130;
	constexpr uint64_t hook_particle_draw_model = 0x32cf20;
	constexpr uint64_t CAI_BaseNPC_m_bFadeCorpse = 0x2f36;
	constexpr uint64_t CAI_BaseNPC_m_bImportanRagdoll = 0x2f38;
	constexpr uint64_t CAI_BaseNPC_m_bIsMoving = 0x2f35;
	constexpr uint64_t CAI_BaseNPC_m_bPerformAvoidance = 0x2f34;
	constexpr uint64_t CAI_BaseNPC_m_bSpeedModActive = 0x2f37;
	constexpr uint64_t CAI_BaseNPC_m_flTimePingEffect = 0x2f20;
	constexpr uint64_t CAI_BaseNPC_m_iDeathFrame = 0x2f28;
	constexpr uint64_t CAI_BaseNPC_m_iDeathPose = 0x2f24;
	constexpr uint64_t CAI_BaseNPC_m_iSpeedModRadius = 0x2f2c;
	constexpr uint64_t CAI_BaseNPC_m_iSpeedModSpeed = 0x2f30;
	constexpr uint64_t CAI_BaseNPC_m_lifeState = 0x25f;
	constexpr uint64_t CBRC4Target_m_bBrokenOpen = 0x2994;
	constexpr uint64_t CBaseAnimating_m_ScaleType = 0x2750;
	constexpr uint64_t CBaseAnimating_m_bClientSideAnimation = 0x28a0;
	constexpr uint64_t CBaseAnimating_m_bClientSideFrameReset = 0x26c4;
	constexpr uint64_t CBaseAnimating_m_bClientSideRagdoll = 0x279;
	constexpr uint64_t CBaseAnimating_m_bSuppressAnimSounds = 0x294e;
	constexpr uint64_t CBaseAnimating_m_flCycle = 0xa14;
	constexpr uint64_t CBaseAnimating_m_flEncodedController = 0xa54;
	constexpr uint64_t CBaseAnimating_m_flFrozen = 0x26fc;
	constexpr uint64_t CBaseAnimating_m_flModelScale = 0x274c;
	constexpr uint64_t CBaseAnimating_m_flPlaybackRate = 0xa18;
	constexpr uint64_t CBaseAnimating_m_flPoseParameter = 0x2778;
	constexpr uint64_t CBaseAnimating_m_hLightingOrigin = 0x2948;
	constexpr uint64_t CBaseAnimating_m_nBody = 0xa20;
	constexpr uint64_t CBaseAnimating_m_nForceBone = 0x268c;
	constexpr uint64_t CBaseAnimating_m_nHighlightColorB = 0xa40;
	constexpr uint64_t CBaseAnimating_m_nHighlightColorG = 0xa3c;
	constexpr uint64_t CBaseAnimating_m_nHighlightColorR = 0xa38;
	constexpr uint64_t CBaseAnimating_m_nHitboxSet = 0x9fc;
	constexpr uint64_t CBaseAnimating_m_nNewSequenceParity = 0xa44;
	constexpr uint64_t CBaseAnimating_m_nResetEventsParity = 0xa48;
	constexpr uint64_t CBaseAnimating_m_nSequence = 0x28c0;
	constexpr uint64_t CBaseAnimating_m_nSkin = 0xa1c;
	constexpr uint64_t CBaseAnimating_m_vecForce = 0x2680;
	constexpr uint64_t CBaseAttributableItem_m_AttributeManager = 0x2d90;
	constexpr uint64_t CBaseAttributableItem_m_Attributes = 0x3030;
	constexpr uint64_t CBaseAttributableItem_m_Item = 0x2dd0;
	constexpr uint64_t CBaseAttributableItem_m_NetworkedDynamicAttributesForDemos = 0x3030;
	constexpr uint64_t CBaseAttributableItem_m_OriginalOwnerXuidHigh = 0x31D4;
	constexpr uint64_t CBaseAttributableItem_m_OriginalOwnerXuidLow = 0x31d0;
	constexpr uint64_t CBaseAttributableItem_m_ProviderType = 0x2db4;
	constexpr uint64_t CBaseAttributableItem_m_bInitialized = 0x2fe4;
	constexpr uint64_t CBaseAttributableItem_m_flFallbackWear = 0x31e0;
	constexpr uint64_t CBaseAttributableItem_m_hOuter = 0x2dac;
	constexpr uint64_t CBaseAttributableItem_m_iAccountID = 0x2fd8;
	constexpr uint64_t CBaseAttributableItem_m_iEntityLevel = 0x2fc0;
	constexpr uint64_t CBaseAttributableItem_m_iEntityQuality = 0x2fbc;
	constexpr uint64_t CBaseAttributableItem_m_iItemDefinitionIndex = 0x2fba;
	constexpr uint64_t CBaseAttributableItem_m_iItemIDHigh = 0x2fd0;
	constexpr uint64_t CBaseAttributableItem_m_iItemIDLow = 0x2fd4;
	constexpr uint64_t CBaseAttributableItem_m_iReapplyProvisionParity = 0x2da8;
	constexpr uint64_t CBaseAttributableItem_m_nFallbackPaintKit = 0x31D8;
	constexpr uint64_t CBaseAttributableItem_m_nFallbackSeed = 0x31dc;
	constexpr uint64_t CBaseAttributableItem_m_nFallbackStatTrak = 0x31e4;
	constexpr uint64_t CBaseAttributableItem_m_szCustomName = 0x304c;
	constexpr uint64_t CBaseCSGrenadeProjectile_m_nBounces = 0x29ec;
	constexpr uint64_t CBaseCSGrenadeProjectile_m_nExplodeEffectIndex = 0x29f0;
	constexpr uint64_t CBaseCSGrenadeProjectile_m_nExplodeEffectTickBegin = 0x29f4;
	constexpr uint64_t CBaseCSGrenadeProjectile_m_vInitialVelocity = 0x29e0;
	constexpr uint64_t CBaseCSGrenade_m_bIsHeldByPlayer = 0x33e1;
	constexpr uint64_t CBaseCSGrenade_m_bLoopingSoundPlaying = 0x33e8;
	constexpr uint64_t CBaseCSGrenade_m_bPinPulled = 0x33E2;
	constexpr uint64_t CBaseCSGrenade_m_bRedraw = 0x33e0;
	constexpr uint64_t CBaseCSGrenade_m_fDropTime = 0x33f0;
	constexpr uint64_t CBaseCSGrenade_m_fThrowTime = 0x33e4;
	constexpr uint64_t CBaseCSGrenade_m_flThrowStrength = 0x33ec;
	constexpr uint64_t CBaseCombatCharacter_m_LastHitGroup = 0x2d84;
	constexpr uint64_t CBaseCombatCharacter_m_flNextAttack = 0x2d80;
	constexpr uint64_t CBaseCombatCharacter_m_flTimeOfLastInjury = 0x2f0c;
	constexpr uint64_t CBaseCombatCharacter_m_hActiveWeapon = 0x2f08;
	constexpr uint64_t CBaseCombatCharacter_m_hMyWeapons = 0x2e08;
	constexpr uint64_t CBaseCombatCharacter_m_hMyWearables = 0x2f14;
	constexpr uint64_t CBaseCombatCharacter_m_nRelativeDirectionOfLastInjury = 0x2f10;
	constexpr uint64_t CBaseCombatWeapon_m_flNextPrimaryAttack = 0x3248;
	constexpr uint64_t CBaseCombatWeapon_m_flNextSecondaryAttack = 0x324c;
	constexpr uint64_t CBaseCombatWeapon_m_flTimeWeaponIdle = 0x3284;
	constexpr uint64_t CBaseCombatWeapon_m_hOwner = 0x3240;
	constexpr uint64_t CBaseCombatWeapon_m_hWeaponWorldModel = 0x3264;
	constexpr uint64_t CBaseCombatWeapon_m_iClip1 = 0x3274;
	constexpr uint64_t CBaseCombatWeapon_m_iClip2 = 0x3278;
	constexpr uint64_t CBaseCombatWeapon_m_iNumEmptyAttacks = 0x3260;
	constexpr uint64_t CBaseCombatWeapon_m_iPrimaryAmmoType = 0x326c;
	constexpr uint64_t CBaseCombatWeapon_m_iPrimaryReserveAmmoCount = 0x327c;
	constexpr uint64_t CBaseCombatWeapon_m_iState = 0x3268;
	constexpr uint64_t CBaseCombatWeapon_m_iViewModelIndex = 0x3250;
	constexpr uint64_t CBaseCombatWeapon_m_iWeaponModule = 0x325c;
	constexpr uint64_t CBaseCombatWeapon_m_iWeaponOrigin = 0x32d8;
	constexpr uint64_t CBaseCombatWeapon_m_iWorldDroppedModelIndex = 0x3258;
	constexpr uint64_t CBaseCombatWeapon_m_iWorldModelIndex = 0x3254;
	constexpr uint64_t CBaseCombatWeapon_m_nNextThinkTick = 0xfc;
	constexpr uint64_t CBaseCombatWeapon_m_nViewModelIndex = 0x3244;
	constexpr uint64_t CBaseDoor_m_flWaveHeight = 0xa08;
	constexpr uint64_t CBaseEntity_m_Collision = 0x320;
	constexpr uint64_t CBaseEntity_m_CollisionGroup = 0x474;
	constexpr uint64_t CBaseEntity_m_angRotation = 0x12c;
	constexpr uint64_t CBaseEntity_m_bAlternateSorting = 0x93c;
	constexpr uint64_t CBaseEntity_m_bAnimatedEveryTick = 0x93b;
	constexpr uint64_t CBaseEntity_m_bEligibleForScreenHighlight = 0x9b9;
	constexpr uint64_t CBaseEntity_m_bIsAutoaimTarget = 0x60;
	constexpr uint64_t CBaseEntity_m_bSimulatedEveryTick = 0x93a;
	constexpr uint64_t CBaseEntity_m_bSpotted = 0x93d;
	constexpr uint64_t CBaseEntity_m_bSpottedBy = 0x93e;
	constexpr uint64_t CBaseEntity_m_bSpottedByMask = 0x980;
	constexpr uint64_t CBaseEntity_m_cellX = 0x7c;
	constexpr uint64_t CBaseEntity_m_cellY = 0x80;
	constexpr uint64_t CBaseEntity_m_cellZ = 0x84;
	constexpr uint64_t CBaseEntity_m_cellbits = 0x74;
	constexpr uint64_t CBaseEntity_m_clrRender = 0x70;
	constexpr uint64_t CBaseEntity_m_fEffects = 0xf0;
	constexpr uint64_t CBaseEntity_m_fadeMaxDist = 0x2f8;
	constexpr uint64_t CBaseEntity_m_fadeMinDist = 0x2f4;
	constexpr uint64_t CBaseEntity_m_flAnimTime = 0x260;
	constexpr uint64_t CBaseEntity_m_flElasticity = 0x300;
	constexpr uint64_t CBaseEntity_m_flFadeScale = 0x2fc;
	constexpr uint64_t CBaseEntity_m_flLastMadeNoiseTime = 0x20;
	constexpr uint64_t CBaseEntity_m_flMaxFallVelocity = 0xdc;
	constexpr uint64_t CBaseEntity_m_flShadowCastDistance = 0x3a0;
	constexpr uint64_t CBaseEntity_m_flSimulationTime = 0x268;
	constexpr uint64_t CBaseEntity_m_flUseLookAtAngle = 0x2cc;
	constexpr uint64_t CBaseEntity_m_hEffectEntity = 0x998;
	constexpr uint64_t CBaseEntity_m_hOwnerEntity = 0x14c;
	constexpr uint64_t CBaseEntity_m_iName = 0x154;
	constexpr uint64_t CBaseEntity_m_iParentAttachment = 0x2ec;
	constexpr uint64_t CBaseEntity_m_iPendingTeamNum = 0xf8;
	constexpr uint64_t CBaseEntity_m_iTeamNum = 0xf4;
	constexpr uint64_t CBaseEntity_m_iTextureFrameIndex = 0x98c;
	constexpr uint64_t CBaseEntity_m_nMaxCPULevel = 0x989;
	constexpr uint64_t CBaseEntity_m_nMaxGPULevel = 0x98b;
	constexpr uint64_t CBaseEntity_m_nMinCPULevel = 0x988;
	constexpr uint64_t CBaseEntity_m_nMinGPULevel = 0x98a;
	constexpr uint64_t CBaseEntity_m_nModelIndex = 0x258;
	constexpr uint64_t CBaseEntity_m_nRenderFX = 0x25a;
	constexpr uint64_t CBaseEntity_m_nRenderMode = 0x25b;
	constexpr uint64_t CBaseEntity_m_nSolidType = 0x342;
	constexpr uint64_t CBaseEntity_m_nSurroundType = 0x34a;
	constexpr uint64_t CBaseEntity_m_triggerBloat = 0x343;
	constexpr uint64_t CBaseEntity_m_usSolidFlags = 0x340;
	constexpr uint64_t CBaseEntity_m_vecMaxs = 0x334;
	constexpr uint64_t CBaseEntity_m_vecMins = 0x328;
	constexpr uint64_t CBaseEntity_m_vecOrigin = 0x138;
	constexpr uint64_t CBaseEntity_m_vecSpecifiedSurroundingMaxs = 0x358;
	constexpr uint64_t CBaseEntity_m_vecSpecifiedSurroundingMins = 0x34c;
	constexpr uint64_t CBaseEntity_moveparent = 0x148;
	constexpr uint64_t CBaseFlex_m_blinktoggle = 0x2be4;
	constexpr uint64_t CBaseFlex_m_flexWeight = 0x2a38;
	constexpr uint64_t CBaseFlex_m_viewtarget = 0x2a00;
	constexpr uint64_t CBaseGrenade_m_DmgRadius = 0x2994;
	constexpr uint64_t CBaseGrenade_m_bIsLive = 0x2991;
	constexpr uint64_t CBaseGrenade_m_fFlags = 0x104;
	constexpr uint64_t CBaseGrenade_m_flDamage = 0x29a8;
	constexpr uint64_t CBaseGrenade_m_hThrower = 0x29b0;
	constexpr uint64_t CBaseGrenade_m_vecVelocity = 0x114;
	constexpr uint64_t CBasePlayer_deadflag = 0x31e4;
	constexpr uint64_t CBasePlayer_m_Local = 0x2fcc;
	constexpr uint64_t CBasePlayer_m_PlayerFog_m_hCtrl = 0x37c4;
	constexpr uint64_t CBasePlayer_m_afPhysicsFlags = 0x32fc;
	constexpr uint64_t CBasePlayer_m_aimPunchAngle = 0x303C;
	constexpr uint64_t CBasePlayer_m_aimPunchAngleVel = 0x3048;
	constexpr uint64_t CBasePlayer_m_audio_entIndex = 0x31d0;
	constexpr uint64_t CBasePlayer_m_audio_localBits = 0x31cc;
	constexpr uint64_t CBasePlayer_m_audio_localSound_0_ = 0x3168;
	constexpr uint64_t CBasePlayer_m_audio_localSound_1_ = 0x3174;
	constexpr uint64_t CBasePlayer_m_audio_localSound_2_ = 0x3180;
	constexpr uint64_t CBasePlayer_m_audio_localSound_3_ = 0x318c;
	constexpr uint64_t CBasePlayer_m_audio_localSound_4_ = 0x3198;
	constexpr uint64_t CBasePlayer_m_audio_localSound_6_ = 0x31b0;
	constexpr uint64_t CBasePlayer_m_audio_localSound_7_ = 0x31bc;
	constexpr uint64_t CBasePlayer_m_audio_soundscapeIndex = 0x31c8;
	constexpr uint64_t CBasePlayer_m_bActiveCameraMan = 0x338c;
	constexpr uint64_t CBasePlayer_m_bAllowAutoMovement = 0x3060;
	constexpr uint64_t CBasePlayer_m_bCameraManOverview = 0x338e;
	constexpr uint64_t CBasePlayer_m_bCameraManScoreBoard = 0x338f;
	constexpr uint64_t CBasePlayer_m_bCameraManXRay = 0x338d;
	constexpr uint64_t CBasePlayer_m_bConstraintPastRadius = 0x3370;
	constexpr uint64_t CBasePlayer_m_bDrawViewmodel = 0x305d;
	constexpr uint64_t CBasePlayer_m_bDucked = 0x3054;
	constexpr uint64_t CBasePlayer_m_bDucking = 0x3055;
	constexpr uint64_t CBasePlayer_m_bInDuckJump = 0x305c;
	constexpr uint64_t CBasePlayer_m_bPoisoned = 0x305f;
	constexpr uint64_t CBasePlayer_m_bShouldDrawPlayerWhileUsingViewEntity = 0x3350;
	constexpr uint64_t CBasePlayer_m_bWearingSuit = 0x305e;
	constexpr uint64_t CBasePlayer_m_chAreaBits = 0x2fd0;
	constexpr uint64_t CBasePlayer_m_chAreaPortalBits = 0x2ff0;
	constexpr uint64_t CBasePlayer_m_fFlags = 0x104;
	constexpr uint64_t CBasePlayer_m_fForceTeam = 0x33dc;
	constexpr uint64_t CBasePlayer_m_fOnTarget = 0x3334;
	constexpr uint64_t CBasePlayer_m_flConstraintRadius = 0x3364;
	constexpr uint64_t CBasePlayer_m_flConstraintSpeedFactor = 0x336c;
	constexpr uint64_t CBasePlayer_m_flConstraintWidth = 0x3368;
	constexpr uint64_t CBasePlayer_m_flDeathTime = 0x33d4;
	constexpr uint64_t CBasePlayer_m_flDuckAmount = 0x2fbc;
	constexpr uint64_t CBasePlayer_m_flDuckSpeed = 0x2fc0;
	constexpr uint64_t CBasePlayer_m_flFOVRate = 0x3010;
	constexpr uint64_t CBasePlayer_m_flFOVTime = 0x3218;
	constexpr uint64_t CBasePlayer_m_flFallVelocity = 0x3024;
	constexpr uint64_t CBasePlayer_m_flFriction = 0x144;
	constexpr uint64_t CBasePlayer_m_flLaggedMovementValue = 0x35a4;
	constexpr uint64_t CBasePlayer_m_flLastDuckTime = 0x3058;
	constexpr uint64_t CBasePlayer_m_flMaxspeed = 0x3258;
	constexpr uint64_t CBasePlayer_m_flNextDecalTime = 0x33d8;
	constexpr uint64_t CBasePlayer_m_flStepSize = 0x302c;
	constexpr uint64_t CBasePlayer_m_hColorCorrectionCtrl = 0x37bc;
	constexpr uint64_t CBasePlayer_m_hConstraintEntity = 0x3354;
	constexpr uint64_t CBasePlayer_m_hGroundEntity = 0x150;
	constexpr uint64_t CBasePlayer_m_hLastWeapon = 0x3304;
	constexpr uint64_t CBasePlayer_m_hObserverTarget = 0x339C;
	constexpr uint64_t CBasePlayer_m_hPostProcessCtrl = 0x37b8;
	constexpr uint64_t CBasePlayer_m_hTonemapController = 0x31dc;
	constexpr uint64_t CBasePlayer_m_hUseEntity = 0x3338;
	constexpr uint64_t CBasePlayer_m_hVehicle = 0x3300;
	constexpr uint64_t CBasePlayer_m_hViewEntity = 0x334c;
	constexpr uint64_t CBasePlayer_m_hViewModel_0_ = 0x3308;
	constexpr uint64_t CBasePlayer_m_hZoomOwner = 0x325c;
	constexpr uint64_t CBasePlayer_m_iAmmo = 0x2d88;
	constexpr uint64_t CBasePlayer_m_iBonusChallenge = 0x3254;
	constexpr uint64_t CBasePlayer_m_iBonusProgress = 0x3250;
	constexpr uint64_t CBasePlayer_m_iCoachingTeam = 0x2f60;
	constexpr uint64_t CBasePlayer_m_iDeathPostEffect = 0x3384;
	constexpr uint64_t CBasePlayer_m_iDefaultFOV = 0x333c;
	constexpr uint64_t CBasePlayer_m_iFOV = 0x31f4;
	constexpr uint64_t CBasePlayer_m_iFOVStart = 0x31f8;
	constexpr uint64_t CBasePlayer_m_iHealth = 0x100;
	constexpr uint64_t CBasePlayer_m_iHideHUD = 0x3014;
	constexpr uint64_t CBasePlayer_m_iObserverMode = 0x3388;
	constexpr uint64_t CBasePlayer_m_ladderSurfaceProps = 0x3210;
	constexpr uint64_t CBasePlayer_m_lifeState = 0x25f;
	constexpr uint64_t CBasePlayer_m_nDuckJumpTimeMsecs = 0x301c;
	constexpr uint64_t CBasePlayer_m_nDuckTimeMsecs = 0x3018;
	constexpr uint64_t CBasePlayer_m_nJumpTimeMsecs = 0x3020;
	constexpr uint64_t CBasePlayer_m_nNextThinkTick = 0xfc;
	constexpr uint64_t CBasePlayer_m_nOldButtons = 0x300C;
	constexpr uint64_t CBasePlayer_m_nTickBase = 0x3440;
	constexpr uint64_t CBasePlayer_m_nWaterLevel = 0x25e;
	constexpr uint64_t CBasePlayer_m_skybox3d_area = 0x3110;
	constexpr uint64_t CBasePlayer_m_skybox3d_fog_HDRColorScale = 0x3160;
	constexpr uint64_t CBasePlayer_m_skybox3d_fog_blend = 0x3159;
	constexpr uint64_t CBasePlayer_m_skybox3d_fog_colorPrimary = 0x3124;
	constexpr uint64_t CBasePlayer_m_skybox3d_fog_colorSecondary = 0x3128;
	constexpr uint64_t CBasePlayer_m_skybox3d_fog_dirPrimary = 0x3118;
	constexpr uint64_t CBasePlayer_m_skybox3d_fog_enable = 0x3158;
	constexpr uint64_t CBasePlayer_m_skybox3d_fog_end = 0x3138;
	constexpr uint64_t CBasePlayer_m_skybox3d_fog_maxdensity = 0x3140;
	constexpr uint64_t CBasePlayer_m_skybox3d_fog_start = 0x3134;
	constexpr uint64_t CBasePlayer_m_skybox3d_origin = 0x3104;
	constexpr uint64_t CBasePlayer_m_skybox3d_scale = 0x3100;
	constexpr uint64_t CBasePlayer_m_szLastPlaceName = 0x35c4;
	constexpr uint64_t CBasePlayer_m_uCameraManGraphs = 0x3390;
	constexpr uint64_t CBasePlayer_m_ubEFNoInterpParity = 0x35e8;
	constexpr uint64_t CBasePlayer_m_vecBaseVelocity = 0x120;
	constexpr uint64_t CBasePlayer_m_vecConstraintCenter = 0x3358;
	constexpr uint64_t CBasePlayer_m_vecLadderNormal = 0x3240;
	constexpr uint64_t CBasePlayer_m_vecVelocity_0_ = 0x114;
	constexpr uint64_t CBasePlayer_m_vecVelocity_1_ = 0x118;
	constexpr uint64_t CBasePlayer_m_vecVelocity_2_ = 0x11c;
	constexpr uint64_t CBasePlayer_m_vecViewOffset_0_ = 0x108;
	constexpr uint64_t CBasePlayer_m_vecViewOffset_1_ = 0x10c;
	constexpr uint64_t CBasePlayer_m_vecViewOffset_2_ = 0x110;
	constexpr uint64_t CBasePlayer_m_viewPunchAngle = 0x3030;
	constexpr uint64_t CBasePlayer_pl = 0x31e0;
	constexpr uint64_t CBaseTeamObjectiveResource_m_bBlocked = 0x1c5c;
	constexpr uint64_t CBaseTeamObjectiveResource_m_bCPIsVisible = 0xa54;
	constexpr uint64_t CBaseTeamObjectiveResource_m_bControlPointsReset = 0x9e9;
	constexpr uint64_t CBaseTeamObjectiveResource_m_bInMiniRound = 0x12dc;
	constexpr uint64_t CBaseTeamObjectiveResource_m_bPlayingMiniRounds = 0x9e8;
	constexpr uint64_t CBaseTeamObjectiveResource_m_bTeamCanCap = 0x119c;
	constexpr uint64_t CBaseTeamObjectiveResource_m_flLazyCapPerc = 0xa5c;
	constexpr uint64_t CBaseTeamObjectiveResource_m_flPathDistance = 0x1afc;
	constexpr uint64_t CBaseTeamObjectiveResource_m_flTeamCapTime = 0xd9c;
	constexpr uint64_t CBaseTeamObjectiveResource_m_iBaseControlPoints = 0x125c;
	constexpr uint64_t CBaseTeamObjectiveResource_m_iCappingTeam = 0x1c1c;
	constexpr uint64_t CBaseTeamObjectiveResource_m_iNumControlPoints = 0x9e0;
	constexpr uint64_t CBaseTeamObjectiveResource_m_iNumTeamMembers = 0x1b1c;
	constexpr uint64_t CBaseTeamObjectiveResource_m_iOwner = 0x1c64;
	constexpr uint64_t CBaseTeamObjectiveResource_m_iPreviousPoints = 0xe9c;
	constexpr uint64_t CBaseTeamObjectiveResource_m_iStopWatchTimer = 0x9dc;
	constexpr uint64_t CBaseTeamObjectiveResource_m_iTeamBaseIcons = 0x11dc;
	constexpr uint64_t CBaseTeamObjectiveResource_m_iTeamIcons = 0xa9c;
	constexpr uint64_t CBaseTeamObjectiveResource_m_iTeamInZone = 0x1c3c;
	constexpr uint64_t CBaseTeamObjectiveResource_m_iTeamOverlays = 0xb9c;
	constexpr uint64_t CBaseTeamObjectiveResource_m_iTeamReqCappers = 0xc9c;
	constexpr uint64_t CBaseTeamObjectiveResource_m_iTimerToShowInHUD = 0x9d8;
	constexpr uint64_t CBaseTeamObjectiveResource_m_iUpdateCapHudParity = 0x9ec;
	constexpr uint64_t CBaseTeamObjectiveResource_m_iWarnOnCap = 0x12e4;
	constexpr uint64_t CBaseTeamObjectiveResource_m_iszWarnSound_0_ = 0x1304;
	constexpr uint64_t CBaseTeamObjectiveResource_m_pszCapLayoutInHUD = 0x1cec;
	constexpr uint64_t CBaseToggle_m_flMoveTargetTime = 0x9fc;
	constexpr uint64_t CBaseToggle_m_movementType = 0x9f8;
	constexpr uint64_t CBaseToggle_m_vecFinalDest = 0x9ec;
	constexpr uint64_t CBaseTrigger_m_bClientSidePredicted = 0xa08;
	constexpr uint64_t CBaseTrigger_m_spawnflags = 0x2c8;
	constexpr uint64_t CBaseViewModel_m_bShouldIgnoreOffsetAndAccuracy = 0x29a0;
	constexpr uint64_t CBaseViewModel_m_fEffects = 0xf0;
	constexpr uint64_t CBaseViewModel_m_hOwner = 0x29dc;
	constexpr uint64_t CBaseViewModel_m_hWeapon = 0x29d8;
	constexpr uint64_t CBaseViewModel_m_nAnimationParity = 0x29d4;
	constexpr uint64_t CBaseViewModel_m_nBody = 0xa20;
	constexpr uint64_t CBaseViewModel_m_nModelIndex = 0x258;
	constexpr uint64_t CBaseViewModel_m_nMuzzleFlashParity = 0xa64;
	constexpr uint64_t CBaseViewModel_m_nNewSequenceParity = 0xa44;
	constexpr uint64_t CBaseViewModel_m_nResetEventsParity = 0xa48;
	constexpr uint64_t CBaseViewModel_m_nSequence = 0x28c0;
	constexpr uint64_t CBaseViewModel_m_nSkin = 0xa1c;
	constexpr uint64_t CBaseViewModel_m_nViewModelIndex = 0x29d0;
	constexpr uint64_t CBaseWeaponWorldModel_m_fEffects = 0xf0;
	constexpr uint64_t CBaseWeaponWorldModel_m_hCombatWeaponParent = 0x2a00;
	constexpr uint64_t CBaseWeaponWorldModel_m_nBody = 0xa20;
	constexpr uint64_t CBaseWeaponWorldModel_m_nModelIndex = 0x258;
	constexpr uint64_t CBaseWeaponWorldModel_moveparent = 0x148;
	constexpr uint64_t CBeamSpotlight_m_bHasDynamicLight = 0x9e5;
	constexpr uint64_t CBeamSpotlight_m_bSpotlightOn = 0x9e4;
	constexpr uint64_t CBeamSpotlight_m_flRotationSpeed = 0x9e0;
	constexpr uint64_t CBeamSpotlight_m_flSpotlightGoalWidth = 0x9ec;
	constexpr uint64_t CBeamSpotlight_m_flSpotlightMaxLength = 0x9e8;
	constexpr uint64_t CBeamSpotlight_m_nHaloIndex = 0x9d8;
	constexpr uint64_t CBeamSpotlight_m_nRotationAxis = 0x9dc;
	constexpr uint64_t CBeam_m_clrRender = 0x70;
	constexpr uint64_t CBeam_m_fAmplitude = 0xa5c;
	constexpr uint64_t CBeam_m_fEndWidth = 0xa50;
	constexpr uint64_t CBeam_m_fFadeLength = 0xa54;
	constexpr uint64_t CBeam_m_fHaloScale = 0xa58;
	constexpr uint64_t CBeam_m_fSpeed = 0xa64;
	constexpr uint64_t CBeam_m_fStartFrame = 0xa60;
	constexpr uint64_t CBeam_m_fWidth = 0xa4c;
	constexpr uint64_t CBeam_m_flFrame = 0xa68;
	constexpr uint64_t CBeam_m_flFrameRate = 0x9d8;
	constexpr uint64_t CBeam_m_flHDRColorScale = 0x9dc;
	constexpr uint64_t CBeam_m_hAttachEntity = 0x9fc;
	constexpr uint64_t CBeam_m_nAttachIndex = 0xa24;
	constexpr uint64_t CBeam_m_nBeamFlags = 0x9f8;
	constexpr uint64_t CBeam_m_nBeamType = 0x9f4;
	constexpr uint64_t CBeam_m_nClipStyle = 0xa6c;
	constexpr uint64_t CBeam_m_nHaloIndex = 0x9f0;
	constexpr uint64_t CBeam_m_nModelIndex = 0x258;
	constexpr uint64_t CBeam_m_nNumBeamEnts = 0x9e8;
	constexpr uint64_t CBeam_m_nRenderFX = 0x25a;
	constexpr uint64_t CBeam_m_nRenderMode = 0x25b;
	constexpr uint64_t CBeam_m_vecEndPos = 0xa70;
	constexpr uint64_t CBeam_m_vecOrigin = 0x138;
	constexpr uint64_t CBeam_moveparent = 0x148;
	constexpr uint64_t CBoneFollower_m_modelIndex = 0x9d8;
	constexpr uint64_t CBoneFollower_m_solidIndex = 0x9dc;
	constexpr uint64_t CBreachChargeProjectile_m_bShouldExplode = 0x29e0;
	constexpr uint64_t CBreachChargeProjectile_m_nParentBoneIndex = 0x29e8;
	constexpr uint64_t CBreachChargeProjectile_m_vecParentBonePos = 0x29ec;
	constexpr uint64_t CBreachChargeProjectile_m_weaponThatThrewMe = 0x29e4;
	constexpr uint64_t CBreakableProp_m_bClientPhysics = 0x29a0;
	constexpr uint64_t CBreakableProp_m_qPreferredPlayerCarryAngles = 0x2994;
	constexpr uint64_t CBreakableSurface_m_RawPanelBitVec = 0xa2c;
	constexpr uint64_t CBreakableSurface_m_bIsBroken = 0xa04;
	constexpr uint64_t CBreakableSurface_m_flPanelHeight = 0x9e8;
	constexpr uint64_t CBreakableSurface_m_flPanelWidth = 0x9e4;
	constexpr uint64_t CBreakableSurface_m_nNumHigh = 0x9e0;
	constexpr uint64_t CBreakableSurface_m_nNumWide = 0x9dc;
	constexpr uint64_t CBreakableSurface_m_vCorner = 0x9f8;
	constexpr uint64_t CBreakableSurface_m_vNormal = 0x9ec;
	constexpr uint64_t CBumpMineProjectile_m_nParentBoneIndex = 0x29e4;
	constexpr uint64_t CBumpMineProjectile_m_vecParentBonePos = 0x29e8;
	constexpr uint64_t CC4_m_bBombPlacedAnimation = 0x3408;
	constexpr uint64_t CC4_m_bShowC4LED = 0x3409;
	constexpr uint64_t CC4_m_fArmedTime = 0x3404;
	constexpr uint64_t CCSGameRulesProxy_m_GGProgressiveWeaponOrderCT = 0x8c;
	constexpr uint64_t CCSGameRulesProxy_m_GGProgressiveWeaponOrderT = 0x17c;
	constexpr uint64_t CCSGameRulesProxy_m_MatchDevice = 0x44c;
	constexpr uint64_t CCSGameRulesProxy_m_RetakeRules = 0x13c0;
	constexpr uint64_t CCSGameRulesProxy_m_SpawnTileState = 0xe18;
	constexpr uint64_t CCSGameRulesProxy_m_SurvivalGameRuleDecisionTypes = 0x1328;
	constexpr uint64_t CCSGameRulesProxy_m_SurvivalGameRuleDecisionValues = 0x1368;
	constexpr uint64_t CCSGameRulesProxy_m_SurvivalRules = 0xd00;
	constexpr uint64_t CCSGameRulesProxy_m_arrFeaturedGiftersAccounts = 0x8a4;
	constexpr uint64_t CCSGameRulesProxy_m_arrFeaturedGiftersGifts = 0x8b4;
	constexpr uint64_t CCSGameRulesProxy_m_arrProhibitedItemIndices = 0x8c4;
	constexpr uint64_t CCSGameRulesProxy_m_arrTournamentActiveCasterAccounts = 0x98c;
	constexpr uint64_t CCSGameRulesProxy_m_bAnyHostageReached = 0x70;
	constexpr uint64_t CCSGameRulesProxy_m_bBlockersPresent = 0x14bc;
	constexpr uint64_t CCSGameRulesProxy_m_bBombDropped = 0x9a4;
	constexpr uint64_t CCSGameRulesProxy_m_bBombPlanted = 0x9a5;
	constexpr uint64_t CCSGameRulesProxy_m_bCTCantBuy = 0x9b1;
	constexpr uint64_t CCSGameRulesProxy_m_bCTTimeOutActive = 0x2d;
	constexpr uint64_t CCSGameRulesProxy_m_bDMBonusActive = 0x45e;
	constexpr uint64_t CCSGameRulesProxy_m_bFreezePeriod = 0x20;
	constexpr uint64_t CCSGameRulesProxy_m_bGameRestart = 0x54;
	constexpr uint64_t CCSGameRulesProxy_m_bHasMatchStarted = 0x450;
	constexpr uint64_t CCSGameRulesProxy_m_bIsDroppingItems = 0x880;
	constexpr uint64_t CCSGameRulesProxy_m_bIsQuestEligible = 0x881;
	constexpr uint64_t CCSGameRulesProxy_m_bIsQueuedMatchmaking = 0x74;
	constexpr uint64_t CCSGameRulesProxy_m_bIsValveDS = 0x7c;
	constexpr uint64_t CCSGameRulesProxy_m_bLogoMap = 0x7d;
	constexpr uint64_t CCSGameRulesProxy_m_bMapHasBombTarget = 0x71;
	constexpr uint64_t CCSGameRulesProxy_m_bMapHasBuyZone = 0x73;
	constexpr uint64_t CCSGameRulesProxy_m_bMapHasRescueZone = 0x72;
	constexpr uint64_t CCSGameRulesProxy_m_bMatchWaitingForResume = 0x41;
	constexpr uint64_t CCSGameRulesProxy_m_bPlayAllStepSoundsOnServer = 0x7e;
	constexpr uint64_t CCSGameRulesProxy_m_bRoundInProgress = 0x14bd;
	constexpr uint64_t CCSGameRulesProxy_m_bTCantBuy = 0x9b0;
	constexpr uint64_t CCSGameRulesProxy_m_bTechnicalTimeOut = 0x40;
	constexpr uint64_t CCSGameRulesProxy_m_bTerroristTimeOutActive = 0x2c;
	constexpr uint64_t CCSGameRulesProxy_m_bWarmupPeriod = 0x21;
	constexpr uint64_t CCSGameRulesProxy_m_eRoundWinReason = 0x9ac;
	constexpr uint64_t CCSGameRulesProxy_m_fMatchStartTime = 0x48;
	constexpr uint64_t CCSGameRulesProxy_m_fRoundStartTime = 0x4c;
	constexpr uint64_t CCSGameRulesProxy_m_fWarmupPeriodEnd = 0x24;
	constexpr uint64_t CCSGameRulesProxy_m_fWarmupPeriodStart = 0x28;
	constexpr uint64_t CCSGameRulesProxy_m_flCMMItemDropRevealEndTime = 0x87c;
	constexpr uint64_t CCSGameRulesProxy_m_flCMMItemDropRevealStartTime = 0x878;
	constexpr uint64_t CCSGameRulesProxy_m_flDMBonusStartTime = 0x454;
	constexpr uint64_t CCSGameRulesProxy_m_flDMBonusTimeLength = 0x458;
	constexpr uint64_t CCSGameRulesProxy_m_flGameStartTime = 0x58;
	constexpr uint64_t CCSGameRulesProxy_m_flGuardianBuyUntilTime = 0x9b4;
	constexpr uint64_t CCSGameRulesProxy_m_flNextRespawnWave = 0xba0;
	constexpr uint64_t CCSGameRulesProxy_m_flRestartRoundTime = 0x50;
	constexpr uint64_t CCSGameRulesProxy_m_flSpawnSelectionTimeEnd = 0xefc;
	constexpr uint64_t CCSGameRulesProxy_m_flSpawnSelectionTimeStart = 0xef8;
	constexpr uint64_t CCSGameRulesProxy_m_flSurvivalStartTime = 0x13a8;
	constexpr uint64_t CCSGameRulesProxy_m_flTabletHexOriginX = 0xf08;
	constexpr uint64_t CCSGameRulesProxy_m_flTabletHexOriginY = 0xf0c;
	constexpr uint64_t CCSGameRulesProxy_m_flTerroristTimeOutRemaining = 0x30;
	constexpr uint64_t CCSGameRulesProxy_m_gamePhase = 0x60;
	constexpr uint64_t CCSGameRulesProxy_m_iActiveAssassinationTargetMissionID = 0xc20;
	constexpr uint64_t CCSGameRulesProxy_m_iBombSite = 0x14c4;
	constexpr uint64_t CCSGameRulesProxy_m_iFirstSecondHalfRound = 0x14c0;
	constexpr uint64_t CCSGameRulesProxy_m_iHostagesRemaining = 0x6c;
	constexpr uint64_t CCSGameRulesProxy_m_iMatchStats_PlayersAlive_CT = 0xa30;
	constexpr uint64_t CCSGameRulesProxy_m_iMatchStats_PlayersAlive_T = 0xaa8;
	constexpr uint64_t CCSGameRulesProxy_m_iMatchStats_RoundResults = 0x9b8;
	constexpr uint64_t CCSGameRulesProxy_m_iNumConsecutiveCTLoses = 0xc7c;
	constexpr uint64_t CCSGameRulesProxy_m_iNumConsecutiveTerroristLoses = 0xc80;
	constexpr uint64_t CCSGameRulesProxy_m_iNumGunGameProgressiveWeaponsT = 0x84;
	constexpr uint64_t CCSGameRulesProxy_m_iPlayerSpawnHexIndices = 0xd18;
	constexpr uint64_t CCSGameRulesProxy_m_iRoundTime = 0x44;
	constexpr uint64_t CCSGameRulesProxy_m_iRoundWinStatus = 0x9a8;
	constexpr uint64_t CCSGameRulesProxy_m_iSpectatorSlotCount = 0x88;
	constexpr uint64_t CCSGameRulesProxy_m_nCTTimeOuts = 0x3c;
	constexpr uint64_t CCSGameRulesProxy_m_nEndMatchMapGroupVoteOptions = 0xc50;
	constexpr uint64_t CCSGameRulesProxy_m_nEndMatchMapGroupVoteTypes = 0xc28;
	constexpr uint64_t CCSGameRulesProxy_m_nEndMatchMapVoteWinner = 0xc78;
	constexpr uint64_t CCSGameRulesProxy_m_nGuardianModeSpecialKillsRemaining = 0x888;
	constexpr uint64_t CCSGameRulesProxy_m_nGuardianModeSpecialWeaponNeeded = 0x88c;
	constexpr uint64_t CCSGameRulesProxy_m_nGuardianModeWaveNumber = 0x884;
	constexpr uint64_t CCSGameRulesProxy_m_nHalloweenMaskListSeed = 0x9a0;
	constexpr uint64_t CCSGameRulesProxy_m_nMatchSeed = 0x14b8;
	constexpr uint64_t CCSGameRulesProxy_m_nNextMapInMapgroup = 0x460;
	constexpr uint64_t CCSGameRulesProxy_m_nOvertimePlaying = 0x68;
	constexpr uint64_t CCSGameRulesProxy_m_nQueuedMatchmakingMode = 0x78;
	constexpr uint64_t CCSGameRulesProxy_m_nTerroristTimeOuts = 0x38;
	constexpr uint64_t CCSGameRulesProxy_m_nTournamentPredictionsPct = 0x874;
	constexpr uint64_t CCSGameRulesProxy_m_numBestOfMaps = 0x99c;
	constexpr uint64_t CCSGameRulesProxy_m_numGlobalGifters = 0x89c;
	constexpr uint64_t CCSGameRulesProxy_m_numGlobalGiftsGiven = 0x898;
	constexpr uint64_t CCSGameRulesProxy_m_numGlobalGiftsPeriodSeconds = 0x8a0;
	constexpr uint64_t CCSGameRulesProxy_m_roundData_playerPositions = 0x1120;
	constexpr uint64_t CCSGameRulesProxy_m_roundData_playerTeams = 0x1224;
	constexpr uint64_t CCSGameRulesProxy_m_roundData_playerXuids = 0xf18;
	constexpr uint64_t CCSGameRulesProxy_m_spawnStage = 0xf04;
	constexpr uint64_t CCSGameRulesProxy_m_szMatchStatTxt = 0x66c;
	constexpr uint64_t CCSGameRulesProxy_m_szTournamentEventName = 0x464;
	constexpr uint64_t CCSGameRulesProxy_m_szTournamentEventStage = 0x568;
	constexpr uint64_t CCSGameRulesProxy_m_szTournamentPredictionsTxt = 0x770;
	constexpr uint64_t CCSGameRulesProxy_m_timeUntilNextPhaseStarts = 0x5c;
	constexpr uint64_t CCSGameRulesProxy_m_totalRoundsPlayed = 0x64;
	constexpr uint64_t CCSGameRulesProxy_m_unDMBonusWeaponLoadoutSlot = 0x45c;
	constexpr uint64_t CCSGameRulesProxy_m_vecPlayAreaMaxs = 0xd0c;
	constexpr uint64_t CCSGameRulesProxy_m_vecPlayAreaMins = 0xd00;
	constexpr uint64_t CCSPlayerResource_m_bControllingBot = 0x1fdc;
	constexpr uint64_t CCSPlayerResource_m_bEndMatchNextMapAllVoted = 0x6b8c;
	constexpr uint64_t CCSPlayerResource_m_bHasCommunicationAbuseMute = 0x51e4;
	constexpr uint64_t CCSPlayerResource_m_bHasDefuser = 0x17f8;
	constexpr uint64_t CCSPlayerResource_m_bHasHelmet = 0x1839;
	constexpr uint64_t CCSPlayerResource_m_bHostageAlive = 0x167c;
	constexpr uint64_t CCSPlayerResource_m_bombsiteCenterA = 0x1664;
	constexpr uint64_t CCSPlayerResource_m_bombsiteCenterB = 0x1670;
	constexpr uint64_t CCSPlayerResource_m_hostageRescueX = 0x16c4;
	constexpr uint64_t CCSPlayerResource_m_hostageRescueY = 0x16d4;
	constexpr uint64_t CCSPlayerResource_m_iArmor = 0x187c;
	constexpr uint64_t CCSPlayerResource_m_iBotDifficulty = 0x42a8;
	constexpr uint64_t CCSPlayerResource_m_iCashSpentThisRound = 0x4ac8;
	constexpr uint64_t CCSPlayerResource_m_iCompTeammateColor = 0x1cd0;
	constexpr uint64_t CCSPlayerResource_m_iCompetitiveRankType = 0x1c8c;
	constexpr uint64_t CCSPlayerResource_m_iCompetitiveRanking = 0x1a84;
	constexpr uint64_t CCSPlayerResource_m_iCompetitiveWins = 0x1b88;
	constexpr uint64_t CCSPlayerResource_m_iControlledByPlayer = 0x2124;
	constexpr uint64_t CCSPlayerResource_m_iGunGameLevel = 0x49c4;
	constexpr uint64_t CCSPlayerResource_m_iLifetimeEnd = 0x1ed8;
	constexpr uint64_t CCSPlayerResource_m_iMVPs = 0x16f4;
	constexpr uint64_t CCSPlayerResource_m_iMatchStats_3k_Total = 0x5e14;
	constexpr uint64_t CCSPlayerResource_m_iMatchStats_4k_Total = 0x5f18;
	constexpr uint64_t CCSPlayerResource_m_iMatchStats_5k_Total = 0x601c;
	constexpr uint64_t CCSPlayerResource_m_iMatchStats_Assists_Total = 0x5c0c;
	constexpr uint64_t CCSPlayerResource_m_iMatchStats_CashEarned_Total = 0x6738;
	constexpr uint64_t CCSPlayerResource_m_iMatchStats_Damage_Total = 0x6120;
	constexpr uint64_t CCSPlayerResource_m_iMatchStats_Deaths_Total = 0x5d10;
	constexpr uint64_t CCSPlayerResource_m_iMatchStats_EnemiesFlashed_Total = 0x6940;
	constexpr uint64_t CCSPlayerResource_m_iMatchStats_EquipmentValue_Total = 0x6224;
	constexpr uint64_t CCSPlayerResource_m_iMatchStats_HeadShotKills_Total = 0x6530;
	constexpr uint64_t CCSPlayerResource_m_iMatchStats_KillReward_Total = 0x6328;
	constexpr uint64_t CCSPlayerResource_m_iMatchStats_Kills_Total = 0x5b08;
	constexpr uint64_t CCSPlayerResource_m_iMatchStats_LiveTime_Total = 0x642c;
	constexpr uint64_t CCSPlayerResource_m_iMatchStats_Objective_Total = 0x6634;
	constexpr uint64_t CCSPlayerResource_m_iMatchStats_UtilityDamage_Total = 0x683c;
	constexpr uint64_t CCSPlayerResource_m_iPlayerC4 = 0x165c;
	constexpr uint64_t CCSPlayerResource_m_iPlayerVIP = 0x1660;
	constexpr uint64_t CCSPlayerResource_m_iScore = 0x1980;
	constexpr uint64_t CCSPlayerResource_m_iTotalCashSpent = 0x48c0;
	constexpr uint64_t CCSPlayerResource_m_isHostageFollowingSomeone = 0x1688;
	constexpr uint64_t CCSPlayerResource_m_nActiveCoinRank = 0x4bcc;
	constexpr uint64_t CCSPlayerResource_m_nCharacterDefIndex = 0x47bc;
	constexpr uint64_t CCSPlayerResource_m_nEndMatchNextMapVotes = 0x6a88;
	constexpr uint64_t CCSPlayerResource_m_nMusicID = 0x4cd0;
	constexpr uint64_t CCSPlayerResource_m_nPersonaDataPublicCommendsFriendly = 0x50e0;
	constexpr uint64_t CCSPlayerResource_m_nPersonaDataPublicCommendsLeader = 0x4ed8;
	constexpr uint64_t CCSPlayerResource_m_nPersonaDataPublicCommendsTeacher = 0x4fdc;
	constexpr uint64_t CCSPlayerResource_m_nPersonaDataPublicLevel = 0x4dd4;
	constexpr uint64_t CCSPlayerResource_m_szClan = 0x43ac;
	constexpr uint64_t CCSPlayerResource_m_szCrosshairCodes = 0x5225;
	constexpr uint64_t CCSPlayer_m_ArmorValue = 0x117cc;
	constexpr uint64_t CCSPlayer_m_EquippedLoadoutItemDefIndices = 0x116a4;
	constexpr uint64_t CCSPlayer_m_angEyeAngles = 0x117d0;
	constexpr uint64_t CCSPlayer_m_angEyeAngles_0_ = 0x117d0;
	constexpr uint64_t CCSPlayer_m_angEyeAngles_1_ = 0x117d4;
	constexpr uint64_t CCSPlayer_m_bCanMoveDuringFreezePeriod = 0x99d4;
	constexpr uint64_t CCSPlayer_m_bDuckOverride = 0x103e8;
	constexpr uint64_t CCSPlayer_m_bGunGameImmunity = 0x9990;
	constexpr uint64_t CCSPlayer_m_bHasControlledBotThisRound = 0x11a5c;
	constexpr uint64_t CCSPlayer_m_bHasDefuser = 0x117dc;
	constexpr uint64_t CCSPlayer_m_bHasHeavyArmor = 0x117c1;
	constexpr uint64_t CCSPlayer_m_bHasHelmet = 0x117c0;
	constexpr uint64_t CCSPlayer_m_bHasMovedSinceSpawn = 0x9991;
	constexpr uint64_t CCSPlayer_m_bHasNightVision = 0x103ea;
	constexpr uint64_t CCSPlayer_m_bHasParachute = 0x117a4;
	constexpr uint64_t CCSPlayer_m_bHideTargetID = 0x119f0;
	constexpr uint64_t CCSPlayer_m_bHud_MiniScoreHidden = 0x117fe;
	constexpr uint64_t CCSPlayer_m_bHud_RadarHidden = 0x117ff;
	constexpr uint64_t CCSPlayer_m_bInBombZone = 0x99b4;
	constexpr uint64_t CCSPlayer_m_bInBuyZone = 0x99b5;
	constexpr uint64_t CCSPlayer_m_bInHostageRescueZone = 0x117dd;
	constexpr uint64_t CCSPlayer_m_bInNoDefuseArea = 0x99b6;
	constexpr uint64_t CCSPlayer_m_bIsControllingBot = 0x11a4d;
	constexpr uint64_t CCSPlayer_m_bIsDefusing = 0x997c;
	constexpr uint64_t CCSPlayer_m_bIsGrabbingHostage = 0x997d;
	constexpr uint64_t CCSPlayer_m_bIsHoldingLookAtWeapon = 0x11975;
	constexpr uint64_t CCSPlayer_m_bIsLookingAtWeapon = 0x11974;
	constexpr uint64_t CCSPlayer_m_bIsPlayerGhost = 0x9ae1;
	constexpr uint64_t CCSPlayer_m_bIsRescuing = 0x9984;
	constexpr uint64_t CCSPlayer_m_bIsRespawningForDMBonus = 0x99bd;
	constexpr uint64_t CCSPlayer_m_bIsScoped = 0x9974;
	constexpr uint64_t CCSPlayer_m_bIsSpawnRappelling = 0x103fd;
	constexpr uint64_t CCSPlayer_m_bIsWalking = 0x9975;
	constexpr uint64_t CCSPlayer_m_bKilledByTaser = 0x99cd;
	constexpr uint64_t CCSPlayer_m_bMadeFinalGunGameProgressiveKill = 0x9992;
	constexpr uint64_t CCSPlayer_m_bNightVisionOn = 0x103e9;
	constexpr uint64_t CCSPlayer_m_bPlayerDominated = 0x118e8;
	constexpr uint64_t CCSPlayer_m_bPlayerDominatingMe = 0x11929;
	constexpr uint64_t CCSPlayer_m_bResumeZoom = 0x9976;
	constexpr uint64_t CCSPlayer_m_bRetakesHasDefuseKit = 0x11cfc;
	constexpr uint64_t CCSPlayer_m_bRetakesMVPLastRound = 0x11cfd;
	constexpr uint64_t CCSPlayer_m_bStrafing = 0x9ae0;
	constexpr uint64_t CCSPlayer_m_bWaitForNoAttack = 0x99BC;
	constexpr uint64_t CCSPlayer_m_cycleLatch = 0x118e0;
	constexpr uint64_t CCSPlayer_m_fImmuneToGunGameDamageTime = 0x9988;
	constexpr uint64_t CCSPlayer_m_fMolotovDamageTime = 0x99b0;
	constexpr uint64_t CCSPlayer_m_fMolotovUseTime = 0x99ac;
	constexpr uint64_t CCSPlayer_m_flAutoMoveStartTime = 0x9b04;
	constexpr uint64_t CCSPlayer_m_flAutoMoveTargetTime = 0x9b08;
	constexpr uint64_t CCSPlayer_m_flDetectedByEnemySensorTime = 0x99c4;
	constexpr uint64_t CCSPlayer_m_flFlashDuration = 0x10470;
	constexpr uint64_t CCSPlayer_m_flFlashMaxAlpha = 0x1046c;
	constexpr uint64_t CCSPlayer_m_flGroundAccelLinearFracLastTime = 0x103f0;
	constexpr uint64_t CCSPlayer_m_flGuardianTooFarDistFrac = 0x99c0;
	constexpr uint64_t CCSPlayer_m_flHealthShotBoostExpirationTime = 0x10418;
	constexpr uint64_t CCSPlayer_m_flLastExoJumpTime = 0x9b0c;
	constexpr uint64_t CCSPlayer_m_flLowerBodyYawTarget = 0x9adc;
	constexpr uint64_t CCSPlayer_m_flProgressBarStartTime = 0x103d4;
	constexpr uint64_t CCSPlayer_m_flStamina = 0x103d8;
	constexpr uint64_t CCSPlayer_m_flThirdpersonRecoil = 0x119EC;
	constexpr uint64_t CCSPlayer_m_flVelocityModifier = 0x103ec;
	constexpr uint64_t CCSPlayer_m_hCarriedHostageProp = 0x1044c;
	constexpr uint64_t CCSPlayer_m_hPlayerPing = 0x10440;
	constexpr uint64_t CCSPlayer_m_hSurvivalAssassinationTarget = 0x10414;
	constexpr uint64_t CWeaponCSBaseGun_m_zoomLevel = 0x33E0;
	constexpr uint64_t CWeaponCSBase_m_fAccuracyPenalty = 0x3340;
	constexpr uint64_t CWeaponCSBase_m_fLastShotTime = 0x33b8;
	constexpr uint64_t CWeaponCSBase_m_flPostponeFireReadyTime = 0x335c;
	constexpr uint64_t CWeaponCSBase_m_flRecoilIndex = 0x3354;
	constexpr uint64_t string_CCSPlayer_m_bWaitForNoAttack = 0xbfa820;
	constexpr uint64_t string_CCSPlayer_m_iMoveState = 0xbfa840;
	constexpr uint64_t string_CCSPlayer_m_bStrafing = 0xbfb6f0;
	constexpr uint64_t string_CCSPlayer_m_flVelocityModifier = 0xbfa524;
	constexpr uint64_t string_CCSPlayer_m_flThirdpersonRecoil = 0xbfb668;
	constexpr uint64_t string_CBaseCSGrenade_m_fThrowTime = 0xc7effc;
	constexpr uint64_t string_CBaseCSGrenade_m_bIsHeldByPlayer = 0xc7efdc;
	constexpr uint64_t CPropVehicleChoreoGeneric_m_hPlayer = 0x2a04;
	constexpr uint64_t CPropVehicleChoreoGeneric_m_vecEyeExitEndpoint = 0x2a10;
	constexpr uint64_t CPropVehicleChoreoGeneric_m_vehicleView_bClampEyeAngles = 0x2aa0;
	constexpr uint64_t CPropVehicleChoreoGeneric_m_vehicleView_flFOV = 0x2ab4;
	constexpr uint64_t CPropVehicleChoreoGeneric_m_vehicleView_flPitchCurveLinear = 0x2aa8;
	constexpr uint64_t CPropVehicleChoreoGeneric_m_vehicleView_flPitchCurveZero = 0x2aa4;
	constexpr uint64_t CPropVehicleChoreoGeneric_m_vehicleView_flPitchMax = 0x2ac4;
	constexpr uint64_t CPropVehicleChoreoGeneric_m_vehicleView_flPitchMin = 0x2ac0;
	constexpr uint64_t CPropVehicleChoreoGeneric_m_vehicleView_flRollCurveLinear = 0x2ab0;
	constexpr uint64_t CPropVehicleChoreoGeneric_m_vehicleView_flRollCurveZero = 0x2aac;
	constexpr uint64_t CPropVehicleChoreoGeneric_m_vehicleView_flYawMax = 0x2abc;
	constexpr uint64_t CPropVehicleChoreoGeneric_m_vehicleView_flYawMin = 0x2ab8;
	constexpr uint64_t CPropVehicleDriveable_m_bExitAnimOn = 0x29d1;
	constexpr uint64_t CPropVehicleDriveable_m_bHasGun = 0x2a1c;
	constexpr uint64_t CPropVehicleDriveable_m_bUnableToFire = 0x2a1d;
	constexpr uint64_t CPropVehicleDriveable_m_flThrottle = 0x29a0;
	constexpr uint64_t CPropVehicleDriveable_m_hPlayer = 0x2994;
	constexpr uint64_t CPropVehicleDriveable_m_nBoostTimeLeft = 0x29a4;
	constexpr uint64_t CPropVehicleDriveable_m_nHasBoost = 0x29a8;
	constexpr uint64_t CPropVehicleDriveable_m_nRPM = 0x299c;
	constexpr uint64_t CPropVehicleDriveable_m_nScannerDisabledVehicle = 0x29b0;
	constexpr uint64_t CPropVehicleDriveable_m_nScannerDisabledWeapons = 0x29ac;
	constexpr uint64_t CPropVehicleDriveable_m_nSpeed = 0x2998;
	constexpr uint64_t CPropVehicleDriveable_m_vecEyeExitEndpoint = 0x2a10;
	constexpr uint64_t CPropVehicleDriveable_m_vecGunCrosshair = 0x29d8;
	constexpr uint64_t CProp_Hallucination_m_bEnabled = 0x29a9;
	constexpr uint64_t CProp_Hallucination_m_fRechargeTime = 0x29b0;
	constexpr uint64_t CProp_Hallucination_m_fVisibleTime = 0x29ac;
	constexpr uint64_t CRagdollManager_m_iCurrentMaxRagdollCount = 0x9d8;
	constexpr uint64_t CRagdollPropAttached_m_attachmentPointBoneSpace = 0x2ca0;
	constexpr uint64_t CRagdollPropAttached_m_attachmentPointRagdollSpace = 0x2cb8;
	constexpr uint64_t CRagdollPropAttached_m_boneIndexAttached = 0x2cc8;
	constexpr uint64_t CRagdollProp_m_flBlendWeight = 0x2c90;
	constexpr uint64_t CRagdollProp_m_hUnragdoll = 0x2c8c;
	constexpr uint64_t CRagdollProp_m_ragAngles_0_ = 0x2ab0;
	constexpr uint64_t CRagdollProp_m_ragPos_0_ = 0x2990;
	constexpr uint64_t CRopeKeyframe_m_RopeFlags = 0xa10;
	constexpr uint64_t CRopeKeyframe_m_RopeLength = 0xcbc;
	constexpr uint64_t CRopeKeyframe_m_Slack = 0xcc0;
	constexpr uint64_t CRopeKeyframe_m_Subdiv = 0xcb8;
	constexpr uint64_t CRopeKeyframe_m_TextureScale = 0xcc4;
	constexpr uint64_t CRopeKeyframe_m_Width = 0xcd0;
	constexpr uint64_t CRopeKeyframe_m_bConstrainBetweenEndpoints = 0xd50;
	constexpr uint64_t CRopeKeyframe_m_fLockedPoints = 0xcc8;
	constexpr uint64_t CRopeKeyframe_m_flScrollSpeed = 0xa0c;
	constexpr uint64_t CRopeKeyframe_m_hEndPoint = 0xcb0;
	constexpr uint64_t CRopeKeyframe_m_hStartPoint = 0xcac;
	constexpr uint64_t CRopeKeyframe_m_iDefaultRopeMaterialModelIndex = 0xa18;
	constexpr uint64_t CRopeKeyframe_m_iEndAttachment = 0xcb6;
	constexpr uint64_t CRopeKeyframe_m_iParentAttachment = 0x2ec;
	constexpr uint64_t CRopeKeyframe_m_iRopeMaterialModelIndex = 0xa14;
	constexpr uint64_t CRopeKeyframe_m_iStartAttachment = 0xcb4;
	constexpr uint64_t CRopeKeyframe_m_nChangeCount = 0xccc;
	constexpr uint64_t CRopeKeyframe_m_nMaxCPULevel = 0x989;
	constexpr uint64_t CRopeKeyframe_m_nMaxGPULevel = 0x98b;
	constexpr uint64_t CRopeKeyframe_m_nMinCPULevel = 0x988;
	constexpr uint64_t CRopeKeyframe_m_nMinGPULevel = 0x98a;
	constexpr uint64_t CRopeKeyframe_m_nSegments = 0xca8;
	constexpr uint64_t CRopeKeyframe_m_vecOrigin = 0x138;
	constexpr uint64_t CRopeKeyframe_moveparent = 0x148;
	constexpr uint64_t CSceneEntity_m_bIsPlayingBack = 0x9dc;
	constexpr uint64_t CSceneEntity_m_bMultiplayer = 0x9de;
	constexpr uint64_t CSceneEntity_m_bPaused = 0x9dd;
	constexpr uint64_t CSceneEntity_m_flForceClientTime = 0x9e4;
	constexpr uint64_t CSceneEntity_m_nSceneStringIndex = 0x9e8;
	constexpr uint64_t CShadowControl_m_bEnableLocalLightShadows = 0x9ed;
	constexpr uint64_t CShadowControl_m_flShadowMaxDist = 0x9e8;
	constexpr uint64_t CShadowControl_m_shadowColor = 0x9e4;
	constexpr uint64_t CShadowControl_m_shadowDirection = 0x9d8;
	constexpr uint64_t CSlideshowDisplay_m_bEnabled = 0x9d8;
	constexpr uint64_t CSlideshowDisplay_m_bNoListRepeats = 0xb18;
	constexpr uint64_t CSlideshowDisplay_m_chCurrentSlideLists = 0xaf0;
	constexpr uint64_t CSlideshowDisplay_m_fMaxSlideTime = 0xb0c;
	constexpr uint64_t CSlideshowDisplay_m_fMinSlideTime = 0xb08;
	constexpr uint64_t CSlideshowDisplay_m_iCycleType = 0xb14;
	constexpr uint64_t CSlideshowDisplay_m_szDisplayText = 0x9d9;
	constexpr uint64_t CSmokeGrenadeProjectile_m_bDidSmokeEffect = 0x2a24;
	constexpr uint64_t CSmokeGrenadeProjectile_m_nSmokeEffectTickBegin = 0x2a20;
	constexpr uint64_t CSmokeStack_m_AmbientLight_m_flIntensity = 0xb4c;
	constexpr uint64_t CSmokeStack_m_AmbientLight_m_vColor = 0xb40;
	constexpr uint64_t CSmokeStack_m_AmbientLight_m_vPos = 0xb34;
	constexpr uint64_t CSmokeStack_m_DirLight_m_flIntensity = 0xb68;
	constexpr uint64_t CSmokeStack_m_DirLight_m_vPos = 0xb50;
	constexpr uint64_t CSmokeStack_m_EndSize = 0xb20;
	constexpr uint64_t CSmokeStack_m_JetLength = 0xb28;
	constexpr uint64_t CSmokeStack_m_Rate = 0xb24;
	constexpr uint64_t CSmokeStack_m_Speed = 0xb18;
	constexpr uint64_t CSmokeStack_m_SpreadSpeed = 0xb14;
	constexpr uint64_t CSmokeStack_m_StartSize = 0xb1c;
	constexpr uint64_t CSmokeStack_m_bEmit = 0xb2c;
	constexpr uint64_t CSmokeStack_m_flBaseSpread = 0xb30;
	constexpr uint64_t CSmokeStack_m_flRollSpeed = 0xbc0;
	constexpr uint64_t CSmokeStack_m_flTwist = 0xb84;
	constexpr uint64_t CSmokeStack_m_iMaterialModel = 0xb88;
	constexpr uint64_t CSmokeStack_m_vWind = 0xb78;
	constexpr uint64_t CSpatialEntity_m_bEnabled = 0xaf4;
	constexpr uint64_t CSpatialEntity_m_maxFalloff = 0x9e8;
	constexpr uint64_t CSpatialEntity_m_minFalloff = 0x9e4;
	constexpr uint64_t CSpatialEntity_m_vecOrigin = 0x9d8;
	constexpr uint64_t CSpotlightEnd_m_Radius = 0x9dc;
	constexpr uint64_t CSpotlightEnd_m_flLightScale = 0x9d8;
	constexpr uint64_t CSpriteTrail_m_flEndWidth = 0x107c;
	constexpr uint64_t CSpriteTrail_m_flLifeTime = 0x1074;
	constexpr uint64_t CSpriteTrail_m_flMinFadeLength = 0x1088;
	constexpr uint64_t CSpriteTrail_m_flSkyboxScale = 0x1098;
	constexpr uint64_t CSpriteTrail_m_flStartWidth = 0x1078;
	constexpr uint64_t CSpriteTrail_m_flStartWidthVariance = 0x1080;
	constexpr uint64_t CSpriteTrail_m_flTextureRes = 0x1084;
	constexpr uint64_t CSpriteTrail_m_vecSkyboxOrigin = 0x108c;
	constexpr uint64_t CSprite_m_bWorldSpaceScale = 0xa0c;
	constexpr uint64_t CSprite_m_flFrame = 0x9f4;
	constexpr uint64_t CSprite_m_flGlowProxySize = 0xa10;
	constexpr uint64_t CSprite_m_flHDRColorScale = 0xa14;
	constexpr uint64_t CSprite_m_flScaleTime = 0xa08;
	constexpr uint64_t CSprite_m_flSpriteFramerate = 0x9f0;
	constexpr uint64_t CSprite_m_flSpriteScale = 0xa04;
	constexpr uint64_t CSprite_m_hAttachedToEntity = 0x9e8;
	constexpr uint64_t CSprite_m_nAttachment = 0x9ec;
	constexpr uint64_t CSprite_m_nBrightness = 0x9fc;
	constexpr uint64_t CStatueProp_m_bShatter = 0x29d4;
	constexpr uint64_t CStatueProp_m_hInitBaseAnimating = 0x29d0;
	constexpr uint64_t CStatueProp_m_nShatterFlags = 0x29d8;
	constexpr uint64_t CStatueProp_m_vShatterForce = 0x29e8;
	constexpr uint64_t CStatueProp_m_vShatterPosition = 0x29dc;
	constexpr uint64_t CSteamJet_m_EndSize = 0xad0;
	constexpr uint64_t CSteamJet_m_JetLength = 0xad8;
	constexpr uint64_t CSteamJet_m_Rate = 0xad4;
	constexpr uint64_t CSteamJet_m_Speed = 0xac8;
	constexpr uint64_t CSteamJet_m_SpreadSpeed = 0xac4;
	constexpr uint64_t CSteamJet_m_StartSize = 0xacc;
	constexpr uint64_t CSteamJet_m_bEmit = 0xadc;
	constexpr uint64_t CSteamJet_m_bFaceLeft = 0xae4;
	constexpr uint64_t CSteamJet_m_flRollSpeed = 0xaec;
	constexpr uint64_t CSteamJet_m_nType = 0xae0;
	constexpr uint64_t CSteamJet_m_spawnflags = 0xae8;
	constexpr uint64_t CSun_m_bOn = 0xb50;
	constexpr uint64_t CSun_m_clrOverlay = 0xb38;
	constexpr uint64_t CSun_m_clrRender = 0x70;
	constexpr uint64_t CSun_m_nMaterial = 0xb54;
	constexpr uint64_t CSun_m_nOverlayMaterial = 0xb58;
	constexpr uint64_t CSun_m_nOverlaySize = 0xb40;
	constexpr uint64_t CSun_m_nSize = 0xb3c;
	constexpr uint64_t CSun_m_vDirection = 0xb44;
	constexpr uint64_t CSunlightShadowControl_m_LightColor = 0xaf0;
	constexpr uint64_t CSunlightShadowControl_m_TextureName = 0x9e5;
	constexpr uint64_t CSunlightShadowControl_m_bEnableShadows = 0xb18;
	constexpr uint64_t CSunlightShadowControl_m_bEnabled = 0x9e4;
	constexpr uint64_t CSunlightShadowControl_m_flColorTransitionTime = 0xb04;
	constexpr uint64_t CSunlightShadowControl_m_flFOV = 0xb0c;
	constexpr uint64_t CSunlightShadowControl_m_flNearZ = 0xb10;
	constexpr uint64_t CSunlightShadowControl_m_flNorthOffset = 0xb14;
	constexpr uint64_t CSunlightShadowControl_m_shadowDirection = 0x9d8;
	constexpr uint64_t CSurvivalSpawnChopper_m_vecOrigin = 0x138;
	constexpr uint64_t CTEBSPDecal_m_nEntity = 0x1c;
	constexpr uint64_t CTEBSPDecal_m_nIndex = 0x20;
	constexpr uint64_t CTEBSPDecal_m_vecOrigin = 0x10;
	constexpr uint64_t CTEBaseBeam_a = 0x40;
	constexpr uint64_t CTEBaseBeam_b = 0x3c;
	constexpr uint64_t CTEBaseBeam_g = 0x38;
	constexpr uint64_t CTEBaseBeam_m_fAmplitude = 0x30;
	constexpr uint64_t CTEBaseBeam_m_fEndWidth = 0x28;
	constexpr uint64_t CTEBaseBeam_m_fLife = 0x20;
	constexpr uint64_t CTEBaseBeam_m_fWidth = 0x24;
	constexpr uint64_t CTEBaseBeam_m_nFadeLength = 0x2c;
	constexpr uint64_t CTEBaseBeam_m_nFlags = 0x48;
	constexpr uint64_t CTEBaseBeam_m_nFrameRate = 0x1c;
	constexpr uint64_t CTEBaseBeam_m_nHaloIndex = 0x14;
	constexpr uint64_t CTEBaseBeam_m_nSpeed = 0x44;
	constexpr uint64_t CTEBaseBeam_m_nStartFrame = 0x18;
	constexpr uint64_t CTEBaseBeam_r = 0x34;
	constexpr uint64_t CTEBeamEntPoint_m_nEndEntity = 0x50;
	constexpr uint64_t CTEBeamEntPoint_m_nStartEntity = 0x4c;
	constexpr uint64_t CTEBeamEntPoint_m_vecEndPoint = 0x60;
	constexpr uint64_t CTEBeamEntPoint_m_vecStartPoint = 0x54;
	constexpr uint64_t CTEBeamEnts_m_nEndEntity = 0x50;
	constexpr uint64_t CTEBeamEnts_m_nStartEntity = 0x4c;
	constexpr uint64_t CTEBeamFollow_m_iEntIndex = 0x4c;
	constexpr uint64_t CTEBeamLaser_m_nEndEntity = 0x50;
	constexpr uint64_t CTEBeamPoints_m_vecEndPoint = 0x58;
	constexpr uint64_t CTEBeamPoints_m_vecStartPoint = 0x4c;
	constexpr uint64_t CTEBeamRingPoint_m_flEndRadius = 0x5c;
	constexpr uint64_t CTEBeamRingPoint_m_flStartRadius = 0x58;
	constexpr uint64_t CTEBeamRingPoint_m_vecCenter = 0x4c;
	constexpr uint64_t CTEBeamRing_m_nEndEntity = 0x50;
	constexpr uint64_t CTEBeamRing_m_nStartEntity = 0x4c;
	constexpr uint64_t CTEBeamSpline_m_nPoints = 0xd0;
	constexpr uint64_t CTEBeamSpline_m_vecPoints_0_ = 0x10;
	constexpr uint64_t CTEBloodSprite_a = 0x34;
	constexpr uint64_t CTEBloodSprite_b = 0x30;
	constexpr uint64_t CTEBloodSprite_g = 0x2c;
	constexpr uint64_t CTEBloodSprite_m_nDropModel = 0x38;
	constexpr uint64_t CTEBloodSprite_m_nSize = 0x40;
	constexpr uint64_t CTEBloodSprite_m_nSprayModel = 0x3c;
	constexpr uint64_t CTEBloodSprite_m_vecDirection = 0x1c;
	constexpr uint64_t CTEBloodSprite_m_vecOrigin = 0x10;
	constexpr uint64_t CTEBloodSprite_r = 0x28;
	constexpr uint64_t CTEBloodStream_a = 0x34;
	constexpr uint64_t CTEBloodStream_b = 0x30;
	constexpr uint64_t CTEBloodStream_m_nAmount = 0x38;
	constexpr uint64_t CTEBloodStream_m_vecDirection = 0x1c;
	constexpr uint64_t CTEBloodStream_r = 0x28;
	constexpr uint64_t CTEBreakModel_m_angRotation_0_ = 0x1c;
	constexpr uint64_t CTEBreakModel_m_angRotation_1_ = 0x20;
	constexpr uint64_t CTEBreakModel_m_angRotation_2_ = 0x24;
	constexpr uint64_t CTEBreakModel_m_fTime = 0x4c;
	constexpr uint64_t CTEBreakModel_m_nCount = 0x48;
	constexpr uint64_t CTEBreakModel_m_nFlags = 0x50;
	constexpr uint64_t CTEBreakModel_m_nModelIndex = 0x44;
	constexpr uint64_t CTEBreakModel_m_nRandomization = 0x40;
	constexpr uint64_t CTEBreakModel_m_vecOrigin = 0x10;
	constexpr uint64_t CTEBreakModel_m_vecSize = 0x28;
	constexpr uint64_t CTEBubbleTrail_m_fSpeed = 0x34;
	constexpr uint64_t CTEBubbleTrail_m_flWaterZ = 0x28;
	constexpr uint64_t CTEBubbleTrail_m_nCount = 0x30;
	constexpr uint64_t CTEBubbleTrail_m_nModelIndex = 0x2c;
	constexpr uint64_t CTEBubbleTrail_m_vecMaxs = 0x1c;
	constexpr uint64_t CTEBubbleTrail_m_vecMins = 0x10;
	constexpr uint64_t CTEBubbles_m_fHeight = 0x28;
	constexpr uint64_t CTEBubbles_m_fSpeed = 0x34;
	constexpr uint64_t CTEBubbles_m_nCount = 0x30;
	constexpr uint64_t CTEBubbles_m_nModelIndex = 0x2c;
	constexpr uint64_t CTEBubbles_m_vecMaxs = 0x1c;
	constexpr uint64_t CTEBubbles_m_vecMins = 0x10;
	constexpr uint64_t CTEClientProjectile_m_hOwner = 0x30;
	constexpr uint64_t CTEClientProjectile_m_nLifeTime = 0x2c;
	constexpr uint64_t CTEClientProjectile_m_nModelIndex = 0x28;
	constexpr uint64_t CTEClientProjectile_m_vecOrigin = 0x10;
	constexpr uint64_t CTEClientProjectile_m_vecVelocity = 0x1c;
	constexpr uint64_t CTEDecal_m_nEntity = 0x28;
	constexpr uint64_t CTEDecal_m_nHitbox = 0x2c;
	constexpr uint64_t CTEDecal_m_nIndex = 0x30;
	constexpr uint64_t CTEDecal_m_vecOrigin = 0x10;
	constexpr uint64_t CTEDecal_m_vecStart = 0x1c;
	constexpr uint64_t CTEDust_m_flSize = 0x1c;
	constexpr uint64_t CTEDust_m_flSpeed = 0x20;
	constexpr uint64_t CTEDust_m_vecDirection = 0x24;
	constexpr uint64_t CTEDynamicLight_b = 0x28;
	constexpr uint64_t CTEDynamicLight_exponent = 0x2c;
	constexpr uint64_t CTEDynamicLight_g = 0x24;
	constexpr uint64_t CTEDynamicLight_m_fDecay = 0x34;
	constexpr uint64_t CTEDynamicLight_m_fRadius = 0x1c;
	constexpr uint64_t CTEDynamicLight_m_fTime = 0x30;
	constexpr uint64_t CTEDynamicLight_m_vecOrigin = 0x10;
	constexpr uint64_t CTEDynamicLight_r = 0x20;
	constexpr uint64_t CTEEffectDispatch_entindex = 0x10;
	constexpr uint64_t CTEEffectDispatch_m_EffectData = 0x10;
	constexpr uint64_t CTEEffectDispatch_m_bPositionsAreRelativeToEntity = 0x71;
	constexpr uint64_t CTEEffectDispatch_m_flMagnitude = 0x50;
	constexpr uint64_t CTEEffectDispatch_m_flRadius = 0x54;
	constexpr uint64_t CTEEffectDispatch_m_flScale = 0x4c;
	constexpr uint64_t CTEEffectDispatch_m_iEffectName = 0x74;
	constexpr uint64_t CTEEffectDispatch_m_nAttachmentIndex = 0x58;
	constexpr uint64_t CTEEffectDispatch_m_nColor = 0x70;
	constexpr uint64_t CTEEffectDispatch_m_nDamageType = 0x64;
	constexpr uint64_t CTEEffectDispatch_m_nHitBox = 0x68;
	constexpr uint64_t CTEEffectDispatch_m_nMaterial = 0x60;
	constexpr uint64_t CTEEffectDispatch_m_nOtherEntIndex = 0x6c;
	constexpr uint64_t CTEEffectDispatch_m_nSurfaceProp = 0x5c;
	constexpr uint64_t CTEEffectDispatch_m_vAngles = 0x34;
	constexpr uint64_t CTEEffectDispatch_m_vNormal = 0x28;
	constexpr uint64_t CTEEffectDispatch_m_vOrigin_x = 0x10;
	constexpr uint64_t CTEEffectDispatch_m_vOrigin_z = 0x18;
	constexpr uint64_t CTEEffectDispatch_m_vStart_x = 0x1c;
	constexpr uint64_t CTEEffectDispatch_m_vStart_y = 0x20;
	constexpr uint64_t CTEEffectDispatch_m_vStart_z = 0x24;
	constexpr uint64_t CTEEnergySplash_m_bExplosive = 0x28;
	constexpr uint64_t CTEEnergySplash_m_vecDir = 0x1c;
	constexpr uint64_t CTEEnergySplash_m_vecPos = 0x10;
	constexpr uint64_t CTEExplosion_m_chMaterialType = 0x38;
	constexpr uint64_t CTEExplosion_m_fScale = 0x20;
	constexpr uint64_t CTEExplosion_m_nFlags = 0x28;
	constexpr uint64_t CTEExplosion_m_nFrameRate = 0x24;
	constexpr uint64_t CTEExplosion_m_nMagnitude = 0x40;
	constexpr uint64_t CTEExplosion_m_nModelIndex = 0x1c;
	constexpr uint64_t CTEExplosion_m_nRadius = 0x3c;
	constexpr uint64_t CTEExplosion_m_vecNormal = 0x2c;
	constexpr uint64_t CTEFireBullets_m_fInaccuracy = 0x40;
	constexpr uint64_t CTEFireBullets_m_fSpread = 0x48;
	constexpr uint64_t CTEFireBullets_m_flRecoilIndex = 0x44;
	constexpr uint64_t CTEFireBullets_m_iMode = 0x38;
	constexpr uint64_t CTEFireBullets_m_iPlayer = 0x10;
	constexpr uint64_t CTEFireBullets_m_iSeed = 0x3c;
	constexpr uint64_t CTEFireBullets_m_iSoundType = 0x4c;
	constexpr uint64_t CTEFireBullets_m_iWeaponID = 0x34;
	constexpr uint64_t CTEFireBullets_m_nItemDefIndex = 0x14;
	constexpr uint64_t CTEFireBullets_m_vecAngles_0_ = 0x24;
	constexpr uint64_t CTEFireBullets_m_vecAngles_1_ = 0x28;
	constexpr uint64_t CTEFireBullets_m_vecOrigin = 0x18;
	constexpr uint64_t CTEFireBullets_m_weapon = 0x30;
	constexpr uint64_t CTEFizz_m_nCurrent = 0x1c;
	constexpr uint64_t CTEFizz_m_nDensity = 0x18;
	constexpr uint64_t CTEFizz_m_nModelIndex = 0x14;
	constexpr uint64_t CTEFootprintDecal_m_chMaterialType = 0x3c;
	constexpr uint64_t CTEFootprintDecal_m_nEntity = 0x34;
	constexpr uint64_t CTEFootprintDecal_m_nIndex = 0x38;
	constexpr uint64_t CTEFootprintDecal_m_vecDirection = 0x1c;
	constexpr uint64_t CTEFootprintDecal_m_vecOrigin = 0x10;
	constexpr uint64_t CTEFoundryHelpers_m_iEntity = 0x10;
	constexpr uint64_t CTEGaussExplosion_m_nType = 0x1c;
	constexpr uint64_t CTEGaussExplosion_m_vecDirection = 0x20;
	constexpr uint64_t CTEGlowSprite_m_fScale = 0x20;
	constexpr uint64_t CTEGlowSprite_m_nBrightness = 0x28;
	constexpr uint64_t CTEGlowSprite_m_nModelIndex = 0x1c;
	constexpr uint64_t CTEGlowSprite_m_vecOrigin = 0x10;
	constexpr uint64_t CTEImpact_m_iType = 0x28;
	constexpr uint64_t CTEImpact_m_ucFlags = 0x2c;
	constexpr uint64_t CTEImpact_m_vecNormal = 0x1c;
	constexpr uint64_t CTEImpact_m_vecOrigin = 0x10;
	constexpr uint64_t CTEKillPlayerAttachments_m_nPlayer = 0x10;
	constexpr uint64_t CCSPlayer_m_iAccount = 0x117b8;
	constexpr uint64_t CCSPlayer_m_iAddonBits = 0x103c4;
	constexpr uint64_t CCSPlayer_m_iBlockingUseActionInProgress = 0x9980;
	constexpr uint64_t CCSPlayer_m_iClass = 0x117c8;
	constexpr uint64_t CCSPlayer_m_iControlledBotEntIndex = 0x11a50;
	constexpr uint64_t CCSPlayer_m_iDirection = 0x103dc;
	constexpr uint64_t CCSPlayer_m_iGunGameProgressiveWeaponIndex = 0x9994;
	constexpr uint64_t CCSPlayer_m_iMatchStats_Assists = 0x107fc;
	constexpr uint64_t CCSPlayer_m_iMatchStats_Damage = 0x1052c;
	constexpr uint64_t CCSPlayer_m_iMatchStats_Deaths = 0x10784;
	constexpr uint64_t CCSPlayer_m_iMatchStats_EnemiesFlashed = 0x10a54;
	constexpr uint64_t CCSPlayer_m_iMatchStats_EquipmentValue = 0x105a4;
	constexpr uint64_t CCSPlayer_m_iMatchStats_HeadShotKills = 0x10874;
	constexpr uint64_t CCSPlayer_m_iMatchStats_Kills = 0x104b4;
	constexpr uint64_t CCSPlayer_m_iMatchStats_LiveTime = 0x1070c;
	constexpr uint64_t CCSPlayer_m_iMatchStats_MoneySaved = 0x1061c;
	constexpr uint64_t CCSPlayer_m_iMatchStats_UtilityDamage = 0x109dc;
	constexpr uint64_t CCSPlayer_m_iMoveState = 0x99d0;
	constexpr uint64_t CCSPlayer_m_iNumGunGameKillsWithCurrentWeapon = 0x999c;
	constexpr uint64_t CCSPlayer_m_iNumGunGameTRKillPoints = 0x9998;
	constexpr uint64_t CCSPlayer_m_iNumRoundKills = 0x99a0;
	constexpr uint64_t CCSPlayer_m_iNumRoundKillsHeadshots = 0x99a4;
	constexpr uint64_t CCSPlayer_m_iPlayerState = 0x9978;
	constexpr uint64_t CCSPlayer_m_iPrimaryAddon = 0x103c8;
	constexpr uint64_t CCSPlayer_m_iProgressBarDuration = 0x103d0;
	constexpr uint64_t CCSPlayer_m_iRetakesMVPBoostItem = 0x11d00;
	constexpr uint64_t CCSPlayer_m_iRetakesOffering = 0x11cf4;
	constexpr uint64_t CCSPlayer_m_iRetakesOfferingCard = 0x11cf8;
	constexpr uint64_t CCSPlayer_m_iSecondaryAddon = 0x103cc;
	constexpr uint64_t CCSPlayer_m_iShotsFired = 0x103e0;
	constexpr uint64_t CCSPlayer_m_iStartAccount = 0x103f4;
	constexpr uint64_t CCSPlayer_m_iThrowGrenadeCounter = 0x99b8;
	constexpr uint64_t CCSPlayer_m_iWeaponPurchasesThisMatch = 0x10acc;
	constexpr uint64_t CCSPlayer_m_isCurrentGunGameLeader = 0x99d5;
	constexpr uint64_t CCSPlayer_m_isCurrentGunGameTeamLeader = 0x99d6;
	constexpr uint64_t CCSPlayer_m_nDeathCamMusic = 0x11808;
	constexpr uint64_t CCSPlayer_m_nHeavyAssaultSuitCooldownRemaining = 0x117c4;
	constexpr uint64_t CCSPlayer_m_nIsAutoMounting = 0x9ae4;
	constexpr uint64_t CCSPlayer_m_nLastConcurrentKilled = 0x11804;
	constexpr uint64_t CCSPlayer_m_nLastKillerIndex = 0x11800;
	constexpr uint64_t CCSPlayer_m_nNumFastDucks = 0x103e4;
	constexpr uint64_t CCSPlayer_m_nQuestProgressReason = 0x1177c;
	constexpr uint64_t CCSPlayer_m_nSurvivalTeam = 0x10410;
	constexpr uint64_t CCSPlayer_m_passiveItems = 0x117a4;
	constexpr uint64_t CCSPlayer_m_szArmsModel = 0x99d7;
	constexpr uint64_t CCSPlayer_m_totalHitsOnServer = 0x103f8;
	constexpr uint64_t CCSPlayer_m_unActiveQuestId = 0x11778;
	constexpr uint64_t CCSPlayer_m_unCurrentEquipmentValue = 0x11784;
	constexpr uint64_t CCSPlayer_m_unFreezetimeEndEquipmentValue = 0x11788;
	constexpr uint64_t CCSPlayer_m_unMusicID = 0x117a8;
	constexpr uint64_t CCSPlayer_m_unPlayerTvControlFlags = 0x11780;
	constexpr uint64_t CCSPlayer_m_unRoundStartEquipmentValue = 0x11786;
	constexpr uint64_t CCSPlayer_m_vecAutomoveTargetEnd = 0x9af4;
	constexpr uint64_t CCSPlayer_m_vecOrigin = 0x138;
	constexpr uint64_t CCSPlayer_m_vecOrigin_2_ = 0x140;
	constexpr uint64_t CCSPlayer_m_vecPlayerPatchEconIndices = 0x119c4;
	constexpr uint64_t CCSPlayer_m_vecSpawnRappellingRopeOrigin = 0x10400;
	constexpr uint64_t CCSRagdoll_m_bDiedAirborne = 0x2a38;
	constexpr uint64_t CCSRagdoll_m_flAbsYaw = 0x2a34;
	constexpr uint64_t CCSRagdoll_m_flDeathYaw = 0x2a30;
	constexpr uint64_t CCSRagdoll_m_hPlayer = 0x2a00;
	constexpr uint64_t CCSRagdoll_m_iDeathFrame = 0x2a2c;
	constexpr uint64_t CCSRagdoll_m_iDeathPose = 0x2a28;
	constexpr uint64_t CCSRagdoll_m_iTeamNum = 0xf4;
	constexpr uint64_t CCSRagdoll_m_nForceBone = 0x268c;
	constexpr uint64_t CCSRagdoll_m_nModelIndex = 0x258;
	constexpr uint64_t CCSRagdoll_m_vecForce = 0x2680;
	constexpr uint64_t CCSRagdoll_m_vecOrigin = 0x138;
	constexpr uint64_t CCSRagdoll_m_vecRagdollOrigin = 0x2a1c;
	constexpr uint64_t CCSRagdoll_m_vecRagdollVelocity = 0x2a10;
	constexpr uint64_t CCascadeLight_m_LightColor = 0x9f2;
	constexpr uint64_t CCascadeLight_m_LightColorScale = 0x9f8;
	constexpr uint64_t CCascadeLight_m_bEnabled = 0x9f0;
	constexpr uint64_t CCascadeLight_m_bUseLightEnvAngles = 0x9f1;
	constexpr uint64_t CCascadeLight_m_envLightShadowDirection = 0x9e4;
	constexpr uint64_t CCascadeLight_m_flMaxShadowDist = 0x9fc;
	constexpr uint64_t CCascadeLight_m_shadowDirection = 0x9d8;
	constexpr uint64_t CChicken_m_jumpedThisFrame = 0x29f8;
	constexpr uint64_t CChicken_m_leader = 0x29fc;
	constexpr uint64_t CColorCorrectionVolume_m_FadeDuration = 0xa28;
	constexpr uint64_t CColorCorrectionVolume_m_MaxWeight = 0xa24;
	constexpr uint64_t CColorCorrectionVolume_m_Weight = 0xa2c;
	constexpr uint64_t CColorCorrectionVolume_m_lookupFilename = 0xa30;
	constexpr uint64_t CColorCorrection_m_bClientSide = 0xb02;
	constexpr uint64_t CColorCorrection_m_bEnabled = 0xb00;
	constexpr uint64_t CColorCorrection_m_bExclusive = 0xb03;
	constexpr uint64_t CColorCorrection_m_bMaster = 0xb01;
	constexpr uint64_t CColorCorrection_m_flCurWeight = 0x9f8;
	constexpr uint64_t CColorCorrection_m_flFadeInDuration = 0x9ec;
	constexpr uint64_t CColorCorrection_m_flFadeOutDuration = 0x9f0;
	constexpr uint64_t CColorCorrection_m_maxFalloff = 0x9e8;
	constexpr uint64_t CColorCorrection_m_minFalloff = 0x9e4;
	constexpr uint64_t CColorCorrection_m_netLookupFilename = 0x9fc;
	constexpr uint64_t CColorCorrection_m_vecOrigin = 0x9d8;
	constexpr uint64_t CDangerZoneController_m_DangerZones = 0x9fc;
	constexpr uint64_t CDangerZoneController_m_bDangerZoneControllerEnabled = 0x9d8;
	constexpr uint64_t CDangerZoneController_m_flWaveEndTimes = 0xaa4;
	constexpr uint64_t CDangerZoneController_m_hTheFinalZone = 0xab8;
	constexpr uint64_t CDangerZoneController_m_vecEndGameCircleEnd = 0x9e8;
	constexpr uint64_t CDangerZone_m_flBombLaunchTime = 0x9e4;
	constexpr uint64_t CDangerZone_m_flExtraRadius = 0x9e8;
	constexpr uint64_t CDangerZone_m_flExtraRadiusStartTime = 0x9ec;
	constexpr uint64_t CDangerZone_m_flExtraRadiusTotalLerpTime = 0x9f0;
	constexpr uint64_t CDangerZone_m_iWave = 0x9f8;
	constexpr uint64_t CDangerZone_m_nDropOrder = 0x9f4;
	constexpr uint64_t CDangerZone_m_vecDangerZoneOriginStartedAt = 0x9d8;
	constexpr uint64_t CDrone_m_bPilotTakeoverAllowed = 0x29f0;
	constexpr uint64_t CDrone_m_hCurrentPilot = 0x29f8;
	constexpr uint64_t CDrone_m_hDeliveryCargo = 0x29ec;
	constexpr uint64_t CDrone_m_hPotentialCargo = 0x29f4;
	constexpr uint64_t CDrone_m_vecTagIncrements_0_ = 0x2b1c;
	constexpr uint64_t CDrone_m_vecTagPositions_0_ = 0x29fc;
	constexpr uint64_t CDronegun_m_bHasTarget = 0x8fc328fef60e10;
	constexpr uint64_t CDronegun_m_iHealth = 0x100;
	constexpr uint64_t CDronegun_m_vecAttentionTarget = 0x2990;
	constexpr uint64_t CDronegun_m_vecTargetOffset = 0x299c;
	constexpr uint64_t CDynamicLight_m_Exponent = 0x9e0;
	constexpr uint64_t CDynamicLight_m_Flags = 0x9d8;
	constexpr uint64_t CDynamicLight_m_InnerAngle = 0x9e4;
	constexpr uint64_t CDynamicLight_m_LightStyle = 0x9d9;
	constexpr uint64_t CDynamicLight_m_OuterAngle = 0x9e8;
	constexpr uint64_t CDynamicLight_m_Radius = 0x9dc;
	constexpr uint64_t CDynamicLight_m_SpotRadius = 0x9ec;
	constexpr uint64_t CDynamicProp_m_bShouldGlow = 0x29d8;
	constexpr uint64_t CDynamicProp_m_bUseHitboxesForRenderBox = 0x29b4;
	constexpr uint64_t CDynamicProp_m_flGlowMaxDist = 0x29d4;
	constexpr uint64_t CDynamicProp_m_nGlowStyle = 0x29e0;
	constexpr uint64_t CEconEntity_m_AttributeManager = 0x2d90;
	constexpr uint64_t CEconEntity_m_Attributes = 0x3030;
	constexpr uint64_t CEconEntity_m_Item = 0x2dd0;
	constexpr uint64_t CEconEntity_m_NetworkedDynamicAttributesForDemos = 0x3030;
	constexpr uint64_t CEconEntity_m_OriginalOwnerXuidHigh = 0x31d4;
	constexpr uint64_t CEconEntity_m_OriginalOwnerXuidLow = 0x31d0;
	constexpr uint64_t CEconEntity_m_ProviderType = 0x2db4;
	constexpr uint64_t CEconEntity_m_bInitialized = 0x2fe4;
	constexpr uint64_t CEconEntity_m_flFallbackWear = 0x31e0;
	constexpr uint64_t CEconEntity_m_hOuter = 0x2dac;
	constexpr uint64_t CEconEntity_m_iAccountID = 0x2fd8;
	constexpr uint64_t CEconEntity_m_iEntityLevel = 0x2fc0;
	constexpr uint64_t CEconEntity_m_iItemDefinitionIndex = 0x2fba;
	constexpr uint64_t CEconEntity_m_iItemIDHigh = 0x2fd0;
	constexpr uint64_t CEconEntity_m_iItemIDLow = 0x2fd4;
	constexpr uint64_t CEconEntity_m_iReapplyProvisionParity = 0x2da8;
	constexpr uint64_t CEconEntity_m_nFallbackPaintKit = 0x31d8;
	constexpr uint64_t CEconEntity_m_nFallbackSeed = 0x31dc;
	constexpr uint64_t CEconEntity_m_nFallbackStatTrak = 0x31e4;
	constexpr uint64_t CEconEntity_m_szCustomName = 0x304c;
	constexpr uint64_t CEmbers_m_bEmit = 0x9e4;
	constexpr uint64_t CEmbers_m_nDensity = 0x9d8;
	constexpr uint64_t CEmbers_m_nLifetime = 0x9dc;
	constexpr uint64_t CEmbers_m_nSpeed = 0x9e0;
	constexpr uint64_t CEntityDissolve_m_flFadeInStart = 0x9f0;
	constexpr uint64_t CEntityDissolve_m_flFadeOutLength = 0x9e4;
	constexpr uint64_t CEntityDissolve_m_flFadeOutModelLength = 0x9ec;
	constexpr uint64_t CEntityDissolve_m_flFadeOutModelStart = 0x9e8;
	constexpr uint64_t CEntityDissolve_m_flStartTime = 0x9dc;
	constexpr uint64_t CEntityDissolve_m_nDissolveType = 0x9f8;
	constexpr uint64_t CEntityDissolve_m_nMagnitude = 0xa0c;
	constexpr uint64_t CEntityDissolve_m_vDissolverOrigin = 0xa00;
	constexpr uint64_t CEntityFlame_m_bCheapEffect = 0x9ec;
	constexpr uint64_t CEntityFlame_m_hEntAttached = 0x9d8;
	constexpr uint64_t CEntityFreezing_m_bFinishFreezing = 0xab0;
	constexpr uint64_t CEntityFreezing_m_flFrozen = 0xaac;
	constexpr uint64_t CEntityFreezing_m_flFrozenPerHitbox = 0x9e4;
	constexpr uint64_t CEntityFreezing_m_vFreezingOrigin = 0x9d8;
	constexpr uint64_t CEntityParticleTrail_m_Info = 0xac4;
	constexpr uint64_t CEntityParticleTrail_m_flLifetime = 0xacc;
	constexpr uint64_t CEntityParticleTrail_m_flStartSize = 0xad0;
	constexpr uint64_t CEntityParticleTrail_m_hConstraintEntity = 0xad8;
	constexpr uint64_t CEntityParticleTrail_m_iMaterialName = 0xac0;
	constexpr uint64_t CEnvAmbientLight_m_vecColor = 0xb00;
	constexpr uint64_t CEnvDOFController_m_bDOFEnabled = 0x9d8;
	constexpr uint64_t CEnvDOFController_m_flFarBlurDepth = 0x9e8;
	constexpr uint64_t CEnvDOFController_m_flFarBlurRadius = 0x9f0;
	constexpr uint64_t CEnvDOFController_m_flFarFocusDepth = 0x9e4;
	constexpr uint64_t CEnvDOFController_m_flNearBlurDepth = 0x9dc;
	constexpr uint64_t CEnvDOFController_m_flNearBlurRadius = 0x9ec;
	constexpr uint64_t CEnvDOFController_m_flNearFocusDepth = 0x9e0;
	constexpr uint64_t CEnvDetailController_m_flFadeEndDist = 0x9dc;
	constexpr uint64_t CEnvDetailController_m_flFadeStartDist = 0x9d8;
	constexpr uint64_t CEnvGasCanister_m_bDoImpactEffects = 0x2a3d;
	constexpr uint64_t CEnvGasCanister_m_bLanded = 0x2990;
	constexpr uint64_t CEnvGasCanister_m_bLaunchedFromWithinWorld = 0x2a18;
	constexpr uint64_t CEnvGasCanister_m_flFlightSpeed = 0x2a04;
	constexpr uint64_t CEnvGasCanister_m_flFlightTime = 0x2a00;
	constexpr uint64_t CEnvGasCanister_m_flHorizSpeed = 0x2a14;
	constexpr uint64_t CEnvGasCanister_m_flInitialZSpeed = 0x2a0c;
	constexpr uint64_t CEnvGasCanister_m_flLaunchTime = 0x2a08;
	constexpr uint64_t CEnvGasCanister_m_flSkyboxScale = 0x2a38;
	constexpr uint64_t CEnvGasCanister_m_flWorldEnterTime = 0x2a28;
	constexpr uint64_t CEnvGasCanister_m_hSkyboxCopy = 0x29b8;
	constexpr uint64_t CEnvGasCanister_m_nMyZoneIndex = 0x2a40;
	constexpr uint64_t CEnvGasCanister_m_vecDirection = 0x29e8;
	constexpr uint64_t CEnvGasCanister_m_vecEnterWorldPosition = 0x29dc;
	constexpr uint64_t CEnvGasCanister_m_vecImpactPosition = 0x29c4;
	constexpr uint64_t CEnvGasCanister_m_vecOrigin = 0x138;
	constexpr uint64_t CEnvGasCanister_m_vecOrigin_2_ = 0x140;
	constexpr uint64_t CEnvGasCanister_m_vecParabolaDirection = 0x2a1c;
	constexpr uint64_t CEnvGasCanister_m_vecSkyboxOrigin = 0x2a2c;
	constexpr uint64_t CEnvGasCanister_m_vecStartPosition = 0x29d0;
	constexpr uint64_t CEnvParticleScript_m_flSequenceScale = 0x2a74;
	constexpr uint64_t CEnvProjectedTexture_m_LightColor = 0x9f4;
	constexpr uint64_t CEnvProjectedTexture_m_SpotlightTextureName = 0xa18;
	constexpr uint64_t CEnvProjectedTexture_m_bAlwaysUpdate = 0x9e1;
	constexpr uint64_t CEnvProjectedTexture_m_bCameraSpace = 0x9ec;
	constexpr uint64_t CEnvProjectedTexture_m_bEnableShadows = 0x9e8;
	constexpr uint64_t CEnvProjectedTexture_m_bLightOnlyTarget = 0x9ea;
	constexpr uint64_t CEnvProjectedTexture_m_bLightWorld = 0x9eb;
	constexpr uint64_t CEnvProjectedTexture_m_bSimpleProjection = 0x9e9;
	constexpr uint64_t CEnvProjectedTexture_m_bState = 0x9e0;
	constexpr uint64_t CEnvProjectedTexture_m_flAmbient = 0xa0c;
	constexpr uint64_t CEnvProjectedTexture_m_flBrightnessScale = 0x9f0;
	constexpr uint64_t CEnvProjectedTexture_m_flColorTransitionTime = 0xa08;
	constexpr uint64_t CEnvProjectedTexture_m_flFarZ = 0xa14;
	constexpr uint64_t CEnvProjectedTexture_m_flLightFOV = 0x9e4;
	constexpr uint64_t CEnvProjectedTexture_m_flNearZ = 0xa10;
	constexpr uint64_t CEnvProjectedTexture_m_flProjectionSize = 0xb38;
	constexpr uint64_t CEnvProjectedTexture_m_flRotation = 0xb3c;
	constexpr uint64_t CEnvProjectedTexture_m_hTargetEntity = 0x9dc;
	constexpr uint64_t CEnvProjectedTexture_m_iStyle = 0xb2c;
	constexpr uint64_t CEnvProjectedTexture_m_nShadowQuality = 0xb28;
	constexpr uint64_t CEnvProjectedTexture_m_nSpotlightTextureFrame = 0xb24;
	constexpr uint64_t CEnvQuadraticBeam_m_controlPosition = 0x9e4;
	constexpr uint64_t CEnvQuadraticBeam_m_flWidth = 0x9f4;
	constexpr uint64_t CEnvQuadraticBeam_m_targetPosition = 0x9d8;
	constexpr uint64_t CEnvScreenEffect_m_flDuration = 0x9d8;
	constexpr uint64_t CEnvScreenEffect_m_nType = 0x9dc;
	constexpr uint64_t CEnvScreenOverlay_m_bIsActive = 0x1400;
	constexpr uint64_t CEnvScreenOverlay_m_flOverlayTimes_0_ = 0x13d0;
	constexpr uint64_t CEnvScreenOverlay_m_flStartTime = 0x13f8;
	constexpr uint64_t CEnvScreenOverlay_m_iDesiredOverlay = 0x13fc;
	constexpr uint64_t CEnvScreenOverlay_m_iszOverlayNames_0_ = 0x9d8;
	constexpr uint64_t CEnvTonemapController_m_bUseCustomAutoExposureMax = 0x9d9;
	constexpr uint64_t CEnvTonemapController_m_bUseCustomAutoExposureMin = 0x9d8;
	constexpr uint64_t CEnvTonemapController_m_bUseCustomBloomScale = 0x9DA;
	constexpr uint64_t CEnvTonemapController_m_flBloomExponent = 0x9ec;
	constexpr uint64_t CEnvTonemapController_m_flCustomAutoExposureMax = 0x9e0;
	constexpr uint64_t CEnvTonemapController_m_flCustomAutoExposureMin = 0x9dc;
	constexpr uint64_t CEnvTonemapController_m_flCustomBloomScale = 0x9e4;
	constexpr uint64_t CEnvTonemapController_m_flCustomBloomScaleMinimum = 0x9e8;
	constexpr uint64_t CEnvTonemapController_m_flTonemapMinAvgLum = 0x9fc;
	constexpr uint64_t CEnvTonemapController_m_flTonemapPercentBrightPixels = 0x9f8;
	constexpr uint64_t CEnvTonemapController_m_flTonemapPercentTarget = 0x9f4;
	constexpr uint64_t CEnvTonemapController_m_flTonemapRate = 0xa00;
	constexpr uint64_t CEnvWind_m_EnvWindShared = 0x9d8;
	constexpr uint64_t CEnvWind_m_flGustDuration = 0xa00;
	constexpr uint64_t CEnvWind_m_flInitialWindSpeed = 0xa48;
	constexpr uint64_t CEnvWind_m_flMaxGustDelay = 0x9fc;
	constexpr uint64_t CEnvWind_m_flMinGustDelay = 0x9f8;
	constexpr uint64_t CEnvWind_m_flStartTime = 0x9dc;
	constexpr uint64_t CEnvWind_m_iGustDirChange = 0xa04;
	constexpr uint64_t CEnvWind_m_iInitialWindDir = 0xa44;
	constexpr uint64_t CEnvWind_m_iMaxGust = 0x9f4;
	constexpr uint64_t CEnvWind_m_iMaxWind = 0x9e8;
	constexpr uint64_t CEnvWind_m_iMinGust = 0x9f0;
	constexpr uint64_t CEnvWind_m_iMinWind = 0x9e4;
	constexpr uint64_t CEnvWind_m_iWindSeed = 0x9e0;
	constexpr uint64_t CFEPlayerDecal_m_flCreationTime = 0xa28;
	constexpr uint64_t CFEPlayerDecal_m_nEntity = 0xa1c;
	constexpr uint64_t CFEPlayerDecal_m_nHitbox = 0xa20;
	constexpr uint64_t CFEPlayerDecal_m_nPlayer = 0xa18;
	constexpr uint64_t CFEPlayerDecal_m_nTintID = 0xa24;
	constexpr uint64_t CFEPlayerDecal_m_nUniqueID = 0x9d8;
	constexpr uint64_t CFEPlayerDecal_m_nVersion = 0xa2c;
	constexpr uint64_t CFEPlayerDecal_m_rtGcTime = 0x9e4;
	constexpr uint64_t CFEPlayerDecal_m_ubSignature = 0xa2d;
	constexpr uint64_t CFEPlayerDecal_m_unAccountID = 0x9dc;
	constexpr uint64_t CFEPlayerDecal_m_unTraceID = 0x9e0;
	constexpr uint64_t CFEPlayerDecal_m_vecEndPos = 0x9e8;
	constexpr uint64_t CFEPlayerDecal_m_vecNormal = 0xa0c;
	constexpr uint64_t CFEPlayerDecal_m_vecRight = 0xa00;
	constexpr uint64_t CFEPlayerDecal_m_vecStart = 0x9f4;
	constexpr uint64_t CFireSmoke_m_flScaleTime = 0x9e0;
	constexpr uint64_t CFireSmoke_m_flStartScale = 0x9d8;
	constexpr uint64_t CFireSmoke_m_nFlags = 0x9e4;
	constexpr uint64_t CFireSmoke_m_nFlameFromAboveModelIndex = 0x9ec;
	constexpr uint64_t CFireSmoke_m_nFlameModelIndex = 0x9e8;
	constexpr uint64_t CFireTrail_m_flLifetime = 0xac8;
	constexpr uint64_t CFireTrail_m_nAttachment = 0xac4;
	constexpr uint64_t CFish_m_angle = 0x29e8;
	constexpr uint64_t CFish_m_lifeState = 0x25f;
	constexpr uint64_t CFish_m_nModelIndex = 0x258;
	constexpr uint64_t CFish_m_poolOrigin = 0x29f0;
	constexpr uint64_t CFish_m_x = 0x29d8;
	constexpr uint64_t CFish_m_y = 0x29dc;
	constexpr uint64_t CFish_m_z = 0x29e0;
	constexpr uint64_t CFists_m_bPlayingUninterruptableAct = 0x33e0;
	constexpr uint64_t CFogController_m_fog_HDRColorScale = 0xa24;
	constexpr uint64_t CFogController_m_fog_ZoomFogScale = 0xa20;
	constexpr uint64_t CFogController_m_fog_blend = 0xa1d;
	constexpr uint64_t CFogController_m_fog_colorPrimary = 0x9e8;
	constexpr uint64_t CFogController_m_fog_colorPrimaryLerpTo = 0x9f0;
	constexpr uint64_t CFogController_m_fog_colorSecondary = 0x9ec;
	constexpr uint64_t CFogController_m_fog_colorSecondaryLerpTo = 0x9f4;
	constexpr uint64_t CFogController_m_fog_dirPrimary = 0x9dc;
	constexpr uint64_t CFogController_m_fog_duration = 0xa18;
	constexpr uint64_t CFogController_m_fog_enable = 0xa1c;
	constexpr uint64_t CFogController_m_fog_end = 0x9fc;
	constexpr uint64_t CFogController_m_fog_endLerpTo = 0xa0c;
	constexpr uint64_t CFogController_m_fog_farz = 0xa00;
	constexpr uint64_t CFogController_m_fog_maxdensity = 0xa04;
	constexpr uint64_t CFogController_m_fog_start = 0x9f8;
	constexpr uint64_t CFogController_m_fog_startLerpTo = 0xa08;
	constexpr uint64_t CFootstepControl_m_destination = 0xa20;
	constexpr uint64_t CFootstepControl_m_source = 0xa10;
	constexpr uint64_t CFuncAreaPortalWindow_m_flFadeDist = 0x9dc;
	constexpr uint64_t CFuncAreaPortalWindow_m_flFadeStartDist = 0x9d8;
	constexpr uint64_t CFuncAreaPortalWindow_m_flTranslucencyLimit = 0x9e0;
	constexpr uint64_t CFuncAreaPortalWindow_m_iBackgroundModelIndex = 0x9e4;
	constexpr uint64_t CFuncConveyor_m_flConveyorSpeed = 0x9d8;
	constexpr uint64_t CFuncLadder_m_bFakeLadder = 0xa11;
	constexpr uint64_t CFuncLadder_m_vecLadderDir = 0x9d8;
	constexpr uint64_t CFuncLadder_m_vecPlayerMountPositionBottom = 0xa04;
	constexpr uint64_t CFuncLadder_m_vecPlayerMountPositionTop = 0x9f8;
	constexpr uint64_t CFuncMoveLinear_m_fFlags = 0x104;
	constexpr uint64_t CFuncOccluder_m_bActive = 0x9dc;
	constexpr uint64_t CFuncOccluder_m_nOccluderIndex = 0x9d8;
	constexpr uint64_t CFuncRotating_m_angRotation_0_ = 0x12c;
	constexpr uint64_t CFuncRotating_m_angRotation_1_ = 0x130;
	constexpr uint64_t CFuncRotating_m_angRotation_2_ = 0x134;
	constexpr uint64_t CFuncRotating_m_flSimulationTime = 0x268;
	constexpr uint64_t CFuncRotating_m_vecOrigin = 0x138;
	constexpr uint64_t CFuncSmokeVolume_m_Collision = 0x320;
	constexpr uint64_t CFuncSmokeVolume_m_Color1 = 0xac4;
	constexpr uint64_t CFuncSmokeVolume_m_Color2 = 0xac8;
	constexpr uint64_t CFuncSmokeVolume_m_Density = 0xbe0;
	constexpr uint64_t CFuncSmokeVolume_m_DensityRampSpeed = 0xbd4;
	constexpr uint64_t CFuncSmokeVolume_m_MaterialName = 0xacc;
	constexpr uint64_t CFuncSmokeVolume_m_MovementSpeed = 0xbdc;
	constexpr uint64_t CFuncSmokeVolume_m_ParticleDrawWidth = 0xbcc;
	constexpr uint64_t CFuncSmokeVolume_m_ParticleSpacingDistance = 0xbd0;
	constexpr uint64_t CFuncSmokeVolume_m_RotationSpeed = 0xbd8;
	constexpr uint64_t CFuncSmokeVolume_m_maxDrawDistance = 0xbe4;
	constexpr uint64_t CFuncSmokeVolume_m_nSolidType = 0x342;
	constexpr uint64_t CFuncSmokeVolume_m_nSurroundType = 0x34a;
	constexpr uint64_t CFuncSmokeVolume_m_spawnflags = 0xbe8;
	constexpr uint64_t CFuncSmokeVolume_m_triggerBloat = 0x343;
	constexpr uint64_t CFuncSmokeVolume_m_usSolidFlags = 0x340;
	constexpr uint64_t CFuncSmokeVolume_m_vecMaxs = 0x4e3a220feac34c3;
	constexpr uint64_t CFuncSmokeVolume_m_vecMins = 0x328;
	constexpr uint64_t CFuncSmokeVolume_m_vecSpecifiedSurroundingMaxs = 0x358;
	constexpr uint64_t CFuncSmokeVolume_m_vecSpecifiedSurroundingMins = 0x34c;
	constexpr uint64_t CFunc_Dust_m_Collision = 0x320;
	constexpr uint64_t CFunc_Dust_m_Color = 0x9d8;
	constexpr uint64_t CFunc_Dust_m_DistMax = 0x9f4;
	constexpr uint64_t CFunc_Dust_m_DustFlags = 0xa00;
	constexpr uint64_t CFunc_Dust_m_FallSpeed = 0x9f8;
	constexpr uint64_t CFunc_Dust_m_LifetimeMax = 0x9f0;
	constexpr uint64_t CFunc_Dust_m_LifetimeMin = 0x9ec;
	constexpr uint64_t CFunc_Dust_m_SpeedMax = 0x9e8;
	constexpr uint64_t CFunc_Dust_m_bAffectedByWind = 0x9fc;
	constexpr uint64_t CFunc_Dust_m_flSizeMax = 0x9e4;
	constexpr uint64_t CFunc_Dust_m_flSizeMin = 0x9e0;
	constexpr uint64_t CFunc_Dust_m_nModelIndex = 0x258;
	constexpr uint64_t CFunc_Dust_m_nSolidType = 0x342;
	constexpr uint64_t CFunc_Dust_m_nSurroundType = 0x34a;
	constexpr uint64_t CFunc_Dust_m_triggerBloat = 0x343;
	constexpr uint64_t CFunc_Dust_m_usSolidFlags = 0x340;
	constexpr uint64_t CFunc_Dust_m_vecMaxs = 0x334;
	constexpr uint64_t CFunc_Dust_m_vecMins = 0x328;
	constexpr uint64_t CFunc_Dust_m_vecSpecifiedSurroundingMaxs = 0x358;
	constexpr uint64_t CFunc_Dust_m_vecSpecifiedSurroundingMins = 0x34c;
	constexpr uint64_t CFunc_LOD_m_nDisappearMaxDist = 0x9dc;
	constexpr uint64_t CFunc_LOD_m_nDisappearMinDist = 0x9d8;
	constexpr uint64_t CGrassBurn_m_flGrassBurnClearTime = 0x9d8;
	constexpr uint64_t CHandleTest_m_Handle = 0x9d8;
	constexpr uint64_t CHandleTest_m_bSendHandle = 0x9dc;
	constexpr uint64_t CHostage_m_fFlags = 0x104;
	constexpr uint64_t CHostage_m_flDropStartTime = 0x2f50;
	constexpr uint64_t CHostage_m_flGrabSuccessTime = 0x2f4c;
	constexpr uint64_t CHostage_m_flRescueStartTime = 0x2f48;
	constexpr uint64_t CHostage_m_iHealth = 0x100;
	constexpr uint64_t CHostage_m_iMaxHealth = 0x2f28;
	constexpr uint64_t CHostage_m_isRescued = 0x2f40;
	constexpr uint64_t CHostage_m_jumpedThisFrame = 0x2f41;
	constexpr uint64_t CHostage_m_leader = 0x2f30;
	constexpr uint64_t CHostage_m_lifeState = 0x25f;
	constexpr uint64_t CHostage_m_nHostageState = 0x2f44;
	constexpr uint64_t CHostage_m_vel = 0x2f34;
	constexpr uint64_t CInferno_m_bFireIsBurning = 0xe94;
	constexpr uint64_t CInferno_m_fireCount = 0x13a8;
	constexpr uint64_t CInferno_m_fireXDelta = 0x9e4;
	constexpr uint64_t CInferno_m_fireYDelta = 0xb74;
	constexpr uint64_t CInferno_m_fireZDelta = 0xd04;
	constexpr uint64_t CInferno_m_nFireEffectTickBegin = 0x13b4;
	constexpr uint64_t CInfoMapRegion_m_flRadius = 0x9d8;
	constexpr uint64_t CInfoMapRegion_m_szLocToken = 0x9dc;
	constexpr uint64_t CInfoOverlayAccessor_m_iOverlayID = 0x9d8;
	constexpr uint64_t CInfoOverlayAccessor_m_iTextureFrameIndex = 0x98c;
	constexpr uint64_t CItemAssaultSuitUseable_m_bIsHeavyAssaultSuit = 0x3454;
	constexpr uint64_t CItemAssaultSuitUseable_m_nArmorValue = 0x3450;
	constexpr uint64_t CItemDogtags_m_KillingPlayer = 0x3454;
	constexpr uint64_t CItemDogtags_m_OwningPlayer = 0x3450;
	constexpr uint64_t CItem_m_bShouldGlow = 0x3240;
	constexpr uint64_t CLightGlow_m_angRotation = 0x12c;
	constexpr uint64_t CLightGlow_m_clrRender = 0x70;
	constexpr uint64_t CLightGlow_m_flGlowProxySize = 0xac4;
	constexpr uint64_t CLightGlow_m_nHorizontalSize = 0x9d8;
	constexpr uint64_t CLightGlow_m_nMaxDist = 0x9e4;
	constexpr uint64_t CLightGlow_m_nMinDist = 0x9e0;
	constexpr uint64_t CLightGlow_m_nOuterMaxDist = 0x9e8;
	constexpr uint64_t CLightGlow_m_nVerticalSize = 0x9dc;
	constexpr uint64_t CLightGlow_m_spawnflags = 0x9ec;
	constexpr uint64_t CLightGlow_m_vecOrigin = 0x138;
	constexpr uint64_t CLightGlow_moveparent = 0x148;
	constexpr uint64_t CMapVetoPickController_m_nAccountIDs = 0xb0c;
	constexpr uint64_t CMapVetoPickController_m_nCurrentPhase = 0x130c;
	constexpr uint64_t CMapVetoPickController_m_nDraftType = 0x9e8;
	constexpr uint64_t CMapVetoPickController_m_nMapId0 = 0xc0c;
	constexpr uint64_t CMapVetoPickController_m_nMapId2 = 0xe0c;
	constexpr uint64_t CMapVetoPickController_m_nMapId3 = 0xf0c;
	constexpr uint64_t CMapVetoPickController_m_nMapId4 = 0x100c;
	constexpr uint64_t CMapVetoPickController_m_nMapId5 = 0x110c;
	constexpr uint64_t CMapVetoPickController_m_nPhaseDurationTicks = 0x1314;
	constexpr uint64_t CMapVetoPickController_m_nPhaseStartTick = 0x1310;
	constexpr uint64_t CMapVetoPickController_m_nStartingSide0 = 0x120c;
	constexpr uint64_t CMapVetoPickController_m_nTeamWinningCoinToss = 0x9ec;
	constexpr uint64_t CMapVetoPickController_m_nTeamWithFirstChoice = 0x9f0;
	constexpr uint64_t CMapVetoPickController_m_nVoteMapIdsList = 0xaf0;
	constexpr uint64_t CMaterialModifyControl_m_bFloatLerpWrap = 0xd00;
	constexpr uint64_t CMaterialModifyControl_m_bNewAnimCommandsSemaphore = 0xcf0;
	constexpr uint64_t CMaterialModifyControl_m_bWrap = 0xce8;
	constexpr uint64_t CMaterialModifyControl_m_flFloatLerpEndValue = 0xcf8;
	constexpr uint64_t CMaterialModifyControl_m_flFloatLerpStartValue = 0xcf4;
	constexpr uint64_t CMaterialModifyControl_m_flFloatLerpTransitionTime = 0xcfc;
	constexpr uint64_t CMaterialModifyControl_m_flFramerate = 0xcec;
	constexpr uint64_t CMaterialModifyControl_m_iFrameEnd = 0xce4;
	constexpr uint64_t CMaterialModifyControl_m_iFrameStart = 0xce0;
	constexpr uint64_t CMaterialModifyControl_m_szMaterialName = 0x9d8;
	constexpr uint64_t CMaterialModifyControl_m_szMaterialVar = 0xad7;
	constexpr uint64_t CMelee_m_flThrowAt = 0x33e0;
	constexpr uint64_t CMolotovProjectile_m_bIsIncGrenade = 0x2a20;
	constexpr uint64_t CMovieDisplay_m_bEnabled = 0x9d8;
	constexpr uint64_t CMovieDisplay_m_bForcedSlave = 0xadb;
	constexpr uint64_t CMovieDisplay_m_bLooping = 0x9d9;
	constexpr uint64_t CMovieDisplay_m_bStretchToFill = 0xada;
	constexpr uint64_t CMovieDisplay_m_bUseCustomUVs = 0xadc;
	constexpr uint64_t CMovieDisplay_m_flUMax = 0xae4;
	constexpr uint64_t CMovieDisplay_m_flUMin = 0xae0;
	constexpr uint64_t CMovieDisplay_m_flVMax = 0xaec;
	constexpr uint64_t CMovieDisplay_m_flVMin = 0xae8;
	constexpr uint64_t CMovieDisplay_m_szGroupName = 0xa5a;
	constexpr uint64_t CMovieDisplay_m_szMovieFilename = 0x9da;
	constexpr uint64_t CParadropChopper_m_hCallingPlayer = 0x29a0;
	constexpr uint64_t CParadropChopper_m_vecOrigin = 0x138;
	constexpr uint64_t CParadropChopper_m_vecOrigin_2_ = 0x140;
	constexpr uint64_t CParticleFire_m_vDirection = 0xad8;
	constexpr uint64_t CParticleFire_m_vOrigin = 0xacc;
	constexpr uint64_t CParticlePerformanceMonitor_m_bDisplayPerf = 0x9d8;
	constexpr uint64_t CParticlePerformanceMonitor_m_bMeasurePerf = 0x9d9;
	constexpr uint64_t CParticleSystem_m_angRotation = 0x12c;
	constexpr uint64_t CParticleSystem_m_bActive = 0x9e0;
	constexpr uint64_t CParticleSystem_m_fEffects = 0xf0;
	constexpr uint64_t CParticleSystem_m_flStartTime = 0x9e4;
	constexpr uint64_t CParticleSystem_m_hControlPointEnts = 0xb30;
	constexpr uint64_t CParticleSystem_m_hOwnerEntity = 0x14c;
	constexpr uint64_t CParticleSystem_m_iControlPointParents = 0xc2c;
	constexpr uint64_t CParticleSystem_m_iEffectIndex = 0x9d8;
	constexpr uint64_t CParticleSystem_m_iParentAttachment = 0x2ec;
	constexpr uint64_t CParticleSystem_m_iServerControlPointAssignments = 0xb1c;
	constexpr uint64_t CParticleSystem_m_nStopType = 0x9dc;
	constexpr uint64_t CParticleSystem_m_szSnapshotFileName = 0x9e8;
	constexpr uint64_t CParticleSystem_m_vServerControlPoints = 0xaec;
	constexpr uint64_t CParticleSystem_m_vecOrigin = 0x138;
	constexpr uint64_t CParticleSystem_moveparent = 0x148;
	constexpr uint64_t CPhysBoxMultiplayer_m_fMass = 0x9e8;
	constexpr uint64_t CPhysBoxMultiplayer_m_iPhysicsMode = 0x9e4;
	constexpr uint64_t CPhysPropLootCrate_m_bRenderInPSPM = 0x2a04;
	constexpr uint64_t CPhysPropLootCrate_m_bRenderInTablet = 0x2a05;
	constexpr uint64_t CPhysPropLootCrate_m_iHealth = 0x100;
	constexpr uint64_t CPhysPropLootCrate_m_iMaxHealth = 0x2a08;
	constexpr uint64_t CPhysicsPropMultiplayer_m_collisionMaxs = 0x29e8;
	constexpr uint64_t CPhysicsPropMultiplayer_m_collisionMins = 0x29dc;
	constexpr uint64_t CPhysicsPropMultiplayer_m_fMass = 0x29d8;
	constexpr uint64_t CPhysicsPropMultiplayer_m_iPhysicsMode = 0x29d4;
	constexpr uint64_t CPhysicsProp_m_bAwake = 0x29b0;
	constexpr uint64_t CPhysicsProp_m_spawnflags = 0x2c8;
	constexpr uint64_t CPlantedC4_m_bBombDefused = 0x29c0;
	constexpr uint64_t CPlantedC4_m_bBombTicking = 0x2990;
	constexpr uint64_t CPlantedC4_m_flC4Blow = 0x29a0;
	constexpr uint64_t CPlantedC4_m_flDefuseCountDown = 0x29bc;
	constexpr uint64_t CPlantedC4_m_flDefuseLength = 0x29b8;
	constexpr uint64_t CPlantedC4_m_flTimerLength = 0x29a4;
	constexpr uint64_t CPlantedC4_m_hBombDefuser = 0x29c4;
	constexpr uint64_t CPlantedC4_m_nBombSite = 0x2994;
	constexpr uint64_t CPlasma_m_flScale = 0x9dc;
	constexpr uint64_t CPlasma_m_flScaleTime = 0x9e0;
	constexpr uint64_t CPlasma_m_flStartScale = 0x9d8;
	constexpr uint64_t CPlasma_m_nFlags = 0x9e4;
	constexpr uint64_t CPlasma_m_nGlowModelIndex = 0x9f0;
	constexpr uint64_t CPlasma_m_nPlasmaModelIndex2 = 0x9ec;
	constexpr uint64_t CPlayerPing_m_bUrgent = 0x9f4;
	constexpr uint64_t CPlayerPing_m_hPingedEntity = 0x9e8;
	constexpr uint64_t CPlayerPing_m_hPlayer = 0x9e4;
	constexpr uint64_t CPlayerPing_m_iType = 0x9ec;
	constexpr uint64_t CPlayerPing_m_szPlaceName = 0x9f5;
	constexpr uint64_t CPlayerResource_m_bAlive = 0x1140;
	constexpr uint64_t CPlayerResource_m_bConnected = 0xae4;
	constexpr uint64_t CPlayerResource_m_iAssists = 0xd30;
	constexpr uint64_t CPlayerResource_m_iCoachingTeam = 0x1288;
	constexpr uint64_t CPlayerResource_m_iDeaths = 0xe34;
	constexpr uint64_t CPlayerResource_m_iHealth = 0x1184;
	constexpr uint64_t CPlayerResource_m_iPendingTeam = 0x103c;
	constexpr uint64_t CPlayerResource_m_iPing = 0xb28;
	constexpr uint64_t CPlayerResource_m_iTeam = 0xf38;
	constexpr uint64_t CPointCamera_m_FOV = 0x9d8;
	constexpr uint64_t CPointCamera_m_FogColor = 0x9e1;
	constexpr uint64_t CPointCamera_m_Resolution = 0x9dc;
	constexpr uint64_t CPointCamera_m_bActive = 0x9f4;
	constexpr uint64_t CPointCamera_m_bFogEnable = 0x9e0;
	constexpr uint64_t CPointCamera_m_bUseScreenAspectRatio = 0x9f5;
	constexpr uint64_t CPointCamera_m_flFogEnd = 0x9ec;
	constexpr uint64_t CPointCamera_m_flFogMaxDensity = 0x9f0;
	constexpr uint64_t CPointCamera_m_flFogStart = 0x9e8;
	constexpr uint64_t CPointCommentaryNode_m_bActive = 0x2990;
	constexpr uint64_t CPointCommentaryNode_m_flStartTime = 0x2994;
	constexpr uint64_t CPointCommentaryNode_m_hViewPosition = 0x2cac;
	constexpr uint64_t CPointCommentaryNode_m_iNodeNumber = 0x2ca0;
	constexpr uint64_t CPointCommentaryNode_m_iNodeNumberMax = 0x2ca4;
	constexpr uint64_t CPointCommentaryNode_m_iszCommentaryFile = 0x2998;
	constexpr uint64_t CPointCommentaryNode_m_iszSpeakers = 0x2ba0;
	constexpr uint64_t CPointWorldText_m_flTextSize = 0x67ba6b60faa140c;
	constexpr uint64_t CPointWorldText_m_szText = 0xa08;
	constexpr uint64_t CPointWorldText_m_textColor = 0xb10;
	constexpr uint64_t CPoseController_m_bPoseValueParity = 0x9ec;
	constexpr uint64_t CPoseController_m_chPoseIndex = 0x9e8;
	constexpr uint64_t CPoseController_m_fCycleFrequency = 0x9fc;
	constexpr uint64_t CPoseController_m_fFModAmplitude = 0xa0c;
	constexpr uint64_t CPoseController_m_fFModRate = 0xa08;
	constexpr uint64_t CPoseController_m_fFModTimeOffset = 0xa04;
	constexpr uint64_t CPoseController_m_fInterpolationTime = 0x9f4;
	constexpr uint64_t CPoseController_m_fPoseValue = 0x9f0;
	constexpr uint64_t CPoseController_m_hProps = 0x9d8;
	constexpr uint64_t CPoseController_m_nFModType = 0xa00;
	constexpr uint64_t CPostProcessController_m_bMaster = 0xa04;
	constexpr uint64_t CPostProcessController_m_flPostProcessParameters = 0x9d8;
	constexpr uint64_t CPrecipitation_m_nPrecipType = 0xa00;
	constexpr uint64_t CPropCounter_m_flDisplayValue = 0x2990;
	constexpr uint64_t CPropJeep_m_bHeadlightIsOn = 0x2adc;
	constexpr uint64_t CPropVehicleChoreoGeneric_m_bEnterAnimOn = 0x2a0c;
	constexpr uint64_t CPropVehicleChoreoGeneric_m_bExitAnimOn = 0x2a0d;
	constexpr uint64_t CPropVehicleChoreoGeneric_m_bForceEyesToAttachment = 0x2a1c;

	enum class as_enum {
		INVALID,
		length_disasm,
		hook_present,
		hook_reset,
		interface_client,
		interface_entity_list,
		interface_engine,
		interface_prediction,
		interface_move_helper,
		interface_game_movement,
		interface_globals,
		interface_model_info,
		interface_model_render,
		interface_material_system,
		interface_render_view,
		interface_cvar,
		interface_view_render,
		interface_view_render_beams,
		interface_game_event_manager,
		interface_input,
		interface_surface_props,
		interface_engine_trace,
		interface_client_state,
		interface_surface,
		interface_memalloc,
		interface_debug_overlay,
		interface_glow_object_manager,
		interface_panel,
		interface_engine_sound,
		interface_game_rules_proxy,
		interface_weapon_system,
		interface_inventory_manager,
		interface_localize,
		interface_hud,
		interface_player_resource,
		interface_client_leaf_system,
		interface_effects,
		interface_host_state,
		interface_mdl_cache,
		interface_studio_render,
		interface_hardware_config,
		interface_client_tools,
		interface_string_tables,
		interface_file_system,
		interface_key_values_system,
		interface_panoroama_ui_engine,
		sig_set_abs_angles,
		sig_set_abs_origin,
		sig_update_anim_state,
		sig_ret_to_cam_think,
		sig_ret_to_draw_notify,
		sig_ret_to_console_print,
		sig_ret_to_add_notify,
		sig_ret_to_draw_crosshair,
		sig_standard_blending_rules,
		sig_build_transformations,
		sig_smoke_count,
		sig_get_econ_item_view,
		sig_get_sequence_act,
		sig_invalidate_physics_recursive,
		sig_is_breakable_entity,
		sig_print_dev_console,
		sig_find_element,
		sig_physics_run_think,
		sig_cmbat_get_econ_item_view,
		sig_get_static_data,
		sig_disable_post_processing,
		sig_gc_client_system,
		sig_lookup_bone,
		sig_modifier_table,
		sig_load_named_sky,
		sig_reveal_ranks,
		sig_set_clantag,
		sig_deathnotice_check,
		sig_clear_deathnotices,
		sig_get_checksum,
		sig_equip_glove,
		sig_item_system,
		sig_parse_kits_addr,
		sig_util_traceline,
		sig_cl_send_move_limit,
		sig_is_ready,
		sig_ret_to_setup_velocity,
		sig_ret_to_post_data_update,
		sig_ret_to_enable_inventory,
		sig_interp_clamp,
		sig_ret_to_trace_ray,
		sig_ret_to_scope_arc,
		sig_ret_to_scope_lens,
		sig_post_process_params,
		sig_ret_to_post_network_data_received,
		sig_ret_to_add_viewmodel_stattrak,
		sig_trace_to_studio_csgo_hitgroups_priority,
		sig_should_skip_anim_frame_check,
		sig_somelimit,
		sig_cvar_check,
		sig_cs_player_pred_map,
		sig_base_cs_grenade_pred_map,
		sig_decoy_map,
		sig_he_map,
		sig_molotov_map,
		sig_sensor_map,
		sig_smoke_map,
		sig_flash_map,
		sig_view_matrix,
		sig_get_item_schema,
		sig_econ_item_destructor,
		sig_create_econ_item,
		sig_animstate_reset,
		sig_update_layer_order_preset,
		sig_update_equipped_state,
		sig_set_custom_name,
		sig_set_custom_desc,
		sig_set_dynamic_attribute_value,
		sig_empty_mapping,
		sig_simulation_tick,
		sig_predictable,
		sig_custom_materials,
		sig_custom_material_initialized,
		sig_visual_data_processors,
		sig_spawn_time,
		sig_ragdoll,
		sig_lod_data,
		sig_ik_context,
		sig_snapshot_front,
		sig_snapshot_back,
		sig_blend_tick,
		sig_get_follow_entity,
		sig_last_client_fire_bullet_time,
		sig_final_predicted_tick,
		sig_occlusion_mask,
		sig_anim_state,
		sig_command_context,
		sig_send_matching_sequence,
		sig_sound_channels,
		sig_activity_mapping,
		sig_load_from_buffer,
		sig_modifier_table_find,
		sig_modifier_table_add_string,
		sig_allocate_thread_id,
		sig_game_tonemap_settings,
		sig_get_active_weapon_prefix,
		sig_get_layer_ideal_weight_from_sequence_cycle,
		sig_on_simulation_time_changing,
		sig_get_root_move_parent,
		sig_ik_context_construct,
		sig_ik_context_destruct,
		sig_ik_context_init,
		sig_ik_context_update_targets,
		sig_ik_context_solve_dependencies,
		sig_allocate_and_merge_bones,
		sig_lookup_sequence,
		sig_ammodef_get,
		sig_get_any_sequence_anim_tag,
		sig_accumulate_interleaved_dispatch_layers,
		sig_process_sockets,
		sig_sequence_hash_find_hash,
		sig_activity_mapping_reinitialize,
		sig_find_mapping,
		sig_index_model_sequences,
		sig_get_seq_desc,
		sig_keyvalues_init,
		sig_ret_is_box_visible,
		sig_random_int,
		sig_random_float,
		sig_random_seed,
		sig_var_mapping,
		sig_free_thread_id,
		sig_tls_slots,
		sig_projectile_throwtime,
		sig_init_materials,
		sig_render_box,
		sig_render_triangle,
		sig_vertex_color_ignorez,
		sig_cycle_offset,
		sig_studio_hdr,
		sig_anim_layers,
		sig_is_ragdoll,
		sig_bone_accessor,
		sig_cl_move_rest,
		sig_post_build_transformations,
		sig_ret_to_post_build_transformations,
		sig_collision_viewheight,
		sig_collision_bounds_change_time,
		sig_velocity_patch,
		sig_kv_find_key,
		sig_kv_set_string,
		sig_surface_props,
		sig_animstate_update_setabsagles,
		sig_mdl_create,
		sig_set_merged_mdl,
		sig_setup_bones_attachment_queries,
		sig_disable_render_target_allocation,
		sig_get_sequence_flags,
		sig_get_iron_sight_controller,
		sig_enable_invalidate_bone_cache,
		sig_line_goes_through_smoke,
		sig_keyvalues_from_netsmg,
		sig_model_bone_counter,
		sig_most_recent_model_bone_counter,
		sig_accumulated_bone_mask,
		sig_ret_hitbox_to_world_transforms,
		sig_emit_sound,
		sig_add_to_dirty_kd_tree,
		sig_get_player_viewmodel_arm_config_for_player_model,
		sig_client_side_addons_mask,
		sig_assassination_target_addon,
		sig_update_addon_models,
		sig_msg_voicedata_constructor,
		sig_parse_svg,
		sig_construct_image,
		sig_load_text_file,
		sig_econ_item_system,
		sig_clear_hud_weapon_icon,
		sig_skinchanger_spam_patch,
		sig_cvar_vac_check,
		sig_v8_try_catch_ctor,
		sig_v8_try_catch_dtor,
		sig_v8_handle_scope_ctor,
		sig_v8_handle_scope_dtor,
		sig_v8_handle_scope_create_handle,
		sig_v8_context_enter,
		sig_v8_context_exit,
		sig_v8_isolate_enter,
		sig_v8_isolate_exit,
		sig_v8_array_get,
		sig_v8_array_length,
		sig_v8_object_get,
		sig_v8_object_get_property_names,
		sig_v8_value_is_boolean,
		sig_v8_value_is_boolean_object,
		sig_v8_value_is_number,
		sig_v8_value_is_number_object,
		sig_v8_value_is_string,
		sig_v8_value_is_string_object,
		sig_v8_value_is_object,
		sig_v8_value_is_array,
		sig_v8_value_is_function,
		sig_v8_value_boolean_value,
		sig_v8_value_number_value,
		sig_v8_value_to_object,
		sig_v8_string_utf8_ctor,
		sig_v8_string_utf8_dtor,
		sig_ui_engine_get_panel_context,
		sig_ui_engine_compile,
		sig_ui_engine_run_compiled_script,
		hook_start_sound_immediate,
		hook_set_bodygroup,
		hook_modify_eye_pos,
		hook_wnd_proc,
		hook_create_move,
		hook_cl_move,
		hook_frame_stage_notify,
		hook_on_latch_interp_var,
		hook_draw_model_execute,
		hook_render_view,
		hook_level_init_post_entity,
		hook_level_init_pre_entity,
		hook_get_tonemap_settings_from_env_tonemap_controller,
		hook_draw_3d_debug_overlays,
		hook_shader_api_draw_mesh,
		hook_is_box_visible,
		hook_scene_end,
		hook_calc_renderable_world_space_aabb_bloated,
		hook_add_renderables_to_render_lists,
		hook_do_post_screen_space_effects,
		hook_send_net_msg,
		hook_override_view,
		hook_paint_traverse,
		hook_find_material,
		hook_emit_sound,
		hook_is_connected,
		hook_lock_cursor,
		hook_draw_set_color,
		hook_test_hitboxes,
		hook_setup_bones,
		hook_animating_setup_bones,
		hook_post_data_update,
		hook_maintain_sequence_transitions,
		hook_trace_ray,
		hook_run_command,
		hook_process_movement,
		hook_transfer_data,
		hook_perform_prediction,
		hook_packet_start,
		hook_level_shutdown,
		hook_physics_simulate,
		hook_estimate_abs_velocity,
		hook_interpolate,
		hook_reset_latched,
		hook_send_weapon_anim,
		hook_fire_event,
		hook_do_animation_events,
		hook_deploy,
		hook_get_fov,
		hook_effects,
		hook_sequence,
		hook_weapon_handle,
		hook_simulation_time,
		hook_general_float,
		hook_general_vec,
		hook_general_int,
		hook_general_bool,
		hook_layer_sequence,
		hook_layer_cycle,
		hook_layer_playback_rate,
		hook_layer_weight,
		hook_layer_weight_delta_rate,
		hook_layer_order,
		hook_convar_get_float_engine,
		hook_convar_get_int_engine,
		hook_convar_get_int_client,
		hook_eye_position_and_vectors,
		hook_obb_change_callback,
		hook_server_cmd_key_values,
		hook_calc_view,
		hook_scale_mouse,
		hook_convar_network_change_callback,
		hook_reevauluate_anim_lod,
		hook_start_sound,
		hook_update_clientside_anim,
		hook_do_animation_events_animating,
		hook_get_default_fov,
		hook_ent_info_list_link_before,
		hook_extract_occluded_renderables,
		hook_sv_msg_voicedata,
		hook_hud_reticle_process_input,
		hook_update_interp_vars,
		hook_particle_draw_model,
		CAI_BaseNPC_m_bFadeCorpse,
		CAI_BaseNPC_m_bImportanRagdoll,
		CAI_BaseNPC_m_bIsMoving,
		CAI_BaseNPC_m_bPerformAvoidance,
		CAI_BaseNPC_m_bSpeedModActive,
		CAI_BaseNPC_m_flTimePingEffect,
		CAI_BaseNPC_m_iDeathFrame,
		CAI_BaseNPC_m_iDeathPose,
		CAI_BaseNPC_m_iSpeedModRadius,
		CAI_BaseNPC_m_iSpeedModSpeed,
		CAI_BaseNPC_m_lifeState,
		CBRC4Target_m_bBrokenOpen,
		CBRC4Target_m_flRadius,
		CBaseAnimating_m_ScaleType,
		CBaseAnimating_m_bClientSideAnimation,
		CBaseAnimating_m_bClientSideFrameReset,
		CBaseAnimating_m_bClientSideRagdoll,
		CBaseAnimating_m_bSuppressAnimSounds,
		CBaseAnimating_m_flCycle,
		CBaseAnimating_m_flEncodedController,
		CBaseAnimating_m_flFrozen,
		CBaseAnimating_m_flModelScale,
		CBaseAnimating_m_flPlaybackRate,
		CBaseAnimating_m_flPoseParameter,
		CBaseAnimating_m_hLightingOrigin,
		CBaseAnimating_m_nBody,
		CBaseAnimating_m_nForceBone,
		CBaseAnimating_m_nHighlightColorB,
		CBaseAnimating_m_nHighlightColorG,
		CBaseAnimating_m_nHighlightColorR,
		CBaseAnimating_m_nHitboxSet,
		CBaseAnimating_m_nMuzzleFlashParity,
		CBaseAnimating_m_nNewSequenceParity,
		CBaseAnimating_m_nResetEventsParity,
		CBaseAnimating_m_nSequence,
		CBaseAnimating_m_nSkin,
		CBaseAnimating_m_vecForce,
		CBaseAttributableItem_m_AttributeManager,
		CBaseAttributableItem_m_Attributes,
		CBaseAttributableItem_m_Item,
		CBaseAttributableItem_m_NetworkedDynamicAttributesForDemos,
		CBaseAttributableItem_m_OriginalOwnerXuidHigh,
		CBaseAttributableItem_m_OriginalOwnerXuidLow,
		CBaseAttributableItem_m_ProviderType,
		CBaseAttributableItem_m_bInitialized,
		CBaseAttributableItem_m_flFallbackWear,
		CBaseAttributableItem_m_hOuter,
		CBaseAttributableItem_m_iAccountID,
		CBaseAttributableItem_m_iEntityLevel,
		CBaseAttributableItem_m_iEntityQuality,
		CBaseAttributableItem_m_iItemDefinitionIndex,
		CBaseAttributableItem_m_iItemIDHigh,
		CBaseAttributableItem_m_iItemIDLow,
		CBaseAttributableItem_m_iReapplyProvisionParity,
		CBaseAttributableItem_m_nFallbackPaintKit,
		CBaseAttributableItem_m_nFallbackSeed,
		CBaseAttributableItem_m_nFallbackStatTrak,
		CBaseAttributableItem_m_szCustomName,
		CBaseButton_m_usable,
		CBaseCSGrenadeProjectile_m_nBounces,
		CBaseCSGrenadeProjectile_m_nExplodeEffectIndex,
		CBaseCSGrenadeProjectile_m_nExplodeEffectTickBegin,
		CBaseCSGrenadeProjectile_m_vInitialVelocity,
		CBaseCSGrenadeProjectile_m_vecExplodeEffectOrigin,
		CBaseCSGrenade_m_bIsHeldByPlayer,
		CBaseCSGrenade_m_bLoopingSoundPlaying,
		CBaseCSGrenade_m_bPinPulled,
		CBaseCSGrenade_m_bRedraw,
		CBaseCSGrenade_m_fDropTime,
		CBaseCSGrenade_m_fThrowTime,
		CBaseCSGrenade_m_flThrowStrength,
		CBaseCombatCharacter_m_LastHitGroup,
		CBaseCombatCharacter_m_flNextAttack,
		CBaseCombatCharacter_m_flTimeOfLastInjury,
		CBaseCombatCharacter_m_hActiveWeapon,
		CBaseCombatCharacter_m_hMyWeapons,
		CBaseCombatCharacter_m_hMyWearables,
		CBaseCombatCharacter_m_nRelativeDirectionOfLastInjury,
		CBaseCombatWeapon_m_bFlipViewModel,
		CBaseCombatWeapon_m_flNextPrimaryAttack,
		CBaseCombatWeapon_m_flNextSecondaryAttack,
		CBaseCombatWeapon_m_flTimeWeaponIdle,
		CBaseCombatWeapon_m_hOwner,
		CBaseCombatWeapon_m_hWeaponWorldModel,
		CBaseCombatWeapon_m_iClip1,
		CBaseCombatWeapon_m_iClip2,
		CBaseCombatWeapon_m_iNumEmptyAttacks,
		CBaseCombatWeapon_m_iPrimaryAmmoType,
		CBaseCombatWeapon_m_iPrimaryReserveAmmoCount,
		CBaseCombatWeapon_m_iSecondaryAmmoType,
		CBaseCombatWeapon_m_iSecondaryReserveAmmoCount,
		CBaseCombatWeapon_m_iState,
		CBaseCombatWeapon_m_iViewModelIndex,
		CBaseCombatWeapon_m_iWeaponModule,
		CBaseCombatWeapon_m_iWeaponOrigin,
		CBaseCombatWeapon_m_iWorldDroppedModelIndex,
		CBaseCombatWeapon_m_iWorldModelIndex,
		CBaseCombatWeapon_m_nNextThinkTick,
		CBaseCombatWeapon_m_nViewModelIndex,
		CBaseDoor_m_flWaveHeight,
		CBaseEntity_m_Collision,
		CBaseEntity_m_CollisionGroup,
		CBaseEntity_m_angRotation,
		CBaseEntity_m_bAlternateSorting,
		CBaseEntity_m_bAnimatedEveryTick,
		CBaseEntity_m_bEligibleForScreenHighlight,
		CBaseEntity_m_bIsAutoaimTarget,
		CBaseEntity_m_bSimulatedEveryTick,
		CBaseEntity_m_bSpotted,
		CBaseEntity_m_bSpottedBy,
		CBaseEntity_m_bSpottedByMask,
		CBaseEntity_m_cellX,
		CBaseEntity_m_cellY,
		CBaseEntity_m_cellZ,
		CBaseEntity_m_cellbits,
		CBaseEntity_m_clrRender,
		CBaseEntity_m_fEffects,
		CBaseEntity_m_fadeMaxDist,
		CBaseEntity_m_fadeMinDist,
		CBaseEntity_m_flAnimTime,
		CBaseEntity_m_flElasticity,
		CBaseEntity_m_flFadeScale,
		CBaseEntity_m_flLastMadeNoiseTime,
		CBaseEntity_m_flMaxFallVelocity,
		CBaseEntity_m_flShadowCastDistance,
		CBaseEntity_m_flSimulationTime,
		CBaseEntity_m_flUseLookAtAngle,
		CBaseEntity_m_hEffectEntity,
		CBaseEntity_m_hOwnerEntity,
		CBaseEntity_m_iName,
		CBaseEntity_m_iParentAttachment,
		CBaseEntity_m_iPendingTeamNum,
		CBaseEntity_m_iTeamNum,
		CBaseEntity_m_iTextureFrameIndex,
		CBaseEntity_m_nMaxCPULevel,
		CBaseEntity_m_nMaxGPULevel,
		CBaseEntity_m_nMinCPULevel,
		CBaseEntity_m_nMinGPULevel,
		CBaseEntity_m_nModelIndex,
		CBaseEntity_m_nRenderFX,
		CBaseEntity_m_nRenderMode,
		CBaseEntity_m_nSolidType,
		CBaseEntity_m_nSurroundType,
		CBaseEntity_m_triggerBloat,
		CBaseEntity_m_usSolidFlags,
		CBaseEntity_m_vecMaxs,
		CBaseEntity_m_vecMins,
		CBaseEntity_m_vecOrigin,
		CBaseEntity_m_vecSpecifiedSurroundingMaxs,
		CBaseEntity_m_vecSpecifiedSurroundingMins,
		CBaseEntity_moveparent,
		CBaseFlex_m_blinktoggle,
		CBaseFlex_m_flexWeight,
		CBaseFlex_m_viewtarget,
		CBaseGrenade_m_DmgRadius,
		CBaseGrenade_m_bIsLive,
		CBaseGrenade_m_fFlags,
		CBaseGrenade_m_flDamage,
		CBaseGrenade_m_hThrower,
		CBaseGrenade_m_vecVelocity,
		CBasePlayer_deadflag,
		CBasePlayer_m_Local,
		CBasePlayer_m_PlayerFog_m_hCtrl,
		CBasePlayer_m_afPhysicsFlags,
		CBasePlayer_m_aimPunchAngle,
		CBasePlayer_m_aimPunchAngleVel,
		CBasePlayer_m_audio_entIndex,
		CBasePlayer_m_audio_localBits,
		CBasePlayer_m_audio_localSound_0_,
		CBasePlayer_m_audio_localSound_1_,
		CBasePlayer_m_audio_localSound_2_,
		CBasePlayer_m_audio_localSound_3_,
		CBasePlayer_m_audio_localSound_4_,
		CBasePlayer_m_audio_localSound_5_,
		CBasePlayer_m_audio_localSound_6_,
		CBasePlayer_m_audio_localSound_7_,
		CBasePlayer_m_audio_soundscapeIndex,
		CBasePlayer_m_bActiveCameraMan,
		CBasePlayer_m_bAllowAutoMovement,
		CBasePlayer_m_bCameraManOverview,
		CBasePlayer_m_bCameraManScoreBoard,
		CBasePlayer_m_bCameraManXRay,
		CBasePlayer_m_bConstraintPastRadius,
		CBasePlayer_m_bDrawViewmodel,
		CBasePlayer_m_bDucked,
		CBasePlayer_m_bDucking,
		CBasePlayer_m_bInDuckJump,
		CBasePlayer_m_bPoisoned,
		CBasePlayer_m_bShouldDrawPlayerWhileUsingViewEntity,
		CBasePlayer_m_bWearingSuit,
		CBasePlayer_m_chAreaBits,
		CBasePlayer_m_chAreaPortalBits,
		CBasePlayer_m_fFlags,
		CBasePlayer_m_fForceTeam,
		CBasePlayer_m_fOnTarget,
		CBasePlayer_m_flConstraintRadius,
		CBasePlayer_m_flConstraintSpeedFactor,
		CBasePlayer_m_flConstraintWidth,
		CBasePlayer_m_flDeathTime,
		CBasePlayer_m_flDuckAmount,
		CBasePlayer_m_flDuckSpeed,
		CBasePlayer_m_flFOVRate,
		CBasePlayer_m_flFOVTime,
		CBasePlayer_m_flFallVelocity,
		CBasePlayer_m_flFriction,
		CBasePlayer_m_flLaggedMovementValue,
		CBasePlayer_m_flLastDuckTime,
		CBasePlayer_m_flMaxspeed,
		CBasePlayer_m_flNextDecalTime,
		CBasePlayer_m_flStepSize,
		CBasePlayer_m_hColorCorrectionCtrl,
		CBasePlayer_m_hConstraintEntity,
		CBasePlayer_m_hGroundEntity,
		CBasePlayer_m_hLastWeapon,
		CBasePlayer_m_hObserverTarget,
		CBasePlayer_m_hPostProcessCtrl,
		CBasePlayer_m_hTonemapController,
		CBasePlayer_m_hUseEntity,
		CBasePlayer_m_hVehicle,
		CBasePlayer_m_hViewEntity,
		CBasePlayer_m_hViewModel_0_,
		CBasePlayer_m_hZoomOwner,
		CBasePlayer_m_iAmmo,
		CBasePlayer_m_iBonusChallenge,
		CBasePlayer_m_iBonusProgress,
		CBasePlayer_m_iCoachingTeam,
		CBasePlayer_m_iDeathPostEffect,
		CBasePlayer_m_iDefaultFOV,
		CBasePlayer_m_iFOV,
		CBasePlayer_m_iFOVStart,
		CBasePlayer_m_iHealth,
		CBasePlayer_m_iHideHUD,
		CBasePlayer_m_iObserverMode,
		CBasePlayer_m_ladderSurfaceProps,
		CBasePlayer_m_lifeState,
		CBasePlayer_m_nDuckJumpTimeMsecs,
		CBasePlayer_m_nDuckTimeMsecs,
		CBasePlayer_m_nJumpTimeMsecs,
		CBasePlayer_m_nNextThinkTick,
		CBasePlayer_m_nOldButtons,
		CBasePlayer_m_nTickBase,
		CBasePlayer_m_nWaterLevel,
		CBasePlayer_m_skybox3d_area,
		CBasePlayer_m_skybox3d_fog_HDRColorScale,
		CBasePlayer_m_skybox3d_fog_blend,
		CBasePlayer_m_skybox3d_fog_colorPrimary,
		CBasePlayer_m_skybox3d_fog_colorSecondary,
		CBasePlayer_m_skybox3d_fog_dirPrimary,
		CBasePlayer_m_skybox3d_fog_enable,
		CBasePlayer_m_skybox3d_fog_end,
		CBasePlayer_m_skybox3d_fog_maxdensity,
		CBasePlayer_m_skybox3d_fog_start,
		CBasePlayer_m_skybox3d_origin,
		CBasePlayer_m_skybox3d_scale,
		CBasePlayer_m_szLastPlaceName,
		CBasePlayer_m_uCameraManGraphs,
		CBasePlayer_m_ubEFNoInterpParity,
		CBasePlayer_m_vecBaseVelocity,
		CBasePlayer_m_vecConstraintCenter,
		CBasePlayer_m_vecLadderNormal,
		CBasePlayer_m_vecVelocity_0_,
		CBasePlayer_m_vecVelocity_1_,
		CBasePlayer_m_vecVelocity_2_,
		CBasePlayer_m_vecViewOffset_0_,
		CBasePlayer_m_vecViewOffset_1_,
		CBasePlayer_m_vecViewOffset_2_,
		CBasePlayer_m_viewPunchAngle,
		CBasePlayer_m_vphysicsCollisionState,
		CBasePlayer_pl,
		CBaseTeamObjectiveResource_m_bBlocked,
		CBaseTeamObjectiveResource_m_bCPIsVisible,
		CBaseTeamObjectiveResource_m_bControlPointsReset,
		CBaseTeamObjectiveResource_m_bInMiniRound,
		CBaseTeamObjectiveResource_m_bPlayingMiniRounds,
		CBaseTeamObjectiveResource_m_bTeamCanCap,
		CBaseTeamObjectiveResource_m_flLazyCapPerc,
		CBaseTeamObjectiveResource_m_flPathDistance,
		CBaseTeamObjectiveResource_m_flTeamCapTime,
		CBaseTeamObjectiveResource_m_iBaseControlPoints,
		CBaseTeamObjectiveResource_m_iCappingTeam,
		CBaseTeamObjectiveResource_m_iNumControlPoints,
		CBaseTeamObjectiveResource_m_iNumTeamMembers,
		CBaseTeamObjectiveResource_m_iOwner,
		CBaseTeamObjectiveResource_m_iPreviousPoints,
		CBaseTeamObjectiveResource_m_iStopWatchTimer,
		CBaseTeamObjectiveResource_m_iTeamBaseIcons,
		CBaseTeamObjectiveResource_m_iTeamIcons,
		CBaseTeamObjectiveResource_m_iTeamInZone,
		CBaseTeamObjectiveResource_m_iTeamOverlays,
		CBaseTeamObjectiveResource_m_iTeamReqCappers,
		CBaseTeamObjectiveResource_m_iTimerToShowInHUD,
		CBaseTeamObjectiveResource_m_iUpdateCapHudParity,
		CBaseTeamObjectiveResource_m_iWarnOnCap,
		CBaseTeamObjectiveResource_m_iszWarnSound_0_,
		CBaseTeamObjectiveResource_m_pszCapLayoutInHUD,
		CBaseTeamObjectiveResource_m_vCPPositions_0_,
		CBaseToggle_m_flMoveTargetTime,
		CBaseToggle_m_movementType,
		CBaseToggle_m_vecFinalDest,
		CBaseTrigger_m_bClientSidePredicted,
		CBaseTrigger_m_spawnflags,
		CBaseViewModel_m_bShouldIgnoreOffsetAndAccuracy,
		CBaseViewModel_m_fEffects,
		CBaseViewModel_m_flPlaybackRate,
		CBaseViewModel_m_hOwner,
		CBaseViewModel_m_hWeapon,
		CBaseViewModel_m_nAnimationParity,
		CBaseViewModel_m_nBody,
		CBaseViewModel_m_nModelIndex,
		CBaseViewModel_m_nMuzzleFlashParity,
		CBaseViewModel_m_nNewSequenceParity,
		CBaseViewModel_m_nResetEventsParity,
		CBaseViewModel_m_nSequence,
		CBaseViewModel_m_nSkin,
		CBaseViewModel_m_nViewModelIndex,
		CBaseWeaponWorldModel_m_fEffects,
		CBaseWeaponWorldModel_m_hCombatWeaponParent,
		CBaseWeaponWorldModel_m_nBody,
		CBaseWeaponWorldModel_m_nModelIndex,
		CBaseWeaponWorldModel_moveparent,
		CBeamSpotlight_m_bHasDynamicLight,
		CBeamSpotlight_m_bSpotlightOn,
		CBeamSpotlight_m_flHDRColorScale,
		CBeamSpotlight_m_flRotationSpeed,
		CBeamSpotlight_m_flSpotlightGoalWidth,
		CBeamSpotlight_m_flSpotlightMaxLength,
		CBeamSpotlight_m_nHaloIndex,
		CBeamSpotlight_m_nRotationAxis,
		CBeam_m_clrRender,
		CBeam_m_fAmplitude,
		CBeam_m_fEndWidth,
		CBeam_m_fFadeLength,
		CBeam_m_fHaloScale,
		CBeam_m_fSpeed,
		CBeam_m_fStartFrame,
		CBeam_m_fWidth,
		CBeam_m_flFrame,
		CBeam_m_flFrameRate,
		CBeam_m_flHDRColorScale,
		CBeam_m_hAttachEntity,
		CBeam_m_nAttachIndex,
		CBeam_m_nBeamFlags,
		CBeam_m_nBeamType,
		CBeam_m_nClipStyle,
		CBeam_m_nHaloIndex,
		CBeam_m_nModelIndex,
		CBeam_m_nNumBeamEnts,
		CBeam_m_nRenderFX,
		CBeam_m_nRenderMode,
		CBeam_m_vecEndPos,
		CBeam_m_vecOrigin,
		CBeam_moveparent,
		CBoneFollower_m_modelIndex,
		CBoneFollower_m_solidIndex,
		CBreachChargeProjectile_m_bShouldExplode,
		CBreachChargeProjectile_m_nParentBoneIndex,
		CBreachChargeProjectile_m_vecParentBonePos,
		CBreachChargeProjectile_m_weaponThatThrewMe,
		CBreakableProp_m_bClientPhysics,
		CBreakableProp_m_qPreferredPlayerCarryAngles,
		CBreakableSurface_m_RawPanelBitVec,
		CBreakableSurface_m_bIsBroken,
		CBreakableSurface_m_flPanelHeight,
		CBreakableSurface_m_flPanelWidth,
		CBreakableSurface_m_nNumHigh,
		CBreakableSurface_m_nNumWide,
		CBreakableSurface_m_nSurfaceType,
		CBreakableSurface_m_vCorner,
		CBreakableSurface_m_vNormal,
		CBumpMineProjectile_m_bArmed,
		CBumpMineProjectile_m_nParentBoneIndex,
		CBumpMineProjectile_m_vecParentBonePos,
		CC4_m_bBombPlacedAnimation,
		CC4_m_bIsPlantingViaUse,
		CC4_m_bShowC4LED,
		CC4_m_bStartedArming,
		CC4_m_fArmedTime,
		CCSGameRulesProxy_m_GGProgressiveWeaponKillUpgradeOrderCT,
		CCSGameRulesProxy_m_GGProgressiveWeaponKillUpgradeOrderT,
		CCSGameRulesProxy_m_GGProgressiveWeaponOrderCT,
		CCSGameRulesProxy_m_GGProgressiveWeaponOrderT,
		CCSGameRulesProxy_m_MatchDevice,
		CCSGameRulesProxy_m_RetakeRules,
		CCSGameRulesProxy_m_SpawnTileState,
		CCSGameRulesProxy_m_SurvivalGameRuleDecisionTypes,
		CCSGameRulesProxy_m_SurvivalGameRuleDecisionValues,
		CCSGameRulesProxy_m_SurvivalRules,
		CCSGameRulesProxy_m_TeamRespawnWaveTimes,
		CCSGameRulesProxy_m_arrFeaturedGiftersAccounts,
		CCSGameRulesProxy_m_arrFeaturedGiftersGifts,
		CCSGameRulesProxy_m_arrProhibitedItemIndices,
		CCSGameRulesProxy_m_arrTournamentActiveCasterAccounts,
		CCSGameRulesProxy_m_bAnyHostageReached,
		CCSGameRulesProxy_m_bBlockersPresent,
		CCSGameRulesProxy_m_bBombDropped,
		CCSGameRulesProxy_m_bBombPlanted,
		CCSGameRulesProxy_m_bCTCantBuy,
		CCSGameRulesProxy_m_bCTTimeOutActive,
		CCSGameRulesProxy_m_bDMBonusActive,
		CCSGameRulesProxy_m_bFreezePeriod,
		CCSGameRulesProxy_m_bGameRestart,
		CCSGameRulesProxy_m_bHasMatchStarted,
		CCSGameRulesProxy_m_bIsDroppingItems,
		CCSGameRulesProxy_m_bIsQuestEligible,
		CCSGameRulesProxy_m_bIsQueuedMatchmaking,
		CCSGameRulesProxy_m_bIsValveDS,
		CCSGameRulesProxy_m_bLogoMap,
		CCSGameRulesProxy_m_bMapHasBombTarget,
		CCSGameRulesProxy_m_bMapHasBuyZone,
		CCSGameRulesProxy_m_bMapHasRescueZone,
		CCSGameRulesProxy_m_bMatchWaitingForResume,
		CCSGameRulesProxy_m_bPlayAllStepSoundsOnServer,
		CCSGameRulesProxy_m_bRoundInProgress,
		CCSGameRulesProxy_m_bTCantBuy,
		CCSGameRulesProxy_m_bTechnicalTimeOut,
		CCSGameRulesProxy_m_bTerroristTimeOutActive,
		CCSGameRulesProxy_m_bWarmupPeriod,
		CCSGameRulesProxy_m_eRoundWinReason,
		CCSGameRulesProxy_m_fMatchStartTime,
		CCSGameRulesProxy_m_fRoundStartTime,
		CCSGameRulesProxy_m_fWarmupPeriodEnd,
		CCSGameRulesProxy_m_fWarmupPeriodStart,
		CCSGameRulesProxy_m_flCMMItemDropRevealEndTime,
		CCSGameRulesProxy_m_flCMMItemDropRevealStartTime,
		CCSGameRulesProxy_m_flCTTimeOutRemaining,
		CCSGameRulesProxy_m_flDMBonusStartTime,
		CCSGameRulesProxy_m_flDMBonusTimeLength,
		CCSGameRulesProxy_m_flGameStartTime,
		CCSGameRulesProxy_m_flGuardianBuyUntilTime,
		CCSGameRulesProxy_m_flNextRespawnWave,
		CCSGameRulesProxy_m_flRestartRoundTime,
		CCSGameRulesProxy_m_flSpawnSelectionTimeEnd,
		CCSGameRulesProxy_m_flSpawnSelectionTimeLoadout,
		CCSGameRulesProxy_m_flSpawnSelectionTimeStart,
		CCSGameRulesProxy_m_flSurvivalStartTime,
		CCSGameRulesProxy_m_flTabletHexOriginX,
		CCSGameRulesProxy_m_flTabletHexOriginY,
		CCSGameRulesProxy_m_flTabletHexSize,
		CCSGameRulesProxy_m_flTerroristTimeOutRemaining,
		CCSGameRulesProxy_m_gamePhase,
		CCSGameRulesProxy_m_iActiveAssassinationTargetMissionID,
		CCSGameRulesProxy_m_iBombSite,
		CCSGameRulesProxy_m_iFirstSecondHalfRound,
		CCSGameRulesProxy_m_iHostagesRemaining,
		CCSGameRulesProxy_m_iMatchStats_PlayersAlive_CT,
		CCSGameRulesProxy_m_iMatchStats_PlayersAlive_T,
		CCSGameRulesProxy_m_iMatchStats_RoundResults,
		CCSGameRulesProxy_m_iNumConsecutiveCTLoses,
		CCSGameRulesProxy_m_iNumConsecutiveTerroristLoses,
		CCSGameRulesProxy_m_iNumGunGameProgressiveWeaponsCT,
		CCSGameRulesProxy_m_iNumGunGameProgressiveWeaponsT,
		CCSGameRulesProxy_m_iPlayerSpawnHexIndices,
		CCSGameRulesProxy_m_iRoundTime,
		CCSGameRulesProxy_m_iRoundWinStatus,
		CCSGameRulesProxy_m_iSpectatorSlotCount,
		CCSGameRulesProxy_m_nCTTimeOuts,
		CCSGameRulesProxy_m_nEndMatchMapGroupVoteOptions,
		CCSGameRulesProxy_m_nEndMatchMapGroupVoteTypes,
		CCSGameRulesProxy_m_nEndMatchMapVoteWinner,
		CCSGameRulesProxy_m_nGuardianModeSpecialKillsRemaining,
		CCSGameRulesProxy_m_nGuardianModeSpecialWeaponNeeded,
		CCSGameRulesProxy_m_nGuardianModeWaveNumber,
		CCSGameRulesProxy_m_nHalloweenMaskListSeed,
		CCSGameRulesProxy_m_nMatchSeed,
		CCSGameRulesProxy_m_nNextMapInMapgroup,
		CCSGameRulesProxy_m_nOvertimePlaying,
		CCSGameRulesProxy_m_nQueuedMatchmakingMode,
		CCSGameRulesProxy_m_nTerroristTimeOuts,
		CCSGameRulesProxy_m_nTournamentPredictionsPct,
		CCSGameRulesProxy_m_numBestOfMaps,
		CCSGameRulesProxy_m_numGlobalGifters,
		CCSGameRulesProxy_m_numGlobalGiftsGiven,
		CCSGameRulesProxy_m_numGlobalGiftsPeriodSeconds,
		CCSGameRulesProxy_m_roundData_playerPositions,
		CCSGameRulesProxy_m_roundData_playerTeams,
		CCSGameRulesProxy_m_roundData_playerXuids,
		CCSGameRulesProxy_m_spawnStage,
		CCSGameRulesProxy_m_szMatchStatTxt,
		CCSGameRulesProxy_m_szTournamentEventName,
		CCSGameRulesProxy_m_szTournamentEventStage,
		CCSGameRulesProxy_m_szTournamentPredictionsTxt,
		CCSGameRulesProxy_m_timeUntilNextPhaseStarts,
		CCSGameRulesProxy_m_totalRoundsPlayed,
		CCSGameRulesProxy_m_unDMBonusWeaponLoadoutSlot,
		CCSGameRulesProxy_m_vecPlayAreaMaxs,
		CCSGameRulesProxy_m_vecPlayAreaMins,
		CCSPlayerResource_m_bControllingBot,
		CCSPlayerResource_m_bEndMatchNextMapAllVoted,
		CCSPlayerResource_m_bHasCommunicationAbuseMute,
		CCSPlayerResource_m_bHasDefuser,
		CCSPlayerResource_m_bHasHelmet,
		CCSPlayerResource_m_bHostageAlive,
		CCSPlayerResource_m_bombsiteCenterA,
		CCSPlayerResource_m_bombsiteCenterB,
		CCSPlayerResource_m_hostageRescueX,
		CCSPlayerResource_m_hostageRescueY,
		CCSPlayerResource_m_hostageRescueZ,
		CCSPlayerResource_m_iArmor,
		CCSPlayerResource_m_iBotDifficulty,
		CCSPlayerResource_m_iCashSpentThisRound,
		CCSPlayerResource_m_iCompTeammateColor,
		CCSPlayerResource_m_iCompetitiveRankType,
		CCSPlayerResource_m_iCompetitiveRanking,
		CCSPlayerResource_m_iCompetitiveWins,
		CCSPlayerResource_m_iControlledByPlayer,
		CCSPlayerResource_m_iControlledPlayer,
		CCSPlayerResource_m_iGunGameLevel,
		CCSPlayerResource_m_iHostageEntityIDs,
		CCSPlayerResource_m_iLifetimeEnd,
		CCSPlayerResource_m_iLifetimeStart,
		CCSPlayerResource_m_iMVPs,
		CCSPlayerResource_m_iMatchStats_3k_Total,
		CCSPlayerResource_m_iMatchStats_4k_Total,
		CCSPlayerResource_m_iMatchStats_5k_Total,
		CCSPlayerResource_m_iMatchStats_Assists_Total,
		CCSPlayerResource_m_iMatchStats_CashEarned_Total,
		CCSPlayerResource_m_iMatchStats_Damage_Total,
		CCSPlayerResource_m_iMatchStats_Deaths_Total,
		CCSPlayerResource_m_iMatchStats_EnemiesFlashed_Total,
		CCSPlayerResource_m_iMatchStats_EquipmentValue_Total,
		CCSPlayerResource_m_iMatchStats_HeadShotKills_Total,
		CCSPlayerResource_m_iMatchStats_KillReward_Total,
		CCSPlayerResource_m_iMatchStats_Kills_Total,
		CCSPlayerResource_m_iMatchStats_LiveTime_Total,
		CCSPlayerResource_m_iMatchStats_Objective_Total,
		CCSPlayerResource_m_iMatchStats_UtilityDamage_Total,
		CCSPlayerResource_m_iPlayerC4,
		CCSPlayerResource_m_iPlayerVIP,
		CCSPlayerResource_m_iScore,
		CCSPlayerResource_m_iTotalCashSpent,
		CCSPlayerResource_m_isHostageFollowingSomeone,
		CCSPlayerResource_m_nActiveCoinRank,
		CCSPlayerResource_m_nCharacterDefIndex,
		CCSPlayerResource_m_nEndMatchNextMapVotes,
		CCSPlayerResource_m_nMusicID,
		CCSPlayerResource_m_nPersonaDataPublicCommendsFriendly,
		CCSPlayerResource_m_nPersonaDataPublicCommendsLeader,
		CCSPlayerResource_m_nPersonaDataPublicCommendsTeacher,
		CCSPlayerResource_m_nPersonaDataPublicLevel,
		CCSPlayerResource_m_szClan,
		CCSPlayerResource_m_szCrosshairCodes,
		CCSPlayer_m_ArmorValue,
		CCSPlayer_m_EquippedLoadoutItemDefIndices,
		CCSPlayer_m_RetakesMVPBoostExtraUtility,
		CCSPlayer_m_angEyeAngles,
		CCSPlayer_m_angEyeAngles_0_,
		CCSPlayer_m_angEyeAngles_1_,
		CCSPlayer_m_bCanControlObservedBot,
		CCSPlayer_m_bCanMoveDuringFreezePeriod,
		CCSPlayer_m_bDuckOverride,
		CCSPlayer_m_bGunGameImmunity,
		CCSPlayer_m_bHasControlledBotThisRound,
		CCSPlayer_m_bHasDefuser,
		CCSPlayer_m_bHasHeavyArmor,
		CCSPlayer_m_bHasHelmet,
		CCSPlayer_m_bHasMovedSinceSpawn,
		CCSPlayer_m_bHasNightVision,
		CCSPlayer_m_bHasParachute,
		CCSPlayer_m_bHideTargetID,
		CCSPlayer_m_bHud_MiniScoreHidden,
		CCSPlayer_m_bHud_RadarHidden,
		CCSPlayer_m_bInBombZone,
		CCSPlayer_m_bInBuyZone,
		CCSPlayer_m_bInHostageRescueZone,
		CCSPlayer_m_bInNoDefuseArea,
		CCSPlayer_m_bIsAssassinationTarget,
		CCSPlayer_m_bIsControllingBot,
		CCSPlayer_m_bIsDefusing,
		CCSPlayer_m_bIsGrabbingHostage,
		CCSPlayer_m_bIsHoldingLookAtWeapon,
		CCSPlayer_m_bIsLookingAtWeapon,
		CCSPlayer_m_bIsPlayerGhost,
		CCSPlayer_m_bIsRescuing,
		CCSPlayer_m_bIsRespawningForDMBonus,
		CCSPlayer_m_bIsScoped,
		CCSPlayer_m_bIsSpawnRappelling,
		CCSPlayer_m_bIsWalking,
		CCSPlayer_m_bKilledByTaser,
		CCSPlayer_m_bMadeFinalGunGameProgressiveKill,
		CCSPlayer_m_bNightVisionOn,
		CCSPlayer_m_bPlayerDominated,
		CCSPlayer_m_bPlayerDominatingMe,
		CCSPlayer_m_bResumeZoom,
		CCSPlayer_m_bRetakesHasDefuseKit,
		CCSPlayer_m_bRetakesMVPLastRound,
		CCSPlayer_m_bStrafing,
		CCSPlayer_m_bWaitForNoAttack,
		CCSPlayer_m_cycleLatch,
		CCSPlayer_m_fImmuneToGunGameDamageTime,
		CCSPlayer_m_fMolotovDamageTime,
		CCSPlayer_m_fMolotovUseTime,
		CCSPlayer_m_flAutoMoveStartTime,
		CCSPlayer_m_flAutoMoveTargetTime,
		CCSPlayer_m_flDetectedByEnemySensorTime,
		CCSPlayer_m_flFlashDuration,
		CCSPlayer_m_flFlashMaxAlpha,
		CCSPlayer_m_flGroundAccelLinearFracLastTime,
		CCSPlayer_m_flGuardianTooFarDistFrac,
		CCSPlayer_m_flHealthShotBoostExpirationTime,
		CCSPlayer_m_flLastExoJumpTime,
		CCSPlayer_m_flLowerBodyYawTarget,
		CCSPlayer_m_flProgressBarStartTime,
		CCSPlayer_m_flStamina,
		CCSPlayer_m_flThirdpersonRecoil,
		CCSPlayer_m_flVelocityModifier,
		CCSPlayer_m_hCarriedHostage,
		CCSPlayer_m_hCarriedHostageProp,
		CCSPlayer_m_hPlayerPing,
		CCSPlayer_m_hRagdoll,
		CCSPlayer_m_hSurvivalAssassinationTarget,
		CCSPlayer_m_iAccount,
		CCSPlayer_m_iAddonBits,
		CCSPlayer_m_iBlockingUseActionInProgress,
		CCSPlayer_m_iClass,
		CCSPlayer_m_iControlledBotEntIndex,
		CCSPlayer_m_iDirection,
		CCSPlayer_m_iGunGameProgressiveWeaponIndex,
		CCSPlayer_m_iMatchStats_Assists,
		CCSPlayer_m_iMatchStats_CashEarned,
		CCSPlayer_m_iMatchStats_Damage,
		CCSPlayer_m_iMatchStats_Deaths,
		CCSPlayer_m_iMatchStats_EnemiesFlashed,
		CCSPlayer_m_iMatchStats_EquipmentValue,
		CCSPlayer_m_iMatchStats_HeadShotKills,
		CCSPlayer_m_iMatchStats_KillReward,
		CCSPlayer_m_iMatchStats_Kills,
		CCSPlayer_m_iMatchStats_LiveTime,
		CCSPlayer_m_iMatchStats_MoneySaved,
		CCSPlayer_m_iMatchStats_Objective,
		CCSPlayer_m_iMatchStats_UtilityDamage,
		CCSPlayer_m_iMoveState,
		CCSPlayer_m_iNumGunGameKillsWithCurrentWeapon,
		CCSPlayer_m_iNumGunGameTRKillPoints,
		CCSPlayer_m_iNumRoundKills,
		CCSPlayer_m_iNumRoundKillsHeadshots,
		CCSPlayer_m_iPlayerState,
		CCSPlayer_m_iPrimaryAddon,
		CCSPlayer_m_iProgressBarDuration,
		CCSPlayer_m_iRetakesMVPBoostItem,
		CCSPlayer_m_iRetakesOffering,
		CCSPlayer_m_iRetakesOfferingCard,
		CCSPlayer_m_iSecondaryAddon,
		CCSPlayer_m_iShotsFired,
		CCSPlayer_m_iStartAccount,
		CCSPlayer_m_iThrowGrenadeCounter,
		CCSPlayer_m_iWeaponPurchasesThisMatch,
		CCSPlayer_m_iWeaponPurchasesThisRound,
		CCSPlayer_m_isCurrentGunGameLeader,
		CCSPlayer_m_isCurrentGunGameTeamLeader,
		CCSPlayer_m_nDeathCamMusic,
		CCSPlayer_m_nHeavyAssaultSuitCooldownRemaining,
		CCSPlayer_m_nIsAutoMounting,
		CCSPlayer_m_nLastConcurrentKilled,
		CCSPlayer_m_nLastKillerIndex,
		CCSPlayer_m_nNumFastDucks,
		CCSPlayer_m_nQuestProgressReason,
		CCSPlayer_m_nSurvivalTeam,
		CCSPlayer_m_passiveItems,
		CCSPlayer_m_rank,
		CCSPlayer_m_szArmsModel,
		CCSPlayer_m_totalHitsOnServer,
		CCSPlayer_m_unActiveQuestId,
		CCSPlayer_m_unCurrentEquipmentValue,
		CCSPlayer_m_unFreezetimeEndEquipmentValue,
		CCSPlayer_m_unMusicID,
		CCSPlayer_m_unPlayerTvControlFlags,
		CCSPlayer_m_unRoundStartEquipmentValue,
		CCSPlayer_m_unTotalRoundDamageDealt,
		CCSPlayer_m_vecAutomoveTargetEnd,
		CCSPlayer_m_vecOrigin,
		CCSPlayer_m_vecOrigin_2_,
		CCSPlayer_m_vecPlayerPatchEconIndices,
		CCSPlayer_m_vecSpawnRappellingRopeOrigin,
		CCSRagdoll_m_bClientSideAnimation,
		CCSRagdoll_m_bDiedAirborne,
		CCSRagdoll_m_flAbsYaw,
		CCSRagdoll_m_flDeathYaw,
		CCSRagdoll_m_hPlayer,
		CCSRagdoll_m_iDeathFrame,
		CCSRagdoll_m_iDeathPose,
		CCSRagdoll_m_iTeamNum,
		CCSRagdoll_m_nForceBone,
		CCSRagdoll_m_nModelIndex,
		CCSRagdoll_m_vecForce,
		CCSRagdoll_m_vecOrigin,
		CCSRagdoll_m_vecRagdollOrigin,
		CCSRagdoll_m_vecRagdollVelocity,
		CCascadeLight_m_LightColor,
		CCascadeLight_m_LightColorScale,
		CCascadeLight_m_bEnabled,
		CCascadeLight_m_bUseLightEnvAngles,
		CCascadeLight_m_envLightShadowDirection,
		CCascadeLight_m_flMaxShadowDist,
		CCascadeLight_m_shadowDirection,
		CChicken_m_jumpedThisFrame,
		CChicken_m_leader,
		CColorCorrectionVolume_m_FadeDuration,
		CColorCorrectionVolume_m_MaxWeight,
		CColorCorrectionVolume_m_Weight,
		CColorCorrectionVolume_m_bEnabled,
		CColorCorrectionVolume_m_lookupFilename,
		CColorCorrection_m_bClientSide,
		CColorCorrection_m_bEnabled,
		CColorCorrection_m_bExclusive,
		CColorCorrection_m_bMaster,
		CColorCorrection_m_flCurWeight,
		CColorCorrection_m_flFadeInDuration,
		CColorCorrection_m_flFadeOutDuration,
		CColorCorrection_m_flMaxWeight,
		CColorCorrection_m_maxFalloff,
		CColorCorrection_m_minFalloff,
		CColorCorrection_m_netLookupFilename,
		CColorCorrection_m_vecOrigin,
		CDangerZoneController_m_DangerZones,
		CDangerZoneController_m_bDangerZoneControllerEnabled,
		CDangerZoneController_m_bMissionControlledExplosions,
		CDangerZoneController_m_flFinalExpansionTime,
		CDangerZoneController_m_flStartTime,
		CDangerZoneController_m_flWaveEndTimes,
		CDangerZoneController_m_hTheFinalZone,
		CDangerZoneController_m_vecEndGameCircleEnd,
		CDangerZoneController_m_vecEndGameCircleStart,
		CDangerZone_m_flBombLaunchTime,
		CDangerZone_m_flExtraRadius,
		CDangerZone_m_flExtraRadiusStartTime,
		CDangerZone_m_flExtraRadiusTotalLerpTime,
		CDangerZone_m_iWave,
		CDangerZone_m_nDropOrder,
		CDangerZone_m_vecDangerZoneOriginStartedAt,
		CDrone_m_bPilotTakeoverAllowed,
		CDrone_m_hCurrentPilot,
		CDrone_m_hDeliveryCargo,
		CDrone_m_hMoveToThisEntity,
		CDrone_m_hPotentialCargo,
		CDrone_m_vecTagIncrements_0_,
		CDrone_m_vecTagPositions_0_,
		CDronegun_m_bHasTarget,
		CDronegun_m_iHealth,
		CDronegun_m_vecAttentionTarget,
		CDronegun_m_vecTargetOffset,
		CDynamicLight_m_Exponent,
		CDynamicLight_m_Flags,
		CDynamicLight_m_InnerAngle,
		CDynamicLight_m_LightStyle,
		CDynamicLight_m_OuterAngle,
		CDynamicLight_m_Radius,
		CDynamicLight_m_SpotRadius,
		CDynamicProp_m_bShouldGlow,
		CDynamicProp_m_bUseHitboxesForRenderBox,
		CDynamicProp_m_clrGlow,
		CDynamicProp_m_flGlowMaxDist,
		CDynamicProp_m_nGlowStyle,
		CEconEntity_m_AttributeManager,
		CEconEntity_m_Attributes,
		CEconEntity_m_Item,
		CEconEntity_m_NetworkedDynamicAttributesForDemos,
		CEconEntity_m_OriginalOwnerXuidHigh,
		CEconEntity_m_OriginalOwnerXuidLow,
		CEconEntity_m_ProviderType,
		CEconEntity_m_bInitialized,
		CEconEntity_m_flFallbackWear,
		CEconEntity_m_hOuter,
		CEconEntity_m_iAccountID,
		CEconEntity_m_iEntityLevel,
		CEconEntity_m_iEntityQuality,
		CEconEntity_m_iItemDefinitionIndex,
		CEconEntity_m_iItemIDHigh,
		CEconEntity_m_iItemIDLow,
		CEconEntity_m_iReapplyProvisionParity,
		CEconEntity_m_nFallbackPaintKit,
		CEconEntity_m_nFallbackSeed,
		CEconEntity_m_nFallbackStatTrak,
		CEconEntity_m_szCustomName,
		CEmbers_m_bEmit,
		CEmbers_m_nDensity,
		CEmbers_m_nLifetime,
		CEmbers_m_nSpeed,
		CEntityDissolve_m_flFadeInLength,
		CEntityDissolve_m_flFadeInStart,
		CEntityDissolve_m_flFadeOutLength,
		CEntityDissolve_m_flFadeOutModelLength,
		CEntityDissolve_m_flFadeOutModelStart,
		CEntityDissolve_m_flFadeOutStart,
		CEntityDissolve_m_flStartTime,
		CEntityDissolve_m_nDissolveType,
		CEntityDissolve_m_nMagnitude,
		CEntityDissolve_m_vDissolverOrigin,
		CEntityFlame_m_bCheapEffect,
		CEntityFlame_m_hEntAttached,
		CEntityFreezing_m_bFinishFreezing,
		CEntityFreezing_m_flFrozen,
		CEntityFreezing_m_flFrozenPerHitbox,
		CEntityFreezing_m_vFreezingOrigin,
		CEntityParticleTrail_m_Info,
		CEntityParticleTrail_m_flEndSize,
		CEntityParticleTrail_m_flLifetime,
		CEntityParticleTrail_m_flStartSize,
		CEntityParticleTrail_m_hConstraintEntity,
		CEntityParticleTrail_m_iMaterialName,
		CEnvAmbientLight_m_vecColor,
		CEnvDOFController_m_bDOFEnabled,
		CEnvDOFController_m_flFarBlurDepth,
		CEnvDOFController_m_flFarBlurRadius,
		CEnvDOFController_m_flFarFocusDepth,
		CEnvDOFController_m_flNearBlurDepth,
		CEnvDOFController_m_flNearBlurRadius,
		CEnvDOFController_m_flNearFocusDepth,
		CEnvDetailController_m_flFadeEndDist,
		CEnvDetailController_m_flFadeStartDist,
		CEnvGasCanister_m_bDoImpactEffects,
		CEnvGasCanister_m_bInSkybox,
		CEnvGasCanister_m_bLanded,
		CEnvGasCanister_m_bLaunchedFromWithinWorld,
		CEnvGasCanister_m_flFlightSpeed,
		CEnvGasCanister_m_flFlightTime,
		CEnvGasCanister_m_flHorizSpeed,
		CEnvGasCanister_m_flInitialZSpeed,
		CEnvGasCanister_m_flLaunchTime,
		CEnvGasCanister_m_flSkyboxScale,
		CEnvGasCanister_m_flWorldEnterTime,
		CEnvGasCanister_m_flZAcceleration,
		CEnvGasCanister_m_hSkyboxCopy,
		CEnvGasCanister_m_nMyZoneIndex,
		CEnvGasCanister_m_vecDirection,
		CEnvGasCanister_m_vecEnterWorldPosition,
		CEnvGasCanister_m_vecImpactPosition,
		CEnvGasCanister_m_vecOrigin,
		CEnvGasCanister_m_vecOrigin_2_,
		CEnvGasCanister_m_vecParabolaDirection,
		CEnvGasCanister_m_vecSkyboxOrigin,
		CEnvGasCanister_m_vecStartAngles,
		CEnvGasCanister_m_vecStartPosition,
		CEnvParticleScript_m_flSequenceScale,
		CEnvProjectedTexture_m_LightColor,
		CEnvProjectedTexture_m_SpotlightTextureName,
		CEnvProjectedTexture_m_bAlwaysUpdate,
		CEnvProjectedTexture_m_bCameraSpace,
		CEnvProjectedTexture_m_bEnableShadows,
		CEnvProjectedTexture_m_bLightOnlyTarget,
		CEnvProjectedTexture_m_bLightWorld,
		CEnvProjectedTexture_m_bSimpleProjection,
		CEnvProjectedTexture_m_bState,
		CEnvProjectedTexture_m_flAmbient,
		CEnvProjectedTexture_m_flBrightnessScale,
		CEnvProjectedTexture_m_flColorTransitionTime,
		CEnvProjectedTexture_m_flFarZ,
		CEnvProjectedTexture_m_flLightFOV,
		CEnvProjectedTexture_m_flNearZ,
		CEnvProjectedTexture_m_flProjectionSize,
		CEnvProjectedTexture_m_flRotation,
		CEnvProjectedTexture_m_hTargetEntity,
		CEnvProjectedTexture_m_iStyle,
		CEnvProjectedTexture_m_nShadowQuality,
		CEnvProjectedTexture_m_nSpotlightTextureFrame,
		CEnvQuadraticBeam_m_controlPosition,
		CEnvQuadraticBeam_m_flWidth,
		CEnvQuadraticBeam_m_scrollRate,
		CEnvQuadraticBeam_m_targetPosition,
		CEnvScreenEffect_m_flDuration,
		CEnvScreenEffect_m_nType,
		CEnvScreenOverlay_m_bIsActive,
		CEnvScreenOverlay_m_flOverlayTimes_0_,
		CEnvScreenOverlay_m_flStartTime,
		CEnvScreenOverlay_m_iDesiredOverlay,
		CEnvScreenOverlay_m_iszOverlayNames_0_,
		CEnvTonemapController_m_bUseCustomAutoExposureMax,
		CEnvTonemapController_m_bUseCustomAutoExposureMin,
		CEnvTonemapController_m_bUseCustomBloomScale,
		CEnvTonemapController_m_flBloomExponent,
		CEnvTonemapController_m_flBloomSaturation,
		CEnvTonemapController_m_flCustomAutoExposureMax,
		CEnvTonemapController_m_flCustomAutoExposureMin,
		CEnvTonemapController_m_flCustomBloomScale,
		CEnvTonemapController_m_flCustomBloomScaleMinimum,
		CEnvTonemapController_m_flTonemapMinAvgLum,
		CEnvTonemapController_m_flTonemapPercentBrightPixels,
		CEnvTonemapController_m_flTonemapPercentTarget,
		CEnvTonemapController_m_flTonemapRate,
		CEnvWind_m_EnvWindShared,
		CEnvWind_m_flGustDuration,
		CEnvWind_m_flInitialWindSpeed,
		CEnvWind_m_flMaxGustDelay,
		CEnvWind_m_flMinGustDelay,
		CEnvWind_m_flStartTime,
		CEnvWind_m_iGustDirChange,
		CEnvWind_m_iInitialWindDir,
		CEnvWind_m_iMaxGust,
		CEnvWind_m_iMaxWind,
		CEnvWind_m_iMinGust,
		CEnvWind_m_iMinWind,
		CEnvWind_m_iWindSeed,
		CFEPlayerDecal_m_flCreationTime,
		CFEPlayerDecal_m_nEntity,
		CFEPlayerDecal_m_nHitbox,
		CFEPlayerDecal_m_nPlayer,
		CFEPlayerDecal_m_nTintID,
		CFEPlayerDecal_m_nUniqueID,
		CFEPlayerDecal_m_nVersion,
		CFEPlayerDecal_m_rtGcTime,
		CFEPlayerDecal_m_ubSignature,
		CFEPlayerDecal_m_unAccountID,
		CFEPlayerDecal_m_unTraceID,
		CFEPlayerDecal_m_vecEndPos,
		CFEPlayerDecal_m_vecNormal,
		CFEPlayerDecal_m_vecRight,
		CFEPlayerDecal_m_vecStart,
		CFireSmoke_m_flScale,
		CFireSmoke_m_flScaleTime,
		CFireSmoke_m_flStartScale,
		CFireSmoke_m_nFlags,
		CFireSmoke_m_nFlameFromAboveModelIndex,
		CFireSmoke_m_nFlameModelIndex,
		CFireTrail_m_flLifetime,
		CFireTrail_m_nAttachment,
		CFish_m_angle,
		CFish_m_lifeState,
		CFish_m_nModelIndex,
		CFish_m_poolOrigin,
		CFish_m_waterLevel,
		CFish_m_x,
		CFish_m_y,
		CFish_m_z,
		CFists_m_bPlayingUninterruptableAct,
		CFogController_m_fog_HDRColorScale,
		CFogController_m_fog_ZoomFogScale,
		CFogController_m_fog_blend,
		CFogController_m_fog_colorPrimary,
		CFogController_m_fog_colorPrimaryLerpTo,
		CFogController_m_fog_colorSecondary,
		CFogController_m_fog_colorSecondaryLerpTo,
		CFogController_m_fog_dirPrimary,
		CFogController_m_fog_duration,
		CFogController_m_fog_enable,
		CFogController_m_fog_end,
		CFogController_m_fog_endLerpTo,
		CFogController_m_fog_farz,
		CFogController_m_fog_lerptime,
		CFogController_m_fog_maxdensity,
		CFogController_m_fog_maxdensityLerpTo,
		CFogController_m_fog_start,
		CFogController_m_fog_startLerpTo,
		CFootstepControl_m_destination,
		CFootstepControl_m_source,
		CFuncAreaPortalWindow_m_flFadeDist,
		CFuncAreaPortalWindow_m_flFadeStartDist,
		CFuncAreaPortalWindow_m_flTranslucencyLimit,
		CFuncAreaPortalWindow_m_iBackgroundModelIndex,
		CFuncConveyor_m_flConveyorSpeed,
		CFuncLadder_m_bFakeLadder,
		CFuncLadder_m_vecLadderDir,
		CFuncLadder_m_vecPlayerMountPositionBottom,
		CFuncLadder_m_vecPlayerMountPositionTop,
		CFuncMoveLinear_m_fFlags,
		CFuncMoveLinear_m_vecVelocity,
		CFuncOccluder_m_bActive,
		CFuncOccluder_m_nOccluderIndex,
		CFuncRotating_m_angRotation_0_,
		CFuncRotating_m_angRotation_1_,
		CFuncRotating_m_angRotation_2_,
		CFuncRotating_m_flSimulationTime,
		CFuncRotating_m_vecOrigin,
		CFuncSmokeVolume_m_Collision,
		CFuncSmokeVolume_m_Color1,
		CFuncSmokeVolume_m_Color2,
		CFuncSmokeVolume_m_Density,
		CFuncSmokeVolume_m_DensityRampSpeed,
		CFuncSmokeVolume_m_MaterialName,
		CFuncSmokeVolume_m_MovementSpeed,
		CFuncSmokeVolume_m_ParticleDrawWidth,
		CFuncSmokeVolume_m_ParticleSpacingDistance,
		CFuncSmokeVolume_m_RotationSpeed,
		CFuncSmokeVolume_m_maxDrawDistance,
		CFuncSmokeVolume_m_nSolidType,
		CFuncSmokeVolume_m_nSurroundType,
		CFuncSmokeVolume_m_spawnflags,
		CFuncSmokeVolume_m_triggerBloat,
		CFuncSmokeVolume_m_usSolidFlags,
		CFuncSmokeVolume_m_vecMaxs,
		CFuncSmokeVolume_m_vecMins,
		CFuncSmokeVolume_m_vecSpecifiedSurroundingMaxs,
		CFuncSmokeVolume_m_vecSpecifiedSurroundingMins,
		CFunc_Dust_m_Collision,
		CFunc_Dust_m_Color,
		CFunc_Dust_m_DistMax,
		CFunc_Dust_m_DustFlags,
		CFunc_Dust_m_FallSpeed,
		CFunc_Dust_m_LifetimeMax,
		CFunc_Dust_m_LifetimeMin,
		CFunc_Dust_m_SpawnRate,
		CFunc_Dust_m_SpeedMax,
		CFunc_Dust_m_bAffectedByWind,
		CFunc_Dust_m_flSizeMax,
		CFunc_Dust_m_flSizeMin,
		CFunc_Dust_m_nModelIndex,
		CFunc_Dust_m_nSolidType,
		CFunc_Dust_m_nSurroundType,
		CFunc_Dust_m_triggerBloat,
		CFunc_Dust_m_usSolidFlags,
		CFunc_Dust_m_vecMaxs,
		CFunc_Dust_m_vecMins,
		CFunc_Dust_m_vecSpecifiedSurroundingMaxs,
		CFunc_Dust_m_vecSpecifiedSurroundingMins,
		CFunc_LOD_m_nDisappearMaxDist,
		CFunc_LOD_m_nDisappearMinDist,
		CGrassBurn_m_flGrassBurnClearTime,
		CHandleTest_m_Handle,
		CHandleTest_m_bSendHandle,
		CHostage_m_fFlags,
		CHostage_m_flDropStartTime,
		CHostage_m_flGrabSuccessTime,
		CHostage_m_flRescueStartTime,
		CHostage_m_iHealth,
		CHostage_m_iMaxHealth,
		CHostage_m_isRescued,
		CHostage_m_jumpedThisFrame,
		CHostage_m_leader,
		CHostage_m_lifeState,
		CHostage_m_nHostageState,
		CHostage_m_vel,
		CInferno_m_bFireIsBurning,
		CInferno_m_fireCount,
		CInferno_m_fireXDelta,
		CInferno_m_fireYDelta,
		CInferno_m_fireZDelta,
		CInferno_m_nFireEffectTickBegin,
		CInfoMapRegion_m_flRadius,
		CInfoMapRegion_m_szLocToken,
		CInfoOverlayAccessor_m_iOverlayID,
		CInfoOverlayAccessor_m_iTextureFrameIndex,
		CItemAssaultSuitUseable_m_bIsHeavyAssaultSuit,
		CItemAssaultSuitUseable_m_nArmorValue,
		CItemDogtags_m_KillingPlayer,
		CItemDogtags_m_OwningPlayer,
		CItem_m_bShouldGlow,
		CLightGlow_m_angRotation,
		CLightGlow_m_clrRender,
		CLightGlow_m_flGlowProxySize,
		CLightGlow_m_nHorizontalSize,
		CLightGlow_m_nMaxDist,
		CLightGlow_m_nMinDist,
		CLightGlow_m_nOuterMaxDist,
		CLightGlow_m_nVerticalSize,
		CLightGlow_m_spawnflags,
		CLightGlow_m_vecOrigin,
		CLightGlow_moveparent,
		CMapVetoPickController_m_nAccountIDs,
		CMapVetoPickController_m_nCurrentPhase,
		CMapVetoPickController_m_nDraftType,
		CMapVetoPickController_m_nMapId0,
		CMapVetoPickController_m_nMapId1,
		CMapVetoPickController_m_nMapId2,
		CMapVetoPickController_m_nMapId3,
		CMapVetoPickController_m_nMapId4,
		CMapVetoPickController_m_nMapId5,
		CMapVetoPickController_m_nPhaseDurationTicks,
		CMapVetoPickController_m_nPhaseStartTick,
		CMapVetoPickController_m_nStartingSide0,
		CMapVetoPickController_m_nTeamWinningCoinToss,
		CMapVetoPickController_m_nTeamWithFirstChoice,
		CMapVetoPickController_m_nVoteMapIdsList,
		CMaterialModifyControl_m_bFloatLerpWrap,
		CMaterialModifyControl_m_bNewAnimCommandsSemaphore,
		CMaterialModifyControl_m_bWrap,
		CMaterialModifyControl_m_flFloatLerpEndValue,
		CMaterialModifyControl_m_flFloatLerpStartValue,
		CMaterialModifyControl_m_flFloatLerpTransitionTime,
		CMaterialModifyControl_m_flFramerate,
		CMaterialModifyControl_m_iFrameEnd,
		CMaterialModifyControl_m_iFrameStart,
		CMaterialModifyControl_m_nModifyMode,
		CMaterialModifyControl_m_szMaterialName,
		CMaterialModifyControl_m_szMaterialVar,
		CMaterialModifyControl_m_szMaterialVarValue,
		CMelee_m_flThrowAt,
		CMolotovProjectile_m_bIsIncGrenade,
		CMovieDisplay_m_bEnabled,
		CMovieDisplay_m_bForcedSlave,
		CMovieDisplay_m_bLooping,
		CMovieDisplay_m_bStretchToFill,
		CMovieDisplay_m_bUseCustomUVs,
		CMovieDisplay_m_flUMax,
		CMovieDisplay_m_flUMin,
		CMovieDisplay_m_flVMax,
		CMovieDisplay_m_flVMin,
		CMovieDisplay_m_szGroupName,
		CMovieDisplay_m_szMovieFilename,
		CParadropChopper_m_hCallingPlayer,
		CParadropChopper_m_vecOrigin,
		CParadropChopper_m_vecOrigin_2_,
		CParticleFire_m_vDirection,
		CParticleFire_m_vOrigin,
		CParticlePerformanceMonitor_m_bDisplayPerf,
		CParticlePerformanceMonitor_m_bMeasurePerf,
		CParticleSystem_m_angRotation,
		CParticleSystem_m_bActive,
		CParticleSystem_m_fEffects,
		CParticleSystem_m_flStartTime,
		CParticleSystem_m_hControlPointEnts,
		CParticleSystem_m_hOwnerEntity,
		CParticleSystem_m_iControlPointParents,
		CParticleSystem_m_iEffectIndex,
		CParticleSystem_m_iParentAttachment,
		CParticleSystem_m_iServerControlPointAssignments,
		CParticleSystem_m_nStopType,
		CParticleSystem_m_szSnapshotFileName,
		CParticleSystem_m_vServerControlPoints,
		CParticleSystem_m_vecOrigin,
		CParticleSystem_moveparent,
		CPhysBoxMultiplayer_m_fMass,
		CPhysBoxMultiplayer_m_iPhysicsMode,
		CPhysBox_m_mass,
		CPhysPropLootCrate_m_bRenderInPSPM,
		CPhysPropLootCrate_m_bRenderInTablet,
		CPhysPropLootCrate_m_iHealth,
		CPhysPropLootCrate_m_iMaxHealth,
		CPhysicsPropMultiplayer_m_collisionMaxs,
		CPhysicsPropMultiplayer_m_collisionMins,
		CPhysicsPropMultiplayer_m_fMass,
		CPhysicsPropMultiplayer_m_iPhysicsMode,
		CPhysicsProp_m_bAwake,
		CPhysicsProp_m_spawnflags,
		CPlantedC4_m_bBombDefused,
		CPlantedC4_m_bBombTicking,
		CPlantedC4_m_flC4Blow,
		CPlantedC4_m_flDefuseCountDown,
		CPlantedC4_m_flDefuseLength,
		CPlantedC4_m_flTimerLength,
		CPlantedC4_m_hBombDefuser,
		CPlantedC4_m_nBombSite,
		CPlasma_m_flScale,
		CPlasma_m_flScaleTime,
		CPlasma_m_flStartScale,
		CPlasma_m_nFlags,
		CPlasma_m_nGlowModelIndex,
		CPlasma_m_nPlasmaModelIndex,
		CPlasma_m_nPlasmaModelIndex2,
		CPlayerPing_m_bUrgent,
		CPlayerPing_m_hPingedEntity,
		CPlayerPing_m_hPlayer,
		CPlayerPing_m_iType,
		CPlayerPing_m_szPlaceName,
		CPlayerResource_m_bAlive,
		CPlayerResource_m_bConnected,
		CPlayerResource_m_iAssists,
		CPlayerResource_m_iCoachingTeam,
		CPlayerResource_m_iDeaths,
		CPlayerResource_m_iHealth,
		CPlayerResource_m_iKills,
		CPlayerResource_m_iPendingTeam,
		CPlayerResource_m_iPing,
		CPlayerResource_m_iTeam,
		CPointCamera_m_FOV,
		CPointCamera_m_FogColor,
		CPointCamera_m_Resolution,
		CPointCamera_m_bActive,
		CPointCamera_m_bFogEnable,
		CPointCamera_m_bUseScreenAspectRatio,
		CPointCamera_m_flFogEnd,
		CPointCamera_m_flFogMaxDensity,
		CPointCamera_m_flFogStart,
		CPointCommentaryNode_m_bActive,
		CPointCommentaryNode_m_flStartTime,
		CPointCommentaryNode_m_hViewPosition,
		CPointCommentaryNode_m_iNodeNumber,
		CPointCommentaryNode_m_iNodeNumberMax,
		CPointCommentaryNode_m_iszCommentaryFile,
		CPointCommentaryNode_m_iszCommentaryFileNoHDR,
		CPointCommentaryNode_m_iszSpeakers,
		CPointWorldText_m_flTextSize,
		CPointWorldText_m_szText,
		CPointWorldText_m_textColor,
		CPoseController_m_bInterpolationWrap,
		CPoseController_m_bPoseValueParity,
		CPoseController_m_chPoseIndex,
		CPoseController_m_fCycleFrequency,
		CPoseController_m_fFModAmplitude,
		CPoseController_m_fFModRate,
		CPoseController_m_fFModTimeOffset,
		CPoseController_m_fInterpolationTime,
		CPoseController_m_fPoseValue,
		CPoseController_m_hProps,
		CPoseController_m_nFModType,
		CPostProcessController_m_bMaster,
		CPostProcessController_m_flPostProcessParameters,
		CPrecipitation_m_nPrecipType,
		CPropCounter_m_flDisplayValue,
		CPropJeep_m_bHeadlightIsOn,
		CPropVehicleChoreoGeneric_m_bEnterAnimOn,
		CPropVehicleChoreoGeneric_m_bExitAnimOn,
		CPropVehicleChoreoGeneric_m_bForceEyesToAttachment,
		CPropVehicleChoreoGeneric_m_hPlayer,
		CPropVehicleChoreoGeneric_m_vecEyeExitEndpoint,
		CPropVehicleChoreoGeneric_m_vehicleView_bClampEyeAngles,
		CPropVehicleChoreoGeneric_m_vehicleView_flFOV,
		CPropVehicleChoreoGeneric_m_vehicleView_flPitchCurveLinear,
		CPropVehicleChoreoGeneric_m_vehicleView_flPitchCurveZero,
		CPropVehicleChoreoGeneric_m_vehicleView_flPitchMax,
		CPropVehicleChoreoGeneric_m_vehicleView_flPitchMin,
		CPropVehicleChoreoGeneric_m_vehicleView_flRollCurveLinear,
		CPropVehicleChoreoGeneric_m_vehicleView_flRollCurveZero,
		CPropVehicleChoreoGeneric_m_vehicleView_flYawMax,
		CPropVehicleChoreoGeneric_m_vehicleView_flYawMin,
		CPropVehicleDriveable_m_bEnterAnimOn,
		CPropVehicleDriveable_m_bExitAnimOn,
		CPropVehicleDriveable_m_bHasGun,
		CPropVehicleDriveable_m_bUnableToFire,
		CPropVehicleDriveable_m_flThrottle,
		CPropVehicleDriveable_m_hPlayer,
		CPropVehicleDriveable_m_nBoostTimeLeft,
		CPropVehicleDriveable_m_nHasBoost,
		CPropVehicleDriveable_m_nRPM,
		CPropVehicleDriveable_m_nScannerDisabledVehicle,
		CPropVehicleDriveable_m_nScannerDisabledWeapons,
		CPropVehicleDriveable_m_nSpeed,
		CPropVehicleDriveable_m_vecEyeExitEndpoint,
		CPropVehicleDriveable_m_vecGunCrosshair,
		CProp_Hallucination_m_bEnabled,
		CProp_Hallucination_m_fRechargeTime,
		CProp_Hallucination_m_fVisibleTime,
		CRagdollManager_m_iCurrentMaxRagdollCount,
		CRagdollPropAttached_m_attachmentPointBoneSpace,
		CRagdollPropAttached_m_attachmentPointRagdollSpace,
		CRagdollPropAttached_m_boneIndexAttached,
		CRagdollPropAttached_m_ragdollAttachedObjectIndex,
		CRagdollProp_m_flBlendWeight,
		CRagdollProp_m_hUnragdoll,
		CRagdollProp_m_nOverlaySequence,
		CRagdollProp_m_ragAngles_0_,
		CRagdollProp_m_ragPos_0_,
		CRopeKeyframe_m_RopeFlags,
		CRopeKeyframe_m_RopeLength,
		CRopeKeyframe_m_Slack,
		CRopeKeyframe_m_Subdiv,
		CRopeKeyframe_m_TextureScale,
		CRopeKeyframe_m_Width,
		CRopeKeyframe_m_bConstrainBetweenEndpoints,
		CRopeKeyframe_m_fLockedPoints,
		CRopeKeyframe_m_flScrollSpeed,
		CRopeKeyframe_m_hEndPoint,
		CRopeKeyframe_m_hStartPoint,
		CRopeKeyframe_m_iDefaultRopeMaterialModelIndex,
		CRopeKeyframe_m_iEndAttachment,
		CRopeKeyframe_m_iParentAttachment,
		CRopeKeyframe_m_iRopeMaterialModelIndex,
		CRopeKeyframe_m_iStartAttachment,
		CRopeKeyframe_m_nChangeCount,
		CRopeKeyframe_m_nMaxCPULevel,
		CRopeKeyframe_m_nMaxGPULevel,
		CRopeKeyframe_m_nMinCPULevel,
		CRopeKeyframe_m_nMinGPULevel,
		CRopeKeyframe_m_nSegments,
		CRopeKeyframe_m_vecOrigin,
		CRopeKeyframe_moveparent,
		CSceneEntity_m_bIsPlayingBack,
		CSceneEntity_m_bMultiplayer,
		CSceneEntity_m_bPaused,
		CSceneEntity_m_flForceClientTime,
		CSceneEntity_m_nSceneStringIndex,
		CShadowControl_m_bDisableShadows,
		CShadowControl_m_bEnableLocalLightShadows,
		CShadowControl_m_flShadowMaxDist,
		CShadowControl_m_shadowColor,
		CShadowControl_m_shadowDirection,
		CSlideshowDisplay_m_bEnabled,
		CSlideshowDisplay_m_bNoListRepeats,
		CSlideshowDisplay_m_chCurrentSlideLists,
		CSlideshowDisplay_m_fMaxSlideTime,
		CSlideshowDisplay_m_fMinSlideTime,
		CSlideshowDisplay_m_iCycleType,
		CSlideshowDisplay_m_szDisplayText,
		CSlideshowDisplay_m_szSlideshowDirectory,
		CSmokeGrenadeProjectile_m_bDidSmokeEffect,
		CSmokeGrenadeProjectile_m_nSmokeEffectTickBegin,
		CSmokeStack_m_AmbientLight_m_flIntensity,
		CSmokeStack_m_AmbientLight_m_vColor,
		CSmokeStack_m_AmbientLight_m_vPos,
		CSmokeStack_m_DirLight_m_flIntensity,
		CSmokeStack_m_DirLight_m_vColor,
		CSmokeStack_m_DirLight_m_vPos,
		CSmokeStack_m_EndSize,
		CSmokeStack_m_JetLength,
		CSmokeStack_m_Rate,
		CSmokeStack_m_Speed,
		CSmokeStack_m_SpreadSpeed,
		CSmokeStack_m_StartSize,
		CSmokeStack_m_bEmit,
		CSmokeStack_m_flBaseSpread,
		CSmokeStack_m_flRollSpeed,
		CSmokeStack_m_flTwist,
		CSmokeStack_m_iMaterialModel,
		CSmokeStack_m_vWind,
		CSpatialEntity_m_bEnabled,
		CSpatialEntity_m_flCurWeight,
		CSpatialEntity_m_maxFalloff,
		CSpatialEntity_m_minFalloff,
		CSpatialEntity_m_vecOrigin,
		CSpotlightEnd_m_Radius,
		CSpotlightEnd_m_flLightScale,
		CSpriteTrail_m_flEndWidth,
		CSpriteTrail_m_flLifeTime,
		CSpriteTrail_m_flMinFadeLength,
		CSpriteTrail_m_flSkyboxScale,
		CSpriteTrail_m_flStartWidth,
		CSpriteTrail_m_flStartWidthVariance,
		CSpriteTrail_m_flTextureRes,
		CSpriteTrail_m_vecSkyboxOrigin,
		CSprite_m_bWorldSpaceScale,
		CSprite_m_flBrightnessTime,
		CSprite_m_flFrame,
		CSprite_m_flGlowProxySize,
		CSprite_m_flHDRColorScale,
		CSprite_m_flScaleTime,
		CSprite_m_flSpriteFramerate,
		CSprite_m_flSpriteScale,
		CSprite_m_hAttachedToEntity,
		CSprite_m_nAttachment,
		CSprite_m_nBrightness,
		CStatueProp_m_bShatter,
		CStatueProp_m_hInitBaseAnimating,
		CStatueProp_m_nShatterFlags,
		CStatueProp_m_vShatterForce,
		CStatueProp_m_vShatterPosition,
		CSteamJet_m_EndSize,
		CSteamJet_m_JetLength,
		CSteamJet_m_Rate,
		CSteamJet_m_Speed,
		CSteamJet_m_SpreadSpeed,
		CSteamJet_m_StartSize,
		CSteamJet_m_bEmit,
		CSteamJet_m_bFaceLeft,
		CSteamJet_m_flRollSpeed,
		CSteamJet_m_nType,
		CSteamJet_m_spawnflags,
		CSun_m_bOn,
		CSun_m_clrOverlay,
		CSun_m_clrRender,
		CSun_m_nMaterial,
		CSun_m_nOverlayMaterial,
		CSun_m_nOverlaySize,
		CSun_m_nSize,
		CSun_m_vDirection,
		CSunlightShadowControl_m_LightColor,
		CSunlightShadowControl_m_TextureName,
		CSunlightShadowControl_m_bEnableShadows,
		CSunlightShadowControl_m_bEnabled,
		CSunlightShadowControl_m_flColorTransitionTime,
		CSunlightShadowControl_m_flFOV,
		CSunlightShadowControl_m_flNearZ,
		CSunlightShadowControl_m_flNorthOffset,
		CSunlightShadowControl_m_flSunDistance,
		CSunlightShadowControl_m_shadowDirection,
		CSurvivalSpawnChopper_m_vecOrigin,
		CSurvivalSpawnChopper_m_vecOrigin_2_,
		CTEBSPDecal_m_nEntity,
		CTEBSPDecal_m_nIndex,
		CTEBSPDecal_m_vecOrigin,
		CTEBaseBeam_a,
		CTEBaseBeam_b,
		CTEBaseBeam_g,
		CTEBaseBeam_m_fAmplitude,
		CTEBaseBeam_m_fEndWidth,
		CTEBaseBeam_m_fLife,
		CTEBaseBeam_m_fWidth,
		CTEBaseBeam_m_nFadeLength,
		CTEBaseBeam_m_nFlags,
		CTEBaseBeam_m_nFrameRate,
		CTEBaseBeam_m_nHaloIndex,
		CTEBaseBeam_m_nModelIndex,
		CTEBaseBeam_m_nSpeed,
		CTEBaseBeam_m_nStartFrame,
		CTEBaseBeam_r,
		CTEBeamEntPoint_m_nEndEntity,
		CTEBeamEntPoint_m_nStartEntity,
		CTEBeamEntPoint_m_vecEndPoint,
		CTEBeamEntPoint_m_vecStartPoint,
		CTEBeamEnts_m_nEndEntity,
		CTEBeamEnts_m_nStartEntity,
		CTEBeamFollow_m_iEntIndex,
		CTEBeamLaser_m_nEndEntity,
		CTEBeamLaser_m_nStartEntity,
		CTEBeamPoints_m_vecEndPoint,
		CTEBeamPoints_m_vecStartPoint,
		CTEBeamRingPoint_m_flEndRadius,
		CTEBeamRingPoint_m_flStartRadius,
		CTEBeamRingPoint_m_vecCenter,
		CTEBeamRing_m_nEndEntity,
		CTEBeamRing_m_nStartEntity,
		CTEBeamSpline_m_nPoints,
		CTEBeamSpline_m_vecPoints_0_,
		CTEBloodSprite_a,
		CTEBloodSprite_b,
		CTEBloodSprite_g,
		CTEBloodSprite_m_nDropModel,
		CTEBloodSprite_m_nSize,
		CTEBloodSprite_m_nSprayModel,
		CTEBloodSprite_m_vecDirection,
		CTEBloodSprite_m_vecOrigin,
		CTEBloodSprite_r,
		CTEBloodStream_a,
		CTEBloodStream_b,
		CTEBloodStream_g,
		CTEBloodStream_m_nAmount,
		CTEBloodStream_m_vecDirection,
		CTEBloodStream_r,
		CTEBreakModel_m_angRotation_0_,
		CTEBreakModel_m_angRotation_1_,
		CTEBreakModel_m_angRotation_2_,
		CTEBreakModel_m_fTime,
		CTEBreakModel_m_nCount,
		CTEBreakModel_m_nFlags,
		CTEBreakModel_m_nModelIndex,
		CTEBreakModel_m_nRandomization,
		CTEBreakModel_m_vecOrigin,
		CTEBreakModel_m_vecSize,
		CTEBreakModel_m_vecVelocity,
		CTEBubbleTrail_m_fSpeed,
		CTEBubbleTrail_m_flWaterZ,
		CTEBubbleTrail_m_nCount,
		CTEBubbleTrail_m_nModelIndex,
		CTEBubbleTrail_m_vecMaxs,
		CTEBubbleTrail_m_vecMins,
		CTEBubbles_m_fHeight,
		CTEBubbles_m_fSpeed,
		CTEBubbles_m_nCount,
		CTEBubbles_m_nModelIndex,
		CTEBubbles_m_vecMaxs,
		CTEBubbles_m_vecMins,
		CTEClientProjectile_m_hOwner,
		CTEClientProjectile_m_nLifeTime,
		CTEClientProjectile_m_nModelIndex,
		CTEClientProjectile_m_vecOrigin,
		CTEClientProjectile_m_vecVelocity,
		CTEDecal_m_nEntity,
		CTEDecal_m_nHitbox,
		CTEDecal_m_nIndex,
		CTEDecal_m_vecOrigin,
		CTEDecal_m_vecStart,
		CTEDust_m_flSize,
		CTEDust_m_flSpeed,
		CTEDust_m_vecDirection,
		CTEDynamicLight_b,
		CTEDynamicLight_exponent,
		CTEDynamicLight_g,
		CTEDynamicLight_m_fDecay,
		CTEDynamicLight_m_fRadius,
		CTEDynamicLight_m_fTime,
		CTEDynamicLight_m_vecOrigin,
		CTEDynamicLight_r,
		CTEEffectDispatch_entindex,
		CTEEffectDispatch_m_EffectData,
		CTEEffectDispatch_m_bPositionsAreRelativeToEntity,
		CTEEffectDispatch_m_fFlags,
		CTEEffectDispatch_m_flMagnitude,
		CTEEffectDispatch_m_flRadius,
		CTEEffectDispatch_m_flScale,
		CTEEffectDispatch_m_iEffectName,
		CTEEffectDispatch_m_nAttachmentIndex,
		CTEEffectDispatch_m_nColor,
		CTEEffectDispatch_m_nDamageType,
		CTEEffectDispatch_m_nHitBox,
		CTEEffectDispatch_m_nMaterial,
		CTEEffectDispatch_m_nOtherEntIndex,
		CTEEffectDispatch_m_nSurfaceProp,
		CTEEffectDispatch_m_vAngles,
		CTEEffectDispatch_m_vNormal,
		CTEEffectDispatch_m_vOrigin_x,
		CTEEffectDispatch_m_vOrigin_y,
		CTEEffectDispatch_m_vOrigin_z,
		CTEEffectDispatch_m_vStart_x,
		CTEEffectDispatch_m_vStart_y,
		CTEEffectDispatch_m_vStart_z,
		CTEEnergySplash_m_bExplosive,
		CTEEnergySplash_m_vecDir,
		CTEEnergySplash_m_vecPos,
		CTEExplosion_m_chMaterialType,
		CTEExplosion_m_fScale,
		CTEExplosion_m_nFlags,
		CTEExplosion_m_nFrameRate,
		CTEExplosion_m_nMagnitude,
		CTEExplosion_m_nModelIndex,
		CTEExplosion_m_nRadius,
		CTEExplosion_m_vecNormal,
		CTEFireBullets_m_fInaccuracy,
		CTEFireBullets_m_fSpread,
		CTEFireBullets_m_flRecoilIndex,
		CTEFireBullets_m_iMode,
		CTEFireBullets_m_iPlayer,
		CTEFireBullets_m_iSeed,
		CTEFireBullets_m_iSoundType,
		CTEFireBullets_m_iWeaponID,
		CTEFireBullets_m_nItemDefIndex,
		CTEFireBullets_m_vecAngles_0_,
		CTEFireBullets_m_vecAngles_1_,
		CTEFireBullets_m_vecOrigin,
		CTEFireBullets_m_weapon,
		CTEFizz_m_nCurrent,
		CTEFizz_m_nDensity,
		CTEFizz_m_nEntity,
		CTEFizz_m_nModelIndex,
		CTEFootprintDecal_m_chMaterialType,
		CTEFootprintDecal_m_nEntity,
		CTEFootprintDecal_m_nIndex,
		CTEFootprintDecal_m_vecDirection,
		CTEFootprintDecal_m_vecOrigin,
		CTEFoundryHelpers_m_iEntity,
		CTEGaussExplosion_m_nType,
		CTEGaussExplosion_m_vecDirection,
		CTEGlowSprite_m_fLife,
		CTEGlowSprite_m_fScale,
		CTEGlowSprite_m_nBrightness,
		CTEGlowSprite_m_nModelIndex,
		CTEGlowSprite_m_vecOrigin,
		CTEImpact_m_iType,
		CTEImpact_m_ucFlags,
		CTEImpact_m_vecNormal,
		CTEImpact_m_vecOrigin,
		CTEKillPlayerAttachments_m_nPlayer,
		CTELargeFunnel_m_nModelIndex,
		CTELargeFunnel_m_nReversed,
		CTEMetalSparks_m_vecDir,
		CTEMetalSparks_m_vecPos,
		CTEMuzzleFlash_m_flScale,
		CTEMuzzleFlash_m_nType,
		CTEMuzzleFlash_m_vecAngles,
		CTEMuzzleFlash_m_vecOrigin,
		CTEParticleSystem_m_vecOrigin_0_,
		CTEParticleSystem_m_vecOrigin_1_,
		CTEParticleSystem_m_vecOrigin_2_,
		CTEPhysicsProp_m_angRotation_0_,
		CTEPhysicsProp_m_angRotation_1_,
		CTEPhysicsProp_m_angRotation_2_,
		CTEPhysicsProp_m_clrRender,
		CTEPhysicsProp_m_nEffects,
		CTEPhysicsProp_m_nFlags,
		CTEPhysicsProp_m_nModelIndex,
		CTEPhysicsProp_m_nSkin,
		CTEPhysicsProp_m_vecOrigin,
		CTEPhysicsProp_m_vecVelocity,
		CTEPlantBomb_m_iPlayer,
		CTEPlantBomb_m_option,
		CTEPlantBomb_m_vecOrigin,
		CTEPlayerAnimEvent_m_hPlayer,
		CTEPlayerAnimEvent_m_iEvent,
		CTEPlayerAnimEvent_m_nData,
		CTEPlayerDecal_m_nEntity,
		CTEPlayerDecal_m_nHitbox,
		CTEPlayerDecal_m_nPlayer,
		CTEPlayerDecal_m_vecOrigin,
		CTEPlayerDecal_m_vecRight,
		CTEPlayerDecal_m_vecStart,
		CTEProjectedDecal_m_angRotation,
		CTEProjectedDecal_m_flDistance,
		CTEProjectedDecal_m_nIndex,
		CTEProjectedDecal_m_vecOrigin,
		CTERadioIcon_m_iAttachToClient,
		CTEShatterSurface_m_flHeight,
		CTEShatterSurface_m_flShardSize,
		CTEShatterSurface_m_flWidth,
		CTEShatterSurface_m_nSurfaceType,
		CTEShatterSurface_m_uchBackColor_0_,
		CTEShatterSurface_m_uchBackColor_1_,
		CTEShatterSurface_m_uchBackColor_2_,
		CTEShatterSurface_m_uchFrontColor_0_,
		CTEShatterSurface_m_uchFrontColor_1_,
		CTEShatterSurface_m_uchFrontColor_2_,
		CTEShatterSurface_m_vecAngles,
		CTEShatterSurface_m_vecForce,
		CTEShatterSurface_m_vecForcePos,
		CTEShatterSurface_m_vecOrigin,
		CTEShowLine_m_vecEnd,
		CTESmoke_m_fScale,
		CTESmoke_m_nFrameRate,
		CTESmoke_m_nModelIndex,
		CTESmoke_m_vecOrigin,
		CTESparks_m_nMagnitude,
		CTESparks_m_nTrailLength,
		CTESparks_m_vecDir,
		CTESpriteSpray_m_fNoise,
		CTESpriteSpray_m_nCount,
		CTESpriteSpray_m_nModelIndex,
		CTESpriteSpray_m_nSpeed,
		CTESpriteSpray_m_vecDirection,
		CTESpriteSpray_m_vecOrigin,
		CTESprite_m_fScale,
		CTESprite_m_nBrightness,
		CTESprite_m_nModelIndex,
		CTESprite_m_vecOrigin,
		CTEWorldDecal_m_nIndex,
		CTEWorldDecal_m_vecOrigin,
		CTablet_m_bTabletReceptionIsBlocked,
		CTablet_m_flBootTime,
		CTablet_m_flScanProgress,
		CTablet_m_flShowMapTime,
		CTablet_m_flUpgradeExpirationTime_0_,
		CTablet_m_nContractKillGridHighResIndex,
		CTablet_m_nContractKillGridIndex,
		CTablet_m_nLastPurchaseIndex,
		CTablet_m_vecLocalHexFlags_0_,
		CTablet_m_vecNearestMetalCratePos,
		CTablet_m_vecNotificationIds_0_,
		CTablet_m_vecNotificationTimestamps_0_,
		CTablet_m_vecPlayerPositionHistory_0_,
		CTeam_m_bSurrendered,
		CTeam_m_iClanID,
		CTeam_m_iTeamNum,
		CTeam_m_nGGLeaderEntIndex_CT,
		CTeam_m_nGGLeaderEntIndex_T,
		CTeam_m_numMapVictories,
		CTeam_m_scoreFirstHalf,
		CTeam_m_scoreOvertime,
		CTeam_m_scoreSecondHalf,
		CTeam_m_scoreTotal,
		CTeam_m_szClanTeamname,
		CTeam_m_szTeamFlagImage,
		CTeam_m_szTeamLogoImage,
		CTeam_m_szTeamMatchStat,
		CTeam_m_szTeamname,
		CTeamplayRoundBasedRulesProxy_m_TeamRespawnWaveTimes,
		CTeamplayRoundBasedRulesProxy_m_bAwaitingReadyRestart,
		CTeamplayRoundBasedRulesProxy_m_bInOvertime,
		CTeamplayRoundBasedRulesProxy_m_bInSetup,
		CTeamplayRoundBasedRulesProxy_m_bInWaitingForPlayers,
		CTeamplayRoundBasedRulesProxy_m_bStopWatch,
		CTeamplayRoundBasedRulesProxy_m_bSwitchedTeamsThisRound,
		CTeamplayRoundBasedRulesProxy_m_bTeamReady,
		CTeamplayRoundBasedRulesProxy_m_flMapResetTime,
		CTeamplayRoundBasedRulesProxy_m_flNextRespawnWave,
		CTeamplayRoundBasedRulesProxy_m_flRestartRoundTime,
		CTeamplayRoundBasedRulesProxy_m_iRoundState,
		CTeamplayRoundBasedRulesProxy_m_iWinningTeam,
		CTesla_m_SoundName,
		CTesla_m_iszSpriteName,
		CTestTraceline_m_angRotation_0_,
		CTestTraceline_m_angRotation_1_,
		CTestTraceline_m_angRotation_2_,
		CTestTraceline_m_clrRender,
		CTestTraceline_m_vecOrigin,
		CTestTraceline_moveparent,
		CTest_ProxyToggle_Networkable_m_WithProxy,
		CTriggerSoundOperator_m_nSoundOperator,
		CVGuiScreen_m_fScreenFlags,
		CVGuiScreen_m_flHeight,
		CVGuiScreen_m_flWidth,
		CVGuiScreen_m_hPlayerOwner,
		CVGuiScreen_m_nAttachmentIndex,
		CVGuiScreen_m_nOverlayMaterial,
		CVGuiScreen_m_nPanelName,
		CVoteController_m_bIsYesNoVote,
		CVoteController_m_iActiveIssueIndex,
		CVoteController_m_iOnlyTeamToVote,
		CVoteController_m_nPotentialVotes,
		CVoteController_m_nVoteOptionCount,
		CWaterLODControl_m_flCheapWaterEndDistance,
		CWaterLODControl_m_flCheapWaterStartDistance,
		CWeaponBaseItem_m_bRedraw,
		CWeaponCSBaseGun_m_iBurstShotsRemaining,
		CWeaponCSBaseGun_m_zoomLevel,
		CWeaponCSBase_m_bBurstMode,
		CWeaponCSBase_m_bReloadVisuallyComplete,
		CWeaponCSBase_m_bSilencerOn,
		CWeaponCSBase_m_fAccuracyPenalty,
		CWeaponCSBase_m_fLastShotTime,
		CWeaponCSBase_m_flDoneSwitchingSilencer,
		CWeaponCSBase_m_flPostponeFireReadyTime,
		CWeaponCSBase_m_flRecoilIndex,
		CWeaponCSBase_m_hPrevOwner,
		CWeaponCSBase_m_iIronSightMode,
		CWeaponCSBase_m_iOriginalTeamNumber,
		CWeaponCSBase_m_iRecoilIndex,
		CWeaponCSBase_m_weaponMode,
		CWeaponM3_m_reloadState,
		CWeaponNOVA_m_reloadState,
		CWeaponSawedoff_m_reloadState,
		CWeaponShield_m_flDisplayHealth,
		CWeaponTaser_m_fFireTime,
		CWeaponXM1014_m_reloadState,
		CWorldVguiText_m_bEnabled,
		CWorldVguiText_m_clrText,
		CWorldVguiText_m_iTextPanelWidth,
		CWorldVguiText_m_szDisplayText,
		CWorldVguiText_m_szDisplayTextOption,
		CWorldVguiText_m_szFont,
		CWorld_m_WorldMaxs,
		CWorld_m_WorldMins,
		CWorld_m_bColdWorld,
		CWorld_m_bStartDark,
		CWorld_m_flMaxOccludeeArea,
		CWorld_m_flMaxPropScreenSpaceWidth,
		CWorld_m_flMinOccluderArea,
		CWorld_m_flMinPropScreenSpaceWidth,
		CWorld_m_flWaveHeight,
		CWorld_m_iTimeOfDay,
		CWorld_m_iszDetailSpriteMaterial,
		DustTrail_m_Color,
		DustTrail_m_EndSize,
		DustTrail_m_MaxDirectedSpeed,
		DustTrail_m_MaxSpeed,
		DustTrail_m_MinDirectedSpeed,
		DustTrail_m_MinSpeed,
		DustTrail_m_Opacity,
		DustTrail_m_ParticleLifetime,
		DustTrail_m_SpawnRadius,
		DustTrail_m_SpawnRate,
		DustTrail_m_StartSize,
		DustTrail_m_StopEmitTime,
		DustTrail_m_bEmit,
		ParticleSmokeGrenade_m_CurrentStage,
		ParticleSmokeGrenade_m_FadeEndTime,
		ParticleSmokeGrenade_m_FadeStartTime,
		ParticleSmokeGrenade_m_MaxColor,
		ParticleSmokeGrenade_m_MinColor,
		ParticleSmokeGrenade_m_flSpawnTime,
		RocketTrail_m_EndColor,
		RocketTrail_m_EndSize,
		RocketTrail_m_MaxSpeed,
		RocketTrail_m_MinSpeed,
		RocketTrail_m_Opacity,
		RocketTrail_m_ParticleLifetime,
		RocketTrail_m_SpawnRadius,
		RocketTrail_m_SpawnRate,
		RocketTrail_m_StartColor,
		RocketTrail_m_StartSize,
		RocketTrail_m_StopEmitTime,
		RocketTrail_m_bDamaged,
		RocketTrail_m_bEmit,
		RocketTrail_m_flFlareScale,
		RocketTrail_m_nAttachment,
		SmokeTrail_m_EndColor,
		SmokeTrail_m_EndSize,
		SmokeTrail_m_MaxDirectedSpeed,
		SmokeTrail_m_MaxSpeed,
		SmokeTrail_m_MinDirectedSpeed,
		SmokeTrail_m_MinSpeed,
		SmokeTrail_m_Opacity,
		SmokeTrail_m_ParticleLifetime,
		SmokeTrail_m_SpawnRadius,
		SmokeTrail_m_SpawnRate,
		SmokeTrail_m_StartColor,
		SmokeTrail_m_StartSize,
		SmokeTrail_m_StopEmitTime,
		SmokeTrail_m_bEmit,
		SmokeTrail_m_nAttachment,
		SporeExplosion_m_bDontRemove,
		SporeExplosion_m_bEmit,
		SporeExplosion_m_flEndSize,
		SporeExplosion_m_flParticleLifetime,
		SporeExplosion_m_flSpawnRadius,
		SporeExplosion_m_flSpawnRate,
		SporeExplosion_m_flStartSize,
		SporeTrail_m_bEmit,
		SporeTrail_m_flEndSize,
		SporeTrail_m_flParticleLifetime,
		SporeTrail_m_flSpawnRadius,
		SporeTrail_m_flSpawnRate,
		SporeTrail_m_flStartSize,
		SporeTrail_m_vecEndColor,
		string_CCSPlayer_m_bWaitForNoAttack,
		string_CCSPlayer_m_iMoveState,
		string_CCSPlayer_m_bStrafing,
		string_CCSPlayer_m_flVelocityModifier,
		string_CCSPlayer_m_flThirdpersonRecoil,
		string_CBaseCSGrenade_m_fThrowTime,
		string_CBaseCSGrenade_m_bIsHeldByPlayer,
		COUNT
	};

	enum class module_names : int32_t
	{
		NONE = -1,
		client,
		engine,
		materialsystem,
		vstdlib,
		vphysics,
		vguimatsurface,
		tier0,
		vgui2,
		localize,
		datacache,
		studiorender,
		filesystem_stdio,
		panorama,
		gameoverlayrenderer,
		server,
		v8,
		inputsystem,
		shaderapidx9,
		COUNT
	};
}