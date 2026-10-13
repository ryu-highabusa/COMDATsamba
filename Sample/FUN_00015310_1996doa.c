
/* WARNING: Removing unreachable block (ram,0x00015360) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00015310(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  uint uVar1;
  short *psVar2;
  short sVar3;
  uint uVar4;
  undefined4 unaff_pfp;
  undefined1 in_register_00000008 [56];
  undefined1 auVar5 [64];
  int iVar6;
  short *psVar7;
  int iVar8;
  short *psVar9;
  short *psVar10;
  undefined1 auStackX_0 [1000000];
  
  auVar5._4_4_ = auStackX_0;
  auVar5._0_4_ = unaff_pfp;
  auVar5._12_52_ = in_register_00000008._4_52_;
  auVar5._8_4_ = 0x15320;
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar5;
  FUN_000392b0((int *)DWORD_ARRAY_0055562c,0x78,param_3,param_4,param_5,param_6,param_7,param_8,
               param_9,param_10,param_11,param_12);
  FUN_00008250(3);
  psVar7 = &DAT_01004000;
  iVar8 = 0;
  psVar10 = (short *)(PTR_ARRAY_020c05a8[0] + 4);
  sVar3 = (short)DWORD_ARRAY_0055562c[0] * 0x80;
  do {
    iVar6 = 0;
    psVar9 = psVar7;
    do {
      iVar6 = iVar6 + 2;
      *psVar9 = sVar3 + *psVar10;
      psVar2 = psVar10 + 1;
      psVar10 = psVar10 + 2;
      psVar9[1] = sVar3 + *psVar2;
      psVar9 = psVar9 + 2;
    } while (iVar6 < 0x3e);
    iVar8 = iVar8 + 1;
    g13 = 0x2f;
    uVar4 = ac & 0xfffffff8 | (uint)(iVar8 < 0x2f) << 2;
    uVar1 = uVar4 | (uint)(iVar8 == 0x2f) << 1;
    ac = uVar1 | 0x2f < iVar8;
    psVar7 = psVar7 + 0x40;
  } while (((byte)(uVar1 >> 1) & 1 | (byte)(uVar4 >> 2) & 1) == 1);
  fp = auStackX_0;
  return;
}

