
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* HOLD+P1_START DEBUG OVERLAY TOGGLE
   HPK+P1_START REBOOT
   KICK+P1_START PAUSE (can advance frame with P1_START) */

void Debug_UpdateHiddenDisplays
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  uint uVar1;
  uint uVar2;
  undefined1 (*pauVar3) [64];
  undefined8 uVar4;
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined4 unaff_r3;
  undefined4 unaff_r4;
  undefined1 in_register_00000014 [44];
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar11 [64];
  int iVar20;
  undefined1 auVar13 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined4 uVar21;
  undefined4 extraout_g1;
  g_debugDisplayState gVar22;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [64];
  undefined1 auStack_80 [999872];
  undefined1 auVar7 [64];
  undefined1 auVar10 [64];
  undefined1 auVar12 [64];
  undefined1 auVar14 [64];
  
  uVar2 = ac;
  uVar4 = CONCAT44(auStackX_0,unaff_pfp);
  auVar5._8_4_ = unaff_retaddr;
  auVar5._0_8_ = uVar4;
  auVar5._12_4_ = unaff_r3;
  auVar5._16_4_ = unaff_r4;
  auVar5._20_44_ = in_register_00000014;
  ac = ac & 0xfffffff8 | (uint)((ButtonPress_P1 & button_HPK) < button_HPK);
  auVar7._12_52_ = auVar5._12_52_;
  if (((byte)ac & 1 | button_HPK < (ButtonPress_P1 & button_HPK)) != 1) {
    ac = uVar2 & 0xfffffff8;
    if ((ButtonCoinTestServiceStart_0054fcd4 & START_P1) == off) {
      auVar7._8_4_ = 0x4a78;
      auVar7._0_8_ = uVar4;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar7;
      auVar6._8_56_ = auVar7._8_56_;
      auVar6._4_4_ = auStackX_0;
      auVar6._0_4_ = fp;
      FUN_000085f0(&TMAPBASE_01000000);
      auStackX_0._12_52_ = auVar6._12_52_;
      auStackX_0._0_8_ = auVar6._0_8_;
      auStackX_0._8_4_ = 0x4a84;
      auVar8._8_56_ = auStackX_0._8_56_;
      auVar8._4_4_ = auStack_40;
      auVar8._0_4_ = auStackX_0;
      FUN_000085f0(&DAT_01004000);
      auStack_40._12_52_ = auVar8._12_52_;
      auStack_40._0_8_ = auVar8._0_8_;
      auStack_40._8_4_ = 0x4a90;
      FUN_000085f0((undefined2 *)&DAT_01002000);
      FUN_000085f0(&DAT_01006000);
      FUN_000062f0();
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  uVar2 = ac & 0xfffffff8;
  if ((ButtonCoinTestServiceStart_0054fcd4 & START_P1) == off) {
    if ((ButtonPress_P1 & button_hold) == button_none) {
      g_debugDisplayState = g_debugDisplayState + draw;
    }
  }
  uVar1 = uVar2 | (uint)(0 < g_debugModeOverride) << 2;
  ac = uVar1 | g_debugModeOverride < 0;
  if (((byte)ac & 1 | (byte)(uVar1 >> 2) & 1) != 1) {
    ac = uVar2 | (uint)(1 < (int)g_debugDisplayState) << 2 |
         (uint)(g_debugDisplayState == draw) << 1 | (uint)((int)g_debugDisplayState < 1);
    if (((byte)ac & 1 | 1 < (int)g_debugDisplayState) != 1) {
      auVar10._8_4_ = 0x4af4;
      auVar10._0_8_ = uVar4;
      auVar10._12_52_ = auVar7._12_52_;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar10;
      auVar9._8_56_ = auVar10._8_56_;
      auVar9._4_4_ = auStackX_0;
      auVar9._0_4_ = fp;
      Debug_SetTextPosition(1,10);
      fp = &auStack_40;
      auStackX_0._12_52_ = auVar9._12_52_;
      auStackX_0._0_8_ = auVar9._0_8_;
      auStackX_0._8_4_ = 0x4af8;
      auVar5._8_56_ = auStackX_0._8_56_;
      auVar5._4_4_ = auStack_80;
      auVar5._0_4_ = auStackX_0;
      Debug_DrawPlayerStateOverlay();
    }
    gVar22 = g_debugDisplayState;
    ac = ac & 0xfffffff8 | (uint)(2 < (int)g_debugDisplayState) << 2 |
         (uint)(g_debugDisplayState == clear) << 1 | (uint)((int)g_debugDisplayState < 2);
    if (((byte)ac & 1 | 2 < (int)g_debugDisplayState) != 1) {
      g_debugDisplayState = g14;
      uVar21 = 10;
      pauVar3 = (undefined1 (*) [64])(auVar5._4_4_ + 0x3fU & 0xffffffc0);
      auVar12._12_52_ = auVar5._12_52_;
      auVar12._0_8_ = auVar5._0_8_;
      auVar12._8_4_ = 0x4b18;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar12;
      auVar11._8_56_ = auVar12._8_56_;
      auVar11._4_4_ = pauVar3 + 1;
      auVar11._0_4_ = fp;
      Debug_SetTextPosition(1,10);
      auVar5._20_44_ = auVar11._20_44_;
      auVar5._0_16_ = auVar11._0_16_;
      auVar5._16_4_ = 0;
      fp = pauVar3;
      do {
        iVar20 = auVar5._16_4_;
        pauVar3 = (undefined1 (*) [64])(auVar5._4_4_ + 0x3fU & 0xffffffc0);
        auVar14._12_52_ = auVar5._12_52_;
        auVar14._0_8_ = auVar5._0_8_;
        auVar14._8_4_ = 0x4b28;
        *fp = auVar14;
        auVar13._8_56_ = auVar14._8_56_;
        auVar13._4_4_ = pauVar3 + 1;
        auVar13._0_4_ = fp;
        FUN_0008e740(s__00004a30,uVar21,param_3,param_4,gVar22,param_6,param_7,param_8,param_9,
                     param_10,param_11,param_12);
        auVar5._20_44_ = auVar13._20_44_;
        auVar5._0_16_ = auVar13._0_16_;
        auVar5._16_4_ = iVar20 + 1;
        uVar2 = ac & 0xfffffff8 | (uint)(0x1f < auVar5._16_4_) << 2 |
                (uint)(auVar5._16_4_ == 0x1f) << 1;
        ac = uVar2 | auVar5._16_4_ < 0x1f;
        uVar21 = extraout_g1;
        fp = pauVar3;
      } while (((byte)ac & 1 | (byte)(uVar2 >> 1) & 1) == 1);
    }
  }
  uVar2 = ac;
  ac = ac & 0xfffffff8 | (uint)(MODE_FIGHT < GameMode) << 2 | (uint)(GameMode == MODE_FIGHT) << 1 |
       (uint)(GameMode == MODE_LOAD);
  if (((byte)ac & 1 | MODE_FIGHT < GameMode) == 1) {
LAB_00004c20:
    fp = (undefined1 (*) [64])auVar5._0_4_;
    return;
  }
  ac = uVar2 & 0xfffffff8 | (uint)(0 < DAT_0054f3b4) << 2 | (uint)(DAT_0054f3b4 == 0) << 1 |
       (uint)(DAT_0054f3b4 < 0);
  if (((byte)ac & 1 | 0 < DAT_0054f3b4) == 1) goto LAB_00004c20;
  ac = uVar2 & 0xfffffff8;
  if ((ButtonCoinTestServiceStart_0054fcd4 & START_P1) == off) {
    if ((ButtonPress_P1 & button_kick) == button_none) {
      DAT_0054f3c8 = DAT_0054f3c8 ^ 1;
    }
  }
  auVar15._0_8_ = auVar5._0_8_;
  auVar15._12_52_ = auVar5._12_52_;
  if (DAT_0054f3c8 != 1) {
    ac = ac | (uint)(1 < DAT_0054f3c0) << 2 | (uint)(DAT_0054f3c0 == 1) << 1 |
         (uint)(DAT_0054f3c0 < 1);
    if (((byte)ac & 1 | 1 < DAT_0054f3c0) != 1) {
      auVar19._8_4_ = 0x4c20;
      auVar19._0_8_ = auVar15._0_8_;
      auVar19._12_52_ = auVar15._12_52_;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar19;
      auVar5._8_56_ = auVar19._8_56_;
      auVar5._4_4_ = (undefined1 *)0x0;
      auVar5._0_4_ = fp;
      FUN_00004cc0();
    }
    goto LAB_00004c20;
  }
  if ((ButtonCoinTestServiceStart_0054fcd4 & START_P1) == off) {
    ac = ac | (uint)(1 < DAT_0054f3c0) << 2;
    uVar2 = ac;
    ac = ac | (uint)(DAT_0054f3c0 == 1) << 1;
    ac = ac | DAT_0054f3c0 < 1;
    if (((byte)ac & 1 | (byte)(uVar2 >> 2) & 1) != 1) {
      auVar15._8_4_ = 0x4b9c;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar15;
      auVar5._8_56_ = auVar15._8_56_;
      auVar5._4_4_ = (undefined1 *)0x0;
      auVar5._0_4_ = fp;
      FUN_00004cc0();
    }
    fp = (undefined1 (*) [64])auVar5._0_4_;
    return;
  }
  if ((ButtonCoinTestServiceStart & START_P1) == off) {
    if ((int)DAT_0054f3c4 < 0x14) {
      DAT_0054f3c4 = DAT_0054f3c4 + draw;
      ac = ac | (uint)(0 < DAT_0054f3c0) << 2 | (uint)(DAT_0054f3c0 == 0) << 1 |
           (uint)(DAT_0054f3c0 < 0);
      if (((byte)ac & 1 | 0 < DAT_0054f3c0) != 1) {
        auVar17._8_4_ = 0x4bf0;
        auVar17._0_8_ = auVar15._0_8_;
        auVar17._12_52_ = auVar15._12_52_;
        *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar17;
        auVar5._8_56_ = auVar17._8_56_;
        auVar5._4_4_ = (undefined1 *)0x0;
        auVar5._0_4_ = fp;
        FUN_00004c80();
      }
      fp = (undefined1 (*) [64])auVar5._0_4_;
      return;
    }
    ac = ac | (uint)(1 < DAT_0054f3c0) << 2 | (uint)(DAT_0054f3c0 == 1) << 1 |
         (uint)(DAT_0054f3c0 < 1);
    if (((byte)ac & 1 | 1 < DAT_0054f3c0) != 1) {
      auVar16._8_4_ = 0x4bc8;
      auVar16._0_8_ = auVar15._0_8_;
      auVar16._12_52_ = auVar15._12_52_;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar16;
      FUN_00004cc0();
      return;
    }
  }
  else {
    DAT_0054f3c4 = g14;
    uVar2 = ac | (uint)(0 < DAT_0054f3c0) << 2;
    ac = uVar2 | (uint)(DAT_0054f3c0 == 0) << 1;
    ac = ac | DAT_0054f3c0 < 0;
    if (((byte)ac & 1 | (byte)(uVar2 >> 2) & 1) == 1) goto LAB_00004c0c;
  }
  auVar18._8_4_ = 0x4c0c;
  auVar18._0_8_ = auVar15._0_8_;
  auVar18._12_52_ = auVar15._12_52_;
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar18;
  auVar5._8_56_ = auVar18._8_56_;
  auVar5._4_4_ = (undefined1 *)0x0;
  auVar5._0_4_ = fp;
  FUN_00004c80();
LAB_00004c0c:
  fp = (undefined1 (*) [64])auVar5._0_4_;
  return;
}

