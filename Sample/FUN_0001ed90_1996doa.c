
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* Detect combo lifecycle changes for both players.
   Transfer g_damageDisplayRedBarActive to g_damageDisplayRedBarDecay when appropriate. */

void UpdateHealthBarDamageAnimation(void)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  uint32_t uVar4;
  undefined4 unaff_pfp;
  int iVar16;
  undefined4 unaff_retaddr;
  undefined1 in_register_0000000c [52];
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
  uint uVar18;
  uint32_t *puVar19;
  uint32_t *puVar20;
  ushort uVar21;
  uint uVar22;
  uint uVar23;
  uint32_t uVar24;
  int iVar25;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [999936];
  
  auVar5._8_4_ = unaff_retaddr;
  auVar5._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  auVar5._12_52_ = in_register_0000000c;
  uVar18 = 0;
  puVar20 = &g_damageDisplayCacheComboFlagP1;
  iVar25 = 0;
  puVar19 = &g_damageDisplayCacheComboCountP1;
  uVar22 = ac;
  do {
    ac = uVar22;
    uVar23 = ac;
    if (g_player1.unknown_56[iVar25 + -2] == 0x1) {
      uVar22 = uVar18 ^ 1;
      uVar24 = (&g_damageDisplayRedBarActiveP1)[uVar22];
      (&g_damageDisplayRedBarActiveP1)[uVar22] = g14;
      (&g_damageDisplayRedBarDecayP1)[uVar22] = (&g_damageDisplayRedBarDecayP1)[uVar22] + uVar24;
    }
    if (g_player1.unknown_56[iVar25 + -4] == 0x1) {
      if ((int)(uint)g_player1.unknown_56[iVar25 + -3] < (int)*puVar19) {
        uVar22 = uVar18 ^ 1;
        uVar24 = (&g_damageDisplayRedBarActiveP1)[uVar22];
        (&g_damageDisplayRedBarActiveP1)[uVar22] = g14;
        (&g_damageDisplayRedBarDecayP1)[uVar22] = (&g_damageDisplayRedBarDecayP1)[uVar22] + uVar24;
      }
      *puVar19 = (uint)g_player1.unknown_56[iVar25 + -3];
    }
    else {
      if (*puVar20 == 1) {
        uVar22 = uVar18 ^ 1;
        uVar24 = (&g_damageDisplayRedBarActiveP1)[uVar22];
        (&g_damageDisplayRedBarActiveP1)[uVar22] = g14;
        (&g_damageDisplayRedBarDecayP1)[uVar22] = (&g_damageDisplayRedBarDecayP1)[uVar22] + uVar24;
      }
      *puVar19 = g14;
    }
    uVar18 = uVar18 + 1;
    iVar3 = iVar25 + -4;
    uVar2 = ac & 0xfffffff8 | (uint)((int)uVar18 < 1) << 2;
    uVar22 = uVar2 | (uint)(uVar18 == 1) << 1;
    iVar25 = iVar25 + 0x58;
    puVar19 = puVar19 + 1;
    *puVar20 = (uint)g_player1.unknown_56[iVar3];
    puVar20 = puVar20 + 1;
  } while (((byte)(uVar22 >> 1) & 1 | (byte)(uVar2 >> 2) & 1) == 1);
  if (g_damageDisplayRedBarDecayP1 != 0) {
    if ((int)g_damageDisplayRedBarDecayP1 < 3) {
      g_damageDisplayRedBarDecayP1 = g14;
    }
    else {
      g_damageDisplayRedBarDecayP1 = g_damageDisplayRedBarDecayP1 - 3;
    }
    g_player1.damageDisplayAmount =
         (short)g_damageDisplayRedBarActiveP1 + (short)g_damageDisplayRedBarDecayP1;
  }
  if (g_damageDisplayRedBarDecayP2 != 0) {
    if ((int)g_damageDisplayRedBarDecayP2 < 3) {
      g_damageDisplayRedBarDecayP2 = g14;
    }
    else {
      g_damageDisplayRedBarDecayP2 = g_damageDisplayRedBarDecayP2 - 3;
    }
    g_player2.damageDisplayAmount =
         (short)g_damageDisplayRedBarActiveP2 + (short)g_damageDisplayRedBarDecayP2;
  }
  if ((uint32_t_00557ef8 == 0) && (BYTE_0054fd03 != 0)) {
    TimeTotal_Minutes_0054fd15 = BYTE_00557ef1;
    TimeTotal_Seconds_0054fd16 = BYTE_00557ef2;
    TimeTotal_MilliSeconds_0054fd17 = BYTE_00557ef3;
    BYTE_ARRAY_00557ec0[0] = BYTE_ARRAY_00557ef4[0];
  }
  uint32_t_00557ef8 = (uint32_t)BYTE_0054fd03;
  uVar22 = ac & 0xfffffff8 | (uint)(BYTE_005555e4 == 0) << 2;
  ac = uVar22 | 1 < BYTE_005555e4;
  if ((((byte)ac & 1 | (byte)(uVar22 >> 2) & 1) != 1) &&
     (ac = uVar23 & 0xfffffff8 | (uint)(BYTE_00557ef0 != 0) << 2 | (uint)(BYTE_00557ef0 == 0) << 1,
     BYTE_00557ef0 == 0)) {
    auVar6._8_4_ = 0x1efb8;
    auVar6._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
    auVar6._12_52_ = in_register_0000000c;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar6;
    auVar5._8_56_ = auVar6._8_56_;
    auVar5._4_4_ = auStack_40;
    auVar5._0_4_ = fp;
    FUN_0001ece0();
    fp = (undefined1 *)register0x00000004;
  }
  uVar22 = ac;
  BYTE_00557ef0 = BYTE_005555e4;
  if (BYTE_005555e7 == 1) {
    g13 = 1;
    g_liveRoundActive = 1;
    BYTE_005555e7 = (byte)g14;
    g_timeUpPending = (byte)g14;
    DAT_00557efc = _0d_DAT_0054fd77 - 1;
  }
  uVar18 = ac & 0xfffffff8 | (uint)(g_timeUpPending == 1) << 1;
  if (((byte)(uVar18 >> 1) & 1) == 1) goto LAB_0001f1d4;
  uVar18 = ac & 0xfffffff8 | (uint)(BYTE_0054fcfd != 0) << 2 | (uint)(BYTE_0054fcfd == 0) << 1;
  if ((((byte)(uVar18 >> 1) & 1) == 1) ||
     ((ac = ac & 0xfffffff8 | (uint)(BYTE_0054fcfd == 0), ((byte)ac & 1 | 1 < BYTE_0054fcfd) != 1 &&
      (ac = uVar22 & 0xfffffff8 | (uint)(1 < g_liveRoundActive) << 2 |
            (uint)(g_liveRoundActive == 1) << 1 | (uint)(g_liveRoundActive == 0), uVar18 = ac,
      ((byte)ac & 1 | 1 < g_liveRoundActive) != 1)))) {
    ac = uVar18;
    puVar1 = (undefined1 *)(auVar5._4_4_ + 0x3fU & 0xffffffc0);
    auVar7._12_52_ = auVar5._12_52_;
    auVar7._0_8_ = auVar5._0_8_;
    auVar7._8_4_ = 0x1f034;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar7;
    auVar5._8_56_ = auVar7._8_56_;
    auVar5._4_4_ = puVar1 + 0x40;
    auVar5._0_4_ = fp;
    ApplyPendingDamageAndUpdateDisplay();
    fp = puVar1;
  }
  uVar22 = ac;
  iVar16 = auVar5._4_4_;
  if (g_liveRoundActive == 0) {
    fp = (undefined1 *)auVar5._0_4_;
    ac = ac & 0xfffffff8 | (uint)(g_liveRoundActive != 0) << 2 | (uint)(g_liveRoundActive == 0) << 1
    ;
    return;
  }
  auVar8._0_8_ = auVar5._0_8_;
  auVar8._12_52_ = auVar5._12_52_;
  if (g_player1.currentHealth == 0) {
    uVar18 = ac & 0xfffffff8 | (uint)(g_player2.currentHealth != 0) << 2 |
             (uint)(g_player2.currentHealth == 0) << 1;
    if (((byte)(uVar18 >> 1) & 1) == 1) {
      BYTE_0054fd13 = 2;
      g_roundEndTriggered = 1;
      g13 = 0xc;
      SPRT_DAT = doubleknockout;
      auVar12._8_4_ = 0x1f1d4;
      auVar12._0_8_ = auVar8._0_8_;
      auVar12._12_52_ = auVar8._12_52_;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar12;
      auVar5._8_56_ = auVar12._8_56_;
      auVar5._4_4_ = (undefined1 *)(iVar16 + 0x3fU & 0xffffffc0) + 0x40;
      auVar5._0_4_ = fp;
      ac = uVar18;
      Sound_Request(SE_W_KO);
      fp = (undefined1 *)(iVar16 + 0x3fU & 0xffffffc0);
      uVar18 = ac;
      goto LAB_0001f1d4;
    }
    uVar21 = (ushort)HIT_POINT_CurrentSetting_005555e6;
    BYTE_0054fd13 = 1;
    g_greatestEligibleP1 = (byte)g14;
    uVar18 = ac & 0xfffffff8 | (uint)(uVar21 < g_player2.currentHealth) << 2;
    ac = uVar18 | (uint)(uVar21 == g_player2.currentHealth) << 1 |
         (uint)(g_player2.currentHealth < uVar21);
    g_roundEndTriggered = 1;
    if ((((byte)ac & 1 | (byte)(uVar18 >> 2) & 1) == 1) ||
       (ac = uVar22 & 0xfffffff8 | (uint)(MAN < g_player2.controller_type) << 2 |
             (uint)(g_player2.controller_type == MAN) << 1 |
             (uint)(g_player2.controller_type == COM),
       ((byte)ac & 1 | MAN < g_player2.controller_type) == 1)) {
      g13 = 5;
      SPRT_DAT = knockout;
      auVar11._8_4_ = 0x1f198;
      auVar11._0_8_ = auVar8._0_8_;
      auVar11._12_52_ = auVar8._12_52_;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar11;
      auVar5._8_56_ = auVar11._8_56_;
      auVar5._4_4_ = (undefined1 *)(iVar16 + 0x3fU & 0xffffffc0) + 0x40;
      auVar5._0_4_ = fp;
      Sound_Request(SE_KO);
      g_greatestEligibleP2 = (byte)g14;
      fp = (undefined1 *)(iVar16 + 0x3fU & 0xffffffc0);
      uVar18 = ac;
      goto LAB_0001f1d4;
    }
    uVar23 = (uint)g_player2.rounds_won;
    uVar18 = BYTE_0054fcea - 1;
    ac = uVar22 & 0xfffffff8 | (uint)((int)uVar18 < (int)uVar23) << 2 |
         (uint)(uVar18 == uVar23) << 1 | (uint)((int)uVar23 < (int)uVar18);
    if ((((byte)ac & 1 | (int)uVar18 < (int)uVar23) != 1) &&
       (ac = uVar22 & 0xfffffff8 | (uint)(1 < g_greatestEligibleP2) << 2 |
             (uint)(g_greatestEligibleP2 == 1) << 1 | (uint)(g_greatestEligibleP2 == 0),
       ((byte)ac & 1 | 1 < g_greatestEligibleP2) != 1)) goto LAB_0001f148;
  }
  else {
    uVar18 = ac & 0xfffffff8;
    if (g_player2.currentHealth != 0) goto LAB_0001f1d4;
    uVar21 = (ushort)HIT_POINT_CurrentSetting_005555e6;
    BYTE_0054fd13 = (byte)g14;
    g_greatestEligibleP2 = (byte)g14;
    uVar18 = ac & 0xfffffff8 | (uint)(uVar21 < g_player1.currentHealth) << 2;
    ac = uVar18 | (uint)(uVar21 == g_player1.currentHealth) << 1 |
         (uint)(g_player1.currentHealth < uVar21);
    g_roundEndTriggered = 1;
    if ((((byte)ac & 1 | (byte)(uVar18 >> 2) & 1) == 1) ||
       (ac = uVar22 & 0xfffffff8 | (uint)(MAN < g_player1.controller_type) << 2 |
             (uint)(g_player1.controller_type == MAN) << 1 |
             (uint)(g_player1.controller_type == COM),
       ((byte)ac & 1 | MAN < g_player1.controller_type) == 1)) {
      g13 = 5;
      SPRT_DAT = knockout;
      auVar8._8_4_ = 0x1f0d4;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar8;
      auVar5._8_56_ = auVar8._8_56_;
      auVar5._4_4_ = (undefined1 *)(iVar16 + 0x3fU & 0xffffffc0) + 0x40;
      auVar5._0_4_ = fp;
      Sound_Request(SE_KO);
      g_greatestEligibleP1 = (byte)g14;
      fp = (undefined1 *)(iVar16 + 0x3fU & 0xffffffc0);
      uVar18 = ac;
      goto LAB_0001f1d4;
    }
    uVar23 = (uint)g_player1.rounds_won;
    uVar18 = BYTE_0054fcea - 1;
    ac = uVar22 & 0xfffffff8 | (uint)((int)uVar18 < (int)uVar23) << 2 |
         (uint)(uVar18 == uVar23) << 1 | (uint)((int)uVar23 < (int)uVar18);
    if ((((byte)ac & 1 | (int)uVar18 < (int)uVar23) != 1) &&
       (uVar22 = uVar22 & 0xfffffff8 | (uint)(1 < g_greatestEligibleP1) << 2 |
                 (uint)(g_greatestEligibleP1 == 1) << 1, ac = uVar22 | g_greatestEligibleP1 == 0,
       ((byte)(uVar22 >> 1) & 1) == 1)) {
LAB_0001f148:
      g_roundEndTriggered = 1;
      g13 = 0xf;
      SPRT_DAT = greatest;
      auVar9._8_4_ = 0x1f160;
      auVar9._0_8_ = auVar8._0_8_;
      auVar9._12_52_ = auVar8._12_52_;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar9;
      auVar5._8_56_ = auVar9._8_56_;
      auVar5._4_4_ = (undefined1 *)(iVar16 + 0x3fU & 0xffffffc0) + 0x40;
      auVar5._0_4_ = fp;
      Sound_Request(SE_GREATEST);
      fp = (undefined1 *)(iVar16 + 0x3fU & 0xffffffc0);
      uVar18 = ac;
      goto LAB_0001f1d4;
    }
  }
  g_roundEndTriggered = 1;
  g13 = 0xe;
  SPRT_DAT = great;
  auVar10._8_4_ = 0x1f17c;
  auVar10._0_8_ = auVar8._0_8_;
  auVar10._12_52_ = auVar8._12_52_;
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar10;
  auVar5._8_56_ = auVar10._8_56_;
  auVar5._4_4_ = (undefined1 *)(iVar16 + 0x3fU & 0xffffffc0) + 0x40;
  auVar5._0_4_ = fp;
  Sound_Request(SE_GREAT);
  fp = (undefined1 *)(iVar16 + 0x3fU & 0xffffffc0);
  uVar18 = ac;
LAB_0001f1d4:
  ac = uVar18;
  uVar22 = ac & 0xfffffff8 | (uint)(g_player1.currentHealth == 0) << 1;
  if ((((byte)(uVar22 >> 1) & 1) != 1) &&
     (uVar22 = ac & 0xfffffff8 | (uint)(g_player2.currentHealth == 0) << 1,
     ((byte)(uVar22 >> 1) & 1) != 1)) {
    ac = ac & 0xfffffff8 | (uint)(g_timeUpPending != 0) << 2 | (uint)(g_timeUpPending == 0) << 1;
    auVar13._0_8_ = auVar5._0_8_;
    auVar13._12_52_ = auVar5._12_52_;
    if (g_timeUpPending != 0) {
      g13 = 7;
      SPRT_DAT = timeup1;
      g_timeUpPending = (byte)g14;
      g_greatestEligibleP1 = (byte)g14;
      g_greatestEligibleP2 = (byte)g14;
      TimeCurrentMatch_MilliSeconds_005555a1 = (byte)g14;
      puVar1 = (undefined1 *)(auVar5._4_4_ + 0x3fU & 0xffffffc0);
      auVar14._8_4_ = 0x1f238;
      auVar14._0_8_ = auVar13._0_8_;
      auVar14._12_52_ = auVar13._12_52_;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar14;
      auVar5._8_56_ = auVar14._8_56_;
      auVar5._4_4_ = puVar1 + 0x40;
      auVar5._0_4_ = fp;
      Sound_Request(SE_TIMEUP);
      uVar22 = ac & 0xfffffff8 | (uint)(g_player1.currentHealth == g_player2.currentHealth) << 1;
      if (((byte)(uVar22 >> 1) & 1 | g_player1.currentHealth < g_player2.currentHealth) == 1) {
        uVar22 = ac & 0xfffffff8 | (uint)(g_player1.currentHealth == g_player2.currentHealth) << 1;
        ac = uVar22 | g_player2.currentHealth < g_player1.currentHealth;
        if (((byte)ac & 1 | (byte)(uVar22 >> 1) & 1) == 1) {
          BYTE_0054fd13 = 2;
          g_player1.pendingDamage = (DOA_U16)g14;
          g_player2.pendingDamage = (DOA_U16)g14;
        }
        else {
          BYTE_0054fd13 = 1;
        }
      }
      else {
        BYTE_0054fd13 = (byte)g14;
        ac = uVar22;
      }
      g13 = 1;
      g_roundEndTriggered = 1;
      fp = puVar1;
      uVar22 = ac;
    }
    else {
      puVar1 = (undefined1 *)(auVar5._4_4_ + 0x3fU & 0xffffffc0);
      auVar13._8_4_ = 0x1f1fc;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar13;
      auVar5._8_56_ = auVar13._8_56_;
      auVar5._4_4_ = puVar1 + 0x40;
      auVar5._0_4_ = fp;
      FUN_0001f330();
      fp = puVar1;
      uVar22 = ac;
    }
  }
  ac = uVar22;
  ac = ac & 0xfffffff8 | (uint)(1 < BYTE_0054fcfd) << 2 | (uint)(BYTE_0054fcfd == 1) << 1 |
       (uint)(BYTE_0054fcfd == 0);
  if (((byte)ac & 1 | 1 < BYTE_0054fcfd) != 1) {
    auVar15._12_52_ = auVar5._12_52_;
    auVar15._0_8_ = auVar5._0_8_;
    auVar15._8_4_ = 0x1f2a4;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar15;
    auVar5._8_56_ = auVar15._8_56_;
    auVar5._4_4_ = (undefined1 *)0x0;
    auVar5._0_4_ = fp;
    FUN_0001f5d0();
  }
  uVar22 = ac;
  uVar4 = g_damageDisplayRedBarActiveP2;
  uVar24 = g_damageDisplayRedBarActiveP1;
  ac = ac & 0xfffffff8 | (uint)(1 < g_roundEndTriggered) << 2 |
       (uint)(g_roundEndTriggered == 1) << 1 | (uint)(g_roundEndTriggered == 0);
  if (((byte)ac & 1 | 1 < g_roundEndTriggered) != 1) {
    uVar22 = uVar22 & 0xfffffff8 | (uint)(MODE_CHARSEL < GameMode) << 2 |
             (uint)(GameMode == MODE_CHARSEL) << 1;
    ac = uVar22 | GameMode < MODE_CHARSEL;
    if (((byte)(uVar22 >> 1) & 1) != 1) {
      g13 = 1;
      DAT_005555e9 = 1;
    }
    g_liveRoundActive = (byte)g14;
    WORD_00557eec = (DOA_U16)g14;
    WORD_00557eee = (DOA_U16)g14;
    g_damageDisplayRedBarActiveP1 = g14;
    g_damageDisplayRedBarActiveP2 = g14;
    g_damageDisplayRedBarDecayP1 = g_damageDisplayRedBarDecayP1 + uVar24;
    g_damageDisplayRedBarDecayP2 = g_damageDisplayRedBarDecayP2 + uVar4;
  }
  fp = (undefined1 *)auVar5._0_4_;
  return;
}

