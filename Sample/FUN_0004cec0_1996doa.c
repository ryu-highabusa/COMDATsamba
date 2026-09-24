
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_0004cec0(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  DOA1_NAME_ID DVar6;
  undefined1 auVar7 [20];
  undefined4 unaff_pfp;
  undefined1 auVar8 [20];
  undefined1 auVar9 [24];
  undefined1 auVar15 [24];
  undefined1 auVar16 [28];
  undefined4 unaff_retaddr;
  undefined8 in_register_0000000c;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  undefined1 in_register_00000034 [12];
  undefined1 auVar17 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 auVar25 [64];
  undefined1 auVar10 [24];
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  undefined1 auVar33 [64];
  int iVar65;
  undefined1 auVar34 [64];
  undefined1 auVar36 [64];
  undefined1 auVar37 [64];
  undefined1 auVar11 [24];
  undefined1 auVar12 [24];
  undefined1 auVar40 [64];
  undefined1 auVar42 [64];
  undefined1 auVar43 [64];
  undefined1 auVar44 [64];
  undefined1 auVar45 [64];
  undefined1 auVar46 [64];
  int *piVar66;
  undefined4 *puVar69;
  undefined1 auVar47 [64];
  undefined1 auVar48 [64];
  undefined1 auVar13 [24];
  undefined1 auVar50 [64];
  undefined1 auVar51 [64];
  undefined1 auVar52 [64];
  undefined1 auVar53 [64];
  undefined1 auVar54 [64];
  undefined1 auVar14 [24];
  undefined1 auVar56 [64];
  undefined1 auVar57 [64];
  undefined1 auVar58 [64];
  undefined1 auVar59 [64];
  int iVar67;
  undefined4 *puVar68;
  undefined1 auVar60 [64];
  undefined1 auVar61 [64];
  undefined1 auVar63 [64];
  undefined1 auVar64 [64];
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  dword dVar74;
  int iVar75;
  int iVar76;
  undefined1 auStackX_0 [1000000];
  undefined1 auVar24 [64];
  undefined1 auVar30 [64];
  undefined1 auVar35 [64];
  undefined1 auVar38 [64];
  undefined1 auVar18 [64];
  undefined1 auVar26 [64];
  undefined1 auVar39 [64];
  undefined1 auVar41 [64];
  undefined1 auVar49 [64];
  undefined1 auVar55 [64];
  undefined1 auVar62 [64];
  
  uVar3 = ac;
  auVar7._4_4_ = auStackX_0;
  auVar7._0_4_ = unaff_pfp;
  auVar7._8_4_ = unaff_retaddr;
  auVar7._12_8_ = in_register_0000000c;
  auVar17._20_4_ = unaff_r5;
  auVar17._0_20_ = auVar7;
  auVar17._24_4_ = unaff_r6;
  auVar17._28_4_ = unaff_r7;
  auVar17._32_4_ = unaff_r8;
  auVar17._36_4_ = unaff_r9;
  auVar17._40_4_ = unaff_r10;
  auVar17._44_4_ = unaff_r11;
  auVar17._48_4_ = unaff_r12;
  auVar17._52_12_ = in_register_00000034;
  auVar34._20_44_ = auVar17._20_44_;
  auVar8._0_16_ = auVar7._0_16_;
  auVar8._16_4_ = param_1;
  auVar34._0_20_ = auVar8;
  auVar18._24_40_ = auVar17._24_40_;
  if (DAT_00589dda == '\x01') {
    auVar9._20_4_ = 0;
    auVar9._0_20_ = auVar8;
    auVar18._0_24_ = auVar9;
    auVar19._40_24_ = auVar17._40_24_;
    auVar19._0_36_ = auVar18._0_36_;
    auVar19._36_4_ = param_1 * 0x30;
    auVar20._36_28_ = auVar19._36_28_;
    auVar20._0_32_ = auVar18._0_32_;
    auVar20._32_4_ = param_1 * 0x60;
    auVar21._32_32_ = auVar20._32_32_;
    auVar21._0_28_ = auVar18._0_28_;
    auVar21._28_4_ = 0;
    auVar22._28_36_ = auVar21._28_36_;
    auVar22._24_4_ = 0;
    auVar22._0_24_ = auVar9;
    do {
      auVar23 = auVar22;
      iVar67 = auVar23._28_4_;
      iVar65 = auVar23._24_4_;
      iVar75 = auVar23._20_4_;
      iVar76 = param_1 * 0x10 + iVar75 * 4;
      bVar5 = (&DAT_00565fc0)[iVar76];
      ac = uVar3 & 0xfffffff8 | (uint)(1 < bVar5) << 2 | (uint)(bVar5 == 1) << 1 |
           (uint)(bVar5 == 0);
      auVar24._0_8_ = auVar23._0_8_;
      auVar24._12_52_ = auVar23._12_52_;
      if (((byte)ac & 1 | 1 < bVar5) == 1) {
        ac = uVar3 & 0xfffffff8 | (uint)(3 < bVar5) << 2 | (uint)(bVar5 == 3) << 1 |
             (uint)(bVar5 < 3);
        if (((byte)ac & 1 | 3 < bVar5) != 1) {
          uVar70 = *(undefined4 *)(&DAT_005660a0 + iVar76);
          uVar3 = auVar23._4_4_ + 0x3fU & 0xffffffc0;
          auVar25._8_4_ = 0x4cf50;
          auVar25._0_8_ = auVar24._0_8_;
          auVar25._12_52_ = auVar24._12_52_;
          *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar25;
          auVar23._8_56_ = auVar25._8_56_;
          auVar23._4_4_ = uVar3 + 0x40;
          auVar23._0_4_ = fp;
          FUN_0004d3e0(param_1,(int *)(&DAT_00565fe0 + auVar20._32_4_ + iVar67),
                       (int *)((int)(&DAT_00565fe0 + auVar20._32_4_ + iVar67) + 0xc),uVar70);
          fp = uVar3;
        }
      }
      else {
        puVar68 = (undefined4 *)(&DAT_005660c0 + auVar19._36_4_ + iVar65);
        uVar70 = *puVar68;
        uVar71 = puVar68[1];
        uVar72 = puVar68[2];
        uVar73 = *(undefined4 *)(&DAT_00566120 + iVar76);
        uVar3 = auVar23._4_4_ + 0x3fU & 0xffffffc0;
        auVar24._8_4_ = 0x4cf2c;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar24;
        auVar23._8_56_ = auVar24._8_56_;
        auVar23._4_4_ = uVar3 + 0x40;
        auVar23._0_4_ = fp;
        FUN_0004d2f0(param_1,uVar70,uVar71,uVar72,uVar73,1);
        fp = uVar3;
      }
      auVar26._24_40_ = auVar23._24_40_;
      auVar10._0_20_ = auVar23._0_20_;
      auVar10._20_4_ = iVar75 + 1;
      auVar26._0_24_ = auVar10;
      auVar27._32_32_ = auVar23._32_32_;
      auVar27._0_28_ = auVar26._0_28_;
      auVar27._28_4_ = iVar67 + 0x18;
      auVar22._28_36_ = auVar27._28_36_;
      auVar16._24_4_ = iVar65 + 0xc;
      auVar16._0_24_ = auVar10;
      auVar22._0_28_ = auVar16;
      uVar3 = ac;
    } while (auVar10._20_4_ < 4);
    auVar28._0_36_ = auVar22._0_36_;
    auVar28._36_4_ = param_1 * 0x3c;
    auVar28._44_20_ = auVar23._44_20_;
    auVar28._40_4_ = param_1 * 0xb4;
    auVar29._32_32_ = auVar28._32_32_;
    auVar29._28_4_ = &DAT_00550340 + auVar28._36_4_;
    auVar29._0_28_ = auVar16;
    g13 = 0xffffffff;
    dVar74 = 0;
    if ((&DAT_00550144)[param_1] == -1) {
      dVar74 = DWORD_000c5730;
    }
    bVar5 = (&DAT_00554cb0)[dVar74 * 4 + auVar28._36_4_];
    ac = ac & 0xfffffff8 | (uint)(1 < bVar5) << 2 | (uint)(bVar5 == 1) << 1 | (uint)(bVar5 == 0);
    if (((byte)ac & 1 | 1 < bVar5) != 1) {
      uVar70 = (&DAT_005501d0)[param_1 * 0x2d];
      uVar71 = (&DAT_005501d4)[param_1 * 0x2d];
      uVar72 = (&DAT_005501d8)[param_1 * 0x2d];
      uVar73 = *(undefined4 *)(&DAT_00550340 + auVar28._36_4_);
      uVar3 = auVar23._4_4_ + 0x3fU & 0xffffffc0;
      auVar30._12_52_ = auVar29._12_52_;
      auVar30._0_8_ = auVar23._0_8_;
      auVar30._8_4_ = 0x4cfdc;
      *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar30;
      auVar29._8_56_ = auVar30._8_56_;
      auVar29._4_4_ = uVar3 + 0x40;
      auVar29._0_4_ = fp;
      FUN_0004d2f0(param_1,uVar70,uVar71,uVar72,uVar73,1);
      fp = uVar3;
    }
    auVar31._28_36_ = auVar29._28_36_;
    auVar31._0_24_ = auVar29._0_24_;
    auVar31._24_4_ = 0xc;
    auVar32._24_40_ = auVar31._24_40_;
    auVar32._0_20_ = auVar29._0_20_;
    auVar32._20_4_ = 1;
    auVar33._36_28_ = auVar29._36_28_;
    auVar33._0_32_ = auVar32._0_32_;
    auVar33._32_4_ = &DAT_00550344 + auVar28._36_4_;
    auVar34._32_32_ = auVar33._32_32_;
    auVar34._0_28_ = auVar32._0_28_;
    auVar34._28_4_ = (int *)&DWORD_000c5734;
    do {
      puVar68 = auVar34._32_4_;
      piVar66 = auVar34._28_4_;
      auVar36._24_4_ = auVar34._24_4_;
      iVar65 = auVar34._20_4_;
      g13 = 0xffffffff;
      iVar75 = iVar65;
      if ((&DAT_00550144)[param_1] == -1) {
        iVar75 = *piVar66;
      }
      bVar5 = (&DAT_00554cb0)[iVar75 * 4 + auVar28._36_4_];
      ac = ac & 0xfffffff8 | (uint)(1 < bVar5) << 2 | (uint)(bVar5 == 1) << 1 | (uint)(bVar5 == 0);
      if (((byte)ac & 1 | 1 < bVar5) != 1) {
        puVar69 = (undefined4 *)((int)&DAT_005501d0 + auVar28._40_4_ + auVar36._24_4_);
        uVar70 = *puVar69;
        uVar71 = puVar69[1];
        uVar72 = puVar69[2];
        uVar73 = *puVar68;
        uVar3 = auVar34._4_4_ + 0x3fU & 0xffffffc0;
        auVar35._12_52_ = auVar34._12_52_;
        auVar35._0_8_ = auVar34._0_8_;
        auVar35._8_4_ = 0x4d03c;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar35;
        auVar34._8_56_ = auVar35._8_56_;
        auVar34._4_4_ = uVar3 + 0x40;
        auVar34._0_4_ = fp;
        FUN_0004d2f0(param_1,uVar70,uVar71,uVar72,uVar73,1);
        fp = uVar3;
      }
      auVar36._28_36_ = auVar34._28_36_;
      auVar36._0_24_ = auVar34._0_24_;
      g13 = 0xffffffff;
      iVar75 = iVar65 + 1;
      if ((&DAT_00550144)[param_1] == -1) {
        iVar75 = piVar66[1];
      }
      bVar5 = (&DAT_00554cb0)[iVar75 * 4 + auVar28._36_4_];
      ac = ac & 0xfffffff8 | (uint)(1 < bVar5) << 2 | (uint)(bVar5 == 1) << 1 | (uint)(bVar5 == 0);
      auVar37 = auVar36;
      if (((byte)ac & 1 | 1 < bVar5) != 1) {
        puVar69 = (undefined4 *)(&DAT_005501dc + auVar28._40_4_ + auVar36._24_4_);
        uVar70 = *puVar69;
        uVar71 = puVar69[1];
        uVar72 = puVar69[2];
        uVar73 = puVar68[1];
        uVar3 = auVar34._4_4_ + 0x3fU & 0xffffffc0;
        auVar38._12_52_ = auVar36._12_52_;
        auVar38._0_8_ = auVar34._0_8_;
        auVar38._8_4_ = 0x4d08c;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar38;
        auVar37._8_56_ = auVar38._8_56_;
        auVar37._4_4_ = uVar3 + 0x40;
        auVar37._0_4_ = fp;
        FUN_0004d2f0(param_1,uVar70,uVar71,uVar72,uVar73,1);
        fp = uVar3;
      }
      auVar39._24_40_ = auVar37._24_40_;
      auVar11._0_20_ = auVar37._0_20_;
      auVar11._20_4_ = iVar65 + 2;
      auVar39._0_24_ = auVar11;
      uVar3 = ac & 0xfffffff8 | (uint)(auVar11._20_4_ == 0xe) << 1;
      ac = uVar3 | auVar11._20_4_ < 0xe;
      auVar40._36_28_ = auVar37._36_28_;
      auVar40._0_32_ = auVar39._0_32_;
      auVar40._32_4_ = puVar68 + 2;
      auVar34._24_4_ = (int *)(auVar36._24_4_ + 0x18);
      auVar34._0_24_ = auVar11;
      auVar34._32_32_ = auVar40._32_32_;
      auVar34._28_4_ = piVar66 + 2;
    } while (((byte)ac & 1 | (byte)(uVar3 >> 1) & 1) == 1);
  }
  else {
    ac = ac & 0xfffffff8 | (uint)(DAT_00589dda < '\x02');
    if ((((byte)ac & 1 | '\x02' < DAT_00589dda) != 1) &&
       (ac = uVar3 & 0xfffffff8 | (uint)((char)g_motion_debug_render_mode < '\0'),
       ((byte)ac & 1 | '\0' < (char)g_motion_debug_render_mode) != 1)) {
      auVar12._20_4_ = 0;
      auVar12._0_20_ = auVar8;
      auVar41._24_40_ = auVar18._24_40_;
      auVar41._0_24_ = auVar12;
      auVar42._0_44_ = auVar41._0_44_;
      auVar42._44_4_ = param_1 * 0x3c;
      auVar42._48_4_ = param_1 * 0xb4;
      auVar42._52_12_ = in_register_00000034;
      auVar43._44_20_ = auVar42._44_20_;
      auVar43._0_40_ = auVar41._0_40_;
      auVar43._40_4_ = &DAT_005528e0 + auVar42._44_4_;
      auVar44._40_24_ = auVar43._40_24_;
      auVar44._0_36_ = auVar41._0_36_;
      auVar44._36_4_ = 0;
      auVar45._36_28_ = auVar44._36_28_;
      auVar45._0_32_ = auVar41._0_32_;
      auVar45._32_4_ = &DAT_00550530 + auVar42._44_4_;
      auVar46._32_32_ = auVar45._32_32_;
      auVar46._0_28_ = auVar41._0_28_;
      auVar46._28_4_ = 0;
      auVar34._28_36_ = auVar46._28_36_;
      auVar34._24_4_ = (int *)&DWORD_000c5730;
      auVar34._0_24_ = auVar12;
      do {
        uVar3 = ac;
        puVar69 = auVar34._40_4_;
        iVar76 = auVar34._36_4_;
        puVar68 = auVar34._32_4_;
        iVar67 = auVar34._28_4_;
        piVar66 = auVar34._24_4_;
        iVar65 = auVar34._20_4_;
        g13 = 0xffffffff;
        iVar75 = iVar65;
        if ((&DAT_00550144)[param_1] == -1) {
          iVar75 = *piVar66;
        }
        bVar5 = (&DAT_00554c30)[iVar75 * 4 + auVar42._44_4_];
        ac = ac & 0xfffffff8 | (uint)(1 < bVar5) << 2 | (uint)(bVar5 == 1) << 1 | (uint)(bVar5 == 0)
        ;
        auVar47._0_8_ = auVar34._0_8_;
        auVar47._12_52_ = auVar34._12_52_;
        if (((byte)ac & 1 | 1 < bVar5) == 1) {
          ac = uVar3 & 0xfffffff8 | (uint)(3 < bVar5) << 2 | (uint)(bVar5 == 3) << 1 |
               (uint)(bVar5 < 3);
          if (((byte)ac & 1 | 3 < bVar5) != 1) {
            uVar70 = *puVar69;
            uVar3 = auVar34._4_4_ + 0x3fU & 0xffffffc0;
            auVar48._8_4_ = 0x4d180;
            auVar48._0_8_ = auVar47._0_8_;
            auVar48._12_52_ = auVar47._12_52_;
            *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar48;
            auVar34._8_56_ = auVar48._8_56_;
            auVar34._4_4_ = uVar3 + 0x40;
            auVar34._0_4_ = fp;
            FUN_0004d3e0(param_1,(int *)(&DAT_00552610 + param_1 * 0x168 + iVar76),
                         (int *)((int)(&DAT_00552610 + param_1 * 0x168 + iVar76) + 0xc),uVar70);
            fp = uVar3;
          }
        }
        else {
          puVar2 = (undefined4 *)(&DAT_005503c0 + auVar42._48_4_ + iVar67);
          uVar70 = *puVar2;
          uVar71 = puVar2[1];
          uVar72 = puVar2[2];
          uVar73 = *puVar68;
          uVar3 = auVar34._4_4_ + 0x3fU & 0xffffffc0;
          auVar47._8_4_ = 0x4d148;
          *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar47;
          auVar34._8_56_ = auVar47._8_56_;
          auVar34._4_4_ = uVar3 + 0x40;
          auVar34._0_4_ = fp;
          FUN_0004d2f0(param_1,uVar70,uVar71,uVar72,uVar73,1);
          fp = uVar3;
        }
        auVar49._24_40_ = auVar34._24_40_;
        auVar13._0_20_ = auVar34._0_20_;
        auVar13._20_4_ = iVar65 + 1;
        auVar49._0_24_ = auVar13;
        uVar3 = ac & 0xfffffff8 | (uint)(auVar13._20_4_ == 0xe) << 1;
        ac = uVar3 | auVar13._20_4_ < 0xe;
        auVar50._44_20_ = auVar34._44_20_;
        auVar50._0_40_ = auVar49._0_40_;
        auVar50._40_4_ = puVar69 + 1;
        auVar51._40_24_ = auVar50._40_24_;
        auVar51._0_36_ = auVar49._0_36_;
        auVar51._36_4_ = iVar76 + 0x18;
        auVar52._36_28_ = auVar51._36_28_;
        auVar52._0_32_ = auVar49._0_32_;
        auVar52._32_4_ = puVar68 + 1;
        auVar53._32_32_ = auVar52._32_32_;
        auVar53._0_28_ = auVar49._0_28_;
        auVar53._28_4_ = iVar67 + 0xc;
        auVar34._28_36_ = auVar53._28_36_;
        auVar34._24_4_ = piVar66 + 1;
        auVar34._0_24_ = auVar13;
      } while (((byte)ac & 1 | (byte)(uVar3 >> 1) & 1) == 1);
    }
  }
  uVar3 = ac;
  if (_DAT_00589ddb == 1) {
    uVar1 = ac & 0xfffffff8 | (uint)(0 < param_1) << 2 | (uint)(param_1 == 0) << 1;
    ac = uVar1 | param_1 < 0;
    if (((byte)(uVar1 >> 1) & 1) != 1) {
      DVar6 = (&g_player1)[param_1].character_id;
      ac = uVar3 & 0xfffffff8 | (uint)(NAME_KASUMI < DVar6) << 2 | (uint)(DVar6 == NAME_KASUMI) << 1
           | (uint)(DVar6 < NAME_KASUMI);
      if (((byte)ac & 1 | NAME_KASUMI < DVar6) != 1) {
        uVar70 = *(undefined4 *)(&DAT_005528e8 + param_1 * 0x3c);
        auVar54._12_52_ = auVar34._12_52_;
        auVar54._0_8_ = auVar34._0_8_;
        auVar54._8_4_ = 0x4d1f8;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar54;
        auVar34._8_56_ = auVar54._8_56_;
        auVar34._4_4_ = 0;
        auVar34._0_4_ = fp;
        FUN_0004d3e0(param_1,(int *)(&DAT_00552640 + param_1 * 0x168),
                     (int *)(param_1 * 0x168 + 0x55264c),uVar70);
      }
    }
  }
  else {
    bVar5 = (&g_player1)[param_1].attack_state;
    uVar3 = ac & 0xfffffff8 | (uint)(1 < bVar5) << 2 | (uint)(bVar5 == 1) << 1;
    ac = uVar3 | bVar5 == 0;
    if (((byte)(uVar3 >> 1) & 1) == 1) {
      auVar55._24_40_ = auVar34._24_40_;
      auVar14._0_20_ = auVar34._0_20_;
      auVar14._20_4_ = 0;
      auVar55._0_24_ = auVar14;
      auVar56._44_20_ = auVar34._44_20_;
      auVar56._0_40_ = auVar55._0_40_;
      auVar56._40_4_ = param_1 * 0x3c;
      auVar57._40_24_ = auVar56._40_24_;
      auVar57._0_36_ = auVar55._0_36_;
      auVar57._36_4_ = param_1 * 0xb4;
      auVar58._32_32_ = auVar57._32_32_;
      auVar58._0_28_ = auVar55._0_28_;
      auVar58._28_4_ = &DAT_00552ad0 + auVar56._40_4_;
      auVar59._28_36_ = auVar58._28_36_;
      auVar59._24_4_ = 0;
      auVar59._0_24_ = auVar14;
      auVar34._36_28_ = auVar57._36_28_;
      auVar34._0_32_ = auVar59._0_32_;
      auVar34._32_4_ = (int *)&DWORD_000c5730;
      do {
        piVar66 = auVar34._32_4_;
        puVar68 = auVar34._28_4_;
        iVar67 = auVar34._24_4_;
        iVar65 = auVar34._20_4_;
        g13 = 0xffffffff;
        iVar75 = iVar65;
        if ((&DAT_00550144)[param_1] == -1) {
          iVar75 = *piVar66;
        }
        bVar5 = (&DAT_00554bb0)[iVar75 * 4 + auVar56._40_4_];
        ac = ac & 0xfffffff8 | (uint)(1 < bVar5) << 2 | (uint)(bVar5 == 1) << 1 | (uint)(bVar5 == 0)
        ;
        if (((byte)ac & 1 | 1 < bVar5) != 1) {
          puVar69 = (undefined4 *)(&DAT_00552960 + auVar57._36_4_ + iVar67);
          uVar70 = *puVar69;
          uVar71 = puVar69[1];
          uVar72 = puVar69[2];
          uVar73 = *puVar68;
          uVar1 = auVar34._4_4_ + 0x3f;
          uVar4 = uVar1 & 0xffffffc0;
          auVar60._12_52_ = auVar34._12_52_;
          auVar60._0_8_ = auVar34._0_8_;
          auVar60._8_4_ = 0x4d29c;
          *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar60;
          auVar34._8_56_ = auVar60._8_56_;
          auVar34._4_4_ = uVar4 + 0x40;
          auVar34._0_4_ = fp;
          FUN_0004d2f0(param_1,uVar70,uVar71,uVar72,uVar73,0);
          iVar75 = (&DAT_00565e40)[param_1];
          uVar3 = ac & 0xfffffff8 | (uint)(0 < iVar75) << 2 | (uint)(iVar75 == 0) << 1;
          ac = uVar3 | iVar75 < 0;
          puVar69 = (undefined4 *)(&DAT_00565e50 + auVar57._36_4_ + iVar67);
          fp = uVar4;
          if (((byte)(uVar3 >> 1) & 1) != 1) {
            uVar70 = *puVar69;
            uVar71 = puVar69[1];
            uVar72 = puVar69[2];
            uVar73 = *puVar68;
            fp = uVar4 + 0x40;
            auVar61._12_52_ = auVar34._12_52_;
            auVar61._0_8_ = auVar34._0_8_;
            auVar61._8_4_ = 0x4d2d0;
            *(undefined1 (*) [64])(uVar1 & 0xffffffc0) = auVar61;
            auVar34._8_56_ = auVar61._8_56_;
            auVar34._0_8_ = CONCAT44(uVar4 + 0x80,uVar1) & 0xffffffffffffffc0;
            FUN_0004d2f0(param_1,uVar70,uVar71,uVar72,uVar73,1);
          }
        }
        auVar62._24_40_ = auVar34._24_40_;
        auVar15._0_20_ = auVar34._0_20_;
        auVar15._20_4_ = iVar65 + 1;
        auVar62._0_24_ = auVar15;
        uVar3 = ac & 0xfffffff8 | (uint)(0xe < auVar15._20_4_) << 2 |
                (uint)(auVar15._20_4_ == 0xe) << 1;
        ac = uVar3 | auVar15._20_4_ < 0xe;
        auVar63._32_32_ = auVar34._32_32_;
        auVar63._0_28_ = auVar62._0_28_;
        auVar63._28_4_ = puVar68 + 1;
        auVar64._28_36_ = auVar63._28_36_;
        auVar64._24_4_ = iVar67 + 0xc;
        auVar64._0_24_ = auVar15;
        auVar34._0_32_ = auVar64._0_32_;
        auVar34._32_4_ = piVar66 + 1;
      } while (((byte)ac & 1 | (byte)(uVar3 >> 1) & 1) == 1);
    }
  }
  fp = auVar34._0_4_;
  return 0;
}

