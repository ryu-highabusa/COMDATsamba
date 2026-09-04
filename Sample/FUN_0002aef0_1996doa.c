
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0002aef0(void)

{
  short sVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined1 auVar5 [20];
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined8 in_register_0000000c;
  undefined4 unaff_r5;
  undefined1 in_register_00000018 [40];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar16 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  uint uVar28;
  byte bVar29;
  uint uVar30;
  uint uVar31;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [999936];
  undefined1 auVar10 [64];
  undefined1 auVar15 [64];
  undefined1 auVar17 [64];
  ushort uVar26;
  uint uVar27;
  
  uVar28 = ac;
  uVar4 = CONCAT44(auStackX_0,unaff_pfp);
  auVar5._8_4_ = unaff_retaddr;
  auVar5._0_8_ = uVar4;
  auVar5._12_8_ = in_register_0000000c;
  auVar6._20_4_ = unaff_r5;
  auVar6._0_20_ = auVar5;
  auVar6._24_40_ = in_register_00000018;
  bVar3 = (byte)((ushort *)(&g_comact_cursor_by_player)[g_ai_player_loop_index])[1];
  auVar7._20_44_ = auVar6._20_44_;
  auVar7._0_16_ = auVar5._0_16_;
  uVar27 = (uint)bVar3;
  auVar7[0x10] = bVar3;
  auVar7._17_3_ = 0;
  uVar30 = *(ushort *)(&g_comact_cursor_by_player)[g_ai_player_loop_index] - 1;
  ac = ac & 0xfffffff8 | (uint)(uVar30 < 0xfe) << 2 | (uint)(uVar30 == 0xfe) << 1 |
       (uint)(0xfe < uVar30);
  if (((byte)ac & 1) == 1) {
switchD_0002af1c_caseD_2b964:
    fp = unaff_pfp;
    return;
  }
  auVar8._18_46_ = auVar7._18_46_;
  uVar26 = (ushort)bVar3;
  auVar8[0x10] = bVar3;
  auVar8._0_16_ = auVar7._0_16_;
  auVar8[0x11] = 0;
  auVar9._17_47_ = auVar8._17_47_;
  auVar9[0x10] = bVar3;
  auVar9._0_16_ = auVar7._0_16_;
  auVar10._12_52_ = auVar9._12_52_;
  switch((&switchD_0002af1c::switchdataD_0002af20)[uVar30]) {
  case (undefined *)0x2b31c:
    auVar10._8_4_ = 0x2b320;
    auVar10._0_8_ = uVar4;
    *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar10;
    auVar9._8_56_ = auVar10._8_56_;
    auVar9._4_4_ = (undefined1 *)0x0;
    auVar9._0_4_ = fp;
    uVar28 = comact_can_issue_action_request();
    uVar28 = uVar28 & 0xff;
    ac = ac & 0xfffffff8 | (uint)(1 < uVar28) << 2 | (uint)(uVar28 == 1) << 1 | (uint)(uVar28 == 0);
    if (((byte)ac & 1 | 1 < uVar28) == 1) {
      return;
    }
    g_cond_act_result = bVar3;
    *(byte *)(g_current_player + 0x2c) = bVar3;
    break;
  case (undefined *)0x2b348:
    auVar11._8_4_ = 0x2b34c;
    auVar11._0_8_ = uVar4;
    auVar11._12_52_ = auVar10._12_52_;
    *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar11;
    auVar9._8_56_ = auVar11._8_56_;
    auVar9._4_4_ = (undefined1 *)0x0;
    auVar9._0_4_ = fp;
    uVar27 = comact_can_issue_action_request();
    uVar28 = ac;
    uVar27 = uVar27 & 0xff;
    ac = ac & 0xfffffff8 | (uint)(1 < uVar27) << 2 | (uint)(uVar27 == 1) << 1 | (uint)(uVar27 == 0);
    if (((byte)ac & 1 | 1 < uVar27) == 1) {
      return;
    }
    bVar29 = (&DAT_005645e4)[g_ai_player_loop_index];
    uVar28 = uVar28 & 0xfffffff8 | (uint)(1 < bVar29) << 2 | (uint)(bVar29 == 1) << 1;
    ac = uVar28 | bVar29 == 0;
    if (((byte)(uVar28 >> 1) & 1) != 1) {
      (&DAT_00564638)[g_ai_player_loop_index] = (undefined1)g14;
      return;
    }
    goto switchD_0002af1c_comact_commit_action_request;
  case (undefined *)0x2b380:
    auVar12._8_4_ = 0x2b384;
    auVar12._0_8_ = uVar4;
    auVar12._12_52_ = auVar10._12_52_;
    *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar12;
    auVar9._8_56_ = auVar12._8_56_;
    auVar9._4_4_ = (undefined1 *)0x0;
    auVar9._0_4_ = fp;
    uVar27 = comact_can_issue_action_request();
    uVar28 = ac;
    uVar27 = uVar27 & 0xff;
    ac = ac & 0xfffffff8 | (uint)(1 < uVar27) << 2 | (uint)(uVar27 == 1) << 1 | (uint)(uVar27 == 0);
    if (((byte)ac & 1 | 1 < uVar27) == 1) {
      return;
    }
    bVar29 = *(byte *)(g_opponent_player + 0x43);
    uVar28 = uVar28 & 0xfffffff8 | (uint)(1 < bVar29) << 2 | (uint)(bVar29 == 1) << 1;
    ac = uVar28 | bVar29 == 0;
    if (((byte)(uVar28 >> 1) & 1) != 1) {
      (&DAT_00564638)[g_ai_player_loop_index] = (undefined1)g14;
      return;
    }
switchD_0002af1c_comact_commit_action_request:
    g_cond_act_result = bVar3;
    *(byte *)(g_current_player + 0x2c) = bVar3;
    break;
  case (undefined *)0x2b3b4:
    auVar13._8_4_ = 0x2b3b8;
    auVar13._0_8_ = uVar4;
    auVar13._12_52_ = auVar10._12_52_;
    *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar13;
    auVar9._8_56_ = auVar13._8_56_;
    auVar9._4_4_ = (undefined1 *)0x0;
    auVar9._0_4_ = fp;
    uVar27 = comact_can_issue_action_request();
    uVar28 = ac;
    ac = ac & 0xfffffff8 | (uint)((uVar27 & 0xff) == 0);
    if ((((byte)ac & 1 | 1 < (uVar27 & 0xff)) != 1) &&
       (cVar2 = (&DAT_00564650)[g_ai_player_loop_index],
       ac = uVar28 & 0xfffffff8 | (uint)(cVar2 != '\0') << 2 | (uint)(cVar2 == '\0') << 1,
       cVar2 == '\0')) {
      g_cond_act_result = bVar3;
      *(byte *)(g_current_player + 0x2c) = bVar3;
      (&DAT_00564650)[g_ai_player_loop_index] = 1;
      return;
    }
    uVar28 = ac;
    bVar3 = *(byte *)(g_current_player + 0x2d);
    ac = ac & 0xfffffff8 | (uint)(6 < bVar3) << 2 | (uint)(bVar3 == 6) << 1 | (uint)(bVar3 < 6);
    if (((byte)ac & 1 | 6 < bVar3) == 1) {
      bVar3 = *(byte *)(g_current_player + 0x2d);
      uVar28 = uVar28 & 0xfffffff8 | (uint)(5 < bVar3) << 2 | (uint)(bVar3 == 5) << 1;
      ac = uVar28 | bVar3 < 5;
      if (((byte)(uVar28 >> 1) & 1) != 1) {
        (&DAT_00564638)[g_ai_player_loop_index] = (undefined1)g14;
      }
      return;
    }
    break;
  case (undefined *)0x2b43c:
    ac = uVar28 & 0xfffffff8 |
         (uint)((&actcode_buf)[(uint)sw_buf_ix_bak_bak + (uint)g_ai_player_loop_index * 0x80] != -1)
         << 2 | (uint)((&actcode_buf)[(uint)sw_buf_ix_bak_bak + (uint)g_ai_player_loop_index * 0x80]
                      == -1) << 1;
    if (((byte)(ac >> 1) & 1) == 1) {
      fp = unaff_pfp;
      return;
    }
    bVar29 = *(char *)(g_current_player + 0x2d) - 2;
    uVar27 = uVar28 & 0xfffffff8 | (uint)(4 < bVar29) << 2 | (uint)(bVar29 == 4) << 1;
    ac = uVar27 | bVar29 < 4;
    if (((byte)ac & 1 | (byte)(uVar27 >> 1) & 1) != 1) {
      bVar29 = *(byte *)(g_current_player + 0x2d);
      ac = uVar28 & 0xfffffff8 | (uint)(0xd < bVar29) << 2 | (uint)(bVar29 == 0xd) << 1 |
           (uint)(bVar29 < 0xd);
      if (((byte)ac & 1 | 0xd < bVar29) == 1) {
        fp = unaff_pfp;
        return;
      }
    }
  case (undefined *)0x2b480:
    goto switchD_0002af1c_comact_commit_action_request;
  case (undefined *)0x2b49c:
    auVar15._8_4_ = 0x2b4a0;
    auVar15._0_8_ = uVar4;
    auVar15._12_52_ = auVar10._12_52_;
    *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar15;
    auVar14._8_56_ = auVar15._8_56_;
    auVar14._4_4_ = auStack_40;
    auVar14._0_4_ = fp;
    uVar28 = comact_can_issue_action_request();
    uVar28 = uVar28 & 0xff;
    ac = ac & 0xfffffff8 | (uint)(1 < uVar28) << 2 | (uint)(uVar28 == 1) << 1 | (uint)(uVar28 == 0);
    if (((byte)ac & 1 | 1 < uVar28) == 1) {
      return;
    }
    auStackX_0._12_52_ = auVar14._12_52_;
    auStackX_0._0_8_ = auVar14._0_8_;
    auStackX_0._8_4_ = 0x2b4c8;
    auVar9._8_56_ = auStackX_0._8_56_;
    auVar9._4_4_ = (undefined1 *)0x0;
    auVar9._0_4_ = auStackX_0;
    uVar28 = per_act_set(*(ushort **)
                          ((&g_cond_branch_table_by_character)[*(byte *)(g_current_player + 1)] +
                          uVar27 * 4));
    g_cond_act_result = (byte)uVar28;
    *(byte *)(g_current_player + 0x2c) = g_cond_act_result;
    break;
  case (undefined *)0x2b4e4:
    auVar17._8_4_ = 0x2b4e8;
    auVar17._0_8_ = uVar4;
    auVar17._12_52_ = auVar10._12_52_;
    *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar17;
    auVar16._8_56_ = auVar17._8_56_;
    auVar16._4_4_ = auStack_40;
    auVar16._0_4_ = fp;
    uVar28 = comact_can_issue_action_request();
    uVar28 = uVar28 & 0xff;
    ac = ac & 0xfffffff8 | (uint)(1 < uVar28) << 2 | (uint)(uVar28 == 1) << 1 | (uint)(uVar28 == 0);
    if (((byte)ac & 1 | 1 < uVar28) == 1) {
      return;
    }
    auStackX_0._12_52_ = auVar16._12_52_;
    auStackX_0._0_8_ = auVar16._0_8_;
    auStackX_0._8_4_ = 0x2b518;
    auVar9._8_56_ = auStackX_0._8_56_;
    auVar9._4_4_ = (undefined1 *)0x0;
    auVar9._0_4_ = auStackX_0;
    uVar28 = order_act_set(uVar27,*(int *)((&g_order_action_table_by_character)
                                           [*(byte *)(g_current_player + 1)] + uVar27 * 4));
    g_cond_act_result = (byte)uVar28;
    *(byte *)(g_current_player + 0x2c) = g_cond_act_result;
    break;
  case (undefined *)0x2b534:
    auVar18._8_4_ = 0x2b538;
    auVar18._0_8_ = uVar4;
    auVar18._12_52_ = auVar10._12_52_;
    *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar18;
    auVar9._8_56_ = auVar18._8_56_;
    auVar9._4_4_ = auStack_40;
    auVar9._0_4_ = fp;
    uVar28 = comact_can_issue_action_request();
    uVar28 = uVar28 & 0xff;
    ac = ac & 0xfffffff8 | (uint)(1 < uVar28) << 2 | (uint)(uVar28 == 1) << 1 | (uint)(uVar28 == 0);
    if (((byte)ac & 1 | 1 < uVar28) == 1) goto LAB_0002b5a8;
    auVar19._24_40_ = auVar9._24_40_;
    auVar19._0_20_ = auVar9._0_20_;
    auVar19[0x14] = bVar3;
    auVar19._21_3_ = 0;
    auStackX_0._12_52_ = auVar19._12_52_;
    auStackX_0._0_8_ = auVar9._0_8_;
    auStackX_0._8_4_ = 0x2b550;
    auVar9._8_56_ = auStackX_0._8_56_;
    auVar9._4_4_ = (undefined1 *)0x0;
    auVar9._0_4_ = auStackX_0;
    uVar28 = FUN_0002a040(uVar27);
    uVar28 = uVar28 & 0xff;
    ac = ac & 0xfffffff8 | (uint)(1 < uVar28) << 2 | (uint)(uVar28 == 1) << 1 | (uint)(uVar28 == 0);
    if (((byte)ac & 1 | 1 < uVar28) != 1) {
      g_cond_act_result = (&DAT_000a7900)[uVar27 * 4];
      *(byte *)(g_current_player + 0x2c) = g_cond_act_result;
      break;
    }
    g_cond_act_result = (&DAT_000a7901)[uVar27 * 4];
    *(byte *)(g_current_player + 0x2c) = g_cond_act_result;
  case (undefined *)0x2b598:
    (&DAT_00564638)[g_ai_player_loop_index] = (undefined1)g14;
LAB_0002b5a8:
    fp = auVar9._0_4_;
    return;
  case (undefined *)0x2b5ac:
    auVar20._8_4_ = 0x2b5b0;
    auVar20._0_8_ = uVar4;
    auVar20._12_52_ = auVar10._12_52_;
    *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar20;
    auVar9._8_56_ = auVar20._8_56_;
    auVar9._4_4_ = (undefined1 *)0x0;
    auVar9._0_4_ = fp;
    uVar27 = comact_can_issue_action_request();
    uVar28 = ac;
    uVar27 = uVar27 & 0xff;
    ac = ac & 0xfffffff8 | (uint)(1 < uVar27) << 2 | (uint)(uVar27 == 1) << 1 | (uint)(uVar27 == 0);
    if (((byte)ac & 1 | 1 < uVar27) == 1) {
      return;
    }
    ac = uVar28 & 0xfffffff8 | (uint)(g_comact_wait_remaining[g_ai_player_loop_index] < 0);
    if (((byte)ac & 1 | 0 < g_comact_wait_remaining[g_ai_player_loop_index]) != 1) {
      g_comact_wait_remaining[g_ai_player_loop_index] = uVar26;
      g_comact_wait_initial[g_ai_player_loop_index] =
           g_comact_wait_remaining[g_ai_player_loop_index];
    }
    goto comact_countdown_tick;
  case (undefined *)0x2b5f8:
    auVar21._8_4_ = 0x2b5fc;
    auVar21._0_8_ = uVar4;
    auVar21._12_52_ = auVar10._12_52_;
    *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar21;
    auVar9._8_56_ = auVar21._8_56_;
    auVar9._4_4_ = auStack_40;
    auVar9._0_4_ = fp;
    uVar30 = comact_can_issue_action_request();
    uVar28 = ac;
    uVar30 = uVar30 & 0xff;
    ac = ac & 0xfffffff8 | (uint)(1 < uVar30) << 2 | (uint)(uVar30 == 1) << 1 | (uint)(uVar30 == 0);
    if (((byte)ac & 1 | 1 < uVar30) == 1) {
      return;
    }
    sVar1 = g_comact_wait_remaining[g_ai_player_loop_index];
    ac = uVar28 & 0xfffffff8 | (uint)(0 < sVar1) << 2 | (uint)(sVar1 == 0) << 1 | (uint)(sVar1 < 0);
    if (((byte)ac & 1 | 0 < sVar1) != 1) {
      auStackX_0._12_52_ = auVar9._12_52_;
      auStackX_0._0_8_ = auVar9._0_8_;
      auStackX_0._8_4_ = 0x2b624;
      auVar9._8_56_ = auStackX_0._8_56_;
      auVar9._4_4_ = (undefined1 *)0x0;
      auVar9._0_4_ = auStackX_0;
      uVar28 = FUN_0002f280(uVar27);
      g_comact_wait_remaining[g_ai_player_loop_index] = (ushort)(byte)uVar28;
      g_comact_wait_initial[g_ai_player_loop_index] =
           g_comact_wait_remaining[g_ai_player_loop_index];
    }
    goto comact_countdown_tick;
  case (undefined *)0x2b65c:
    auVar22._8_4_ = 0x2b660;
    auVar22._0_8_ = uVar4;
    auVar22._12_52_ = auVar10._12_52_;
    *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar22;
    auVar9._8_56_ = auVar22._8_56_;
    auVar9._4_4_ = auStack_40;
    auVar9._0_4_ = fp;
    uVar30 = comact_can_issue_action_request();
    uVar28 = ac;
    uVar30 = uVar30 & 0xff;
    ac = ac & 0xfffffff8 | (uint)(1 < uVar30) << 2 | (uint)(uVar30 == 1) << 1 | (uint)(uVar30 == 0);
    if (((byte)ac & 1 | 1 < uVar30) == 1) {
      return;
    }
    sVar1 = g_comact_wait_remaining[g_ai_player_loop_index];
    ac = uVar28 & 0xfffffff8 | (uint)(0 < sVar1) << 2 | (uint)(sVar1 == 0) << 1 | (uint)(sVar1 < 0);
    if (((byte)ac & 1 | 0 < sVar1) != 1) {
      auStackX_0._12_52_ = auVar9._12_52_;
      auStackX_0._0_8_ = auVar9._0_8_;
      auStackX_0._8_4_ = 0x2b69c;
      auVar9._8_56_ = auStackX_0._8_56_;
      auVar9._4_4_ = (undefined1 *)0x0;
      auVar9._0_4_ = auStackX_0;
      uVar28 = FUN_0002f280((*(byte *)((&g_comact_cursor_by_player)[g_ai_player_loop_index] + 3) -
                            uVar27) + 1);
      g_comact_wait_remaining[g_ai_player_loop_index] = (ushort)bVar3 + ((ushort)uVar28 & 0xff);
      g_comact_wait_initial[g_ai_player_loop_index] =
           g_comact_wait_remaining[g_ai_player_loop_index];
    }
    goto comact_countdown_tick;
  case (undefined *)0x2b6d8:
    auVar23._8_4_ = 0x2b6dc;
    auVar23._0_8_ = uVar4;
    auVar23._12_52_ = auVar10._12_52_;
    *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar23;
    auVar9._8_56_ = auVar23._8_56_;
    auVar9._4_4_ = (undefined1 *)0x0;
    auVar9._0_4_ = fp;
    uVar30 = comact_can_issue_action_request();
    uVar28 = ac;
    uVar30 = uVar30 & 0xff;
    ac = ac & 0xfffffff8 | (uint)(1 < uVar30) << 2 | (uint)(uVar30 == 1) << 1 | (uint)(uVar30 == 0);
    if (((byte)ac & 1 | 1 < uVar30) == 1) {
      return;
    }
    uVar30 = (uint)g_ai_player_loop_index;
    ac = uVar28 & 0xfffffff8 | (uint)(g_comact_wait_remaining[uVar30] < 0);
    if (((byte)ac & 1 | 0 < g_comact_wait_remaining[uVar30]) != 1) {
      uVar31 = (uint)*(byte *)((&g_comact_cursor_by_player)[uVar30] + 3) * (uint)DAT_005555e2;
      uVar28 = uVar28 & 0xfffffff8 | (uint)(uVar31 == uVar27) << 1;
      ac = uVar28 | uVar27 < uVar31;
      if (((byte)ac & 1 | (byte)(uVar28 >> 1) & 1) == 1) {
        g_comact_wait_remaining[g_ai_player_loop_index] = g14;
      }
      else {
        g_comact_wait_remaining[uVar30] =
             (ushort)bVar3 -
             (ushort)*(byte *)((&g_comact_cursor_by_player)[uVar30] + 3) * (ushort)DAT_005555e2;
      }
      g_comact_wait_initial[g_ai_player_loop_index] =
           g_comact_wait_remaining[g_ai_player_loop_index];
    }
    goto comact_countdown_tick;
  case (undefined *)0x2b768:
    auVar24._8_4_ = 0x2b76c;
    auVar24._0_8_ = uVar4;
    auVar24._12_52_ = auVar10._12_52_;
    *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar24;
    auVar9._8_56_ = auVar24._8_56_;
    auVar9._4_4_ = (undefined1 *)0x0;
    auVar9._0_4_ = fp;
    uVar27 = comact_can_issue_action_request();
    uVar28 = ac;
    uVar27 = uVar27 & 0xff;
    ac = ac & 0xfffffff8 | (uint)(1 < uVar27) << 2 | (uint)(uVar27 == 1) << 1 | (uint)(uVar27 == 0);
    if (((byte)ac & 1 | 1 < uVar27) == 1) {
      return;
    }
    uVar27 = (uint)g_ai_player_loop_index;
    ac = uVar28 & 0xfffffff8 | (uint)(g_comact_wait_remaining[uVar27] < 0);
    if (((byte)ac & 1 | 0 < g_comact_wait_remaining[uVar27]) != 1) {
      ac = uVar28 & 0xfffffff8;
      if (*(byte *)((&g_comact_cursor_by_player)[uVar27] + 3) < DAT_005555e2) {
        g_comact_wait_remaining[g_ai_player_loop_index] = g14;
      }
      else {
        g_comact_wait_remaining[uVar27] = uVar26;
      }
      g_comact_wait_initial[g_ai_player_loop_index] =
           g_comact_wait_remaining[g_ai_player_loop_index];
    }
    goto comact_countdown_tick;
  case (undefined *)0x2b7e0:
    *(ushort *)(g_current_player + 0x20) = uVar26;
    break;
  case (undefined *)0x2b7f0:
    (&DAT_0056474a)[g_ai_player_loop_index] = bVar3;
    break;
  case (undefined *)0x2b804:
    *(undefined1 *)(g_current_player + 0x4e) = 1;
    break;
  case (undefined *)0x2b818:
    uVar30 = (uint)*(byte *)(g_current_player + 0x2a);
    ac = uVar28 & 0xfffffff8 | (uint)(uVar30 < uVar27) << 2 | (uint)(uVar30 == uVar27) << 1 |
         (uint)(uVar27 < uVar30);
    if (((byte)ac & 1 | uVar30 < uVar27) == 1) {
      fp = unaff_pfp;
      return;
    }
    break;
  case (undefined *)0x2b830:
    uVar30 = (uint)*(byte *)(g_opponent_player + 0x2a);
    ac = uVar28 & 0xfffffff8 | (uint)(uVar30 < uVar27) << 2 | (uint)(uVar30 == uVar27) << 1 |
         (uint)(uVar27 < uVar30);
    if (((byte)ac & 1 | uVar30 < uVar27) == 1) {
      fp = unaff_pfp;
      return;
    }
    break;
  case (undefined *)0x2b848:
    uVar30 = (uint)(ushort)(&DAT_005645cc)[g_ai_player_loop_index];
    ac = uVar28 & 0xfffffff8 | (uint)(uVar30 < uVar27) << 2 | (uint)(uVar30 == uVar27) << 1 |
         (uint)(uVar27 < uVar30);
    if (uVar30 < uVar27) {
      fp = unaff_pfp;
      return;
    }
    break;
  case (undefined *)0x2b864:
    uVar30 = (uint)(ushort)(&DAT_005645cc)[DAT_005645b7];
    ac = uVar28 & 0xfffffff8 | (uint)(uVar30 < uVar27) << 2 | (uint)(uVar30 == uVar27) << 1 |
         (uint)(uVar27 < uVar30);
    if (uVar30 < uVar27) {
      fp = unaff_pfp;
      return;
    }
    break;
  case (undefined *)0x2b880:
    auVar25._8_4_ = 0x2b884;
    auVar25._0_8_ = uVar4;
    auVar25._12_52_ = auVar10._12_52_;
    *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar25;
    auVar9._8_56_ = auVar25._8_56_;
    auVar9._4_4_ = (undefined1 *)0x0;
    auVar9._0_4_ = fp;
    uVar27 = comact_can_issue_action_request();
    uVar28 = ac;
    uVar27 = uVar27 & 0xff;
    ac = ac & 0xfffffff8 | (uint)(1 < uVar27) << 2 | (uint)(uVar27 == 1) << 1 | (uint)(uVar27 == 0);
    if (((byte)ac & 1 | 1 < uVar27) == 1) {
      return;
    }
    g_cond_act_result = bVar3;
    *(byte *)(g_current_player + 0x2c) = bVar3;
    uVar27 = (uint)g_ai_player_loop_index;
    ac = uVar28 & 0xfffffff8 | (uint)(g_comact_wait_remaining[uVar27] < 0);
    if (((byte)ac & 1 | 0 < g_comact_wait_remaining[uVar27]) != 1) {
      g_comact_wait_remaining[uVar27] = (ushort)*(byte *)((&g_comact_cursor_by_player)[uVar27] + 3);
      g_comact_wait_initial[g_ai_player_loop_index] =
           g_comact_wait_remaining[g_ai_player_loop_index];
    }
comact_countdown_tick:
    g_comact_wait_remaining[g_ai_player_loop_index] =
         g_comact_wait_remaining[g_ai_player_loop_index] + -1;
    sVar1 = g_comact_wait_remaining[g_ai_player_loop_index];
    ac = ac & 0xfffffff8 | (uint)(0 < sVar1) << 2 | (uint)(sVar1 == 0) << 1 | (uint)(sVar1 < 0);
    if (0 < sVar1) {
      fp = auVar9._0_4_;
      return;
    }
    g_comact_wait_remaining[g_ai_player_loop_index] = g14;
    break;
  case (undefined *)0x2b8ec:
    bVar3 = *(byte *)(g_current_player + 0x2d);
    ac = uVar28 & 0xfffffff8 | (uint)(7 < bVar3) << 2 | (uint)(bVar3 == 7) << 1 | (uint)(bVar3 < 7);
    if (((byte)ac & 1 | 7 < bVar3) == 1) {
      fp = unaff_pfp;
      return;
    }
    break;
  case (undefined *)0x2b904:
    uVar27 = uVar28 & 0xfffffff8 | (uint)(*(char *)(g_current_player + 0x2d) == '\n') << 1;
    ac = uVar27 | *(char *)(g_current_player + 0x2d) == '\t';
    if (((byte)ac & 1 | (byte)(uVar27 >> 1) & 1) != 1) {
      bVar3 = *(byte *)(g_current_player + 0x2d);
      ac = uVar28 & 0xfffffff8 | (uint)(0xb < bVar3) << 2 | (uint)(bVar3 == 0xb) << 1 |
           (uint)(bVar3 < 0xb);
      if (((byte)ac & 1 | 0xb < bVar3) == 1) {
        fp = unaff_pfp;
        return;
      }
    }
    bVar3 = *(byte *)(g_current_player + 0x44);
    ac = ac & 0xfffffff8 | (uint)(1 < bVar3) << 2 | (uint)(bVar3 == 1) << 1 | (uint)(bVar3 == 0);
    if (((byte)ac & 1 | 1 < bVar3) == 1) {
      fp = unaff_pfp;
      return;
    }
    *(undefined1 *)(g_current_player + 0x50) = 1;
    break;
  case (undefined *)0x2b948:
    *(byte *)(g_current_player + 0x48) = bVar3;
    break;
  case (undefined *)0x2b958:
    DAT_0055561c = bVar3;
    break;
  case (undefined *)0x2b964:
    goto switchD_0002af1c_caseD_2b964;
  }
  (&g_comact_cursor_by_player)[g_ai_player_loop_index] =
       (&g_comact_cursor_by_player)[g_ai_player_loop_index] + 4;
  (&DAT_00564778)[g_ai_player_loop_index] = (&DAT_00564778)[g_ai_player_loop_index] + '\x01';
  (&DAT_00564650)[g_ai_player_loop_index] = (undefined1)g14;
  fp = auVar9._0_4_;
  return;
}

