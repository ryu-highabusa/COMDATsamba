
/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0x00000000 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00070f40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  undefined1 *puVar1;
  short sVar2;
  byte bVar3;
  uint uVar4;
  undefined4 unaff_pfp;
  int iVar25;
  undefined4 unaff_retaddr;
  undefined1 in_register_0000000c [52];
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar17 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  word *pwVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  undefined8 uVar37;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [999936];
  undefined1 auVar9 [64];
  undefined1 auVar16 [64];
  undefined1 auVar18 [64];
  
  uVar34 = ac;
  uVar37 = CONCAT44(param_2,param_1);
  auVar5._8_4_ = unaff_retaddr;
  auVar5._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  auVar5._12_52_ = in_register_0000000c;
  uVar32 = (uint)DAT_005b9774;
  uVar29 = ac & 0xfffffff8 | (uint)(uVar32 == 0) << 1;
  if ((((byte)(uVar29 >> 1) & 1) != 1) && (uVar29 = ac & 0xfffffff8, BYTE_0054fcfe == 0)) {
    param_7 = 0xff;
    uVar32 = uVar32 + 0xff;
    uVar29 = ac & 0xfffffff8 | (uint)((uVar32 & 0xff) != 0) << 2;
    DAT_005b9774 = (byte)uVar32;
    if (((byte)(uVar29 >> 2) & 1) != 1) {
      ac = ac & 0xfffffff8 | (uint)(MODE_CHARSEL < GameMode) << 2 |
           (uint)(GameMode == MODE_CHARSEL) << 1 | (uint)(GameMode < MODE_CHARSEL);
      if ((((byte)ac & 1 | MODE_CHARSEL < GameMode) == 1) ||
         (uVar29 = uVar34 & 0xfffffff8 | (uint)(1 < DAT_005555eb) << 2 |
                   (uint)(DAT_005555eb == 1) << 1, ac = uVar29 | DAT_005555eb == 0,
         ((byte)ac & 1 | (byte)(uVar29 >> 1) & 1) != 1)) {
        auVar6._8_4_ = 0x70f94;
        auVar6._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
        auVar6._12_52_ = in_register_0000000c;
        *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar6;
        auVar5._8_56_ = auVar6._8_56_;
        auVar5._4_4_ = auStack_40;
        auVar5._0_4_ = fp;
        uVar37 = FUN_00035a30();
        fp = (undefined1 (*) [64])register0x00000004;
      }
      ac = ac & 0xfffffff8 | (uint)(MODE_CHARSEL < GameMode) << 2 |
           (uint)(GameMode == MODE_CHARSEL) << 1 | (uint)(GameMode < MODE_CHARSEL);
      uVar29 = ac;
      if (((byte)ac & 1 | MODE_CHARSEL < GameMode) != 1) {
        puVar1 = (undefined1 *)(auVar5._4_4_ + 0x3fU & 0xffffffc0);
        auVar7._12_52_ = auVar5._12_52_;
        auVar7._0_8_ = auVar5._0_8_;
        auVar7._8_4_ = 0x70fa4;
        *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar7;
        auVar5._8_56_ = auVar7._8_56_;
        auVar5._4_4_ = puVar1 + 0x40;
        auVar5._0_4_ = fp;
        uVar37 = FUN_00070a70();
        fp = (undefined1 (*) [64])puVar1;
        uVar29 = ac;
      }
    }
  }
  ac = uVar29;
  uVar34 = ac;
  uVar29 = ac & 0xfffffff8 | (uint)(1 < StageLoadFlag) << 2;
  ac = uVar29 | (uint)(StageLoadFlag == 1) << 1 | (uint)(StageLoadFlag == 0);
  g_reuse_current_stage_backdrop = (byte)g14;
  auVar9._0_8_ = auVar5._0_8_;
  auVar9._12_52_ = auVar5._12_52_;
  if (((byte)ac & 1 | (byte)(uVar29 >> 2) & 1) != 1) {
    uVar32 = auVar5._4_4_ + 0x3f;
    uVar34 = uVar32 & 0xffffffc0;
    auVar9._8_4_ = 0x70fc0;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar9;
    auVar8._8_56_ = auVar9._8_56_;
    auVar8._4_4_ = uVar34 + 0x40;
    auVar8._0_4_ = fp;
    FUN_000706a0();
    uVar4 = ac;
    uVar36 = (uint)g_player1.character_id;
    uVar35 = (uint)g_player2.costume_id;
    uVar26 = (uint)g_player2.character_id;
    uVar27 = (uint)g_current_stage;
    DAT_005b9890 = *(byte *)((int)&WORD_000c6e70 + uVar36 + (uint)g_player1.costume_id * 0xd);
    uVar33 = (uint)DAT_005b9890;
    DAT_005b9891 = *(byte *)((int)&WORD_000c6e70 + uVar26 + uVar35 * 0xd);
    uVar28 = (uint)DAT_005b9891;
    uVar29 = ac & 0xfffffff8 | (uint)(uVar27 < 0xff) << 2 | (uint)(uVar27 == 0xff) << 1;
    ac = uVar29 | 0xff < uVar27;
    auVar10._0_8_ = auVar8._0_8_;
    auVar10._12_52_ = auVar8._12_52_;
    if (((byte)(uVar29 >> 1) & 1) == 1) {
      auVar11._8_4_ = 0x71050;
      auVar11._0_8_ = auVar10._0_8_;
      auVar11._12_52_ = auVar10._12_52_;
      *(undefined1 (*) [64])(uVar32 & 0xffffffc0) = auVar11;
      auVar8._8_56_ = auVar11._8_56_;
      auVar8._4_4_ = 0;
      auVar8._0_4_ = uVar34;
      StageBackdrop_LoadForCurrentStage
                (uVar26,uVar27,0xff,param_4,uVar28,uVar33,uVar35,uVar36,param_9,param_10,param_11,
                 param_12);
      BYTE_005555e0 = 1;
    }
    else {
      ac = uVar4 & 0xfffffff8 | (uint)(GameMode != MODE_LOAD) << 2 |
           (uint)(GameMode == MODE_LOAD) << 1;
      BYTE_005555e0 = (byte)g14;
      if (((byte)(ac >> 1) & 1) != 1) {
        auVar10._8_4_ = 0x71048;
        *(undefined1 (*) [64])(uVar32 & 0xffffffc0) = auVar10;
        auVar8._8_56_ = auVar10._8_56_;
        auVar8._4_4_ = 0;
        auVar8._0_4_ = uVar34;
        FUN_000359f0();
      }
    }
    DAT_005b974e = (byte)g14;
    fp = (undefined1 (*) [64])auVar8._0_4_;
    return;
  }
  ac = uVar34 & 0xfffffff8 | (uint)('\x01' < DAT_005b974e) << 2 |
       (uint)(DAT_005b974e == '\x01') << 1 | (uint)(DAT_005b974e < '\x01');
  if (((byte)ac & 1 | '\x01' < DAT_005b974e) != 1) {
    fp = (undefined1 (*) [64])auVar5._0_4_;
    return;
  }
  ac = uVar34 & 0xfffffff8;
  if (BYTE_005555e0 != 1) {
    ac = uVar34 & 0xfffffff8 | (uint)(GameMode == MODE_LOAD) << 1;
    if (((byte)(ac >> 1) & 1) != 1) {
      uVar29 = (uint)DAT_005b974f;
      ac = uVar34 & 0xfffffff8 | (uint)(1 < uVar29) << 2 | (uint)(uVar29 == 1) << 1 |
           (uint)(uVar29 == 0);
      if (((byte)ac & 1 | 1 < uVar29) != 1) {
        DAT_005b974f = (byte)g14;
        puVar1 = (undefined1 *)(auVar5._4_4_ + 0x3fU & 0xffffffc0);
        auVar12._8_4_ = 0x710a8;
        auVar12._0_8_ = auVar9._0_8_;
        auVar12._12_52_ = auVar9._12_52_;
        *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar12;
        auVar5._8_56_ = auVar12._8_56_;
        auVar5._4_4_ = puVar1 + 0x40;
        auVar5._0_4_ = fp;
        StageBackdrop_LoadForCurrentStage
                  ((int)uVar37,(int)((ulonglong)uVar37 >> 0x20),param_3,param_4,uVar29,uVar32,
                   param_7,param_8,param_9,param_10,param_11,param_12);
        uVar29 = ac & 0xfffffff8 | (uint)(1 < g_reuse_current_stage_backdrop) << 2 |
                 (uint)(g_reuse_current_stage_backdrop == 1) << 1;
        ac = uVar29 | g_reuse_current_stage_backdrop == 0;
        if (((byte)(uVar29 >> 1) & 1) != 1) {
          return;
        }
        g_reuse_current_stage_backdrop = (byte)g14;
        fp = (undefined1 (*) [64])puVar1;
      }
    }
    iVar25 = auVar5._4_4_;
    ac = ac & 0xfffffff8 | (uint)(DAT_005b9758 < '\x01');
    if (((byte)ac & 1 | '\x01' < DAT_005b9758) != 1) {
      do {
        while( true ) {
          uVar29 = ac & 0xfffffff8;
          auVar21._0_8_ = auVar5._0_8_;
          auVar21._12_52_ = auVar5._12_52_;
          puVar1 = *fp;
          if ((((DAT_005b975b & 1) != 0) || (DAT_005b9745 == 0xfe)) || (DAT_005b9746 == 0xfe))
          break;
          uVar34 = (uint)DAT_005b9748;
          uVar32 = (uint)DAT_005b9890;
          if (uVar32 < uVar34 || uVar34 < uVar32) {
            if (uVar32 < DAT_005b9749 || DAT_005b9749 < uVar32) {
              uVar34 = (uint)DAT_005a6f1c;
              bVar3 = (&DAT_005b9748)[uVar34];
              ac = uVar29 | (uint)(bVar3 < 0xfe) << 2 | (uint)(bVar3 == 0xfe) << 1 |
                   (uint)(0xfe < bVar3);
              if (((byte)ac & 1 | bVar3 < 0xfe) == 1) {
                DAT_005a6f1c = DAT_005a6f1c ^ 1;
                (&DAT_005b9748)[DAT_005a6f1c] = 0xfe;
                DAT_005b9744 = 0xfe;
LAB_000715e0:
                DAT_005b975a = (byte)g14;
              }
              else {
                auVar21._8_4_ = 0x71328;
                *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar21;
                auVar5._8_56_ = auVar21._8_56_;
                auVar5._4_4_ = (undefined1 *)(iVar25 + 0x3fU & 0xffffffc0) + 0x40;
                auVar5._0_4_ = fp;
                FUN_000719e0(uVar34,0,uVar32);
                bVar3 = DAT_005b975a;
                ac = ac & 0xfffffff8 | (uint)(DAT_005b975a != 0xff) << 2 |
                     (uint)(DAT_005b975a == 0xff) << 1;
                puVar1 = (undefined1 *)(iVar25 + 0x3fU & 0xffffffc0);
                if (DAT_005b975a == 0xff) {
                  DAT_005b975b = DAT_005b975b ^ 1;
                  (&DAT_005b9748)[DAT_005a6f1c] = DAT_005b9890;
                  DAT_005b9744 = bVar3;
                  return;
                }
              }
LAB_000715e8:
              fp = (undefined1 (*) [64])puVar1;
              if (g_current_p1_colorxlat_selector != DAT_005b9890) {
                DAT_005b975e = '\x01';
                g_colorxlat_pending_mask = g_colorxlat_pending_mask | COLORXLAT_PENDING_P1;
              }
              if (g_current_p2_colorxlat_selector != DAT_005b9891) {
                DAT_005b975e = '\x01';
                g_colorxlat_pending_mask = g_colorxlat_pending_mask | COLORXLAT_PENDING_P2;
              }
              if (g_current_stage_colorxlat != g_current_stage) {
                DAT_005b975e = '\x01';
                g_colorxlat_pending_mask = g_colorxlat_pending_mask | COLORXLAT_PENDING_STAGE;
              }
              uVar29 = ac & 0xfffffff8 | (uint)(DAT_005b975b != 0) << 2 |
                       (uint)(DAT_005b975b == 0) << 1;
              if (DAT_005b975b == 0) {
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
                  uVar29 = DAT_005b974a & 0x7f;
                  iVar30 = uVar29 * 6;
                  if ((DAT_005b974a & 0x80) != 0) {
                    iVar30 = iVar30 + 0x4e;
                  }
                  sVar2 = *(short *)((int)&WORD_000c94c0 + iVar30);
                  bVar3 = DAT_005b974a;
                }
                else {
                  uVar29 = DAT_005b974b & 0x7f;
                  iVar30 = uVar29 * 6;
                  if ((DAT_005b974b & 0x80) != 0) {
                    iVar30 = iVar30 + 0x4e;
                  }
                  sVar2 = *(short *)((int)&WORD_000c94c4 + iVar30);
                  bVar3 = DAT_005b974b;
                }
                pwVar31 = &WORD_000c9470;
                if ((bVar3 & 0x80) != 0) {
                  pwVar31 = &WORD_000c948a;
                }
                DAT_005a6f04 = (int)sVar2 + (int)(short)pwVar31[uVar29];
                BYTE_005555e0 = 1;
                DAT_005b9758 = (byte)g14;
                uVar32 = ac & 0xfffffff8 | (uint)(GameMode == MODE_LOAD) << 1;
                ac = uVar32 | GameMode != MODE_LOAD;
                uVar29 = ac;
                DAT_005a6f18 = DAT_005a6f04;
                if (((byte)(uVar32 >> 1) & 1) != 1) {
                  auVar24._12_52_ = auVar5._12_52_;
                  auVar24._0_8_ = auVar5._0_8_;
                  auVar24._8_4_ = 0x71810;
                  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar24;
                  auVar5._8_56_ = auVar24._8_56_;
                  auVar5._4_4_ = (undefined1 *)0x0;
                  auVar5._0_4_ = fp;
                  FUN_0006f7f0();
                  ac = ac & 0xfffffff8 | (uint)(MODE_FIGHT < GameMode) << 2 |
                       (uint)(GameMode == MODE_FIGHT) << 1 | (uint)(GameMode == MODE_LOAD);
                  if (((byte)ac & 1 | MODE_FIGHT < GameMode) != 1) {
                    DAT_005b9774 = 8;
                    return;
                  }
                  DAT_005b9774 = 9;
                  uVar29 = ac;
                }
              }
              ac = uVar29;
              fp = (undefined1 (*) [64])auVar5._0_4_;
              return;
            }
            uVar29 = uVar29 | (uint)(uVar34 < 0xfe) << 2;
            ac = uVar29 | 0xfe < uVar34;
            DAT_005b975b = DAT_005b975b ^ 1;
            DAT_005a6f1c = 1;
            if (((byte)ac & 1 | (byte)(uVar29 >> 2) & 1) != 1) {
              DAT_005b9748 = 0xff;
              DAT_005b9744 = 0xff;
            }
          }
          else {
            DAT_005b975b = DAT_005b975b ^ 1;
            uVar29 = uVar29 | (uint)(DAT_005b9749 < 0xfe) << 2;
            ac = uVar29 | 0xfe < DAT_005b9749;
            DAT_005a6f1c = (byte)g14;
            if (((byte)ac & 1 | (byte)(uVar29 >> 2) & 1) != 1) {
              DAT_005b9749 = 0xff;
              DAT_005b9744 = 0xff;
            }
          }
        }
        if ((((DAT_005b975b & 2) != 0) || (DAT_005b9744 == 0xfe)) || (DAT_005b9746 == 0xfe)) {
          ac = uVar29;
          if ((((DAT_005b975b & 4) != 0) ||
              (ac = uVar29 | (uint)(DAT_005b9744 == 0xfe) << 1, ((byte)(ac >> 1) & 1) == 1)) ||
             (ac = uVar29 | (uint)(DAT_005b9745 == 0xfe) << 1, ((byte)(ac >> 1) & 1) == 1))
          goto LAB_000715e8;
          uVar32 = (uint)g_current_stage;
          ac = uVar29 | uVar32 < DAT_005a6f20;
          if (((byte)ac & 1 | DAT_005a6f20 < uVar32) != 1) {
            DAT_005b975b = DAT_005b975b ^ 4;
            DAT_005a6f1e = (byte)g14;
            goto LAB_000715e8;
          }
          ac = uVar29 | uVar32 < DAT_005a6f21;
          if (((byte)ac & 1 | DAT_005a6f21 < uVar32) != 1) {
            DAT_005b975b = DAT_005b975b ^ 4;
            DAT_005a6f1e = 1;
            goto LAB_000715e8;
          }
          uVar34 = (uint)DAT_005a6f1e;
          bVar3 = (&DAT_005a6f20)[uVar34];
          ac = uVar29 | (uint)(bVar3 < 0xfe) << 2 | (uint)(bVar3 == 0xfe) << 1 |
               (uint)(0xfe < bVar3);
          if (((byte)ac & 1 | bVar3 < 0xfe) == 1) {
            DAT_005a6f1e = DAT_005a6f1e ^ 1;
            (&DAT_005a6f20)[DAT_005a6f1e] = 0xfe;
            DAT_005b9746 = 0xfe;
            goto LAB_000715e0;
          }
          auVar23._8_4_ = 0x71574;
          auVar23._0_8_ = auVar21._0_8_;
          auVar23._12_52_ = auVar21._12_52_;
          *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar23;
          auVar5._8_56_ = auVar23._8_56_;
          auVar5._4_4_ = (undefined1 *)(iVar25 + 0x3fU & 0xffffffc0) + 0x40;
          auVar5._0_4_ = fp;
          FUN_000719d0(uVar34,uVar32);
          bVar3 = DAT_005b975a;
          ac = ac & 0xfffffff8 | (uint)(DAT_005b975a != 0xff) << 2 |
               (uint)(DAT_005b975a == 0xff) << 1;
          puVar1 = (undefined1 *)(iVar25 + 0x3fU & 0xffffffc0);
          if (DAT_005b975a == 0xff) {
            DAT_005b975b = DAT_005b975b ^ 4;
            (&DAT_005a6f20)[DAT_005a6f1e] = g_current_stage;
            DAT_005b9746 = bVar3;
            return;
          }
          goto LAB_000715e8;
        }
        uVar34 = (uint)DAT_005b974a;
        uVar32 = (uint)DAT_005b9891;
        if (uVar32 < uVar34 || uVar34 < uVar32) {
          if (uVar32 < DAT_005b974b || DAT_005b974b < uVar32) {
            uVar34 = (uint)DAT_005a6f1d;
            bVar3 = (&DAT_005b974a)[uVar34];
            ac = uVar29 | (uint)(bVar3 < 0xfe) << 2 | (uint)(bVar3 == 0xfe) << 1 |
                 (uint)(0xfe < bVar3);
            if (((byte)ac & 1 | bVar3 < 0xfe) != 1) {
              auVar22._8_4_ = 0x71470;
              auVar22._0_8_ = auVar21._0_8_;
              auVar22._12_52_ = auVar21._12_52_;
              *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar22;
              auVar5._8_56_ = auVar22._8_56_;
              auVar5._4_4_ = (undefined1 *)(iVar25 + 0x3fU & 0xffffffc0) + 0x40;
              auVar5._0_4_ = fp;
              FUN_000719e0(uVar34,1,uVar32);
              bVar3 = DAT_005b975a;
              ac = ac & 0xfffffff8 | (uint)(DAT_005b975a != 0xff) << 2 |
                   (uint)(DAT_005b975a == 0xff) << 1;
              puVar1 = (undefined1 *)(iVar25 + 0x3fU & 0xffffffc0);
              if (DAT_005b975a == 0xff) {
                DAT_005b975b = DAT_005b975b ^ 2;
                (&DAT_005b974a)[DAT_005a6f1d] = DAT_005b9891;
                DAT_005b9745 = bVar3;
                return;
              }
              goto LAB_000715e8;
            }
            DAT_005a6f1d = DAT_005a6f1d ^ 1;
            (&DAT_005b974a)[DAT_005a6f1d] = 0xfe;
            DAT_005b9745 = 0xfe;
            goto LAB_000715e0;
          }
          uVar29 = uVar29 | (uint)(uVar34 < 0xfe) << 2;
          ac = uVar29 | 0xfe < uVar34;
          DAT_005b975b = DAT_005b975b ^ 2;
          DAT_005a6f1d = 1;
          if (((byte)ac & 1 | (byte)(uVar29 >> 2) & 1) != 1) {
            DAT_005b974a = 0xff;
            DAT_005b9745 = 0xff;
          }
        }
        else {
          DAT_005b975b = DAT_005b975b ^ 2;
          uVar29 = uVar29 | (uint)(DAT_005b974b < 0xfe) << 2;
          ac = uVar29 | 0xfe < DAT_005b974b;
          DAT_005a6f1d = (byte)g14;
          if (((byte)ac & 1 | (byte)(uVar29 >> 2) & 1) != 1) {
            DAT_005b974b = 0xff;
            DAT_005b9745 = 0xff;
          }
        }
      } while( true );
    }
  }
  uVar29 = ac;
  if (DAT_005b975e == '\x01') {
    g_colorxlat_update_active_candidate = '\x01';
    DAT_005b975e = (byte)g14;
  }
  ac = ac & 0xfffffff8 | (uint)(g_current_stage != STAGE_SCREENSPLASH) << 2 |
       (uint)(g_current_stage == STAGE_SCREENSPLASH) << 1;
  if (g_current_stage != STAGE_SCREENSPLASH) {
    ac = uVar29 & 0xfffffff8;
    switch(BYTE_0054fcfd) {
    case 0:
      ac = uVar29 & 0xfffffff8 | (uint)(DAT_005b9892 != 0) << 2 | (uint)(DAT_005b9892 == 0) << 1;
      if (((byte)(ac >> 1) & 1) != 1) {
        DAT_005b9770 = g14;
      }
      puVar1 = (undefined1 *)(auVar5._4_4_ + 0x3fU & 0xffffffc0);
      auVar13._12_52_ = auVar5._12_52_;
      auVar13._0_8_ = auVar5._0_8_;
      auVar13._8_4_ = 0x7114c;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar13;
      auVar5._8_56_ = auVar13._8_56_;
      auVar5._4_4_ = puVar1 + 0x40;
      auVar5._0_4_ = fp;
      FUN_00070a70();
      fp = (undefined1 (*) [64])puVar1;
      break;
    case 3:
      ac = uVar29 & 0xfffffff8 | (uint)(DAT_005b9892 == 3) << 1;
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
    uVar29 = ac & 0xfffffff8 | (uint)(BYTE_00555618 == 0) << 1;
    ac = uVar29 | BYTE_00555618 != 0;
    DAT_005b9892 = BYTE_0054fcfd;
    if (((byte)(uVar29 >> 1) & 1) != 1) {
      puVar1 = (undefined1 *)(auVar5._4_4_ + 0x3fU & 0xffffffc0);
      auVar14._12_52_ = auVar5._12_52_;
      auVar14._0_8_ = auVar5._0_8_;
      auVar14._8_4_ = 0x711c0;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar14;
      auVar5._8_56_ = auVar14._8_56_;
      auVar5._4_4_ = puVar1 + 0x40;
      auVar5._0_4_ = fp;
      FUN_000719f0();
      fp = (undefined1 (*) [64])puVar1;
    }
    ac = ac & 0xfffffff8 | (uint)(GameMode != MODE_LOAD) << 2 | (uint)(GameMode == MODE_LOAD) << 1;
    if (((byte)(ac >> 1) & 1) != 1) {
      uVar29 = auVar5._4_4_ + 0x3f;
      uVar32 = uVar29 & 0xffffffc0;
      auVar16._12_52_ = auVar5._12_52_;
      auVar16._0_8_ = auVar5._0_8_;
      auVar16._8_4_ = 0x711d0;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar16;
      auVar15._8_56_ = auVar16._8_56_;
      auVar15._0_8_ = CONCAT44(uVar29,fp) & 0xffffffc0ffffffff;
      FUN_00071840();
      auVar18._12_52_ = auVar15._12_52_;
      auVar18._0_8_ = auVar15._0_8_;
      auVar18._8_4_ = 0x711d4;
      *(undefined1 (*) [64])(uVar29 & 0xffffffc0) = auVar18;
      auVar17._8_56_ = auVar18._8_56_;
      auVar17._0_8_ = CONCAT44(uVar32 + 0x80,uVar29) & 0xffffffffffffffc0;
      FUN_0006fd40();
      ac = ac & 0xfffffff8 | (uint)(STAGE_BEACH < g_current_stage) << 2 |
           (uint)(g_current_stage == STAGE_BEACH) << 1 | (uint)(g_current_stage < STAGE_BEACH);
      fp = (undefined1 (*) [64])(uVar32 + 0x40);
      if (((byte)ac & 1 | STAGE_BEACH < g_current_stage) != 1) {
        fp = (undefined1 (*) [64])(uVar32 + 0x80);
        auVar19._12_52_ = auVar17._12_52_;
        auVar19._0_8_ = auVar17._0_8_;
        auVar19._8_4_ = 0x711e4;
        *(undefined1 (*) [64])(uVar32 + 0x40) = auVar19;
        auVar17._8_56_ = auVar19._8_56_;
        auVar17._4_4_ = uVar32 + 0xc0;
        auVar17._0_4_ = (undefined1 (*) [64])(uVar32 + 0x40);
        FUN_00070390();
      }
      auVar20._12_52_ = auVar17._12_52_;
      auVar20._0_8_ = auVar17._0_8_;
      auVar20._8_4_ = 0x711e8;
      *fp = auVar20;
      auVar5._8_56_ = auVar20._8_56_;
      auVar5._4_4_ = (undefined1 *)0x0;
      auVar5._0_4_ = fp;
      FUN_00071ad0();
    }
    if (BYTE_0054fcfe == 0) {
      DAT_005a6f0d = DAT_005a6f0d + '\x01';
      DAT_005a7620 = DAT_005a7620 + 0x80;
      DAT_005b9750 = DAT_005b9750 + 0x800;
      DAT_005b9754 = DAT_005b9754 + 0x400;
    }
    fp = (undefined1 (*) [64])auVar5._0_4_;
    ac = ac & 0xfffffff8 | (uint)(BYTE_0054fcfe != 0) << 2 | (uint)(BYTE_0054fcfe == 0) << 1;
    return;
  }
  fp = (undefined1 (*) [64])auVar5._0_4_;
  return;
}

