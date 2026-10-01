
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void UpdateHealthBarDamageAnimation(void)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 unaff_pfp;
  int iVar14;
  undefined4 unaff_retaddr;
  undefined1 in_register_0000000c [52];
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
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  ushort uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [999936];
  
  auVar3._8_4_ = unaff_retaddr;
  auVar3._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  auVar3._12_52_ = in_register_0000000c;
  uVar15 = 0;
  puVar17 = &DAT_00557ee0;
  iVar22 = 0;
  puVar16 = &combocounter_candidate1;
  uVar19 = ac;
  do {
    ac = uVar19;
    uVar20 = ac;
    if (g_player1.unknown_56[iVar22 + -2] == '\x01') {
      uVar19 = uVar15 ^ 1;
      iVar21 = *(int *)(&DAT_00557ec8 + uVar19 * 2);
      *(uint *)(&DAT_00557ec8 + uVar19 * 2) = g14;
      *(int *)(&DAT_00557ed0 + uVar19 * 2) = *(int *)(&DAT_00557ed0 + uVar19 * 2) + iVar21;
    }
    if (g_player1.unknown_56[iVar22 + -4] == '\x01') {
      if ((int)(uint)g_player1.unknown_56[iVar22 + -3] < (int)*puVar16) {
        uVar19 = uVar15 ^ 1;
        iVar21 = *(int *)(&DAT_00557ec8 + uVar19 * 2);
        *(uint *)(&DAT_00557ec8 + uVar19 * 2) = g14;
        *(int *)(&DAT_00557ed0 + uVar19 * 2) = *(int *)(&DAT_00557ed0 + uVar19 * 2) + iVar21;
      }
      *puVar16 = (uint)g_player1.unknown_56[iVar22 + -3];
    }
    else {
      if (*puVar17 == 1) {
        uVar19 = uVar15 ^ 1;
        iVar21 = *(int *)(&DAT_00557ec8 + uVar19 * 2);
        *(uint *)(&DAT_00557ec8 + uVar19 * 2) = g14;
        *(int *)(&DAT_00557ed0 + uVar19 * 2) = *(int *)(&DAT_00557ed0 + uVar19 * 2) + iVar21;
      }
      *puVar16 = g14;
    }
    uVar15 = uVar15 + 1;
    iVar21 = iVar22 + -4;
    uVar2 = ac & 0xfffffff8 | (uint)((int)uVar15 < 1) << 2;
    uVar19 = uVar2 | (uint)(uVar15 == 1) << 1;
    iVar22 = iVar22 + 0x58;
    puVar16 = puVar16 + 1;
    *puVar17 = (uint)g_player1.unknown_56[iVar21];
    puVar17 = puVar17 + 1;
  } while (((byte)(uVar19 >> 1) & 1 | (byte)(uVar2 >> 2) & 1) == 1);
  if (_DAT_00557ed0 != 0) {
    if ((int)_DAT_00557ed0 < 3) {
      _DAT_00557ed0 = g14;
    }
    else {
      _DAT_00557ed0 = _DAT_00557ed0 - 3;
    }
    g_player1.damageDisplayAmount = (short)_DAT_00557ec8 + (short)_DAT_00557ed0;
  }
  if (DAT_00557ed4 != 0) {
    if ((int)DAT_00557ed4 < 3) {
      DAT_00557ed4 = g14;
    }
    else {
      DAT_00557ed4 = DAT_00557ed4 - 3;
    }
    g_player2.damageDisplayAmount = (short)DAT_00557ecc + (short)DAT_00557ed4;
  }
  if ((DAT_00557ef8 == 0) && (DAT_0054fd03 != 0)) {
    TimeTotal_Minutes_0054fd15 = DAT_00557ef1;
    TimeTotal_Seconds_0054fd16 = DAT_00557ef2;
    TimeTotal_MilliSeconds_0054fd17 = DAT_00557ef3;
    DAT_00557ec0 = DAT_00557ef4;
  }
  DAT_00557ef8 = (uint)DAT_0054fd03;
  uVar19 = ac & 0xfffffff8 | (uint)(DAT_005555e4 == 0) << 2;
  ac = uVar19 | 1 < DAT_005555e4;
  if ((((byte)ac & 1 | (byte)(uVar19 >> 2) & 1) != 1) &&
     (ac = uVar20 & 0xfffffff8 | (uint)(DAT_00557ef0 != 0) << 2 | (uint)(DAT_00557ef0 == 0) << 1,
     DAT_00557ef0 == 0)) {
    auVar4._8_4_ = 0x1efb8;
    auVar4._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
    auVar4._12_52_ = in_register_0000000c;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar4;
    auVar3._8_56_ = auVar4._8_56_;
    auVar3._4_4_ = auStack_40;
    auVar3._0_4_ = fp;
    FUN_0001ece0();
    fp = (undefined1 *)register0x00000004;
  }
  uVar19 = ac;
  DAT_00557ef0 = DAT_005555e4;
  if (DAT_005555e7 == 1) {
    g13 = 1;
    DAT_00557eea = 1;
    DAT_005555e7 = (byte)g14;
    DAT_00557eeb = (byte)g14;
    DAT_00557efc = _0d_DAT_0054fd77 - 1;
  }
  uVar15 = ac & 0xfffffff8 | (uint)(DAT_00557eeb == 1) << 1;
  if (((byte)(uVar15 >> 1) & 1) == 1) goto LAB_0001f1d4;
  uVar15 = ac & 0xfffffff8 | (uint)(DAT_0054fcfd != 0) << 2 | (uint)(DAT_0054fcfd == 0) << 1;
  if ((((byte)(uVar15 >> 1) & 1) == 1) ||
     ((ac = ac & 0xfffffff8 | (uint)(DAT_0054fcfd == 0), ((byte)ac & 1 | 1 < DAT_0054fcfd) != 1 &&
      (ac = uVar19 & 0xfffffff8 | (uint)(1 < DAT_00557eea) << 2 | (uint)(DAT_00557eea == 1) << 1 |
            (uint)(DAT_00557eea == 0), uVar15 = ac, ((byte)ac & 1 | 1 < DAT_00557eea) != 1)))) {
    ac = uVar15;
    puVar1 = (undefined1 *)(auVar3._4_4_ + 0x3fU & 0xffffffc0);
    auVar5._12_52_ = auVar3._12_52_;
    auVar5._0_8_ = auVar3._0_8_;
    auVar5._8_4_ = 0x1f034;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar5;
    auVar3._8_56_ = auVar5._8_56_;
    auVar3._4_4_ = puVar1 + 0x40;
    auVar3._0_4_ = fp;
    ApplyPendingDamageAndUpdateDisplay();
    fp = puVar1;
  }
  uVar19 = ac;
  iVar14 = auVar3._4_4_;
  if (DAT_00557eea == 0) {
    fp = (undefined1 *)auVar3._0_4_;
    ac = ac & 0xfffffff8 | (uint)(DAT_00557eea != 0) << 2 | (uint)(DAT_00557eea == 0) << 1;
    return;
  }
  auVar6._0_8_ = auVar3._0_8_;
  auVar6._12_52_ = auVar3._12_52_;
  if (g_player1.currentHealth == 0) {
    uVar15 = ac & 0xfffffff8 | (uint)(g_player2.currentHealth != 0) << 2 |
             (uint)(g_player2.currentHealth == 0) << 1;
    if (((byte)(uVar15 >> 1) & 1) == 1) {
      DAT_0054fd13 = 2;
      DAT_005555e3 = 1;
      g13 = 0xc;
      SPRT_DAT = doubleknockout;
      auVar10._8_4_ = 0x1f1d4;
      auVar10._0_8_ = auVar6._0_8_;
      auVar10._12_52_ = auVar6._12_52_;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar10;
      auVar3._8_56_ = auVar10._8_56_;
      auVar3._4_4_ = (undefined1 *)(iVar14 + 0x3fU & 0xffffffc0) + 0x40;
      auVar3._0_4_ = fp;
      ac = uVar15;
      Sound_Request(SE_W_KO);
      fp = (undefined1 *)(iVar14 + 0x3fU & 0xffffffc0);
      uVar15 = ac;
      goto LAB_0001f1d4;
    }
    uVar18 = (ushort)HIT_POINT_CurrentSetting_005555e6;
    DAT_0054fd13 = 1;
    DAT_00557ee8 = (byte)g14;
    uVar15 = ac & 0xfffffff8 | (uint)(uVar18 < g_player2.currentHealth) << 2;
    ac = uVar15 | (uint)(uVar18 == g_player2.currentHealth) << 1 |
         (uint)(g_player2.currentHealth < uVar18);
    DAT_005555e3 = 1;
    if ((((byte)ac & 1 | (byte)(uVar15 >> 2) & 1) == 1) ||
       (ac = uVar19 & 0xfffffff8 | (uint)(MAN < g_player2.controller_type) << 2 |
             (uint)(g_player2.controller_type == MAN) << 1 |
             (uint)(g_player2.controller_type == COM),
       ((byte)ac & 1 | MAN < g_player2.controller_type) == 1)) {
      g13 = 5;
      SPRT_DAT = knockout;
      auVar9._8_4_ = 0x1f198;
      auVar9._0_8_ = auVar6._0_8_;
      auVar9._12_52_ = auVar6._12_52_;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar9;
      auVar3._8_56_ = auVar9._8_56_;
      auVar3._4_4_ = (undefined1 *)(iVar14 + 0x3fU & 0xffffffc0) + 0x40;
      auVar3._0_4_ = fp;
      Sound_Request(SE_KO);
      DAT_00557ee9 = (byte)g14;
      fp = (undefined1 *)(iVar14 + 0x3fU & 0xffffffc0);
      uVar15 = ac;
      goto LAB_0001f1d4;
    }
    uVar20 = (uint)g_player2.rounds_won;
    uVar15 = BYTE_0054fcea - 1;
    ac = uVar19 & 0xfffffff8 | (uint)((int)uVar15 < (int)uVar20) << 2 |
         (uint)(uVar15 == uVar20) << 1 | (uint)((int)uVar20 < (int)uVar15);
    if ((((byte)ac & 1 | (int)uVar15 < (int)uVar20) != 1) &&
       (ac = uVar19 & 0xfffffff8 | (uint)(1 < DAT_00557ee9) << 2 | (uint)(DAT_00557ee9 == 1) << 1 |
             (uint)(DAT_00557ee9 == 0), ((byte)ac & 1 | 1 < DAT_00557ee9) != 1)) goto LAB_0001f148;
  }
  else {
    uVar15 = ac & 0xfffffff8;
    if (g_player2.currentHealth != 0) goto LAB_0001f1d4;
    uVar18 = (ushort)HIT_POINT_CurrentSetting_005555e6;
    DAT_0054fd13 = (byte)g14;
    DAT_00557ee9 = (byte)g14;
    uVar15 = ac & 0xfffffff8 | (uint)(uVar18 < g_player1.currentHealth) << 2;
    ac = uVar15 | (uint)(uVar18 == g_player1.currentHealth) << 1 |
         (uint)(g_player1.currentHealth < uVar18);
    DAT_005555e3 = 1;
    if ((((byte)ac & 1 | (byte)(uVar15 >> 2) & 1) == 1) ||
       (ac = uVar19 & 0xfffffff8 | (uint)(MAN < g_player1.controller_type) << 2 |
             (uint)(g_player1.controller_type == MAN) << 1 |
             (uint)(g_player1.controller_type == COM),
       ((byte)ac & 1 | MAN < g_player1.controller_type) == 1)) {
      g13 = 5;
      SPRT_DAT = knockout;
      auVar6._8_4_ = 0x1f0d4;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar6;
      auVar3._8_56_ = auVar6._8_56_;
      auVar3._4_4_ = (undefined1 *)(iVar14 + 0x3fU & 0xffffffc0) + 0x40;
      auVar3._0_4_ = fp;
      Sound_Request(SE_KO);
      DAT_00557ee8 = (byte)g14;
      fp = (undefined1 *)(iVar14 + 0x3fU & 0xffffffc0);
      uVar15 = ac;
      goto LAB_0001f1d4;
    }
    uVar20 = (uint)g_player1.rounds_won;
    uVar15 = BYTE_0054fcea - 1;
    ac = uVar19 & 0xfffffff8 | (uint)((int)uVar15 < (int)uVar20) << 2 |
         (uint)(uVar15 == uVar20) << 1 | (uint)((int)uVar20 < (int)uVar15);
    if ((((byte)ac & 1 | (int)uVar15 < (int)uVar20) != 1) &&
       (uVar19 = uVar19 & 0xfffffff8 | (uint)(1 < DAT_00557ee8) << 2 |
                 (uint)(DAT_00557ee8 == 1) << 1, ac = uVar19 | DAT_00557ee8 == 0,
       ((byte)(uVar19 >> 1) & 1) == 1)) {
LAB_0001f148:
      DAT_005555e3 = 1;
      g13 = 0xf;
      SPRT_DAT = greatest;
      auVar7._8_4_ = 0x1f160;
      auVar7._0_8_ = auVar6._0_8_;
      auVar7._12_52_ = auVar6._12_52_;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar7;
      auVar3._8_56_ = auVar7._8_56_;
      auVar3._4_4_ = (undefined1 *)(iVar14 + 0x3fU & 0xffffffc0) + 0x40;
      auVar3._0_4_ = fp;
      Sound_Request(SE_GREATEST);
      fp = (undefined1 *)(iVar14 + 0x3fU & 0xffffffc0);
      uVar15 = ac;
      goto LAB_0001f1d4;
    }
  }
  DAT_005555e3 = 1;
  g13 = 0xe;
  SPRT_DAT = great;
  auVar8._8_4_ = 0x1f17c;
  auVar8._0_8_ = auVar6._0_8_;
  auVar8._12_52_ = auVar6._12_52_;
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar8;
  auVar3._8_56_ = auVar8._8_56_;
  auVar3._4_4_ = (undefined1 *)(iVar14 + 0x3fU & 0xffffffc0) + 0x40;
  auVar3._0_4_ = fp;
  Sound_Request(SE_GREAT);
  fp = (undefined1 *)(iVar14 + 0x3fU & 0xffffffc0);
  uVar15 = ac;
LAB_0001f1d4:
  ac = uVar15;
  uVar19 = ac & 0xfffffff8 | (uint)(g_player1.currentHealth == 0) << 1;
  if ((((byte)(uVar19 >> 1) & 1) != 1) &&
     (uVar19 = ac & 0xfffffff8 | (uint)(g_player2.currentHealth == 0) << 1,
     ((byte)(uVar19 >> 1) & 1) != 1)) {
    ac = ac & 0xfffffff8 | (uint)(DAT_00557eeb != 0) << 2 | (uint)(DAT_00557eeb == 0) << 1;
    auVar11._0_8_ = auVar3._0_8_;
    auVar11._12_52_ = auVar3._12_52_;
    if (DAT_00557eeb != 0) {
      g13 = 7;
      SPRT_DAT = timeup1;
      DAT_00557eeb = (byte)g14;
      DAT_00557ee8 = (byte)g14;
      DAT_00557ee9 = (byte)g14;
      TimeCurrentMatch_MilliSeconds_005555a1 = (byte)g14;
      puVar1 = (undefined1 *)(auVar3._4_4_ + 0x3fU & 0xffffffc0);
      auVar12._8_4_ = 0x1f238;
      auVar12._0_8_ = auVar11._0_8_;
      auVar12._12_52_ = auVar11._12_52_;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar12;
      auVar3._8_56_ = auVar12._8_56_;
      auVar3._4_4_ = puVar1 + 0x40;
      auVar3._0_4_ = fp;
      Sound_Request(SE_TIMEUP);
      uVar19 = ac & 0xfffffff8 | (uint)(g_player1.currentHealth == g_player2.currentHealth) << 1;
      if (((byte)(uVar19 >> 1) & 1 | g_player1.currentHealth < g_player2.currentHealth) == 1) {
        uVar19 = ac & 0xfffffff8 | (uint)(g_player1.currentHealth == g_player2.currentHealth) << 1;
        ac = uVar19 | g_player2.currentHealth < g_player1.currentHealth;
        if (((byte)ac & 1 | (byte)(uVar19 >> 1) & 1) == 1) {
          DAT_0054fd13 = 2;
          g_player1.pendingDamage = (DOA_U16)g14;
          g_player2.pendingDamage = (DOA_U16)g14;
        }
        else {
          DAT_0054fd13 = 1;
        }
      }
      else {
        DAT_0054fd13 = (byte)g14;
        ac = uVar19;
      }
      g13 = 1;
      DAT_005555e3 = 1;
      fp = puVar1;
      uVar19 = ac;
    }
    else {
      puVar1 = (undefined1 *)(auVar3._4_4_ + 0x3fU & 0xffffffc0);
      auVar11._8_4_ = 0x1f1fc;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar11;
      auVar3._8_56_ = auVar11._8_56_;
      auVar3._4_4_ = puVar1 + 0x40;
      auVar3._0_4_ = fp;
      FUN_0001f330();
      fp = puVar1;
      uVar19 = ac;
    }
  }
  ac = uVar19;
  ac = ac & 0xfffffff8 | (uint)(1 < DAT_0054fcfd) << 2 | (uint)(DAT_0054fcfd == 1) << 1 |
       (uint)(DAT_0054fcfd == 0);
  if (((byte)ac & 1 | 1 < DAT_0054fcfd) != 1) {
    auVar13._12_52_ = auVar3._12_52_;
    auVar13._0_8_ = auVar3._0_8_;
    auVar13._8_4_ = 0x1f2a4;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar13;
    auVar3._8_56_ = auVar13._8_56_;
    auVar3._4_4_ = (undefined1 *)0x0;
    auVar3._0_4_ = fp;
    FUN_0001f5d0();
  }
  uVar20 = ac;
  uVar15 = DAT_00557ecc;
  uVar19 = _DAT_00557ec8;
  ac = ac & 0xfffffff8 | (uint)(1 < DAT_005555e3) << 2 | (uint)(DAT_005555e3 == 1) << 1 |
       (uint)(DAT_005555e3 == 0);
  if (((byte)ac & 1 | 1 < DAT_005555e3) != 1) {
    uVar20 = uVar20 & 0xfffffff8 | (uint)(MODE_CHARSEL < GameMode) << 2 |
             (uint)(GameMode == MODE_CHARSEL) << 1;
    ac = uVar20 | GameMode < MODE_CHARSEL;
    if (((byte)(uVar20 >> 1) & 1) != 1) {
      g13 = 1;
      DAT_005555e9 = 1;
    }
    DAT_00557eea = (byte)g14;
    DAT_00557eec = (DOA_U16)g14;
    DAT_00557eee = (DOA_U16)g14;
    _DAT_00557ec8 = g14;
    DAT_00557ecc = g14;
    _DAT_00557ed0 = _DAT_00557ed0 + uVar19;
    DAT_00557ed4 = DAT_00557ed4 + uVar15;
  }
  fp = (undefined1 *)auVar3._0_4_;
  return;
}

