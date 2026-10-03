
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void UpdateHealthBarDamageAnimation(void)

{
  undefined1 *puVar1;
  uint uVar2;
  uint32_t uVar3;
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
  uint uVar17;
  uint32_t *puVar18;
  uint *puVar19;
  ushort uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [999936];
  
  auVar5._8_4_ = unaff_retaddr;
  auVar5._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  auVar5._12_52_ = in_register_0000000c;
  uVar17 = 0;
  puVar19 = &DAT_00557ee0;
  iVar24 = 0;
  puVar18 = &g_damageDisplayLastComboCount;
  uVar21 = ac;
  do {
    ac = uVar21;
    uVar22 = ac;
    if (g_player1.unknown_56[iVar24 + -2] == '\x01') {
      uVar21 = uVar17 ^ 1;
      iVar23 = *(int *)(&DAT_00557ec8 + uVar21 * 2);
      *(uint32_t *)(&DAT_00557ec8 + uVar21 * 2) = g14;
      *(int *)(&DAT_00557ed0 + uVar21 * 2) = *(int *)(&DAT_00557ed0 + uVar21 * 2) + iVar23;
    }
    if (g_player1.unknown_56[iVar24 + -4] == '\x01') {
      if ((int)(uint)g_player1.unknown_56[iVar24 + -3] < (int)*puVar18) {
        uVar21 = uVar17 ^ 1;
        iVar23 = *(int *)(&DAT_00557ec8 + uVar21 * 2);
        *(uint32_t *)(&DAT_00557ec8 + uVar21 * 2) = g14;
        *(int *)(&DAT_00557ed0 + uVar21 * 2) = *(int *)(&DAT_00557ed0 + uVar21 * 2) + iVar23;
      }
      *puVar18 = (uint)g_player1.unknown_56[iVar24 + -3];
    }
    else {
      if (*puVar19 == 1) {
        uVar21 = uVar17 ^ 1;
        iVar23 = *(int *)(&DAT_00557ec8 + uVar21 * 2);
        *(uint32_t *)(&DAT_00557ec8 + uVar21 * 2) = g14;
        *(int *)(&DAT_00557ed0 + uVar21 * 2) = *(int *)(&DAT_00557ed0 + uVar21 * 2) + iVar23;
      }
      *puVar18 = g14;
    }
    uVar17 = uVar17 + 1;
    iVar23 = iVar24 + -4;
    uVar2 = ac & 0xfffffff8 | (uint)((int)uVar17 < 1) << 2;
    uVar21 = uVar2 | (uint)(uVar17 == 1) << 1;
    iVar24 = iVar24 + 0x58;
    puVar18 = puVar18 + 1;
    *puVar19 = (uint)g_player1.unknown_56[iVar23];
    puVar19 = puVar19 + 1;
  } while (((byte)(uVar21 >> 1) & 1 | (byte)(uVar2 >> 2) & 1) == 1);
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
  uVar21 = ac & 0xfffffff8 | (uint)(DAT_005555e4 == 0) << 2;
  ac = uVar21 | 1 < DAT_005555e4;
  if ((((byte)ac & 1 | (byte)(uVar21 >> 2) & 1) != 1) &&
     (ac = uVar22 & 0xfffffff8 | (uint)(DAT_00557ef0 != 0) << 2 | (uint)(DAT_00557ef0 == 0) << 1,
     DAT_00557ef0 == 0)) {
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
  uVar21 = ac;
  DAT_00557ef0 = DAT_005555e4;
  if (DAT_005555e7 == 1) {
    g13 = 1;
    DAT_00557eea = 1;
    DAT_005555e7 = (byte)g14;
    DAT_00557eeb = (byte)g14;
    DAT_00557efc = _0d_DAT_0054fd77 - 1;
  }
  uVar17 = ac & 0xfffffff8 | (uint)(DAT_00557eeb == 1) << 1;
  if (((byte)(uVar17 >> 1) & 1) == 1) goto LAB_0001f1d4;
  uVar17 = ac & 0xfffffff8 | (uint)(DAT_0054fcfd != 0) << 2 | (uint)(DAT_0054fcfd == 0) << 1;
  if ((((byte)(uVar17 >> 1) & 1) == 1) ||
     ((ac = ac & 0xfffffff8 | (uint)(DAT_0054fcfd == 0), ((byte)ac & 1 | 1 < DAT_0054fcfd) != 1 &&
      (ac = uVar21 & 0xfffffff8 | (uint)(1 < DAT_00557eea) << 2 | (uint)(DAT_00557eea == 1) << 1 |
            (uint)(DAT_00557eea == 0), uVar17 = ac, ((byte)ac & 1 | 1 < DAT_00557eea) != 1)))) {
    ac = uVar17;
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
  uVar21 = ac;
  iVar16 = auVar5._4_4_;
  if (DAT_00557eea == 0) {
    fp = (undefined1 *)auVar5._0_4_;
    ac = ac & 0xfffffff8 | (uint)(DAT_00557eea != 0) << 2 | (uint)(DAT_00557eea == 0) << 1;
    return;
  }
  auVar8._0_8_ = auVar5._0_8_;
  auVar8._12_52_ = auVar5._12_52_;
  if (g_player1.currentHealth == 0) {
    uVar17 = ac & 0xfffffff8 | (uint)(g_player2.currentHealth != 0) << 2 |
             (uint)(g_player2.currentHealth == 0) << 1;
    if (((byte)(uVar17 >> 1) & 1) == 1) {
      DAT_0054fd13 = 2;
      DAT_005555e3 = 1;
      g13 = 0xc;
      SPRT_DAT = doubleknockout;
      auVar12._8_4_ = 0x1f1d4;
      auVar12._0_8_ = auVar8._0_8_;
      auVar12._12_52_ = auVar8._12_52_;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar12;
      auVar5._8_56_ = auVar12._8_56_;
      auVar5._4_4_ = (undefined1 *)(iVar16 + 0x3fU & 0xffffffc0) + 0x40;
      auVar5._0_4_ = fp;
      ac = uVar17;
      Sound_Request(SE_W_KO);
      fp = (undefined1 *)(iVar16 + 0x3fU & 0xffffffc0);
      uVar17 = ac;
      goto LAB_0001f1d4;
    }
    uVar20 = (ushort)HIT_POINT_CurrentSetting_005555e6;
    DAT_0054fd13 = 1;
    DAT_00557ee8 = (byte)g14;
    uVar17 = ac & 0xfffffff8 | (uint)(uVar20 < g_player2.currentHealth) << 2;
    ac = uVar17 | (uint)(uVar20 == g_player2.currentHealth) << 1 |
         (uint)(g_player2.currentHealth < uVar20);
    DAT_005555e3 = 1;
    if ((((byte)ac & 1 | (byte)(uVar17 >> 2) & 1) == 1) ||
       (ac = uVar21 & 0xfffffff8 | (uint)(MAN < g_player2.controller_type) << 2 |
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
      DAT_00557ee9 = (byte)g14;
      fp = (undefined1 *)(iVar16 + 0x3fU & 0xffffffc0);
      uVar17 = ac;
      goto LAB_0001f1d4;
    }
    uVar22 = (uint)g_player2.rounds_won;
    uVar17 = BYTE_0054fcea - 1;
    ac = uVar21 & 0xfffffff8 | (uint)((int)uVar17 < (int)uVar22) << 2 |
         (uint)(uVar17 == uVar22) << 1 | (uint)((int)uVar22 < (int)uVar17);
    if ((((byte)ac & 1 | (int)uVar17 < (int)uVar22) != 1) &&
       (ac = uVar21 & 0xfffffff8 | (uint)(1 < DAT_00557ee9) << 2 | (uint)(DAT_00557ee9 == 1) << 1 |
             (uint)(DAT_00557ee9 == 0), ((byte)ac & 1 | 1 < DAT_00557ee9) != 1)) goto LAB_0001f148;
  }
  else {
    uVar17 = ac & 0xfffffff8;
    if (g_player2.currentHealth != 0) goto LAB_0001f1d4;
    uVar20 = (ushort)HIT_POINT_CurrentSetting_005555e6;
    DAT_0054fd13 = (byte)g14;
    DAT_00557ee9 = (byte)g14;
    uVar17 = ac & 0xfffffff8 | (uint)(uVar20 < g_player1.currentHealth) << 2;
    ac = uVar17 | (uint)(uVar20 == g_player1.currentHealth) << 1 |
         (uint)(g_player1.currentHealth < uVar20);
    DAT_005555e3 = 1;
    if ((((byte)ac & 1 | (byte)(uVar17 >> 2) & 1) == 1) ||
       (ac = uVar21 & 0xfffffff8 | (uint)(MAN < g_player1.controller_type) << 2 |
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
      DAT_00557ee8 = (byte)g14;
      fp = (undefined1 *)(iVar16 + 0x3fU & 0xffffffc0);
      uVar17 = ac;
      goto LAB_0001f1d4;
    }
    uVar22 = (uint)g_player1.rounds_won;
    uVar17 = BYTE_0054fcea - 1;
    ac = uVar21 & 0xfffffff8 | (uint)((int)uVar17 < (int)uVar22) << 2 |
         (uint)(uVar17 == uVar22) << 1 | (uint)((int)uVar22 < (int)uVar17);
    if ((((byte)ac & 1 | (int)uVar17 < (int)uVar22) != 1) &&
       (uVar21 = uVar21 & 0xfffffff8 | (uint)(1 < DAT_00557ee8) << 2 |
                 (uint)(DAT_00557ee8 == 1) << 1, ac = uVar21 | DAT_00557ee8 == 0,
       ((byte)(uVar21 >> 1) & 1) == 1)) {
LAB_0001f148:
      DAT_005555e3 = 1;
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
      uVar17 = ac;
      goto LAB_0001f1d4;
    }
  }
  DAT_005555e3 = 1;
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
  uVar17 = ac;
LAB_0001f1d4:
  ac = uVar17;
  uVar21 = ac & 0xfffffff8 | (uint)(g_player1.currentHealth == 0) << 1;
  if ((((byte)(uVar21 >> 1) & 1) != 1) &&
     (uVar21 = ac & 0xfffffff8 | (uint)(g_player2.currentHealth == 0) << 1,
     ((byte)(uVar21 >> 1) & 1) != 1)) {
    ac = ac & 0xfffffff8 | (uint)(DAT_00557eeb != 0) << 2 | (uint)(DAT_00557eeb == 0) << 1;
    auVar13._0_8_ = auVar5._0_8_;
    auVar13._12_52_ = auVar5._12_52_;
    if (DAT_00557eeb != 0) {
      g13 = 7;
      SPRT_DAT = timeup1;
      DAT_00557eeb = (byte)g14;
      DAT_00557ee8 = (byte)g14;
      DAT_00557ee9 = (byte)g14;
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
      uVar21 = ac & 0xfffffff8 | (uint)(g_player1.currentHealth == g_player2.currentHealth) << 1;
      if (((byte)(uVar21 >> 1) & 1 | g_player1.currentHealth < g_player2.currentHealth) == 1) {
        uVar21 = ac & 0xfffffff8 | (uint)(g_player1.currentHealth == g_player2.currentHealth) << 1;
        ac = uVar21 | g_player2.currentHealth < g_player1.currentHealth;
        if (((byte)ac & 1 | (byte)(uVar21 >> 1) & 1) == 1) {
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
        ac = uVar21;
      }
      g13 = 1;
      DAT_005555e3 = 1;
      fp = puVar1;
      uVar21 = ac;
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
      uVar21 = ac;
    }
  }
  ac = uVar21;
  ac = ac & 0xfffffff8 | (uint)(1 < DAT_0054fcfd) << 2 | (uint)(DAT_0054fcfd == 1) << 1 |
       (uint)(DAT_0054fcfd == 0);
  if (((byte)ac & 1 | 1 < DAT_0054fcfd) != 1) {
    auVar15._12_52_ = auVar5._12_52_;
    auVar15._0_8_ = auVar5._0_8_;
    auVar15._8_4_ = 0x1f2a4;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar15;
    auVar5._8_56_ = auVar15._8_56_;
    auVar5._4_4_ = (undefined1 *)0x0;
    auVar5._0_4_ = fp;
    FUN_0001f5d0();
  }
  uVar21 = ac;
  uVar4 = DAT_00557ecc;
  uVar3 = _DAT_00557ec8;
  ac = ac & 0xfffffff8 | (uint)(1 < DAT_005555e3) << 2 | (uint)(DAT_005555e3 == 1) << 1 |
       (uint)(DAT_005555e3 == 0);
  if (((byte)ac & 1 | 1 < DAT_005555e3) != 1) {
    uVar21 = uVar21 & 0xfffffff8 | (uint)(MODE_CHARSEL < GameMode) << 2 |
             (uint)(GameMode == MODE_CHARSEL) << 1;
    ac = uVar21 | GameMode < MODE_CHARSEL;
    if (((byte)(uVar21 >> 1) & 1) != 1) {
      g13 = 1;
      DAT_005555e9 = 1;
    }
    DAT_00557eea = (byte)g14;
    DAT_00557eec = (DOA_U16)g14;
    DAT_00557eee = (DOA_U16)g14;
    _DAT_00557ec8 = g14;
    DAT_00557ecc = g14;
    _DAT_00557ed0 = _DAT_00557ed0 + uVar3;
    DAT_00557ed4 = DAT_00557ed4 + uVar4;
  }
  fp = (undefined1 *)auVar5._0_4_;
  return;
}

