
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_000779b0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  dword dVar5;
  undefined4 unaff_pfp;
  undefined1 in_register_0000000c [52];
  undefined1 auVar7 [64];
  undefined1 auStackX_0 [1000000];
  undefined1 auVar6 [64];
  
  auVar7._4_4_ = auStackX_0;
  auVar7._0_4_ = unaff_pfp;
  ac = ac & 0xfffffff8 | (uint)(BYTE_0054fcfe != 0) << 2 | (uint)(BYTE_0054fcfe == 0) << 1;
  if (BYTE_0054fcfe == 0) {
    auVar7._8_4_ = 0x779c0;
    auVar7._12_52_ = in_register_0000000c;
    *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar7;
    auVar6._8_56_ = auVar7._8_56_;
    auVar6._4_4_ = 0;
    auVar6._0_4_ = fp;
    FUN_00077bc0();
    unaff_pfp = auVar6._0_4_;
  }
  *(undefined4 *)PTR_DAT_000006a0 = 0xc2300000;
  *(undefined4 *)PTR_DAT_000006a0 = 0xc2300000;
  *(undefined4 *)PTR_DAT_000006a0 = 0xc32e0000;
  *(undefined4 *)PTR_DAT_000006a4 = 0xffffc000;
  dVar5 = DWORD_000006a8;
  puVar4 = PTR_DAT_000006a0;
  uVar1 = *(undefined4 *)(PTR_DAT_000006a0 + 4);
  uVar2 = *(undefined4 *)(PTR_DAT_000006a0 + 8);
  uVar3 = *(undefined4 *)(PTR_DAT_000006a0 + 0xc);
  *(undefined4 *)DWORD_000006a8 = *(undefined4 *)PTR_DAT_000006a0;
  *(undefined4 *)(dVar5 + 4) = uVar1;
  *(undefined4 *)(dVar5 + 8) = uVar2;
  *(undefined4 *)(dVar5 + 0xc) = uVar3;
  uVar1 = *(undefined4 *)(puVar4 + 4);
  uVar2 = *(undefined4 *)(puVar4 + 8);
  uVar3 = *(undefined4 *)(puVar4 + 0xc);
  *(undefined4 *)dVar5 = *(undefined4 *)puVar4;
  *(undefined4 *)(dVar5 + 4) = uVar1;
  *(undefined4 *)(dVar5 + 8) = uVar2;
  *(undefined4 *)(dVar5 + 0xc) = uVar3;
  uVar1 = *(undefined4 *)(puVar4 + 4);
  uVar2 = *(undefined4 *)(puVar4 + 8);
  uVar3 = *(undefined4 *)(puVar4 + 0xc);
  *(undefined4 *)dVar5 = *(undefined4 *)puVar4;
  *(undefined4 *)(dVar5 + 4) = uVar1;
  *(undefined4 *)(dVar5 + 8) = uVar2;
  *(undefined4 *)(dVar5 + 0xc) = uVar3;
  g13 = &DAT_00804000;
  DAT_00880050 = 0x505;
  DAT_005a6ed0 = PTR_ARRAY_02099b90[DAT_005a6ee0 + 0xfU & 0x7f];
  DAT_00880120 = 0x1212;
  *(undefined4 *)puVar4 = 0xc2300000;
  *(undefined4 *)PTR_DAT_000006a0 = 0xc2300000;
  *(undefined4 *)PTR_DAT_000006a0 = 0xc32e0000;
  DAT_00880150 = 0x1515;
  *(undefined4 *)PTR_DAT_000006a4 = g14;
  dVar5 = DWORD_000006a8;
  puVar4 = PTR_DAT_000006a0;
  DAT_00880110 = &DAT_00001111;
  DAT_008000b0 = 0xb0b;
  uVar1 = *(undefined4 *)(PTR_DAT_000006a0 + 4);
  uVar2 = *(undefined4 *)(PTR_DAT_000006a0 + 8);
  uVar3 = *(undefined4 *)(PTR_DAT_000006a0 + 0xc);
  *(undefined4 *)DWORD_000006a8 = *(undefined4 *)PTR_DAT_000006a0;
  *(undefined4 *)(dVar5 + 4) = uVar1;
  *(undefined4 *)(dVar5 + 8) = uVar2;
  *(undefined4 *)(dVar5 + 0xc) = uVar3;
  uVar1 = *(undefined4 *)(puVar4 + 4);
  uVar2 = *(undefined4 *)(puVar4 + 8);
  uVar3 = *(undefined4 *)(puVar4 + 0xc);
  *(undefined4 *)dVar5 = *(undefined4 *)puVar4;
  *(undefined4 *)(dVar5 + 4) = uVar1;
  *(undefined4 *)(dVar5 + 8) = uVar2;
  *(undefined4 *)(dVar5 + 0xc) = uVar3;
  uVar1 = *(undefined4 *)(puVar4 + 4);
  uVar2 = *(undefined4 *)(puVar4 + 8);
  uVar3 = *(undefined4 *)(puVar4 + 0xc);
  *(undefined4 *)dVar5 = *(undefined4 *)puVar4;
  *(undefined4 *)(dVar5 + 4) = uVar1;
  *(undefined4 *)(dVar5 + 8) = uVar2;
  *(undefined4 *)(dVar5 + 0xc) = uVar3;
  DAT_00800010 = 0x101;
  DAT_00804000 = DAT_005a6ed0;
  DAT_00804004 = DAT_005a6ed4;
  DAT_00804008 = DAT_005a6ed8;
  DAT_0080400c = DAT_005a6edc;
  DAT_00880060 = 0x606;
  fp = unaff_pfp;
  return;
}

