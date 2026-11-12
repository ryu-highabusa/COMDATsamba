
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* Clears transient player flags when an action animation is initialized or restarted. Also runs
   when the neutral idle animation loops. */

void ClearPlayerTransientActionFlags
               (uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,uint param_7,undefined4 param_8,
               undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  uint uVar1;
  DOA_U8 DVar2;
  undefined2 uVar3;
  DOA1_CHARACTER_ID DVar4;
  DOA_ACTSTATE DVar5;
  DOA_ACTCODE_COMMON DVar6;
  byte bVar7;
  ushort uVar8;
  uint uVar9;
  short sVar10;
  undefined4 unaff_pfp;
  undefined1 in_register_00000008 [56];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  undefined4 uVar26;
  undefined4 extraout_g1;
  undefined4 extraout_g1_00;
  undefined4 uVar27;
  uint16_t uVar28;
  DOA_S32 DVar29;
  int iVar30;
  byte bVar31;
  short *psVar32;
  undefined **ppuVar33;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [64];
  undefined1 auStack_80 [64];
  undefined1 auStack_c0 [64];
  undefined1 auStack_100 [64];
  undefined1 auStack_140 [64];
  undefined1 auStack_180 [999616];
  undefined1 auVar18 [64];
  
  auVar11._8_56_ = in_register_00000008;
  auVar11._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  auVar12._0_32_ = auVar11._0_32_;
  auVar12._32_4_ = param_1 * 4;
  auVar12._40_24_ = in_register_00000008._32_24_;
  auVar12._36_4_ = param_1 * 2;
  auVar13._24_40_ = auVar12._24_40_;
  auVar13._0_20_ = auVar11._0_20_;
  auVar13._20_4_ = param_1;
  auVar14._32_32_ = auVar12._32_32_;
  auVar14._0_28_ = auVar13._0_28_;
  auVar14._28_4_ = &g_player1;
  (&DAT_0056adc8)[param_1] = g14;
  auVar15._20_44_ = auVar14._20_44_;
  auVar15._0_16_ = auVar11._0_16_;
  auVar15._16_4_ = param_1 ^ 1;
  auVar16._28_36_ = auVar14._28_36_;
  auVar16._0_24_ = auVar15._0_24_;
  auVar16._24_4_ = &g_player1 + param_1;
  auVar18._12_52_ = auVar16._12_52_;
  auVar18._8_4_ = 0x4410c;
  auVar18._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar18;
  auVar17._8_56_ = auVar18._8_56_;
  auVar17._4_4_ = auStackX_0;
  auVar17._0_4_ = fp;
  FUN_00053130(param_1);
  uVar1 = ac;
  DVar4 = (&g_player1)[param_1].character_id;
  ac = ac & 0xfffffff8 | (uint)(CHAR_RAIDOU < DVar4) << 2 | (uint)(DVar4 == CHAR_RAIDOU) << 1 |
       (uint)(DVar4 < CHAR_RAIDOU);
  if (((byte)ac & 1 | CHAR_RAIDOU < DVar4) == 1) {
LAB_00044140:
    (&DAT_005882fa)[param_1] = (DOA_U8)g14;
  }
  else {
    ac = uVar1 & 0xfffffff8 | (uint)((&g_player1)[auVar15._16_4_].rounds_won != '\0') << 2 |
         (uint)((&g_player1)[auVar15._16_4_].rounds_won == '\0') << 1;
    if (((byte)(ac >> 1) & 1) == 1) goto LAB_00044140;
    (&DAT_005882fa)[param_1] = 1;
  }
  DVar29 = (&g_player1)[param_1].facing_direction;
  (&DAT_005882fc)[param_1] = (DOA_U8)g14;
  (&g_player1)[param_1].attack_direction = DVar29;
  (&g_player1)[param_1].body_direction = DVar29;
  auStackX_0._12_52_ = auVar17._12_52_;
  auStackX_0._0_8_ = auVar17._0_8_;
  auStackX_0._8_4_ = 0x44168;
  auVar19._8_56_ = auStackX_0._8_56_;
  auVar19._4_4_ = auStack_40;
  auVar19._0_4_ = auStackX_0;
  FUN_0004b3a0(param_1);
  auStack_40._12_52_ = auVar19._12_52_;
  auStack_40._0_8_ = auVar19._0_8_;
  auStack_40._8_4_ = 0x44170;
  auVar20._8_56_ = auStack_40._8_56_;
  auVar20._4_4_ = auStack_80;
  auVar20._0_4_ = auStack_40;
  Player_CancelSoundOnActionInterrupt(param_1);
  auStack_80._12_52_ = auVar20._12_52_;
  auStack_80._0_8_ = auVar20._0_8_;
  auStack_80._8_4_ = 0x44178;
  auVar21._8_56_ = auStack_80._8_56_;
  auVar21._4_4_ = auStack_100;
  auVar21._0_4_ = auStack_80;
  FUN_0004bc90(param_1);
  uVar1 = ac;
  DVar2 = (DOA_U8)g14;
  (&g_player1)[param_1].attack_state = (DOA_U8)g14;
  (&g_player1)[param_1].action_cancel = (DOA_U8)g14;
  (&g_player1)[param_1].grasp_state = (DOA_U8)g14;
  (&g_player1)[param_1].damage_number = (DOA_U8)g14;
  (&g_player1)[param_1].mount_state = (DOA_U8)g14;
  (&g_player1)[param_1].down_state = (DOA_U8)g14;
  sVar10 = DAT_005882fe;
  (&g_player1)[param_1].upside_down_head = (DOA_U8)g14;
  (&DAT_005882b0)[param_1] = (short)g14;
  psVar32 = *(short **)(&g_actionScriptCursorByPlayer + auVar12._32_4_);
  ppuVar33 = g_anime_pointer_bank_table;
  if (sVar10 == 0) {
LAB_000441c4:
    if (g_debug_anime_mode != '\0') {
      if ((int)g_debug_anime_id_cached <= (int)(uint)(&g_player1)[param_1].animation_id &&
          (int)(uint)(&g_player1)[param_1].animation_id <= (int)g_debug_anime_id_cached) {
        psVar32 = (short *)&g_external_anime_data;
        goto LAB_0004425c;
      }
    }
    uVar8 = (&g_player1)[param_1].animation_id;
    param_7 = (uint)(uVar8 >> 9);
    iVar30 = param_7 * -0x200;
    if (0x1fff < uVar8) {
      param_7 = 0xd;
    }
    psVar32 = *(short **)
               (g_anime_pointer_bank_table[param_7] +
               ((int)(((uint)uVar8 + iVar30) * 0x10000) >> 0x10) * 4);
  }
  else {
    if (param_1 != 0) goto LAB_000441c4;
    if (g_motion_debug_mode != '\0') {
      psVar32 = &DAT_00588310;
      if (DAT_00588302 == 4) {
        if (DAT_00588700 == 2) {
          DAT_005882fe = (short)g14;
        }
      }
    }
  }
LAB_0004425c:
  iVar30 = (int)*psVar32;
  *(short **)(&DAT_00588708 + param_1 * 4) = psVar32;
  uVar9 = ac & 0xfffffff8 | (uint)(iVar30 < 0) << 2;
  ac = uVar9 | 0 < iVar30;
  *(short **)(&g_actionScriptCursorByPlayer + auVar12._32_4_) = psVar32;
  if (((byte)ac & 1 | (byte)(uVar9 >> 2) & 1) == 1) {
    if (iVar30 == 0x1e) {
      iVar30 = *(int *)(&g_actionScriptCursorByPlayer + param_1 * 4);
      uVar3 = *(undefined2 *)(iVar30 + 4);
      *(int *)(&g_actionScriptCursorByPlayer + param_1 * 4) = iVar30 + 8;
      (&DAT_0056ac4c)[param_1] = uVar3;
      uVar3 = *(undefined2 *)(iVar30 + 6);
      (&g_player1)[param_1].animation_request = DVar2;
      (&DAT_00588710)[param_1] = DVar2;
      (&DAT_0056ac94)[param_1] = uVar3;
      uVar1 = uVar1 & 0xfffffff8 | (uint)('\0' < (char)g_motion_debug_mode) << 2 |
              (uint)(g_motion_debug_mode == '\0') << 1;
      ac = uVar1 | (char)g_motion_debug_mode < '\0';
      if (((byte)(uVar1 >> 1) & 1) == 1) goto LAB_00044420;
    }
    else {
      uVar27 = 0x7777;
      ac = uVar1 & 0xfffffff8 | (uint)(iVar30 < 0x7777) << 2 | (uint)(iVar30 == 0x7777) << 1 |
           (uint)(0x7777 < iVar30);
      if (((byte)ac & 1 | iVar30 < 0x7777) == 1) {
        uVar26 = 0x18;
        auStack_c0._12_52_ = auVar21._12_52_;
        auStack_c0._0_8_ = auVar21._0_8_;
        auStack_c0._8_4_ = 0x443c8;
        auVar22._8_56_ = auStack_c0._8_56_;
        auVar22._4_4_ = auStack_100;
        auVar22._0_4_ = auStack_c0;
        Debug_SetTextPosition(0x20,0x18);
        auStack_100._12_52_ = auVar22._12_52_;
        auStack_100._0_8_ = auVar22._0_8_;
        auStack_100._8_4_ = 0x443d4;
        auVar23._8_56_ = auStack_100._8_56_;
        auVar23._4_4_ = auStack_140;
        auVar23._0_4_ = auStack_100;
        FUN_0008e740(s_BUFF_IS_EMPTY___00044080,uVar26,uVar27,param_4,iVar30,psVar32,param_7,
                     ppuVar33,param_9,param_10,param_11,param_12);
        auStack_140._12_52_ = auVar23._12_52_;
        auStack_140._0_8_ = auVar23._0_8_;
        auStack_140._8_4_ = 0x443e0;
        auVar24._8_56_ = auStack_140._8_56_;
        auVar24._4_4_ = auStack_180;
        auVar24._0_4_ = auStack_140;
        FUN_0008e740(s_OR_000440a0,extraout_g1,uVar27,param_4,iVar30,psVar32,param_7,ppuVar33,
                     param_9,param_10,param_11,param_12);
        auVar25._12_52_ = auVar24._12_52_;
        auVar25._0_8_ = auVar24._0_8_;
        auVar25._8_4_ = 0x443ec;
        auVar21._8_56_ = auVar25._8_56_;
        auVar21._4_4_ = (undefined1 *)0x0;
        auVar21._0_4_ = auStack_180;
        FUN_0008e740(s_NO_POINTER_SET____000440b0,extraout_g1_00,uVar27,param_4,iVar30,psVar32,
                     param_7,ppuVar33,param_9,param_10,param_11,param_12);
      }
      else {
        iVar30 = *(int *)(&g_actionScriptCursorByPlayer + param_1 * 4);
        DVar5 = (&g_player1)[param_1].action_state;
        uVar3 = *(undefined2 *)(iVar30 + 4);
        *(int *)(&g_actionScriptCursorByPlayer + param_1 * 4) = iVar30 + 8;
        (&DAT_0056ac4c)[param_1] = uVar3;
        if (DVar5 == 0x0_NEUTRAL) {
          DVar6 = (&g_player1)[param_1].action_code;
          if (DVar6 != CMD_STANDUP && DVar6 != CMD_STANDUP_FRONT) {
            if (DVar6 != CMD_STANDUP_BACK) goto LAB_00044354;
          }
          bVar31 = 2;
        }
        else {
LAB_00044354:
          bVar31 = 1;
        }
        bVar7 = (&DAT_00588710)[param_1];
        ac = uVar1 & 0xfffffff8 | (uint)(bVar7 != 0) << 2;
        if (((byte)(ac >> 2) & 1) == 1) {
          if (bVar31 < bVar7 || bVar7 < bVar31) {
            uVar28 = g_motion_frame_counter[param_1];
            ac = uVar1 & 0xfffffff8 | (uint)((short)uVar28 < 0);
            if (((byte)ac & 1 | 0 < (short)uVar28) == 1) {
              uVar28 = 0xb - uVar28;
            }
            else {
              uVar28 = 1;
            }
          }
          else {
            uVar28 = g_motion_frame_counter[param_1];
            ac = uVar1 & 0xfffffff8 | (uint)((short)uVar28 < 0);
            if (((byte)ac & 1 | 0 < (short)uVar28) != 1) {
              uVar28 = 10;
            }
          }
        }
        else {
          uVar28 = 1;
        }
        (&DAT_0056ac94)[param_1] = uVar28;
        (&g_player1)[param_1].animation_request = DVar2;
        (&DAT_00588710)[param_1] = bVar31;
      }
    }
  }
  else {
    iVar30 = *(int *)(&g_actionScriptCursorByPlayer + param_1 * 4);
    uVar3 = *(undefined2 *)(iVar30 + 2);
    *(int *)(&g_actionScriptCursorByPlayer + param_1 * 4) = iVar30 + 6;
    (&DAT_0056ac4c)[param_1] = uVar3;
    uVar3 = *(undefined2 *)(iVar30 + 4);
    (&g_player1)[param_1].animation_request = DVar2;
    (&DAT_00588710)[param_1] = DVar2;
    (&DAT_0056ac94)[param_1] = uVar3;
  }
  DVar2 = (&g_player1)[param_1].animation_flip;
  ac = ac & 0xfffffff8 | (uint)('\x01' < (char)DVar2) << 2 | (uint)(DVar2 == '\x01') << 1 |
       (uint)((char)DVar2 < '\x01');
  if (((byte)ac & 1 | '\x01' < (char)DVar2) != 1) {
    (&DAT_00550144)[param_1] = 0xffff;
    fp = auVar21._0_4_;
    return;
  }
  (&DAT_00550144)[param_1] = 1;
LAB_00044420:
  fp = auVar21._0_4_;
  return;
}

