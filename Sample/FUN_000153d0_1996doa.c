
/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0x00000000 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_000153d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  undefined1 (*pauVar4) [64];
  word wVar5;
  byte bVar6;
  undefined4 unaff_pfp;
  undefined1 auVar7 [48];
  int iVar96;
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
  undefined1 auVar8 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  uint *puVar99;
  char *pcVar101;
  uint32_t column;
  byte *pbVar102;
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 auVar25 [64];
  undefined1 auVar27 [64];
  undefined1 auVar29 [64];
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  undefined1 auVar33 [64];
  undefined1 auVar34 [64];
  undefined1 auVar35 [64];
  undefined1 auVar37 [64];
  undefined1 auVar38 [64];
  undefined1 auVar39 [64];
  undefined1 auVar41 [64];
  undefined1 auVar43 [64];
  undefined1 auVar45 [64];
  undefined1 auVar47 [64];
  undefined1 auVar49 [64];
  undefined1 auVar51 [64];
  undefined1 auVar52 [64];
  undefined1 auVar53 [64];
  undefined1 auVar54 [64];
  undefined1 auVar56 [64];
  undefined1 auVar57 [64];
  undefined1 auVar58 [64];
  undefined1 auVar59 [64];
  undefined1 auVar60 [64];
  undefined1 auVar61 [64];
  undefined1 auVar62 [64];
  int *piVar100;
  undefined1 auVar63 [64];
  undefined1 auVar65 [64];
  undefined1 auVar66 [64];
  undefined1 auVar67 [64];
  undefined1 auVar68 [64];
  undefined1 auVar69 [64];
  int iVar97;
  undefined1 auVar70 [64];
  undefined1 auVar71 [64];
  undefined1 auVar73 [64];
  undefined1 auVar74 [64];
  undefined1 auVar75 [64];
  undefined1 auVar76 [64];
  undefined1 auVar77 [64];
  undefined1 auVar79 [64];
  undefined1 auVar81 [64];
  undefined1 auVar83 [64];
  undefined1 auVar85 [64];
  undefined1 auVar87 [64];
  undefined1 auVar89 [64];
  undefined1 auVar91 [64];
  undefined1 auVar93 [64];
  int iVar98;
  undefined1 auVar95 [64];
  int *piVar103;
  int iVar104;
  undefined4 extraout_g1;
  undefined4 extraout_g1_00;
  undefined4 extraout_g1_01;
  int iVar105;
  undefined4 extraout_g1_02;
  undefined4 extraout_g1_03;
  undefined4 extraout_g1_04;
  undefined4 extraout_g1_05;
  undefined4 extraout_g1_06;
  undefined4 extraout_g1_07;
  undefined4 extraout_g1_08;
  uint uVar106;
  uint uVar107;
  int iVar108;
  uint uVar109;
  uint uVar110;
  uint uVar111;
  uint uVar112;
  byte *in_g7;
  byte *pbVar113;
  int *in_g8;
  int in_g9;
  undefined4 in_g10;
  undefined4 uVar114;
  DOA_ARCADE_PLAYER *in_g11;
  undefined1 auStackX_0 [96];
  undefined1 auStack_60 [32];
  undefined1 auStack_80 [64];
  undefined1 auStack_c0 [64];
  undefined1 auStack_100 [999744];
  undefined1 auVar9 [64];
  undefined1 auVar13 [64];
  undefined1 auVar24 [64];
  undefined1 auVar26 [64];
  undefined1 auVar28 [64];
  undefined1 auVar32 [64];
  undefined1 auVar36 [64];
  undefined1 auVar40 [64];
  undefined1 auVar42 [64];
  undefined1 auVar44 [64];
  undefined1 auVar46 [64];
  undefined1 auVar48 [64];
  undefined1 auVar50 [64];
  undefined1 auVar55 [64];
  undefined1 auVar64 [64];
  undefined1 auVar72 [64];
  undefined1 auVar78 [64];
  undefined1 auVar80 [64];
  undefined1 auVar82 [64];
  undefined1 auVar84 [64];
  undefined1 auVar86 [64];
  undefined1 auVar88 [64];
  undefined1 auVar90 [64];
  undefined1 auVar92 [64];
  undefined1 auVar94 [64];
  
  auVar8._4_4_ = auStackX_0;
  auVar8._0_4_ = unaff_pfp;
  auVar8._8_4_ = unaff_retaddr;
  auVar8._12_4_ = unaff_r3;
  auVar8._16_4_ = unaff_r4;
  auVar8._20_4_ = unaff_r5;
  auVar8._24_4_ = unaff_r6;
  auVar8._28_4_ = unaff_r7;
  auVar8._32_4_ = unaff_r8;
  auVar8._36_4_ = unaff_r9;
  auVar8._40_4_ = unaff_r10;
  auVar8._44_4_ = unaff_r11;
  auVar8._48_4_ = unaff_r12;
  auVar8._52_4_ = unaff_r13;
  auVar8._56_4_ = unaff_r14;
  auVar8._60_4_ = unaff_r15;
  auVar10._4_4_ = auStack_60;
  auVar10._0_4_ = unaff_pfp;
  *(int **)((int)fp + 0x80) = in_g8;
  *(int *)((int)fp + 0x84) = in_g9;
  *(undefined4 *)((int)fp + 0x88) = in_g10;
  *(DOA_ARCADE_PLAYER **)((int)fp + 0x8c) = in_g11;
  *(int **)((int)fp + 0x90) = g12;
  uVar106 = _ButtonCoinTestServiceStart_0054fcd4;
  uVar114 = 0xff00;
  uVar110 = *(ushort *)((int)fp + 0x40) & 0xff00 |
            (_ButtonCoinTestServiceStart_0054fcd4 & 0xf000) >> 0xc;
  *(short *)((int)fp + 0x40) = (short)uVar110;
  g13 = (undefined4 *)0xf00000;
  uVar112 = (uVar106 & 0xf00000) >> 0xc;
  *(ushort *)((int)fp + 0x40) = (ushort)uVar112 | (ushort)*(byte *)((int)fp + 0x40);
  auVar10._12_52_ = auVar8._12_52_;
  auVar10._8_4_ = 0x15424;
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar10;
  auVar9._8_56_ = auVar10._8_56_;
  auVar9._4_4_ = &auStack_c0;
  auVar9._0_4_ = fp;
  FUN_00013cc0();
  uVar106 = ac & 0xfffffff8 | (uint)(DAT_00557c18 == 0) << 1;
  fp = &auStack_80;
  if (((byte)(uVar106 >> 1) & 1) != 1) {
    uVar106 = (uint)GameOverFlag____0054fcb4;
    ac = ac & 0xfffffff8 | (uint)(1 < uVar106) << 2 | (uint)(uVar106 == 1) << 1 |
         (uint)(uVar106 == 0);
    if (((byte)ac & 1 | 1 < uVar106) != 1) {
      uVar114 = 1;
      DAT_00557c18 = 1;
    }
    DAT_00557c18 = DAT_00557c18 + -1;
    fp = &auStack_c0;
    auStack_80._12_52_ = auVar9._12_52_;
    auStack_80._0_8_ = auVar9._0_8_;
    auStack_80._8_4_ = 0x15468;
    auVar9._8_56_ = auStack_80._8_56_;
    auVar9._4_4_ = (undefined1 (*) [64])auStack_100;
    auVar9._0_4_ = &auStack_80;
    FUN_000143c0(0,DAT_00557c18,param_3,param_4,uVar106,uVar110,uVar112,in_g7,in_g8,in_g9,uVar114,
                 in_g11);
    uVar106 = ac;
  }
  ac = uVar106;
  uVar1 = ac;
  uVar106 = ac & 0xfffffff8 | (uint)(0 < DAT_00557c1c) << 2 | (uint)(DAT_00557c1c == 0) << 1;
  ac = uVar106 | DAT_00557c1c < 0;
  if (((byte)(uVar106 >> 1) & 1) != 1) {
    uVar106 = (uint)GameOverFlag____0054fcb4;
    ac = uVar1 & 0xfffffff8 | (uint)(1 < uVar106) << 2 | (uint)(uVar106 == 1) << 1 |
         (uint)(uVar106 == 0);
    if (((byte)ac & 1 | 1 < uVar106) != 1) {
      g13 = (undefined4 *)0x1;
      DAT_00557c1c = 1;
    }
    iVar104 = DAT_00557c1c + -1;
    pauVar4 = (undefined1 (*) [64])(auVar9._4_4_ + 0x3fU & 0xffffffc0);
    auVar11._12_52_ = auVar9._12_52_;
    auVar11._0_8_ = auVar9._0_8_;
    auVar11._8_4_ = 0x154a8;
    DAT_00557c1c = iVar104;
    *fp = auVar11;
    auVar9._8_56_ = auVar11._8_56_;
    auVar9._4_4_ = pauVar4 + 1;
    auVar9._0_4_ = fp;
    FUN_000143c0(1,iVar104,param_3,param_4,uVar106,uVar110,uVar112,in_g7,in_g8,in_g9,uVar114,in_g11)
    ;
    fp = pauVar4;
  }
  iVar104 = 0xfe;
  Camera_Angle = 0xfe;
  pauVar4 = (undefined1 (*) [64])(auVar9._4_4_ + 0x3fU & 0xffffffc0);
  auVar13._12_52_ = auVar9._12_52_;
  auVar13._0_8_ = auVar9._0_8_;
  auVar13._8_4_ = 0x154b8;
  *fp = auVar13;
  auVar12._8_56_ = auVar13._8_56_;
  auVar12._4_4_ = pauVar4 + 1;
  auVar12._0_4_ = fp;
  FUN_00016990();
  uVar114 = extraout_g1;
  fp = pauVar4;
LAB_000154b8:
  do {
    auVar7._0_44_ = auVar12._0_44_;
    if (DAT_0054fd03 == 0) {
      if ((g_player1.controller_type == MAN) && (g_player2.controller_type == MAN)) {
        auVar7._44_4_ = 0;
LAB_0001552c:
        auVar12._0_48_ = auVar7;
        in_g9 = 1;
      }
      else {
        if ((g_player1.controller_type == MAN) && (g_player2.controller_type == COM))
        goto LAB_0001551c;
        if ((g_player1.controller_type == COM) && (g_player2.controller_type == MAN))
        goto LAB_00015528;
      }
    }
    else {
      if (DAT_0054fd03 != 1) {
LAB_00015528:
        auVar7._44_4_ = 1;
        goto LAB_0001552c;
      }
LAB_0001551c:
      auVar12._44_4_ = 0;
      auVar12._0_44_ = auVar7._0_44_;
      in_g9 = 0;
    }
    iVar105 = auVar12._44_4_;
    ac = ac & 0xfffffff8;
    auVar93._28_36_ = auVar12._28_36_;
    auVar93._0_24_ = auVar12._0_24_;
    auVar93._24_4_ = iVar105;
    pbVar113 = in_g7;
    if (iVar105 <= in_g9) {
      auVar14._36_28_ = auVar12._36_28_;
      auVar14._0_32_ = auVar93._0_32_;
      auVar14._32_4_ = &g_player1;
      auVar15._60_4_ = auVar12._60_4_;
      auVar15._0_56_ = auVar14._0_56_;
      auVar15._56_4_ = 0x54fc01;
      auVar16._56_8_ = auVar15._56_8_;
      auVar16._0_52_ = auVar14._0_52_;
      auVar16._52_4_ = 0x54fc59;
      in_g8 = &DAT_00557bf8 + iVar105;
      auVar17._24_40_ = auVar16._24_40_;
      auVar17._0_20_ = auVar12._0_20_;
      auVar17._20_4_ = &DAT_00557c08 + iVar105;
      auVar18._32_32_ = auVar16._32_32_;
      auVar18._0_28_ = auVar17._0_28_;
      auVar18._28_4_ = iVar105 * 0x58;
      auVar19._52_12_ = auVar16._52_12_;
      auVar19._0_48_ = auVar18._0_48_;
      auVar19._48_4_ = iVar105 * 0x27 + 1;
      auVar20._0_60_ = auVar19._0_60_;
      auVar20._60_4_ = &DAT_00557c20 + iVar105;
      auVar21._16_48_ = auVar20._16_48_;
      auVar21._0_12_ = auVar12._0_12_;
      auVar21._12_4_ = iVar105 * 0x3c;
      in_g11 = &g_player1 + iVar105;
      g12 = &DAT_00557a78 + iVar105;
      auVar93._40_24_ = auVar20._40_24_;
      auVar93._0_36_ = auVar21._0_36_;
      auVar93._36_4_ = &DAT_0055561e + iVar105;
      uVar112 = iVar105 * 0xc;
      *(undefined4 **)(fp[1] + 0x10) = &DAT_00557a70 + iVar105;
      *(int **)(fp[1] + 0x20) = &DAT_00557c18 + iVar105;
      *(uint *)(fp[1] + 0x30) = uVar112;
      do {
        pbVar102 = auVar93._60_4_;
        column = auVar93._48_4_;
        pcVar101 = auVar93._36_4_;
        iVar105 = auVar93._28_4_;
        uVar106 = auVar93._24_4_;
        puVar99 = auVar93._20_4_;
        iVar104 = auVar93._12_4_;
        auVar25._44_20_ = auVar93._44_20_;
        auVar25._0_40_ = auVar93._0_40_;
        auVar25._40_4_ = 0;
        g13 = (undefined4 *)0xf000;
        if (((uVar106 == 0) && ((_ButtonCoinTestServiceStart & 0xf000) == 0)) ||
           ((uVar106 == 1 && ((_ButtonCoinTestServiceStart & 0xf00000) == 0)))) {
          g13 = (undefined4 *)0x1;
          *pcVar101 = '\x01';
        }
        uVar114 = 1;
        *pcVar101 = '\x01';
        bVar6 = *pbVar102;
        ac = ac | (uint)(1 < bVar6) << 2 | (uint)(bVar6 == 1) << 1 | (uint)(bVar6 == 0);
        if (((byte)ac & 1 | 1 < bVar6) != 1) {
          *pbVar102 = (byte)g14;
          g13 = *(undefined4 **)(fp[1] + 0x30);
          piVar103 = (int *)(&DAT_00555640 + (int)g13);
          auVar22._20_44_ = auVar25._20_44_;
          auVar22._0_16_ = auVar93._0_16_;
          auVar22._16_4_ = piVar103;
          uVar110 = auVar93._4_4_ + 0x3f;
          auVar24._12_52_ = auVar22._12_52_;
          auVar24._0_8_ = auVar93._0_8_;
          auVar24._8_4_ = 0x15648;
          *fp = auVar24;
          auVar23._8_56_ = auVar24._8_56_;
          auVar23._0_8_ = CONCAT44(uVar110,fp) & 0xffffffc0ffffffff;
          FUN_00008eb0(piVar103);
          uVar112 = (uint)(short)(&WORD_00090a90)[g_player1.unknown_56[iVar105 + -0x55]];
          param_3 = 1;
          param_4 = 0;
          fp = (undefined1 (*) [64])((uVar110 & 0xffffffc0) + 0x40);
          auVar26._12_52_ = auVar23._12_52_;
          auVar26._0_8_ = auVar23._0_8_;
          auVar26._8_4_ = 0x15678;
          *(undefined1 (*) [64])(uVar110 & 0xffffffc0) = auVar26;
          auVar25._8_56_ = auVar26._8_56_;
          auVar25._0_8_ = CONCAT44((uVar110 & 0xffffffc0) + 0x80,uVar110) & 0xffffffffffffffc0;
          FUN_000393d0(piVar103,0x1000000,1,0,column,0x19,uVar112,pbVar113,in_g8,in_g9,uVar114,
                       in_g11);
        }
        uVar110 = (uint)g_player1.unknown_56[iVar105 + -0x56];
        uVar1 = ac & 0xfffffff8 | (uint)((&MANCOM_P1_00557c10)[uVar106] == uVar110) << 1;
        if (((byte)(uVar1 >> 1) & 1) != 1) {
          uVar110 = ac & 0xfffffff8 | (uint)((int)uVar106 < 0) << 2;
          ac = uVar110 | (uint)(uVar106 == 0) << 1 | (uint)(0 < (int)uVar106);
          (&MANCOM_P1_00557c10)[uVar106] = g_player1.unknown_56[iVar105 + -0x56];
          auVar28._0_8_ = auVar25._0_8_;
          auVar28._12_52_ = auVar25._12_52_;
          if (((byte)ac & 1 | (byte)(uVar110 >> 2) & 1) == 1) {
            g_player2.character_id = (&CharSelSlot0_Zack_00557a90)[DAT_00557c0c];
            g_player2.animation_id =
                 (&ANIME_CharacterSelectIdleStanceValues_00090ab0)[g_player2.character_id];
            g_player2.animation_request = '\x01';
            DAT_00557c20 = 1;
            g13 = (undefined4 *)0x1;
            StageLoadFlag = 1;
            DAT_00557c21 = 1;
            uVar1 = auVar25._4_4_ + 0x3f;
            pauVar4 = (undefined1 (*) [64])(uVar1 & 0xffffffc0);
            auVar32._8_4_ = 0x157c4;
            auVar32._0_8_ = auVar28._0_8_;
            auVar32._12_52_ = auVar28._12_52_;
            *fp = auVar32;
            auVar31._8_56_ = auVar32._8_56_;
            auVar31._4_4_ = pauVar4 + 1;
            auVar31._0_4_ = fp;
            FUN_00013ee0(0);
            uVar109 = ac;
            g13 = (undefined4 *)0xfe;
            DAT_00557c22 = 0x4b0;
            uVar110 = ac & 0xfffffff8 | (uint)(g_player1.controller_type == COM) << 2;
            ac = uVar110 | (uint)(g_player1.controller_type == MAN) << 1 |
                 (uint)(MAN < g_player1.controller_type);
            DAT_00557c07 = 0xfe;
            if ((((byte)ac & 1 | (byte)(uVar110 >> 2) & 1) == 1) ||
               (ac = uVar109 & 0xfffffff8 | (uint)(MAN < g_player2.controller_type) << 2 |
                     (uint)(g_player2.controller_type == MAN) << 1 |
                     (uint)(g_player2.controller_type == COM),
               ((byte)ac & 1 | MAN < g_player2.controller_type) == 1)) {
LAB_0001580c:
              g_player2.costume_id = DAT_00557c01;
              uVar110 = (uint)g_player2.character_id;
              (&DAT_00557bac)[uVar110] = (uint)DAT_00557c01;
              fp = pauVar4;
            }
            else {
              uVar110 = (uint)g_player1.character_id;
              uVar107 = (uint)g_player2.character_id;
              ac = uVar109 & 0xfffffff8 | (uint)(uVar110 < uVar107) << 2 |
                   (uint)(uVar110 == uVar107) << 1 | (uint)(uVar107 < uVar110);
              if (((byte)ac & 1 | uVar110 < uVar107) == 1) goto LAB_0001580c;
              auVar33._12_52_ = auVar31._12_52_;
              auVar33._0_8_ = auVar31._0_8_;
              auVar33._8_4_ = 0x15808;
              *(undefined1 (*) [64])(uVar1 & 0xffffffc0) = auVar33;
              auVar31._8_56_ = auVar33._8_56_;
              auVar31._0_8_ = CONCAT44(pauVar4 + 2,uVar1) & 0xffffffffffffffc0;
              FUN_000146c0(1);
              fp = pauVar4 + 1;
            }
            pauVar4 = (undefined1 (*) [64])(auVar31._4_4_ + 0x3fU & 0xffffffc0);
            auVar34._12_52_ = auVar31._12_52_;
            auVar34._0_8_ = auVar31._0_8_;
            auVar34._8_4_ = 0x15838;
            *fp = auVar34;
            auVar25._8_56_ = auVar34._8_56_;
            auVar25._4_4_ = pauVar4 + 1;
            auVar25._0_4_ = fp;
            FUN_0004db90(1);
            fp = pauVar4;
            uVar1 = ac;
          }
          else {
            g_player1.character_id = (&CharSelSlot0_Zack_00557a90)[DAT_00557c08];
            g_player1.animation_id =
                 (&ANIME_CharacterSelectIdleStanceValues_00090ab0)[g_player1.character_id];
            g_player1.animation_request = '\x01';
            DAT_00557c20 = 1;
            g13 = (undefined4 *)0x1;
            StageLoadFlag = 1;
            DAT_00557c21 = 1;
            uVar1 = auVar25._4_4_ + 0x3f;
            pauVar4 = (undefined1 (*) [64])(uVar1 & 0xffffffc0);
            auVar28._8_4_ = 0x156f4;
            *fp = auVar28;
            auVar27._8_56_ = auVar28._8_56_;
            auVar27._4_4_ = pauVar4 + 1;
            auVar27._0_4_ = fp;
            FUN_00013ee0(1);
            uVar109 = ac;
            g13 = (undefined4 *)0xfe;
            DAT_00557c22 = 0x4b0;
            uVar110 = ac & 0xfffffff8 | (uint)(g_player1.controller_type == COM) << 2;
            ac = uVar110 | (uint)(g_player1.controller_type == MAN) << 1 |
                 (uint)(MAN < g_player1.controller_type);
            DAT_00557c06 = 0xfe;
            if ((((byte)ac & 1 | (byte)(uVar110 >> 2) & 1) == 1) ||
               (ac = uVar109 & 0xfffffff8 | (uint)(MAN < g_player2.controller_type) << 2 |
                     (uint)(g_player2.controller_type == MAN) << 1 |
                     (uint)(g_player2.controller_type == COM),
               ((byte)ac & 1 | MAN < g_player2.controller_type) == 1)) {
LAB_0001573c:
              g_player1.costume_id = DAT_00557c00;
              uVar110 = (uint)g_player1.character_id;
              (&DAT_00557b70)[uVar110] = (uint)DAT_00557c00;
              fp = pauVar4;
            }
            else {
              uVar110 = (uint)g_player1.character_id;
              uVar107 = (uint)g_player2.character_id;
              ac = uVar109 & 0xfffffff8 | (uint)(uVar110 < uVar107) << 2 |
                   (uint)(uVar110 == uVar107) << 1 | (uint)(uVar107 < uVar110);
              if (((byte)ac & 1 | uVar110 < uVar107) == 1) goto LAB_0001573c;
              auVar29._12_52_ = auVar27._12_52_;
              auVar29._0_8_ = auVar27._0_8_;
              auVar29._8_4_ = 0x15738;
              *(undefined1 (*) [64])(uVar1 & 0xffffffc0) = auVar29;
              auVar27._8_56_ = auVar29._8_56_;
              auVar27._0_8_ = CONCAT44(pauVar4 + 2,uVar1) & 0xffffffffffffffc0;
              FUN_000146c0(0);
              fp = pauVar4 + 1;
            }
            pauVar4 = (undefined1 (*) [64])(auVar27._4_4_ + 0x3fU & 0xffffffc0);
            auVar30._12_52_ = auVar27._12_52_;
            auVar30._0_8_ = auVar27._0_8_;
            auVar30._8_4_ = 0x15768;
            *fp = auVar30;
            auVar25._8_56_ = auVar30._8_56_;
            auVar25._4_4_ = pauVar4 + 1;
            auVar25._0_4_ = fp;
            FUN_0004db90(0);
            fp = pauVar4;
            uVar1 = ac;
          }
        }
        ac = uVar1;
        uVar1 = ac;
        iVar96 = auVar25._4_4_;
        iVar108 = *in_g8;
        ac = ac & 0xfffffff8 | (uint)(0 < iVar108) << 2 | (uint)(iVar108 == 0) << 1 |
             (uint)(iVar108 < 0);
        if (((byte)ac & 1 | 0 < iVar108) == 1) goto LAB_00015e2c;
        ac = uVar1 & 0xfffffff8 | (uint)(*pcVar101 < '\x01');
        if ((((byte)ac & 1 | '\x01' < *pcVar101) == 1) ||
           (ac = uVar1 & 0xfffffff8, DAT_0054fcfe != '\0')) goto LAB_00015d28;
        DAT_00557c24 = (byte)*puVar99;
        switch(fp[1][uVar106]) {
        case 1:
          if ((int)*puVar99 % 2 == 1) {
            *puVar99 = *puVar99 - 1;
          }
          else {
LAB_0001590c:
            auVar25._40_4_ = 1;
          }
          goto LAB_00015910;
        case 2:
          uVar112 = *puVar99;
          uVar110 = uVar112 - ((int)uVar112 >> 0x1f) & 0xfffffffe;
          if ((int)uVar110 < (int)uVar112 || (int)uVar112 < (int)uVar110) goto LAB_0001590c;
          if (((g_charselect_slot_count & 1) == 0) &&
             (iVar108 = g_charselect_slot_count - 1,
             (int)uVar112 <= iVar108 && iVar108 <= (int)uVar112)) {
            *puVar99 = g_charselect_slot_count - 2;
          }
          else {
            *puVar99 = *puVar99 + 1;
          }
LAB_00015910:
          *pcVar101 = (byte)g14;
switchD_00015878_caseD_3:
          if ((((auVar25._40_4_ == 1) && (g_player1.controller_type == MAN)) &&
              (g_player2.controller_type == MAN)) &&
             (g_player1.character_id <= g_player2.character_id &&
              g_player2.character_id <= g_player1.character_id)) {
            bVar6 = g_player1.unknown_56[iVar105 + -0x55];
            uVar112 = 0xff;
            if ((((1 < bVar6) && (bVar6 != 2)) &&
                ((bVar6 != 4 && bVar6 != 5 && ((bVar6 != 8 && (bVar6 != 6)))))) && (bVar6 != 0xc)) {
              auVar25._40_4_ = 0;
              g13 = (undefined4 *)0x1;
              *puVar99 = (uint)DAT_00557c24;
              *pcVar101 = '\x01';
            }
          }
          goto switchD_00015878_caseD_a;
        case 3:
        case 7:
          goto switchD_00015878_caseD_3;
        case 4:
          uVar112 = *puVar99;
          if ((int)uVar112 % 2 == 1) {
            uVar110 = (uVar112 + 1) / 2;
            if (DAT_00557a88 < uVar110 || uVar110 < DAT_00557a88) {
              uVar110 = uVar112 + 2;
              goto LAB_00015ac8;
            }
            *puVar99 = 1;
          }
          else {
            uVar112 = uVar112 + 2;
            if ((uint)DAT_00557aa0 < uVar112 / 2 || uVar112 / 2 < (uint)DAT_00557aa0) {
              *puVar99 = uVar112;
            }
            else {
LAB_000159c8:
              *puVar99 = g14;
            }
          }
          break;
        case 5:
          uVar112 = (uint)g_charselect_slot_count;
          if ((g_charselect_slot_count & 1) == 0) {
            uVar110 = *puVar99;
            if ((int)uVar110 % 2 == 1) {
              uVar110 = uVar110 + 1;
            }
            else {
              if (uVar110 == uVar112 - 1) goto LAB_000159c8;
              uVar110 = uVar110 + 2;
            }
            goto LAB_00015ac8;
          }
          break;
        case 6:
          uVar112 = (uint)g_charselect_slot_count;
          if ((g_charselect_slot_count & 1) == 0) {
            uVar110 = *puVar99;
            if ((int)uVar110 % 2 == 1) {
              if (uVar110 != uVar112 - 2) {
                uVar110 = uVar110 + 2;
                goto LAB_00015ac8;
              }
            }
            else if (uVar110 != uVar112 - 1) {
              uVar110 = uVar110 + 1;
              goto LAB_00015ac8;
            }
          }
          break;
        case 8:
          uVar110 = *puVar99;
          if ((int)uVar110 % 2 == 1) {
            if ((uVar110 + 1) / 2 == 1) {
              uVar110 = (uint)DAT_00557a88 * 2 - 1;
            }
            else {
LAB_0001596c:
              uVar110 = uVar110 - 2;
            }
          }
          else {
            if (uVar110 / 2 != 0) goto LAB_0001596c;
            uVar110 = (uint)DAT_00557aa0 * 2 - 2;
          }
LAB_00015ac8:
          *puVar99 = uVar110;
          break;
        case 9:
          uVar112 = (uint)g_charselect_slot_count;
          if ((g_charselect_slot_count & 1) == 0) {
            uVar110 = *puVar99;
            if ((int)uVar110 % 2 == 1) {
LAB_00015ac4:
              uVar110 = uVar110 - 1;
            }
            else if (uVar110 == 0) {
              uVar110 = uVar112 - 1;
            }
            else {
              uVar110 = uVar110 - 2;
            }
            goto LAB_00015ac8;
          }
          break;
        case 10:
          if ((g_charselect_slot_count & 1) == 0) {
            uVar110 = *puVar99;
            if ((int)uVar110 % 2 == 1) {
              if (uVar110 != 1) {
                uVar110 = uVar110 - 2;
                goto LAB_00015ac8;
              }
            }
            else if (uVar110 != 0) goto LAB_00015ac4;
          }
          break;
        default:
          goto switchD_00015878_caseD_a;
        }
        *pcVar101 = (byte)g14;
switchD_00015878_caseD_a:
        uVar110 = auVar25._40_4_;
        g_player1.unknown_56[iVar105 + -0x55] = (&CharSelSlot0_Zack_00557a90)[*puVar99];
        ac = uVar1 & 0xfffffff8 | (uint)(fp[1][uVar106] == '\0') << 1;
        if (((byte)(ac >> 1) & 1) == 1) {
LAB_00015b70:
          ac = ac & 0xfffffff8 | (uint)(1 < uVar110) << 2 | (uint)(uVar110 == 1) << 1 |
               (uint)(uVar110 == 0);
          if (((byte)ac & 1 | 1 < uVar110) != 1) goto LAB_00015b74;
        }
        else {
          uVar107 = (uint)DAT_00557c24;
          uVar109 = *puVar99;
          ac = uVar1 & 0xfffffff8 | (uint)((int)uVar109 < (int)uVar107) << 2 |
               (uint)(uVar109 == uVar107) << 1 | (uint)((int)uVar107 < (int)uVar109);
          if (((byte)ac & 1 | (int)uVar109 < (int)uVar107) != 1) goto LAB_00015b70;
LAB_00015b74:
          uVar1 = iVar96 + 0x3f;
          pauVar4 = (undefined1 (*) [64])(uVar1 & 0xffffffc0);
          auVar36._12_52_ = auVar25._12_52_;
          auVar36._0_8_ = auVar25._0_8_;
          auVar36._8_4_ = 0x15b80;
          *fp = auVar36;
          auVar35._8_56_ = auVar36._8_56_;
          auVar35._4_4_ = pauVar4 + 1;
          auVar35._0_4_ = fp;
          Sound_Request(SE_CURSOL);
          StageLoadFlag = 1;
          g13 = (undefined4 *)0x3f333333;
          *g12 = 0x3f333333;
          auVar37._0_8_ = auVar35._0_8_;
          auVar37._12_52_ = auVar35._12_52_;
          fp = pauVar4;
          if (uVar110 == 1) {
            uVar110 = ac & 0xfffffff8 | (uint)(g_player1.controller_type == COM) << 1;
            if (((((byte)(uVar110 >> 1) & 1) == 1) ||
                (uVar110 = ac & 0xfffffff8 | (uint)(g_player2.controller_type == COM) << 1,
                ((byte)(uVar110 >> 1) & 1) == 1)) ||
               (uVar109 = ac & 0xfffffff8 |
                          (uint)(g_player1.character_id < g_player2.character_id) << 2 |
                          (uint)(g_player1.character_id == g_player2.character_id) << 1,
               ac = uVar109 | g_player2.character_id < g_player1.character_id, uVar110 = ac,
               ((byte)(uVar109 >> 1) & 1) != 1)) {
              ac = uVar110;
              in_g11->costume_id = g_player1.unknown_56[iVar105 + -0x54] + '\x01';
              bVar6 = g_player1.unknown_56[iVar105 + -0x55];
              uVar112 = 0xff;
              if (((bVar6 < 2) || (bVar6 == 2)) ||
                 ((bVar6 == 4 || bVar6 == 5 || (((bVar6 == 8 || (bVar6 == 6)) || (bVar6 == 0xc))))))
              {
                bVar6 = g_player1.unknown_56[iVar105 + -0x54];
                uVar110 = ac & 0xfffffff8 | (uint)(2 < bVar6) << 2 | (uint)(bVar6 == 2) << 1;
                ac = uVar110 | bVar6 < 2;
                bVar6 = (byte)ac & 1 | (byte)(uVar110 >> 1) & 1;
              }
              else {
                bVar6 = g_player1.unknown_56[iVar105 + -0x54];
                uVar110 = ac & 0xfffffff8 | (uint)(1 < bVar6) << 2 | (uint)(bVar6 == 1) << 1;
                ac = uVar110 | bVar6 == 0;
                bVar6 = (byte)ac & 1 | (byte)(uVar110 >> 1) & 1;
              }
              if (bVar6 != 1) {
                g_player1.unknown_56[iVar105 + -0x54] = (byte)g14;
              }
              *(uint *)((int)&DAT_00557b70 +
                       (uint)g_player1.unknown_56[iVar105 + -0x55] * 4 + iVar104) =
                   (uint)g_player1.unknown_56[iVar105 + -0x54];
            }
            else {
              auVar37._8_4_ = 0x15c48;
              *(undefined1 (*) [64])(uVar1 & 0xffffffc0) = auVar37;
              auVar35._8_56_ = auVar37._8_56_;
              auVar35._0_8_ = CONCAT44(pauVar4 + 2,uVar1) & 0xffffffffffffffc0;
              FUN_000147a0(uVar106);
              fp = pauVar4 + 1;
            }
          }
          else {
            uVar110 = ac & 0xfffffff8 | (uint)(g_player1.controller_type != COM) << 2 |
                      (uint)(g_player1.controller_type == COM) << 1;
            if (((((byte)(uVar110 >> 1) & 1) == 1) ||
                (uVar110 = ac & 0xfffffff8 | (uint)(g_player2.controller_type != COM) << 2 |
                           (uint)(g_player2.controller_type == COM) << 1,
                ((byte)(uVar110 >> 1) & 1) == 1)) ||
               (uVar109 = ac & 0xfffffff8 |
                          (uint)(g_player1.character_id < g_player2.character_id) << 2 |
                          (uint)(g_player1.character_id == g_player2.character_id) << 1,
               ac = uVar109 | g_player2.character_id < g_player1.character_id, uVar110 = ac,
               ((byte)(uVar109 >> 1) & 1) != 1)) {
              ac = uVar110;
              g_player1.unknown_56[iVar105 + -0x54] =
                   *(DOA_U8 *)
                    ((int)&DAT_00557b70 + (uint)g_player1.unknown_56[iVar105 + -0x55] * 4 + iVar104)
              ;
            }
            else {
              fp = pauVar4 + 1;
              auVar38._8_4_ = 0x15c90;
              auVar38._0_8_ = auVar37._0_8_;
              auVar38._12_52_ = auVar37._12_52_;
              *(undefined1 (*) [64])(uVar1 & 0xffffffc0) = auVar38;
              auVar35._8_56_ = auVar38._8_56_;
              auVar35._0_8_ = CONCAT44(pauVar4 + 2,uVar1) & 0xffffffffffffffc0;
              FUN_000146c0(uVar106);
            }
          }
          *pbVar102 = 1;
          uVar110 = auVar35._4_4_ + 0x3f;
          uVar1 = uVar110 & 0xffffffc0;
          auVar40._12_52_ = auVar35._12_52_;
          auVar40._0_8_ = auVar35._0_8_;
          auVar40._8_4_ = 0x15ca4;
          *fp = auVar40;
          auVar39._8_56_ = auVar40._8_56_;
          auVar39._0_8_ = CONCAT44(uVar110,fp) & 0xffffffc0ffffffff;
          Debug_SetTextPosition(column,0x19);
          auVar42._12_52_ = auVar39._12_52_;
          auVar42._0_8_ = auVar39._0_8_;
          auVar42._8_4_ = 0x15cac;
          *(undefined1 (*) [64])(uVar110 & 0xffffffc0) = auVar42;
          auVar41._8_56_ = auVar42._8_56_;
          auVar41._0_8_ = CONCAT44(uVar1 + 0x40,uVar110) & 0xffffffffffffffc0;
          FUN_0003a1c0(0x16);
          auVar44._12_52_ = auVar41._12_52_;
          auVar44._0_8_ = auVar41._0_8_;
          auVar44._8_4_ = 0x15cb8;
          *(undefined1 (*) [64])(uVar1 + 0x40) = auVar44;
          auVar43._8_56_ = auVar44._8_56_;
          auVar43._4_4_ = uVar1 + 0x80;
          auVar43._0_4_ = uVar1 + 0x40;
          Debug_SetTextPosition(column,0x1a);
          auVar46._12_52_ = auVar43._12_52_;
          auVar46._0_8_ = auVar43._0_8_;
          auVar46._8_4_ = 0x15cc0;
          *(undefined1 (*) [64])(uVar1 + 0x80) = auVar46;
          auVar45._8_56_ = auVar46._8_56_;
          auVar45._4_4_ = uVar1 + 0xc0;
          auVar45._0_4_ = uVar1 + 0x80;
          FUN_0003a1c0(0x16);
          auVar48._12_52_ = auVar45._12_52_;
          auVar48._0_8_ = auVar45._0_8_;
          auVar48._8_4_ = 0x15ccc;
          *(undefined1 (*) [64])(uVar1 + 0xc0) = auVar48;
          auVar47._8_56_ = auVar48._8_56_;
          auVar47._4_4_ = uVar1 + 0x100;
          auVar47._0_4_ = uVar1 + 0xc0;
          Debug_SetTextPosition(column,0x1b);
          auVar50._12_52_ = auVar47._12_52_;
          auVar50._0_8_ = auVar47._0_8_;
          auVar50._8_4_ = 0x15cd4;
          *(undefined1 (*) [64])(uVar1 + 0x100) = auVar50;
          auVar49._8_56_ = auVar50._8_56_;
          auVar49._4_4_ = uVar1 + 0x140;
          auVar49._0_4_ = uVar1 + 0x100;
          FUN_0003a1c0(0x16);
          uVar109 = ac;
          uVar111 = (uint)DAT_00557c24;
          uVar107 = *puVar99;
          uVar110 = ac & 0xfffffff8 | (uint)((int)uVar107 < (int)uVar111) << 2 |
                    (uint)(uVar107 == uVar111) << 1;
          ac = uVar110 | (int)uVar111 < (int)uVar107;
          if ((((byte)(uVar110 >> 1) & 1) != 1) &&
             (ac = uVar109 & 0xfffffff8 | (uint)(GameOverFlag____0054fcb4 != 0) << 2 |
                   (uint)(GameOverFlag____0054fcb4 == 0) << 1, GameOverFlag____0054fcb4 == 0)) {
            g13 = *(undefined4 **)(uVar1 + 0x1a0);
            *g13 = 0x11;
          }
          g13 = (undefined4 *)0x1;
          wVar5 = (&ANIME_CharacterSelectIdleStanceValues_00090ab0)
                  [g_player1.unknown_56[iVar105 + -0x55]];
          g_player1.unknown_56[iVar105 + -0x20] = '\x01';
          *(word *)(g_player1.unknown_56 + iVar105 + -0x2e) = wVar5;
          fp = (undefined1 (*) [64])(uVar1 + 0x180);
          auVar51._12_52_ = auVar49._12_52_;
          auVar51._0_8_ = auVar49._0_8_;
          auVar51._8_4_ = 0x15d28;
          *(undefined1 (*) [64])(uVar1 + 0x140) = auVar51;
          auVar25._8_56_ = auVar51._8_56_;
          auVar25._4_4_ = (undefined1 (*) [64])(uVar1 + 0x1c0);
          auVar25._0_4_ = uVar1 + 0x140;
          FUN_0004db90(uVar106);
        }
LAB_00015d28:
        uVar109 = ac;
        uVar110 = (uint)ButtonPress_P1_0054fcd5;
        uVar1 = ac & 0xfffffff8 | (uint)((int)uVar106 < 0) << 2;
        ac = uVar1 | 0 < (int)uVar106;
        if ((((byte)ac & 1 | (byte)(uVar1 >> 2) & 1) == 1) ||
           (ac = uVar109 & 0xfffffff8, (_ButtonCoinTestServiceStart_0054fcd4 & 0x100) == 0)) {
          uVar109 = ac;
          uVar112 = (uint)ButtonPress_P2_0054fcd6;
          uVar1 = ac & 0xfffffff8 | (uint)((int)uVar106 < 1) << 2;
          ac = uVar1 | 1 < (int)uVar106;
          if ((((byte)ac & 1 | (byte)(uVar1 >> 2) & 1) != 1) &&
             (ac = uVar109 & 0xfffffff8, (_ButtonCoinTestServiceStart_0054fcd4 & 0x10000) != 0))
          goto LAB_00015db4;
          uVar109 = ac;
          uVar1 = ac & 0xfffffff8 | (uint)((int)uVar106 < 0) << 2;
          ac = uVar1 | 0 < (int)uVar106;
          if ((((byte)ac & 1 | (byte)(uVar1 >> 2) & 1) != 1) &&
             (ac = uVar109 & 0xfffffff8, (ButtonPress_P1_0054fcd5 >> 1 & 1) != 0))
          goto LAB_00015db4;
          uVar109 = ac;
          uVar1 = ac & 0xfffffff8 | (uint)((int)uVar106 < 1) << 2;
          ac = uVar1 | 1 < (int)uVar106;
          if ((((byte)ac & 1 | (byte)(uVar1 >> 2) & 1) != 1) &&
             (ac = uVar109 & 0xfffffff8, (ButtonPress_P2_0054fcd6 >> 1 & 1) != 0))
          goto LAB_00015db4;
          uVar109 = ac;
          uVar1 = ac & 0xfffffff8 | (uint)((int)uVar106 < 0) << 2;
          ac = uVar1 | 0 < (int)uVar106;
          if ((((byte)ac & 1 | (byte)(uVar1 >> 2) & 1) != 1) &&
             (ac = uVar109 & 0xfffffff8, (ButtonPress_P1_0054fcd5 >> 2 & 1) != 0))
          goto LAB_00015db4;
          uVar109 = ac;
          uVar1 = ac & 0xfffffff8 | (uint)((int)uVar106 < 1) << 2;
          ac = uVar1 | 1 < (int)uVar106;
          if (((((byte)ac & 1 | (byte)(uVar1 >> 2) & 1) != 1) &&
              (ac = uVar109 & 0xfffffff8, (ButtonPress_P2_0054fcd6 >> 2 & 1) != 0)) ||
             (ac = ac & 0xfffffff8 | (uint)(0 < DAT_00557c22) << 2 | (uint)(DAT_00557c22 == 0) << 1
                   | (uint)(DAT_00557c22 < 0), ((byte)ac & 1 | 0 < DAT_00557c22) != 1))
          goto LAB_00015db4;
        }
        else {
LAB_00015db4:
          uVar1 = ac & 0xfffffff8 | (uint)(0 < DAT_00557c22) << 2 | (uint)(DAT_00557c22 == 0) << 1;
          ac = uVar1 | DAT_00557c22 < 0;
          if (((byte)(uVar1 >> 1) & 1) != 1) {
            pauVar4 = (undefined1 (*) [64])(auVar25._4_4_ + 0x3fU & 0xffffffc0);
            auVar52._12_52_ = auVar25._12_52_;
            auVar52._0_8_ = auVar25._0_8_;
            auVar52._8_4_ = 0x15dcc;
            *fp = auVar52;
            auVar25._8_56_ = auVar52._8_56_;
            auVar25._4_4_ = pauVar4 + 1;
            auVar25._0_4_ = fp;
            Sound_Request(SE_KETTEI);
            fp = pauVar4;
          }
          g13 = *(undefined4 **)(fp[1] + 0x10);
          StageLoadFlag = 1;
          *g13 = 1;
          g13 = (undefined4 *)0x1;
          wVar5 = (&ANIME_CharacterSelectConfirmValues_00090ae0)
                  [g_player1.unknown_56[iVar105 + -0x55]];
          g_player1.unknown_56[iVar105 + -0x20] = '\x01';
          *(word *)(g_player1.unknown_56 + iVar105 + -0x2e) = wVar5;
          pauVar4 = (undefined1 (*) [64])(auVar25._4_4_ + 0x3fU & 0xffffffc0);
          auVar53._12_52_ = auVar25._12_52_;
          auVar53._0_8_ = auVar25._0_8_;
          auVar53._8_4_ = 0x15e0c;
          *fp = auVar53;
          auVar25._8_56_ = auVar53._8_56_;
          auVar25._4_4_ = pauVar4 + 1;
          auVar25._0_4_ = fp;
          FUN_0004db90(uVar106);
          uVar1 = *puVar99;
          g13 = (undefined4 *)0x1;
          (&DAT_00557c06)[uVar106] = 0xff;
          (&DAT_00557c04)[uVar106] = (char)uVar1;
          *in_g8 = 1;
          fp = pauVar4;
        }
LAB_00015e2c:
        pauVar4 = (undefined1 (*) [64])(auVar25._4_4_ + 0x3fU & 0xffffffc0);
        auVar55._12_52_ = auVar25._12_52_;
        auVar55._0_8_ = auVar25._0_8_;
        auVar55._8_4_ = 0x15e34;
        *fp = auVar55;
        auVar54._8_56_ = auVar55._8_56_;
        auVar54._4_4_ = pauVar4 + 1;
        auVar54._0_4_ = fp;
        FUN_000162d0(uVar106);
        auVar56._28_36_ = auVar54._28_36_;
        auVar56._0_24_ = auVar54._0_24_;
        auVar56._24_4_ = uVar106 + 1;
        ac = ac & 0xfffffff8;
        in_g8 = in_g8 + 1;
        auVar57._24_40_ = auVar56._24_40_;
        auVar57._0_20_ = auVar54._0_20_;
        auVar57._20_4_ = puVar99 + 1;
        auVar58._32_32_ = auVar54._32_32_;
        auVar58._0_28_ = auVar57._0_28_;
        auVar58._28_4_ = iVar105 + 0x58;
        *(int *)(pauVar4[1] + 0x10) = *(int *)(pauVar4[1] + 0x10) + 4;
        auVar59._52_12_ = auVar54._52_12_;
        auVar59._0_48_ = auVar58._0_48_;
        auVar59._48_4_ = column + 0x27;
        auVar60._0_60_ = auVar59._0_60_;
        auVar60._60_4_ = pbVar102 + 1;
        auVar61._16_48_ = auVar60._16_48_;
        auVar61._0_12_ = auVar54._0_12_;
        auVar61._12_4_ = iVar104 + 0x3c;
        g13 = *(undefined4 **)(pauVar4[1] + 0x20);
        in_g11 = in_g11 + 1;
        g12 = g12 + 1;
        auVar93._40_24_ = auVar60._40_24_;
        auVar93._0_36_ = auVar61._0_36_;
        auVar93._36_4_ = pcVar101 + 1;
        g13 = (undefined4 *)((int)g13 + 4);
        iVar104 = *(int *)(pauVar4[1] + 0x30) + 0xc;
        *(undefined4 **)(pauVar4[1] + 0x20) = g13;
        *(int *)(pauVar4[1] + 0x30) = iVar104;
        uVar114 = extraout_g1_00;
        fp = pauVar4;
      } while (auVar56._24_4_ <= in_g9);
    }
    uVar106 = ac;
    ac = ac | g_player1.controller_type == COM;
    if ((((((((byte)ac & 1 | MAN < g_player1.controller_type) == 1) ||
           (ac = uVar106 | g_player2.controller_type == COM,
           ((byte)ac & 1 | MAN < g_player2.controller_type) == 1)) ||
          (ac = uVar106 | DAT_00557bf8 < 1, ((byte)ac & 1 | 1 < DAT_00557bf8) == 1)) ||
         (uVar106 = uVar106 | (uint)(1 < DAT_00557bfc) << 2 | (uint)(DAT_00557bfc == 1) << 1,
         ac = uVar106 | DAT_00557bfc < 1, ((byte)(uVar106 >> 1) & 1) != 1)) &&
        (((uVar106 = ac, ac = ac & 0xfffffff8 | (uint)(g_player1.controller_type == COM),
          ((byte)ac & 1 | MAN < g_player1.controller_type) == 1 ||
          (ac = uVar106 & 0xfffffff8, g_player2.controller_type != COM)) ||
         (uVar106 = uVar106 & 0xfffffff8 | (uint)(1 < DAT_00557bf8) << 2 |
                    (uint)(DAT_00557bf8 == 1) << 1, ac = uVar106 | DAT_00557bf8 < 1,
         ((byte)(uVar106 >> 1) & 1) != 1)))) &&
       (((uVar106 = ac, uVar1 = ac & 0xfffffff8, g_player1.controller_type != COM ||
         (ac = ac & 0xfffffff8 | (uint)(g_player2.controller_type == COM), uVar1 = ac,
         ((byte)ac & 1 | MAN < g_player2.controller_type) == 1)) ||
        (uVar106 = uVar106 & 0xfffffff8 | (uint)(1 < DAT_00557bfc) << 2 |
                   (uint)(DAT_00557bfc == 1) << 1, ac = uVar106 | DAT_00557bfc < 1, uVar1 = ac,
        ((byte)(uVar106 >> 1) & 1) != 1)))) {
      ac = uVar1;
      uVar106 = ac;
      uVar110 = (uint)DAT_0054fd03;
      ac = ac & 0xfffffff8 | (uint)(uVar110 == 0);
      if (((((byte)ac & 1 | 1 < uVar110) == 1) ||
          (uVar106 = uVar106 & 0xfffffff8 | (uint)(1 < DAT_00557bf8) << 2 |
                     (uint)(DAT_00557bf8 == 1) << 1, ac = uVar106 | DAT_00557bf8 < 1,
          ((byte)(uVar106 >> 1) & 1) != 1)) &&
         ((uVar106 = ac, ac = ac & 0xfffffff8 | (uint)(uVar110 < 2),
          ((byte)ac & 1 | 2 < uVar110) == 1 ||
          (ac = uVar106 & 0xfffffff8 | (uint)(1 < DAT_00557bfc) << 2 |
                (uint)(DAT_00557bfc == 1) << 1 | (uint)(DAT_00557bfc < 1),
          ((byte)ac & 1 | 1 < DAT_00557bfc) == 1)))) {
        uVar112 = ac;
        uVar106 = ac & 0xfffffff8 | (uint)(DAT_005555e0 != '\0') << 2 |
                  (uint)(DAT_005555e0 == '\0') << 1;
        if ((((byte)(uVar106 >> 1) & 1) != 1) &&
           (ac = ac & 0xfffffff8 | (uint)(1 < StageLoadFlag) << 2 | (uint)(StageLoadFlag == 1) << 1
                 | (uint)(StageLoadFlag == 0), uVar106 = ac, ((byte)ac & 1 | 1 < StageLoadFlag) == 1
           )) {
          ac = uVar112 & 0xfffffff8 | (uint)(MAN < g_player1.controller_type) << 2 |
               (uint)(g_player1.controller_type == MAN) << 1 |
               (uint)(g_player1.controller_type == COM);
          if (((byte)ac & 1 | MAN < g_player1.controller_type) != 1) {
            pauVar4 = (undefined1 (*) [64])(auVar93._4_4_ + 0x3fU & 0xffffffc0);
            auVar94._12_52_ = auVar93._12_52_;
            auVar94._0_8_ = auVar93._0_8_;
            auVar94._8_4_ = 0x16228;
            *fp = auVar94;
            auVar93._8_56_ = auVar94._8_56_;
            auVar93._4_4_ = pauVar4 + 1;
            auVar93._0_4_ = fp;
            FUN_00016790(0,uVar114,param_3,param_4);
            uVar114 = extraout_g1_08;
            fp = pauVar4;
          }
          iVar98 = auVar93._4_4_;
          ac = ac & 0xfffffff8 | (uint)(MAN < g_player2.controller_type) << 2 |
               (uint)(g_player2.controller_type == MAN) << 1 |
               (uint)(g_player2.controller_type == COM);
          if (((byte)ac & 1 | MAN < g_player2.controller_type) != 1) {
            auVar95._12_52_ = auVar93._12_52_;
            auVar95._0_8_ = auVar93._0_8_;
            auVar95._8_4_ = 0x1623c;
            *fp = auVar95;
            auVar93._8_56_ = auVar95._8_56_;
            auVar93._4_4_ = (undefined1 (*) [64])0x0;
            auVar93._0_4_ = fp;
            FUN_00016790(1,uVar114,param_3,param_4);
            fp = (undefined1 (*) [64])(iVar98 + 0x3fU & 0xffffffc0);
          }
          ac = ac & 0xfffffff8;
          if ((float10)DAT_00557a78 < (float10)'\0') {
            DAT_00557a78 = 0;
          }
          fVar2 = (float10)DAT_00557a7c;
          fVar3 = (float10)'\0';
          if (!NAN(fVar3) && !NAN(fVar2)) {
            ac = ac | (uint)(fVar3 < fVar2) << 2;
            ac = ac | (uint)(fVar3 == fVar2) << 1;
            ac = ac | fVar2 < fVar3;
          }
          if (((byte)(ac >> 1) & 1 | (byte)(ac >> 2) & 1) != 1) {
            DAT_00557a7c = 0;
          }
          g12 = *(int **)(fp[2] + 0x10);
          fp = (undefined1 (*) [64])auVar93._0_4_;
          return;
        }
        ac = uVar106;
        g12 = *(int **)(fp[2] + 0x10);
        fp = (undefined1 (*) [64])auVar93._0_4_;
        return;
      }
    }
    auVar62._0_16_ = auVar93._0_16_;
    auVar62._16_4_ = 299;
    auVar62._20_4_ = &DAT_00557c18;
    auVar62._28_36_ = auVar93._28_36_;
    auVar62._24_4_ = &DAT_00557c1c;
    auVar70._0_32_ = auVar62._0_32_;
    auVar70._32_4_ = 0x47ae147b;
    auVar70._40_24_ = auVar93._40_24_;
    auVar70._36_4_ = 0x3fa47ae1;
    do {
      piVar100 = auVar70._24_4_;
      piVar103 = auVar70._20_4_;
      uVar106 = auVar70._4_4_ + 0x3f;
      uVar1 = uVar106 & 0xffffffc0;
      auVar64._12_52_ = auVar70._12_52_;
      auVar64._0_8_ = auVar70._0_8_;
      auVar64._8_4_ = 0x15f50;
      *fp = auVar64;
      auVar63._8_56_ = auVar64._8_56_;
      auVar63._0_8_ = CONCAT44(uVar106,fp) & 0xffffffc0ffffffff;
      FUN_00008250(1);
      g13 = (undefined4 *)0xfe;
      Camera_Angle = 0xfe;
      auVar65._12_52_ = auVar63._12_52_;
      auVar65._0_8_ = auVar63._0_8_;
      auVar65._8_4_ = 0x15f60;
      *(undefined1 (*) [64])(uVar106 & 0xffffffc0) = auVar65;
      auVar12._8_56_ = auVar65._8_56_;
      auVar12._0_8_ = CONCAT44(uVar1 + 0x80,uVar106) & 0xffffffffffffffc0;
      FUN_00013cc0();
      uVar106 = ac & 0xfffffff8 | (uint)(*piVar103 == 0) << 1;
      uVar114 = extraout_g1_01;
      fp = (undefined1 (*) [64])(uVar1 + 0x40);
      if (((byte)(uVar106 >> 1) & 1) != 1) {
        uVar106 = (uint)GameOverFlag____0054fcb4;
        ac = ac & 0xfffffff8 | (uint)(1 < uVar106) << 2 | (uint)(uVar106 == 1) << 1 |
             (uint)(uVar106 == 0);
        if (((byte)ac & 1 | 1 < uVar106) != 1) {
          iVar104 = 1;
          *piVar103 = 1;
        }
        iVar105 = DAT_00557c18 + -1;
        *piVar103 = iVar105;
        fp = (undefined1 (*) [64])(uVar1 + 0x80);
        auVar66._12_52_ = auVar12._12_52_;
        auVar66._0_8_ = auVar12._0_8_;
        auVar66._8_4_ = 0x15f94;
        *(undefined1 (*) [64])(uVar1 + 0x40) = auVar66;
        auVar12._8_56_ = auVar66._8_56_;
        auVar12._4_4_ = (undefined1 (*) [64])(uVar1 + 0xc0);
        auVar12._0_4_ = (undefined1 (*) [64])(uVar1 + 0x40);
        FUN_000143c0(0,iVar105,param_3,param_4,uVar106,uVar110,uVar112,pbVar113,in_g8,in_g9,iVar104,
                     in_g11);
        uVar114 = extraout_g1_02;
        uVar106 = ac;
      }
      ac = uVar106;
      uVar106 = ac & 0xfffffff8 | (uint)(*piVar100 == 0) << 1;
      if (((byte)(uVar106 >> 1) & 1) != 1) {
        uVar106 = (uint)GameOverFlag____0054fcb4;
        ac = ac & 0xfffffff8 | (uint)(1 < uVar106) << 2 | (uint)(uVar106 == 1) << 1 |
             (uint)(uVar106 == 0);
        if (((byte)ac & 1 | 1 < uVar106) != 1) {
          g13 = (undefined4 *)0x1;
          *piVar100 = 1;
        }
        iVar105 = DAT_00557c1c + -1;
        *piVar100 = iVar105;
        pauVar4 = (undefined1 (*) [64])(auVar12._4_4_ + 0x3fU & 0xffffffc0);
        auVar67._12_52_ = auVar12._12_52_;
        auVar67._0_8_ = auVar12._0_8_;
        auVar67._8_4_ = 0x15fc8;
        *fp = auVar67;
        auVar12._8_56_ = auVar67._8_56_;
        auVar12._4_4_ = pauVar4 + 1;
        auVar12._0_4_ = fp;
        FUN_000143c0(1,iVar105,param_3,param_4,uVar106,uVar110,uVar112,pbVar113,in_g8,in_g9,iVar104,
                     in_g11);
        uVar114 = extraout_g1_03;
        fp = pauVar4;
        uVar106 = ac;
      }
      ac = uVar106;
      uVar106 = ac & 0xfffffff8 | (uint)(DAT_005555e0 == '\0') << 1;
      if ((((byte)(uVar106 >> 1) & 1) != 1) &&
         (uVar106 = ac & 0xfffffff8 | (uint)(StageLoadFlag == 1) << 1,
         ((byte)(uVar106 >> 1) & 1) != 1)) {
        ac = ac & 0xfffffff8 | (uint)(MAN < g_player1.controller_type) << 2 |
             (uint)(g_player1.controller_type == MAN) << 1 |
             (uint)(g_player1.controller_type == COM);
        if (((byte)ac & 1 | MAN < g_player1.controller_type) != 1) {
          pauVar4 = (undefined1 (*) [64])(auVar12._4_4_ + 0x3fU & 0xffffffc0);
          auVar68._12_52_ = auVar12._12_52_;
          auVar68._0_8_ = auVar12._0_8_;
          auVar68._8_4_ = 0x15ff4;
          *fp = auVar68;
          auVar12._8_56_ = auVar68._8_56_;
          auVar12._4_4_ = pauVar4 + 1;
          auVar12._0_4_ = fp;
          FUN_00016790(0,uVar114,param_3,param_4);
          uVar114 = extraout_g1_04;
          fp = pauVar4;
        }
        ac = ac & 0xfffffff8 | (uint)(MAN < g_player2.controller_type) << 2 |
             (uint)(g_player2.controller_type == MAN) << 1 |
             (uint)(g_player2.controller_type == COM);
        uVar106 = ac;
        if (((byte)ac & 1 | MAN < g_player2.controller_type) != 1) {
          pauVar4 = (undefined1 (*) [64])(auVar12._4_4_ + 0x3fU & 0xffffffc0);
          auVar69._12_52_ = auVar12._12_52_;
          auVar69._0_8_ = auVar12._0_8_;
          auVar69._8_4_ = 0x16008;
          *fp = auVar69;
          auVar12._8_56_ = auVar69._8_56_;
          auVar12._4_4_ = pauVar4 + 1;
          auVar12._0_4_ = fp;
          FUN_00016790(1,uVar114,param_3,param_4);
          uVar114 = extraout_g1_05;
          fp = pauVar4;
          uVar106 = ac;
        }
      }
      ac = uVar106;
      uVar112 = (uint)MANCOM_P1_00557c10;
      uVar1 = ac & 0xfffffff8;
      uVar106 = uVar1 | (uint)(uVar112 < g_player1.controller_type) << 2;
      ac = uVar106 | g_player1.controller_type < uVar112;
      pbVar113 = (byte *)0x0;
      in_g7 = (byte *)0x0;
      if (((byte)ac & 1 | (byte)(uVar106 >> 2) & 1) == 1) goto LAB_000154b8;
      fVar2 = (float10)DAT_00557a78;
      fVar3 = (float10)'\0';
      ac = uVar1;
      if (!NAN(fVar3) && !NAN(fVar2)) {
        ac = uVar1 | (uint)(fVar3 < fVar2) << 2;
        ac = ac | (uint)(fVar3 == fVar2) << 1;
      }
      if (((byte)(ac >> 1) & 1 | (byte)(ac >> 2) & 1) != 1) {
        DAT_00557a78 = 0;
      }
      uVar112 = (uint)MANCOM_P2_00557c11;
      uVar106 = ac & 0xfffffff8;
      ac = uVar106 | g_player2.controller_type < uVar112;
      in_g7 = pbVar113;
      if (((byte)ac & 1 | uVar112 < g_player2.controller_type) == 1) goto LAB_000154b8;
      iVar97 = auVar12._4_4_;
      fVar2 = (float10)DAT_00557a7c;
      fVar3 = (float10)'\0';
      ac = uVar106;
      if (!NAN(fVar3) && !NAN(fVar2)) {
        ac = uVar106 | (uint)(fVar3 < fVar2) << 2;
      }
      if ((fVar3 == fVar2 | (byte)(ac >> 2) & 1) != 1) {
        DAT_00557a7c = 0;
      }
      if (((g_player1.controller_type == MAN) &&
          ((_ButtonCoinTestServiceStart_0054fcd4 & 0x700) != 0)) ||
         ((uVar112 == 1 && ((_ButtonCoinTestServiceStart_0054fcd4 & 0x70000) != 0)))) {
        auVar12._16_4_ = 0;
      }
      auVar70._20_44_ = auVar12._20_44_;
      auVar70._0_16_ = auVar12._0_16_;
      auVar70._16_4_ = auVar12._16_4_ + -1;
      g13 = (undefined4 *)0xffffffff;
      ac = ac & 0xfffffff8 | (uint)(auVar70._16_4_ < -1) << 2 | (uint)(auVar70._16_4_ == -1) << 1 |
           (uint)(-1 < auVar70._16_4_);
    } while (((byte)ac & 1 | auVar70._16_4_ < -1) == 1);
    pauVar4 = (undefined1 (*) [64])(iVar97 + 0x3fU & 0xffffffc0);
    auVar72._12_52_ = auVar70._12_52_;
    auVar72._0_8_ = auVar12._0_8_;
    auVar72._8_4_ = 0x160e8;
    *fp = auVar72;
    auVar71._8_56_ = auVar72._8_56_;
    auVar71._4_4_ = pauVar4 + 1;
    auVar71._0_4_ = fp;
    FUN_00008250(2);
    ac = ac & 0xfffffff8 | (uint)(DAT_005555e0 != '\0') << 2 | (uint)(DAT_005555e0 == '\0') << 1;
    uVar114 = extraout_g1_06;
    fp = pauVar4;
    if (DAT_005555e0 == '\0') {
      auVar71._16_4_ = 0xfe;
      do {
        Camera_Angle = 0xfe;
        pauVar4 = (undefined1 (*) [64])(auVar71._4_4_ + 0x3fU & 0xffffffc0);
        auVar73._12_52_ = auVar71._12_52_;
        auVar73._0_8_ = auVar71._0_8_;
        auVar73._8_4_ = 0x16108;
        *fp = auVar73;
        auVar71._8_56_ = auVar73._8_56_;
        auVar71._4_4_ = pauVar4 + 1;
        auVar71._0_4_ = fp;
        FUN_00008250(1);
        ac = ac & 0xfffffff8 | (uint)(DAT_005555e0 != '\0') << 2 | (uint)(DAT_005555e0 == '\0') << 1
        ;
        uVar114 = extraout_g1_07;
        fp = pauVar4;
      } while (((byte)(ac >> 1) & 1) == 1);
    }
    auVar74._28_36_ = auVar71._28_36_;
    auVar74._0_24_ = auVar71._0_24_;
    auVar74._24_4_ = 0;
    in_g7 = &MANCOM_P1_00557c10;
    uVar112 = 0;
    while( true ) {
      auVar12 = auVar74;
      uVar106 = ac;
      uVar110 = (uint)*in_g7;
      ac = ac & 0xfffffff8 | (uint)(g_player1.unknown_56[uVar112 - 0x56] < uVar110);
      if (((byte)ac & 1 | uVar110 < g_player1.unknown_56[uVar112 - 0x56]) == 1) break;
      auVar74._28_36_ = auVar12._28_36_;
      auVar74._0_24_ = auVar12._0_24_;
      auVar74._24_4_ = auVar12._24_4_ + 1;
      uVar106 = uVar106 & 0xfffffff8 | (uint)(1 < auVar74._24_4_) << 2 |
                (uint)(auVar74._24_4_ == 1) << 1;
      ac = uVar106 | auVar74._24_4_ < 1;
      in_g7 = in_g7 + 1;
      uVar112 = uVar112 + 0x58;
      if (((byte)ac & 1 | (byte)(uVar106 >> 1) & 1) != 1) {
        uVar106 = (uint)g_player1.costume_id;
        uVar110 = (uint)g_player2.costume_id;
        uVar114 = 1;
        auVar75._20_44_ = auVar74._20_44_;
        auVar75._0_16_ = auVar12._0_16_;
        auVar75._16_4_ = PTR_ARRAY_00090c40;
        DAT_0054fcff = 1;
        DAT_00557c00 = g_player1.costume_id;
        DAT_00557c01 = g_player2.costume_id;
        iVar104 = (int)g13;
        do {
          g13 = (undefined4 *)iVar104;
          piVar103 = (int *)*auVar75._16_4_;
          auVar76._20_44_ = auVar75._20_44_;
          auVar76._0_16_ = auVar75._0_16_;
          auVar76._16_4_ = auVar75._16_4_ + 1;
          uVar1 = auVar75._4_4_ + 0x3f;
          pauVar4 = (undefined1 (*) [64])(uVar1 & 0xffffffc0);
          auVar78._12_52_ = auVar76._12_52_;
          auVar78._0_8_ = auVar75._0_8_;
          auVar78._8_4_ = 0x16188;
          *fp = auVar78;
          auVar77._8_56_ = auVar78._8_56_;
          auVar77._4_4_ = pauVar4 + 1;
          auVar77._0_4_ = fp;
          FUN_00008eb0(piVar103);
          auVar75._24_40_ = auVar77._24_40_;
          auVar75._0_20_ = auVar77._0_20_;
          auVar75._20_4_ = *auVar76._16_4_;
          g13 = (undefined4 *)0xffffffff;
          ac = ac & 0xfffffff8 | (uint)(auVar75._20_4_ < -1) << 2 |
               (uint)(auVar75._20_4_ == -1) << 1 | (uint)(-1 < auVar75._20_4_);
          iVar104 = -1;
          fp = pauVar4;
        } while (((byte)ac & 1 | auVar75._20_4_ < -1) == 1);
        auVar80._12_52_ = auVar75._12_52_;
        auVar80._0_8_ = auVar77._0_8_;
        auVar80._8_4_ = 0x161a4;
        *(undefined1 (*) [64])(uVar1 & 0xffffffc0) = auVar80;
        auVar79._8_56_ = auVar80._8_56_;
        auVar79._0_8_ = CONCAT44(pauVar4 + 1,uVar1) & 0xffffffffffffffc0;
        FUN_000143c0(0,0,param_3,param_4,uVar106,uVar110,uVar112,in_g7,in_g8,in_g9,uVar114,in_g11);
        auVar82._12_52_ = auVar79._12_52_;
        auVar82._0_8_ = auVar79._0_8_;
        auVar82._8_4_ = 0x161b0;
        pauVar4[1] = auVar82;
        auVar81._8_56_ = auVar82._8_56_;
        auVar81._4_4_ = pauVar4 + 2;
        auVar81._0_4_ = pauVar4 + 1;
        FUN_000143c0(1,0,param_3,param_4,uVar106,uVar110,uVar112,in_g7,in_g8,in_g9,uVar114,in_g11);
        auVar84._12_52_ = auVar81._12_52_;
        auVar84._0_8_ = auVar81._0_8_;
        auVar84._8_4_ = 0x161bc;
        pauVar4[2] = auVar84;
        auVar83._8_56_ = auVar84._8_56_;
        auVar83._4_4_ = pauVar4 + 3;
        auVar83._0_4_ = pauVar4 + 2;
        FUN_000085f0((undefined2 *)(auVar75._20_4_ + 0x1002001));
        auVar86._12_52_ = auVar83._12_52_;
        auVar86._0_8_ = auVar83._0_8_;
        auVar86._8_4_ = 0x161c8;
        pauVar4[3] = auVar86;
        auVar85._8_56_ = auVar86._8_56_;
        auVar85._4_4_ = pauVar4 + 4;
        auVar85._0_4_ = pauVar4 + 3;
        FUN_000085f0((undefined2 *)((int)&TMAPBASE_01000000 + auVar75._20_4_ + 1));
        auVar88._12_52_ = auVar85._12_52_;
        auVar88._0_8_ = auVar85._0_8_;
        auVar88._8_4_ = 0x161d4;
        pauVar4[4] = auVar88;
        auVar87._8_56_ = auVar88._8_56_;
        auVar87._4_4_ = pauVar4 + 5;
        auVar87._0_4_ = pauVar4 + 4;
        FUN_000085f0((undefined2 *)((int)&DAT_01004000 + auVar75._20_4_ + 1));
        auVar90._12_52_ = auVar87._12_52_;
        auVar90._0_8_ = auVar87._0_8_;
        auVar90._8_4_ = 0x161dc;
        pauVar4[5] = auVar90;
        auVar89._8_56_ = auVar90._8_56_;
        auVar89._4_4_ = pauVar4 + 6;
        auVar89._0_4_ = pauVar4 + 5;
        FUN_00008290(8);
        auVar92._12_52_ = auVar89._12_52_;
        auVar92._0_8_ = auVar89._0_8_;
        auVar92._8_4_ = 0x161e4;
        pauVar4[6] = auVar92;
        auVar91._8_56_ = auVar92._8_56_;
        auVar91._4_4_ = 0;
        auVar91._0_4_ = pauVar4 + 6;
        FUN_00008290(0xc);
        g12 = *(int **)(pauVar4[9] + 0x10);
        fp = (undefined1 (*) [64])auVar91._0_4_;
        return;
      }
    }
  } while( true );
}

