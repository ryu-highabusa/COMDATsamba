
void FUN_00005ad0(void)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  undefined4 unaff_pfp;
  uint uVar6;
  
  uVar3 = ac;
  bVar1 = DAT_0054f3e4 != 0;
  bVar2 = DAT_0054f3e4 == 0;
  if (bVar1) {
    DAT_0054f3e4 = DAT_0054f3e4 + -1;
    fp = unaff_pfp;
    ac = ac & 0xfffffff8 | (uint)bVar1 << 2 | (uint)bVar2 << 1;
    return;
  }
  uVar5 = *(ushort *)(PTR_ARRAY_0008fdd0[DAT_0054f3e6] + DWORD_0054f3e0 * 4);
  bVar4 = PTR_ARRAY_0008fdd0[DAT_0054f3e6][DWORD_0054f3e0 * 4 + 2];
  uVar6 = (uint)bVar4;
  ac = ac & 0xfffffff8 | (uint)(uVar5 != 0xffff) << 2 | (uint)(uVar5 == 0xffff) << 1;
  if (uVar5 == 0xffff) {
    DWORD_0054f3e0 = g14;
    DAT_0054f3e8 = (undefined1)g14;
    fp = unaff_pfp;
    return;
  }
  ac = uVar3 & 0xfffffff8 | (uint)(uVar5 < 0xfffe) << 2 | (uint)(uVar5 == 0xfffe) << 1 |
       (uint)(0xfffe < uVar5);
  if (((byte)ac & 1 | uVar5 < 0xfffe) != 1) {
    DWORD_0054f3e0 = uVar6;
    fp = unaff_pfp;
    return;
  }
  uVar3 = uVar3 & 0xfffffff8 | (uint)(uVar6 < 0xff) << 2 | (uint)(uVar6 == 0xff) << 1;
  ac = uVar3 | 0xff < uVar6;
  DAT_0054f3e4 = uVar5;
  if (((byte)(uVar3 >> 1) & 1) != 1) {
    *(ushort *)DWORD_0054f3dc = (ushort)bVar4;
  }
  DWORD_0054f3e0 = DWORD_0054f3e0 + 1;
  fp = unaff_pfp;
  return;
}

