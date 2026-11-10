
undefined4 FUN_0004bc30(int param_1)

{
  uint uVar1;
  DOA_ACTSTATE DVar2;
  undefined4 unaff_pfp;
  undefined4 uVar3;
  byte bVar4;
  
  uVar1 = ac;
  uVar3 = 0;
  ac = ac & 0xfffffff8 | (uint)((&DAT_00588740)[param_1] == '\0') << 1 |
       (uint)((&DAT_00588740)[param_1] != '\0');
  if (((byte)ac & 1) != 1) {
    ac = uVar1 & 0xfffffff8 | (uint)((&g_player1)[param_1].action_state < 0x3_ATTACK);
    if (((byte)ac & 1 | 0x3_ATTACK < (&g_player1)[param_1].action_state) != 1) {
      bVar4 = (&g_player1)[param_1].action_code + (CMD_SIDE_DOWN_F_LK|CMD_SIT_UP_H);
      uVar1 = uVar1 & 0xfffffff8 | (uint)(3 < bVar4) << 2 | (uint)(bVar4 == 3) << 1;
      ac = uVar1 | bVar4 < 3;
      if (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) != 1) {
        fp = unaff_pfp;
        return 1;
      }
    }
    DVar2 = (&g_player1)[param_1].action_state;
    ac = ac & 0xfffffff8 | (uint)(0x5_HOLD < DVar2) << 2 | (uint)(DVar2 == 0x5_HOLD) << 1 |
         (uint)(DVar2 < 0x5_HOLD);
    if (((byte)ac & 1 | 0x5_HOLD < DVar2) != 1) {
      uVar3 = 1;
    }
  }
  fp = unaff_pfp;
  return uVar3;
}

