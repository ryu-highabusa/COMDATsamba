
void comact_start_common_group(byte param_1)

{
  undefined4 unaff_pfp;
  
  *(undefined1 *)((int)&g_comact_active_by_player + (uint)g_ai_player_loop_index) = 1;
  g_comact_wait_remaining[g_ai_player_loop_index] = g14;
  (&g_comact_cursor_by_player)[g_ai_player_loop_index] =
       (dword)(&g_common_comact_group_table)[param_1];
  (&g_comact_group_number_by_player)[g_ai_player_loop_index] = param_1;
  *(undefined1 *)((int)&g_comact_record_index_by_player + (uint)g_ai_player_loop_index) =
       (undefined1)g14;
  (&DAT_00564650)[g_ai_player_loop_index] = (undefined1)g14;
  fp = unaff_pfp;
  return;
}

