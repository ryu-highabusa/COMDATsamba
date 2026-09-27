
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00051fb0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  undefined1 (*pauVar5) [64];
  undefined1 (*pauVar6) [64];
  short sVar7;
  DOA_U8 DVar8;
  dword dVar9;
  undefined4 unaff_pfp;
  int iVar80;
  undefined1 auVar10 [20];
  undefined1 auVar11 [28];
  undefined1 auVar12 [32];
  undefined4 unaff_retaddr;
  undefined4 unaff_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined4 unaff_r15;
  undefined1 auVar13 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  undefined1 auVar33 [64];
  undefined1 auVar34 [64];
  undefined1 auVar35 [64];
  undefined1 auVar36 [64];
  undefined1 auVar38 [64];
  undefined1 auVar39 [64];
  undefined1 auVar40 [64];
  int iVar82;
  undefined1 auVar41 [64];
  undefined1 auVar42 [64];
  undefined1 auVar44 [64];
  undefined1 auVar45 [64];
  undefined1 auVar47 [64];
  undefined1 auVar49 [64];
  undefined1 auVar50 [64];
  undefined1 auVar51 [64];
  undefined1 auVar52 [64];
  undefined1 auVar53 [64];
  undefined1 auVar54 [64];
  undefined1 auVar55 [64];
  undefined1 auVar56 [64];
  undefined1 auVar57 [64];
  undefined1 auVar58 [64];
  undefined1 auVar59 [64];
  undefined1 auVar60 [64];
  undefined1 auVar61 [64];
  undefined1 auVar62 [64];
  undefined1 auVar63 [64];
  undefined1 auVar64 [64];
  undefined1 auVar65 [64];
  undefined1 auVar66 [64];
  undefined1 auVar67 [64];
  undefined1 auVar68 [64];
  undefined1 auVar70 [64];
  undefined1 auVar71 [64];
  int iVar81;
  undefined1 auVar72 [64];
  undefined1 auVar73 [64];
  undefined1 auVar74 [64];
  undefined1 auVar76 [64];
  undefined1 auVar77 [64];
  int *piVar79;
  undefined1 auVar78 [64];
  int iVar83;
  undefined4 uVar84;
  uint uVar85;
  uint uVar86;
  undefined4 uVar87;
  uint uVar88;
  uint uVar89;
  undefined4 uVar90;
  undefined4 uVar91;
  undefined4 uVar92;
  uint uVar93;
  undefined **ppuVar94;
  undefined4 uVar95;
  dword *pdVar96;
  int iVar97;
  undefined4 *puVar98;
  dword dVar99;
  undefined4 in_g8;
  int *piVar100;
  undefined4 in_g9;
  int iVar101;
  undefined4 in_g10;
  undefined1 *puVar102;
  undefined4 in_g11;
  undefined4 *puVar103;
  undefined1 auStackX_0 [256];
  undefined1 auStack_100 [999744];
  undefined1 auVar14 [64];
  undefined1 auVar19 [64];
  undefined1 auVar22 [64];
  undefined1 auVar43 [64];
  undefined1 auVar46 [64];
  undefined1 auVar48 [64];
  undefined1 auVar69 [64];
  undefined1 auVar75 [64];
  undefined1 auVar37 [64];
  
  auVar13._4_4_ = auStackX_0;
  auVar13._0_4_ = unaff_pfp;
  auVar13._8_4_ = unaff_retaddr;
  auVar13._12_4_ = unaff_r3;
  auVar13._16_4_ = unaff_r4;
  auVar13._20_4_ = unaff_r5;
  auVar13._24_4_ = unaff_r6;
  auVar13._28_4_ = unaff_r7;
  auVar13._32_4_ = unaff_r8;
  auVar13._36_4_ = unaff_r9;
  auVar13._40_4_ = unaff_r10;
  auVar13._44_4_ = unaff_r11;
  auVar13._48_4_ = unaff_r12;
  auVar13._52_4_ = unaff_r13;
  auVar13._56_4_ = unaff_r14;
  auVar13._60_4_ = unaff_r15;
  auVar14._8_56_ = auVar13._8_56_;
  auVar14._4_4_ = auStack_100;
  auVar14._0_4_ = unaff_pfp;
  *(undefined4 *)(fp[4] + 0x20) = in_g8;
  *(undefined4 *)(fp[4] + 0x24) = in_g9;
  *(undefined4 *)(fp[4] + 0x28) = in_g10;
  *(undefined4 *)(fp[4] + 0x2c) = in_g11;
  *(undefined4 **)(fp[4] + 0x30) = g12;
  *(int *)(fp[2] + 0x10) = g14;
  *(int *)fp[3] = g14;
  iVar101 = 0;
  *(int *)(fp[3] + 0x10) = g14;
  auVar15._0_60_ = auVar14._0_60_;
  auVar15._60_4_ = 0xffff;
  puVar103 = &DAT_00880110;
  *(undefined1 (**) [64])fp[2] = fp + 1;
  puVar102 = &DAT_00001111;
  *(undefined2 **)(fp[2] + 0x20) = &DAT_005882bc;
  g12 = &DAT_00800010;
  *(undefined4 **)(fp[2] + 0x30) = &DAT_00554d60;
  auVar16._40_24_ = auVar15._40_24_;
  auVar16._0_36_ = auVar14._0_36_;
  auVar16._36_4_ = 0;
  *(undefined4 **)(fp[3] + 0x20) = &DAT_00589e08;
  auVar17._16_48_ = auVar16._16_48_;
  auVar17._0_12_ = auVar14._0_12_;
  auVar17._12_4_ = (int)&DAT_005a6f00;
  *(undefined4 *)(fp[3] + 0x30) = 0xb4;
  piVar100 = &DAT_0058bbb0;
  g13 = &DAT_00550144;
  *(undefined2 **)fp[4] = &DAT_00550144;
  *(int *)(fp[4] + 0x10) = g14;
  DAT_00880050 = 0x505;
  do {
    uVar85 = auVar17._4_4_ + 0x3f;
    pauVar5 = (undefined1 (*) [64])(uVar85 & 0xffffffc0);
    auVar19._12_52_ = auVar17._12_52_;
    auVar19._0_8_ = auVar17._0_8_;
    auVar19._8_4_ = 0x5205c;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar19;
    auVar18._8_56_ = auVar19._8_56_;
    auVar18._4_4_ = pauVar5 + 1;
    auVar18._0_4_ = fp;
    iVar83 = FUN_00051e70(iVar101);
    uVar93 = ac;
    g13 = *(short **)(pauVar5[4] + 0x10);
    iVar81 = (int)g13;
    uVar89 = ac & 0xfffffff8 | (uint)(iVar83 < 0) << 2;
    ac = uVar89 | (uint)(iVar83 == 0) << 1 | (uint)(0 < iVar83);
    auVar20._60_4_ = auVar18._60_4_;
    auVar20._0_56_ = auVar18._0_56_;
    auVar20._56_4_ = g_player1.unknown_56 + (int)g13 + -0x56;
    if ((((byte)ac & 1 | (byte)(uVar89 >> 2) & 1) == 1) ||
       (DVar8 = g_player1.unknown_56[(int)g13 + -0xe],
       ac = uVar93 & 0xfffffff8 | (uint)(DVar8 != '\0') << 2 | (uint)(DVar8 == '\0') << 1,
       DVar8 == '\0')) {
      fp = pauVar5 + 1;
      auVar22._12_52_ = auVar20._12_52_;
      auVar22._0_8_ = auVar18._0_8_;
      auVar22._8_4_ = 0x52080;
      *(undefined1 (*) [64])(uVar85 & 0xffffffc0) = auVar22;
      auVar21._8_56_ = auVar22._8_56_;
      auVar21._0_8_ = CONCAT44(pauVar5 + 2,uVar85) & 0xffffffffffffffc0;
      FUN_00052a60(iVar101);
      *piVar100 = g14;
      (&DAT_00588f70)[iVar101] = (undefined1)g14;
    }
    else {
      (&DAT_00588f70)[iVar101] = 1;
      auVar23._0_24_ = auVar18._0_24_;
      auVar23._28_36_ = auVar20._28_36_;
      if (g_player1.unknown_56[(int)g13 + -0x28] == '\0') {
        pdVar96 = &DWORD_000c61d0 + (uint)g_player1.unknown_56[(int)g13 + -0x55] * 8;
      }
      else {
        pdVar96 = (dword *)(WORD_ARRAY_000c6370 +
                           (uint)g_player1.unknown_56[(int)g13 + -0x55] * 0x10);
      }
      auVar23._24_4_ = pdVar96;
      g13 = *(short **)pauVar5[4];
      sVar7 = *g13;
      ac = uVar93 & 0xfffffff8 | (uint)(1 < sVar7) << 2 | (uint)(sVar7 == 1) << 1 |
           (uint)(sVar7 < 1);
      auVar24._48_16_ = auVar20._48_16_;
      auVar31._0_16_ = auVar18._0_16_;
      if (((byte)ac & 1 | 1 < sVar7) == 1) {
        auVar32._44_20_ = auVar20._44_20_;
        auVar32._0_40_ = auVar23._0_40_;
        auVar32._40_4_ = *pdVar96;
        auVar33._28_36_ = auVar32._28_36_;
        auVar33._24_4_ = pdVar96 + 1;
        auVar33._0_24_ = auVar23._0_24_;
        auVar34._0_44_ = auVar33._0_44_;
        auVar34._44_4_ = *auVar33._24_4_;
        auVar34._48_16_ = auVar24._48_16_;
        auVar35._28_36_ = auVar34._28_36_;
        auVar35._24_4_ = pdVar96 + 2;
        auVar35._0_24_ = auVar23._0_24_;
        auVar36._36_28_ = auVar34._36_28_;
        auVar36._0_32_ = auVar35._0_32_;
        auVar36._32_4_ = *auVar35._24_4_;
        auVar11._24_4_ = pdVar96 + 3;
        auVar11._0_24_ = auVar23._0_24_;
        auVar37._32_32_ = auVar36._32_32_;
        auVar12._28_4_ = *auVar11._24_4_;
        auVar12._0_28_ = auVar11;
        auVar37._0_32_ = auVar12;
        auVar38._0_40_ = auVar37._0_40_;
        auVar38._40_4_ = 0x10000 - auVar32._40_4_;
        auVar38._44_4_ = 0x10000 - auVar34._44_4_;
        auVar38._48_16_ = auVar24._48_16_;
        auVar39._36_28_ = auVar38._36_28_;
        auVar39._32_4_ = 0x10000 - auVar36._32_4_;
        auVar39._0_32_ = auVar12;
        auVar40._32_32_ = auVar39._32_32_;
        auVar40._28_4_ = 0x10000 - auVar12._28_4_;
        auVar40._0_28_ = auVar11;
        auVar31._20_44_ = auVar40._20_44_;
        auVar31._16_4_ = DWORD_ARRAY_000c6510[g_player1.unknown_56[iVar81 + -0x55]];
      }
      else {
        auVar24._0_44_ = auVar23._0_44_;
        auVar24._44_4_ = *pdVar96;
        auVar25._28_36_ = auVar24._28_36_;
        auVar25._24_4_ = pdVar96 + 1;
        auVar25._0_24_ = auVar23._0_24_;
        auVar26._44_20_ = auVar24._44_20_;
        auVar26._0_40_ = auVar25._0_40_;
        auVar26._40_4_ = *auVar25._24_4_;
        auVar27._24_4_ = pdVar96 + 2;
        auVar27._0_24_ = auVar23._0_24_;
        auVar27._32_32_ = auVar26._32_32_;
        auVar27._28_4_ = *auVar27._24_4_;
        auVar28._28_36_ = auVar27._28_36_;
        auVar28._24_4_ = pdVar96 + 3;
        auVar28._0_24_ = auVar23._0_24_;
        auVar29._36_28_ = auVar26._36_28_;
        auVar29._0_32_ = auVar28._0_32_;
        auVar29._32_4_ = *auVar28._24_4_;
        auVar31._20_44_ = auVar29._20_44_;
        auVar31._16_4_ = -DWORD_ARRAY_000c6510[g_player1.unknown_56[iVar81 + -0x55]];
      }
      auVar30._28_36_ = auVar31._28_36_;
      auVar30._0_24_ = auVar31._0_24_;
      auVar30._24_4_ = pdVar96 + 4;
      g13 = *(short **)(pauVar5[3] + 0x30);
      iVar81 = (int)g13;
      auVar41._52_12_ = auVar31._52_12_;
      auVar41._0_48_ = auVar30._0_48_;
      uVar84 = *(undefined4 *)((int)&DAT_005552dc + (int)g13);
      uVar87 = *(undefined4 *)((int)&DAT_005552e0 + (int)g13);
      g13 = *(short **)(pauVar5[3] + 0x10);
      iVar83 = (int)g13;
      uVar90 = *(undefined4 *)((int)&DAT_005552e4 + iVar81);
      uVar93 = auVar31._60_4_;
      iVar82 = auVar31._36_4_;
      iVar97 = auVar31._32_4_;
      iVar81 = auVar31._28_4_;
      puVar98 = &DAT_005552dc + (int)g13;
      auVar41._48_4_ = puVar98;
      uVar91 = (&DAT_005552e0)[(int)g13];
      uVar92 = *puVar98;
      uVar95 = (&DAT_005552e4)[(int)g13];
      uVar89 = auVar31._4_4_ + 0x3f;
      pauVar6 = (undefined1 (*) [64])(uVar89 & 0xffffffc0);
      auVar43._12_52_ = auVar41._12_52_;
      auVar43._0_8_ = auVar31._0_8_;
      auVar43._8_4_ = 0x521a0;
      *pauVar5 = auVar43;
      auVar42._8_56_ = auVar43._8_56_;
      auVar42._0_8_ = CONCAT44(pauVar6 + 1,uVar85) & 0xffffffffffffffc0;
      FUN_0004b270(uVar84,uVar87,uVar90,uVar92,uVar91,uVar95,(undefined4 *)(pauVar5[1] + 0x30),
                   (undefined4 *)(pauVar5[1] + 0x34));
      *(uint *)(pauVar6[1] + 0x30) = *(uint *)(pauVar6[1] + 0x30) & uVar93;
      uVar85 = auVar31._16_4_ + (*(uint *)(pauVar6[1] + 0x34) & uVar93) & uVar93;
      *(uint *)(pauVar6[1] + 0x34) = uVar85;
      auVar44._20_44_ = auVar42._20_44_;
      auVar44._0_16_ = auVar42._0_16_;
      auVar44._16_4_ = uVar85 - *(int *)((int)&DAT_00588f64 + iVar82) & uVar93;
      if (auVar44._16_4_ - 0x5c72 < 0x238f) {
        if ((*piVar100 == 0) || (g13 = (short *)0x71c6, (int)auVar44._16_4_ < 0x71c7)) {
          g13 = (short *)0x1;
          *piVar100 = 1;
          auVar44._16_4_ = 0x5c71;
        }
        else {
LAB_00052234:
          auVar44._16_4_ = *(undefined4 *)((int)&DAT_0058bba4 + iVar82);
        }
      }
      else {
        g13 = (short *)0x238c;
        if (auVar44._16_4_ - 0x8001 < 0x238d) {
          if ((*piVar100 != 0) && (g13 = (short *)0x8e38, (int)auVar44._16_4_ < 0x8e39))
          goto LAB_00052234;
          g13 = (short *)0x2;
          *piVar100 = 2;
          auVar44._16_4_ = (uint)&DAT_0000a38e;
        }
        else {
          *piVar100 = g14;
        }
      }
      uVar85 = auVar44._16_4_;
      *(uint *)((int)&DAT_0058bba4 + iVar82) = uVar85;
      ac = ac & 0xfffffff8 | (uint)(DAT_00555616 != '\0') << 2 | (uint)(DAT_00555616 == '\0') << 1;
      fp = pauVar6;
      if (DAT_00555616 == '\0') {
        uVar88 = *(uint *)((int)&DAT_0058bb94 + iVar82);
        fp = pauVar6 + 1;
        auVar46._12_52_ = auVar44._12_52_;
        auVar46._0_8_ = auVar44._0_8_;
        auVar46._8_4_ = 0x5227c;
        *(undefined1 (*) [64])(uVar89 & 0xffffffc0) = auVar46;
        auVar45._8_56_ = auVar46._8_56_;
        auVar45._0_8_ = CONCAT44(pauVar6 + 2,uVar89) & 0xffffffffffffffc0;
        uVar86 = FUN_000457d0(uVar85,uVar88);
        uVar88 = ac;
        g13 = (short *)0x471b;
        uVar89 = uVar86 - 0x5c72;
        ac = ac & 0xfffffff8 | (uint)(uVar89 < 0x471b) << 2 | (uint)(uVar89 == 0x471b) << 1 |
             (uint)(0x471b < uVar89);
        if (((byte)ac & 1) == 1) {
          g13 = (short *)0x8000;
          auVar51._20_44_ = auVar45._20_44_;
          auVar51._0_16_ = auVar45._0_16_;
          auVar51._16_4_ = uVar86 - *(int *)((int)&DAT_0058bb94 + iVar82);
          if (auVar51._16_4_ < 0x8001) {
            g13 = (short *)0xffff8000;
            if (auVar51._16_4_ < -0x8000) {
              auVar51._16_4_ = auVar51._16_4_ + 0x10000;
            }
          }
          else {
            auVar51._16_4_ = auVar51._16_4_ + -0x10000;
          }
          iVar80 = auVar51._16_4_;
          uVar92 = 0x38e;
          auVar50._20_44_ = auVar51._20_44_;
          auVar50._0_16_ = auVar51._0_16_;
          auVar50._16_4_ = iVar80 >> 2;
          if (iVar80 < 0x38f) {
            uVar92 = 0xfffffc72;
            uVar85 = uVar88 & 0xfffffff8 | (uint)(iVar80 == -0x38e) << 1;
            ac = uVar85 | -0x38e < iVar80;
            if (((byte)ac & 1 | (byte)(uVar85 >> 1) & 1) == 1) goto LAB_0005237c;
            g13 = (short *)0xfffff1c8;
            uVar85 = uVar88 & 0xfffffff8 | (uint)(iVar80 == -0xe38) << 1;
            ac = uVar85 | -0xe38 < iVar80;
            bVar4 = (byte)ac & 1 | (byte)(uVar85 >> 1) & 1;
            goto joined_r0x0005236c;
          }
          g13 = (short *)0xe38;
          ac = uVar88 & 0xfffffff8 | (uint)(iVar80 == 0xe38) << 1;
          bVar4 = (byte)(ac >> 1) & 1 | iVar80 < 0xe38;
joined_r0x0005234c:
          if (bVar4 != 1) goto LAB_0005237c;
LAB_00052378:
          auVar50._16_4_ = uVar92;
        }
        else {
          uVar89 = *(uint *)((int)&DAT_0058bb94 + iVar82);
          pauVar5 = pauVar6 + 2;
          auVar48._12_52_ = auVar45._12_52_;
          auVar48._0_8_ = auVar45._0_8_;
          auVar48._8_4_ = 0x522a0;
          pauVar6[1] = auVar48;
          auVar47._8_56_ = auVar48._8_56_;
          auVar47._4_4_ = pauVar6 + 3;
          auVar47._0_4_ = fp;
          uVar89 = FUN_00045820(uVar85,uVar89);
          uVar85 = ac;
          g13 = (short *)0x8000;
          auVar49._20_44_ = auVar47._20_44_;
          auVar49._0_16_ = auVar47._0_16_;
          auVar49._16_4_ = uVar89 - *(int *)((int)&DAT_0058bb94 + iVar82);
          if (auVar49._16_4_ < 0x8001) {
            g13 = (short *)0xffff8000;
            if (auVar49._16_4_ < -0x8000) {
              auVar49._16_4_ = auVar49._16_4_ + 0x10000;
            }
          }
          else {
            auVar49._16_4_ = auVar49._16_4_ + -0x10000;
          }
          iVar80 = auVar49._16_4_;
          uVar92 = 0x38e;
          auVar50._20_44_ = auVar49._20_44_;
          auVar50._0_16_ = auVar49._0_16_;
          auVar50._16_4_ = iVar80 >> 2;
          fp = pauVar5;
          if (iVar80 < 0x38f) {
            uVar92 = 0xfffffc72;
            uVar89 = ac & 0xfffffff8 | (uint)(iVar80 == -0x38e) << 1;
            ac = uVar89 | -0x38e < iVar80;
            if (((byte)ac & 1 | (byte)(uVar89 >> 1) & 1) != 1) {
              g13 = (short *)0xfffff1c8;
              uVar85 = uVar85 & 0xfffffff8 | (uint)(iVar80 == -0xe38) << 1;
              ac = uVar85 | -0xe38 < iVar80;
              bVar4 = (byte)ac & 1 | (byte)(uVar85 >> 1) & 1;
              goto joined_r0x0005234c;
            }
          }
          else {
            g13 = (short *)0xe38;
            ac = ac & 0xfffffff8 | (uint)(iVar80 == 0xe38) << 1;
            bVar4 = (byte)(ac >> 1) & 1 | iVar80 < 0xe38;
joined_r0x0005236c:
            if (bVar4 == 1) goto LAB_00052378;
          }
        }
LAB_0005237c:
        auVar44._20_44_ = auVar50._20_44_;
        auVar44._0_16_ = auVar50._0_16_;
        auVar44._16_4_ = auVar50._16_4_ + *(int *)((int)&DAT_0058bb94 + iVar82);
      }
      auVar10._0_16_ = auVar44._0_16_;
      auVar10._16_4_ = auVar44._16_4_ & uVar93;
      auVar52._24_40_ = auVar44._24_40_;
      auVar55._56_8_ = auVar44._56_8_;
      if ((int)auVar10._16_4_ < iVar81) {
        auVar52._20_4_ = 0;
        auVar52._0_20_ = auVar10;
        *(uint *)(fp[1] + 0x34) = auVar10._16_4_;
        auVar55._0_52_ = auVar52._0_52_;
        auVar55._52_4_ = 0;
      }
      else if (auVar31._44_4_ < (int)auVar10._16_4_) {
        g13 = (short *)0x5c71;
        if ((int)auVar10._16_4_ < 0x5c72) {
          auVar56._20_4_ = auVar10._16_4_ - iVar81;
          auVar56._0_20_ = auVar10;
          auVar56._24_40_ = auVar52._24_40_;
          auVar57._0_52_ = auVar56._0_52_;
          auVar57._52_4_ = auVar56._20_4_ & uVar93;
          auVar57._56_8_ = auVar55._56_8_;
          *(int *)(fp[1] + 0x34) = auVar31._44_4_;
          auVar55._24_40_ = auVar57._24_40_;
          auVar55._20_4_ = auVar57._52_4_;
          auVar55._0_20_ = auVar10;
        }
        else if (auVar31._40_4_ < (int)auVar10._16_4_) {
          if ((int)auVar10._16_4_ < iVar97) {
            auVar59._20_4_ = iVar97 - auVar10._16_4_ & uVar93;
            auVar59._0_20_ = auVar10;
            auVar59._24_40_ = auVar52._24_40_;
            *(uint *)(fp[1] + 0x34) = auVar10._16_4_;
            auVar55._0_52_ = auVar59._0_52_;
            auVar55._52_4_ = -auVar59._20_4_;
          }
          else {
            auVar60._20_4_ = 0;
            auVar60._0_20_ = auVar10;
            auVar60._24_40_ = auVar52._24_40_;
            auVar55._0_52_ = auVar60._0_52_;
            auVar55._52_4_ = 0;
            *(uint *)(fp[1] + 0x34) = auVar10._16_4_;
          }
        }
        else {
          auVar58._20_4_ = iVar97 - auVar10._16_4_ & uVar93;
          auVar58._0_20_ = auVar10;
          auVar58._24_40_ = auVar52._24_40_;
          *(int *)(fp[1] + 0x34) = auVar31._40_4_;
          auVar55._0_52_ = auVar58._0_52_;
          auVar55._52_4_ = -auVar58._20_4_;
        }
      }
      else {
        auVar53._20_4_ = auVar10._16_4_ - iVar81;
        auVar53._0_20_ = auVar10;
        auVar53._24_40_ = auVar52._24_40_;
        auVar54._0_52_ = auVar53._0_52_;
        auVar54._52_4_ = auVar53._20_4_ & uVar93;
        auVar54._56_8_ = auVar55._56_8_;
        *(uint *)(fp[1] + 0x34) = auVar10._16_4_;
        auVar55._24_40_ = auVar54._24_40_;
        auVar55._20_4_ = auVar54._52_4_;
        auVar55._0_20_ = auVar10;
      }
      *(uint *)((int)&DAT_0058bb94 + iVar82) = auVar10._16_4_;
      *(uint *)(fp[1] + 0x34) =
           *(int *)((int)&DAT_00588f64 + iVar82) + *(int *)(fp[1] + 0x34) & uVar93;
      auVar61._44_20_ = auVar55._44_20_;
      auVar61._0_40_ = auVar55._0_40_;
      auVar61._40_4_ = *auVar30._24_4_;
      auVar62._28_36_ = auVar61._28_36_;
      auVar62._0_24_ = auVar55._0_24_;
      auVar62._24_4_ = pdVar96 + 5;
      auVar63._48_16_ = auVar55._48_16_;
      auVar63._0_44_ = auVar62._0_44_;
      auVar63._44_4_ = *auVar62._24_4_;
      auVar64._24_4_ = pdVar96 + 6;
      auVar64._0_24_ = auVar62._0_24_;
      auVar64._28_4_ = *auVar64._24_4_;
      auVar64._36_28_ = auVar63._36_28_;
      auVar64._32_4_ = pdVar96[7];
      auVar65._0_16_ = auVar55._0_16_;
      auVar65._16_4_ = *(int *)(fp[1] + 0x30) - *(int *)((int)&DAT_00588f60 + iVar82);
      auVar65._24_40_ = auVar64._24_40_;
      auVar65._20_4_ = auVar55._20_4_ >> auVar64._28_4_;
      auVar66._56_8_ = auVar55._56_8_;
      auVar66._0_52_ = auVar65._0_52_;
      auVar66._52_4_ = auVar55._52_4_ >> auVar64._32_4_;
      ac = ac & 0xfffffff8 | (uint)(DAT_00555616 == '\0') << 1 | (uint)(DAT_00555616 != '\0');
      auVar67._20_44_ = auVar66._20_44_;
      auVar67._16_4_ = uVar93 & auVar65._16_4_;
      auVar67._0_16_ = auVar65._0_16_;
      if (((byte)ac & 1) != 1) {
        uVar85 = *(uint *)((int)&DAT_0058bb90 + iVar82);
        pauVar5 = (undefined1 (*) [64])(auVar44._4_4_ + 0x3fU & 0xffffffc0);
        auVar69._12_52_ = auVar67._12_52_;
        auVar69._0_8_ = auVar55._0_8_;
        auVar69._8_4_ = 0x52488;
        *fp = auVar69;
        auVar68._8_56_ = auVar69._8_56_;
        auVar68._4_4_ = pauVar5 + 1;
        auVar68._0_4_ = fp;
        uVar89 = FUN_000457d0(auVar67._16_4_,uVar85);
        uVar85 = ac;
        auVar70._20_44_ = auVar68._20_44_;
        auVar70._0_16_ = auVar68._0_16_;
        auVar70._16_4_ = uVar93 & uVar89;
        if (((int)auVar70._16_4_ < 0x8000) && ((int)auVar61._40_4_ <= (int)auVar70._16_4_)) {
          auVar70._16_4_ = auVar61._40_4_;
        }
        else if ((0x7fff < (int)auVar70._16_4_) && ((int)auVar70._16_4_ < (int)auVar63._44_4_)) {
          auVar70._16_4_ = auVar63._44_4_;
        }
        auVar71._20_44_ = auVar70._20_44_;
        auVar71._0_16_ = auVar70._0_16_;
        auVar71._16_4_ = auVar70._16_4_ - *(int *)((int)&DAT_0058bb90 + iVar82);
        if (auVar71._16_4_ < 0x8001) {
          if (auVar71._16_4_ < -0x8000) {
            auVar71._16_4_ = auVar71._16_4_ + 0x10000;
          }
        }
        else {
          auVar71._16_4_ = auVar71._16_4_ + -0x10000;
        }
        iVar81 = auVar71._16_4_;
        uVar92 = 0x222;
        ac = ac & 0xfffffff8 | (uint)(0x222 < iVar81);
        if (((byte)ac & 1) == 1) {
LAB_00052500:
          auVar71._16_4_ = uVar92;
        }
        else {
          uVar92 = 0xfffffdde;
          uVar85 = uVar85 & 0xfffffff8 | (uint)(iVar81 == -0x222) << 1;
          ac = uVar85 | -0x222 < iVar81;
          if (((byte)ac & 1 | (byte)(uVar85 >> 1) & 1) != 1) goto LAB_00052500;
        }
        auVar67._20_44_ = auVar71._20_44_;
        auVar67._0_16_ = auVar71._0_16_;
        auVar67._16_4_ = auVar71._16_4_ + *(int *)((int)&DAT_0058bb90 + iVar82) & uVar93;
        fp = pauVar5;
      }
      uVar85 = ac;
      *(int *)((int)&DAT_0058bb90 + iVar82) = auVar67._16_4_;
      DAT_00880100 = 0x1010;
      auVar72._20_44_ = auVar67._20_44_;
      auVar72._0_16_ = auVar67._0_16_;
      *(uint *)(fp[1] + 0x30) =
           *(int *)((int)&DAT_00588f60 + iVar82) + auVar67._16_4_ + auVar65._20_4_ & uVar93;
      uVar84 = (&DAT_005552e0)[iVar83];
      uVar92 = (&DAT_005552e4)[iVar83];
      DAT_00880120 = 0x1212;
      *(undefined4 *)PTR_DAT_000006a0 = *puVar98;
      *(undefined4 *)PTR_DAT_000006a0 = uVar84;
      *(undefined4 *)PTR_DAT_000006a0 = uVar92;
      *(undefined4 *)PTR_DAT_000006a4 = *(undefined4 *)(fp[1] + 0x34);
      DAT_00880140 = 0x1414;
      *(undefined4 *)PTR_DAT_000006a4 = *(undefined4 *)(fp[1] + 0x30);
      DAT_00880150 = 0x1515;
      *(int *)PTR_DAT_000006a4 = auVar66._52_4_;
      iVar81 = *(int *)((int)&DAT_0058bb94 + iVar82);
      g13 = (short *)0x4000;
      ac = ac & 0xfffffff8 | (uint)(iVar81 < 0x4000) << 2 | (uint)(iVar81 == 0x4000) << 1 |
           (uint)(0x4000 < iVar81);
      if (((byte)ac & 1) == 1) {
        g13 = (short *)0x8000;
        ac = uVar85 & 0xfffffff8 | (uint)(iVar81 < 0x8000) << 2 | (uint)(iVar81 == 0x8000) << 1 |
             (uint)(0x8000 < iVar81);
        if (((byte)ac & 1) == 1) {
          g13 = (short *)0xc000;
          ac = uVar85 & 0xfffffff8 | (uint)(iVar81 < 0xc000) << 2 | (uint)(iVar81 == 0xc000) << 1 |
               (uint)(0xc000 < iVar81);
          if (((byte)ac & 1) == 1) {
            auVar72._16_4_ = -iVar81 & uVar93;
          }
          else {
            auVar72._16_4_ = iVar81 + -0x8000;
          }
        }
        else {
          auVar72._16_4_ = iVar81 + -0x8000;
        }
      }
      else {
        auVar72._16_4_ = -iVar81;
      }
      auVar73._20_44_ = auVar72._20_44_;
      auVar73._0_16_ = auVar72._0_16_;
      auVar73._16_4_ = auVar72._16_4_ >> DWORD_000c6550_[*(byte *)(auVar31._56_4_ + 1)];
      DAT_00880160 = 0x1616;
      *(int *)PTR_DAT_000006a4 = auVar73._16_4_;
      uVar85 = auVar67._4_4_ + 0x3f;
      pauVar5 = (undefined1 (*) [64])(uVar85 & 0xffffffc0);
      auVar75._12_52_ = auVar73._12_52_;
      auVar75._0_8_ = auVar72._0_8_;
      auVar75._8_4_ = 0x52658;
      *fp = auVar75;
      auVar74._8_56_ = auVar75._8_56_;
      auVar74._4_4_ = pauVar5 + 1;
      auVar74._0_4_ = fp;
      FUN_000477c0(iVar101,1);
      uVar89 = ac;
      puVar2 = PTR_DAT_000006a0;
      *puVar103 = puVar102;
      uVar92 = *(undefined4 *)(puVar2 + 4);
      uVar84 = *(undefined4 *)(puVar2 + 8);
      uVar87 = *(undefined4 *)(puVar2 + 0xc);
      g13 = *(short **)pauVar5[2];
      *(undefined4 *)g13 = *(undefined4 *)puVar2;
      *(undefined4 *)((int)g13 + 4) = uVar92;
      *(undefined4 *)((int)g13 + 8) = uVar84;
      *(undefined4 *)((int)g13 + 0xc) = uVar87;
      uVar92 = *(undefined4 *)(puVar2 + 0x14);
      uVar84 = *(undefined4 *)(puVar2 + 0x18);
      uVar87 = *(undefined4 *)(puVar2 + 0x1c);
      *(undefined4 *)(pauVar5[1] + 0x10) = *(undefined4 *)(puVar2 + 0x10);
      *(undefined4 *)(pauVar5[1] + 0x14) = uVar92;
      *(undefined4 *)(pauVar5[1] + 0x18) = uVar84;
      *(undefined4 *)(pauVar5[1] + 0x1c) = uVar87;
      uVar92 = *(undefined4 *)(puVar2 + 0x24);
      uVar84 = *(undefined4 *)(puVar2 + 0x28);
      uVar87 = *(undefined4 *)(puVar2 + 0x2c);
      *(undefined4 *)(pauVar5[1] + 0x20) = *(undefined4 *)(puVar2 + 0x20);
      *(undefined4 *)(pauVar5[1] + 0x24) = uVar92;
      *(undefined4 *)(pauVar5[1] + 0x28) = uVar84;
      *(undefined4 *)(pauVar5[1] + 0x2c) = uVar87;
      uVar87 = DAT_005888fc;
      uVar84 = DAT_005888f8;
      uVar92 = DAT_005888f4;
      DAT_00880070 = 0x707;
      *(undefined4 *)puVar2 = DAT_005888f0;
      *(undefined4 *)(puVar2 + 4) = uVar92;
      *(undefined4 *)(puVar2 + 8) = uVar84;
      *(undefined4 *)(puVar2 + 0xc) = uVar87;
      uVar87 = DAT_0058890c;
      uVar84 = DAT_00588908;
      uVar92 = DAT_00588904;
      *(undefined4 *)(puVar2 + 0x10) = DAT_00588900;
      *(undefined4 *)(puVar2 + 0x14) = uVar92;
      *(undefined4 *)(puVar2 + 0x18) = uVar84;
      *(undefined4 *)(puVar2 + 0x1c) = uVar87;
      uVar87 = DAT_0058891c;
      uVar84 = DAT_00588918;
      uVar92 = DAT_00588914;
      *(undefined4 *)(puVar2 + 0x20) = DAT_00588910;
      *(undefined4 *)(puVar2 + 0x24) = uVar92;
      *(undefined4 *)(puVar2 + 0x28) = uVar84;
      *(undefined4 *)(puVar2 + 0x2c) = uVar87;
      uVar92 = *(undefined4 *)((int)g13 + 4);
      uVar84 = *(undefined4 *)((int)g13 + 8);
      uVar87 = *(undefined4 *)((int)g13 + 0xc);
      DAT_00880090 = 0x909;
      *(undefined4 *)puVar2 = *(undefined4 *)g13;
      *(undefined4 *)(puVar2 + 4) = uVar92;
      *(undefined4 *)(puVar2 + 8) = uVar84;
      *(undefined4 *)(puVar2 + 0xc) = uVar87;
      uVar92 = *(undefined4 *)(pauVar5[1] + 0x14);
      uVar84 = *(undefined4 *)(pauVar5[1] + 0x18);
      uVar87 = *(undefined4 *)(pauVar5[1] + 0x1c);
      *(undefined4 *)(puVar2 + 0x10) = *(undefined4 *)(pauVar5[1] + 0x10);
      *(undefined4 *)(puVar2 + 0x14) = uVar92;
      *(undefined4 *)(puVar2 + 0x18) = uVar84;
      *(undefined4 *)(puVar2 + 0x1c) = uVar87;
      uVar92 = *(undefined4 *)(pauVar5[1] + 0x24);
      uVar84 = *(undefined4 *)(pauVar5[1] + 0x28);
      uVar87 = *(undefined4 *)(pauVar5[1] + 0x2c);
      *(undefined4 *)(puVar2 + 0x20) = *(undefined4 *)(pauVar5[1] + 0x20);
      *(undefined4 *)(puVar2 + 0x24) = uVar92;
      *(undefined4 *)(puVar2 + 0x28) = uVar84;
      *(undefined4 *)(puVar2 + 0x2c) = uVar87;
      DAT_00880190 = 0x1919;
      *puVar103 = puVar102;
      uVar92 = *(undefined4 *)(puVar2 + 4);
      uVar84 = *(undefined4 *)(puVar2 + 8);
      uVar87 = *(undefined4 *)(puVar2 + 0xc);
      g13 = *(short **)(pauVar5[2] + 0x30);
      *(undefined4 *)g13 = *(undefined4 *)puVar2;
      *(undefined4 *)((int)g13 + 4) = uVar92;
      *(undefined4 *)((int)g13 + 8) = uVar84;
      *(undefined4 *)((int)g13 + 0xc) = uVar87;
      uVar92 = *(undefined4 *)(puVar2 + 0x14);
      uVar84 = *(undefined4 *)(puVar2 + 0x18);
      uVar87 = *(undefined4 *)(puVar2 + 0x1c);
      g13 = *(short **)pauVar5[3];
      *(undefined4 *)((int)&DAT_00554d70 + (int)g13) = *(undefined4 *)(puVar2 + 0x10);
      *(undefined4 *)((int)&DAT_00554d74 + (int)g13) = uVar92;
      *(undefined4 *)((int)&DAT_00554d78 + (int)g13) = uVar84;
      *(undefined4 *)((int)&DAT_00554d7c + (int)g13) = uVar87;
      uVar92 = *(undefined4 *)(puVar2 + 0x24);
      uVar84 = *(undefined4 *)(puVar2 + 0x28);
      uVar87 = *(undefined4 *)(puVar2 + 0x2c);
      iVar81 = auVar74._56_4_;
      *(undefined4 *)((int)&DAT_00554d80 + (int)g13) = *(undefined4 *)(puVar2 + 0x20);
      *(undefined4 *)((int)&DAT_00554d84 + (int)g13) = uVar92;
      *(undefined4 *)((int)&DAT_00554d88 + (int)g13) = uVar84;
      *(undefined4 *)((int)&DAT_00554d8c + (int)g13) = uVar87;
      bVar4 = *(byte *)(iVar81 + 2);
      if (bVar4 == 0) {
        uVar93 = (uint)*(byte *)(iVar81 + 1);
        uVar89 = ac & 0xfffffff8 | (uint)(0xb < uVar93) << 2 | (uint)(uVar93 == 0xb) << 1;
        ac = uVar89 | uVar93 < 0xb;
        if (((byte)(uVar89 >> 1) & 1) != 1) {
          g13 = *(short **)(pauVar5[2] + 0x20);
          dVar99 = DWORD_ARRAY_000c59b0[uVar93];
          pdVar96 = DWORD_ARRAY_000c3140 + uVar93 * 0xc;
          goto LAB_000527bc;
        }
LAB_00052778:
        fp = (undefined1 (*) [64])(auVar74._4_4_ + 0x3fU & 0xffffffc0);
        auVar76._12_52_ = auVar74._12_52_;
        auVar76._0_8_ = auVar74._0_8_;
        auVar76._8_4_ = 0x52780;
        *pauVar5 = auVar76;
        auVar21._8_56_ = auVar76._8_56_;
        auVar21._0_8_ = CONCAT44(fp + 1,uVar85) & 0xffffffffffffffc0;
        FUN_0004b830(iVar101);
      }
      else {
        ac = ac & 0xfffffff8 | (uint)(bVar4 == 0);
        if (((byte)ac & 1 | 1 < bVar4) == 1) {
          g13 = *(short **)(pauVar5[2] + 0x20);
          dVar99 = DWORD_ARRAY_000c5a30[*(byte *)(iVar81 + 1)];
          pdVar96 = DWORD_ARRAY_000c36e0 + (uint)*(byte *)(iVar81 + 1) * 0xc;
        }
        else {
          uVar93 = (uint)*(byte *)(iVar81 + 1);
          ac = uVar89 & 0xfffffff8 | (uint)(0xb < uVar93) << 2 | (uint)(uVar93 == 0xb) << 1 |
               (uint)(uVar93 < 0xb);
          if (((byte)ac & 1 | 0xb < uVar93) != 1) goto LAB_00052778;
          g13 = *(short **)(pauVar5[2] + 0x20);
          dVar99 = DWORD_ARRAY_000c59f0[uVar93];
          pdVar96 = DWORD_ARRAY_000c3410 + uVar93 * 0xc;
        }
LAB_000527bc:
        auVar77._32_32_ = auVar74._32_32_;
        auVar77._0_28_ = auVar74._0_28_;
        auVar77._28_4_ = pdVar96[*g13];
        *puVar103 = puVar102;
        dVar9 = DWORD_000006a8;
        uVar92 = *(undefined4 *)(puVar2 + 4);
        uVar84 = *(undefined4 *)(puVar2 + 8);
        uVar87 = *(undefined4 *)(puVar2 + 0xc);
        *(undefined4 *)DWORD_000006a8 = *(undefined4 *)puVar2;
        *(undefined4 *)(dVar9 + 4) = uVar92;
        *(undefined4 *)(dVar9 + 8) = uVar84;
        *(undefined4 *)(dVar9 + 0xc) = uVar87;
        uVar92 = *(undefined4 *)(puVar2 + 4);
        uVar84 = *(undefined4 *)(puVar2 + 8);
        uVar87 = *(undefined4 *)(puVar2 + 0xc);
        *(undefined4 *)dVar9 = *(undefined4 *)puVar2;
        *(undefined4 *)(dVar9 + 4) = uVar92;
        *(undefined4 *)(dVar9 + 8) = uVar84;
        *(undefined4 *)(dVar9 + 0xc) = uVar87;
        uVar92 = *(undefined4 *)(puVar2 + 4);
        uVar84 = *(undefined4 *)(puVar2 + 8);
        uVar87 = *(undefined4 *)(puVar2 + 0xc);
        *(undefined4 *)dVar9 = *(undefined4 *)puVar2;
        *(undefined4 *)(dVar9 + 4) = uVar92;
        *(undefined4 *)(dVar9 + 8) = uVar84;
        *(undefined4 *)(dVar9 + 0xc) = uVar87;
        auVar21._24_40_ = auVar77._24_40_;
        auVar21._0_20_ = auVar74._0_20_;
        auVar21._20_4_ = &FLOAT_0203a160;
        iVar81 = dVar99 + *auVar74._12_4_ + 1;
        *g12 = 0x101;
        uVar92 = *(undefined4 *)(&DAT_0203a164 + iVar81 * 0x10);
        puVar1 = (&PTR_GEOBASE_00800000_0203a168)[iVar81 * 4];
        dVar99 = (&DWORD_0203a16c)[iVar81 * 4];
        *(float *)dVar9 = (&FLOAT_0203a160)[iVar81 * 4];
        *(undefined4 *)(dVar9 + 4) = uVar92;
        *(undefined **)(dVar9 + 8) = puVar1;
        *(dword *)(dVar9 + 0xc) = dVar99;
        *puVar103 = puVar102;
        DAT_008000b0 = 0xb0b;
        uVar92 = *(undefined4 *)(puVar2 + 4);
        uVar84 = *(undefined4 *)(puVar2 + 8);
        uVar87 = *(undefined4 *)(puVar2 + 0xc);
        *(undefined4 *)dVar9 = *(undefined4 *)puVar2;
        *(undefined4 *)(dVar9 + 4) = uVar92;
        *(undefined4 *)(dVar9 + 8) = uVar84;
        *(undefined4 *)(dVar9 + 0xc) = uVar87;
        uVar92 = *(undefined4 *)(puVar2 + 4);
        uVar84 = *(undefined4 *)(puVar2 + 8);
        uVar87 = *(undefined4 *)(puVar2 + 0xc);
        *(undefined4 *)dVar9 = *(undefined4 *)puVar2;
        *(undefined4 *)(dVar9 + 4) = uVar92;
        *(undefined4 *)(dVar9 + 8) = uVar84;
        *(undefined4 *)(dVar9 + 0xc) = uVar87;
        uVar92 = *(undefined4 *)(puVar2 + 4);
        uVar84 = *(undefined4 *)(puVar2 + 8);
        uVar87 = *(undefined4 *)(puVar2 + 0xc);
        *(undefined4 *)dVar9 = *(undefined4 *)puVar2;
        *(undefined4 *)(dVar9 + 4) = uVar92;
        *(undefined4 *)(dVar9 + 8) = uVar84;
        *(undefined4 *)(dVar9 + 0xc) = uVar87;
        iVar81 = *auVar74._12_4_;
        *g12 = 0x101;
        iVar81 = auVar77._28_4_ + iVar81;
        uVar92 = *(undefined4 *)(&DAT_0203a164 + iVar81 * 0x10);
        puVar2 = (&PTR_GEOBASE_00800000_0203a168)[iVar81 * 4];
        dVar99 = (&DWORD_0203a16c)[iVar81 * 4];
        *(float *)dVar9 = (&FLOAT_0203a160)[iVar81 * 4];
        *(undefined4 *)(dVar9 + 4) = uVar92;
        *(undefined **)(dVar9 + 8) = puVar2;
        *(dword *)(dVar9 + 0xc) = dVar99;
        fp = pauVar5;
      }
      uVar85 = ac & 0xfffffff8;
      if (*(char *)(auVar21._56_4_ + 1) == '\0') {
        bVar4 = *(byte *)(auVar21._56_4_ + 2);
        piVar79 = auVar21._12_4_;
        if (bVar4 == 0) {
          *puVar103 = puVar102;
          puVar98 = (undefined4 *)DWORD_000006a8;
          puVar2 = PTR_DAT_000006a0;
          DAT_008000b0 = 0xb0b;
          uVar92 = *(undefined4 *)(PTR_DAT_000006a0 + 4);
          uVar84 = *(undefined4 *)(PTR_DAT_000006a0 + 8);
          uVar87 = *(undefined4 *)(PTR_DAT_000006a0 + 0xc);
          *(undefined4 *)DWORD_000006a8 = *(undefined4 *)PTR_DAT_000006a0;
          *(undefined4 *)((int)puVar98 + 4) = uVar92;
          *(undefined4 *)((int)puVar98 + 8) = uVar84;
          *(undefined4 *)((int)puVar98 + 0xc) = uVar87;
          uVar92 = *(undefined4 *)(puVar2 + 4);
          uVar84 = *(undefined4 *)(puVar2 + 8);
          uVar87 = *(undefined4 *)(puVar2 + 0xc);
          *puVar98 = *(undefined4 *)puVar2;
          *(undefined4 *)((int)puVar98 + 4) = uVar92;
          *(undefined4 *)((int)puVar98 + 8) = uVar84;
          *(undefined4 *)((int)puVar98 + 0xc) = uVar87;
          uVar92 = *(undefined4 *)(puVar2 + 4);
          uVar84 = *(undefined4 *)(puVar2 + 8);
          uVar87 = *(undefined4 *)(puVar2 + 0xc);
          *puVar98 = *(undefined4 *)puVar2;
          *(undefined4 *)((int)puVar98 + 4) = uVar92;
          *(undefined4 *)((int)puVar98 + 8) = uVar84;
          *(undefined4 *)((int)puVar98 + 0xc) = uVar87;
          iVar81 = *piVar79;
          *g12 = 0x101;
          ppuVar94 = &PTR_LAB_0203a4a0 + iVar81 * 4;
          ac = ac & 0xfffffff8;
        }
        else {
          ac = ac & 0xfffffff8 | (uint)(bVar4 == 0);
          if (((byte)ac & 1 | 1 < bVar4) == 1) {
            *puVar103 = puVar102;
            puVar98 = (undefined4 *)DWORD_000006a8;
            puVar2 = PTR_DAT_000006a0;
            DAT_008000b0 = 0xb0b;
            uVar92 = *(undefined4 *)(PTR_DAT_000006a0 + 4);
            uVar84 = *(undefined4 *)(PTR_DAT_000006a0 + 8);
            uVar87 = *(undefined4 *)(PTR_DAT_000006a0 + 0xc);
            *(undefined4 *)DWORD_000006a8 = *(undefined4 *)PTR_DAT_000006a0;
            *(undefined4 *)((int)puVar98 + 4) = uVar92;
            *(undefined4 *)((int)puVar98 + 8) = uVar84;
            *(undefined4 *)((int)puVar98 + 0xc) = uVar87;
            uVar92 = *(undefined4 *)(puVar2 + 4);
            uVar84 = *(undefined4 *)(puVar2 + 8);
            uVar87 = *(undefined4 *)(puVar2 + 0xc);
            *puVar98 = *(undefined4 *)puVar2;
            *(undefined4 *)((int)puVar98 + 4) = uVar92;
            *(undefined4 *)((int)puVar98 + 8) = uVar84;
            *(undefined4 *)((int)puVar98 + 0xc) = uVar87;
            uVar92 = *(undefined4 *)(puVar2 + 4);
            uVar84 = *(undefined4 *)(puVar2 + 8);
            uVar87 = *(undefined4 *)(puVar2 + 0xc);
            *puVar98 = *(undefined4 *)puVar2;
            *(undefined4 *)((int)puVar98 + 4) = uVar92;
            *(undefined4 *)((int)puVar98 + 8) = uVar84;
            *(undefined4 *)((int)puVar98 + 0xc) = uVar87;
            iVar81 = *piVar79;
            *g12 = 0x101;
            ppuVar94 = &PTR_DAT_020625f0 + iVar81 * 4;
          }
          else {
            *puVar103 = puVar102;
            puVar98 = (undefined4 *)DWORD_000006a8;
            puVar2 = PTR_DAT_000006a0;
            DAT_008000b0 = 0xb0b;
            uVar92 = *(undefined4 *)(PTR_DAT_000006a0 + 4);
            uVar84 = *(undefined4 *)(PTR_DAT_000006a0 + 8);
            uVar87 = *(undefined4 *)(PTR_DAT_000006a0 + 0xc);
            *(undefined4 *)DWORD_000006a8 = *(undefined4 *)PTR_DAT_000006a0;
            *(undefined4 *)((int)puVar98 + 4) = uVar92;
            *(undefined4 *)((int)puVar98 + 8) = uVar84;
            *(undefined4 *)((int)puVar98 + 0xc) = uVar87;
            uVar92 = *(undefined4 *)(puVar2 + 4);
            uVar84 = *(undefined4 *)(puVar2 + 8);
            uVar87 = *(undefined4 *)(puVar2 + 0xc);
            *puVar98 = *(undefined4 *)puVar2;
            *(undefined4 *)((int)puVar98 + 4) = uVar92;
            *(undefined4 *)((int)puVar98 + 8) = uVar84;
            *(undefined4 *)((int)puVar98 + 0xc) = uVar87;
            uVar92 = *(undefined4 *)(puVar2 + 4);
            uVar84 = *(undefined4 *)(puVar2 + 8);
            uVar87 = *(undefined4 *)(puVar2 + 0xc);
            *puVar98 = *(undefined4 *)puVar2;
            *(undefined4 *)((int)puVar98 + 4) = uVar92;
            *(undefined4 *)((int)puVar98 + 8) = uVar84;
            *(undefined4 *)((int)puVar98 + 0xc) = uVar87;
            iVar81 = *piVar79;
            *g12 = 0x101;
            ppuVar94 = (undefined **)(&DWORD_0203b870 + iVar81 * 4);
          }
        }
        puVar2 = ppuVar94[1];
        puVar1 = ppuVar94[2];
        puVar3 = ppuVar94[3];
        *puVar98 = *ppuVar94;
        puVar98[1] = puVar2;
        puVar98[2] = puVar1;
        puVar98[3] = puVar3;
        uVar85 = ac;
      }
      ac = uVar85;
      uVar85 = auVar21._60_4_;
      iVar81 = auVar21._36_4_;
      iVar83 = *(int *)(fp[1] + 0x30);
      g13 = *(short **)(fp[2] + 0x10);
      *(int *)((int)&DAT_00589db0 + iVar81) = iVar83;
      iVar97 = *(int *)(fp[1] + 0x34);
      *(int *)((int)&DAT_00589dc0 + iVar81) = auVar21._16_4_;
      *(int *)((int)&DAT_00589dc4 + iVar81) = auVar21._52_4_;
      *(int *)((int)&DAT_00589db4 + iVar81) = iVar97;
      *(uint *)((int)&DAT_0056a808 + (int)g13) = uVar85 - iVar83 & uVar85;
      *(uint *)((int)&DAT_0056a80c + (int)g13) = iVar97 + 0x8000U & uVar85;
    }
    g13 = *(short **)(fp[2] + 0x10);
    *(int *)(fp[2] + 0x10) = (int)g13 + 0x78;
    g13 = *(short **)(fp[2] + 0x20);
    g13 = (short *)((int)g13 + 2);
    *(short **)(fp[2] + 0x20) = g13;
    g13 = *(short **)(fp[2] + 0x30);
    *(int *)(fp[2] + 0x30) = (int)g13 + 0x2d0;
    g13 = *(short **)fp[3];
    *(int *)fp[3] = (int)g13 + 0x2d0;
    g13 = *(short **)(fp[3] + 0x10);
    *(int *)(fp[3] + 0x10) = (int)g13 + 0x2d;
    g13 = *(short **)(fp[3] + 0x20);
    g13 = (short *)((int)g13 + 4);
    *(short **)(fp[3] + 0x20) = g13;
    g13 = *(short **)(fp[3] + 0x30);
    *(int *)(fp[3] + 0x30) = (int)g13 + -0xb4;
    iVar101 = iVar101 + 1;
    g13 = *(short **)fp[4];
    uVar89 = ac & 0xfffffff8 | (uint)(iVar101 < 1) << 2;
    uVar85 = uVar89 | (uint)(iVar101 == 1) << 1;
    ac = uVar85 | 1 < iVar101;
    g13 = (short *)((int)g13 + 2);
    *(short **)fp[4] = g13;
    auVar78._40_24_ = auVar21._40_24_;
    auVar78._0_36_ = auVar21._0_36_;
    auVar78._36_4_ = auVar21._36_4_ + 8;
    g13 = *(short **)(fp[4] + 0x10);
    auVar17._16_48_ = auVar78._16_48_;
    auVar17._0_12_ = auVar21._0_12_;
    auVar17._12_4_ = auVar21._12_4_ + 4;
    g13 = (short *)((int)g13 + 0x58);
    *(short **)(fp[4] + 0x10) = g13;
    piVar100 = piVar100 + 1;
    if (((byte)(uVar85 >> 1) & 1 | (byte)(uVar89 >> 2) & 1) != 1) {
      DAT_00880060 = 0x606;
      g12 = *(undefined4 **)(fp[4] + 0x30);
      fp = (undefined1 (*) [64])auVar21._0_4_;
      return;
    }
  } while( true );
}

