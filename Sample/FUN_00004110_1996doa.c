
void FUN_00004110(int param_1)

{
  DOA_MANCOM DVar1;
  undefined4 unaff_pfp;
  
  DVar1 = g14._0_1_;
  (&g_player1)[param_1].controller_type = g14._0_1_;
  (&g_player1)[param_1].character_id = g14._0_1_;
  (&g_player1)[param_1].costume_id = g14._0_1_;
  (&g_player1)[param_1].rounds_won = g14._0_1_;
  (&g_player1)[param_1].x_position = g14;
  (&g_player1)[param_1].y_position = g14;
  (&g_player1)[param_1].z_position = g14;
  (&g_player1)[param_1].animation_speed = SUB104((float10)'\x01',0);
  (&g_player1)[param_1].facing_direction = (DOA_S32)g14;
  (&g_player1)[param_1].attack_direction = (DOA_S32)g14;
  (&g_player1)[param_1].body_direction = (DOA_S32)g14;
  (&g_player1)[param_1].currentHealth = g14._0_2_;
  (&g_player1)[param_1].pendingDamage = g14._0_2_;
  (&g_player1)[param_1].lastHitDamage = g14._0_2_;
  (&g_player1)[param_1].damageDisplayAmount = g14._0_2_;
  (&g_player1)[param_1].animation_id = g14._0_2_;
  (&g_player1)[param_1].action_code = DVar1;
  (&g_player1)[param_1].action_flag = DVar1;
  (&g_player1)[param_1].action_request = DVar1;
  (&g_player1)[param_1].action_state = DVar1;
  (&g_player1)[param_1].pose_state = DVar1;
  (&g_player1)[param_1].down_state = DVar1;
  (&g_player1)[param_1].upside_down_head = DVar1;
  (&g_player1)[param_1].down_direction = DVar1;
  (&g_player1)[param_1].attack_point = DVar1;
  (&g_player1)[param_1].attack_state = DVar1;
  (&g_player1)[param_1].animation_flip = DVar1;
  (&g_player1)[param_1].animation_flag = DVar1;
  (&g_player1)[param_1].animation_request = DVar1;
  (&g_player1)[param_1].hit_attack = DVar1;
  (&g_player1)[param_1].hit_body = DVar1;
  (&g_player1)[param_1].hit_stage = DVar1;
  (&g_player1)[param_1].guard_state = DVar1;
  (&g_player1)[param_1].jump_state = DVar1;
  (&g_player1)[param_1].jump_height = DVar1;
  (&g_player1)[param_1].jump_direction = DVar1;
  (&g_player1)[param_1].beat_state = DVar1;
  (&g_player1)[param_1].sky_state = DVar1;
  (&g_player1)[param_1].down_hit = DVar1;
  (&g_player1)[param_1].action_cancel = DVar1;
  (&g_player1)[param_1].grasp_state = DVar1;
  (&g_player1)[param_1].grounded_targetable = DVar1;
  (&g_player1)[param_1].mount_state = DVar1;
  (&g_player1)[param_1].ring_out = DVar1;
  (&g_player1)[param_1].attack_height = DVar1;
  (&g_player1)[param_1].ring_hit = DVar1;
  (&g_player1)[param_1].player_display = '\x01';
  (&g_player1)[param_1].danger_flag = DVar1;
  (&g_player1)[param_1].direction_adjust = DVar1;
  (&g_player1)[param_1].damage_number = DVar1;
  (&g_player1)[param_1].side_spin = DVar1;
  (&g_player1)[param_1].hit_grasp = DVar1;
  (&g_player1)[param_1].grapple_slip = DVar1;
  (&g_player1)[param_1].beat_hit_state = DVar1;
  (&g_player1)[param_1].ukemi_flag = DVar1;
  (&g_player1)[param_1].danger_set = DVar1;
  (&g_player1)[param_1].combo_flag = DVar1;
  (&g_player1)[param_1].combo_count = DVar1;
  (&g_player1)[param_1].combo_start = DVar1;
  (&g_player1)[param_1].cancel_use = DVar1;
  fp = unaff_pfp;
  return;
}

