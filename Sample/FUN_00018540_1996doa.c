
void FUN_00018540(void)

{
  uint uVar1;
  undefined4 unaff_pfp;
  byte *pbVar2;
  
  if ((GameOverFlag____0054fcb4 == 0) || (GameOverFlag____0054fcb4 == 4)) {
    pbVar2 = &DAT_0054fd3a;
    uVar1 = ac & 0xfffffff8 |
            (uint)(DAT_0054fd3a < GAME_SETTINGS_VALUES_000906f0.vs_com_setcount) << 2 |
            (uint)(DAT_0054fd3a == GAME_SETTINGS_VALUES_000906f0.vs_com_setcount) << 1;
    ac = uVar1 | GAME_SETTINGS_VALUES_000906f0.vs_com_setcount < DAT_0054fd3a;
    if (((byte)(uVar1 >> 1) & 1 | DAT_0054fd3a < GAME_SETTINGS_VALUES_000906f0.vs_com_setcount) != 1
       ) {
      BYTE_0054fcea = GAME_SETTINGS_VALUES_000906c0.vs_com_setcount;
      fp = unaff_pfp;
      return;
    }
  }
  else {
    pbVar2 = &DAT_0054fd3b;
    ac = ac & 0xfffffff8 | (uint)(DAT_0054fd3b < GAME_SETTINGS_VALUES_000906f0.vs_man_setcount) << 2
         | (uint)(DAT_0054fd3b == GAME_SETTINGS_VALUES_000906f0.vs_man_setcount) << 1 |
         (uint)(GAME_SETTINGS_VALUES_000906f0.vs_man_setcount < DAT_0054fd3b);
    if (((byte)ac & 1) == 1) {
      BYTE_0054fcea = GAME_SETTINGS_VALUES_000906c0.vs_man_setcount;
      fp = unaff_pfp;
      return;
    }
  }
  BYTE_0054fcea = *pbVar2;
  fp = unaff_pfp;
  return;
}

