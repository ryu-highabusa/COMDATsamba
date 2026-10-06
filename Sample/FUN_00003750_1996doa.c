
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00003750(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  uint uVar23;
  undefined1 in_register_0000000c [52];
  undefined1 auVar3 [64];
  undefined1 auVar4 [64];
  undefined1 auVar6 [64];
  undefined1 auVar5 [64];
  undefined1 auVar7 [64];
  undefined1 auVar9 [64];
  undefined1 auVar8 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar13 [64];
  undefined1 auVar12 [64];
  undefined1 auVar15 [64];
  undefined1 auVar14 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar19 [64];
  undefined1 auVar18 [64];
  undefined1 auVar20 [64];
  undefined1 auVar22 [64];
  undefined1 auVar21 [64];
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [64];
  
  uVar1 = ac;
  uVar2 = CONCAT44(auStackX_0,unaff_pfp);
  auVar3._8_4_ = unaff_retaddr;
  auVar3._0_8_ = uVar2;
  auVar3._12_52_ = in_register_0000000c;
  auVar10._20_44_ = in_register_0000000c._8_44_;
  auVar10._0_16_ = auVar3._0_16_;
  auVar10._16_4_ = 0;
  if (BYTE_0054fd02 == 1) {
    BYTE_0054fd02 = (DOA_GameMode)g14;
    g_player1.rounds_won = (DOA_GameMode)g14;
    g_player2.rounds_won = (DOA_GameMode)g14;
    BYTE_0054fd03 = (DOA_GameMode)g14;
    uVar1 = ac & 0xfffffff8 | (uint)(1 < DAT_0054fd04) << 2;
    ac = uVar1 | (uint)(DAT_0054fd04 == 1) << 1 | (uint)(DAT_0054fd04 == 0);
    auVar4._12_52_ = auVar10._12_52_;
    if (((byte)ac & 1 | (byte)(uVar1 >> 2) & 1) == 1) {
      FLOAT_0054fd08 = 10.0;
      FLOAT_0054fd0c = 10.0;
      BYTE_0054fcfa = (DOA_GameMode)g14;
      BYTE_0054fcfb = (DOA_GameMode)g14;
      GameMode = MODE_CHARSEL;
      DWORD_0054f3b0 = g14;
      SplashScreen = BYTE_00_SplashScreen_0008fda0;
      auVar6._8_4_ = 0x3804;
      auVar6._0_8_ = uVar2;
      auVar6._12_52_ = auVar4._12_52_;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar6;
      auVar5._8_56_ = auVar6._8_56_;
      auVar5._4_4_ = auStackX_0;
      auVar5._0_4_ = fp;
      FUN_00004790();
      auStackX_0._12_52_ = auVar5._12_52_;
      auStackX_0._0_8_ = auVar5._0_8_;
      auStackX_0._8_4_ = 0x3808;
      FUN_00008cd0();
      fp = auStackX_0;
      return;
    }
    DAT_0054fd04 = (DOA_GameMode)g14;
    GameMode = MODE_NAMELOAD;
    SplashScreen = CutCreditsSequence_maybe;
    auVar4._8_4_ = 0x37b0;
    auVar4._0_8_ = uVar2;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar4;
    func_0x000047f0();
    return;
  }
  uVar23 = ac & 0xfffffff8 | (uint)(3 < GameOverFlag____0054fcb4) << 2 |
           (uint)(GameOverFlag____0054fcb4 == 3) << 1;
  ac = uVar23 | GameOverFlag____0054fcb4 < 3;
  if (((byte)(uVar23 >> 1) & 1) == 1) goto LAB_000039e8;
  if (GameOverFlag____0054fcb4 == 2) {
    if (g_player1.controller_type == MAN) {
      uVar1 = uVar1 & 0xfffffff8 | (uint)(1 < BYTE_0054fcee) << 2;
      ac = uVar1 | (uint)(BYTE_0054fcee == 1) << 1 | (uint)(BYTE_0054fcee == 0);
      if (((byte)ac & 1 | (byte)(uVar1 >> 2) & 1) != 1) {
        BYTE_0054fcee = (DOA_GameMode)g14;
        GameOverFlag____0054fcb4 = (DOA_GameMode)g14;
        DAT_0054fce0 = (DOA_GameMode)g14;
        auVar7._16_4_ = 1;
        auVar7._0_16_ = auVar10._0_16_;
        auVar7._20_44_ = auVar10._20_44_;
        auVar9._12_52_ = auVar7._12_52_;
        auVar9._8_4_ = 0x3858;
        auVar9._0_8_ = uVar2;
        *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar9;
        auVar8._8_56_ = auVar9._8_56_;
        auVar8._4_4_ = auStackX_0;
        auVar8._0_4_ = fp;
        Bookkeeping_Record1PGameEnd(0);
        fp = auStack_40;
        auStackX_0._12_52_ = auVar8._12_52_;
        auStackX_0._0_8_ = auVar8._0_8_;
        auStackX_0._8_4_ = 0x3860;
        auVar10._8_56_ = auStackX_0._8_56_;
        auVar10._4_4_ = &stack0x00000080;
        auVar10._0_4_ = auStackX_0;
        FUN_00004640(0);
        g_championWinCount = (DOA_GameMode)g14;
        BYTE_0054fd00 = 1;
      }
    }
    else {
      uVar1 = uVar1 & 0xfffffff8 | (uint)(1 < BYTE_0054fcf8) << 2;
      ac = uVar1 | (uint)(BYTE_0054fcf8 == 1) << 1 | (uint)(BYTE_0054fcf8 == 0);
      if (((byte)ac & 1 | (byte)(uVar1 >> 2) & 1) != 1) {
        BYTE_0054fcf8 = (DOA_GameMode)g14;
        GameOverFlag____0054fcb4 = (DOA_GameMode)g14;
        DAT_0054fce0 = (DOA_GameMode)g14;
        auVar11._16_4_ = 1;
        auVar11._0_16_ = auVar10._0_16_;
        auVar11._20_44_ = auVar10._20_44_;
        auVar13._12_52_ = auVar11._12_52_;
        auVar13._8_4_ = 0x38a8;
        auVar13._0_8_ = uVar2;
        *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar13;
        auVar12._8_56_ = auVar13._8_56_;
        auVar12._4_4_ = auStackX_0;
        auVar12._0_4_ = fp;
        Bookkeeping_Record1PGameEnd(1);
        fp = auStack_40;
        auStackX_0._12_52_ = auVar12._12_52_;
        auStackX_0._0_8_ = auVar12._0_8_;
        auStackX_0._8_4_ = 0x38b0;
        auVar10._8_56_ = auStackX_0._8_56_;
        auVar10._4_4_ = &stack0x00000080;
        auVar10._0_4_ = auStackX_0;
        FUN_00004640(0);
        g_championWinCount = (DOA_GameMode)g14;
        BYTE_0054fd01 = 1;
      }
    }
    uVar23 = auVar10._16_4_;
    uVar1 = ac & 0xfffffff8 | (uint)(1 < uVar23) << 2;
    ac = uVar1 | (uint)(uVar23 == 1) << 1 | (uint)(uVar23 == 0);
    if (((byte)ac & 1 | (byte)(uVar1 >> 2) & 1) != 1) {
      g_player1.rounds_won = (DOA_GameMode)g14;
      g_player2.rounds_won = (DOA_GameMode)g14;
      uVar1 = auVar10._4_4_ + 0x3f;
      auVar15._12_52_ = auVar10._12_52_;
      auVar15._0_8_ = auVar10._0_8_;
      auVar15._8_4_ = 0x38dc;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar15;
      auVar14._8_56_ = auVar15._8_56_;
      auVar14._0_8_ = CONCAT44(uVar1,fp) & 0xffffffc0ffffffff;
      FUN_00004790();
      GameMode = (DOA_GameMode)g14;
      auVar16._12_52_ = auVar14._12_52_;
      auVar16._0_8_ = auVar14._0_8_;
      auVar16._8_4_ = 0x38f4;
      *(undefined1 (*) [64])(uVar1 & 0xffffffc0) = auVar16;
      auVar10._8_56_ = auVar16._8_56_;
      auVar10._4_4_ = (undefined1 *)0x0;
      auVar10._0_4_ = uVar1 & 0xffffffc0;
      Task_RegisterOrReplace(&LAB_00013770,2);
    }
    fp = (undefined1 *)auVar10._0_4_;
    return;
  }
  if (g_player1.controller_type == MAN) {
    ac = uVar1 & 0xfffffff8 | (uint)(g_player2.controller_type != COM) << 2;
    if (((byte)(ac >> 2) & 1) != 1) {
      uVar1 = uVar1 & 0xfffffff8 | (uint)(1 < BYTE_0054fcf8) << 2;
      ac = uVar1 | (uint)(BYTE_0054fcf8 == 1) << 1 | (uint)(BYTE_0054fcf8 == 0);
      if (((byte)ac & 1 | (byte)(uVar1 >> 2) & 1) == 1) goto LAB_000039c8;
      BYTE_0054fcf8 = (DOA_GameMode)g14;
      g_player2.controller_type = MAN;
      BYTE_0054fd03 = 2;
      GameOverFlag____0054fcb4 = 1;
      DAT_0054fce0 = (DOA_GameMode)g14;
      BYTE_0054fd01 = 1;
      auVar17._16_4_ = 1;
      auVar17._0_16_ = auVar10._0_16_;
      auVar17._20_44_ = auVar10._20_44_;
      auVar19._12_52_ = auVar17._12_52_;
      auVar19._8_4_ = 0x3964;
      auVar19._0_8_ = uVar2;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar19;
      auVar18._8_56_ = auVar19._8_56_;
      auVar18._4_4_ = auStackX_0;
      auVar18._0_4_ = fp;
      FUN_00004640(1);
      auStackX_0._12_52_ = auVar18._12_52_;
      auStackX_0._0_8_ = auVar18._0_8_;
      auStackX_0._8_4_ = 0x396c;
      auVar10._8_56_ = auStackX_0._8_56_;
      auVar10._4_4_ = &stack0x00000080;
      auVar10._0_4_ = auStackX_0;
      FUN_00004840(1);
    }
  }
  else {
    uVar1 = uVar1 & 0xfffffff8 | (uint)(1 < BYTE_0054fcee) << 2;
    ac = uVar1 | (uint)(BYTE_0054fcee == 1) << 1 | (uint)(BYTE_0054fcee == 0);
    if (((byte)ac & 1 | (byte)(uVar1 >> 2) & 1) == 1) {
LAB_000039c8:
      BYTE_0054fd03 = (DOA_GameMode)g14;
      GameOverFlag____0054fcb4 = (DOA_GameMode)g14;
    }
    else {
      BYTE_0054fcee = (DOA_GameMode)g14;
      g_player1.controller_type = MAN;
      BYTE_0054fd03 = 1;
      GameOverFlag____0054fcb4 = 1;
      DAT_0054fce0 = (DOA_GameMode)g14;
      BYTE_0054fd00 = 1;
      auVar20._16_4_ = 1;
      auVar20._0_16_ = auVar10._0_16_;
      auVar20._20_44_ = auVar10._20_44_;
      auVar22._12_52_ = auVar20._12_52_;
      auVar22._8_4_ = 0x39bc;
      auVar22._0_8_ = uVar2;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar22;
      auVar21._8_56_ = auVar22._8_56_;
      auVar21._4_4_ = auStackX_0;
      auVar21._0_4_ = fp;
      FUN_00004640(1);
      auStackX_0._12_52_ = auVar21._12_52_;
      auStackX_0._0_8_ = auVar21._0_8_;
      auStackX_0._8_4_ = 0x39c4;
      auVar10._8_56_ = auStackX_0._8_56_;
      auVar10._4_4_ = &stack0x00000080;
      auVar10._0_4_ = auStackX_0;
      FUN_00004840(0);
    }
  }
  uVar23 = auVar10._16_4_;
  uVar1 = ac & 0xfffffff8 | (uint)(1 < uVar23) << 2;
  ac = uVar1 | (uint)(uVar23 == 1) << 1 | (uint)(uVar23 == 0);
  if (((byte)ac & 1 | (byte)(uVar1 >> 2) & 1) != 1) {
    DWORD_0054f3b4 = 0x78;
  }
LAB_000039e8:
  fp = (undefined1 *)auVar10._0_4_;
  return;
}

