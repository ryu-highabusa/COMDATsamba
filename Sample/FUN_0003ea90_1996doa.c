
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_0003ea90(void)

{
  uint uVar1;
  uint uVar2;
  undefined1 (*pauVar3) [64];
  undefined4 unaff_pfp;
  undefined1 auVar4 [24];
  undefined4 unaff_retaddr;
  undefined4 unaff_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int *piVar16;
  undefined1 in_register_00000018 [40];
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  int iVar17;
  int iVar18;
  undefined1 auStackX_0 [1000000];
  undefined1 auVar7 [64];
  
  auVar15._4_4_ = auStackX_0;
  auVar15._0_4_ = unaff_pfp;
  auVar15._8_4_ = unaff_retaddr;
  auVar15._12_4_ = unaff_r3;
  auVar15._16_4_ = unaff_r4;
  auVar15._20_4_ = unaff_r5;
  DAT_005657c0 = &DAT_005501d0;
  DAT_005657c4 = &DAT_00550284;
  DAT_005657c8 = &DAT_00550340;
  auVar15._24_4_ = 0;
  auVar15._32_32_ = in_register_00000018._8_32_;
  auVar15._28_4_ = &DAT_005657d0;
  DAT_005657cc = &DAT_0055037c;
  do {
    auVar5._24_40_ = auVar15._24_40_;
    auVar5._0_20_ = auVar15._0_20_;
    auVar5._20_4_ = 0;
    do {
      piVar16 = auVar5._28_4_;
      iVar17 = *(int *)(auVar5._24_4_ * 4 + *piVar16);
      iVar18 = *(int *)(auVar5._20_4_ * 4 + piVar16[1]);
      uVar2 = auVar5._4_4_ + 0x3f;
      pauVar3 = (undefined1 (*) [64])(uVar2 & 0xffffffc0);
      auVar7._12_52_ = auVar5._12_52_;
      auVar7._0_8_ = auVar5._0_8_;
      auVar7._8_4_ = 0x3eaf0;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar7;
      auVar6._8_56_ = auVar7._8_56_;
      auVar6._4_4_ = pauVar3 + 1;
      auVar6._0_4_ = fp;
      iVar17 = FUN_0003eba0(iVar17,iVar18);
      uVar1 = ac & 0xfffffff8 | (uint)(0 < iVar17) << 2 | (uint)(iVar17 == 0) << 1;
      ac = uVar1 | iVar17 < 0;
      fp = pauVar3;
      if (((byte)(uVar1 >> 1) & 1) != 1) {
        iVar17 = *(int *)(auVar6._24_4_ * 4 + *piVar16);
        iVar18 = *(int *)(auVar6._20_4_ * 4 + piVar16[1]);
        fp = (undefined1 (*) [64])(auVar6._4_4_ + 0x3fU & 0xffffffc0);
        auVar8._12_52_ = auVar6._12_52_;
        auVar8._0_8_ = auVar6._0_8_;
        auVar8._8_4_ = 0x3eb04;
        *pauVar3 = auVar8;
        auVar6._8_56_ = auVar8._8_56_;
        auVar6._0_8_ = CONCAT44(fp + 1,uVar2) & 0xffffffffffffffc0;
        iVar17 = FUN_0003ebd0(iVar17,iVar18);
        ac = ac & 0xfffffff8 | (uint)(0 < iVar17) << 2 | (uint)(iVar17 == 0) << 1 |
             (uint)(iVar17 < 0);
        if (((byte)ac & 1 | 0 < iVar17) == 1) goto LAB_0003eb78;
      }
      piVar16 = auVar6._28_4_;
      auVar9._20_44_ = auVar6._20_44_;
      auVar9._0_16_ = auVar6._0_16_;
      auVar9._16_4_ = auVar6._20_4_ + 1;
      iVar17 = *(int *)(auVar6._24_4_ * 4 + *piVar16);
      iVar18 = *(int *)(auVar9._16_4_ * 4 + piVar16[1]);
      uVar2 = auVar6._4_4_ + 0x3f;
      pauVar3 = (undefined1 (*) [64])(uVar2 & 0xffffffc0);
      auVar10._12_52_ = auVar9._12_52_;
      auVar10._0_8_ = auVar6._0_8_;
      auVar10._8_4_ = 0x3eb1c;
      *fp = auVar10;
      auVar6._8_56_ = auVar10._8_56_;
      auVar6._4_4_ = pauVar3 + 1;
      auVar6._0_4_ = fp;
      iVar17 = FUN_0003eba0(iVar17,iVar18);
      uVar1 = ac & 0xfffffff8 | (uint)(0 < iVar17) << 2 | (uint)(iVar17 == 0) << 1;
      ac = uVar1 | iVar17 < 0;
      fp = pauVar3;
      if (((byte)(uVar1 >> 1) & 1) != 1) {
        iVar17 = *(int *)(auVar6._24_4_ * 4 + *piVar16);
        iVar18 = *(int *)(auVar6._16_4_ * 4 + piVar16[1]);
        fp = (undefined1 (*) [64])(auVar6._4_4_ + 0x3fU & 0xffffffc0);
        auVar11._12_52_ = auVar6._12_52_;
        auVar11._0_8_ = auVar6._0_8_;
        auVar11._8_4_ = 0x3eb30;
        *pauVar3 = auVar11;
        auVar6._8_56_ = auVar11._8_56_;
        auVar6._0_8_ = CONCAT44(fp + 1,uVar2) & 0xffffffffffffffc0;
        iVar17 = FUN_0003ebd0(iVar17,iVar18);
        ac = ac & 0xfffffff8 | (uint)(0 < iVar17) << 2 | (uint)(iVar17 == 0) << 1 |
             (uint)(iVar17 < 0);
        if (((byte)ac & 1 | 0 < iVar17) == 1) goto LAB_0003eb78;
      }
      piVar16 = auVar6._28_4_;
      auVar12._20_44_ = auVar6._20_44_;
      auVar12._0_16_ = auVar6._0_16_;
      auVar12._16_4_ = auVar6._20_4_ + 2;
      iVar17 = *(int *)(auVar6._24_4_ * 4 + *piVar16);
      iVar18 = *(int *)(auVar12._16_4_ * 4 + piVar16[1]);
      uVar2 = auVar6._4_4_ + 0x3f;
      pauVar3 = (undefined1 (*) [64])(uVar2 & 0xffffffc0);
      auVar13._12_52_ = auVar12._12_52_;
      auVar13._0_8_ = auVar6._0_8_;
      auVar13._8_4_ = 0x3eb48;
      *fp = auVar13;
      auVar6._8_56_ = auVar13._8_56_;
      auVar6._4_4_ = pauVar3 + 1;
      auVar6._0_4_ = fp;
      iVar17 = FUN_0003eba0(iVar17,iVar18);
      uVar1 = ac & 0xfffffff8 | (uint)(0 < iVar17) << 2 | (uint)(iVar17 == 0) << 1;
      ac = uVar1 | iVar17 < 0;
      fp = pauVar3;
      if (((byte)(uVar1 >> 1) & 1) != 1) {
        iVar17 = *(int *)(auVar6._24_4_ * 4 + *piVar16);
        iVar18 = *(int *)(auVar6._16_4_ * 4 + piVar16[1]);
        fp = (undefined1 (*) [64])(auVar6._4_4_ + 0x3fU & 0xffffffc0);
        auVar14._12_52_ = auVar6._12_52_;
        auVar14._0_8_ = auVar6._0_8_;
        auVar14._8_4_ = 0x3eb5c;
        *pauVar3 = auVar14;
        auVar6._8_56_ = auVar14._8_56_;
        auVar6._0_8_ = CONCAT44(fp + 1,uVar2) & 0xffffffffffffffc0;
        iVar17 = FUN_0003ebd0(iVar17,iVar18);
        ac = ac & 0xfffffff8 | (uint)(0 < iVar17) << 2 | (uint)(iVar17 == 0) << 1 |
             (uint)(iVar17 < 0);
        if (((byte)ac & 1 | 0 < iVar17) == 1) {
LAB_0003eb78:
          g_player1.hit_body = '\x01';
          g_player2.hit_body = '\x01';
          fp = (undefined1 (*) [64])auVar6._0_4_;
          return 0;
        }
      }
      uVar2 = ac;
      auVar5._24_40_ = auVar6._24_40_;
      auVar4._0_20_ = auVar6._0_20_;
      auVar4._20_4_ = auVar6._20_4_ + 3;
      auVar5._0_24_ = auVar4;
      uVar1 = ac & 0xfffffff8 | (uint)(0xe < auVar4._20_4_) << 2 | (uint)(auVar4._20_4_ == 0xe) << 1
      ;
      ac = uVar1 | auVar4._20_4_ < 0xe;
    } while (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) == 1);
    auVar15._28_36_ = auVar6._28_36_;
    auVar15._24_4_ = auVar6._24_4_ + 1;
    auVar15._0_24_ = auVar4;
    uVar1 = uVar2 & 0xfffffff8 | (uint)(0xe < auVar15._24_4_) << 2 |
            (uint)(auVar15._24_4_ == 0xe) << 1;
    ac = uVar1 | auVar15._24_4_ < 0xe;
    if (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) != 1) {
      fp = (undefined1 (*) [64])auVar6._0_4_;
      return 0;
    }
  } while( true );
}

