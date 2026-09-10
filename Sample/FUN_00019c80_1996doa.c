
void FUN_00019c80(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = ac;
  uVar2 = (uint)*(byte *)((int)DAT_00557c70 + 1);
  ac = ac & 0xfffffff8 | (uint)(uVar2 < 0xfe) << 2 | (uint)(uVar2 == 0xfe) << 1 |
       (uint)(0xfe < uVar2);
  if (((byte)ac & 1 | uVar2 < 0xfe) == 1) {
    ac = uVar1 & 0xfffffff8 | (uint)(uVar2 < 0xff) << 2 | (uint)(uVar2 == 0xff) << 1 |
         (uint)(0xff < uVar2);
    if (((byte)ac & 1 | uVar2 < 0xff) != 1) {
      uVar2 = DAT_0054fd13 ^ 1;
    }
  }
  else {
    uVar2 = (uint)DAT_0054fd13;
  }
  DAT_00557c70 = (DOA1_NAME_ID *)((int)DAT_00557c70 + 2);
  (&g_player1)[uVar2].character_id = *DAT_00557c70;
  (&g_player1)[uVar2].costume_id = (&DAT_00090ea0)[(uint)*DAT_00557c70 * 6 + (uint)DAT_00557c66];
  DAT_00557c70 = DAT_00557c70 + 2;
  FUN_0004db40();
  return;
}

