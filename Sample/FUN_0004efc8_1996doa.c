
void UndefinedFunction_0004efc0(void)

{
  uint uVar1;
  undefined4 unaff_pfp;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  
  g14 = 0;
  iVar4 = (int)DAT_0056ac4c;
  if (iVar4 < 0x552) {
    pbVar2 = &XTRADATABASE_06000000;
  }
  else {
    pbVar2 = &BYTE_06c00004;
    iVar4 = iVar4 + -0x552;
  }
  DAT_0056ada8 = (int)DAT_0056ac94;
  DAT_0056ac4c = 0xffff;
  if (DAT_0056ac3c <= DAT_0056ada8) {
    DAT_0056ac3c = -1;
  }
  iVar3 = DAT_0056ada8 + -1;
  DAT_0056acf0 = iVar3 * 0x10000;
  uVar1 = ac & 0xfffffff8 | (uint)(0 < DAT_0056acf0) << 2 | (uint)(DAT_0056acf0 == 0) << 1;
  ac = uVar1 | DAT_0056acf0 < 0;
  AnimeFrameNo___P1_0056ac40 = DAT_0056ac94;
  DAT_00589f60 = *(int *)(*(int *)(iVar4 * 4 + *(int *)pbVar2) + 0x3c);
  if (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) != 1) {
    do {
      iVar3 = iVar3 + -1;
      DAT_0056acf0 = iVar3 * 0x10000;
      uVar1 = ac & 0xfffffff8 | (uint)(0 < DAT_0056acf0) << 2;
      ac = uVar1 | (uint)(DAT_0056acf0 == 0) << 1 | (uint)(DAT_0056acf0 < 0);
      DAT_00589f60 = DAT_00589f60 + 0xc;
    } while (((byte)(uVar1 >> 2) & 1) == 1);
  }
  fp = unaff_pfp;
  return;
}

