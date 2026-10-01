
/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0x00000000 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_000361e0(void)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 (*pauVar5) [64];
  undefined1 auVar6 [40];
  undefined4 unaff_pfp;
  int iVar29;
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
  undefined1 auVar7 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
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
  undefined4 in_g8;
  undefined4 in_g9;
  undefined4 in_g10;
  undefined4 in_g11;
  undefined1 auStackX_0 [80];
  undefined1 auStack_50 [48];
  undefined1 auStack_80 [64];
  undefined1 auStack_c0 [64];
  undefined1 auStack_100 [16];
  undefined4 uStack_110;
  undefined4 uStack_114;
  undefined1 auVar8 [64];
  undefined1 auVar16 [64];
  undefined1 auVar19 [64];
  undefined1 auVar22 [64];
  
  uVar1 = ac;
  auVar7._4_4_ = auStackX_0;
  auVar7._0_4_ = unaff_pfp;
  auVar7._8_4_ = unaff_retaddr;
  auVar7._12_4_ = unaff_r3;
  auVar7._16_4_ = unaff_r4;
  auVar7._20_4_ = unaff_r5;
  auVar7._24_4_ = unaff_r6;
  auVar7._28_4_ = unaff_r7;
  auVar7._32_4_ = unaff_r8;
  auVar7._36_4_ = unaff_r9;
  auVar7._40_4_ = unaff_r10;
  auVar7._44_4_ = unaff_r11;
  auVar7._48_4_ = unaff_r12;
  auVar7._52_4_ = unaff_r13;
  auVar7._56_4_ = unaff_r14;
  auVar7._60_4_ = unaff_r15;
  auVar8._8_56_ = auVar7._8_56_;
  auVar8._0_8_ = CONCAT44(auStack_50,unaff_pfp);
  *(undefined4 *)((int)fp + 0x70) = in_g8;
  *(undefined4 *)((int)fp + 0x74) = in_g9;
  *(undefined4 *)((int)fp + 0x78) = in_g10;
  *(undefined4 *)((int)fp + 0x7c) = in_g11;
  *(undefined4 *)((int)fp + 0x80) = g12;
  auVar10._12_52_ = auVar7._12_52_;
  uVar4 = ac & 0xfffffff8;
  switch(DAT_0054fcfd) {
  case 0:
    ac = ac & 0xfffffff8 | (uint)(DAT_0056570c != 0) << 2 | (uint)(DAT_0056570c == 0) << 1;
    uVar4 = ac;
    if (((byte)(ac >> 1) & 1) != 1) {
      combocounter_candidate2 = 0;
      DAT_00565724 = 0;
      auVar9._0_24_ = auVar8._0_24_;
      auVar9._32_32_ = auVar7._32_32_;
      auVar9._24_8_ = 0;
      DAT_00565728 = 0;
      DAT_0056572c = 0;
      *(undefined4 *)((int)fp + 0x60) = g14;
      DAT_00565730 = 0;
      DAT_00565734 = 0;
      *(undefined4 *)((int)fp + 100) = g14;
      DAT_00565748 = *(undefined4 *)((int)fp + 0x60);
      DAT_0056574c = *(undefined4 *)((int)fp + 100);
      DAT_00565738 = 0;
      DAT_0056573c = 0;
      DAT_00565740 = 0;
      DAT_00565744 = 0;
      auVar6._8_4_ = 0x36294;
      auVar6._0_8_ = auVar8._0_8_;
      auVar6._12_28_ = auVar9._12_28_;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = ZEXT4064(auVar6);
      auVar7 = ZEXT4064(CONCAT328(auVar6._8_32_,CONCAT44(auStack_80 + 0xf,fp) & 0xffffffc0ffffffff))
      ;
      FUN_00037880(0);
      fp = &auStack_c0;
      auStack_80._12_52_ = auVar7._12_52_;
      auStack_80._0_8_ = auVar7._0_8_;
      auStack_80._8_4_ = 0x362a0;
      auVar8._8_56_ = auStack_80._8_56_;
      auVar8._0_8_ = CONCAT44(auStack_100,auStack_80 + 0xf) & 0xffffffffffffffc0;
      FUN_00037880(1);
      uStack_114 = g14;
      DAT_00565460 = uStack_110;
      DAT_00565464 = g14;
      uVar4 = ac;
    }
    break;
  case 3:
    uVar1 = ac & 0xfffffff8 | (uint)(3 < DAT_0056570c) << 2 | (uint)(DAT_0056570c == 3) << 1;
    ac = uVar1 | DAT_0056570c < 3;
    if (((byte)(uVar1 >> 1) & 1) != 1) {
      DAT_00565750 = -1;
      DAT_00565751 = 1;
      DAT_00565748 = 0;
      DAT_0056574c = 0;
    }
    auVar10._8_4_ = 0x362ec;
    auVar10._0_8_ = auVar8._0_8_;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar10;
    auVar8._8_56_ = auVar10._8_56_;
    auVar8._4_4_ = auStack_c0;
    auVar8._0_4_ = fp;
    FUN_00038810();
    DAT_00565750 = DAT_00555611;
    fp = &auStack_80;
    uVar4 = ac;
    break;
  case 4:
    uVar4 = ac & 0xfffffff8 | (uint)(4 < DAT_0056570c) << 2 | (uint)(DAT_0056570c == 4) << 1;
    ac = uVar4 | DAT_0056570c < 4;
    if (((byte)(uVar4 >> 1) & 1) != 1) {
      uVar1 = uVar1 & 0xfffffff8 | (uint)(1 < FIX_DISP) << 2;
      ac = uVar1 | (uint)(FIX_DISP == 1) << 1 | (uint)(FIX_DISP == 0);
      DAT_0056567e = (byte)g14;
      if (((byte)ac & 1 | (byte)(uVar1 >> 2) & 1) != 1) {
        auVar11._8_4_ = 0x36328;
        auVar11._0_8_ = auVar8._0_8_;
        auVar11._12_52_ = auVar10._12_52_;
        *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar11;
        auVar8._8_56_ = auVar11._8_56_;
        auVar8._4_4_ = auStack_c0;
        auVar8._0_4_ = fp;
        FUN_00036f50();
        fp = &auStack_80;
      }
      DAT_0056567f = (byte)g14;
      DAT_00565680 = (byte)g14;
      DAT_00565681 = (byte)g14;
      DAT_00555611 = (byte)g14;
    }
    puVar3 = (undefined1 *)(auVar8._4_4_ + 0x3fU & 0xffffffc0);
    auVar12._12_52_ = auVar8._12_52_;
    auVar12._0_8_ = auVar8._0_8_;
    auVar12._8_4_ = 0x3634c;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar12;
    auVar8._8_56_ = auVar12._8_56_;
    auVar8._4_4_ = puVar3 + 0x40;
    auVar8._0_4_ = fp;
    FUN_00038810();
    fp = (undefined1 (*) [64])puVar3;
    uVar4 = ac;
    break;
  case 5:
    uVar1 = ac & 0xfffffff8 | (uint)(5 < DAT_0056570c) << 2 | (uint)(DAT_0056570c == 5) << 1;
    ac = uVar1 | DAT_0056570c < 5;
    uVar4 = ac;
    if (((byte)(uVar1 >> 1) & 1) != 1) {
      DAT_0056567e = (byte)g14;
      DAT_0056567f = (byte)g14;
      DAT_00565680 = (byte)g14;
      DAT_00565681 = (byte)g14;
      DAT_00565682 = (byte)g14;
      DAT_00565683 = (byte)g14;
      auVar13._0_16_ = auVar8._0_16_;
      auVar13._24_40_ = auVar7._24_40_;
      auVar13._16_8_ = 0;
      combocounter_candidate2 = 0;
      DAT_00565724 = 0;
      auVar14._0_32_ = auVar13._0_32_;
      auVar14._40_24_ = auVar7._40_24_;
      auVar14._32_8_ = 0;
      DAT_00565748 = 0;
      DAT_0056574c = 0;
      DAT_00565728 = 0;
      DAT_0056572c = 0;
      *(undefined4 *)((int)fp + 0x40) = g14;
      *(undefined4 *)((int)fp + 0x44) = g14;
      DAT_00565740 = *(undefined4 *)((int)fp + 0x40);
      DAT_00565744 = *(undefined4 *)((int)fp + 0x44);
      g12 = 0;
      g13 = 0;
      DAT_00565730 = 0;
      DAT_00565734 = 0;
      DAT_00565738 = 0;
      DAT_0056573c = 0;
      auVar16._12_52_ = auVar14._12_52_;
      auVar16._8_4_ = 0x363f8;
      auVar16._0_8_ = auVar8._0_8_;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar16;
      auVar15._8_56_ = auVar16._8_56_;
      auVar15._0_8_ = CONCAT44(auStack_80 + 0xf,fp) & 0xffffffc0ffffffff;
      FUN_00037880(0);
      auStack_80._12_52_ = auVar15._12_52_;
      auStack_80._0_8_ = auVar15._0_8_;
      auStack_80._8_4_ = 0x36400;
      auVar8._8_56_ = auStack_80._8_56_;
      auVar8._0_8_ = CONCAT44(auStack_100,auStack_80 + 0xf) & 0xffffffffffffffc0;
      FUN_00037880(1);
      fp = &auStack_c0;
      uVar4 = ac;
    }
  }
  ac = uVar4;
  uVar1 = ac & 0xfffffff8 | (uint)(DAT_00555617 == 0) << 2;
  ac = uVar1 | (uint)(DAT_00555617 == 1) << 1 | (uint)(1 < DAT_00555617);
  DAT_0056570c = DAT_0054fcfd;
  if (((byte)ac & 1 | (byte)(uVar1 >> 2) & 1) != 1) {
    puVar3 = (undefined1 *)(auVar8._4_4_ + 0x3fU & 0xffffffc0);
    auVar17._12_52_ = auVar8._12_52_;
    auVar17._0_8_ = auVar8._0_8_;
    auVar17._8_4_ = 0x36424;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar17;
    auVar8._8_56_ = auVar17._8_56_;
    auVar8._4_4_ = puVar3 + 0x40;
    auVar8._0_4_ = fp;
    FUN_00037ea0();
    fp = (undefined1 (*) [64])puVar3;
  }
  uVar1 = ac & 0xfffffff8 | (uint)(DAT_0054fcfd == 5) << 1;
  DAT_00565752 = DAT_00555617;
  if ((((byte)(uVar1 >> 1) & 1) != 1) &&
     (ac = ac & 0xfffffff8 | (uint)(DAT_0054fcfd != 0) << 2 | (uint)(DAT_0054fcfd == 0) << 1,
     uVar1 = ac, ((byte)(ac >> 1) & 1) != 1)) {
    puVar3 = (undefined1 *)(auVar8._4_4_ + 0x3fU & 0xffffffc0);
    auVar18._12_52_ = auVar8._12_52_;
    auVar18._0_8_ = auVar8._0_8_;
    auVar18._8_4_ = 0x3644c;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar18;
    auVar8._8_56_ = auVar18._8_56_;
    auVar8._4_4_ = puVar3 + 0x40;
    auVar8._0_4_ = fp;
    FUN_000375d0();
    fp = (undefined1 (*) [64])puVar3;
    uVar1 = ac;
  }
  ac = uVar1;
  uVar1 = ac;
  auVar20._0_8_ = auVar8._0_8_;
  auVar20._12_52_ = auVar8._12_52_;
  if (FIX_DISP == 1) {
    ac = ac & 0xfffffff8 | (uint)(DAT_00565698 != 0) << 2 | (uint)(DAT_00565698 == 0) << 1;
    if (DAT_00565698 == 0) {
      DAT_00564f94 = g14;
      DAT_00564f98 = g14;
      DAT_00564f9c = g14;
      DAT_00564fa0 = g14;
    }
    uVar1 = auVar8._4_4_ + 0x3f;
    uVar4 = uVar1 & 0xffffffc0;
    auVar20._8_4_ = 0x36494;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar20;
    auVar19._8_56_ = auVar20._8_56_;
    auVar19._0_8_ = CONCAT44(uVar1,fp) & 0xffffffc0ffffffff;
    FUN_00036540();
    pauVar5 = (undefined1 (*) [64])(uVar4 + 0x40);
    auVar22._12_52_ = auVar19._12_52_;
    auVar22._0_8_ = auVar19._0_8_;
    auVar22._8_4_ = 0x36498;
    *(undefined1 (*) [64])(uVar1 & 0xffffffc0) = auVar22;
    auVar21._8_56_ = auVar22._8_56_;
    auVar21._0_8_ = CONCAT44(uVar4 + 0x80,uVar1) & 0xffffffffffffffc0;
    FUN_000368a0();
    fp = pauVar5;
    uVar1 = ac & 0xfffffff8 | (uint)(GameOverFlag____0054fcb4 != 0) << 2 |
            (uint)(GameOverFlag____0054fcb4 == 0) << 1;
    if (((GameOverFlag____0054fcb4 == 0) &&
        (uVar1 = ac & 0xfffffff8 | (uint)(DAT_0054fd03 != '\0') << 2 |
                 (uint)(DAT_0054fd03 == '\0') << 1, DAT_0054fd03 == '\0')) &&
       (uVar2 = ac & 0xfffffff8 | (uint)(4 < DAT_0054fcfd) << 2 | (uint)(DAT_0054fcfd == 4) << 1,
       ac = uVar2 | DAT_0054fcfd < 4, uVar1 = ac, ((byte)(uVar2 >> 1) & 1) != 1)) {
      fp = (undefined1 (*) [64])(uVar4 + 0x80);
      auVar23._12_52_ = auVar21._12_52_;
      auVar23._0_8_ = auVar21._0_8_;
      auVar23._8_4_ = 0x364c0;
      *(undefined1 (*) [64])(uVar4 + 0x40) = auVar23;
      auVar21._8_56_ = auVar23._8_56_;
      auVar21._4_4_ = uVar4 + 0xc0;
      auVar21._0_4_ = pauVar5;
      FUN_000369e0();
      uVar1 = ac;
    }
    ac = uVar1;
    uVar1 = auVar21._4_4_ + 0x3f;
    puVar3 = (undefined1 *)(uVar1 & 0xffffffc0);
    auVar24._12_52_ = auVar21._12_52_;
    auVar24._0_8_ = auVar21._0_8_;
    auVar24._8_4_ = 0x364c4;
    *fp = auVar24;
    auVar8._8_56_ = auVar24._8_56_;
    auVar8._4_4_ = puVar3 + 0x40;
    auVar8._0_4_ = fp;
    FUN_000348e0();
    ac = ac & 0xfffffff8 | (uint)(DAT_0056567e != '\0') << 2 | (uint)(DAT_0056567e == '\0') << 1;
    fp = (undefined1 (*) [64])puVar3;
    if (((byte)(ac >> 1) & 1) != 1) {
      auVar25._12_52_ = auVar8._12_52_;
      auVar25._0_8_ = auVar8._0_8_;
      auVar25._8_4_ = 0x364d4;
      *(undefined1 (*) [64])(uVar1 & 0xffffffc0) = auVar25;
      auVar8._8_56_ = auVar25._8_56_;
      auVar8._0_8_ = CONCAT44(puVar3 + 0x80,uVar1) & 0xffffffffffffffc0;
      FUN_00037470();
      fp = (undefined1 (*) [64])(puVar3 + 0x40);
    }
  }
  else {
    ac = ac & 0xfffffff8 | (uint)(DAT_00565698 == 0);
    if ((((byte)ac & 1 | 1 < DAT_00565698) != 1) &&
       (ac = uVar1 & 0xfffffff8 | (uint)(FIX_DISP != 0) << 2 | (uint)(FIX_DISP == 0) << 1,
       FIX_DISP == 0)) {
      puVar3 = (undefined1 *)(auVar8._4_4_ + 0x3fU & 0xffffffc0);
      auVar26._8_4_ = 0x364e8;
      auVar26._0_8_ = auVar20._0_8_;
      auVar26._12_52_ = auVar20._12_52_;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar26;
      auVar8._8_56_ = auVar26._8_56_;
      auVar8._4_4_ = puVar3 + 0x40;
      auVar8._0_4_ = fp;
      FUN_000370e0();
      fp = (undefined1 (*) [64])puVar3;
    }
  }
  uVar1 = ac & 0xfffffff8 | (uint)(DAT_005555e9 == 0) << 2;
  ac = uVar1 | (uint)(DAT_005555e9 == 1) << 1 | (uint)(1 < DAT_005555e9);
  DAT_00565698 = FIX_DISP;
  if (((byte)ac & 1 | (byte)(uVar1 >> 2) & 1) != 1) {
    puVar3 = (undefined1 *)(auVar8._4_4_ + 0x3fU & 0xffffffc0);
    auVar27._12_52_ = auVar8._12_52_;
    auVar27._0_8_ = auVar8._0_8_;
    auVar27._8_4_ = 0x3650c;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar27;
    auVar8._8_56_ = auVar27._8_56_;
    auVar8._4_4_ = puVar3 + 0x40;
    auVar8._0_4_ = fp;
    FUN_00036f50();
    DAT_005555e9 = (byte)g14;
    fp = (undefined1 (*) [64])puVar3;
  }
  iVar29 = auVar8._4_4_;
  ac = ac & 0xfffffff8 | (uint)(1 < FIX_DISP_LoadFlag) << 2 | (uint)(FIX_DISP_LoadFlag == 1) << 1 |
       (uint)(FIX_DISP_LoadFlag == 0);
  if (((byte)ac & 1 | 1 < FIX_DISP_LoadFlag) != 1) {
    auVar28._12_52_ = auVar8._12_52_;
    auVar28._0_8_ = auVar8._0_8_;
    auVar28._8_4_ = 0x36524;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar28;
    auVar8._8_56_ = auVar28._8_56_;
    auVar8._4_4_ = (undefined1 *)0x0;
    auVar8._0_4_ = fp;
    FUN_00036ad0();
    FIX_DISP_LoadFlag = (byte)g14;
    fp = (undefined1 (*) [64])(iVar29 + 0x3fU & 0xffffffc0);
  }
  g12 = *(undefined4 *)((int)fp + 0x80);
  fp = (undefined1 (*) [64])auVar8._0_4_;
  return;
}

