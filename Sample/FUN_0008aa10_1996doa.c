
/* Copies validated coin settings and resolves the coinage preset into Chute 1/2 values */

void CoinSettings_CopyValidatedAndResolveChutes(void)

{
  uint uVar1;
  undefined4 unaff_pfp;
  
  g_menu_coinage_preset = g_configured_game_settings.coinage_preset;
  SettingsCoinMode_CoinCounterType_0054fda0 = g_configured_game_settings.coin_counter_type;
  SettingsCoinMode_CoinChuteType = g_configured_game_settings.coin_chute_type;
  SettingsCoinMode_StartCredits_0054fced = g_configured_game_settings.start_credits;
  SettingsCoinMode_ContinueCredits_0054fce1 = g_configured_game_settings.continue_credits;
  SettingsCoinMode_VsStartCredits_0054fcec = g_configured_game_settings.vs_start_credits;
  SettingsCoinMode_VsContinueCredits_0054fce9 = g_configured_game_settings.vs_continue_credits;
  if (k_maximum_game_settings.coinage_preset < g_configured_game_settings.coinage_preset) {
    g_menu_coinage_preset = k_default_game_settings.coinage_preset;
  }
  if (k_maximum_game_settings.coin_counter_type < g_configured_game_settings.coin_counter_type) {
    SettingsCoinMode_CoinCounterType_0054fda0 = k_default_game_settings.coin_counter_type;
  }
  if (k_maximum_game_settings.coin_chute_type < g_configured_game_settings.coin_chute_type) {
    SettingsCoinMode_CoinChuteType = k_default_game_settings.coin_chute_type;
  }
  if (k_maximum_game_settings.start_credits < g_configured_game_settings.start_credits) {
    SettingsCoinMode_StartCredits_0054fced = k_default_game_settings.start_credits;
  }
  if (k_maximum_game_settings.continue_credits < g_configured_game_settings.continue_credits) {
    SettingsCoinMode_ContinueCredits_0054fce1 = k_default_game_settings.continue_credits;
  }
  if (k_maximum_game_settings.vs_start_credits < g_configured_game_settings.vs_start_credits) {
    SettingsCoinMode_VsStartCredits_0054fcec = k_default_game_settings.vs_start_credits;
  }
  uVar1 = ac & 0xfffffff8 |
          (uint)(g_configured_game_settings.vs_continue_credits <
                k_maximum_game_settings.vs_continue_credits) << 2 |
          (uint)(g_configured_game_settings.vs_continue_credits ==
                k_maximum_game_settings.vs_continue_credits) << 1;
  ac = uVar1 | k_maximum_game_settings.vs_continue_credits <
               g_configured_game_settings.vs_continue_credits;
  if (((byte)(uVar1 >> 1) & 1 |
      g_configured_game_settings.vs_continue_credits < k_maximum_game_settings.vs_continue_credits)
      != 1) {
    SettingsCoinMode_VsContinueCredits_0054fce9 = k_default_game_settings.vs_continue_credits;
  }
  SettingsCoinMode_Chute1 = (&DAT_00090670)[(uint)g_menu_coinage_preset * 2];
  SettingsCoinMode_Chute2 = (&BYTE_00090671_ChuteValues_)[(uint)g_menu_coinage_preset * 2];
  fp = unaff_pfp;
  return;
}

