
/* head/face eligibility check */

undefined4 FighterHead_ShouldDraw(int param_1)

{
  uint uVar1;
  byte bVar2;
  undefined4 unaff_pfp;
  int iVar3;
  undefined4 uVar4;
  
  uVar1 = ac;
  uVar4 = 1;
  if (GameMode == MODE_FIGHT) {
    uVar1 = ac & 0xfffffff8 | (uint)(BYTE_0054fcfd != 0) << 2 | (uint)(BYTE_0054fcfd == 0) << 1;
    if (((byte)(uVar1 >> 1) & 1) == 1) {
      fp = unaff_pfp;
      ac = uVar1;
      return 1;
    }
    if (((((&g_player1)[param_1].action_state == 0x0_NEUTRAL) &&
         ((&g_player1)[param_1].action_code < CMD_TURN)) &&
        ((&g_player1)[param_1].action_code != CMD_RUN)) ||
       (((&g_player1)[param_1].action_state == 0xD_SPECIALMOVE &&
        ((byte)((&g_player1)[param_1].action_code - CMD_TURN) < 2)))) {
      uVar4 = 0;
    }
    iVar3 = (&DAT_005882e0)[param_1];
    uVar1 = ac & 0xfffffff8 | (uint)(0 < iVar3) << 2 | (uint)(iVar3 == 0) << 1;
    ac = uVar1 | iVar3 < 0;
    bVar2 = (byte)(uVar1 >> 1);
  }
  else if ((byte)(GameMode - MODE_CHARSEL) < 2) {
    ac = ac & 0xfffffff8 | (uint)(GameMode < MODE_NAMELOAD);
    if ((((byte)ac & 1 | MODE_NAMELOAD < GameMode) != 1) &&
       (ac = uVar1 & 0xfffffff8 | (uint)(g_nameentry_load_state_flag_candidate != '\0') << 2 |
             (uint)(g_nameentry_load_state_flag_candidate == '\0') << 1,
       g_nameentry_load_state_flag_candidate == '\0')) {
      fp = unaff_pfp;
      return 1;
    }
    if (g_motion_debug_mode == '\0') {
      uVar1 = ac & 0xfffffff8 | (uint)(BYTE_0054fcfd != 0) << 2 | (uint)(BYTE_0054fcfd == 0) << 1;
      if (((byte)(uVar1 >> 1) & 1) == 1) {
        fp = unaff_pfp;
        ac = uVar1;
        return 1;
      }
      if (((((&g_player1)[param_1].action_state == 0x0_NEUTRAL) &&
           ((&g_player1)[param_1].action_code < CMD_TURN)) &&
          ((&g_player1)[param_1].action_code != CMD_RUN)) ||
         (((&g_player1)[param_1].action_state == 0xD_SPECIALMOVE &&
          ((byte)((&g_player1)[param_1].action_code - CMD_TURN) < 2)))) {
        uVar4 = 0;
      }
      iVar3 = (&DAT_005882e0)[param_1];
      uVar1 = ac & 0xfffffff8 | (uint)(0 < iVar3) << 2 | (uint)(iVar3 == 0) << 1;
      ac = uVar1 | iVar3 < 0;
      bVar2 = (byte)(uVar1 >> 1);
    }
    else {
      iVar3 = (&DAT_005882e0)[param_1];
      uVar1 = ac & 0xfffffff8 | (uint)(0 < iVar3) << 2 | (uint)(iVar3 == 0) << 1;
      ac = uVar1 | iVar3 < 0;
      bVar2 = (byte)(uVar1 >> 1);
    }
  }
  else {
    uVar1 = ac & 0xfffffff8 | (uint)(MODE_NAMEFIELD < GameMode) << 2 |
            (uint)(GameMode == MODE_NAMEFIELD) << 1;
    ac = uVar1 | GameMode < MODE_NAMEFIELD;
    bVar2 = (byte)(uVar1 >> 1);
  }
  if ((bVar2 & 1) != 1) {
    uVar4 = 0;
  }
  fp = unaff_pfp;
  return uVar4;
}

