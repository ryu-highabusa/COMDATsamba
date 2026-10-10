
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00013cc0(void)

{
  undefined4 unaff_pfp;
  
  g_player1.facing_direction = -0x3254;
  g_player1.x_position = -DAT_00557a78;
  g_player2.x_position = DAT_00557a7c;
  g_player2.facing_direction = -0x4dab;
  g_player1.y_position = (&FLOAT_00090b00)[DAT_00557a74 * 0xe + (uint)g_player2.character_id];
  g_player1.z_position = 1.2;
  g_player2.y_position = 2.720083e+23;
  g_player2.z_position = 1.2;
  fp = unaff_pfp;
  return;
}

