
void FUN_00018a20(void)

{
  uint uVar1;
  undefined4 unaff_pfp;
  
  uVar1 = ac;
  if (((g_player1.character_id == NAME_RAIDOU) && (DAT_005555dd == '\0')) &&
     ((g_player1.controller_type == COM || (g_player2._0_2_ != 0xb00)))) {
    g_player1.x_position = -0.74;
  }
  else {
    g_player1.x_position = -1.0;
  }
  g_player1.y_position = SUB104((float10)'\x01',0);
  g_player1.z_position = g14;
  g_player1.animation_speed = SUB104((float10)'\x01',0);
  g_player1.facing_direction = (DOA_S32)g14;
  g_player1.attack_direction = (DOA_S32)g14;
  g_player1.body_direction = (DOA_S32)g14;
  g_player1.currentHealth = (ushort)HIT_POINT_CurrentSetting_005555e6;
  g_player2.pendingDamage = g14._0_2_;
  g_player1.pendingDamage = g14._0_2_;
  g_player1.lastHitDamage = g14._0_2_;
  g_player1.damageDisplayAmount = g14._0_2_;
  g_player1.action_flag = g14._0_1_;
  g_player1.action_request = g14._0_1_;
  g_player1.action_state = g14._0_1_;
  g_player1.pose_state = g14._0_1_;
  g_player1.down_state = g14._0_1_;
  g_player1.upside_down_head = g14._0_1_;
  g_player1.down_direction = g14._0_1_;
  g_player1.attack_point = g14._0_1_;
  g_player1.attack_state = g14._0_1_;
  g_player1.animation_flip = g14._0_1_;
  g_player1.animation_flag = g14._0_1_;
  g_player1.hit_attack = g14._0_1_;
  g_player1.hit_body = g14._0_1_;
  g_player1.hit_stage = g14._0_1_;
  g_player1.guard_state = g14._0_1_;
  g_player1.jump_state = g14._0_1_;
  g_player1.jump_height = g14._0_1_;
  g_player1.jump_direction = g14._0_1_;
  g_player1.beat_state = g14._0_1_;
  g_player1.sky_state = g14._0_1_;
  g_player1.down_hit = g14._0_1_;
  g_player1.action_cancel = g14._0_1_;
  g_player1.grasp_state = g14._0_1_;
  g_player1.grounded_targetable = g14._0_1_;
  g_player1.mount_state = g14._0_1_;
  g_player1.ring_out = g14._0_1_;
  g_player1.attack_height = g14._0_1_;
  g_player1.ring_hit = g14._0_1_;
  g_player1.player_display = g14._0_1_;
  g_player1.danger_flag = '\x01';
  g_player1.direction_adjust = g14._0_1_;
  g_player1.damage_number = g14._0_1_;
  g_player1.side_spin = g14._0_1_;
  g_player1.hit_grasp = g14._0_1_;
  g_player1.beat_hit_state = g14._0_1_;
  g_player1.ukemi_flag = g14._0_1_;
  g_player1.danger_set = g14._0_1_;
  g_player1.combo_flag = g14._0_1_;
  g_player1.combo_count = g14._0_1_;
  g_player1.combo_start = g14._0_1_;
  g_player1.cancel_use = g14._0_1_;
  g_player1.unknown_56[0] = g14._0_1_;
  ac = ac & 0xfffffff8 | (uint)(NAME_RAIDOU < g_player2.character_id) << 2 |
       (uint)(g_player2.character_id == NAME_RAIDOU) << 1 |
       (uint)(g_player2.character_id < NAME_RAIDOU);
  if ((((byte)ac & 1 | NAME_RAIDOU < g_player2.character_id) == 1) ||
     (ac = uVar1 & 0xfffffff8 | (uint)(DAT_005555dd != '\0') << 2 |
           (uint)(DAT_005555dd == '\0') << 1, DAT_005555dd != '\0')) {
LAB_00018c64:
    g_player2.x_position = SUB104((float10)'\x01',0);
  }
  else {
    ac = uVar1 & 0xfffffff8 | (uint)(g_player2.controller_type != COM) << 2 |
         (uint)(g_player2.controller_type == COM) << 1;
    if (((byte)(ac >> 1) & 1) != 1) {
      uVar1 = uVar1 & 0xfffffff8 | (uint)((ushort)g_player1._0_2_ < 0xb00) << 2 |
              (uint)(g_player1._0_2_ == 0xb00) << 1;
      ac = uVar1 | 0xb00 < (ushort)g_player1._0_2_;
      if (((byte)(uVar1 >> 1) & 1) == 1) goto LAB_00018c64;
    }
    g_player2.x_position = 0.74;
  }
  g_player2.y_position = SUB104((float10)'\x01',0);
  g_player2.z_position = g14;
  g_player2.animation_speed = SUB104((float10)'\x01',0);
  g_player2.facing_direction = 0x8000;
  g_player2.attack_direction = 0x8000;
  g_player2.body_direction = 0x8000;
  g_player2.currentHealth = (ushort)HIT_POINT_CurrentSetting_005555e6;
  g_player2.lastHitDamage = g_player2.pendingDamage;
  g_player2.damageDisplayAmount = g_player2.pendingDamage;
  g_player2.action_flag = g14._0_1_;
  g_player2.action_request = g14._0_1_;
  g_player2.action_state = g14._0_1_;
  g_player2.pose_state = g14._0_1_;
  g_player2.down_state = g14._0_1_;
  g_player2.upside_down_head = g14._0_1_;
  g_player2.down_direction = g14._0_1_;
  g_player2.attack_point = g14._0_1_;
  g_player2.attack_state = g14._0_1_;
  g_player2.animation_flip = g14._0_1_;
  g_player2.animation_flag = g14._0_1_;
  g_player2.hit_attack = g14._0_1_;
  g_player2.hit_body = g14._0_1_;
  g_player2.hit_stage = g14._0_1_;
  g_player2.guard_state = g14._0_1_;
  g_player2.jump_state = g14._0_1_;
  g_player2.jump_height = g14._0_1_;
  g_player2.jump_direction = g14._0_1_;
  g_player2.beat_state = g14._0_1_;
  g_player2.sky_state = g14._0_1_;
  g_player2.down_hit = g14._0_1_;
  g_player2.action_cancel = g14._0_1_;
  g_player2.grasp_state = g14._0_1_;
  g_player2.grounded_targetable = g14._0_1_;
  g_player2.mount_state = g14._0_1_;
  g_player2.ring_out = g14._0_1_;
  g_player2.attack_height = g14._0_1_;
  g_player2.ring_hit = g14._0_1_;
  g_player2.player_display = g14._0_1_;
  g_player2.danger_flag = '\x01';
  g_player2.direction_adjust = g14._0_1_;
  g_player2.damage_number = g14._0_1_;
  g_player2.side_spin = g14._0_1_;
  g_player2.hit_grasp = g14._0_1_;
  g_player2.beat_hit_state = g14._0_1_;
  g_player2.ukemi_flag = g14._0_1_;
  g_player2.danger_set = g14._0_1_;
  g_player2.combo_flag = g14._0_1_;
  g_player2.combo_count = g14._0_1_;
  g_player2.combo_start = g14._0_1_;
  g_player2.cancel_use = g14._0_1_;
  g_player2.unknown_56[0] = g14._0_1_;
  fp = unaff_pfp;
  return;
}

