
void GameConfig_InitializeRuntime_candidate(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 unaff_pfp;
  
  uVar2 = ac;
  g_effective_vs_com_difficulty = g_configured_game_settings.vs_com_difficulty;
  g_effective_vs_com_emergy = g_configured_game_settings.vs_com_energy;
  g_effective_vs_man_energy = g_configured_game_settings.vs_man_energy;
  g_effective_demo_sound = g_configured_game_settings.demo_sound;
  g_effective_continue_setting = g_configured_game_settings.continue_setting;
  g_effective_vs_finish = g_configured_game_settings.vs_finish;
  g_effective_burst_mode = g_configured_game_settings.burst_mode;
  if (k_maximum_game_settings.vs_com_difficulty < g_configured_game_settings.vs_com_difficulty) {
    g_effective_vs_com_difficulty = k_default_game_settings.vs_com_difficulty;
  }
  if (k_maximum_game_settings.vs_com_energy < g_configured_game_settings.vs_com_energy) {
    g_effective_vs_com_emergy = k_default_game_settings.vs_com_energy;
  }
  if (k_maximum_game_settings.vs_man_energy < g_configured_game_settings.vs_man_energy) {
    g_effective_vs_man_energy = k_default_game_settings.vs_man_energy;
  }
  if (k_maximum_game_settings.demo_sound < g_configured_game_settings.demo_sound) {
    g_effective_demo_sound = k_default_game_settings.demo_sound;
  }
  if (k_maximum_game_settings.continue_setting < g_configured_game_settings.continue_setting) {
    g_effective_continue_setting = k_default_game_settings.continue_setting;
  }
  if (k_maximum_game_settings.vs_finish < g_configured_game_settings.vs_finish) {
    g_effective_vs_finish = k_default_game_settings.vs_finish;
  }
  if (k_maximum_game_settings.burst_mode < g_configured_game_settings.burst_mode) {
    g_effective_burst_mode = k_default_game_settings.burst_mode;
  }
  g_effective_nation = k_default_game_settings.nation;
  if (g_configured_game_settings.nation <= k_maximum_game_settings.nation) {
    g_effective_nation = g_configured_game_settings.nation;
  }
  ac = ac & 0xfffffff8 | (uint)(0 < (int)DWORD_0054f3d4) << 2 | (uint)(DWORD_0054f3d4 == 0) << 1 |
       (uint)((int)DWORD_0054f3d4 < 0);
  if (((((byte)ac & 1 | 0 < (int)DWORD_0054f3d4) != 1) &&
      (uVar1 = uVar2 & 0xfffffff8 | (uint)((int)Bookkeeping_TotalTime_01d00000 < -1) << 2 |
               (uint)(Bookkeeping_TotalTime_01d00000 == 0xffffffff) << 1,
      ac = uVar1 | -1 < (int)Bookkeeping_TotalTime_01d00000, ((byte)(uVar1 >> 1) & 1) != 1)) &&
     (uVar2 = uVar2 & 0xfffffff8 | (uint)(Bookkeeping_TotalTime_01d00000 < 2159999) << 2 |
              (uint)(Bookkeeping_TotalTime_01d00000 == 2159999) << 1,
     ac = uVar2 | 2159999 < Bookkeeping_TotalTime_01d00000,
     ((byte)(uVar2 >> 1) & 1 | Bookkeeping_TotalTime_01d00000 < 2159999) != 1)) {
    SettingsUnlisted_UnlockRaidou_0054fd76_ = '\x01';
  }
  _0decimal = '<';
  SettingsUnlistedGameMode_Time = '\x1e';
  g_ringBoundaryHalfExtentX = 24.0;
  g_ringBoundaryHalfExtentZ = 24.0;
  g_dangerBoundaryHalfExtentX = 10.0;
  g_dangerBoundaryHalfExtentZ = 10.0;
  BYTE_0054fd84 = 0xff;
  BYTE_0054fd85 = g14;
  g_effective_set_count = 1;
  BYTE_0054fcfe = g14;
  BYTE_0054fd86 = g14;
  FLOAT_0054fd88 = 1.09;
  g_debug_anime_mode = g14;
  fp = unaff_pfp;
  return;
}

