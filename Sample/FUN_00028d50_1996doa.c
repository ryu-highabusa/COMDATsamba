
void FUN_00028d50(void)

{
  byte bVar1;
  undefined4 unaff_pfp;
  
  bVar1 = (&DAT_005645e6)[plyr];
  ac = ac & 0xfffffff8 | (uint)(1 < bVar1) << 2 | (uint)(bVar1 == 1) << 1 | (uint)(bVar1 == 0);
  if (((byte)ac & 1 | 1 < bVar1) != 1) {
    DAT_005645ba = (ushort)((DAT_005645ba & 0x40) << 1) |
                   (ushort)((DAT_005645ba & 0x80) >> 1) | DAT_005645ba & 0xff3f;
  }
  fp = unaff_pfp;
  return;
}

