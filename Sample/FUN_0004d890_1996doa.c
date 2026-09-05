
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0004d890(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined1 auVar4 [64];
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  undefined4 unaff_pfp;
  undefined1 (*pauVar26) [64];
  undefined1 (*pauVar27) [64];
  undefined1 (*pauVar28) [64];
  undefined1 (*pauVar29) [64];
  undefined1 (*pauVar30) [64];
  undefined1 (*pauVar31) [64];
  undefined1 (*pauVar32) [64];
  undefined4 unaff_r3;
  undefined1 in_register_00000018 [40];
  undefined4 extraout_g1;
  undefined4 extraout_g1_00;
  undefined4 extraout_g1_01;
  int iVar33;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [999936];
  
  auVar4._4_4_ = auStackX_0;
  auVar4._0_4_ = unaff_pfp;
  auVar4._8_4_ = 0x4d8b4;
  auVar4._12_4_ = unaff_r3;
  auVar4._16_4_ = 0xffff;
  auVar4._20_4_ = &DAT_0056adea;
  auVar4._24_40_ = in_register_00000018;
  _DAT_00589ddc = param_3;
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar4;
  pauVar29 = (undefined1 (*) [64])auStack_40;
  FUN_00055d80();
  pauVar26 = fp;
  fp = (undefined1 (*) [64])register0x00000004;
  do {
    auVar5._4_4_ = pauVar29;
    auVar5._0_4_ = pauVar26;
    auVar5._8_4_ = 0x4d8bc;
    auVar5._12_4_ = unaff_r3;
    auVar5._16_4_ = 0xffff;
    auVar5._20_4_ = &DAT_0056adea;
    auVar5._24_40_ = in_register_00000018;
    *fp = auVar5;
    pauVar30 = pauVar29 + 1;
    FUN_00008250(1);
    iVar33 = (int)(char)textdisplay_WHY____0056ac70;
    ac = ac & 0xfffffff8 | (uint)(1 < iVar33) << 2 | (uint)(iVar33 == 1) << 1 | (uint)(iVar33 < 1);
    pauVar26 = fp;
    pauVar27 = pauVar29;
    if (((byte)ac & 1 | 1 < iVar33) != 1) {
      pauVar26 = pauVar29 + 1;
      auVar6._4_4_ = pauVar29 + 1;
      auVar6._0_4_ = fp;
      auVar6._8_4_ = 0x4d8d4;
      auVar6._12_4_ = unaff_r3;
      auVar6._16_4_ = 0xffff;
      auVar6._20_4_ = &DAT_0056adea;
      auVar6._24_40_ = in_register_00000018;
      *pauVar29 = auVar6;
      FUN_00008870(2,10);
      auVar7._4_4_ = pauVar26;
      auVar7._0_4_ = pauVar29;
      auVar7._8_4_ = 0x4d8e0;
      auVar7._12_4_ = unaff_r3;
      auVar7._16_4_ = 0xffff;
      auVar7._20_4_ = &DAT_0056adea;
      auVar7._24_40_ = in_register_00000018;
      pauVar29[1] = auVar7;
      pauVar30 = pauVar29 + 3;
      FUN_0008e740(s_WHY____0004d880,extraout_g1,param_3,param_4,iVar33,param_6,param_7,param_8,
                   param_9,param_10,param_11,param_12);
      pauVar27 = pauVar29 + 2;
    }
    fp = pauVar27;
    uVar2 = ac;
    ac = ac & 0xfffffff8 | (uint)('\0' < (char)textdisplay_WHY____0056ac70) << 2 |
         (uint)((char)textdisplay_WHY____0056ac70 == '\0') << 1 |
         (uint)((char)textdisplay_WHY____0056ac70 < '\0');
    if (((byte)ac & 1 | '\0' < (char)textdisplay_WHY____0056ac70) == 1) {
      auVar12._4_4_ = pauVar30;
      auVar12._0_4_ = pauVar26;
      auVar12._8_4_ = 0x4d988;
      auVar12._12_4_ = unaff_r3;
      auVar12._16_4_ = 0xffff;
      auVar12._20_4_ = &DAT_0056adea;
      auVar12._24_40_ = in_register_00000018;
      *fp = auVar12;
      pauVar27 = pauVar30 + 1;
      FUN_00055e30();
      pauVar26 = fp;
      fp = pauVar30;
LAB_0004d988:
      auVar13._4_4_ = pauVar27;
      auVar13._0_4_ = pauVar26;
      auVar13._8_4_ = 0x4d98c;
      auVar13._12_4_ = unaff_r3;
      auVar13._16_4_ = 0xffff;
      auVar13._20_4_ = &DAT_0056adea;
      auVar13._24_40_ = in_register_00000018;
      *fp = auVar13;
      FUN_0004dfd0();
      uVar1 = ac;
      uVar2 = ac & 0xfffffff8 | (uint)(3 < DAT_0054fcfd) << 2 | (uint)(DAT_0054fcfd == 3) << 1;
      ac = uVar2 | DAT_0054fcfd < 3;
      if (((byte)(uVar2 >> 1) & 1) == 1) {
        auVar20._4_4_ = pauVar27;
        auVar20._0_4_ = fp;
        auVar20._8_4_ = 0x4da10;
        auVar20._12_4_ = unaff_r3;
        auVar20._16_4_ = 0xffff;
        auVar20._20_4_ = &DAT_0056adea;
        auVar20._24_40_ = in_register_00000018;
        *pauVar27 = auVar20;
        FUN_0004b200(0);
        pauVar26 = pauVar27 + 2;
        auVar21._4_4_ = pauVar27 + 1;
        auVar21._0_4_ = pauVar27;
        auVar21._8_4_ = 0x4da18;
        auVar21._12_4_ = unaff_r3;
        auVar21._16_4_ = 0xffff;
        auVar21._20_4_ = &DAT_0056adea;
        auVar21._24_40_ = in_register_00000018;
        pauVar27[1] = auVar21;
        FUN_0004b200(1);
        fp = pauVar27 + 3;
        auVar22._4_4_ = pauVar26;
        auVar22._0_4_ = pauVar27 + 1;
        auVar22._8_4_ = 0x4da1c;
        auVar22._12_4_ = unaff_r3;
        auVar22._16_4_ = 0xffff;
        auVar22._20_4_ = &DAT_0056adea;
        auVar22._24_40_ = in_register_00000018;
        pauVar27[2] = auVar22;
        pauVar28 = pauVar27 + 4;
        FUN_00052b80();
        param_3 = 1;
        DAT_00589da0 = 1;
        DAT_00589da2 = ReplayLength_____005555ec;
      }
      else {
        ac = uVar1 & 0xfffffff8 | (uint)('\0' < (char)textdisplay_WHY____0056ac70) << 2 |
             (uint)((char)textdisplay_WHY____0056ac70 == '\0') << 1 |
             (uint)((char)textdisplay_WHY____0056ac70 < '\0');
        if (((byte)ac & 1 | '\0' < (char)textdisplay_WHY____0056ac70) == 1) {
          auVar19._4_4_ = pauVar27;
          auVar19._0_4_ = fp;
          auVar19._8_4_ = 0x4d9dc;
          auVar19._12_4_ = unaff_r3;
          auVar19._16_4_ = 0xffff;
          auVar19._20_4_ = &DAT_0056adea;
          auVar19._24_40_ = in_register_00000018;
          *pauVar27 = auVar19;
          pauVar28 = pauVar27 + 2;
          FUN_00041b00(0,extraout_g1_00,param_3,param_4);
          fp = pauVar27 + 1;
        }
        else {
          pauVar26 = pauVar27 + 1;
          auVar14._4_4_ = pauVar27;
          auVar14._0_4_ = fp;
          auVar14._8_4_ = 0x4d9ac;
          auVar14._12_4_ = unaff_r3;
          auVar14._16_4_ = 0xffff;
          auVar14._20_4_ = &DAT_0056adea;
          auVar14._24_40_ = in_register_00000018;
          *pauVar27 = auVar14;
          FUN_00041b00(0,extraout_g1_00,param_3,param_4);
          pauVar28 = pauVar27 + 2;
          auVar15._4_4_ = pauVar26;
          auVar15._0_4_ = pauVar27;
          auVar15._8_4_ = 0x4d9b4;
          auVar15._12_4_ = unaff_r3;
          auVar15._16_4_ = 0xffff;
          auVar15._20_4_ = &DAT_0056adea;
          auVar15._24_40_ = in_register_00000018;
          pauVar27[1] = auVar15;
          FUN_00041b00(1,extraout_g1_01,param_3,param_4);
          ac = ac & 0xfffffff8 | (uint)(DAT_0054fcfe != '\0') << 2 |
               (uint)(DAT_0054fcfe == '\0') << 1;
          if (DAT_0054fcfe != '\0') {
            auVar17._4_4_ = pauVar28;
            auVar17._0_4_ = pauVar26;
            auVar17._8_4_ = 0x4d9cc;
            auVar17._12_4_ = unaff_r3;
            auVar17._16_4_ = 0xffff;
            auVar17._20_4_ = &DAT_0056adea;
            auVar17._24_40_ = in_register_00000018;
            pauVar27[2] = auVar17;
            FUN_00052b80();
          }
          else {
            auVar16._4_4_ = pauVar28;
            auVar16._0_4_ = pauVar26;
            auVar16._8_4_ = 0x4d9c4;
            auVar16._12_4_ = unaff_r3;
            auVar16._16_4_ = 0xffff;
            auVar16._20_4_ = &DAT_0056adea;
            auVar16._24_40_ = in_register_00000018;
            pauVar27[2] = auVar16;
            FUN_00051fb0();
          }
          fp = pauVar27 + 3;
          pauVar31 = pauVar27 + 4;
          auVar18._4_4_ = pauVar27 + 4;
          auVar18._0_4_ = pauVar28;
          auVar18._8_4_ = 0x4d9d0;
          auVar18._12_4_ = unaff_r3;
          auVar18._16_4_ = 0xffff;
          auVar18._20_4_ = &DAT_0056adea;
          auVar18._24_40_ = in_register_00000018;
          *fp = auVar18;
          pauVar28 = pauVar27 + 5;
          FUN_00052b10();
          pauVar27 = fp;
          fp = pauVar31;
        }
        param_3 = 299;
        param_6 = DAT_0056adea + 1;
        uVar1 = param_6 & 0xffff;
        uVar2 = ac & 0xfffffff8 | (uint)(uVar1 < 299) << 2 | (uint)(uVar1 == 299) << 1;
        ac = uVar2 | 299 < uVar1;
        if (((byte)(uVar2 >> 1) & 1 | uVar1 < 299) != 1) {
          param_6 = 0;
        }
        DAT_0056adea = (ushort)param_6;
        DAT_00589da0 = g14;
        pauVar26 = pauVar27;
      }
      auVar23._4_4_ = pauVar28;
      auVar23._0_4_ = pauVar26;
      auVar23._8_4_ = 0x4da40;
      auVar23._12_4_ = unaff_r3;
      auVar23._16_4_ = 0xffff;
      auVar23._20_4_ = &DAT_0056adea;
      auVar23._24_40_ = in_register_00000018;
      *fp = auVar23;
      FUN_0004ff60(0);
      auVar24._4_4_ = pauVar28;
      auVar24._0_4_ = fp;
      auVar24._8_4_ = 0x4da48;
      auVar24._12_4_ = unaff_r3;
      auVar24._16_4_ = 0xffff;
      auVar24._20_4_ = &DAT_0056adea;
      auVar24._24_40_ = in_register_00000018;
      *pauVar28 = auVar24;
      pauVar32 = pauVar28 + 2;
      FUN_0004ff60(1);
      fp = pauVar28 + 1;
    }
    else {
      pauVar27 = pauVar30;
      if (DAT_005555dd != '\0') {
        ac = uVar2 & 0xfffffff8;
        if ((DAT_0054fcfd == 0) &&
           (uVar2 = uVar2 & 0xfffffff8 | (uint)('\0' < DAT_00589de0) << 2 |
                    (uint)(DAT_00589de0 == '\0') << 1, ac = uVar2 | DAT_00589de0 < '\0',
           ((byte)(uVar2 >> 1) & 1) != 1)) {
          auVar10._4_4_ = pauVar30;
          auVar10._0_4_ = pauVar26;
          auVar10._8_4_ = 0x4d954;
          auVar10._12_4_ = unaff_r3;
          auVar10._16_4_ = 0xffff;
          auVar10._20_4_ = &DAT_0056adea;
          auVar10._24_40_ = in_register_00000018;
          *fp = auVar10;
          FUN_00055940();
          pauVar26 = fp;
          pauVar27 = pauVar30 + 1;
          fp = pauVar30;
        }
        else {
          ac = ac & 0xfffffff8 | (uint)(2 < GameMode_0054fcb3) << 2 |
               (uint)(GameMode_0054fcb3 == 2) << 1 | (uint)(GameMode_0054fcb3 < 2);
          if (((byte)ac & 1 | 2 < GameMode_0054fcb3) != 1) {
            auVar11._4_4_ = pauVar30;
            auVar11._0_4_ = pauVar26;
            auVar11._8_4_ = 0x4d968;
            auVar11._12_4_ = unaff_r3;
            auVar11._16_4_ = 0xffff;
            auVar11._20_4_ = &DAT_0056adea;
            auVar11._24_40_ = in_register_00000018;
            *fp = auVar11;
            pauVar27 = pauVar30 + 1;
            FUN_000558b0();
            pauVar26 = fp;
            fp = pauVar30;
          }
        }
        ac = ac & 0xfffffff8 | (uint)(DAT_0054fcfd != 0) << 2 | (uint)(DAT_0054fcfd == 0) << 1;
        bVar3 = (byte)(ac >> 1);
joined_r0x0004d970:
        if ((bVar3 & 1) != 1) {
          param_3 = 1;
          DAT_00589de0 = '\x01';
        }
        goto LAB_0004d988;
      }
      uVar1 = uVar2 & 0xfffffff8 | (uint)(2 < GameMode_0054fcb3) << 2 |
              (uint)(GameMode_0054fcb3 == 2) << 1;
      ac = uVar1 | GameMode_0054fcb3 < 2;
      if (((byte)(uVar1 >> 1) & 1) == 1) {
        auVar9._4_4_ = pauVar30;
        auVar9._0_4_ = pauVar26;
        auVar9._8_4_ = 0x4d928;
        auVar9._12_4_ = unaff_r3;
        auVar9._16_4_ = 0xffff;
        auVar9._20_4_ = &DAT_0056adea;
        auVar9._24_40_ = in_register_00000018;
        *fp = auVar9;
        pauVar27 = pauVar30 + 1;
        FUN_000558b0();
        pauVar26 = fp;
        fp = pauVar30;
LAB_0004d928:
        uVar2 = ac & 0xfffffff8 | (uint)(5 < DAT_0054fcfd) << 2 | (uint)(DAT_0054fcfd == 5) << 1;
        ac = uVar2 | DAT_0054fcfd < 5;
        bVar3 = (byte)(uVar2 >> 1);
        goto joined_r0x0004d970;
      }
      ac = uVar2 & 0xfffffff8 | (uint)(DAT_0054fcfd < 5);
      if ((((byte)ac & 1 | 5 < DAT_0054fcfd) == 1) ||
         (uVar2 = uVar2 & 0xfffffff8 | (uint)('\0' < DAT_00589de0) << 2 |
                  (uint)(DAT_00589de0 == '\0') << 1, ac = uVar2 | DAT_00589de0 < '\0',
         ((byte)(uVar2 >> 1) & 1) == 1)) goto LAB_0004d928;
      auVar8._4_4_ = pauVar30;
      auVar8._0_4_ = pauVar26;
      auVar8._8_4_ = 0x4d920;
      auVar8._12_4_ = unaff_r3;
      auVar8._16_4_ = 0xffff;
      auVar8._20_4_ = &DAT_0056adea;
      auVar8._24_40_ = in_register_00000018;
      *fp = auVar8;
      pauVar32 = pauVar30 + 1;
      FUN_00055940();
      pauVar28 = fp;
      fp = pauVar30;
    }
    auVar25._4_4_ = pauVar32;
    auVar25._0_4_ = pauVar28;
    auVar25._8_4_ = 0x4da4c;
    auVar25._12_4_ = unaff_r3;
    auVar25._16_4_ = 0xffff;
    auVar25._20_4_ = &DAT_0056adea;
    auVar25._24_40_ = in_register_00000018;
    *fp = auVar25;
    pauVar29 = pauVar32 + 1;
    FUN_0004de70();
    pauVar26 = fp;
    fp = pauVar32;
  } while( true );
}

