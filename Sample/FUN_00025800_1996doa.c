
uint16_t Player_ResolveAnimeIdFromActCode(uint32_t player_index)

{
  uint uVar1;
  DOA_ACTSTATE DVar2;
  undefined4 unaff_pfp;
  word *pwVar3;
  uint uVar4;
  DOA_COMMON_ACTCODE DVar5;
  uint32_t uVar6;
  
  uVar1 = ac;
  uVar6 = player_index;
  if ((&g_player1)[player_index].action_flag == '\x01') {
    uVar6 = player_index ^ 1;
  }
  uVar4 = ac & 0xfffffff8 |
          (uint)((&g_player1)[player_index].action_state == STATE_CRITICALSTUN) << 1;
  ac = uVar4 | (&g_player1)[player_index].action_state == STATE_BLOCKSTUN;
  if (((byte)ac & 1 | (byte)(uVar4 >> 1) & 1) != 1) {
    DVar2 = (&g_player1)[player_index].action_state;
    ac = uVar1 & 0xfffffff8 | (uint)(DVar2 == STATE_HITSTUN) << 1;
    if ((((byte)(ac >> 1) & 1) != 1) &&
       (ac = uVar1 & 0xfffffff8 | (uint)(STATE_DOWNATTACKSTUN < DVar2) << 2 |
             (uint)(DVar2 == STATE_DOWNATTACKSTUN) << 1 | (uint)(DVar2 < STATE_DOWNATTACKSTUN),
       ((byte)ac & 1 | STATE_DOWNATTACKSTUN < DVar2) == 1)) {
      fp = unaff_pfp;
      return *(uint16_t *)
              (g_character_act_record_tables[(&g_player1)[uVar6].character_id] +
              (uint)(&g_player1)[player_index].action_code * 8);
    }
  }
  uVar1 = ac;
  DVar5 = (&g_player1)[player_index].action_code;
  uVar4 = (uint)(byte)(DVar5 - CMD_SIT_REAR_DOWN_H);
  ac = ac & 0xfffffff8 | (uint)(uVar4 < 0x87) << 2 | (uint)(uVar4 == 0x87) << 1 |
       (uint)(0x87 < uVar4);
  if (((byte)ac & 1) == 1) {
    uVar1 = uVar1 & 0xfffffff8 | (uint)(DVar5 < (CMD_SIDE_DOWN_F_LK|0x37)) << 2 |
            (uint)(DVar5 == (CMD_SIDE_DOWN_F_LK|0x37)) << 1;
    ac = uVar1 | (CMD_SIDE_DOWN_F_LK|0x37) < DVar5;
    if (((byte)(uVar1 >> 1) & 1 | DVar5 < (CMD_SIDE_DOWN_F_LK|0x37)) != 1) {
      DVar5 = DVar5 + CMD_NML_DOWN_F_LK;
    }
    pwVar3 = (word *)(PTR_ARRAY_00099450[(&g_player1)[uVar6].character_id] + (uint)DVar5 * 0x10);
  }
  else {
    pwVar3 = &WORD_0009bdb0 + uVar4 * 8;
  }
  fp = unaff_pfp;
  return *pwVar3;
}

