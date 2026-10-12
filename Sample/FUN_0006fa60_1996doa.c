
/* WARNING: Removing unreachable block (ram,0x0006fb48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0006fa60(void)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  undefined1 auVar5 [24];
  uint uVar6;
  undefined4 unaff_pfp;
  undefined1 auVar8 [24];
  undefined4 unaff_retaddr;
  undefined4 unaff_r3;
  undefined4 unaff_r4;
  int iVar33;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined1 in_register_0000002c [20];
  undefined1 auVar9 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  int *piVar34;
  int *piVar35;
  undefined1 auVar17 [64];
  undefined1 auVar19 [64];
  undefined1 auVar21 [64];
  undefined1 auVar23 [64];
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  undefined1 auVar31 [64];
  ushort *puVar36;
  ushort *puVar37;
  int iVar38;
  ushort *puVar39;
  ushort *puVar40;
  undefined2 *puVar41;
  undefined1 auStackX_0 [1000000];
  undefined1 auVar18 [64];
  undefined1 auVar20 [64];
  undefined1 auVar7 [20];
  undefined1 auVar22 [64];
  undefined1 auVar10 [64];
  undefined1 auVar24 [64];
  undefined1 auVar30 [64];
  undefined1 auVar32 [60];
  
  auVar5._4_4_ = auStackX_0;
  auVar5._0_4_ = unaff_pfp;
  auVar5._8_4_ = unaff_retaddr;
  auVar5._12_4_ = unaff_r3;
  auVar5._16_4_ = unaff_r4;
  auVar5._20_4_ = unaff_r5;
  auVar9._24_4_ = unaff_r6;
  auVar9._0_24_ = auVar5;
  auVar9._28_4_ = unaff_r7;
  auVar9._32_4_ = unaff_r8;
  auVar9._36_4_ = unaff_r9;
  auVar9._40_4_ = unaff_r10;
  auVar9._44_20_ = in_register_0000002c;
  auVar10._28_36_ = auVar9._28_36_;
  auVar10._24_4_ = 0;
  auVar10._0_24_ = auVar5;
  do {
    auVar11._24_40_ = auVar10._24_40_;
    auVar11._0_20_ = auVar10._0_20_;
    auVar11._20_4_ = (&DAT_005af700)[auVar10._24_4_];
    iVar38 = (&DAT_005af6b0)[auVar10._24_4_ * 3];
    while( true ) {
      iVar33 = auVar11._24_4_;
      auVar12._24_40_ = auVar11._24_40_;
      auVar12._0_20_ = auVar11._0_20_;
      auVar12._20_4_ = auVar11._20_4_ + 4;
      auVar13._20_44_ = auVar12._20_44_;
      auVar13._0_16_ = auVar11._0_16_;
      auVar13._16_4_ = 0;
      auVar14._40_24_ = auVar11._40_24_;
      auVar14._0_36_ = auVar13._0_36_;
      auVar14._36_4_ = iVar38 << 0x17;
      auVar15._36_28_ = auVar14._36_28_;
      auVar15._0_32_ = auVar13._0_32_;
      auVar15._32_4_ = &DAT_005af720 + iVar33 * 0x40;
      auVar16._32_32_ = auVar15._32_32_;
      auVar16._0_28_ = auVar13._0_28_;
      auVar16._28_4_ = &DAT_005af920;
      uVar1 = ac;
      do {
        ac = uVar1;
        uVar6 = fp;
        piVar35 = auVar16._28_4_;
        piVar34 = auVar16._20_4_;
        ac = ac & 0xfffffff8 | (uint)(4 < iVar33) << 2 | (uint)(iVar33 == 4) << 1 |
             (uint)(iVar33 < 4);
        auVar18._0_8_ = auVar16._0_8_;
        auVar18._12_52_ = auVar16._12_52_;
        if (((byte)ac & 1 | 4 < iVar33) == 1) {
          uVar1 = auVar16._4_4_ + 0x3fU & 0xffffffc0;
          auVar20._8_4_ = 0x6fae4;
          auVar20._0_8_ = auVar18._0_8_;
          auVar20._12_52_ = auVar18._12_52_;
          *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar20;
          auVar19._4_56_ = auVar20._8_56_;
          auVar19._0_4_ = uVar1 + 0x40;
          auVar19._60_4_ = 0;
          auVar19 = auVar19 << 0x20;
          FUN_0006fc90(piVar34,auVar16._32_4_,auVar14._36_4_ >> 0x10);
          auVar32 = auVar19._4_60_;
          fp = uVar1;
        }
        else {
          uVar1 = auVar16._4_4_ + 0x3fU & 0xffffffc0;
          auVar18._8_4_ = 0x6fad0;
          *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar18;
          auVar17._4_56_ = auVar18._8_56_;
          auVar17._0_4_ = uVar1 + 0x40;
          auVar17._60_4_ = 0;
          auVar17 = auVar17 << 0x20;
          FUN_0006fc90(piVar34,piVar35,auVar14._36_4_ >> 0x10);
          auVar32 = auVar17._4_60_;
          fp = uVar1;
        }
        auVar21._4_60_ = auVar32;
        auVar21._0_4_ = uVar6;
        auVar22._20_44_ = auVar32._16_44_;
        auVar7._0_16_ = auVar21._0_16_;
        auVar7._16_4_ = auVar16._16_4_ + 1;
        auVar22._0_20_ = auVar7;
        auVar23._44_20_ = auVar32._40_20_;
        auVar23._0_40_ = auVar22._0_40_;
        auVar23._40_4_ = 0x2f;
        uVar4 = ac & 0xfffffff8 | (uint)(auVar7._16_4_ < 0x2f) << 2;
        uVar1 = uVar4 | (uint)(auVar7._16_4_ == 0x2f) << 1;
        auVar24._24_40_ = auVar23._24_40_;
        auVar8._20_4_ = piVar34 + 0x20;
        auVar8._0_20_ = auVar7;
        auVar24._0_24_ = auVar8;
        auVar25._36_28_ = auVar23._36_28_;
        auVar25._0_32_ = auVar24._0_32_;
        auVar25._32_4_ = auVar16._32_4_ + 0xa0;
        auVar16._32_32_ = auVar25._32_32_;
        auVar16._0_28_ = auVar24._0_28_;
        auVar16._28_4_ = piVar35 + 0xa0;
      } while (((byte)(uVar1 >> 1) & 1 | (byte)(uVar4 >> 2) & 1) == 1);
      auVar10._28_36_ = auVar16._28_36_;
      auVar10._24_4_ = iVar33 + 1;
      auVar10._0_24_ = auVar8;
      if (4 < auVar10._24_4_) {
        ac = ac & 0xfffffff8 | (uint)(g_current_stage == STAGE_BEACH) << 1;
        if (((byte)(ac >> 1) & 1) != 1) {
          iVar38 = 0;
          g13 = 0xff;
          puVar37 = &DAT_005af720;
          puVar36 = &DAT_005a76a0;
          do {
            auVar26._44_20_ = auVar10._44_20_;
            auVar26._0_40_ = auVar10._0_40_;
            auVar26._40_4_ = 0x2f;
            auVar27._20_44_ = auVar26._20_44_;
            auVar27._0_16_ = auVar10._0_16_;
            auVar27._16_4_ = 0;
            puVar39 = puVar37;
            puVar40 = puVar36;
            do {
              auVar9 = auVar27;
              auVar27._20_44_ = auVar9._20_44_;
              auVar27._0_16_ = auVar9._0_16_;
              auVar27._16_4_ = auVar9._16_4_ + 2;
              uVar2 = puVar39[1];
              *puVar40 = *puVar39 & 0x3fff;
              puVar39 = puVar39 + 2;
              puVar40[1] = uVar2 & 0x3fff;
              puVar40 = puVar40 + 2;
            } while (auVar27._16_4_ < 0x100);
            auVar28._16_4_ = auVar27._16_4_;
            auVar28._0_16_ = auVar27._0_16_;
            auVar28._20_44_ = auVar27._20_44_;
            iVar38 = iVar38 + 1;
            auVar10._44_20_ = auVar9._44_20_;
            auVar10._0_40_ = auVar28._0_40_;
            auVar10._40_4_ = 0x2f;
            uVar4 = ac & 0xfffffff8 | (uint)(iVar38 < 0x2f) << 2;
            uVar1 = uVar4 | (uint)(iVar38 == 0x2f) << 1;
            ac = uVar1 | 0x2f < iVar38;
            puVar37 = puVar37 + 0x140;
            puVar36 = puVar36 + 0x100;
          } while (((byte)(uVar1 >> 1) & 1 | (byte)(uVar4 >> 2) & 1) == 1);
          fp = uVar6;
          return;
        }
        iVar38 = 0;
        puVar37 = &DAT_005af720;
        puVar41 = &DAT_005a76a0;
        do {
          auVar30._44_20_ = auVar10._44_20_;
          auVar30._0_40_ = auVar10._0_40_;
          auVar30._40_4_ = 0x2f;
          auVar29._20_44_ = auVar30._20_44_;
          auVar29._0_16_ = auVar10._0_16_;
          auVar29._16_4_ = 0;
          puVar36 = puVar37;
          do {
            iVar33 = auVar29._16_4_;
            uVar2 = puVar36[1];
            puVar41[iVar33 + 0xe2] = *puVar36 & 0x3fff;
            uVar3 = puVar36[2];
            puVar41[iVar33 + 0xe3] = uVar2 & 0x3fff;
            uVar2 = puVar36[3];
            puVar41[iVar33 + 0xe4] = uVar3 & 0x3fff;
            uVar3 = puVar36[4];
            puVar41[iVar33 + 0xe5] = uVar2 & 0x3fff;
            puVar41[iVar33 + 0xe6] = uVar3 & 0x3fff;
            auVar29._16_4_ = iVar33 + 5;
            uVar1 = ac & 0xfffffff8 | (uint)(auVar29._16_4_ == 0x1d) << 1;
            ac = uVar1 | auVar29._16_4_ < 0x1d;
            puVar36 = puVar36 + 5;
          } while (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) == 1);
          auVar31._16_4_ = 0x1e;
          auVar31._0_16_ = auVar29._0_16_;
          auVar31._20_44_ = auVar29._20_44_;
          puVar36 = puVar37 + 0x1e;
          do {
            auVar9 = auVar31;
            uVar4 = ac;
            iVar33 = auVar9._16_4_;
            uVar2 = puVar36[1];
            puVar41[iVar33 + -0x1e] = *puVar36 & 0x3fff;
            puVar41[iVar33 + -0x1d] = uVar2 & 0x3fff;
            auVar31._20_44_ = auVar9._20_44_;
            auVar31._0_16_ = auVar9._0_16_;
            auVar31._16_4_ = iVar33 + 2;
            uVar1 = ac & 0xfffffff8 | (uint)(auVar31._16_4_ == 0xff) << 1;
            ac = uVar1 | auVar31._16_4_ < 0xff;
            puVar36 = puVar36 + 2;
          } while (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) == 1);
          iVar38 = iVar38 + 1;
          auVar10._44_20_ = auVar9._44_20_;
          auVar10._0_40_ = auVar31._0_40_;
          auVar10._40_4_ = 0x2f;
          uVar4 = uVar4 & 0xfffffff8 | (uint)(iVar38 < 0x2f) << 2;
          uVar1 = uVar4 | (uint)(iVar38 == 0x2f) << 1;
          ac = uVar1 | 0x2f < iVar38;
          puVar37 = puVar37 + 0x140;
          puVar41 = puVar41 + 0x100;
        } while (((byte)(uVar1 >> 1) & 1 | (byte)(uVar4 >> 2) & 1) == 1);
        fp = uVar6;
        return;
      }
      ac = ac & 0xfffffff8 | (uint)(auVar10._24_4_ < 4);
      if (((byte)ac & 1 | 4 < auVar10._24_4_) == 1) break;
      auVar11._24_40_ = auVar10._24_40_;
      auVar11._20_4_ = DAT_005af700;
      auVar11._0_20_ = auVar7;
      iVar38 = DAT_005af6b0;
    }
  } while( true );
}

