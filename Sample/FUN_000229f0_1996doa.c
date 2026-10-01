
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_000229f0(undefined4 param_1,uint param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  DOA_ACTCODE_COMMON DVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [20];
  undefined1 auVar6 [44];
  uint uVar7;
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined4 unaff_r3;
  undefined4 unaff_r4;
  undefined1 auVar8 [32];
  undefined1 in_register_00000014 [24];
  undefined4 unaff_r11;
  undefined1 in_register_00000030 [16];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  int iVar24;
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar21 [64];
  undefined1 auVar23 [64];
  DOA_ACTSTATE DVar25;
  uint uVar26;
  DOA_U8 DVar27;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [999936];
  undefined1 auVar17 [64];
  undefined1 auVar20 [64];
  undefined1 auVar22 [64];
  undefined1 auVar10 [64];
  undefined1 auVar9 [64];
  
  auVar4._8_4_ = unaff_retaddr;
  auVar4._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  auVar4._12_4_ = unaff_r3;
  auVar5._16_4_ = unaff_r4;
  auVar5._0_16_ = auVar4;
  auVar6._20_24_ = in_register_00000014;
  auVar6._0_20_ = auVar5;
  auVar9._44_4_ = unaff_r11;
  auVar9._0_44_ = auVar6;
  auVar9._48_16_ = in_register_00000030;
  auVar10._32_32_ = auVar9._32_32_;
  auVar8._0_28_ = auVar6._0_28_;
  auVar8._28_4_ = param_2;
  auVar10._0_32_ = auVar8;
  auVar11._44_20_ = auVar9._44_20_;
  auVar11._0_40_ = auVar10._0_40_;
  auVar11._40_4_ = param_3;
  auVar12._40_24_ = auVar11._40_24_;
  auVar12._0_36_ = auVar10._0_36_;
  auVar12._36_4_ = param_1;
  auVar13._36_28_ = auVar12._36_28_;
  auVar13._32_4_ = param_2 ^ 1;
  auVar13._0_32_ = auVar8;
  auVar14._20_4_ = &g_player1 + param_2;
  auVar14._0_20_ = auVar5;
  auVar14._28_36_ = auVar13._28_36_;
  auVar14._24_4_ = &g_player1 + auVar13._32_4_;
  ac = ac & 0xfffffff8 | (uint)(1 < param_3) << 2 | (uint)(param_3 == 1) << 1 | (uint)(param_3 < 1);
  if (((byte)ac & 1 | 1 < param_3) != 1) {
    auVar15._20_44_ = auVar14._20_44_;
    auVar15._16_4_ = g_attack_metadata_table_by_character[(&g_player1)[auVar13._32_4_].character_id]
    ;
    auVar15._0_16_ = auVar4;
    auVar17._12_52_ = auVar15._12_52_;
    auVar17._8_4_ = 0x22a48;
    auVar17._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar17;
    auVar16._8_56_ = auVar17._8_56_;
    auVar16._4_4_ = auStack_40;
    auVar16._0_4_ = fp;
    uVar26 = FUN_000241e0(auVar13._32_4_);
    auVar14._48_16_ = auVar16._48_16_;
    auVar14._0_44_ = auVar16._0_44_;
    auVar14[0x2c] = auVar15._16_4_[(uVar26 & 0xff) * 0x14 + 0x10];
    auVar14._45_3_ = 0;
    fp = (undefined1 *)register0x00000004;
  }
  iVar24 = auVar14._44_4_;
  (&g_player1)[param_2].action_code = (DOA_ACTCODE_COMMON)param_1;
  (&g_player1)[auVar13._32_4_].action_code = (DOA_ACTCODE_COMMON)param_1 + CMD_FRONT;
  if ((&g_player1)[param_2].action_flag == '\0') {
    (&g_player1)[auVar13._32_4_].action_flag = '\x01';
  }
  (&g_player1)[param_2].animation_flag = g14;
  (&g_player1)[auVar13._32_4_].animation_flag = g14;
  (&g_player1)[param_2].action_request = 0xff;
  (&g_player1)[auVar13._32_4_].action_request = 0xff;
  (&g_player1)[param_2].animation_request = '\x01';
  (&g_player1)[auVar13._32_4_].animation_request = '\x01';
  DVar25 = (&g_player1)[param_2].action_state;
  uVar26 = ac & 0xfffffff8 | (uint)(0x5_HOLD < DVar25) << 2;
  ac = uVar26 | (uint)(DVar25 == 0x5_HOLD) << 1 | (uint)(DVar25 < 0x5_HOLD);
  auVar18._20_44_ = auVar14._20_44_;
  auVar18._0_16_ = auVar14._0_16_;
  bVar1 = ((byte)ac & 1 | (byte)(uVar26 >> 2) & 1) == 1;
  auVar18[0x10] = bVar1;
  auVar18._17_3_ = 0;
  DVar3 = (&g_player1)[param_2].action_code;
  uVar26 = auVar14._4_4_ + 0x3f;
  uVar2 = uVar26 & 0xffffffc0;
  auVar20._12_52_ = auVar18._12_52_;
  auVar20._0_8_ = auVar14._0_8_;
  auVar20._8_4_ = 0x22ab8;
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar20;
  auVar19._8_56_ = auVar20._8_56_;
  auVar19._0_8_ = CONCAT44(uVar26,fp) & 0xffffffc0ffffffff;
  DVar25 = Player_GetActionStateForCode((uint)DVar3,param_2);
  (&g_player1)[param_2].action_state = DVar25;
  DVar3 = (&g_player1)[auVar13._32_4_].action_code;
  auVar22._12_52_ = auVar19._12_52_;
  auVar22._0_8_ = auVar19._0_8_;
  auVar22._8_4_ = 0x22ac8;
  *(undefined1 (*) [64])(uVar26 & 0xffffffc0) = auVar22;
  auVar21._8_56_ = auVar22._8_56_;
  auVar21._0_8_ = CONCAT44(uVar2 + 0x80,uVar26) & 0xffffffffffffffc0;
  DVar25 = Player_GetActionStateForCode((uint)DVar3,auVar13._32_4_);
  uVar26 = ac;
  (&g_player1)[auVar13._32_4_].action_state = DVar25;
  (&g_player1)[auVar13._32_4_].y_position = (&g_player1)[param_2].y_position;
  uVar7 = ac & 0xfffffff8 | (uint)bVar1 << 2 | (uint)!bVar1 << 1;
  if (!bVar1) {
    uVar7 = DAT_005555a8;
    if (param_2 != 0) {
      uVar7 = DAT_005555a8 + 0x8000;
    }
    (&g_player1)[param_2].facing_direction = uVar7 & 0xffff;
    ac = ac & 0xfffffff8 | (uint)(0 < param_3) << 2 | (uint)(param_3 == 0) << 1 |
         (uint)(param_3 < 0);
    if (((byte)ac & 1 | 0 < param_3) == 1) {
      DVar27 = (&DAT_00550144)[auVar13._32_4_] != 1;
      ac = uVar26 & 0xfffffff8 | (uint)(1 < iVar24) << 2 | (uint)(iVar24 == 1) << 1 |
           (uint)(iVar24 < 1);
      if (((byte)ac & 1 | 1 < iVar24) != 1) {
        DVar27 = !(bool)DVar27;
      }
      *(DOA_U8 *)(auVar13._32_4_ * 0x58 + 0x54fc34) = DVar27;
    }
    else {
      DVar27 = (&g_player1)[auVar13._32_4_].animation_flip;
    }
    (&g_player1)[param_2].animation_flip = DVar27;
    (&g_player1)[auVar13._32_4_].facing_direction = (&g_player1)[param_2].facing_direction;
    (&g_player1)[param_2].combo_start = '\x01';
    (&g_player1)[param_2].combo_flag = '\x01';
    (&g_player1)[param_2].combo_count = g14;
    auVar23._12_52_ = auVar21._12_52_;
    auVar23._0_8_ = auVar21._0_8_;
    auVar23._8_4_ = 0x22b5c;
    *(undefined1 (*) [64])(uVar2 + 0x40) = auVar23;
    auVar21._8_56_ = auVar23._8_56_;
    auVar21._4_4_ = 0;
    auVar21._0_4_ = uVar2 + 0x40;
    FUN_00024bb0(param_2);
    uVar7 = ac;
  }
  ac = uVar7;
  (&g_player1)[auVar13._32_4_].ukemi_flag = g14;
  DAT_00557f28 = 1;
  fp = (undefined1 *)auVar21._0_4_;
  return;
}

