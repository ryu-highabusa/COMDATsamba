
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0006f9d0(int *param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [20];
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined4 unaff_r3;
  undefined4 unaff_r4;
  int *piVar12;
  undefined8 in_register_00000014;
  undefined4 unaff_r7;
  int iVar13;
  undefined1 in_register_00000020 [32];
  undefined1 auVar3 [64];
  undefined1 auVar4 [64];
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  int iVar14;
  undefined1 auStackX_0 [1000000];
  undefined1 auVar8 [64];
  
  auVar2._4_4_ = auStackX_0;
  auVar2._0_4_ = unaff_pfp;
  auVar2._8_4_ = unaff_retaddr;
  auVar2._12_4_ = unaff_r3;
  auVar2._16_4_ = unaff_r4;
  auVar3._20_8_ = in_register_00000014;
  auVar3._0_20_ = auVar2;
  auVar3._28_4_ = unaff_r7;
  auVar3._32_4_ = (&PTR_WORD_ARRAY_020c0004)[param_2 * 3];
  auVar3._40_24_ = in_register_00000020._8_24_;
  auVar3._36_4_ = 0xffffff80;
  auVar4._20_4_ = (&PTR_WORD_ARRAY_020c0000)[param_2 * 3];
  auVar4._0_20_ = auVar2;
  auVar4._28_36_ = auVar3._28_36_;
  auVar4._24_4_ = *param_1 * 0x20 + 0x1800000;
  do {
    iVar13 = auVar4._32_4_;
    piVar12 = auVar4._20_4_;
    auVar5._20_44_ = auVar4._20_44_;
    auVar5._0_16_ = auVar4._0_16_;
    auVar5._16_4_ = 0;
    auVar6._32_32_ = auVar4._32_32_;
    auVar6._0_28_ = auVar5._0_28_;
    auVar6._28_4_ = (*piVar12 + 0x7fU & 0xffffff80) / 0x80;
    ac = ac & 0xfffffff8 | (uint)(auVar6._28_4_ != 0) << 2 | (uint)(auVar6._28_4_ == 0) << 1;
    auVar10 = auVar6;
    if (((byte)(ac >> 1) & 1) != 1) {
      do {
        iVar14 = auVar10._24_4_;
        uVar1 = auVar10._4_4_ + 0x3fU & 0xffffffc0;
        auVar8._12_52_ = auVar10._12_52_;
        auVar8._0_8_ = auVar10._0_8_;
        auVar8._8_4_ = 0x6fa28;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar8;
        auVar7._8_56_ = auVar8._8_56_;
        auVar7._4_4_ = uVar1 + 0x40;
        auVar7._0_4_ = fp;
        FUN_000075d0(0x10,iVar14,iVar13);
        auVar9._20_44_ = auVar7._20_44_;
        auVar9._0_16_ = auVar7._0_16_;
        auVar9._16_4_ = auVar10._16_4_ + 1;
        ac = ac & 0xfffffff8 | (uint)((int)auVar6._28_4_ < (int)auVar9._16_4_) << 2 |
             (uint)(auVar6._28_4_ == auVar9._16_4_) << 1 |
             (uint)((int)auVar9._16_4_ < (int)auVar6._28_4_);
        auVar10._28_36_ = auVar7._28_36_;
        auVar10._0_24_ = auVar9._0_24_;
        auVar10._24_4_ = iVar14 + 0x20;
        fp = uVar1;
      } while (((byte)ac & 1) == 1);
    }
    auVar11._24_40_ = auVar10._24_40_;
    auVar11._0_20_ = auVar10._0_20_;
    auVar11._20_4_ = piVar12 + *piVar12 * 8 + 1;
    iVar14 = *auVar11._20_4_;
    uVar1 = ac & 0xfffffff8 | (uint)(0 < iVar14) << 2;
    ac = uVar1 | (uint)(iVar14 == 0) << 1 | (uint)(iVar14 < 0);
    auVar4._36_28_ = auVar10._36_28_;
    auVar4._0_32_ = auVar11._0_32_;
    auVar4._32_4_ = iVar13 + 0x20;
  } while (((byte)ac & 1 | (byte)(uVar1 >> 2) & 1) == 1);
  fp = auVar10._0_4_;
  return;
}

