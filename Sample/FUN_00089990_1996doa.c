
void FUN_00089990(void)

{
  undefined4 unaff_pfp;
  
  SettingsGameMode_VsComSetCount_005bfb62 = DAT_0054fd3a;
  SettingsGameMode_VsManSetCount_005bfb63 = DAT_0054fd3b;
  SettingsGameMode_VsComDifficulty_005bfb64 = SettingsGameMode_VsComDifficulty_0054fd37;
  SettingsGameMode_VsComEnergy_005bfb65 = SettingsGameMode_VsComEnergy_0054fd38;
  SettingsGameMode_VsManEnergy_005bfb66 = SettingsGameMode_VsManEnergy_0054fd39;
  SettingsGameMode_DemoSound_005bfb67 = SettingsGameMode_DemoSound_0054fd3c;
  SettingsGameMode_Continue_005bfb69 = DAT_0054fd3d;
  SettingsGameMode_VsFinish_005bfb6a = DAT_0054fd3f;
  SettingsGameMode_BurstMode_005bfb6b = DAT_0054fd40;
  if (GAME_SETTINGS_VALUES_000906f0.vs_com_setcount < DAT_0054fd3a) {
    SettingsGameMode_VsComSetCount_005bfb62 = GAME_SETTINGS_VALUES_000906c0.vs_com_setcount;
  }
  if (GAME_SETTINGS_VALUES_000906f0.vs_man_setcount < DAT_0054fd3b) {
    SettingsGameMode_VsManSetCount_005bfb63 = GAME_SETTINGS_VALUES_000906c0.vs_man_setcount;
  }
  if (GAME_SETTINGS_VALUES_000906f0.vs_com_difficulty < SettingsGameMode_VsComDifficulty_0054fd37) {
    SettingsGameMode_VsComDifficulty_005bfb64 = GAME_SETTINGS_VALUES_000906c0.vs_com_difficulty;
  }
  if (GAME_SETTINGS_VALUES_000906f0.vs_com_energy < SettingsGameMode_VsComEnergy_0054fd38) {
    SettingsGameMode_VsComEnergy_005bfb65 = GAME_SETTINGS_VALUES_000906c0.vs_com_energy;
  }
  if (GAME_SETTINGS_VALUES_000906f0.vs_man_energy < SettingsGameMode_VsManEnergy_0054fd39) {
    SettingsGameMode_VsManEnergy_005bfb66 = GAME_SETTINGS_VALUES_000906c0.vs_man_energy;
  }
  if (GAME_SETTINGS_VALUES_000906f0.demo_sound < SettingsGameMode_DemoSound_0054fd3c) {
    SettingsGameMode_DemoSound_005bfb67 = GAME_SETTINGS_VALUES_000906c0.demo_sound;
  }
  if (GAME_SETTINGS_VALUES_000906f0.continue_setting < DAT_0054fd3d) {
    SettingsGameMode_Continue_005bfb69 = GAME_SETTINGS_VALUES_000906c0.continue_setting;
  }
  if (GAME_SETTINGS_VALUES_000906f0.vs_finish < DAT_0054fd3f) {
    SettingsGameMode_VsFinish_005bfb6a = GAME_SETTINGS_VALUES_000906c0.vs_finish;
  }
  if (GAME_SETTINGS_VALUES_000906f0.burst_mode < DAT_0054fd40) {
    SettingsGameMode_BurstMode_005bfb6b = GAME_SETTINGS_VALUES_000906c0.burst_mode;
  }
  ac = ac & 0xfffffff8 |
       (uint)(SettingsGameMode_Nation_0054fd3e < GAME_SETTINGS_VALUES_000906f0.nation) << 2 |
       (uint)(SettingsGameMode_Nation_0054fd3e == GAME_SETTINGS_VALUES_000906f0.nation) << 1 |
       (uint)(GAME_SETTINGS_VALUES_000906f0.nation < SettingsGameMode_Nation_0054fd3e);
  if (((byte)ac & 1) != 1) {
    SettingsGameMode_Nation_005bfb68 = SettingsGameMode_Nation_0054fd3e;
    fp = unaff_pfp;
    return;
  }
  SettingsGameMode_Nation_005bfb68 = GAME_SETTINGS_VALUES_000906c0.nation;
  fp = unaff_pfp;
  return;
}

