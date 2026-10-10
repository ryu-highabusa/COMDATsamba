
/* Copies a validated game-settings set into the 0x5BFB62–0x5BFB6B secondary/menu buffer */

void GameSettings_CopyValidatedToSecondaryBuffer(void)

{
  undefined4 unaff_pfp;
  
  SettingsGameMode_VsComSetCount_005bfb62 = g_configured_game_settings.vs_com_setcount;
  SettingsGameMode_VsManSetCount_005bfb63 = g_configured_game_settings.vs_man_setcount;
  SettingsGameMode_VsComDifficulty_005bfb64 = g_configured_game_settings.vs_com_difficulty;
  SettingsGameMode_VsComEnergy_005bfb65 = g_configured_game_settings.vs_com_energy;
  SettingsGameMode_VsManEnergy_005bfb66 = g_configured_game_settings.vs_man_energy;
  SettingsGameMode_DemoSound_005bfb67 = g_configured_game_settings.demo_sound;
  SettingsGameMode_Continue_005bfb69 = g_configured_game_settings.continue_setting;
  SettingsGameMode_VsFinish_005bfb6a = g_configured_game_settings.vs_finish;
  SettingsGameMode_BurstMode_005bfb6b = g_configured_game_settings.burst_mode;
  if (k_maximum_game_settings.vs_com_setcount < g_configured_game_settings.vs_com_setcount) {
    SettingsGameMode_VsComSetCount_005bfb62 = k_default_game_settings.vs_com_setcount;
  }
  if (k_maximum_game_settings.vs_man_setcount < g_configured_game_settings.vs_man_setcount) {
    SettingsGameMode_VsManSetCount_005bfb63 = k_default_game_settings.vs_man_setcount;
  }
  if (k_maximum_game_settings.vs_com_difficulty < g_configured_game_settings.vs_com_difficulty) {
    SettingsGameMode_VsComDifficulty_005bfb64 = k_default_game_settings.vs_com_difficulty;
  }
  if (k_maximum_game_settings.vs_com_energy < g_configured_game_settings.vs_com_energy) {
    SettingsGameMode_VsComEnergy_005bfb65 = k_default_game_settings.vs_com_energy;
  }
  if (k_maximum_game_settings.vs_man_energy < g_configured_game_settings.vs_man_energy) {
    SettingsGameMode_VsManEnergy_005bfb66 = k_default_game_settings.vs_man_energy;
  }
  if (k_maximum_game_settings.demo_sound < g_configured_game_settings.demo_sound) {
    SettingsGameMode_DemoSound_005bfb67 = k_default_game_settings.demo_sound;
  }
  if (k_maximum_game_settings.continue_setting < g_configured_game_settings.continue_setting) {
    SettingsGameMode_Continue_005bfb69 = k_default_game_settings.continue_setting;
  }
  if (k_maximum_game_settings.vs_finish < g_configured_game_settings.vs_finish) {
    SettingsGameMode_VsFinish_005bfb6a = k_default_game_settings.vs_finish;
  }
  if (k_maximum_game_settings.burst_mode < g_configured_game_settings.burst_mode) {
    SettingsGameMode_BurstMode_005bfb6b = k_default_game_settings.burst_mode;
  }
  ac = ac & 0xfffffff8 |
       (uint)(g_configured_game_settings.nation < k_maximum_game_settings.nation) << 2 |
       (uint)(g_configured_game_settings.nation == k_maximum_game_settings.nation) << 1 |
       (uint)(k_maximum_game_settings.nation < g_configured_game_settings.nation);
  if (((byte)ac & 1) != 1) {
    SettingsGameMode_Nation_005bfb68 = g_configured_game_settings.nation;
    fp = unaff_pfp;
    return;
  }
  SettingsGameMode_Nation_005bfb68 = k_default_game_settings.nation;
  fp = unaff_pfp;
  return;
}

