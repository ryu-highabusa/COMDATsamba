
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0006f8f0(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [20];
  undefined1 auVar6 [28];
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined4 unaff_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined1 in_register_00000028 [24];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar16 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  int iVar22;
  undefined1 auStackX_0 [1000000];
  undefined1 auVar15 [64];
  undefined1 auVar17 [64];
  int iVar20;
  int *piVar21;
  
  auVar5._4_4_ = auStackX_0;
  auVar5._0_4_ = unaff_pfp;
  auVar5._8_4_ = unaff_retaddr;
  auVar5._12_4_ = unaff_r3;
  auVar5._16_4_ = unaff_r4;
  auVar6._20_4_ = unaff_r5;
  auVar6._0_20_ = auVar5;
  auVar6._24_4_ = unaff_r6;
  auVar7._28_4_ = unaff_r7;
  auVar7._0_28_ = auVar6;
  auVar7._32_4_ = unaff_r8;
  auVar7._36_4_ = unaff_r9;
  auVar7._40_24_ = in_register_00000028;
  auVar8._32_32_ = auVar7._32_32_;
  auVar8._28_4_ = (&PTR_WORD_ARRAY_020c0000)[param_2 * 3];
  auVar8._0_28_ = auVar6;
  auVar9._44_20_ = in_register_00000028._4_20_;
  auVar9._0_40_ = auVar8._0_40_;
  auVar9._40_4_ = 0x29f;
  auVar10._24_40_ = auVar9._24_40_;
  auVar10._20_4_ = (int)(&TMAPGFXBASE_01080000 + *param_1 * 0x1000);
  auVar10._0_20_ = auVar5;
  param_1[2] = (int)auVar8._28_4_;
  do {
    piVar21 = auVar10._28_4_;
    iVar20 = auVar10._20_4_;
    auVar11._36_28_ = auVar10._36_28_;
    auVar11._0_32_ = auVar10._0_32_;
    auVar11._32_4_ = *piVar21;
    auVar12._28_36_ = auVar11._28_36_;
    auVar12._0_24_ = auVar10._0_24_;
    auVar12._24_4_ = piVar21 + 1;
    auVar13._20_44_ = auVar12._20_44_;
    auVar13._0_16_ = auVar10._0_16_;
    auVar13._16_4_ = 0;
    uVar2 = ac & 0xfffffff8 | (uint)(auVar11._32_4_ < 0) << 2;
    uVar1 = uVar2 | (uint)(auVar11._32_4_ == 0) << 1;
    ac = uVar1 | 0 < auVar11._32_4_;
    auVar18._40_24_ = auVar10._40_24_;
    auVar18._0_36_ = auVar13._0_36_;
    auVar18._36_4_ = iVar20;
    if (((byte)(uVar1 >> 1) & 1 | (byte)(uVar2 >> 2) & 1) != 1) {
      do {
        iVar22 = auVar18._16_4_;
        uVar2 = auVar18._4_4_ + 0x3f;
        uVar3 = uVar2 & 0xffffffc0;
        auVar15._12_52_ = auVar18._12_52_;
        auVar15._0_8_ = auVar18._0_8_;
        auVar15._8_4_ = 0x6f938;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar15;
        auVar14._8_56_ = auVar15._8_56_;
        auVar14._4_4_ = uVar3 + 0x40;
        auVar14._0_4_ = fp;
        FUN_0006f9b0(auVar18._24_4_,auVar18._20_4_);
        auVar16._0_20_ = auVar14._0_20_;
        auVar16._20_4_ = auVar18._20_4_ + 8;
        auVar16._28_36_ = auVar14._28_36_;
        auVar16._24_4_ = auVar18._24_4_ + 8;
        uVar4 = ac & 0xfffffff8 | (uint)(DAT_005af6a4 < 0x29f) << 2;
        uVar1 = uVar4 | (uint)(DAT_005af6a4 == 0x29f) << 1;
        ac = uVar1 | 0x29f < DAT_005af6a4;
        DAT_005af6a4 = DAT_005af6a4 + 1;
        fp = uVar3;
        if (((byte)(uVar1 >> 1) & 1 | (byte)(uVar4 >> 2) & 1) != 1) {
          DAT_005af6a4 = g14;
          fp = uVar3 + 0x40;
          auVar17._12_52_ = auVar16._12_52_;
          auVar17._0_8_ = auVar14._0_8_;
          auVar17._8_4_ = 0x6f96c;
          *(undefined1 (*) [64])(uVar2 & 0xffffffc0) = auVar17;
          auVar16._8_56_ = auVar17._8_56_;
          auVar16._0_8_ = CONCAT44(uVar3 + 0x80,uVar2) & 0xffffffffffffffc0;
          FUN_00008250(1);
        }
        auVar18._20_44_ = auVar16._20_44_;
        auVar18._0_16_ = auVar16._0_16_;
        auVar18._16_4_ = iVar22 + 1;
        ac = ac & 0xfffffff8 | (uint)(auVar18._16_4_ < auVar11._32_4_) << 2 |
             (uint)(auVar18._16_4_ == auVar11._32_4_) << 1 | (uint)(auVar11._32_4_ < auVar18._16_4_)
        ;
      } while (auVar18._16_4_ < auVar11._32_4_);
    }
    auVar19._32_32_ = auVar18._32_32_;
    auVar19._0_28_ = auVar18._0_28_;
    auVar19._28_4_ = piVar21 + *piVar21 * 8 + 1;
    iVar22 = *auVar19._28_4_;
    uVar1 = ac & 0xfffffff8 | (uint)(iVar22 < 0) << 2;
    ac = uVar1 | (uint)(iVar22 == 0) << 1 | (uint)(0 < iVar22);
    auVar10._24_40_ = auVar19._24_40_;
    auVar10._0_20_ = auVar18._0_20_;
    auVar10._20_4_ = iVar20 + (auVar11._32_4_ + 0x7fU & 0xffffff80) * 0x20;
  } while (((byte)ac & 1 | (byte)(uVar1 >> 2) & 1) == 1);
  fp = auVar18._0_4_;
  return;
}

