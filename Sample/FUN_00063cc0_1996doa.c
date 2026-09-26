
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00063cc0(void)

{
  uint uVar1;
  undefined1 auVar2 [20];
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined4 unaff_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  int iVar13;
  undefined1 in_register_0000001c [36];
  undefined1 auVar3 [64];
  undefined1 auVar4 [64];
  undefined1 auVar5 [64];
  int *piVar12;
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  uint uVar11;
  undefined1 auVar8 [64];
  undefined1 auVar10 [64];
  int iVar14;
  int iVar15;
  undefined1 auStackX_0 [1000000];
  undefined1 auVar9 [64];
  
  auVar2._4_4_ = auStackX_0;
  auVar2._0_4_ = unaff_pfp;
  auVar2._8_4_ = unaff_retaddr;
  auVar2._12_4_ = unaff_r3;
  auVar2._16_4_ = unaff_r4;
  auVar3._20_4_ = unaff_r5;
  auVar3._0_20_ = auVar2;
  auVar3._24_4_ = unaff_r6;
  auVar3._28_36_ = in_register_0000001c;
  auVar4._24_40_ = auVar3._24_40_;
  auVar4._20_4_ = &DAT_0059fe40 + DAT_00593408 * 0x30;
  auVar4._0_20_ = auVar2;
  auVar5._32_32_ = in_register_0000001c._4_32_;
  auVar5._0_28_ = auVar4._0_28_;
  auVar5._28_4_ = 0;
  do {
    uVar1 = ac;
    iVar13 = auVar5._28_4_;
    piVar12 = auVar5._20_4_;
    ac = ac & 0xfffffff8 | (uint)(*piVar12 < 2);
    auVar7 = auVar5;
    if (((byte)ac & 1 | 2 < *piVar12) == 1) {
      ac = uVar1 & 0xfffffff8 |
           (uint)(*(int *)(&DAT_0059be80 + piVar12[1] * 0x44 + DAT_00593408 * 0x7f8) < 0);
      if (((byte)ac & 1 | 0 < *(int *)(&DAT_0059be80 + piVar12[1] * 0x44 + DAT_00593408 * 0x7f8)) !=
          1) {
        if (DAT_0054fcfe == '\0') {
          iVar14 = piVar12[3];
          piVar12[3] = iVar14 + -1;
          if (iVar14 + -1 == 0) {
            piVar12[3] = 4;
            iVar14 = piVar12[2];
            piVar12[2] = iVar14 + -1;
            if (iVar14 + -1 == 0) {
              *piVar12 = g14;
            }
          }
        }
        ac = uVar1 & 0xfffffff8 | (uint)(*piVar12 < 1);
        if (((byte)ac & 1 | 1 < *piVar12) != 1) {
          iVar14 = iVar13 * 8 + 0x18;
          auVar6._28_36_ = auVar5._28_36_;
          auVar6._0_24_ = auVar5._0_24_;
          auVar6._24_4_ = iVar14;
          auVar7._20_44_ = auVar6._20_44_;
          auVar7._0_16_ = auVar5._0_16_;
          auVar7._16_4_ = 0;
          iVar15 = piVar12[2];
          uVar1 = uVar1 & 0xfffffff8 | (uint)(0 < iVar15) << 2 | (uint)(iVar15 == 0) << 1;
          ac = uVar1 | iVar15 < 0;
          if (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) != 1) {
            do {
              uVar11 = auVar7._16_4_;
              iVar15 = DAT_00593408 * 0x7f8;
              uVar1 = auVar7._4_4_ + 0x3fU & 0xffffffc0;
              auVar9._12_52_ = auVar7._12_52_;
              auVar9._0_8_ = auVar7._0_8_;
              auVar9._8_4_ = 0x63d94;
              *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar9;
              auVar8._8_56_ = auVar9._8_56_;
              auVar8._4_4_ = uVar1 + 0x40;
              auVar8._0_4_ = fp;
              FUN_00063db0((int)(&DAT_0059be80 + iVar15 + (iVar14 + uVar11) * 0x44),uVar11);
              auVar7._20_44_ = auVar8._20_44_;
              auVar7._0_16_ = auVar8._0_16_;
              auVar7._16_4_ = uVar11 + 1;
              iVar15 = piVar12[2];
              ac = ac & 0xfffffff8 | (uint)(iVar15 < auVar7._16_4_) << 2 |
                   (uint)(iVar15 == auVar7._16_4_) << 1 | (uint)(auVar7._16_4_ < iVar15);
              fp = uVar1;
            } while (((byte)ac & 1) == 1);
          }
        }
      }
    }
    else {
      *piVar12 = 1;
    }
    auVar10._24_40_ = auVar7._24_40_;
    auVar10._0_20_ = auVar7._0_20_;
    auVar10._20_4_ = piVar12 + 4;
    auVar5._32_32_ = auVar7._32_32_;
    auVar5._0_28_ = auVar10._0_28_;
    auVar5._28_4_ = iVar13 + 1;
    uVar1 = ac & 0xfffffff8 | (uint)(2 < auVar5._28_4_) << 2 | (uint)(auVar5._28_4_ == 2) << 1;
    ac = uVar1 | auVar5._28_4_ < 2;
  } while (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) == 1);
  fp = auVar7._0_4_;
  return;
}

