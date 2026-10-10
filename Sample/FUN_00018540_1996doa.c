
/* Chooses and validates the COM or MAN set-count setting for the current game mode */

void Match_ApplyConfiguredSetCount(void)

{
  uint uVar1;
  undefined4 unaff_pfp;
  uint8_t *puVar2;
  
  if ((GameOverFlag____0054fcb4 == 0) || (GameOverFlag____0054fcb4 == 4)) {
    puVar2 = &g_configured_game_settings.vs_com_setcount;
    uVar1 = ac & 0xfffffff8 |
            (uint)(g_configured_game_settings.vs_com_setcount <
                  k_maximum_game_settings.vs_com_setcount) << 2 |
            (uint)(g_configured_game_settings.vs_com_setcount ==
                  k_maximum_game_settings.vs_com_setcount) << 1;
    ac = uVar1 | k_maximum_game_settings.vs_com_setcount <
                 g_configured_game_settings.vs_com_setcount;
    if (((byte)(uVar1 >> 1) & 1 |
        g_configured_game_settings.vs_com_setcount < k_maximum_game_settings.vs_com_setcount) != 1)
    {
      BYTE_0054fcea = k_default_game_settings.vs_com_setcount;
      fp = unaff_pfp;
      return;
    }
  }
  else {
    puVar2 = &g_configured_game_settings.vs_man_setcount;
    ac = ac & 0xfffffff8 |
         (uint)(g_configured_game_settings.vs_man_setcount < k_maximum_game_settings.vs_man_setcount
               ) << 2 |
         (uint)(g_configured_game_settings.vs_man_setcount ==
               k_maximum_game_settings.vs_man_setcount) << 1 |
         (uint)(k_maximum_game_settings.vs_man_setcount < g_configured_game_settings.vs_man_setcount
               );
    if (((byte)ac & 1) == 1) {
      BYTE_0054fcea = k_default_game_settings.vs_man_setcount;
      fp = unaff_pfp;
      return;
    }
  }
  BYTE_0054fcea = *puVar2;
  fp = unaff_pfp;
  return;
}

