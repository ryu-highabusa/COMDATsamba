
void FUN_00024bb0(uint param_1)

{
  byte bVar1;
  undefined4 unaff_pfp;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_1 ^ 1;
  if ((&g_player1)[param_1].action_state == STATE_THROW) {
    puVar2 = PTR_ARRAY_0009cec0[(&g_player1)[param_1].character_id];
  }
  else {
    puVar2 = PTR_ARRAY_0009cf00[(&g_player1)[param_1].character_id];
  }
  bVar1 = (&g_player1)[param_1].action_flag;
  ac = ac & 0xfffffff8 | (uint)(1 < bVar1) << 2 | (uint)(bVar1 == 1) << 1 | (uint)(bVar1 == 0);
  uVar4 = param_1;
  if (((byte)ac & 1 | 1 < bVar1) != 1) {
    uVar4 = param_1 ^ 1;
  }
  uVar3 = *(undefined4 *)
           (puVar2 + (uint)(byte)g_character_act_record_tables[(&g_player1)[uVar4].character_id]
                                 [(uint)(&g_player1)[param_1].action_code * 8 + 4] * 0xc);
  DAT_008801e0 = 0x1e1e;
  *(DOA_S32 *)PTR_DAT_000006a4 = (&g_player1)[uVar5].facing_direction;
  *(undefined4 *)PTR_DAT_000006a0 = uVar3;
  DAT_008801d0 = 0x1d1d;
  *(DOA_S32 *)PTR_DAT_000006a4 = (&g_player1)[uVar5].facing_direction;
  *(undefined4 *)PTR_DAT_000006a0 = uVar3;
  (&g_player1)[param_1].x_position = (&g_player1)[uVar5].x_position;
  (&g_player1)[param_1].z_position = (&g_player1)[uVar5].z_position;
  fp = unaff_pfp;
  return;
}

