
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

uint FUN_00022b70(uint param_1)

{
  undefined1 *puVar1;
  DOA_ACTSTATE DVar2;
  char cVar3;
  DOA_COMMON_ACTCODE DVar4;
  DOA_U8 DVar5;
  undefined4 unaff_pfp;
  undefined1 auVar7 [32];
  int iVar23;
  undefined4 unaff_retaddr;
  undefined1 in_register_0000000c [52];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar16 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  bool bVar24;
  byte bVar25;
  undefined3 extraout_var;
  uint uVar26;
  uint uVar27;
  byte bVar28;
  int iVar29;
  uint uVar30;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [999936];
  undefined1 auVar15 [64];
  undefined1 auVar17 [64];
  undefined1 auVar22 [64];
  undefined1 auVar6 [28];
  
  uVar26 = ac;
  auVar8._8_4_ = unaff_retaddr;
  auVar8._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  auVar8._12_52_ = in_register_0000000c;
  auVar9._0_24_ = auVar8._0_24_;
  auVar9._24_4_ = param_1;
  auVar9._32_32_ = in_register_0000000c._20_32_;
  auVar9._28_4_ = 0xff;
  auVar10._24_40_ = auVar9._24_40_;
  auVar10._0_20_ = auVar8._0_20_;
  auVar10._20_4_ = param_1 ^ 1;
  auVar11._36_28_ = in_register_0000000c._24_28_;
  auVar11._0_32_ = auVar10._0_32_;
  auVar11._32_4_ = &g_player1 + param_1;
  auVar12._20_44_ = auVar11._20_44_;
  auVar12._0_16_ = auVar8._0_16_;
  auVar12._16_4_ = &g_player1 + auVar10._20_4_;
  auVar13._40_24_ = in_register_0000000c._28_24_;
  auVar13._0_36_ = auVar12._0_36_;
  auVar13._36_4_ = g_attack_metadata_table_by_character[(&g_player1)[auVar10._20_4_].character_id];
  iVar29 = g_player1.body_direction;
  if (param_1 != 0) {
    iVar29 = (&g_player1)[param_1].body_direction + -0x8000;
  }
  uVar27 = ac & 0xfffffff8;
  auVar14 = auVar13;
  if (0x2aaa < ((iVar29 - DAT_005555a8) + 0x1555U & 0xffff)) goto LAB_00022cec;
  bVar28 = (&g_player1)[auVar10._20_4_].action_state - STATE_JUMPATTACK;
  ac = ac & 0xfffffff8 | (uint)(1 < bVar28) << 2 | (uint)(bVar28 == 1) << 1 |
       (uint)((&g_player1)[auVar10._20_4_].action_state == STATE_JUMPATTACK);
  if (1 < bVar28) {
LAB_00022c80:
    auVar15._12_52_ = auVar13._12_52_;
    auVar15._8_4_ = 0x22c88;
    auVar15._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar15;
    auVar14._8_56_ = auVar15._8_56_;
    auVar14._4_4_ = auStack_40;
    auVar14._0_4_ = fp;
    bVar24 = FUN_00025790(auVar10._20_4_);
    uVar30 = 1;
    if (CONCAT31(extraout_var,bVar24) == 1) {
      uVar30 = 2;
    }
    DVar2 = (&g_player1)[auVar10._20_4_].action_state;
    fp = (undefined1 *)register0x00000004;
    uVar26 = ac & 0xfffffff8;
    if ((((DVar2 != STATE_NEUTRAL) &&
         (uVar26 = ac & 0xfffffff8,
         (&g_player1)[auVar10._20_4_].action_state != STATE_JUMPATTACK &&
         (&g_player1)[auVar10._20_4_].action_state != STATE_ATTACK)) &&
        (uVar26 = ac & 0xfffffff8, DVar2 != STATE_HITSTUN)) &&
       ((uVar26 = ac & 0xfffffff8, DVar2 != STATE_HOLD &&
        (uVar26 = ac & 0xfffffff8, DVar2 != STATE_BLOCKSTUN)))) {
      uVar27 = ac & 0xfffffff8;
      if (DVar2 == STATE_SPECIALMOVE) {
        DVar4 = (&g_player1)[auVar10._20_4_].action_code;
        uVar27 = ac & 0xfffffff8;
        if (((DVar4 != CMD_TURN && DVar4 != CMD_SIT_TURN) &&
            (uVar27 = ac & 0xfffffff8, 0x17 < (byte)(DVar4 - CMD_NORM_UP_H))) &&
           (uVar27 = ac & 0xfffffff8, uVar26 = ac & 0xfffffff8, 0xb < (byte)(DVar4 - 0x34)))
        goto LAB_00022cf0;
      }
LAB_00022cec:
      ac = uVar27;
      uVar30 = 0;
      uVar26 = ac;
    }
  }
  else {
    bVar28 = (&g_player1)[auVar10._20_4_].grasp_state;
    ac = uVar26 & 0xfffffff8 | (uint)(1 < bVar28) << 2 | (uint)(bVar28 == 1) << 1 |
         (uint)(bVar28 == 0);
    if (((byte)ac & 1 | 1 < bVar28) == 1) goto LAB_00022c80;
    iVar29 = g_player1.attack_direction;
    if (auVar10._20_4_ != 0) {
      iVar29 = (&g_player1)[auVar10._20_4_].attack_direction + -0x8000;
    }
    uVar26 = uVar26 & 0xfffffff8;
    uVar30 = 1;
    if (0x8000 < ((iVar29 - DAT_005555a8) + 0x4000U & 0xffff)) {
      uVar30 = 2;
    }
  }
LAB_00022cf0:
  ac = uVar26;
  uVar26 = ac;
  auVar7 = auVar14._0_32_;
  iVar23 = auVar14._4_4_;
  auVar16._0_16_ = auVar14._0_16_;
  auVar16._20_44_ = auVar14._20_44_;
  if (uVar30 == 1) {
    auVar17._0_8_ = auVar14._0_8_;
    auVar17._12_52_ = auVar14._12_52_;
    if ((&g_player1)[param_1].pose_state == '\x01') {
      if ((byte)((&g_player1)[auVar10._20_4_].action_state - STATE_JUMPATTACK) < 2) {
        bVar28 = (&g_player1)[auVar10._20_4_].grasp_state;
        ac = ac | (uint)(1 < bVar28) << 2 | (uint)(bVar28 == 1) << 1 | (uint)(bVar28 == 0);
        if (((byte)ac & 1 | 1 < bVar28) != 1) {
          auVar17._8_4_ = 0x22d20;
          *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar17;
          auVar16._8_56_ = auVar17._8_56_;
          auVar16._4_4_ = (undefined1 *)(iVar23 + 0x3fU & 0xffffffc0) + 0x40;
          auVar16._0_4_ = fp;
          uVar26 = FUN_000241e0(auVar10._20_4_);
          auVar7 = auVar16._0_32_;
          uVar26 = (uint)(byte)auVar13._36_4_[(uVar26 & 0xff) * 0x14 + 10];
          ac = ac & 0xfffffff8 | (uint)(uVar26 < 0xfd) << 2 | (uint)(uVar26 == 0xfd) << 1 |
               (uint)(0xfd < uVar26);
          fp = (undefined1 *)(iVar23 + 0x3fU & 0xffffffc0);
          uVar27 = ac;
          if (((byte)ac & 1) == 1) goto LAB_00022f60;
          goto LAB_00022f54;
        }
      }
      uVar26 = ac;
      bVar28 = (&g_player1)[auVar10._20_4_].pose_state;
      ac = ac & 0xfffffff8 | (uint)(1 < bVar28) << 2 | (uint)(bVar28 == 1) << 1 |
           (uint)(bVar28 == 0);
      uVar27 = ac;
      if (((byte)ac & 1 | 1 < bVar28) == 1) goto LAB_00022f60;
      bVar28 = (&g_player1)[auVar10._20_4_].mount_state;
      ac = uVar26 & 0xfffffff8 | (uint)(bVar28 == 0) << 1;
      if ((((byte)(ac >> 1) & 1) != 1) &&
         (ac = uVar26 & 0xfffffff8 | (uint)(2 < bVar28) << 2 | (uint)(bVar28 == 2) << 1 |
               (uint)(bVar28 < 2), uVar27 = ac, ((byte)ac & 1 | 2 < bVar28) == 1))
      goto LAB_00022f60;
      uVar27 = (uint)(&g_player1)[auVar10._20_4_].action_request;
      bVar28 = g_character_act_record_tables[(&g_player1)[auVar10._20_4_].character_id]
               [uVar27 * 8 + 2];
      auVar16[0x10] = bVar28;
      auVar16._17_3_ = 0;
      uVar26 = ac & 0xfffffff8 | (uint)(uVar27 < 0xff) << 2 | (uint)(uVar27 == 0xff) << 1;
      ac = uVar26 | 0xff < uVar27;
      if (((byte)(uVar26 >> 1) & 1) != 1) {
        puVar1 = (undefined1 *)(iVar23 + 0x3fU & 0xffffffc0);
        auVar18._12_52_ = auVar16._12_52_;
        auVar18._8_4_ = 0x22d7c;
        auVar18._0_8_ = auVar17._0_8_;
        *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar18;
        auVar16._8_56_ = auVar18._8_56_;
        auVar16._4_4_ = puVar1 + 0x40;
        auVar16._0_4_ = fp;
        bVar25 = FUN_00024360(uVar27,auVar10._20_4_);
        uVar30 = ac;
        auVar7 = auVar16._0_32_;
        uVar26 = ac & 0xfffffff8 | (uint)(4 < bVar25) << 2 | (uint)(bVar25 == 4) << 1;
        ac = uVar26 | bVar25 < 4;
        uVar27 = ac;
        if (((byte)(uVar26 >> 1) & 1) == 1) goto LAB_00022f60;
        iVar29 = (uint)bVar28 * 2;
        cVar3 = (&DAT_000956f0)[iVar29];
        ac = uVar30 & 0xfffffff8 | (uint)(cVar3 != '\0') << 2 | (uint)(cVar3 == '\0') << 1;
        fp = puVar1;
        if ((cVar3 == '\0') &&
           (ac = uVar30 & 0xfffffff8 | (uint)((&DAT_000956f1)[iVar29] != '\0') << 2 |
                 (uint)((&DAT_000956f1)[iVar29] == '\0') << 1, uVar27 = ac,
           ((byte)(ac >> 1) & 1) == 1)) goto LAB_00022f60;
      }
      uVar26 = 2;
      goto LAB_00022f54;
    }
    if (1 < (byte)((&g_player1)[auVar10._20_4_].action_state - STATE_JUMPATTACK)) {
LAB_00022e18:
      DVar5 = (&g_player1)[auVar10._20_4_].pose_state;
      uVar27 = ac & 0xfffffff8 | (uint)(DVar5 != '\0') << 2 | (uint)(DVar5 == '\0') << 1;
      if (DVar5 != '\0') goto LAB_00022f60;
      bVar28 = (&g_player1)[auVar10._20_4_].mount_state;
      uVar26 = ac & 0xfffffff8 | (uint)(bVar28 == 0) << 1;
      if ((((byte)(uVar26 >> 1) & 1) != 1) &&
         (ac = ac & 0xfffffff8 | (uint)(2 < bVar28) << 2 | (uint)(bVar28 == 2) << 1 |
               (uint)(bVar28 < 2), uVar27 = ac, uVar26 = ac, ((byte)ac & 1 | 2 < bVar28) == 1))
      goto LAB_00022f60;
      ac = uVar26;
      uVar27 = (uint)(&g_player1)[auVar10._20_4_].action_request;
      bVar28 = g_character_act_record_tables[(&g_player1)[auVar10._20_4_].character_id]
               [uVar27 * 8 + 2];
      auVar16[0x10] = bVar28;
      auVar16._17_3_ = 0;
      uVar26 = ac & 0xfffffff8 | (uint)(uVar27 < 0xff) << 2 | (uint)(uVar27 == 0xff) << 1;
      ac = uVar26 | 0xff < uVar27;
      if (((byte)(uVar26 >> 1) & 1) != 1) {
        puVar1 = (undefined1 *)(iVar23 + 0x3fU & 0xffffffc0);
        auVar20._12_52_ = auVar16._12_52_;
        auVar20._8_4_ = 0x22e54;
        auVar20._0_8_ = auVar17._0_8_;
        *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar20;
        auVar16._8_56_ = auVar20._8_56_;
        auVar16._4_4_ = puVar1 + 0x40;
        auVar16._0_4_ = fp;
        bVar25 = FUN_00024360(uVar27,auVar10._20_4_);
        uVar30 = ac;
        auVar7 = auVar16._0_32_;
        uVar26 = ac & 0xfffffff8 | (uint)(4 < bVar25) << 2 | (uint)(bVar25 == 4) << 1;
        ac = uVar26 | bVar25 < 4;
        uVar27 = ac;
        if (((byte)(uVar26 >> 1) & 1) == 1) goto LAB_00022f60;
        iVar29 = (uint)bVar28 * 2;
        cVar3 = (&DAT_000956f0)[iVar29];
        ac = uVar30 & 0xfffffff8 | (uint)(cVar3 != '\0') << 2 | (uint)(cVar3 == '\0') << 1;
        fp = puVar1;
        if (cVar3 == '\0') {
          bVar28 = (&DAT_000956f1)[iVar29];
          uVar26 = uVar30 & 0xfffffff8 | (uint)(10 < bVar28) << 2 | (uint)(bVar28 == 10) << 1;
          ac = uVar26 | bVar28 < 10;
          uVar27 = ac;
          if (((byte)(uVar26 >> 1) & 1) == 1) goto LAB_00022f60;
        }
      }
      uVar26 = 0;
      goto LAB_00022f54;
    }
    bVar28 = (&g_player1)[auVar10._20_4_].grasp_state;
    ac = ac | (uint)(1 < bVar28) << 2 | (uint)(bVar28 == 1) << 1 | (uint)(bVar28 == 0);
    if (((byte)ac & 1 | 1 < bVar28) == 1) goto LAB_00022e18;
    auVar19._8_4_ = 0x22dd8;
    auVar19._0_8_ = auVar17._0_8_;
    auVar19._12_52_ = auVar17._12_52_;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar19;
    auVar16._8_56_ = auVar19._8_56_;
    auVar16._4_4_ = (undefined1 *)(iVar23 + 0x3fU & 0xffffffc0) + 0x40;
    auVar16._0_4_ = fp;
    uVar26 = FUN_000241e0(auVar10._20_4_);
    uVar30 = ac;
    auVar6 = auVar16._0_28_;
    auVar7 = auVar16._0_32_;
    uVar26 = (uint)(byte)auVar13._36_4_[(uVar26 & 0xff) * 0x14 + 10];
    ac = ac & 0xfffffff8 | (uint)(uVar26 < 0xfd) << 2 | (uint)(uVar26 == 0xfd) << 1 |
         (uint)(0xfd < uVar26);
    fp = (undefined1 *)(iVar23 + 0x3fU & 0xffffffc0);
    if (((byte)ac & 1) != 1) goto LAB_00022f54;
    ac = uVar30 & 0xfffffff8 | (uint)(uVar26 < 0xfe) << 2 | (uint)(uVar26 == 0xfe) << 1 |
         (uint)(0xfe < uVar26);
    uVar27 = ac;
    if (((byte)ac & 1 | uVar26 < 0xfe) == 1) goto LAB_00022f60;
    DVar4 = (&g_player1)[param_1].action_code;
    ac = uVar30 & 0xfffffff8 | (uint)(DVar4 < (0x90|CMD_SITDOWN_BACK)) << 2 |
         (uint)(DVar4 == (0x90|CMD_SITDOWN_BACK)) << 1 | (uint)((0x90|CMD_SITDOWN_BACK) < DVar4);
    uVar27 = ac;
    if (((byte)ac & 1) == 1) goto LAB_00022f60;
  }
  else {
    ac = ac | (uint)(2 < uVar30) << 2 | (uint)(uVar30 == 2) << 1 | (uint)(uVar30 < 2);
    uVar27 = ac;
    if (((byte)ac & 1 | 2 < uVar30) == 1) goto LAB_00022f60;
    if ((&g_player1)[param_1].attack_height == '\x03') {
      bVar28 = (&g_player1)[auVar10._20_4_].pose_state;
      ac = uVar26 | (uint)(1 < bVar28) << 2 | (uint)(bVar28 == 1) << 1 | (uint)(bVar28 == 0);
      uVar27 = ac;
      if (((byte)ac & 1 | 1 < bVar28) == 1) goto LAB_00022f60;
      bVar28 = (&g_player1)[auVar10._20_4_].mount_state;
      ac = uVar26 | (uint)(bVar28 == 0) << 1;
      if ((((byte)(ac >> 1) & 1) != 1) &&
         (ac = uVar26 | (uint)(2 < bVar28) << 2 | (uint)(bVar28 == 2) << 1 | (uint)(bVar28 < 2),
         uVar27 = ac, ((byte)ac & 1 | 2 < bVar28) == 1)) goto LAB_00022f60;
      uVar27 = ac;
      uVar30 = (uint)(&g_player1)[auVar10._20_4_].action_request;
      auVar16[0x10] =
           g_character_act_record_tables[(&g_player1)[auVar10._20_4_].character_id][uVar30 * 8 + 2];
      auVar16._17_3_ = 0;
      auVar7 = auVar16._0_32_;
      uVar26 = ac & 0xfffffff8 | (uint)(uVar30 < 0xff) << 2 | (uint)(uVar30 == 0xff) << 1;
      ac = uVar26 | 0xff < uVar30;
      if (((byte)(uVar26 >> 1) & 1) != 1) {
        iVar29 = (uint)(byte)g_character_act_record_tables
                             [(&g_player1)[auVar10._20_4_].character_id][uVar30 * 8 + 2] * 2;
        cVar3 = (&DAT_000956f0)[iVar29];
        ac = uVar27 & 0xfffffff8 | (uint)(cVar3 != '\0') << 2 | (uint)(cVar3 == '\0') << 1;
        if ((cVar3 == '\0') &&
           (ac = uVar27 & 0xfffffff8 | (uint)((&DAT_000956f1)[iVar29] != '\0') << 2 |
                 (uint)((&DAT_000956f1)[iVar29] == '\0') << 1, uVar27 = ac,
           ((byte)(ac >> 1) & 1) == 1)) goto LAB_00022f60;
      }
      uVar26 = 3;
    }
    else {
      DVar5 = (&g_player1)[auVar10._20_4_].pose_state;
      uVar27 = uVar26 | (uint)(DVar5 != '\0') << 2 | (uint)(DVar5 == '\0') << 1;
      if (DVar5 != '\0') goto LAB_00022f60;
      bVar28 = (&g_player1)[auVar10._20_4_].mount_state;
      ac = uVar26 | (uint)(bVar28 == 0) << 1;
      if ((((byte)(ac >> 1) & 1) != 1) &&
         (ac = uVar26 | (uint)(2 < bVar28) << 2 | (uint)(bVar28 == 2) << 1 | (uint)(bVar28 < 2),
         uVar27 = ac, ((byte)ac & 1 | 2 < bVar28) == 1)) goto LAB_00022f60;
      uVar27 = ac;
      uVar30 = (uint)(&g_player1)[auVar10._20_4_].action_request;
      auVar16[0x10] =
           g_character_act_record_tables[(&g_player1)[auVar10._20_4_].character_id][uVar30 * 8 + 2];
      auVar16._17_3_ = 0;
      auVar7 = auVar16._0_32_;
      uVar26 = ac & 0xfffffff8 | (uint)(uVar30 < 0xff) << 2 | (uint)(uVar30 == 0xff) << 1;
      ac = uVar26 | 0xff < uVar30;
      if (((byte)(uVar26 >> 1) & 1) != 1) {
        iVar29 = (uint)(byte)g_character_act_record_tables
                             [(&g_player1)[auVar10._20_4_].character_id][uVar30 * 8 + 2] * 2;
        cVar3 = (&DAT_000956f0)[iVar29];
        ac = uVar27 & 0xfffffff8 | (uint)(cVar3 != '\0') << 2 | (uint)(cVar3 == '\0') << 1;
        if (cVar3 == '\0') {
          bVar28 = (&DAT_000956f1)[iVar29];
          uVar26 = uVar27 & 0xfffffff8 | (uint)(10 < bVar28) << 2 | (uint)(bVar28 == 10) << 1;
          ac = uVar26 | bVar28 < 10;
          uVar27 = ac;
          if (((byte)(uVar26 >> 1) & 1) == 1) goto LAB_00022f60;
        }
      }
      uVar26 = 1;
    }
LAB_00022f54:
    auVar22._12_52_ = auVar16._12_52_;
    auVar22._0_8_ = auVar16._0_8_;
    auVar22._8_4_ = 0x22f5c;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar22;
    auVar21._8_56_ = auVar22._8_56_;
    auVar21._4_4_ = (auVar16._4_4_ + 0x3fU & 0xffffffc0) + 0x40;
    auVar21._0_4_ = fp;
    uVar26 = FUN_00022f70(uVar26,param_1);
    auVar6 = auVar21._0_28_;
  }
  auVar7._28_4_ = uVar26;
  auVar7._0_28_ = auVar6;
  uVar27 = ac;
LAB_00022f60:
  ac = uVar27;
  fp = (undefined1 *)auVar7._0_4_;
  return auVar7._28_4_ & 0xff;
}

