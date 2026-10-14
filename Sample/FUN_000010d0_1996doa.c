
void FUN_000010d0(void)

{
  uint uVar1;
  undefined4 unaff_pfp;
  int iVar2;
  byte *pbVar3;
  ushort *puVar4;
  
  puVar4 = (ushort *)&DAT_11400000;
  pbVar3 = &DAT_02fc0000;
  iVar2 = 0;
  do {
    *puVar4 = (ushort)*pbVar3;
    pbVar3 = pbVar3 + 1;
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 + 1;
    uVar1 = ac & 0xfffffff8 | (uint)(iVar2 < 0x3fff) << 2 | (uint)(iVar2 == 0x3fff) << 1;
    ac = uVar1 | 0x3fff < iVar2;
  } while (((byte)(uVar1 >> 1) & 1 | iVar2 < 0x3fff) == 1);
  fp = unaff_pfp;
  return;
}

