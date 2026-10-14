
/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0x00000000 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* Higher-level resource-streaming state machine, including backdrop and colorxlat updates */

void FUN_00070f40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  undefined1 *puVar1;
  short sVar2;
  byte bVar3;
  uint8_t uVar4;
  uint uVar5;
  undefined4 unaff_pfp;
  int iVar26;
  undefined4 unaff_retaddr;
  undefined1 in_register_0000000c [52];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar18 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  word *pwVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  undefined8 uVar38;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [999936];
  undefined1 auVar10 [64];
  undefined1 auVar17 [64];
  undefined1 auVar19 [64];
  
  uVar35 = ac;
  uVar38 = CONCAT44(param_2,param_1);
  auVar6._8_4_ = unaff_retaddr;
  auVar6._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  auVar6._12_52_ = in_register_0000000c;
  uVar33 = (uint)DAT_005b9774;
  uVar30 = ac & 0xfffffff8 | (uint)(uVar33 == 0) << 1;
  if ((((byte)(uVar30 >> 1) & 1) != 1) && (uVar30 = ac & 0xfffffff8, BYTE_0054fcfe == 0)) {
    param_7 = 0xff;
    uVar33 = uVar33 + 0xff;
    uVar30 = ac & 0xfffffff8 | (uint)((uVar33 & 0xff) != 0) << 2;
    DAT_005b9774 = (byte)uVar33;
    if (((byte)(uVar30 >> 2) & 1) != 1) {
      ac = ac & 0xfffffff8 | (uint)(MODE_CHARSEL < GameMode) << 2 |
           (uint)(GameMode == MODE_CHARSEL) << 1 | (uint)(GameMode < MODE_CHARSEL);
      if ((((byte)ac & 1 | MODE_CHARSEL < GameMode) == 1) ||
         (uVar30 = uVar35 & 0xfffffff8 | (uint)(1 < DAT_005555eb) << 2 |
                   (uint)(DAT_005555eb == 1) << 1, ac = uVar30 | DAT_005555eb == 0,
         ((byte)ac & 1 | (byte)(uVar30 >> 1) & 1) != 1)) {
        auVar7._8_4_ = 0x70f94;
        auVar7._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
        auVar7._12_52_ = in_register_0000000c;
        *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar7;
        auVar6._8_56_ = auVar7._8_56_;
        auVar6._4_4_ = auStack_40;
        auVar6._0_4_ = fp;
        uVar38 = FUN_00035a30();
        fp = (undefined1 (*) [64])register0x00000004;
      }
      ac = ac & 0xfffffff8 | (uint)(MODE_CHARSEL < GameMode) << 2 |
           (uint)(GameMode == MODE_CHARSEL) << 1 | (uint)(GameMode < MODE_CHARSEL);
      uVar30 = ac;
      if (((byte)ac & 1 | MODE_CHARSEL < GameMode) != 1) {
        puVar1 = (undefined1 *)(auVar6._4_4_ + 0x3fU & 0xffffffc0);
        auVar8._12_52_ = auVar6._12_52_;
        auVar8._0_8_ = auVar6._0_8_;
        auVar8._8_4_ = 0x70fa4;
        *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar8;
        auVar6._8_56_ = auVar8._8_56_;
        auVar6._4_4_ = puVar1 + 0x40;
        auVar6._0_4_ = fp;
        uVar38 = FUN_00070a70();
        fp = (undefined1 (*) [64])puVar1;
        uVar30 = ac;
      }
    }
  }
  ac = uVar30;
  uVar35 = ac;
  uVar30 = ac & 0xfffffff8 | (uint)(1 < StageLoadFlag) << 2;
  ac = uVar30 | (uint)(StageLoadFlag == 1) << 1 | (uint)(StageLoadFlag == 0);
  g_reuse_current_stage_backdrop = (byte)g14;
  auVar10._0_8_ = auVar6._0_8_;
  auVar10._12_52_ = auVar6._12_52_;
  if (((byte)ac & 1 | (byte)(uVar30 >> 2) & 1) != 1) {
    uVar33 = auVar6._4_4_ + 0x3f;
    uVar35 = uVar33 & 0xffffffc0;
    auVar10._8_4_ = 0x70fc0;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar10;
    auVar9._8_56_ = auVar10._8_56_;
    auVar9._4_4_ = uVar35 + 0x40;
    auVar9._0_4_ = fp;
    FUN_000706a0();
    uVar5 = ac;
    uVar37 = (uint)g_player1.character_id;
    uVar36 = (uint)g_player2.costume_id;
    uVar27 = (uint)g_player2.character_id;
    uVar28 = (uint)g_current_stage;
    g_requested_fighter_texture_selector_P1 = costume_0[uVar37 + (uint)g_player1.costume_id * 0xd];
    uVar34 = (uint)g_requested_fighter_texture_selector_P1;
    g_requested_fighter_texture_selector_P2 = costume_0[uVar27 + uVar36 * 0xd];
    uVar29 = (uint)g_requested_fighter_texture_selector_P2;
    uVar30 = ac & 0xfffffff8 | (uint)(uVar28 < 0xff) << 2 | (uint)(uVar28 == 0xff) << 1;
    ac = uVar30 | 0xff < uVar28;
    auVar11._0_8_ = auVar9._0_8_;
    auVar11._12_52_ = auVar9._12_52_;
    if (((byte)(uVar30 >> 1) & 1) == 1) {
      auVar12._8_4_ = 0x71050;
      auVar12._0_8_ = auVar11._0_8_;
      auVar12._12_52_ = auVar11._12_52_;
      *(undefined1 (*) [64])(uVar33 & 0xffffffc0) = auVar12;
      auVar9._8_56_ = auVar12._8_56_;
      auVar9._4_4_ = 0;
      auVar9._0_4_ = uVar35;
      StageBackdrop_LoadForCurrentStage
                (uVar27,uVar28,0xff,param_4,uVar29,uVar34,uVar36,uVar37,param_9,param_10,param_11,
                 param_12);
      BYTE_005555e0 = 1;
    }
    else {
      ac = uVar5 & 0xfffffff8 | (uint)(GameMode != MODE_LOAD) << 2 |
           (uint)(GameMode == MODE_LOAD) << 1;
      BYTE_005555e0 = (byte)g14;
      if (((byte)(ac >> 1) & 1) != 1) {
        auVar11._8_4_ = 0x71048;
        *(undefined1 (*) [64])(uVar33 & 0xffffffc0) = auVar11;
        auVar9._8_56_ = auVar11._8_56_;
        auVar9._4_4_ = 0;
        auVar9._0_4_ = uVar35;
        FUN_000359f0();
      }
    }
    DAT_005b974e = (byte)g14;
    fp = (undefined1 (*) [64])auVar9._0_4_;
    return;
  }
  ac = uVar35 & 0xfffffff8 | (uint)('\x01' < DAT_005b974e) << 2 |
       (uint)(DAT_005b974e == '\x01') << 1 | (uint)(DAT_005b974e < '\x01');
  if (((byte)ac & 1 | '\x01' < DAT_005b974e) != 1) {
    fp = (undefined1 (*) [64])auVar6._0_4_;
    return;
  }
  ac = uVar35 & 0xfffffff8;
  if (BYTE_005555e0 != 1) {
    ac = uVar35 & 0xfffffff8 | (uint)(GameMode == MODE_LOAD) << 1;
    if (((byte)(ac >> 1) & 1) != 1) {
      uVar30 = (uint)DAT_005b974f;
      ac = uVar35 & 0xfffffff8 | (uint)(1 < uVar30) << 2 | (uint)(uVar30 == 1) << 1 |
           (uint)(uVar30 == 0);
      if (((byte)ac & 1 | 1 < uVar30) != 1) {
        DAT_005b974f = (byte)g14;
        puVar1 = (undefined1 *)(auVar6._4_4_ + 0x3fU & 0xffffffc0);
        auVar13._8_4_ = 0x710a8;
        auVar13._0_8_ = auVar10._0_8_;
        auVar13._12_52_ = auVar10._12_52_;
        *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar13;
        auVar6._8_56_ = auVar13._8_56_;
        auVar6._4_4_ = puVar1 + 0x40;
        auVar6._0_4_ = fp;
        StageBackdrop_LoadForCurrentStage
                  ((int)uVar38,(int)((ulonglong)uVar38 >> 0x20),param_3,param_4,uVar30,uVar33,
                   param_7,param_8,param_9,param_10,param_11,param_12);
        uVar30 = ac & 0xfffffff8 | (uint)(1 < g_reuse_current_stage_backdrop) << 2 |
                 (uint)(g_reuse_current_stage_backdrop == 1) << 1;
        ac = uVar30 | g_reuse_current_stage_backdrop == 0;
        if (((byte)(uVar30 >> 1) & 1) != 1) {
          return;
        }
        g_reuse_current_stage_backdrop = (byte)g14;
        fp = (undefined1 (*) [64])puVar1;
      }
    }
    iVar26 = auVar6._4_4_;
    ac = ac & 0xfffffff8 | (uint)(DAT_005b9758 < '\x01');
    if (((byte)ac & 1 | '\x01' < DAT_005b9758) != 1) {
      do {
        while( true ) {
          uVar30 = ac & 0xfffffff8;
          auVar22._0_8_ = auVar6._0_8_;
          auVar22._12_52_ = auVar6._12_52_;
          puVar1 = *fp;
          if ((((g_texture_upload_pending_flags_candidate & 1) != 0) || (DAT_005b9745 == 0xfe)) ||
             (DAT_005b9746 == 0xfe)) break;
          uVar35 = (uint)DAT_005b9748;
          uVar33 = (uint)g_requested_fighter_texture_selector_P1;
          if (uVar33 < uVar35 || uVar35 < uVar33) {
            if (uVar33 < DAT_005b9749 || DAT_005b9749 < uVar33) {
              uVar35 = (uint)DAT_005a6f1c;
              bVar3 = (&DAT_005b9748)[uVar35];
              ac = uVar30 | (uint)(bVar3 < 0xfe) << 2 | (uint)(bVar3 == 0xfe) << 1 |
                   (uint)(0xfe < bVar3);
              if (((byte)ac & 1 | bVar3 < 0xfe) == 1) {
                DAT_005a6f1c = DAT_005a6f1c ^ 1;
                (&DAT_005b9748)[DAT_005a6f1c] = 0xfe;
                DAT_005b9744 = 0xfe;
LAB_000715e0:
                g_texture_upload_state = (byte)g14;
              }
              else {
                auVar22._8_4_ = 0x71328;
                *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar22;
                auVar6._8_56_ = auVar22._8_56_;
                auVar6._4_4_ = (undefined1 *)(iVar26 + 0x3fU & 0xffffffc0) + 0x40;
                auVar6._0_4_ = fp;
                FUN_000719e0(uVar35,0,uVar33);
                uVar4 = g_texture_upload_state;
                ac = ac & 0xfffffff8 | (uint)(g_texture_upload_state != 0xff) << 2 |
                     (uint)(g_texture_upload_state == 0xff) << 1;
                puVar1 = (undefined1 *)(iVar26 + 0x3fU & 0xffffffc0);
                if (g_texture_upload_state == 0xff) {
                  g_texture_upload_pending_flags_candidate =
                       g_texture_upload_pending_flags_candidate ^ 1;
                  (&DAT_005b9748)[DAT_005a6f1c] = g_requested_fighter_texture_selector_P1;
                  DAT_005b9744 = uVar4;
                  return;
                }
              }
LAB_000715e8:
              fp = (undefined1 (*) [64])puVar1;
              if (g_current_p1_colorxlat_selector != g_requested_fighter_texture_selector_P1) {
                g_colorxlat_changed_latch_candidate = 1;
                g_colorxlat_pending_mask = g_colorxlat_pending_mask | COLORXLAT_PENDING_P1;
              }
              if (g_current_p2_colorxlat_selector != g_requested_fighter_texture_selector_P2) {
                g_colorxlat_changed_latch_candidate = 1;
                g_colorxlat_pending_mask = g_colorxlat_pending_mask | COLORXLAT_PENDING_P2;
              }
              if (g_current_stage_colorxlat != g_current_stage) {
                g_colorxlat_changed_latch_candidate = 1;
                g_colorxlat_pending_mask = g_colorxlat_pending_mask | COLORXLAT_PENDING_STAGE;
              }
              uVar30 = ac & 0xfffffff8 |
                       (uint)(g_texture_upload_pending_flags_candidate != '\0') << 2 |
                       (uint)(g_texture_upload_pending_flags_candidate == '\0') << 1;
              if (g_texture_upload_pending_flags_candidate == '\0') {
                if (DAT_005a6f1e == 0) {
                  DAT_005a6f10 = g14;
                }
                else {
                  DAT_005a6f10 = (int)(short)(&WORD_000c9450)[(&DAT_005a6f20)[DAT_005a6f1e]];
                }
                if (DAT_005a6f1c == 0) {
                  DAT_005a6f14 = g14;
                }
                else {
                  DAT_005a6f14 = (int)(short)(&WORD_000c9510)[(DAT_005b9749 & 0x7f) * 3];
                }
                DAT_005a6f00 = DAT_005a6f14;
                if (DAT_005a6f1d == 0) {
                  uVar30 = DAT_005b974a & 0x7f;
                  iVar31 = uVar30 * 6;
                  if ((DAT_005b974a & 0x80) != 0) {
                    iVar31 = iVar31 + 0x4e;
                  }
                  sVar2 = *(short *)((int)&WORD_000c94c0 + iVar31);
                  bVar3 = DAT_005b974a;
                }
                else {
                  uVar30 = DAT_005b974b & 0x7f;
                  iVar31 = uVar30 * 6;
                  if ((DAT_005b974b & 0x80) != 0) {
                    iVar31 = iVar31 + 0x4e;
                  }
                  sVar2 = *(short *)((int)&WORD_000c94c4 + iVar31);
                  bVar3 = DAT_005b974b;
                }
                pwVar32 = &WORD_000c9470;
                if ((bVar3 & 0x80) != 0) {
                  pwVar32 = &WORD_000c948a;
                }
                DAT_005a6f04 = (int)sVar2 + (int)(short)pwVar32[uVar30];
                BYTE_005555e0 = 1;
                DAT_005b9758 = (byte)g14;
                uVar33 = ac & 0xfffffff8 | (uint)(GameMode == MODE_LOAD) << 1;
                ac = uVar33 | GameMode != MODE_LOAD;
                uVar30 = ac;
                DAT_005a6f18 = DAT_005a6f04;
                if (((byte)(uVar33 >> 1) & 1) != 1) {
                  auVar25._12_52_ = auVar6._12_52_;
                  auVar25._0_8_ = auVar6._0_8_;
                  auVar25._8_4_ = 0x71810;
                  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar25;
                  auVar6._8_56_ = auVar25._8_56_;
                  auVar6._4_4_ = (undefined1 *)0x0;
                  auVar6._0_4_ = fp;
                  FUN_0006f7f0();
                  ac = ac & 0xfffffff8 | (uint)(MODE_FIGHT < GameMode) << 2 |
                       (uint)(GameMode == MODE_FIGHT) << 1 | (uint)(GameMode == MODE_LOAD);
                  if (((byte)ac & 1 | MODE_FIGHT < GameMode) != 1) {
                    DAT_005b9774 = 8;
                    return;
                  }
                  DAT_005b9774 = 9;
                  uVar30 = ac;
                }
              }
              ac = uVar30;
              fp = (undefined1 (*) [64])auVar6._0_4_;
              return;
            }
            uVar30 = uVar30 | (uint)(uVar35 < 0xfe) << 2;
            ac = uVar30 | 0xfe < uVar35;
            g_texture_upload_pending_flags_candidate = g_texture_upload_pending_flags_candidate ^ 1;
            DAT_005a6f1c = 1;
            if (((byte)ac & 1 | (byte)(uVar30 >> 2) & 1) != 1) {
              DAT_005b9748 = 0xff;
              DAT_005b9744 = 0xff;
            }
          }
          else {
            g_texture_upload_pending_flags_candidate = g_texture_upload_pending_flags_candidate ^ 1;
            uVar30 = uVar30 | (uint)(DAT_005b9749 < 0xfe) << 2;
            ac = uVar30 | 0xfe < DAT_005b9749;
            DAT_005a6f1c = (byte)g14;
            if (((byte)ac & 1 | (byte)(uVar30 >> 2) & 1) != 1) {
              DAT_005b9749 = 0xff;
              DAT_005b9744 = 0xff;
            }
          }
        }
        if ((((g_texture_upload_pending_flags_candidate & 2) != 0) || (DAT_005b9744 == 0xfe)) ||
           (DAT_005b9746 == 0xfe)) {
          ac = uVar30;
          if ((((g_texture_upload_pending_flags_candidate & 4) != 0) ||
              (ac = uVar30 | (uint)(DAT_005b9744 == 0xfe) << 1, ((byte)(ac >> 1) & 1) == 1)) ||
             (ac = uVar30 | (uint)(DAT_005b9745 == 0xfe) << 1, ((byte)(ac >> 1) & 1) == 1))
          goto LAB_000715e8;
          uVar33 = (uint)g_current_stage;
          ac = uVar30 | uVar33 < DAT_005a6f20;
          if (((byte)ac & 1 | DAT_005a6f20 < uVar33) != 1) {
            g_texture_upload_pending_flags_candidate = g_texture_upload_pending_flags_candidate ^ 4;
            DAT_005a6f1e = (byte)g14;
            goto LAB_000715e8;
          }
          ac = uVar30 | uVar33 < DAT_005a6f21;
          if (((byte)ac & 1 | DAT_005a6f21 < uVar33) != 1) {
            g_texture_upload_pending_flags_candidate = g_texture_upload_pending_flags_candidate ^ 4;
            DAT_005a6f1e = 1;
            goto LAB_000715e8;
          }
          uVar35 = (uint)DAT_005a6f1e;
          bVar3 = (&DAT_005a6f20)[uVar35];
          ac = uVar30 | (uint)(bVar3 < 0xfe) << 2 | (uint)(bVar3 == 0xfe) << 1 |
               (uint)(0xfe < bVar3);
          if (((byte)ac & 1 | bVar3 < 0xfe) == 1) {
            DAT_005a6f1e = DAT_005a6f1e ^ 1;
            (&DAT_005a6f20)[DAT_005a6f1e] = 0xfe;
            DAT_005b9746 = 0xfe;
            goto LAB_000715e0;
          }
          auVar24._8_4_ = 0x71574;
          auVar24._0_8_ = auVar22._0_8_;
          auVar24._12_52_ = auVar22._12_52_;
          *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar24;
          auVar6._8_56_ = auVar24._8_56_;
          auVar6._4_4_ = (undefined1 *)(iVar26 + 0x3fU & 0xffffffc0) + 0x40;
          auVar6._0_4_ = fp;
          FUN_000719d0(uVar35,uVar33);
          uVar4 = g_texture_upload_state;
          ac = ac & 0xfffffff8 | (uint)(g_texture_upload_state != 0xff) << 2 |
               (uint)(g_texture_upload_state == 0xff) << 1;
          puVar1 = (undefined1 *)(iVar26 + 0x3fU & 0xffffffc0);
          if (g_texture_upload_state == 0xff) {
            g_texture_upload_pending_flags_candidate = g_texture_upload_pending_flags_candidate ^ 4;
            (&DAT_005a6f20)[DAT_005a6f1e] = g_current_stage;
            DAT_005b9746 = uVar4;
            return;
          }
          goto LAB_000715e8;
        }
        uVar35 = (uint)DAT_005b974a;
        uVar33 = (uint)g_requested_fighter_texture_selector_P2;
        if (uVar33 < uVar35 || uVar35 < uVar33) {
          if (uVar33 < DAT_005b974b || DAT_005b974b < uVar33) {
            uVar35 = (uint)DAT_005a6f1d;
            bVar3 = (&DAT_005b974a)[uVar35];
            ac = uVar30 | (uint)(bVar3 < 0xfe) << 2 | (uint)(bVar3 == 0xfe) << 1 |
                 (uint)(0xfe < bVar3);
            if (((byte)ac & 1 | bVar3 < 0xfe) != 1) {
              auVar23._8_4_ = 0x71470;
              auVar23._0_8_ = auVar22._0_8_;
              auVar23._12_52_ = auVar22._12_52_;
              *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar23;
              auVar6._8_56_ = auVar23._8_56_;
              auVar6._4_4_ = (undefined1 *)(iVar26 + 0x3fU & 0xffffffc0) + 0x40;
              auVar6._0_4_ = fp;
              FUN_000719e0(uVar35,1,uVar33);
              uVar4 = g_texture_upload_state;
              ac = ac & 0xfffffff8 | (uint)(g_texture_upload_state != 0xff) << 2 |
                   (uint)(g_texture_upload_state == 0xff) << 1;
              puVar1 = (undefined1 *)(iVar26 + 0x3fU & 0xffffffc0);
              if (g_texture_upload_state == 0xff) {
                g_texture_upload_pending_flags_candidate =
                     g_texture_upload_pending_flags_candidate ^ 2;
                (&DAT_005b974a)[DAT_005a6f1d] = g_requested_fighter_texture_selector_P2;
                DAT_005b9745 = uVar4;
                return;
              }
              goto LAB_000715e8;
            }
            DAT_005a6f1d = DAT_005a6f1d ^ 1;
            (&DAT_005b974a)[DAT_005a6f1d] = 0xfe;
            DAT_005b9745 = 0xfe;
            goto LAB_000715e0;
          }
          uVar30 = uVar30 | (uint)(uVar35 < 0xfe) << 2;
          ac = uVar30 | 0xfe < uVar35;
          g_texture_upload_pending_flags_candidate = g_texture_upload_pending_flags_candidate ^ 2;
          DAT_005a6f1d = 1;
          if (((byte)ac & 1 | (byte)(uVar30 >> 2) & 1) != 1) {
            DAT_005b974a = 0xff;
            DAT_005b9745 = 0xff;
          }
        }
        else {
          g_texture_upload_pending_flags_candidate = g_texture_upload_pending_flags_candidate ^ 2;
          uVar30 = uVar30 | (uint)(DAT_005b974b < 0xfe) << 2;
          ac = uVar30 | 0xfe < DAT_005b974b;
          DAT_005a6f1d = (byte)g14;
          if (((byte)ac & 1 | (byte)(uVar30 >> 2) & 1) != 1) {
            DAT_005b974b = 0xff;
            DAT_005b9745 = 0xff;
          }
        }
      } while( true );
    }
  }
  uVar30 = ac;
  if (g_colorxlat_changed_latch_candidate == 1) {
    g_colorxlat_update_active_candidate = '\x01';
    g_colorxlat_changed_latch_candidate = (byte)g14;
  }
  ac = ac & 0xfffffff8 | (uint)(g_current_stage != STAGE_SCREENSPLASH) << 2 |
       (uint)(g_current_stage == STAGE_SCREENSPLASH) << 1;
  if (g_current_stage != STAGE_SCREENSPLASH) {
    ac = uVar30 & 0xfffffff8;
    switch(BYTE_0054fcfd) {
    case 0:
      ac = uVar30 & 0xfffffff8 | (uint)(DAT_005b9892 != 0) << 2 | (uint)(DAT_005b9892 == 0) << 1;
      if (((byte)(ac >> 1) & 1) != 1) {
        DAT_005b9770 = g14;
      }
      puVar1 = (undefined1 *)(auVar6._4_4_ + 0x3fU & 0xffffffc0);
      auVar14._12_52_ = auVar6._12_52_;
      auVar14._0_8_ = auVar6._0_8_;
      auVar14._8_4_ = 0x7114c;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar14;
      auVar6._8_56_ = auVar14._8_56_;
      auVar6._4_4_ = puVar1 + 0x40;
      auVar6._0_4_ = fp;
      FUN_00070a70();
      fp = (undefined1 (*) [64])puVar1;
      break;
    case 3:
      ac = uVar30 & 0xfffffff8 | (uint)(DAT_005b9892 == 3) << 1;
      if (((byte)(ac >> 1) & 1) != 1) {
        DAT_005b9790 = (undefined2)g14;
        DAT_005b97a8 = (undefined2)g14;
        DAT_005b97c0 = (undefined2)g14;
        DAT_005b97d8 = (undefined2)g14;
        DAT_005b97f0 = (undefined2)g14;
        DAT_005b9808 = (undefined2)g14;
        DAT_005b9820 = (undefined2)g14;
        DAT_005b9838 = (undefined2)g14;
      }
    }
    uVar30 = ac & 0xfffffff8 | (uint)(BYTE_00555618 == 0) << 1;
    ac = uVar30 | BYTE_00555618 != 0;
    DAT_005b9892 = BYTE_0054fcfd;
    if (((byte)(uVar30 >> 1) & 1) != 1) {
      puVar1 = (undefined1 *)(auVar6._4_4_ + 0x3fU & 0xffffffc0);
      auVar15._12_52_ = auVar6._12_52_;
      auVar15._0_8_ = auVar6._0_8_;
      auVar15._8_4_ = 0x711c0;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar15;
      auVar6._8_56_ = auVar15._8_56_;
      auVar6._4_4_ = puVar1 + 0x40;
      auVar6._0_4_ = fp;
      FUN_000719f0();
      fp = (undefined1 (*) [64])puVar1;
    }
    ac = ac & 0xfffffff8 | (uint)(GameMode != MODE_LOAD) << 2 | (uint)(GameMode == MODE_LOAD) << 1;
    if (((byte)(ac >> 1) & 1) != 1) {
      uVar30 = auVar6._4_4_ + 0x3f;
      uVar33 = uVar30 & 0xffffffc0;
      auVar17._12_52_ = auVar6._12_52_;
      auVar17._0_8_ = auVar6._0_8_;
      auVar17._8_4_ = 0x711d0;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar17;
      auVar16._8_56_ = auVar17._8_56_;
      auVar16._0_8_ = CONCAT44(uVar30,fp) & 0xffffffc0ffffffff;
      FUN_00071840();
      auVar19._12_52_ = auVar16._12_52_;
      auVar19._0_8_ = auVar16._0_8_;
      auVar19._8_4_ = 0x711d4;
      *(undefined1 (*) [64])(uVar30 & 0xffffffc0) = auVar19;
      auVar18._8_56_ = auVar19._8_56_;
      auVar18._0_8_ = CONCAT44(uVar33 + 0x80,uVar30) & 0xffffffffffffffc0;
      FUN_0006fd40();
      ac = ac & 0xfffffff8 | (uint)(STAGE_BEACH < g_current_stage) << 2 |
           (uint)(g_current_stage == STAGE_BEACH) << 1 | (uint)(g_current_stage < STAGE_BEACH);
      fp = (undefined1 (*) [64])(uVar33 + 0x40);
      if (((byte)ac & 1 | STAGE_BEACH < g_current_stage) != 1) {
        fp = (undefined1 (*) [64])(uVar33 + 0x80);
        auVar20._12_52_ = auVar18._12_52_;
        auVar20._0_8_ = auVar18._0_8_;
        auVar20._8_4_ = 0x711e4;
        *(undefined1 (*) [64])(uVar33 + 0x40) = auVar20;
        auVar18._8_56_ = auVar20._8_56_;
        auVar18._4_4_ = uVar33 + 0xc0;
        auVar18._0_4_ = (undefined1 (*) [64])(uVar33 + 0x40);
        FUN_00070390();
      }
      auVar21._12_52_ = auVar18._12_52_;
      auVar21._0_8_ = auVar18._0_8_;
      auVar21._8_4_ = 0x711e8;
      *fp = auVar21;
      auVar6._8_56_ = auVar21._8_56_;
      auVar6._4_4_ = (undefined1 *)0x0;
      auVar6._0_4_ = fp;
      FUN_00071ad0();
    }
    if (BYTE_0054fcfe == 0) {
      DAT_005a6f0d = DAT_005a6f0d + '\x01';
      DAT_005a7620 = DAT_005a7620 + 0x80;
      DAT_005b9750 = DAT_005b9750 + 0x800;
      DAT_005b9754 = DAT_005b9754 + 0x400;
    }
    fp = (undefined1 (*) [64])auVar6._0_4_;
    ac = ac & 0xfffffff8 | (uint)(BYTE_0054fcfe != 0) << 2 | (uint)(BYTE_0054fcfe == 0) << 1;
    return;
  }
  fp = (undefined1 (*) [64])auVar6._0_4_;
  return;
}

