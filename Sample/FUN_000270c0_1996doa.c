
void FUN_000270c0(void)

{
  uint uVar1;
  undefined4 unaff_pfp;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(&DAT_00564090 + (uint)plyr * 0x80);
  puVar2 = (undefined4 *)(&DAT_00564190 + (uint)plyr * 0x80);
  iVar3 = 0;
  do {
    *puVar4 = g14;
    puVar4 = puVar4 + 1;
    *puVar2 = g14;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + 1;
    uVar1 = ac & 0xfffffff8 | (uint)(0x1f < iVar3) << 2 | (uint)(iVar3 == 0x1f) << 1;
    ac = uVar1 | iVar3 < 0x1f;
  } while (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) == 1);
  fp = unaff_pfp;
  return;
}

