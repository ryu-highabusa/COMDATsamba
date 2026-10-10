
void GameConfig_InitializeRuntime_candidate(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 unaff_pfp;
  
  uVar2 = ac;
  g_effective_vs_com_difficulty = GAME_SETTINGS_VALUES_0054fd28.vs_com_difficulty;
  g_effective_vs_com_emergy = GAME_SETTINGS_VALUES_0054fd28.vs_com_energy;
  g_effective_vs_man_energy = GAME_SETTINGS_VALUES_0054fd28.vs_man_energy;
  g_effective_demo_sound = GAME_SETTINGS_VALUES_0054fd28.demo_sound;
  DAT_0054fd74 = GAME_SETTINGS_VALUES_0054fd28.continue_setting;
  settingschampionwincount_candidate = GAME_SETTINGS_VALUES_0054fd28.vs_finish;
  BYTE_0054fd12 = GAME_SETTINGS_VALUES_0054fd28.burst_mode;
  if (GAME_SETTINGS_VALUES_000906f0.vs_com_difficulty <
      GAME_SETTINGS_VALUES_0054fd28.vs_com_difficulty) {
    g_effective_vs_com_difficulty = GAME_SETTINGS_VALUES_000906c0.vs_com_difficulty;
  }
  if (GAME_SETTINGS_VALUES_000906f0.vs_com_energy < GAME_SETTINGS_VALUES_0054fd28.vs_com_energy) {
    g_effective_vs_com_emergy = GAME_SETTINGS_VALUES_000906c0.vs_com_energy;
  }
  if (GAME_SETTINGS_VALUES_000906f0.vs_man_energy < GAME_SETTINGS_VALUES_0054fd28.vs_man_energy) {
    g_effective_vs_man_energy = GAME_SETTINGS_VALUES_000906c0.vs_man_energy;
  }
  if (GAME_SETTINGS_VALUES_000906f0.demo_sound < GAME_SETTINGS_VALUES_0054fd28.demo_sound) {
    g_effective_demo_sound = GAME_SETTINGS_VALUES_000906c0.demo_sound;
  }
  if (GAME_SETTINGS_VALUES_000906f0.continue_setting <
      GAME_SETTINGS_VALUES_0054fd28.continue_setting) {
    DAT_0054fd74 = GAME_SETTINGS_VALUES_000906c0.continue_setting;
  }
  if (GAME_SETTINGS_VALUES_000906f0.vs_finish < GAME_SETTINGS_VALUES_0054fd28.vs_finish) {
    settingschampionwincount_candidate = GAME_SETTINGS_VALUES_000906c0.vs_finish;
  }
  if (GAME_SETTINGS_VALUES_000906f0.burst_mode < GAME_SETTINGS_VALUES_0054fd28.burst_mode) {
    BYTE_0054fd12 = GAME_SETTINGS_VALUES_000906c0.burst_mode;
  }
  SettingsGameMode_Nation = GAME_SETTINGS_VALUES_000906c0.nation;
  if (GAME_SETTINGS_VALUES_0054fd28.nation <= GAME_SETTINGS_VALUES_000906f0.nation) {
    SettingsGameMode_Nation = GAME_SETTINGS_VALUES_0054fd28.nation;
  }
  ac = ac & 0xfffffff8 | (uint)(0 < (int)DWORD_0054f3d4) << 2 | (uint)(DWORD_0054f3d4 == 0) << 1 |
       (uint)((int)DWORD_0054f3d4 < 0);
  if (((((byte)ac & 1 | 0 < (int)DWORD_0054f3d4) != 1) &&
      (uVar1 = uVar2 & 0xfffffff8 | (uint)((int)Bookkeeping_TotalTime_01d00000 < -1) << 2 |
               (uint)(Bookkeeping_TotalTime_01d00000 == 0xffffffff) << 1,
      ac = uVar1 | -1 < (int)Bookkeeping_TotalTime_01d00000, ((byte)(uVar1 >> 1) & 1) != 1)) &&
     (uVar2 = uVar2 & 0xfffffff8 | (uint)(Bookkeeping_TotalTime_01d00000 < 0x20f57f) << 2 |
              (uint)(Bookkeeping_TotalTime_01d00000 == 0x20f57f) << 1,
     ac = uVar2 | 0x20f57f < Bookkeeping_TotalTime_01d00000,
     ((byte)(uVar2 >> 1) & 1 | Bookkeeping_TotalTime_01d00000 < 0x20f57f) != 1)) {
    SettingsUnlisted_UnlockRaidou_0054fd76_ = 1;
  }
  _0d_DAT_0054fd77 = 0x3c;
  SettingsUnlistedGameMode_Time_0054fd78 = 0x1e;
  g_ringBoundaryHalfExtentX = 24.0;
  g_ringBoundaryHalfExtentZ = 24.0;
  g_dangerBoundaryHalfExtentX = 10.0;
  g_dangerBoundaryHalfExtentZ = 10.0;
  BYTE_0054fd84 = 0xff;
  BYTE_0054fd85 = g14;
  BYTE_0054fcea = 1;
  BYTE_0054fcfe = g14;
  BYTE_0054fd86 = g14;
  FLOAT_0054fd88 = 1.09;
  g_debug_anime_mode = g14;
  fp = unaff_pfp;
  return;
}

