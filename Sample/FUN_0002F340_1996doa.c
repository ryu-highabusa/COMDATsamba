
undefined4 FUN_0002f340(void)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined4 unaff_pfp;
  undefined4 uVar4;
  
  uVar2 = ac;
  bVar3 = *(byte *)(g_current_player + 0x2d);
  uVar1 = ac & 0xfffffff8 | (uint)(bVar3 != 0) << 2 | (uint)(bVar3 == 0) << 1;
  if (((byte)(uVar1 >> 1) & 1) == 1) {
LAB_0002f374:
    ac = uVar1;
    uVar4 = 1;
  }
  else {
    ac = ac & 0xfffffff8 | (uint)(bVar3 < 7);
    if (((byte)ac & 1 | 7 < bVar3) != 1) {
      bVar3 = *(byte *)(g_current_player + 0x41);
      uVar2 = uVar2 & 0xfffffff8 | (uint)(1 < bVar3) << 2 | (uint)(bVar3 == 1) << 1;
      ac = uVar2 | bVar3 == 0;
      uVar1 = ac;
      if (((byte)(uVar2 >> 1) & 1) == 1) goto LAB_0002f374;
    }
    uVar1 = ac;
    bVar3 = *(byte *)(g_current_player + 0x2d);
    ac = ac & 0xfffffff8 | (uint)(9 < bVar3) << 2 | (uint)(bVar3 == 9) << 1 | (uint)(bVar3 < 9);
    if (((byte)ac & 1 | 9 < bVar3) != 1) {
      bVar3 = *(byte *)(g_current_player + 0x41);
      ac = uVar1 & 0xfffffff8 | (uint)(1 < bVar3) << 2 | (uint)(bVar3 == 1) << 1 |
           (uint)(bVar3 == 0);
      uVar1 = ac;
      if (((byte)ac & 1 | 1 < bVar3) != 1) goto LAB_0002f374;
    }
    uVar4 = 0;
  }
  fp = unaff_pfp;
  return uVar4;
}

