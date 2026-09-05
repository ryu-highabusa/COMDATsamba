
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void switchD_00002f28::caseD_1(void)

{
  uint uVar1;
  undefined1 (*pauVar2) [64];
  undefined1 auVar3 [64];
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
  uint uVar24;
  undefined1 (*unaff_pfp) [64];
  undefined1 (*pauVar25) [64];
  undefined1 (*pauVar26) [64];
  undefined1 (*pauVar27) [64];
  undefined1 in_register_0000000c [52];
  undefined1 auStackX_0 [1000000];
  
code_r0x00002f48:
  uVar1 = ac & 0xfffffff8 | (uint)(0 < DAT_0054f3b4) << 2 | (uint)(DAT_0054f3b4 == 0) << 1;
  ac = uVar1 | DAT_0054f3b4 < 0;
  if (((byte)(uVar1 >> 1) & 1) == 1) {
    auVar8._4_4_ = register0x00000004;
    auVar8._0_4_ = unaff_pfp;
    auVar8._8_4_ = 0x2f60;
    auVar8._12_52_ = in_register_0000000c;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar8;
    FUN_00003750();
    unaff_pfp = fp;
    pauVar25 = (undefined1 (*) [64])((int)register0x00000004 + 0x40);
    fp = (undefined1 (*) [64])register0x00000004;
  }
  else {
    auVar7._4_4_ = register0x00000004;
    auVar7._0_4_ = unaff_pfp;
    auVar7._8_4_ = 0x2f58;
    auVar7._12_52_ = in_register_0000000c;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar7;
    FUN_00003580();
    unaff_pfp = fp;
    pauVar25 = (undefined1 (*) [64])((int)register0x00000004 + 0x40);
    fp = (undefined1 (*) [64])register0x00000004;
  }
  goto switchD_00002f28_caseD_5;
  do {
    auVar3._8_4_ = 0x2f0c;
    auVar3._0_8_ = CONCAT44(*pauVar26 + 0x3f,fp) & 0xffffffc0ffffffff;
    auVar3._12_52_ = in_register_0000000c;
    *pauVar26 = auVar3;
    FUN_00008250(1);
    unaff_pfp = pauVar26 + 2;
    auVar4._4_4_ = pauVar26 + 1;
    auVar4._0_4_ = pauVar26;
    auVar4._8_4_ = 0x2f10;
    auVar4._12_52_ = in_register_0000000c;
    pauVar26[1] = auVar4;
    FUN_00004070();
    pauVar27 = pauVar26 + 3;
    auVar5._4_4_ = unaff_pfp;
    auVar5._0_4_ = pauVar26 + 1;
    auVar5._8_4_ = 0x2f14;
    auVar5._12_52_ = in_register_0000000c;
    pauVar26[2] = auVar5;
    register0x00000004 = (BADSPACEBASE *)(pauVar26 + 4);
    FUN_00003010();
    ac = ac & 0xfffffff8 | (uint)(4 < GameMode_0054fcb3) << 2 | (uint)(GameMode_0054fcb3 == 4) << 1
         | (uint)(GameMode_0054fcb3 < 4);
    pauVar25 = pauVar26 + 4;
    fp = pauVar27;
    switch(GameMode_0054fcb3) {
    case 0:
      fp = pauVar26 + 4;
      auVar6._4_4_ = pauVar26 + 4;
      auVar6._0_4_ = unaff_pfp;
      auVar6._8_4_ = 0x2f44;
      auVar6._12_52_ = in_register_0000000c;
      pauVar26[3] = auVar6;
      FUN_00003670();
      unaff_pfp = pauVar27;
      pauVar25 = pauVar26 + 5;
    default:
switchD_00002f28_caseD_5:
      pauVar26 = pauVar25;
      auVar13._4_4_ = pauVar26;
      auVar13._0_4_ = unaff_pfp;
      auVar13._8_4_ = 0x2f80;
      auVar13._12_52_ = in_register_0000000c;
      *fp = auVar13;
      FUN_00004590();
      uVar24 = ac;
      uVar1 = ac & 0xfffffff8 | (uint)(0 < DAT_0054f3d0) << 2 | (uint)(DAT_0054f3d0 == 0) << 1;
      ac = uVar1 | DAT_0054f3d0 < 0;
      if (((byte)(uVar1 >> 1) & 1) != 1) {
        DAT_0054f3d0 = DAT_0054f3d0 + -1;
        ac = uVar24 & 0xfffffff8 | (uint)(0 < DAT_0054f3d0) << 2 | (uint)(DAT_0054f3d0 == 0) << 1 |
             (uint)(DAT_0054f3d0 < 0);
        if ((((byte)ac & 1 | 0 < DAT_0054f3d0) != 1) &&
           ((uVar1 = uVar24 & 0xfffffff8 | (uint)(0 < DAT_0054fadc) << 2 |
                     (uint)(DAT_0054fadc == 0) << 1, ac = uVar1 | DAT_0054fadc < 0,
            ((byte)(uVar1 >> 1) & 1) == 1 ||
            (ac = uVar24 & 0xfffffff8 | (uint)(0 < DAT_0054fad0) << 2 |
                  (uint)(DAT_0054fad0 == 0) << 1 | (uint)(DAT_0054fad0 < 0),
            ((byte)ac & 1 | 0 < DAT_0054fad0) != 1)))) {
          auVar14._4_4_ = pauVar26;
          auVar14._0_4_ = fp;
          auVar14._8_4_ = 0x2fbc;
          auVar14._12_52_ = in_register_0000000c;
          *pauVar26 = auVar14;
          FUN_00008290(1);
          auVar15._4_4_ = pauVar26 + 1;
          auVar15._0_4_ = pauVar26;
          auVar15._8_4_ = 0x2fc4;
          auVar15._12_52_ = in_register_0000000c;
          pauVar26[1] = auVar15;
          FUN_00008290(2);
          auVar16._4_4_ = pauVar26 + 2;
          auVar16._0_4_ = pauVar26 + 1;
          auVar16._8_4_ = 0x2fcc;
          auVar16._12_52_ = in_register_0000000c;
          pauVar26[2] = auVar16;
          FUN_00008290(3);
          auVar17._4_4_ = pauVar26 + 3;
          auVar17._0_4_ = pauVar26 + 2;
          auVar17._8_4_ = 0x2fd4;
          auVar17._12_52_ = in_register_0000000c;
          pauVar26[3] = auVar17;
          FUN_00008290(8);
          auVar18._4_4_ = pauVar26 + 4;
          auVar18._0_4_ = pauVar26 + 3;
          auVar18._8_4_ = 0x2fdc;
          auVar18._12_52_ = in_register_0000000c;
          pauVar26[4] = auVar18;
          FUN_00008290(9);
          auVar19._4_4_ = pauVar26 + 5;
          auVar19._0_4_ = pauVar26 + 4;
          auVar19._8_4_ = 0x2fe4;
          auVar19._12_52_ = in_register_0000000c;
          pauVar26[5] = auVar19;
          FUN_00008290(10);
          auVar20._4_4_ = pauVar26 + 6;
          auVar20._0_4_ = pauVar26 + 5;
          auVar20._8_4_ = 0x2fec;
          auVar20._12_52_ = in_register_0000000c;
          pauVar26[6] = auVar20;
          FUN_00008290(0xc);
          auVar21._4_4_ = pauVar26 + 7;
          auVar21._0_4_ = pauVar26 + 6;
          auVar21._8_4_ = 0x2ff4;
          auVar21._12_52_ = in_register_0000000c;
          pauVar26[7] = auVar21;
          FUN_00008290(0xd);
          pauVar25 = pauVar26 + 7;
          pauVar27 = pauVar26 + 9;
          fp = pauVar26 + 8;
          do {
            auVar22._4_4_ = pauVar27;
            auVar22._0_4_ = pauVar25;
            auVar22._8_4_ = 0x2ffc;
            auVar22._12_52_ = in_register_0000000c;
            *fp = auVar22;
            FUN_00008250(1);
            pauVar2 = pauVar27 + 1;
            auVar23._4_4_ = pauVar27;
            auVar23._0_4_ = fp;
            auVar23._8_4_ = 0x3000;
            auVar23._12_52_ = in_register_0000000c;
            *pauVar27 = auVar23;
            FUN_00003010();
            pauVar25 = pauVar27;
            pauVar27 = pauVar27 + 2;
            fp = pauVar2;
          } while( true );
        }
      }
      break;
    case 1:
      goto code_r0x00002f48;
    case 2:
      auVar9._4_4_ = pauVar26 + 4;
      auVar9._0_4_ = unaff_pfp;
      auVar9._8_4_ = 0x2f68;
      auVar9._12_52_ = in_register_0000000c;
      pauVar26[3] = auVar9;
      FUN_000039f0();
      fp = pauVar26 + 5;
      auVar10._4_4_ = pauVar26 + 4;
      auVar10._0_4_ = pauVar27;
      auVar10._8_4_ = 0x2f6c;
      auVar10._12_52_ = in_register_0000000c;
      pauVar26[4] = auVar10;
      RetailDisabledDebugHook();
      unaff_pfp = pauVar26 + 4;
      pauVar25 = pauVar26 + 6;
      break;
    case 3:
      fp = pauVar26 + 4;
      auVar11._4_4_ = pauVar26 + 4;
      auVar11._0_4_ = unaff_pfp;
      auVar11._8_4_ = 0x2f74;
      auVar11._12_52_ = in_register_0000000c;
      pauVar26[3] = auVar11;
      FUN_00003df0();
      unaff_pfp = pauVar27;
      pauVar25 = pauVar26 + 5;
      break;
    case 4:
      fp = pauVar26 + 4;
      auVar12._4_4_ = pauVar26 + 4;
      auVar12._0_4_ = unaff_pfp;
      auVar12._8_4_ = 0x2f7c;
      auVar12._12_52_ = in_register_0000000c;
      pauVar26[3] = auVar12;
      FUN_00003f10();
      unaff_pfp = pauVar27;
      pauVar25 = pauVar26 + 5;
      break;
    }
  } while( true );
}

