
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* High-confidence Saturn-name match: cond_act_set(UINT8 set_num, UINT8 chk_cond). g0 is retained as
   set_num; g1 is masked and dispatched through cases 0..9; case 3 selects a character COMACT group;
   case 6 recursively calls this routine with DOA_COND_BRANCH.set_num and .check_condition. */

uint cond_act_set(uint param_1,byte param_2)

{
  uint uVar1;
  undefined1 (*pauVar2) [64];
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [20];
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined8 in_register_0000000c;
  undefined1 auVar9 [20];
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined1 in_register_00000020 [32];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  uint uVar27;
  uint uVar28;
  int iVar29;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [64];
  undefined1 auStack_80 [999872];
  undefined1 auVar13 [64];
  undefined1 auVar17 [64];
  undefined1 auVar24 [64];
  undefined1 auVar10 [64];
  
  uVar27 = ac;
  uVar7 = CONCAT44(auStackX_0,unaff_pfp);
  auVar8._8_4_ = unaff_retaddr;
  auVar8._0_8_ = uVar7;
  auVar8._12_8_ = in_register_0000000c;
  auVar10._20_4_ = unaff_r5;
  auVar10._0_20_ = auVar8;
  auVar10._24_4_ = unaff_r6;
  auVar10._28_4_ = unaff_r7;
  auVar10._32_32_ = in_register_00000020;
  auVar12._20_44_ = auVar10._20_44_;
  auVar9._0_16_ = auVar8._0_16_;
  auVar9._16_4_ = param_1;
  auVar12._0_20_ = auVar9;
  ac = ac & 0xfffffff8 | (uint)(9 < param_2) << 2 | (uint)(param_2 == 9) << 1 | (uint)(param_2 < 9);
  auVar11._24_40_ = auVar10._24_40_;
  auVar14._12_52_ = auVar12._12_52_;
  uVar28 = 0xff;
  switch(param_2) {
  case 0:
    goto switchD_0002d57c_caseD_0;
  case 1:
    auVar11._20_4_ = param_1 & 0xff;
    auVar11._0_20_ = auVar9;
    auVar13._12_52_ = auVar11._12_52_;
    auVar13._8_4_ = 0x2d5e4;
    auVar13._0_8_ = uVar7;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar13;
    auVar12._8_56_ = auVar13._8_56_;
    auVar12._4_4_ = 0;
    auVar12._0_4_ = fp;
    uVar27 = FUN_0002a040(auVar11._20_4_);
    uVar27 = uVar27 & 0xff;
    ac = ac & 0xfffffff8 | (uint)(1 < uVar27) << 2 | (uint)(uVar27 == 1) << 1 | (uint)(uVar27 == 0);
    if (((byte)ac & 1 | 1 < uVar27) == 1) {
      uVar28 = (uint)(byte)(&DAT_000a7901)[(param_1 & 0xff) * 4];
    }
    else {
      uVar28 = (uint)(byte)(&DAT_000a7900)[auVar11._20_4_ * 4];
    }
    break;
  case 2:
    bVar4 = *(byte *)(g_current_player + 0x2d);
    ac = uVar27 & 0xfffffff8 | (uint)(1 < bVar4) << 2 | (uint)(bVar4 == 1) << 1 | (uint)(bVar4 == 0)
    ;
    bVar4 = (byte)ac & 1 | 1 < bVar4;
    goto joined_r0x0002d7a4;
  case 3:
    (&DAT_00564638)[g_ai_player_loop_index] = 1;
    *(undefined2 *)(&DAT_0056463c + (uint)g_ai_player_loop_index * 2) = g14;
    *(undefined4 *)(&g_comact_cursor_by_player + (uint)g_ai_player_loop_index * 4) =
         *(undefined4 *)
          ((&g_comact_group_table_by_character)[*(byte *)(g_current_player + 1)] +
          (param_1 & 0xff) * 4);
    (&g_comact_group_number_by_player)[g_ai_player_loop_index] = (char)param_1;
    (&DAT_00564778)[g_ai_player_loop_index] = (undefined1)g14;
    (&DAT_00564650)[g_ai_player_loop_index] = (undefined1)g14;
    auVar14._8_4_ = 0x2d6ac;
    auVar14._0_8_ = uVar7;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar14;
    auVar12._8_56_ = auVar14._8_56_;
    auVar12._4_4_ = 0;
    auVar12._0_4_ = fp;
    FUN_0002aef0();
    uVar28 = (uint)g_cond_act_result;
    break;
  case 4:
    bVar4 = (&DAT_005645e4)[g_ai_player_loop_index];
    ac = uVar27 & 0xfffffff8 | (uint)(1 < bVar4) << 2 | (uint)(bVar4 == 1) << 1 | (uint)(bVar4 == 0)
    ;
    bVar4 = (byte)ac & 1 | 1 < bVar4;
    goto joined_r0x0002d7a4;
  case 5:
    bVar4 = *(byte *)(g_opponent_player + 0x43);
    ac = uVar27 & 0xfffffff8 | (uint)(1 < bVar4) << 2 | (uint)(bVar4 == 1) << 1 | (uint)(bVar4 == 0)
    ;
    bVar4 = (byte)ac & 1 | 1 < bVar4;
joined_r0x0002d7a4:
    if (bVar4 == 1) break;
    goto switchD_0002d57c_caseD_0;
  case 6:
    auVar15._20_4_ =
         *(ushort **)
          ((&g_cond_branch_table_by_character)[*(byte *)(g_current_player + 1)] +
          (param_1 & 0xff) * 4);
    auVar15._0_20_ = auVar9;
    auVar15._24_40_ = auVar11._24_40_;
    auVar17._12_52_ = auVar15._12_52_;
    auVar17._8_4_ = 0x2d6dc;
    auVar17._0_8_ = uVar7;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar17;
    auVar16._8_56_ = auVar17._8_56_;
    auVar16._4_4_ = auStackX_0;
    auVar16._0_4_ = fp;
    uVar27 = FUN_0008e6f0();
    auVar18._20_44_ = auVar16._20_44_;
    auVar18._0_16_ = auVar16._0_16_;
    auVar18._16_4_ = uVar27 & 0xff;
    auVar19._32_32_ = auVar16._32_32_;
    auVar19._0_28_ = auVar18._0_28_;
    auVar19._28_4_ = auVar18._16_4_;
    auStackX_0._12_52_ = auVar19._12_52_;
    auStackX_0._0_8_ = auVar16._0_8_;
    auStackX_0._8_4_ = 0x2d6f8;
    auVar20._8_56_ = auStackX_0._8_56_;
    auVar20._4_4_ = auStack_80;
    auVar20._0_4_ = auStackX_0;
    uVar27 = FUN_0002db50((uint)*auVar15._20_4_,(uint)auVar15._20_4_[2]);
    auVar21._28_36_ = auVar20._28_36_;
    auVar21._0_24_ = auVar20._0_24_;
    auVar21._24_4_ = uVar27;
    uVar27 = uVar27 & 0xffff;
    ac = ac & 0xfffffff8 | (uint)(uVar27 < auVar18._16_4_) << 2 |
         (uint)(uVar27 == auVar18._16_4_) << 1 | (uint)(auVar18._16_4_ < uVar27);
    fp = &auStack_40;
    if (((byte)ac & 1) != 1) {
      auVar21._0_16_ = auVar20._0_16_;
      auVar21._16_4_ = auVar18._16_4_;
      do {
        auVar22._24_40_ = auVar21._24_40_;
        auVar22._0_20_ = auVar21._0_20_;
        auVar22._20_4_ = (ushort *)(auVar21._20_4_ + 8);
        uVar5 = *auVar22._20_4_;
        uVar6 = *(ushort *)(auVar21._20_4_ + 0xc);
        pauVar2 = (undefined1 (*) [64])(auVar21._4_4_ + 0x3fU & 0xffffffc0);
        auVar24._12_52_ = auVar22._12_52_;
        auVar24._0_8_ = auVar21._0_8_;
        auVar24._8_4_ = 0x2d720;
        *fp = auVar24;
        auVar23._8_56_ = auVar24._8_56_;
        auVar23._4_4_ = pauVar2 + 1;
        auVar23._0_4_ = fp;
        uVar28 = FUN_0002db50((uint)uVar5,(uint)uVar6);
        uVar28 = auVar21._24_4_ + uVar28;
        auVar21._28_36_ = auVar23._28_36_;
        auVar21._0_24_ = auVar23._0_24_;
        auVar21._24_4_ = uVar28;
        uVar28 = uVar28 & 0xffff;
        uVar27 = ac & 0xfffffff8 | (uint)(uVar28 < auVar18._16_4_) << 2 |
                 (uint)(uVar28 == auVar18._16_4_) << 1;
        ac = uVar27 | auVar18._16_4_ < uVar28;
        fp = pauVar2;
      } while (((byte)(uVar27 >> 1) & 1 | uVar28 < auVar18._16_4_) == 1);
    }
    bVar4 = *(byte *)(auVar21._20_4_ + 2);
    bVar3 = *(byte *)(auVar21._20_4_ + 3);
    auVar25._12_52_ = auVar21._12_52_;
    auVar25._0_8_ = auVar21._0_8_;
    auVar25._8_4_ = 0x2d744;
    *fp = auVar25;
    auVar12._8_56_ = auVar25._8_56_;
    auVar12._4_4_ = 0;
    auVar12._0_4_ = fp;
    uVar28 = cond_act_set((uint)bVar4,bVar3);
    break;
  case 7:
    iVar29 = *(int *)((&g_order_action_table_by_character)[*(byte *)(g_current_player + 1)] +
                     (param_1 & 0xff) * 4);
    auVar26._8_4_ = 0x2d770;
    auVar26._0_8_ = uVar7;
    auVar26._12_52_ = auVar14._12_52_;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar26;
    auVar12._8_56_ = auVar26._8_56_;
    auVar12._4_4_ = 0;
    auVar12._0_4_ = fp;
    uVar28 = order_act_set(param_1 & 0xff,iVar29);
    break;
  case 8:
    bVar4 = *(byte *)(g_opponent_player + 0x4d);
    uVar1 = uVar27 & 0xfffffff8 | (uint)(4 < bVar4) << 2 | (uint)(bVar4 == 4) << 1;
    ac = uVar1 | bVar4 < 4;
    if ((((byte)(uVar1 >> 1) & 1) != 1) &&
       (uVar1 = uVar27 & 0xfffffff8 | (uint)(6 < bVar4) << 2 | (uint)(bVar4 == 6) << 1,
       ac = uVar1 | bVar4 < 6, ((byte)(uVar1 >> 1) & 1) != 1)) {
      ac = uVar27 & 0xfffffff8 | (uint)(8 < bVar4) << 2 | (uint)(bVar4 == 8) << 1 |
           (uint)(bVar4 < 8);
      bVar4 = (byte)ac & 1 | 8 < bVar4;
      goto joined_r0x0002d7a4;
    }
    goto switchD_0002d57c_caseD_0;
  case 9:
    bVar4 = *(byte *)(g_opponent_player + 0x4d);
    uVar1 = uVar27 & 0xfffffff8 | (uint)(5 < bVar4) << 2 | (uint)(bVar4 == 5) << 1;
    ac = uVar1 | bVar4 < 5;
    if ((((byte)(uVar1 >> 1) & 1) != 1) &&
       (uVar1 = uVar27 & 0xfffffff8 | (uint)(7 < bVar4) << 2 | (uint)(bVar4 == 7) << 1,
       ac = uVar1 | bVar4 < 7, ((byte)(uVar1 >> 1) & 1) != 1)) {
      ac = uVar27 & 0xfffffff8 | (uint)(9 < bVar4) << 2 | (uint)(bVar4 == 9) << 1 |
           (uint)(bVar4 < 9);
      bVar4 = (byte)ac & 1 | 9 < bVar4;
      goto joined_r0x0002d7a4;
    }
switchD_0002d57c_caseD_0:
    uVar28 = param_1;
  }
  fp = (undefined1 (*) [64])auVar12._0_4_;
  return uVar28 & 0xff;
}

