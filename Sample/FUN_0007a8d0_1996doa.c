
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void Debug_DrawList_0007A8D0_candidate(void)

{
  undefined1 (*pauVar1) [64];
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined1 in_register_0000000c [52];
  undefined1 auVar2 [64];
  undefined1 auVar3 [64];
  undefined1 auVar5 [64];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 auVar12 [64];
  uint uVar13;
  undefined4 uVar14;
  undefined4 extraout_g1;
  undefined4 extraout_g1_00;
  uint uVar15;
  uint in_g3;
  undefined1 auStackX_0 [1000000];
  undefined1 auVar4 [64];
  undefined1 auVar6 [64];
  undefined1 auVar11 [64];
  
  auVar2._4_4_ = auStackX_0;
  auVar2._0_4_ = unaff_pfp;
  auVar2._8_4_ = unaff_retaddr;
  auVar2._12_52_ = in_register_0000000c;
  auVar5._20_44_ = in_register_0000000c._8_44_;
  auVar5._0_16_ = auVar2._0_16_;
  auVar5._16_4_ = &DAT_005bdb40;
  do {
    uVar15 = auVar5._4_4_ + 0x3f;
    uVar13 = uVar15 & 0xffffffc0;
    auVar4._12_52_ = auVar5._12_52_;
    auVar4._0_8_ = auVar5._0_8_;
    auVar4._8_4_ = 0x7a8e0;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar4;
    auVar3._8_56_ = auVar4._8_56_;
    auVar3._0_8_ = CONCAT44(uVar15,fp) & 0xffffffc0ffffffff;
    FUN_00008250(1);
    uVar14 = 10;
    auVar6._12_52_ = auVar3._12_52_;
    auVar6._0_8_ = auVar3._0_8_;
    auVar6._8_4_ = 0x7a8ec;
    *(undefined1 (*) [64])(uVar15 & 0xffffffc0) = auVar6;
    auVar5._8_56_ = auVar6._8_56_;
    auVar5._0_8_ = CONCAT44(uVar13 + 0x80,uVar15) & 0xffffffffffffffc0;
    Debug_SetTextPosition(10,10);
    uVar15 = 0xffffffff;
    ac = ac & 0xfffffff8 | (uint)(DAT_005bdb40 < -1) << 2 | (uint)(DAT_005bdb40 == -1) << 1 |
         (uint)(-1 < DAT_005bdb40);
    fp = (undefined1 (*) [64])(uVar13 + 0x40);
    if (((byte)ac & 1 | DAT_005bdb40 < -1) != 1) {
      fp = (undefined1 (*) [64])(uVar13 + 0x80);
      auVar7._12_52_ = auVar5._12_52_;
      auVar7._0_8_ = auVar5._0_8_;
      auVar7._8_4_ = 0x7a900;
      *(undefined1 (*) [64])(uVar13 + 0x40) = auVar7;
      auVar5._8_56_ = auVar7._8_56_;
      auVar5._4_4_ = (undefined1 (*) [64])(uVar13 + 0xc0);
      auVar5._0_4_ = (undefined1 (*) [64])(uVar13 + 0x40);
      FUN_0007acb0(&DAT_005bdb40);
      uVar14 = extraout_g1;
    }
    ac = ac & 0xfffffff8 | (uint)(1 < DAT_005bdb40) << 2 | (uint)(DAT_005bdb40 == 1) << 1 |
         (uint)(DAT_005bdb40 < 1);
    if (((byte)ac & 1 | 1 < DAT_005bdb40) != 1) {
      pauVar1 = (undefined1 (*) [64])(auVar5._4_4_ + 0x3fU & 0xffffffc0);
      auVar8._12_52_ = auVar5._12_52_;
      auVar8._0_8_ = auVar5._0_8_;
      auVar8._8_4_ = 0x7a910;
      *fp = auVar8;
      auVar5._8_56_ = auVar8._8_56_;
      auVar5._4_4_ = pauVar1 + 1;
      auVar5._0_4_ = fp;
      FUN_0007a940(&DAT_005bdb40);
      uVar14 = extraout_g1_00;
      fp = pauVar1;
    }
    ac = ac & 0xfffffff8 | (uint)(2 < DAT_005bdb40) << 2 | (uint)(DAT_005bdb40 == 2) << 1 |
         (uint)(DAT_005bdb40 < 2);
    if (((byte)ac & 1 | 2 < DAT_005bdb40) != 1) {
      pauVar1 = (undefined1 (*) [64])(auVar5._4_4_ + 0x3fU & 0xffffffc0);
      auVar9._12_52_ = auVar5._12_52_;
      auVar9._0_8_ = auVar5._0_8_;
      auVar9._8_4_ = 0x7a920;
      *fp = auVar9;
      auVar5._8_56_ = auVar9._8_56_;
      auVar5._4_4_ = pauVar1 + 1;
      auVar5._0_4_ = fp;
      FUN_0007bec0(&DAT_005bdb40,uVar14,uVar15,in_g3);
      fp = pauVar1;
    }
    ac = ac & 0xfffffff8 | (uint)(0 < DAT_005bdb40) << 2 | (uint)(DAT_005bdb40 == 0) << 1 |
         (uint)(DAT_005bdb40 < 0);
  } while (((byte)ac & 1 | 0 < DAT_005bdb40) == 1);
  uVar15 = auVar5._4_4_ + 0x3f;
  auVar11._12_52_ = auVar5._12_52_;
  auVar11._0_8_ = auVar5._0_8_;
  auVar11._8_4_ = 0x7a930;
  *fp = auVar11;
  auVar10._8_56_ = auVar11._8_56_;
  auVar10._0_8_ = CONCAT44(uVar15,fp) & 0xffffffc0ffffffff;
  uVar13 = FUN_0007cc20(&DAT_005bdb40);
  auVar12._12_52_ = auVar10._12_52_;
  auVar12._0_8_ = auVar10._0_8_;
  auVar12._8_4_ = 0x7a934;
  *(undefined1 (*) [64])(uVar15 & 0xffffffc0) = auVar12;
  FUN_00008270(uVar13);
  fp = (undefined1 (*) [64])(uVar15 & 0xffffffc0);
  return;
}

