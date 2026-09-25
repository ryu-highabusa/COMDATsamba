
/* 1-Writes action_code.
   2-Clears action_request to 0xFF.
   3-Selects the appropriate character table.
   4-Reads the new ACT_STATE from record offset +3.
   5-Requests a new animation.
   6-Applies the attack/hold metadata. */

void Player_SetActCode(uint8_t action_code,uint32_t player_index)

{
  byte bVar1;
  uint32_t uVar2;
  
  (&g_player1)[player_index].action_code = action_code;
  (&g_player1)[player_index].action_request = 0xff;
  (&g_player1)[player_index].action_flag = g14;
  bVar1 = (&g_player1)[player_index].action_flag;
  ac = ac & 0xfffffff8 | (uint)(1 < bVar1) << 2 | (uint)(bVar1 == 1) << 1 | (uint)(bVar1 == 0);
  uVar2 = player_index;
  if (((byte)ac & 1 | 1 < bVar1) != 1) {
    uVar2 = player_index ^ 1;
  }
  (&g_player1)[player_index].action_state =
       g_character_act_record_tables[(&g_player1)[uVar2].character_id]
       [(uint)(&g_player1)[player_index].action_code * 8 + 3];
  (&g_player1)[player_index].animation_request = '\x01';
  Player_ApplyActCodeCombatMetadatamaybe(player_index);
  return;
}

