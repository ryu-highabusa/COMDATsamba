
/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0x00000000 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00020040(uint param_1)

{
  undefined1 (*pauVar1) [64];
  DOA_ACTCODE_COMMON DVar2;
  DOA_ACTCODE_COMMON DVar3;
  undefined1 auVar4 [32];
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined1 in_register_0000000c [20];
  undefined4 unaff_r8;
  undefined1 in_register_00000024 [28];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  byte bVar19;
  DOA_ACTSTATE DVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint8_t uVar24;
  bool bVar25;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [64];
  undefined1 auStack_80 [64];
  undefined1 auStack_c0 [999808];
  undefined1 auVar9 [64];
  undefined1 auVar5 [64];
  
  uVar22 = ac;
  auVar4._8_4_ = unaff_retaddr;
  auVar4._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  auVar4._12_20_ = in_register_0000000c;
  auVar5._32_4_ = unaff_r8;
  auVar5._0_32_ = auVar4;
  auVar5._36_28_ = in_register_00000024;
  auVar6._32_32_ = auVar5._32_32_;
  auVar6._0_28_ = auVar4._0_28_;
  auVar6._28_4_ = param_1;
  auVar7._0_16_ = auVar4._0_16_;
  auVar7._16_4_ = param_1 ^ 1;
  auVar7._20_4_ = &g_player1 + param_1;
  auVar7._28_36_ = auVar6._28_36_;
  auVar7._24_4_ = &g_player1 + auVar7._16_4_;
  if ((&g_player1)[param_1].animation_flag == '\x02') {
    ac = ac & 0xfffffff8 | (uint)((&g_player1)[param_1].action_request != 0xff) << 2 |
         (uint)((&g_player1)[param_1].action_request == 0xff) << 1;
    if (((byte)(ac >> 1) & 1) == 1) {
      fp = (undefined1 (*) [64])unaff_pfp;
      return;
    }
    (&g_player1)[param_1].animation_flag = '\x03';
    Player_SetActCode((&g_player1)[param_1].action_request,param_1);
    return;
  }
  uVar21 = (uint)(&g_player1)[param_1].action_request;
  uVar23 = ac & 0xfffffff8 | (uint)(uVar21 < 0xff) << 2 | (uint)(uVar21 == 0xff) << 1;
  ac = uVar23 | 0xff < uVar21;
  if (((byte)(uVar23 >> 1) & 1) == 1) {
    if ((&g_player1)[param_1].action_state != 0x0_NEUTRAL) {
      if ((&g_player1)[param_1].pose_state == '\0') {
        (&g_player1)[param_1].action_code = (DOA_ACTCODE_COMMON)g14;
      }
      else {
        (&g_player1)[param_1].action_code = CMD_SIT;
      }
    }
    bVar19 = (&g_player1)[param_1].animation_flag;
    ac = uVar22 & 0xfffffff8 | (uint)(1 < bVar19) << 2 | (uint)(bVar19 == 1) << 1 |
         (uint)(bVar19 == 0);
    if (((byte)ac & 1 | 1 < bVar19) != 1) {
      (&g_player1)[param_1].animation_flag = (DOA_ACTCODE_COMMON)g14;
      FUN_00023da0(param_1);
      return;
    }
    DVar2 = (&g_player1)[param_1].action_code;
    ac = uVar22 & 0xfffffff8 | (uint)(DVar2 != CMD_STAND) << 2 | (uint)(DVar2 == CMD_STAND) << 1;
    if ((((byte)(ac >> 1) & 1) == 1) ||
       (uVar23 = uVar22 & 0xfffffff8 | (uint)(CMD_STOP < DVar2) << 2 |
                 (uint)(DVar2 == CMD_STOP) << 1, ac = uVar23 | DVar2 < CMD_STOP,
       ((byte)(uVar23 >> 1) & 1) == 1)) {
      fp = (undefined1 (*) [64])unaff_pfp;
      return;
    }
    DVar3 = (&g_player1)[param_1].action_code;
    uVar23 = uVar22 & 0xfffffff8 | (uint)(1 < (byte)(DVar3 - CMD_DASH_FRONT)) << 2 |
             (uint)((DOA_ACTCODE_COMMON)(DVar3 - CMD_DASH_FRONT) == 1) << 1;
    ac = uVar23 | DVar3 == CMD_DASH_FRONT;
    if (((byte)ac & 1 | (byte)(uVar23 >> 1) & 1) == 1) {
      fp = (undefined1 (*) [64])unaff_pfp;
      return;
    }
    uVar23 = uVar22 & 0xfffffff8 | (uint)(1 < (byte)(DVar3 - CMD_LO_DASH_F1)) << 2 |
             (uint)((DOA_ACTCODE_COMMON)(DVar3 - CMD_LO_DASH_F1) == 1) << 1;
    ac = uVar23 | DVar3 == CMD_LO_DASH_F1;
    if (((byte)ac & 1 | (byte)(uVar23 >> 1) & 1) == 1) {
      fp = (undefined1 (*) [64])unaff_pfp;
      return;
    }
    ac = uVar22 & 0xfffffff8 | (uint)(CMD_SIT_BACK < DVar2) << 2 |
         (uint)(DVar2 == CMD_SIT_BACK) << 1 | (uint)(DVar2 < CMD_SIT_BACK);
    if (CMD_SIT_BACK < DVar2) {
      fp = (undefined1 (*) [64])unaff_pfp;
      return;
    }
    (&g_player1)[param_1].action_request = (DOA_ACTCODE_COMMON)g14;
    DVar2 = (&g_player1)[param_1].action_code;
    ac = uVar22 & 0xfffffff8 | (uint)(CMD_RUN < DVar2) << 2 | (uint)(DVar2 == CMD_RUN) << 1 |
         (uint)(DVar2 < CMD_RUN);
    if (((byte)ac & 1 | CMD_RUN < DVar2) == 1) {
      bVar19 = (&g_player1)[param_1].action_code - CMD_SITDOWN;
      ac = uVar22 & 0xfffffff8 | (uint)(8 < bVar19) << 2 | (uint)(bVar19 == 8) << 1 |
           (uint)(bVar19 < 8);
      if (8 < bVar19) goto LAB_00020578;
      uVar24 = '\r';
    }
    else {
      uVar24 = '\x06';
    }
    (&g_player1)[param_1].action_request = uVar24;
LAB_00020578:
    Player_SetActCode((&g_player1)[param_1].action_request,param_1);
    return;
  }
  auVar9._12_52_ = auVar7._12_52_;
  auVar9._8_4_ = 0x200b8;
  auVar9._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar9;
  auVar8._8_56_ = auVar9._8_56_;
  auVar8._4_4_ = auStackX_0;
  auVar8._0_4_ = fp;
  uVar22 = Player_GetActionStateForCode(uVar21,param_1);
  auVar10._36_28_ = auVar8._36_28_;
  auVar10._0_32_ = auVar8._0_32_;
  auVar10._32_4_ = uVar22 & 0xff;
  auStackX_0._12_52_ = auVar10._12_52_;
  auStackX_0._0_8_ = auVar8._0_8_;
  auStackX_0._8_4_ = 0x200cc;
  auVar11._8_56_ = auStackX_0._8_56_;
  auVar11._4_4_ = &auStack_80;
  auVar11._0_4_ = auStackX_0;
  bVar19 = Player_GetActionStateForCode
                     ((uint)(&g_player1)[auVar7._16_4_].action_request,auVar7._16_4_);
  auVar12._0_8_ = auVar11._0_8_;
  fp = &auStack_40;
  if (auVar10._32_4_ == 4) {
    uVar22 = ac & 0xfffffff8 | (uint)((&g_player1)[auVar7._16_4_].action_request != 0xff) << 2 |
             (uint)((&g_player1)[auVar7._16_4_].action_request == 0xff) << 1;
    if ((((byte)(uVar22 >> 1) & 1) != 1) &&
       (ac = ac & 0xfffffff8 | (uint)(4 < bVar19) << 2 | (uint)(bVar19 == 4) << 1 |
             (uint)(bVar19 < 4), uVar22 = ac, ((byte)ac & 1 | 4 < bVar19) != 1)) {
      fp = &auStack_80;
      auVar12._12_52_ = auVar11._12_52_;
      auVar12._8_4_ = 0x200e8;
      auVar11._8_56_ = auVar12._8_56_;
      auVar11._4_4_ = (undefined1 (*) [64])auStack_c0;
      auVar11._0_4_ = &auStack_40;
      auStack_40 = auVar12;
      uVar23 = FUN_0008e6f0();
      uVar22 = ac & 0xfffffff8;
      ac = uVar22 | 2;
      if ((uVar23 & 1) == 0) goto LAB_00020110;
    }
    ac = uVar22;
    auVar13._12_52_ = auVar11._12_52_;
    auVar13._0_8_ = auVar11._0_8_;
    auVar13._8_4_ = 0x200f4;
    *fp = auVar13;
    auVar11._8_56_ = auVar13._8_56_;
    auVar11._4_4_ = (undefined1 (*) [64])0x0;
    auVar11._0_4_ = fp;
    FUN_00024030(param_1);
    goto LAB_000204d8;
  }
  uVar22 = ac & 0xfffffff8 | (uint)((&g_player1)[auVar7._16_4_].action_request == 0xff) << 1;
  if (((((byte)(uVar22 >> 1) & 1) != 1) &&
      (uVar22 = ac & 0xfffffff8 |
                (uint)((&g_player1)[auVar7._16_4_].action_state == 0xA_THROWCAUGHT) << 1,
      ((byte)(uVar22 >> 1) & 1) != 1)) &&
     (ac = ac & 0xfffffff8 | (uint)(4 < bVar19) << 2 | (uint)(bVar19 == 4) << 1 | (uint)(bVar19 < 4)
     , uVar22 = ac, ((byte)ac & 1 | 4 < bVar19) != 1)) {
LAB_00020110:
    auVar14._12_52_ = auVar11._12_52_;
    auVar14._0_8_ = auVar11._0_8_;
    auVar14._8_4_ = 0x20118;
    *fp = auVar14;
    auVar11._8_56_ = auVar14._8_56_;
    auVar11._4_4_ = (undefined1 (*) [64])0x0;
    auVar11._0_4_ = fp;
    FUN_00024030(auVar7._16_4_);
    goto LAB_000204d8;
  }
  ac = uVar22;
  if (auVar10._32_4_ - 1 < 2) {
    (&g_player1)[param_1].jump_state = (DOA_ACTCODE_COMMON)g14;
    (&g_player1)[param_1].jump_height = '\x02';
    uVar22 = ac & 0xfffffff8 | (uint)((&g_player1)[param_1].action_request == '\x15') << 1;
    if ((((byte)(uVar22 >> 1) & 1) == 1) ||
       (uVar22 = ac & 0xfffffff8, (byte)((&g_player1)[param_1].action_request + 0x9f) < 2)) {
      ac = uVar22;
      (&g_player1)[param_1].jump_direction = '\x01';
    }
    else {
      uVar22 = ac & 0xfffffff8 | (uint)((&g_player1)[param_1].action_request == '\x16') << 1;
      if ((((byte)(uVar22 >> 1) & 1) == 1) ||
         (ac = ac & 0xfffffff8, uVar22 = ac, (byte)((&g_player1)[param_1].action_request + 0x9d) < 2
         )) {
        ac = uVar22;
        (&g_player1)[param_1].jump_direction = '\x02';
      }
      else {
        (&g_player1)[param_1].jump_direction = (DOA_ACTCODE_COMMON)g14;
      }
    }
  }
  else {
    ac = ac & 0xfffffff8 | (uint)(0xe < auVar10._32_4_) << 2 | (uint)(auVar10._32_4_ == 0xe) << 1 |
         (uint)(auVar10._32_4_ < 0xe);
    if (((byte)ac & 1 | 0xe < auVar10._32_4_) != 1) {
      (&g_player1)[param_1].jump_state = (DOA_ACTCODE_COMMON)g14;
      *(undefined4 *)(&DAT_00557f40 + param_1 * 4) = g14;
      auVar15._20_44_ = auVar11._20_44_;
      auVar15._0_16_ = auVar11._0_16_;
      auVar15._16_4_ = g_character_combat_record_table_candidate[(&g_player1)[param_1].character_id]
      ;
      fp = &auStack_80;
      auStack_40._12_52_ = auVar15._12_52_;
      auStack_40._8_4_ = 0x201ac;
      auStack_40._0_8_ = auVar12._0_8_;
      auVar11._8_56_ = auStack_40._8_56_;
      auVar11._4_4_ = (undefined1 (*) [64])auStack_c0;
      auVar11._0_4_ = &auStack_40;
      uVar23 = FUN_000241e0(param_1);
      uVar22 = ac;
      ac = ac & 0xfffffff8 | (uint)(auVar15._16_4_[(uVar23 & 0xff) * 0x14 + 1] == 0);
      if (((byte)ac & 1 | 1 < (byte)auVar15._16_4_[(uVar23 & 0xff) * 0x14 + 1]) != 1) {
        ac = uVar22 & 0xfffffff8 | (uint)((int)param_1 < 0);
        uVar22 = g_p1_to_p2_heading_bam16;
        if (((byte)ac & 1 | 0 < (int)param_1) == 1) {
          uVar22 = g_p1_to_p2_heading_bam16 + 0x8000;
        }
        (&g_player1)[param_1].facing_direction = uVar22 & 0xffff;
      }
    }
  }
  uVar23 = ac;
  uVar22 = ac & 0xfffffff8 | (uint)(auVar10._32_4_ != 0) << 2 | (uint)(auVar10._32_4_ == 0) << 1;
  auVar16._0_8_ = auVar11._0_8_;
  auVar16._12_52_ = auVar11._12_52_;
  if (((byte)(uVar22 >> 1) & 1) != 1) {
    (&g_player1)[param_1].animation_flag = (DOA_ACTCODE_COMMON)g14;
    uVar24 = (&g_player1)[param_1].action_request;
    pauVar1 = (undefined1 (*) [64])(auVar11._4_4_ + 0x3fU & 0xffffffc0);
    auVar16._8_4_ = 0x20208;
    *fp = auVar16;
    auVar11._8_56_ = auVar16._8_56_;
    auVar11._4_4_ = pauVar1 + 1;
    auVar11._0_4_ = fp;
    ac = uVar22;
    Player_SetActCode(uVar24,param_1);
    fp = pauVar1;
    goto LAB_000204c4;
  }
  ac = ac & 0xfffffff8 |
       (uint)((&g_player1)[param_1].action_request < (&g_player1)[param_1].action_code);
  if ((((byte)ac & 1 | (&g_player1)[param_1].action_code < (&g_player1)[param_1].action_request) !=
       1) && (ac = uVar23 & 0xfffffff8, (&g_player1)[param_1].action_state == 0x0_NEUTRAL)) {
    ac = uVar23 & 0xfffffff8 | (uint)((&g_player1)[param_1].action_cancel == '\0') << 1;
    if (((byte)(ac >> 1) & 1) != 1) {
      uVar24 = (&g_player1)[param_1].action_request;
      uVar22 = uVar23 & 0xfffffff8 | (uint)(uVar24 == '\x04') << 1;
      ac = uVar22 | uVar24 == '\x03';
      if ((((byte)ac & 1 | (byte)(uVar22 >> 1) & 1) == 1) ||
         (ac = uVar23 & 0xfffffff8, (byte)(uVar24 - 0x10) < 2)) goto LAB_00020248;
    }
    goto LAB_000204c4;
  }
LAB_00020248:
  uVar22 = ac;
  if ((&g_player1)[param_1].action_state != 0x0_NEUTRAL) {
    if ((&g_player1)[param_1].pose_state == '\0') {
      (&g_player1)[param_1].action_code = (DOA_ACTCODE_COMMON)g14;
    }
    else {
      (&g_player1)[param_1].action_code = CMD_SIT;
    }
  }
  bVar25 = true;
  switch((&g_player1)[param_1].action_code) {
  case CMD_DASH_FRONT:
    uVar24 = (&g_player1)[param_1].action_request;
    goto joined_r0x00020394;
  case CMD_DASH_BACK:
    uVar24 = (&g_player1)[param_1].action_request;
    goto joined_r0x000203a0;
  case CMD_RUN:
    if ((&g_player1)[param_1].action_request == '\x01') {
      if ((&g_player1)[param_1].hit_body != '\x01') goto LAB_000203cc;
      (&g_player1)[param_1].action_request = '\x06';
    }
    break;
  case CMD_STOP:
    if (((&g_player1)[param_1].action_request == '\x01') ||
       ((&g_player1)[param_1].action_request == '\x03')) goto LAB_000203cc;
    break;
  case CMD_SITDOWN:
    if (((&g_player1)[param_1].action_request == '\n') &&
       (bVar25 = false, (byte)((&g_player1)[auVar7._16_4_].action_state - 0x2_JUMPATTACK) < 2)) {
      bVar19 = (&g_player1)[auVar7._16_4_].attack_height;
joined_r0x00020380:
      bVar25 = false;
      if (bVar19 < 2) {
        bVar25 = false;
        (&g_player1)[param_1].animation_speed = 2.0;
      }
    }
    break;
  case CMD_SITDOWN_FRONT:
    if (((&g_player1)[param_1].action_request == '\v') &&
       (bVar25 = false, (byte)((&g_player1)[auVar7._16_4_].action_state - 0x2_JUMPATTACK) < 2)) {
      bVar19 = (&g_player1)[auVar7._16_4_].attack_height;
      goto joined_r0x00020380;
    }
    break;
  case CMD_SITDOWN_BACK:
    if (((&g_player1)[param_1].action_request == '\f') &&
       (bVar25 = false, (byte)((&g_player1)[auVar7._16_4_].action_state - 0x2_JUMPATTACK) < 2)) {
      bVar19 = (&g_player1)[auVar7._16_4_].attack_height;
      goto joined_r0x00020380;
    }
    break;
  case CMD_STANDUP_FRONT:
    uVar24 = (&g_player1)[param_1].action_request;
joined_r0x00020394:
    if (uVar24 == '\x01') goto LAB_000203cc;
    break;
  case CMD_STANDUP_BACK:
    uVar24 = (&g_player1)[param_1].action_request;
joined_r0x000203a0:
    if (uVar24 == '\x02') goto LAB_000203cc;
    break;
  case CMD_LO_DASH_F1:
    uVar24 = (&g_player1)[param_1].action_request;
    if ((uVar24 != '\v') && (uVar24 != '\x01')) {
joined_r0x000203c8:
      if (uVar24 != '\n') break;
    }
    goto LAB_000203cc;
  case CMD_LO_DASH_B1:
    uVar24 = (&g_player1)[param_1].action_request;
    if ((uVar24 != '\f') && (uVar24 != '\x02')) goto joined_r0x000203c8;
LAB_000203cc:
    bVar25 = false;
  }
  ac = ac & 0xfffffff8 | (uint)!bVar25;
  if (((byte)ac & 1 | true < bVar25) != 1) {
    if (((&g_player1)[param_1].action_request == '\n') &&
       ((&g_player1)[param_1].action_code != CMD_SITDOWN)) {
      bVar19 = (&g_player1)[param_1].action_code - CMD_SIT;
      uVar22 = uVar22 & 0xfffffff8 | (uint)(2 < bVar19) << 2 | (uint)(bVar19 == 2) << 1;
      ac = uVar22 | bVar19 < 2;
      if (((byte)ac & 1 | (byte)(uVar22 >> 1) & 1) != 1) {
        uVar24 = '\a';
LAB_0002049c:
        (&g_player1)[param_1].action_request = uVar24;
      }
    }
    else if (((&g_player1)[param_1].action_request == '\v') &&
            (DVar2 = (&g_player1)[param_1].action_code, DVar2 != CMD_SITDOWN_FRONT)) {
      uVar23 = uVar22 & 0xfffffff8 | (uint)(CMD_SITDOWN_BACK < DVar2) << 2 |
               (uint)(DVar2 == CMD_SITDOWN_BACK) << 1;
      ac = uVar23 | DVar2 < CMD_SITDOWN_BACK;
      if ((((byte)ac & 1 | (byte)(uVar23 >> 1) & 1) == 1) ||
         ((uVar23 = uVar22 & 0xfffffff8 | (uint)(CMD_SIT_BACK < DVar2) << 2 |
                    (uint)(DVar2 == CMD_SIT_BACK) << 1, ac = uVar23 | DVar2 < CMD_SIT_BACK,
          ((byte)ac & 1 | (byte)(uVar23 >> 1) & 1) != 1 &&
          (uVar22 = uVar22 & 0xfffffff8 | (uint)(CMD_LO_DASH_B1 < DVar2) << 2 |
                    (uint)(DVar2 == CMD_LO_DASH_B1) << 1, ac = uVar22 | DVar2 < CMD_LO_DASH_B1,
          ((byte)(uVar22 >> 1) & 1) != 1)))) {
        uVar24 = '\b';
        goto LAB_0002049c;
      }
    }
    else if (((&g_player1)[param_1].action_request == '\f') &&
            (DVar2 = (&g_player1)[param_1].action_code, DVar2 != CMD_SITDOWN_BACK)) {
      uVar23 = uVar22 & 0xfffffff8 | (uint)(CMD_SITDOWN_BACK < DVar2) << 2 |
               (uint)(DVar2 == CMD_SITDOWN_BACK) << 1;
      ac = uVar23 | DVar2 < CMD_SITDOWN_BACK;
      if ((((byte)ac & 1 | (byte)(uVar23 >> 1) & 1) == 1) ||
         ((uVar23 = uVar22 & 0xfffffff8 | (uint)(CMD_SIT_BACK < DVar2) << 2 |
                    (uint)(DVar2 == CMD_SIT_BACK) << 1, ac = uVar23 | DVar2 < CMD_SIT_BACK,
          ((byte)ac & 1 | (byte)(uVar23 >> 1) & 1) != 1 &&
          (uVar22 = uVar22 & 0xfffffff8 | (uint)(CMD_LO_DASH_F1 < DVar2) << 2 |
                    (uint)(DVar2 == CMD_LO_DASH_F1) << 1, ac = uVar22 | DVar2 < CMD_LO_DASH_F1,
          ((byte)(uVar22 >> 1) & 1) != 1)))) {
        uVar24 = '\t';
        goto LAB_0002049c;
      }
    }
    else if (((&g_player1)[param_1].action_request == '\x01') &&
            ((&g_player1)[param_1].action_code != CMD_STANDUP_FRONT)) {
      bVar19 = (&g_player1)[param_1].action_code - CMD_SITDOWN;
      ac = uVar22 & 0xfffffff8 | (uint)(10 < bVar19) << 2 | (uint)(bVar19 == 10) << 1 |
           (uint)(bVar19 < 10);
      if (10 >= bVar19) {
        uVar24 = '\x0e';
        goto LAB_0002049c;
      }
    }
    else {
      bVar19 = (&g_player1)[param_1].action_request;
      ac = uVar22 & 0xfffffff8 | (uint)(2 < bVar19) << 2 | (uint)(bVar19 == 2) << 1 |
           (uint)(bVar19 < 2);
      if (((byte)ac & 1 | 2 < bVar19) != 1) {
        DVar2 = (&g_player1)[param_1].action_code;
        uVar23 = uVar22 & 0xfffffff8 | (uint)(CMD_STANDUP_BACK < DVar2) << 2 |
                 (uint)(DVar2 == CMD_STANDUP_BACK) << 1;
        ac = uVar23 | DVar2 < CMD_STANDUP_BACK;
        if (((byte)(uVar23 >> 1) & 1) != 1) {
          bVar19 = (&g_player1)[param_1].action_code - CMD_SITDOWN;
          ac = uVar22 & 0xfffffff8 | (uint)(10 < bVar19) << 2 | (uint)(bVar19 == 10) << 1 |
               (uint)(bVar19 < 10);
          if (10 >= bVar19) {
            uVar24 = '\x0f';
            goto LAB_0002049c;
          }
        }
      }
    }
    (&g_player1)[param_1].action_code = (&g_player1)[param_1].action_request;
    (&g_player1)[param_1].action_flag = (DOA_ACTCODE_COMMON)g14;
    pauVar1 = (undefined1 (*) [64])(auVar11._4_4_ + 0x3fU & 0xffffffc0);
    auVar17._8_4_ = 0x204b4;
    auVar17._0_8_ = auVar16._0_8_;
    auVar17._12_52_ = auVar16._12_52_;
    *fp = auVar17;
    auVar11._8_56_ = auVar17._8_56_;
    auVar11._4_4_ = pauVar1 + 1;
    auVar11._0_4_ = fp;
    DVar20 = Player_GetCurrentActionRecordState(param_1);
    (&g_player1)[param_1].action_state = DVar20;
    (&g_player1)[param_1].animation_request = '\x01';
    (&g_player1)[param_1].animation_flag = (DOA_ACTCODE_COMMON)g14;
    fp = pauVar1;
  }
LAB_000204c4:
  bVar19 = (&g_player1)[param_1].animation_flag;
  ac = ac & 0xfffffff8 | (uint)(1 < bVar19) << 2 | (uint)(bVar19 == 1) << 1 | (uint)(bVar19 == 0);
  if (((byte)ac & 1 | 1 < bVar19) != 1) {
    (&g_player1)[param_1].animation_flag = (DOA_ACTCODE_COMMON)g14;
    auVar18._12_52_ = auVar11._12_52_;
    auVar18._0_8_ = auVar11._0_8_;
    auVar18._8_4_ = 0x204d8;
    *fp = auVar18;
    auVar11._8_56_ = auVar18._8_56_;
    auVar11._4_4_ = (undefined1 (*) [64])0x0;
    auVar11._0_4_ = fp;
    FUN_00023da0(param_1);
  }
LAB_000204d8:
  (&g_player1)[param_1].action_request = 0xff;
  fp = (undefined1 (*) [64])auVar11._0_4_;
  return;
}

