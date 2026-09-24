
undefined4 FUN_00025500(void)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  undefined4 unaff_pfp;
  undefined4 uVar4;
  
  uVar1 = ac;
  bVar2 = g_attack_metadata_table_by_character[g_player1.character_id]
          [(uint)(byte)g_character_act_record_tables
                       [(&g_player1)[g_player1.action_flag == '\x01'].character_id]
                       [(uint)g_player1.action_code * 8 + 4] * 0x14 + 0xd];
  bVar3 = g_attack_metadata_table_by_character[g_player2.character_id]
          [(uint)(byte)g_character_act_record_tables
                       [(&g_player1)[g_player2.action_flag != '\x01'].character_id]
                       [(uint)g_player2.action_code * 8 + 4] * 0x14 + 0xd];
  uVar4 = 0;
  ac = ac & 0xfffffff8 | (uint)(bVar2 < bVar3) << 2 | (uint)(bVar2 == bVar3) << 1 |
       (uint)(bVar3 < bVar2);
  if (((byte)ac & 1 | bVar2 < bVar3) == 1) {
    uVar1 = uVar1 & 0xfffffff8 | (uint)(bVar2 < bVar3) << 2 | (uint)(bVar2 == bVar3) << 1;
    ac = uVar1 | bVar3 < bVar2;
    if (((byte)(uVar1 >> 1) & 1 | bVar2 < bVar3) != 1) {
      uVar4 = 2;
    }
  }
  else {
    uVar4 = 1;
  }
  fp = unaff_pfp;
  return uVar4;
}

