
void FUN_0004ddb0(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 unaff_pfp;
  
  uVar2 = ac;
  g14 = 0;
  uVar1 = ac & 0xfffffff8 | (uint)(MODE_CHARSEL < GameMode) << 2 |
          (uint)(GameMode == MODE_CHARSEL) << 1;
  ac = uVar1 | GameMode < MODE_CHARSEL;
  if ((((byte)(uVar1 >> 1) & 1) == 1) ||
     ((uVar1 = uVar2 & 0xfffffff8 | (uint)(GameOverFlag____0054fcb4 == 3) << 1,
      ac = uVar1 | GameOverFlag____0054fcb4 == 2, ((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) != 1 &&
      (ac = uVar2 & 0xfffffff8 | (uint)(GameMode != MODE_LOAD) << 2 |
            (uint)(GameMode == MODE_LOAD) << 1, ((byte)(ac >> 1) & 1) != 1)))) {
    BYTE_00589e00 = 1;
    BYTE_00589e01 = 1;
  }
  else {
    if (g_player1.action_state == 0xC_GROUNDED) {
      DAT_0056ac10 = 2;
    }
    else {
      BYTE_00589e00 = 1;
    }
    uVar1 = ac & 0xfffffff8 | (uint)(0xC_GROUNDED < g_player2.action_state) << 2 |
            (uint)(g_player2.action_state == 0xC_GROUNDED) << 1;
    ac = uVar1 | g_player2.action_state < 0xC_GROUNDED;
    if (((byte)(uVar1 >> 1) & 1) == 1) {
      DAT_0056ac12 = 2;
    }
    else {
      BYTE_00589e01 = 1;
    }
  }
  fp = unaff_pfp;
  return;
}

