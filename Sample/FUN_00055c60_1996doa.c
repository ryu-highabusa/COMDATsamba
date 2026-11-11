
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_00055c60(void)

{
  undefined4 unaff_pfp;
  
  Camera_Angle = camera_battle;
  g_player1.animation_flag = '\x01';
  g_player2.animation_flag = '\x01';
  g_player2.x_position = 2.0;
  g_player1.animation_flip = (DOA1_CHARACTER_ID)g14;
  g_player1.jump_state = (DOA1_CHARACTER_ID)g14;
  g_player2.jump_state = (DOA1_CHARACTER_ID)g14;
  g_player1.action_code = (DOA1_CHARACTER_ID)g14;
  g_player2.action_code = (DOA1_CHARACTER_ID)g14;
  g_player1.character_id = (DOA1_CHARACTER_ID)g14;
  g_player2.character_id = (DOA1_CHARACTER_ID)g14;
  g_player1.animation_id = (uint16_t)g14;
  g_player2.animation_id = (uint16_t)g14;
  g_player2.animation_flip = g_player1.animation_flip;
  g_player1.animation_request = g_player1.animation_flip;
  g_player2.animation_request = g_player1.animation_flip;
  g_player1.attack_state = g_player1.animation_flip;
  g_player2.attack_state = g_player1.animation_flip;
  g_player1.hit_body = g_player1.animation_flip;
  g_player2.hit_body = g_player1.animation_flip;
  g_player1.hit_attack = g_player1.animation_flip;
  g_player2.hit_attack = g_player1.animation_flip;
  g_player1.x_position = -2.0;
  g_player1.y_position = 1.0;
  g_player1.z_position = 4.0;
  g_player1.facing_direction = g14;
  g_player2.facing_direction = g14;
  g_player2.y_position = 1.0;
  g_player2.z_position = 4.0;
  fp = unaff_pfp;
  return 0;
}

