
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0004de70(void)

{
  uint uVar1;
  undefined4 unaff_pfp;
  undefined1 in_register_0000000c [52];
  undefined1 auVar2 [64];
  undefined4 uVar3;
  undefined4 in_g3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 in_g8;
  undefined4 in_g9;
  undefined4 in_g10;
  undefined4 in_g11;
  undefined1 auStackX_0 [1000000];
  
  auVar2._4_4_ = auStackX_0;
  auVar2._0_4_ = unaff_pfp;
  uVar3 = 1;
  DAT_005882fc = 1;
  DAT_005882fd = 1;
  DAT_00588742 = g_player1.action_code;
  CHAR_NUM_P1_00589e02 = g_player1.character_id;
  PLYR_DISP_P1_00589e04 = g_player1.player_display;
  DAT_00589de1 = (byte)DAT_0054b178 & 1;
  uVar6 = (uint)g_player2.player_display;
  uVar4 = (uint)shadowflag____0054fd8c;
  DAT_00588740 = g_player1.action_state;
  uVar7 = (uint)g_player2.action_code;
  PLYR_DISP_P2_00589e05 = g_player2.player_display;
  uVar5 = (uint)g_player2.character_id;
  uVar1 = ac & 0xfffffff8 | (uint)(uVar4 < 2) << 2;
  ac = uVar1 | (uint)(uVar4 == 2) << 1 | (uint)(2 < uVar4);
  DAT_00588743 = g_player2.action_code;
  DAT_00588741 = g_player2.action_state;
  CHAR_NUM_P2_00589e03 = g_player2.character_id;
  if (((byte)ac & 1 | (byte)(uVar1 >> 2) & 1) != 1) {
    auVar2._8_4_ = 0x4df34;
    auVar2._12_52_ = in_register_0000000c;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar2;
    fp = auStackX_0;
    Debug_SetTextPosition(2,2);
    FUN_0008e740(s_ANIME____04X_0004de60,(int)DAT_00588300,uVar3,in_g3,uVar4,uVar5,uVar6,uVar7,in_g8
                 ,in_g9,in_g10,in_g11);
    return;
  }
  fp = (undefined1 *)unaff_pfp;
  return;
}

