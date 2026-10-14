
void FUN_00008340(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 unaff_pfp;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  
  puVar6 = &DAT_01082000;
  iVar3 = 0;
  do {
    uVar5 = 0;
    do {
      iVar4 = 0;
      do {
        puVar7 = puVar6;
        uVar2 = ac;
        *puVar7 = uVar5 << 4 |
                  uVar5 << 8 |
                  uVar5 << 0xc | uVar5 << 0x10 | uVar5 << 0x14 | uVar5 << 0x18 | uVar5 << 0x1c |
                  uVar5;
        puVar6 = puVar7 + 1;
        iVar4 = iVar4 + 1;
        uVar1 = ac & 0xfffffff8 | (uint)(iVar4 == 7) << 1;
        ac = uVar1 | iVar4 < 7;
      } while (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) == 1);
      uVar5 = uVar5 + 1;
      uVar1 = uVar2 & 0xfffffff8 | (uint)(uVar5 == 0xf) << 1;
      ac = uVar1 | (int)uVar5 < 0xf;
    } while (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) == 1);
    puVar6 = puVar7 + 0x381;
    iVar3 = iVar3 + 1;
    uVar5 = uVar2 & 0xfffffff8 | (uint)(3 < iVar3) << 2 | (uint)(iVar3 == 3) << 1;
    ac = uVar5 | iVar3 < 3;
  } while (((byte)ac & 1 | (byte)(uVar5 >> 1) & 1) == 1);
  fp = unaff_pfp;
  return;
}

