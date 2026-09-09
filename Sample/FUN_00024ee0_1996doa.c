
void Player_SetActCodeU8_maybe(uint8_t param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  
  (&g_player1)[param_2].action_code = param_1;
  (&g_player1)[param_2].action_request = 0xff;
  (&g_player1)[param_2].action_flag = g14;
  bVar1 = (&g_player1)[param_2].action_flag;
  ac = ac & 0xfffffff8 | (uint)(1 < bVar1) << 2 | (uint)(bVar1 == 1) << 1 | (uint)(bVar1 == 0);
  uVar2 = param_2;
  if (((byte)ac & 1 | 1 < bVar1) != 1) {
    uVar2 = param_2 ^ 1;
  }
  (&g_player1)[param_2].action_state =
       (&g_character_act_record_table_candidate)[(&g_player1)[uVar2].character_id]
       [(uint)(&g_player1)[param_2].action_code * 8 + 3];
  (&g_player1)[param_2].animation_request = '\x01';
  FUN_00024d50(param_2);
  return;
}

