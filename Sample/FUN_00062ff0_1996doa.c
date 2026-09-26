
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00062ff0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  dword dVar5;
  byte bVar6;
  dword dVar7;
  undefined4 unaff_pfp;
  undefined1 auVar8 [32];
  undefined4 unaff_retaddr;
  undefined1 in_register_0000000c [52];
  undefined1 auVar9 [64];
  uint uVar10;
  undefined1 auStackX_0 [1000000];
  
  dVar7 = DWORD_000006a8;
  puVar3 = PTR_DAT_000006a0;
  auVar9._4_4_ = auStackX_0;
  auVar9._0_4_ = unaff_pfp;
  auVar9._8_4_ = unaff_retaddr;
  auVar9._12_52_ = in_register_0000000c;
  uVar10 = (uint)DAT_005a6f1e;
  ac = ac & 0xfffffff8 | (uint)(uVar10 == 0) << 1 | (uint)(uVar10 != 0);
  auVar8._0_16_ = auVar9._0_16_;
  if (((byte)ac & 1) == 1) {
    bVar6 = (&DAT_005a6f20)[uVar10];
    DAT_00880110 = &DAT_00001111;
    DAT_008000b0 = 0xb0b;
    uVar1 = *(undefined4 *)(PTR_DAT_000006a0 + 4);
    uVar2 = *(undefined4 *)(PTR_DAT_000006a0 + 8);
    uVar4 = *(undefined4 *)(PTR_DAT_000006a0 + 0xc);
    *(undefined4 *)DWORD_000006a8 = *(undefined4 *)PTR_DAT_000006a0;
    *(undefined4 *)(dVar7 + 4) = uVar1;
    *(undefined4 *)(dVar7 + 8) = uVar2;
    *(undefined4 *)(dVar7 + 0xc) = uVar4;
    uVar1 = *(undefined4 *)(puVar3 + 4);
    uVar2 = *(undefined4 *)(puVar3 + 8);
    uVar4 = *(undefined4 *)(puVar3 + 0xc);
    *(undefined4 *)dVar7 = *(undefined4 *)puVar3;
    *(undefined4 *)(dVar7 + 4) = uVar1;
    *(undefined4 *)(dVar7 + 8) = uVar2;
    *(undefined4 *)(dVar7 + 0xc) = uVar4;
    auVar8._16_4_ = *(undefined4 *)puVar3;
    auVar8._20_4_ = *(undefined4 *)(puVar3 + 4);
    auVar8._24_4_ = *(undefined4 *)(puVar3 + 8);
    auVar8._28_4_ = *(undefined4 *)(puVar3 + 0xc);
    param_1 = param_1 + (short)(&WORD_000c9450)[bVar6];
  }
  else {
    DAT_00880110 = &DAT_00001111;
    DAT_008000b0 = 0xb0b;
    uVar1 = *(undefined4 *)(PTR_DAT_000006a0 + 4);
    uVar2 = *(undefined4 *)(PTR_DAT_000006a0 + 8);
    uVar4 = *(undefined4 *)(PTR_DAT_000006a0 + 0xc);
    *(undefined4 *)DWORD_000006a8 = *(undefined4 *)PTR_DAT_000006a0;
    *(undefined4 *)(dVar7 + 4) = uVar1;
    *(undefined4 *)(dVar7 + 8) = uVar2;
    *(undefined4 *)(dVar7 + 0xc) = uVar4;
    uVar1 = *(undefined4 *)(puVar3 + 4);
    uVar2 = *(undefined4 *)(puVar3 + 8);
    uVar4 = *(undefined4 *)(puVar3 + 0xc);
    *(undefined4 *)dVar7 = *(undefined4 *)puVar3;
    *(undefined4 *)(dVar7 + 4) = uVar1;
    *(undefined4 *)(dVar7 + 8) = uVar2;
    *(undefined4 *)(dVar7 + 0xc) = uVar4;
    auVar8._16_4_ = *(undefined4 *)puVar3;
    auVar8._20_4_ = *(undefined4 *)(puVar3 + 4);
    auVar8._24_4_ = *(undefined4 *)(puVar3 + 8);
    auVar8._28_4_ = *(undefined4 *)(puVar3 + 0xc);
  }
  *(int *)dVar7 = auVar8._16_4_;
  *(int *)(dVar7 + 4) = auVar8._20_4_;
  *(int *)(dVar7 + 8) = auVar8._24_4_;
  *(int *)(dVar7 + 0xc) = auVar8._28_4_;
  DAT_00800010 = 0x101;
  uVar1 = *(undefined4 *)(&DAT_0203a164 + param_1 * 0x10);
  puVar3 = (&PTR_GEOBASE_00800000_0203a168)[param_1 * 4];
  dVar5 = (&DWORD_0203a16c)[param_1 * 4];
  *(float *)dVar7 = (&FLOAT_0203a160)[param_1 * 4];
  *(undefined4 *)(dVar7 + 4) = uVar1;
  *(undefined **)(dVar7 + 8) = puVar3;
  *(dword *)(dVar7 + 0xc) = dVar5;
  fp = auVar8._0_4_;
  return;
}

