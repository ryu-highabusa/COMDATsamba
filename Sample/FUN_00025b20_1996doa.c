
undefined4 FUN_00025b20(uint param_1)

{
  DOA_ACTSTATE DVar1;
  byte bVar2;
  undefined4 unaff_pfp;
  undefined4 uVar3;
  word *pwVar4;
  DOA_ACTCODE_COMMON DVar5;
  uint uVar6;
  
  uVar3 = 0;
  uVar6 = param_1;
  if ((&g_player1)[param_1].action_flag == '\x01') {
    uVar6 = param_1 ^ 1;
  }
  if (1 < (byte)((&g_player1)[param_1].action_state - STATE_BLOCKSTUN)) {
    if (((&g_player1)[param_1].action_state != STATE_HITSTUN) &&
       ((&g_player1)[param_1].action_state != STATE_DOWNATTACKSTUN)) {
      bVar2 = g_move_def_table_by_character[(&g_player1)[uVar6].character_id]
              [(uint)(&g_player1)[param_1].action_code * 8 + 2];
      goto LAB_00025c50;
    }
  }
  DVar5 = (&g_player1)[param_1].action_code;
  if ((byte)(DVar5 - CMD_SIT_REAR_DOWN_H) < 0x88) {
    pwVar4 = &WORD_0009bdb0 + (uint)(byte)(DVar5 - CMD_SIT_REAR_DOWN_H) * 8;
  }
  else {
    if ((CMD_SIDE_DOWN_F_LK|0x37) < DVar5) {
      DVar5 = DVar5 + CMD_NML_DOWN_F_LK;
    }
    pwVar4 = (word *)(PTR_ARRAY_00099450[(&g_player1)[uVar6].character_id] + (uint)DVar5 * 0x10);
  }
  bVar2 = (byte)pwVar4[1];
LAB_00025c50:
  DVar1 = DOA_ACTION_TRANSITION_ARRAY_000956f0[bVar2].next_state;
  uVar6 = ac & 0xfffffff8 | (uint)(DVar1 != STATE_NEUTRAL) << 2 |
          (uint)(DVar1 == STATE_NEUTRAL) << 1;
  if (DVar1 == STATE_NEUTRAL) {
    bVar2 = DOA_ACTION_TRANSITION_ARRAY_000956f0[bVar2].next_action_code;
    uVar6 = ac & 0xfffffff8 | (uint)(bVar2 != 0) << 2 | (uint)(bVar2 == 0) << 1;
    if ((((byte)(uVar6 >> 1) & 1) == 1) ||
       (ac = ac & 0xfffffff8 | (uint)(10 < bVar2) << 2 | (uint)(bVar2 == 10) << 1 |
             (uint)(bVar2 < 10), uVar6 = ac, ((byte)ac & 1 | 10 < bVar2) != 1)) {
      ac = uVar6;
      uVar3 = 1;
      uVar6 = ac;
    }
  }
  ac = uVar6;
  fp = unaff_pfp;
  return uVar3;
}

