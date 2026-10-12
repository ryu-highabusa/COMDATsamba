
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_000179a0(void)

{
  byte bVar1;
  undefined1 (*pauVar2) [64];
  undefined1 auVar3 [24];
  undefined1 auVar4 [28];
  undefined1 auVar5 [48];
  undefined1 auVar6 [60];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined4 unaff_pfp;
  undefined1 auVar12 [24];
  undefined1 auVar13 [32];
  int iVar55;
  undefined1 in_register_00000008 [16];
  undefined4 unaff_r6;
  int iVar59;
  undefined1 in_register_0000001c [20];
  undefined4 unaff_r12;
  undefined1 in_register_00000034 [12];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  undefined1 auVar33 [64];
  undefined1 auVar34 [64];
  undefined1 auVar35 [64];
  int iVar61;
  undefined1 auVar36 [64];
  undefined1 auVar38 [64];
  undefined1 auVar39 [64];
  undefined1 auVar41 [64];
  undefined1 auVar42 [64];
  undefined1 auVar44 [64];
  undefined1 auVar46 [64];
  undefined1 auVar47 [64];
  undefined1 auVar49 [64];
  undefined1 auVar50 [64];
  undefined1 auVar52 [64];
  undefined1 auVar54 [64];
  DOA_SOUND_COMMAND DVar62;
  uint uVar63;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [64];
  undefined1 auStack_80 [999872];
  undefined1 auVar27 [64];
  undefined1 auVar37 [64];
  undefined1 auVar40 [64];
  undefined1 auVar43 [64];
  undefined1 auVar45 [64];
  undefined1 auVar48 [64];
  undefined1 auVar51 [64];
  undefined1 auVar53 [64];
  undefined1 auVar11 [24];
  undefined1 auVar22 [64];
  byte *pbVar56;
  byte *pbVar57;
  uint uVar58;
  uint uVar60;
  
  auVar3._4_4_ = auStackX_0;
  auVar3._0_4_ = unaff_pfp;
  auVar3._8_16_ = in_register_00000008;
  auVar4._24_4_ = unaff_r6;
  auVar4._0_24_ = auVar3;
  auVar5._28_20_ = in_register_0000001c;
  auVar5._0_28_ = auVar4;
  auVar14._48_4_ = unaff_r12;
  auVar14._0_48_ = auVar5;
  auVar14._52_12_ = in_register_00000034;
  auVar15._0_32_ = auVar5._0_32_;
  auVar15._32_4_ = 0x168;
  BYTE_0054fcfd = 4;
  auVar15._40_24_ = auVar14._40_24_;
  uVar60 = (uint)g_vs_com_match_index_candidate;
  auVar15[0x24] = g_vs_com_match_index_candidate;
  auVar15._37_3_ = 0;
  auVar16._32_32_ = auVar15._32_32_;
  uVar58 = (uint)DAT_005555dc;
  auVar16[0x1c] = DAT_005555dc;
  auVar16._0_28_ = auVar4;
  auVar16._29_3_ = 0;
  auVar17._48_16_ = auVar14._48_16_;
  auVar17._0_44_ = auVar16._0_44_;
  auVar17._44_4_ = 0xffffffff;
  auVar18._44_20_ = auVar17._44_20_;
  auVar18._0_40_ = auVar16._0_40_;
  auVar18._40_4_ = 0xff;
  DAT_00557c54 = g14;
  auVar19._0_16_ = auVar3._0_16_;
  auVar19._24_40_ = auVar18._24_40_;
  if (g_selectedPlayerSide_candidate == 0) {
    auVar19._16_4_ = &g_player1;
    auVar19._20_4_ = &g_player2;
    auVar13._0_28_ = auVar19._0_28_;
    auVar13._28_4_ = uVar58 + 1;
    ac = ac & 0xfffffff8 | (uint)(MAN < g_player1.controller_type) << 2 |
         (uint)(g_player1.controller_type == MAN) << 1 | (uint)(g_player1.controller_type == COM);
    bVar1 = (byte)ac & 1 | MAN < g_player1.controller_type;
joined_r0x00017a54:
    auVar21._32_32_ = auVar18._32_32_;
    auVar21._0_32_ = auVar13;
    if (bVar1 != 1) {
LAB_00017b68:
      Camera_Angle = camera_followP1;
      SPRT_DAT = winner;
      auVar24._12_52_ = auVar21._12_52_;
      auVar24._0_8_ = auVar21._0_8_;
      auVar24._8_4_ = 0x17b74;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar24;
      auVar8._4_56_ = auVar24._8_56_;
      auVar8._0_4_ = auStack_40;
      auVar8._60_4_ = 0;
      auVar22 = auVar8 << 0x20;
      Sound_Request(SE_WINNER);
      goto LAB_00017c64;
    }
  }
  else {
    if (g_selectedPlayerSide_candidate == 1) {
      auVar20._16_4_ = &g_player2;
      auVar20._0_16_ = auVar19._0_16_;
      auVar20._20_4_ = &g_player1;
      auVar20._24_40_ = auVar19._24_40_;
      auVar13._0_28_ = auVar20._0_28_;
      auVar13._28_4_ = uVar58 + 1;
      ac = ac & 0xfffffff8 | (uint)(MAN < g_player2.controller_type) << 2 |
           (uint)(g_player2.controller_type == MAN) << 1 | (uint)(g_player2.controller_type == COM);
      bVar1 = (byte)ac & 1 | MAN < g_player2.controller_type;
      goto joined_r0x00017a54;
    }
    iVar61 = (uint)g_effective_set_count * 2 + -1;
    if ((int)(uint)DAT_005555dc < iVar61 || iVar61 < (int)(uint)DAT_005555dc) {
      if (g_player1.rounds_won < g_player2.rounds_won) {
        auVar25._16_4_ = &g_player2;
        auVar25._0_16_ = auVar19._0_16_;
        auVar25._20_4_ = &g_player1;
        auVar25._24_40_ = auVar19._24_40_;
        ac = ac & 0xfffffff8 | (uint)(g_effective_set_count < g_player2.rounds_won) << 2 |
             (uint)(g_effective_set_count == g_player2.rounds_won) << 1 |
             (uint)(g_player2.rounds_won < g_effective_set_count);
        if (((byte)ac & 1) == 1) goto LAB_00017c24_DRAW;
        g_selectedPlayerSide_candidate = 1;
LAB_00017c14:
        Camera_Angle = camera_followP1;
        SPRT_DAT = winner;
        auVar27._12_52_ = auVar25._12_52_;
        auVar27._0_8_ = auVar25._0_8_;
        auVar27._8_4_ = 0x17c20;
        *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar27;
        auVar26._4_56_ = auVar27._8_56_;
        auVar26._0_4_ = auStack_40;
        auVar26._60_4_ = 0;
        auVar26 = auVar26 << 0x20;
        Sound_Request(SE_WINNER);
      }
      else {
        auVar25._16_4_ = &g_player1;
        auVar25._0_16_ = auVar19._0_16_;
        auVar25._20_4_ = &g_player2;
        auVar25._24_40_ = auVar19._24_40_;
        ac = ac & 0xfffffff8 | (uint)(g_effective_set_count < g_player1.rounds_won) << 2 |
             (uint)(g_effective_set_count == g_player1.rounds_won) << 1 |
             (uint)(g_player1.rounds_won < g_effective_set_count);
        if (((byte)ac & 1) != 1) {
          g_selectedPlayerSide_candidate = (byte)g14;
          goto LAB_00017c14;
        }
LAB_00017c24_DRAW:
        SPRT_DAT = draw;
        auVar28._12_52_ = auVar25._12_52_;
        auVar28._0_8_ = auVar25._0_8_;
        auVar28._8_4_ = 0x17c3c;
        *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar28;
        auVar9._4_56_ = auVar28._8_56_;
        auVar9._0_4_ = auStack_40;
        auVar9._60_4_ = 0;
        auVar26 = auVar9 << 0x20;
        Sound_Request(SE_DRAW);
      }
      auVar6._4_56_ = auVar26._8_56_;
      auVar6._0_4_ = auStack_40;
      auVar22._0_28_ = auVar6._0_28_ << 0x20;
      iVar61 = (uint)g_effective_set_count * 2 + -2;
      ac = ac & 0xfffffff8 | (uint)((int)(uint)DAT_005555dc < iVar61);
      auVar22._32_32_ = auVar26._32_32_;
      if (((byte)ac & 1 | iVar61 < (int)(uint)DAT_005555dc) == 1) {
        auVar22._28_4_ = uVar58 + 2;
      }
      else {
        auVar22._28_4_ = uVar58 + 1;
      }
      goto LAB_00017c64;
    }
    if (GameOverFlag____0054fcb4 != 0) {
      ac = ac & 0xfffffff8 | (uint)(BYTE_0054fd11 != 0) << 2 | (uint)(BYTE_0054fd11 == 0) << 1;
      if (BYTE_0054fd11 != 0) {
        g_selectedPlayerSide_candidate = 1;
        auVar12._16_4_ = &g_player2;
        auVar12._0_16_ = auVar19._0_16_;
        auVar12._20_4_ = &g_player1;
      }
      else {
        g_selectedPlayerSide_candidate = (byte)g14;
        auVar12._16_4_ = &g_player1;
        auVar12._0_16_ = auVar19._0_16_;
        auVar12._20_4_ = &g_player2;
      }
      auVar21._24_40_ = auVar19._24_40_;
      auVar21._0_24_ = auVar12;
      goto LAB_00017b68;
    }
    ac = ac & 0xfffffff8 | (uint)(MAN < g_player1.controller_type) << 2 |
         (uint)(g_player1.controller_type == MAN) << 1 | (uint)(g_player1.controller_type == COM);
    if (((byte)ac & 1 | MAN < g_player1.controller_type) == 1) {
      g_selectedPlayerSide_candidate = (byte)g14;
      auVar11._16_4_ = &g_player1;
      auVar11._0_16_ = auVar19._0_16_;
      auVar11._20_4_ = &g_player2;
    }
    else {
      g_selectedPlayerSide_candidate = 1;
      auVar11._16_4_ = &g_player2;
      auVar11._0_16_ = auVar19._0_16_;
      auVar11._20_4_ = &g_player1;
    }
    auVar21._24_40_ = auVar19._24_40_;
    auVar21._0_24_ = auVar11;
  }
  Camera_Angle = camera_followP1;
  SPRT_DAT = youlose;
  auVar23._12_52_ = auVar21._12_52_;
  auVar23._0_8_ = auVar21._0_8_;
  auVar23._8_4_ = 0x17b08;
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar23;
  auVar7._4_56_ = auVar23._8_56_;
  auVar7._0_4_ = auStack_40;
  auVar7._60_4_ = 0;
  auVar22 = auVar7 << 0x20;
  Sound_Request(SE_YOU_LOSE);
LAB_00017c64:
  uVar58 = ac;
  pbVar57 = auVar22._20_4_;
  pbVar56 = auVar22._16_4_;
  auVar29._8_56_ = auVar22._8_56_;
  auVar29._4_4_ = auStack_40;
  auVar29._0_4_ = fp;
  ac = ac & 0xfffffff8 | (uint)(pbVar56[3] < g_effective_set_count);
  fp = (undefined1 (*) [64])register0x00000004;
  if (((byte)ac & 1) == 1) {
    auVar35._24_40_ = auVar22._24_40_;
    auVar35._0_20_ = auVar29._0_20_;
    auVar35._20_4_ = 0;
  }
  else {
    auVar32._0_36_ = auVar29._0_36_;
    if (GameOverFlag____0054fcb4 == 0) {
      auVar30._52_12_ = auVar22._52_12_;
      auVar30._0_48_ = auVar29._0_48_;
      auVar30._48_4_ = 0;
      if (*pbVar56 == 0) {
        auVar31._44_20_ = auVar30._44_20_;
        auVar31._0_40_ = auVar29._0_40_;
        if (g_effective_continue_setting == '\x01') {
          GameOverFlag____0054fcb4 = 2;
          ContinueCounter_005555e5 = 10;
          auVar31._40_4_ = 4;
          auVar31._48_16_ = auVar30._48_16_;
          auVar31._44_4_ = 0xa01213;
        }
        else {
          GameOverFlag____0054fcb4 = 3;
          DAT_00557c48 = 0xb4;
          *pbVar57 = (byte)g14;
          auVar31._40_4_ = 4;
        }
        auVar32._44_20_ = auVar31._44_20_;
        auVar32._0_40_ = auVar31._0_40_;
        auVar32._40_4_ = 4;
        ac = uVar58 & 0xfffffff8 | (uint)(pbVar57[1] < 0xb);
        if (((byte)ac & 1 | 0xb < pbVar57[1]) != 1) {
          DAT_00557c54 = 1;
          DAT_00557c48 = 300;
        }
      }
      else {
        auVar32._40_24_ = auVar30._40_24_;
        auVar32._36_4_ = uVar60 + 1;
        uVar60 = uVar60 + 1 & 0xff;
        uVar58 = uVar58 & 0xfffffff8 | (uint)(uVar60 == 8) << 1;
        ac = uVar58 | uVar60 < 8;
        if (((byte)ac & 1 | (byte)(uVar58 >> 1) & 1) != 1) {
          GameOverFlag____0054fcb4 = 3;
          *pbVar56 = (byte)g14;
          DAT_0054fd04 = '\x01';
        }
      }
    }
    else {
      if (g_selectedPlayerSide_candidate < BYTE_0054fd11 ||
          BYTE_0054fd11 < g_selectedPlayerSide_candidate) {
        BYTE_0054fd11 = g_selectedPlayerSide_candidate;
        g_championWinCount = '\x01';
        auVar29._40_24_ = auVar22._40_24_;
        auVar29._36_4_ = 0;
        auVar29._0_36_ = auVar32._0_36_;
        TimeTotal_Minutes_0054fd15 = (byte)g14;
        TimeTotal_Seconds_0054fd16 = (byte)g14;
        TimeTotal_MilliSeconds_0054fd17 = (byte)g14;
      }
      else {
        g_championWinCount = g_championWinCount + '\x01';
      }
      ac = uVar58 & 0xfffffff8 | (uint)(g_effective_vs_finish == '\0') << 1;
      auStackX_0._0_8_ = auVar29._0_8_;
      auStackX_0._12_52_ = auVar29._12_52_;
      if ((((byte)(ac >> 1) & 1) == 1) ||
         (uVar58 = uVar58 & 0xfffffff8 | (uint)(g_championWinCount < g_effective_vs_finish) << 2 |
                   (uint)(g_championWinCount == g_effective_vs_finish) << 1,
         ac = uVar58 | g_effective_vs_finish < g_championWinCount,
         ((byte)ac & 1 | (byte)(uVar58 >> 1) & 1) != 1)) {
        GameOverFlag____0054fcb4 = (byte)g14;
        DAT_005555e9 = 1;
        ac = ac & 0xfffffff8 | (uint)(1 < g_effective_continue_setting) << 2 |
             (uint)(g_effective_continue_setting == '\x01') << 1 |
             (uint)(g_effective_continue_setting == '\0');
        if (((byte)ac & 1 | 1 < g_effective_continue_setting) != 1) {
          DAT_0054fce0 = 1;
          ContinueCounter_005555e5 = 10;
        }
        auStackX_0._8_4_ = 0x17df0;
        auVar33._4_56_ = auStackX_0._8_56_;
        auVar33._0_4_ = auStack_80;
        auVar33._60_4_ = 0;
        auVar33 = auVar33 << 0x20;
        FUN_00018800(0);
      }
      else {
        GameOverFlag____0054fcb4 = 3;
        DAT_00557c48 = 0xb4;
        *pbVar56 = (byte)g14;
        auStackX_0._8_4_ = 0x17e18;
        auVar10._4_56_ = auStackX_0._8_56_;
        auVar10._0_4_ = auStack_80;
        auVar10._60_4_ = 0;
        auVar33 = auVar10 << 0x20;
        FUN_00018800(1);
      }
      fp = &auStack_40;
      auVar34._8_56_ = auVar33._8_56_;
      auVar34._4_4_ = auStack_80;
      auVar34._0_4_ = auStackX_0;
      *pbVar57 = (byte)g14;
      auVar32._52_12_ = auVar33._52_12_;
      auVar32._0_48_ = auVar34._0_48_;
      auVar32._48_4_ = 1;
      (&BYTE_0054fcfa)[g_selectedPlayerSide_candidate ^ 1] = (byte)g14;
    }
    auVar35._24_40_ = auVar32._24_40_;
    auVar35._0_20_ = auVar32._0_20_;
    auVar35._20_4_ = 5;
  }
  iVar61 = auVar35._48_4_;
  DVar62 = auVar35._44_4_;
  uVar58 = auVar35._20_4_;
  ac = ac & 0xfffffff8 | (uint)(5 < uVar58) << 2 | (uint)(uVar58 == 5) << 1 | (uint)(uVar58 < 5);
  auVar36 = auVar35;
  if (((byte)ac & 1 | 5 < uVar58) != 1) {
    auVar37._12_52_ = auVar35._12_52_;
    auVar37._0_8_ = auVar35._0_8_;
    auVar37._8_4_ = 0x17e58;
    *fp = auVar37;
    auVar36._8_56_ = auVar37._8_56_;
    auVar36._4_4_ = auVar35._4_4_ + 1;
    auVar36._0_4_ = fp;
    Sound_Request(BGM_STGCLR);
    fp = auVar35._4_4_;
  }
  if (g_selectedPlayerSide_candidate == 2) {
    auVar36._32_4_ = 0x3c;
  }
  ac = ac & 0xfffffff8 | (uint)(auVar36._32_4_ != 0) << 2 | (uint)(auVar36._32_4_ == 0) << 1;
  if (((byte)(ac >> 1) & 1) != 1) {
    auVar38._20_44_ = auVar36._20_44_;
    auVar38._0_16_ = auVar36._0_16_;
    auVar38._16_4_ = &g_player1;
    auVar36._0_24_ = auVar38._0_24_;
    auVar36._24_4_ = &ButtonCoinTestServiceStart_0054fcd4;
    do {
      iVar59 = auVar36._32_4_;
      uVar60 = auVar36._4_4_ + 0x3f;
      auVar40._12_52_ = auVar36._12_52_;
      auVar40._0_8_ = auVar36._0_8_;
      auVar40._8_4_ = 0x17e84;
      *fp = auVar40;
      auVar39._8_56_ = auVar40._8_56_;
      auVar39._0_8_ = CONCAT44(uVar60,fp) & 0xffffffc0ffffffff;
      FUN_00008250(1);
      fp = (undefined1 (*) [64])((uVar60 & 0xffffffc0) + 0x40);
      auVar41._12_52_ = auVar39._12_52_;
      auVar41._0_8_ = auVar39._0_8_;
      auVar41._8_4_ = 0x17e88;
      *(undefined1 (*) [64])(uVar60 & 0xffffffc0) = auVar41;
      auVar36._8_56_ = auVar41._8_56_;
      auVar36._0_8_ = CONCAT44((uVar60 & 0xffffffc0) + 0x80,uVar60) & 0xffffffffffffffc0;
      FUN_00016e40();
      uVar60 = ac;
      ac = ac & 0xfffffff8 | (uint)(g_player1.controller_type == COM);
      if ((((byte)ac & 1 | MAN < g_player1.controller_type) != 1) &&
         (ac = uVar60 & 0xfffffff8, (ButtonCoinTestServiceStart_0054fcd4 & START_P1) == off)) {
        ac = ac | (uint)(0 < g_debugModeOverride) << 2;
        ac = ac | (uint)(g_debugModeOverride == 0) << 1;
        uVar60 = ac;
        ac = ac | g_debugModeOverride < 0;
        if (((byte)(uVar60 >> 1) & 1) == 1) break;
      }
      uVar60 = ac;
      ac = ac & 0xfffffff8 | (uint)(g_player2.controller_type == COM);
      uVar63 = ac;
      if (((byte)ac & 1 | MAN < g_player2.controller_type) != 1) {
        ac = uVar60 & 0xfffffff8 | 2;
        uVar63 = uVar60 & 0xfffffff8;
        if ((ButtonCoinTestServiceStart_0054fcd4 & START_P2) == off) break;
      }
      ac = uVar63;
      uVar60 = ac;
      uVar63 = (uint)g_selectedPlayerSide_candidate;
      ac = ac & 0xfffffff8 | (uint)((&g_player1)[uVar63].action_state < 0xD_SPECIALMOVE);
      if ((((byte)ac & 1 | 0xD_SPECIALMOVE < (&g_player1)[uVar63].action_state) != 1) &&
         (ac = uVar60 & 0xfffffff8, (byte)((&g_player1)[uVar63].action_code + CMD_NML_UP_F_LK) < 8))
      {
        bVar1 = (&g_player1)[uVar63].animation_flag;
        uVar60 = uVar60 & 0xfffffff8 | (uint)(1 < bVar1) << 2 | (uint)(bVar1 == 1) << 1;
        ac = uVar60 | bVar1 == 0;
        if (((byte)(uVar60 >> 1) & 1) == 1) break;
      }
      uVar60 = ac & 0xfffffff8 | (uint)(1 < iVar59) << 2;
      ac = uVar60 | (uint)(iVar59 == 1) << 1 | (uint)(iVar59 < 1);
      auVar36._32_4_ = iVar59 + -1;
    } while (((byte)ac & 1 | (byte)(uVar60 >> 2) & 1) == 1);
  }
  uVar60 = auVar36._4_4_ + 0x3f;
  uVar63 = uVar60 & 0xffffffc0;
  auVar43._12_52_ = auVar36._12_52_;
  auVar43._0_8_ = auVar36._0_8_;
  auVar43._8_4_ = 0x17f14;
  *fp = auVar43;
  auVar42._8_56_ = auVar43._8_56_;
  auVar42._0_8_ = CONCAT44(uVar60,fp) & 0xffffffc0ffffffff;
  FUN_00008250(1);
  pauVar2 = (undefined1 (*) [64])(uVar63 + 0x40);
  auVar45._12_52_ = auVar42._12_52_;
  auVar45._0_8_ = auVar42._0_8_;
  auVar45._8_4_ = 0x17f18;
  *(undefined1 (*) [64])(uVar60 & 0xffffffc0) = auVar45;
  auVar44._8_56_ = auVar45._8_56_;
  auVar44._0_8_ = CONCAT44(uVar63 + 0x80,uVar60) & 0xffffffffffffffc0;
  FUN_00016e40();
  uVar60 = ac;
  auVar46._37_27_ = auVar44._37_27_;
  auVar46._0_36_ = auVar44._0_36_;
  auVar46[0x24] = auVar35[0x24];
  auVar48._0_8_ = auVar44._0_8_;
  auVar48._12_52_ = auVar46._12_52_;
  if (DAT_0054fd04 == '\x01') {
    ac = ac & 0xfffffff8 | (uint)(g_effective_nation != JAPAN) << 2 |
         (uint)(g_effective_nation == JAPAN) << 1;
    auVar50 = auVar46;
    if (g_effective_nation == JAPAN) {
      DVar62 = (&g_bgm_command_by_character_id)
               [(&g_player1)[g_selectedPlayerSide_candidate].character_id];
      auVar48._8_4_ = 0x17f5c;
      *(undefined1 (*) [64])(uVar63 + 0x40) = auVar48;
      auVar47._8_56_ = auVar48._8_56_;
      auVar47._4_4_ = (undefined1 (*) [64])(uVar63 + 0xc0);
      auVar47._0_4_ = pauVar2;
      Sound_Request(DVar62);
      SPRT_DAT = clear;
      BYTE_00555617 = 1;
      fp = (undefined1 (*) [64])(uVar63 + 0x80);
      do {
        uVar58 = auVar47._4_4_ + 0x3f;
        pauVar2 = (undefined1 (*) [64])(uVar58 & 0xffffffc0);
        auVar49._12_52_ = auVar47._12_52_;
        auVar49._0_8_ = auVar47._0_8_;
        auVar49._8_4_ = 0x17f7c;
        *fp = auVar49;
        auVar47._8_56_ = auVar49._8_56_;
        auVar47._4_4_ = pauVar2 + 1;
        auVar47._0_4_ = fp;
        FUN_00008250(1);
        ac = ac & 0xfffffff8 | (uint)(BYTE_00555617 != 0) << 2 | (uint)(BYTE_00555617 == 0) << 1;
        fp = pauVar2;
      } while (BYTE_00555617 != 0);
      auVar51._12_52_ = auVar47._12_52_;
      auVar51._0_8_ = auVar47._0_8_;
      auVar51._8_4_ = 0x17f94;
      *(undefined1 (*) [64])(uVar58 & 0xffffffc0) = auVar51;
      auVar50._8_56_ = auVar51._8_56_;
      auVar50._4_4_ = 0;
      auVar50._0_4_ = pauVar2;
      Sound_Request(0xa00310);
    }
    g_vs_com_match_index_candidate = auVar46[0x24];
    DAT_00557c48 = 0xb4;
    fp = (undefined1 (*) [64])auVar50._0_4_;
    return;
  }
  ac = ac & 0xfffffff8 | (uint)(uVar58 < 5);
  fp = pauVar2;
  auVar52 = auVar46;
  if (((((byte)ac & 1 | 5 < uVar58) != 1) &&
      (ac = uVar60 & 0xfffffff8 | (uint)(GameOverFlag____0054fcb4 == 2) << 1,
      ((byte)(ac >> 1) & 1) != 1)) &&
     (ac = uVar60 & 0xfffffff8 | (uint)(0 < iVar61) << 2 | (uint)(iVar61 == 0) << 1 |
           (uint)(iVar61 < 0), ((byte)ac & 1 | 0 < iVar61) != 1)) {
    fp = (undefined1 (*) [64])(uVar63 + 0x80);
    auVar53._8_4_ = 0x17fcc;
    auVar53._0_8_ = auVar48._0_8_;
    auVar53._12_52_ = auVar48._12_52_;
    *(undefined1 (*) [64])(uVar63 + 0x40) = auVar53;
    auVar52._8_56_ = auVar53._8_56_;
    auVar52._4_4_ = uVar63 + 0xc0;
    auVar52._0_4_ = pauVar2;
    FUN_000187c0();
  }
  iVar55 = auVar52._4_4_;
  DAT_005555dc = auVar22[0x1c];
  DAT_005555dd = DAT_005555dd + '\x01';
  if (auVar35._40_4_ != 0xff) {
    Camera_Angle = auVar35[0x28];
  }
  uVar60 = ac & 0xfffffff8 | (uint)((int)DVar62 < -1) << 2 | (uint)(DVar62 == 0xffffffff) << 1;
  ac = uVar60 | -1 < (int)DVar62;
  g_vs_com_match_index_candidate = auVar46[0x24];
  DAT_00557c44 = uVar58;
  if (((byte)(uVar60 >> 1) & 1) != 1) {
    auVar54._12_52_ = auVar52._12_52_;
    auVar54._0_8_ = auVar52._0_8_;
    auVar54._8_4_ = 0x18020;
    *fp = auVar54;
    auVar52._8_56_ = auVar54._8_56_;
    auVar52._4_4_ = 0;
    auVar52._0_4_ = fp;
    Sound_Request(DVar62);
    fp = (undefined1 (*) [64])(iVar55 + 0x3fU & 0xffffffc0);
  }
  ac = ac & 0xfffffff8 | (uint)(2 < GameOverFlag____0054fcb4) << 2 |
       (uint)(GameOverFlag____0054fcb4 == 2) << 1 | (uint)(GameOverFlag____0054fcb4 < 2);
  if (((byte)ac & 1 | 2 < GameOverFlag____0054fcb4) != 1) {
    Sound_Request(BGM_CONTI);
    return;
  }
  fp = (undefined1 (*) [64])auVar52._0_4_;
  return;
}

