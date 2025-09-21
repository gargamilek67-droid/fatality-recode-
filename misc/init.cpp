#include "../include_cheat.h"
#include <winnt.h>
#include "MinHook.h"

#include <iostream>
#include <iomanip>
#include <cstdint>

#include <ren/adapter_dx9.h>
#include "../smallest_pixel.h"

uint32_t runtime_basis = 2166136261u;
namespace init {
	_declspec(noinline) void rest() {
		skinchanger::parse_kits();
		erase_fn(skinchanger::parse_kits);

		skinchanger::parse_weapon_names();
		erase_fn(skinchanger::parse_weapon_names);

		inventorychanger::fill_weapon_list();
		erase_fn(inventorychanger::fill_weapon_list);

		listeners::setup_listeners();
		inventorychanger::load();

		init_pred_map();
		erase_fn(init_pred_map);

		if (interfaces::engine()->IsInGame())
			interfaces::client_state()->force_full_update();

		log("8\n");

		globals::erase_init = true;
	}
}

#pragma clang section text=".discard"
void init::on_startup() {
	HANDLE hand = 0;
	while (!GetModuleHandleA(_r("serverbrowser.dll")))
		imp("kernel32.dll", SleepEx)(200, false);

	//credits to E0n3x
	overwrite_offset(length_disasm, sig("gameoverlayrenderer.dll", "55 8B EC 53 56 57 8B 7D ? B8"));
	overwrite_offset(hook_present, sig("gameoverlayrenderer.dll", "55 8B EC 83 EC ? 53 8B 5D ? 56 8B 35"));
	overwrite_offset(hook_reset, sig("gameoverlayrenderer.dll", "55 8B EC 6A ? 68 ? ? ? ? 64 A1 ? ? ? ? 50 64 89 25 ? ? ? ? 83 EC ? 53 8B 5D ? 56 57 8B 3D ? ? ? ? 33 F6 89 5D ? 85 FF 74 ? 6A ? 57 FF 15 ? ? ? ? 8B 3D ? ? ? ? 8D 45 ? B9 ? ? ? ? 50 8D 45 ? 50 E8 ? ? ? ? 8B 45 ? 8B 0D ? ? ? ? 80 78 ? ? 75 ? 3B 58 ? 73 ? 8B C1 3B C1 74 ? 8B 70 ? 85 FF 74 ? 57 FF 15 ? ? ? ? 85 F6 74 ? 8B CE E8 ? ? ? ? B9 ? ? ? ? E8 ? ? ? ? 8B 03 8D 4D ? 51 53 FF 50 ? 8B 7D ? 8D 4D ? 57 6A ? FF 75 ? E8 ? ? ? ? A1"));
	
	if (!get_offset(length_disasm) || !get_offset(hook_present) || !get_offset(hook_reset)) {

	
		if (!get_offset(length_disasm)) 
			MessageBoxA(nullptr, _r("Failed to find pattern (disasm)!"), _r("Error"), MB_TOPMOST | MB_ICONERROR | MB_OK);
	

		if (!get_offset(hook_present)) 
			MessageBoxA(nullptr, _r("Failed to find pattern (present)!"), _r("Error"), MB_TOPMOST | MB_ICONERROR | MB_OK);

	
		if (!get_offset(hook_reset)) 
			MessageBoxA(nullptr, _r("Failed to find pattern (reset)!"), _r("Error"), MB_TOPMOST | MB_ICONERROR | MB_OK);

		return;
	}
	
	save_resources();
	erase_fn(save_resources);

	load_fonts();
	erase_fn(load_fonts);

	detail::callqueue.init();
	erase_fn(detail::call_queue::init);

	aimbot_helpers::build_seed_table();
	erase_fn(aimbot_helpers::build_seed_table);

	get_materials();
	patches();

	hook::init();
	erase_fn(hook::init);

	if (interfaces::engine()->IsInGame())
		hook::level_init_pre_entity(nullptr, nullptr, nullptr);

	rest();
	erase_end;
}

__declspec(noinline) void init::get_modules() {
	std::vector<uint32_t> modules{
		memory::get_module_handle(FNV1A("client.dll")),
		memory::get_module_handle(FNV1A("engine.dll")),
		memory::get_module_handle(FNV1A("materialsystem.dll")),
		memory::get_module_handle(FNV1A("vstdlib.dll")),
		memory::get_module_handle(FNV1A("vphysics.dll")),
		memory::get_module_handle(FNV1A("vguimatsurface.dll")),
		memory::get_module_handle(FNV1A("tier0.dll")),
		memory::get_module_handle(FNV1A("vgui2.dll")),
		memory::get_module_handle(FNV1A("localize.dll")),
		memory::get_module_handle(FNV1A("datacache.dll")),
		memory::get_module_handle(FNV1A("studiorender.dll")),
		memory::get_module_handle(FNV1A("filesystem_stdio.dll")),
		memory::get_module_handle(FNV1A("panorama.dll")),
		memory::get_module_handle(FNV1A("gameoverlayrenderer.dll")),
		memory::get_module_handle(FNV1A("server.dll")),
		memory::get_module_handle(FNV1A("v8.dll")),
		memory::get_module_handle(FNV1A("inputsystem.dll")),
		memory::get_module_handle(FNV1A("shaderapidx9.dll"))
	};
	erase_end;
}

__declspec(noinline) void init::load_fonts() {
	std::vector<unsigned char> v;
	DWORD n_fonts;

	mem_font_hadles.push_back(imp("gdi32.dll", AddFontMemResourceEx)(smallest_pixel.data(), smallest_pixel.size(), nullptr, &n_fonts));
	smallest_pixel.clear();

	auto vec = std::vector<unsigned char>(smallest_pixel);
	smallest_pixel.swap(vec);

	erase_end;
}

void init::remove_fonts() {
	for (auto& handle : mem_font_hadles)
		imp("gdi32.dll", RemoveFontMemResourceEx)(handle);
}

void init::get_materials() {
	_(UnlitGeneric, "UnlitGeneric");
	_(VertexLitGeneric, "VertexLitGeneric");

	_(cstm_flat, R"#("UnlitGeneric"{$basetexture"vgui/white"$nofog"1"$model"1"$nocull"0"$selfillum"1"$halflambert"1"$znearer"0"$flat"1"})#");
	_(cstm_normal, R"#("VertexLitGeneric"{$basetexture"vgui/white"$nofog"1"$model"1"$nocull"0"$selfillum"1"$halflambert"1"$znearer"0"$flat"1"})#");
	_(cstm_rim_glow, R"#("VertexLitGeneric"{$basetexture"vgui/white"$additive"1"$envmap"models/effects/cube_white"$envmaptint"[1 1 1]"$envmapfresnel"1"$envmapfresnelminmaxexp"[0 1 2]"$alpha"0.8"})#");
	_(sniperdot, R"#("UnlitGeneric"{$additive"1"$basetexture"sprites/glow06"})#");
	_(cstm_contour, R"#("VertexLitGeneric"{$basetexture"vgui/white"$bumpmap"vgui/white"$selfillum"1"$selfIllumFresnel"1"$selfIllumFresnelMinMaxExp"[0 0.18 0.1]"$selfillumtint"[0.3 0.001 0.1]"})#");
	_(cstm_flow, R"#("UnlitGeneric"{$basetexture"dev/zone_warning"proxies{TextureScroll{texturescrollvar"$basetexturetransform"texturescrollrate"0.1"texturescrollangle"90"}}})#");
	_(cstm_acrylic, R"#("VertexLitGeneric"{$basetexture"VGUI/white"$bumpmap"de_nuke/hr_nuke/pool_water_normals_002"$bumptransform"center 0.5 0.5 scale 0.25 0.25 rotate 0.0 translate 0.0 0.0"$nofog"1"$model"1"$color2"[1.0 1.0 1.0]"$halflambert"1"$envmap"env_cubemap"$envmaptint"[0.1 0.1 0.1]"$envmapfresnel"1.0"$envmapfresnelminmaxexp"[1.0 1.0 1.0]"$phong"1"$phongexponent"1024"$phongboost"4.0"$phongfresnelranges"[1.0 1.0 1.0]"$rimlight"1"$rimlightexponent"4.0"$rimlightboost"2.0"})#");

	chams::add_material(material_index_t::MAT_FLAT, UnlitGeneric, cstm_flat);
	chams::add_material(material_index_t::MAT_NORMAL, VertexLitGeneric, cstm_normal);
	chams::add_material(material_index_t::MAT_RIM_GLOW, VertexLitGeneric, cstm_rim_glow);
	chams::add_material(material_index_t::MAT_SPRITE, UnlitGeneric, sniperdot);
	chams::add_material(material_index_t::MAT_CONTOUR, VertexLitGeneric, cstm_contour);
	chams::add_material(material_index_t::MAT_FLOW, UnlitGeneric, cstm_flow);
	chams::add_material(material_index_t::MAT_ACRYLIC, VertexLitGeneric, cstm_acrylic);

	erase_end;
}

void init::patches() {
	// Remove VAC cvar check
	DWORD old{};
	auto addr = reinterpret_cast<void*>(make_offset("vstdlib.dll", sig_cvar_vac_check));
	memory::protect_mem(addr, 3, PAGE_EXECUTE_READWRITE, old);
	*reinterpret_cast<uint8_t*>(uintptr_t(addr)) = 0xC2;
	*reinterpret_cast<uint8_t*>(uintptr_t(addr) + 0x1) = 0x04;
	*reinterpret_cast<uint8_t*>(uintptr_t(addr) + 0x2) = 0x00;
	memory::protect_mem(addr, 3, old, old);

	// Change ents in leaves limit
	addr = reinterpret_cast<void*>(make_offset("client.dll", sig_somelimit) + 0x1);
	memory::protect_mem(addr, 4, PAGE_EXECUTE_READWRITE, old);
	*reinterpret_cast<uint32_t*>(uintptr_t(addr)) = 4000;
	memory::protect_mem(addr, 4, old, old);

	// Remove cvar check for untrusted prevention
	addr = reinterpret_cast<void*>(make_offset("client.dll", sig_cvar_check));
	memory::protect_mem(addr, 2, PAGE_EXECUTE_READWRITE, old);
	*reinterpret_cast<uint8_t*>(uintptr_t(addr)) = 0x90;
	*reinterpret_cast<uint8_t*>(uintptr_t(addr) + 0x1) = 0xE9;
	memory::protect_mem(addr, 2, old, old);

	// Remove move message cmd limit
	addr = reinterpret_cast<void*>(make_offset("engine.dll", sig_cl_send_move_limit) + 0x1);
	memory::protect_mem(addr, 1, PAGE_EXECUTE_READWRITE, old);
	*reinterpret_cast<uint8_t*>(uintptr_t(addr)) = 62;
	memory::protect_mem(addr, 1, old, old);

	// Remove skinchanger console spam
	addr = reinterpret_cast<void*>(make_offset("client.dll", sig_skinchanger_spam_patch) + 0x1);
	memory::protect_mem(addr, 1, PAGE_EXECUTE_READWRITE, old);
	*reinterpret_cast<uint8_t*>(uintptr_t(addr)) = 0x15;
	memory::protect_mem(addr, 1, old, old);

	erase_end;
}

__declspec(noinline) void init::save_resources() {
	hitmarker::save_files();
	erase_end;
}

struct backup_map_t {
	typedescription_t* old_data_desc = nullptr;
	datamap_t* datamap = nullptr;
	int old_num_fields = 0;
};

std::vector<backup_map_t> backup_map{};
__declspec(noinline) void init::init_pred_map() {
	{
		auto& cs_player_pred_map = *reinterpret_cast<datamap_t*>(make_offset("client.dll", sig_cs_player_pred_map));
		backup_map.push_back({
			cs_player_pred_map.dataDesc,
			&cs_player_pred_map,
			cs_player_pred_map.dataNumFields
			});

		auto new_typedescs = static_cast<typedescription_t*>(interfaces::memalloc()->Alloc(sizeof(typedescription_t) * (cs_player_pred_map.dataNumFields + 5)));
		memcpy(new_typedescs, cs_player_pred_map.dataDesc, cs_player_pred_map.dataNumFields * sizeof(typedescription_t));

		new_typedescs[cs_player_pred_map.dataNumFields++] = { FIELD_BOOLEAN, reinterpret_cast<char*>(make_offset("client.dll", string_CCSPlayer_m_bWaitForNoAttack)), static_cast<int>(server_offset(CCSPlayer_m_bWaitForNoAttack)), 1, FTYPEDESC_INSENDTABLE, nullptr, nullptr, nullptr, nullptr, 1, nullptr, 0, 0 };
		new_typedescs[cs_player_pred_map.dataNumFields++] = { FIELD_INTEGER, reinterpret_cast<char*>(make_offset("client.dll", string_CCSPlayer_m_iMoveState)), static_cast<int>(server_offset(CCSPlayer_m_iMoveState)), 1, FTYPEDESC_INSENDTABLE, nullptr, nullptr, nullptr, nullptr, 4, nullptr, 0, 0 };
		new_typedescs[cs_player_pred_map.dataNumFields++] = { FIELD_BOOLEAN, reinterpret_cast<char*>(make_offset("client.dll", string_CCSPlayer_m_bStrafing)), static_cast<int>(server_offset(CCSPlayer_m_bStrafing)), 1, FTYPEDESC_INSENDTABLE, nullptr, nullptr, nullptr, nullptr, 1, nullptr, 0, 0 };
		new_typedescs[cs_player_pred_map.dataNumFields++] = { FIELD_FLOAT, reinterpret_cast<char*>(make_offset("client.dll", string_CCSPlayer_m_flVelocityModifier)), static_cast<int>(server_offset(CCSPlayer_m_flVelocityModifier)), 1, FTYPEDESC_INSENDTABLE, nullptr, nullptr, nullptr, nullptr, 4, nullptr, 0, interfaces::globals()->interval_per_tick * 1.f / 2.5f };
		new_typedescs[cs_player_pred_map.dataNumFields++] = { FIELD_FLOAT, reinterpret_cast<char*>(make_offset("client.dll", string_CCSPlayer_m_flThirdpersonRecoil)), static_cast<int>(server_offset(CCSPlayer_m_flThirdpersonRecoil)), 1, FTYPEDESC_INSENDTABLE, nullptr, nullptr, nullptr, nullptr, 4, nullptr, 0, 0.01f };

		cs_player_pred_map.dataDesc = new_typedescs;
		cs_player_pred_map.m_pOptimizedDataMap = nullptr;
	}

	auto& base_cs_grenade_pred_map = *reinterpret_cast<datamap_t*>(make_offset("client.dll", sig_base_cs_grenade_pred_map));

	backup_map_t backup;

	backup.old_data_desc = base_cs_grenade_pred_map.dataDesc;
	backup.old_num_fields = base_cs_grenade_pred_map.dataNumFields;
	backup.datamap = &base_cs_grenade_pred_map;

	backup_map.push_back(backup);

	auto new_typedescs = static_cast<typedescription_t*>(interfaces::memalloc()->Alloc(sizeof(typedescription_t) * (base_cs_grenade_pred_map.dataNumFields + 2)));
	memcpy(new_typedescs, base_cs_grenade_pred_map.dataDesc, base_cs_grenade_pred_map.dataNumFields * sizeof(typedescription_t));

	new_typedescs[base_cs_grenade_pred_map.dataNumFields++] = { FIELD_FLOAT, reinterpret_cast<char*>(make_offset("client.dll", string_CBaseCSGrenade_m_fThrowTime)), static_cast<int>(server_offset(CBaseCSGrenade_m_fThrowTime)), 1, FTYPEDESC_INSENDTABLE, nullptr, nullptr, nullptr, nullptr, 4, nullptr, 0, 0.01f };
	new_typedescs[base_cs_grenade_pred_map.dataNumFields++] = { FIELD_BOOLEAN, reinterpret_cast<char*>(make_offset("client.dll", string_CBaseCSGrenade_m_bIsHeldByPlayer)), static_cast<int>(server_offset(CBaseCSGrenade_m_bIsHeldByPlayer)), 1, FTYPEDESC_INSENDTABLE, nullptr, nullptr, nullptr, nullptr, 1, nullptr, 0, 0 };

	base_cs_grenade_pred_map.dataDesc = new_typedescs;

	reinterpret_cast<datamap_t*>(make_offset("client.dll", sig_decoy_map))->m_pOptimizedDataMap = nullptr;
	reinterpret_cast<datamap_t*>(make_offset("client.dll", sig_he_map))->m_pOptimizedDataMap = nullptr;
	reinterpret_cast<datamap_t*>(make_offset("client.dll", sig_molotov_map))->m_pOptimizedDataMap = nullptr;
	reinterpret_cast<datamap_t*>(make_offset("client.dll", sig_sensor_map))->m_pOptimizedDataMap = nullptr;
	reinterpret_cast<datamap_t*>(make_offset("client.dll", sig_smoke_map))->m_pOptimizedDataMap = nullptr;
	reinterpret_cast<datamap_t*>(make_offset("client.dll", sig_flash_map))->m_pOptimizedDataMap = nullptr;

	erase_end;
}

#pragma clang section text=""
void init::unload_cheat() {
	constexpr auto detach_func = []() {
		config::load(-1);
		for (auto& item : lua::api.loaded_scripts) {
			_u(name, item);
			const auto hash = fnv1a_rt(xorstr_("lua_") + name);
			if (!config_init::exists(hash) || !config_init::get_item_direct(hash)->get<bool>()) {
				_(LUA, "[lua] ");
				interfaces::cvar()->ConsoleColorPrintf(Color(171, 34, 210, 255), LUA.c_str());

				_(unload, "unloading script %s\n");
				util::print_dev_console(true, Color(255, 255, 255, 255), unload.c_str(), name.c_str());

				lua::script_file file{
					lua::st_script,
					name
				};
				lua::api.stop_script(file);
			}
		}

		std::this_thread::sleep_for(std::chrono::milliseconds(1000));

		listeners::remove_listeners();
		hook::unhook();

		std::this_thread::sleep_for(std::chrono::milliseconds(200));

		for (const auto& map : backup_map) {
			interfaces::memalloc()->Free(map.datamap->dataDesc);

			map.datamap->dataDesc = map.old_data_desc;
			map.datamap->dataNumFields = map.old_num_fields;
			map.datamap->m_pOptimizedDataMap = nullptr;
		}

		reinterpret_cast<datamap_t*>(make_offset("client.dll", sig_decoy_map))->m_pOptimizedDataMap = nullptr;
		reinterpret_cast<datamap_t*>(make_offset("client.dll", sig_he_map))->m_pOptimizedDataMap = nullptr;
		reinterpret_cast<datamap_t*>(make_offset("client.dll", sig_molotov_map))->m_pOptimizedDataMap = nullptr;
		reinterpret_cast<datamap_t*>(make_offset("client.dll", sig_sensor_map))->m_pOptimizedDataMap = nullptr;
		reinterpret_cast<datamap_t*>(make_offset("client.dll", sig_smoke_map))->m_pOptimizedDataMap = nullptr;
		reinterpret_cast<datamap_t*>(make_offset("client.dll", sig_flash_map))->m_pOptimizedDataMap = nullptr;

		detail::callqueue.decomission();

		if (adapter)
			adapter->destroy_objects();

		remove_fonts();

		interfaces::client_state()->force_full_update();
		std::this_thread::sleep_for(std::chrono::milliseconds(1000));

		FreeLibrary(globals::module_base);
		FreeLibraryAndExitThread(globals::module_base, 0);
		};

	static bool has_run = false;
	if (has_run)
		return;

	has_run = true;

	std::thread thread(detach_func);
	thread.detach();
}