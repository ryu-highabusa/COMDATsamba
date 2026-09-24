
undefined1 FUN_000252e0(uint param_1)

{
  uint uVar1;
  DOA_ACTSTATE DVar2;
  byte bVar3;
  undefined4 unaff_pfp;
  uint uVar4;
  undefined *puVar5;
  
  uVar1 = ac;
  uVar4 = param_1 ^ 1;
  if ((byte)((&g_player1)[param_1].action_state - STATE_CRITICALSTUN) < 2) {
    DVar2 = (&g_player1)[uVar4].action_state;
    uVar1 = ac & 0xfffffff8 | (uint)(STATE_DOWNATTACK < DVar2) << 2 |
            (uint)(DVar2 == STATE_DOWNATTACK) << 1;
    ac = uVar1 | DVar2 < STATE_DOWNATTACK;
    if (((byte)(uVar1 >> 1) & 1) != 1) {
      fp = unaff_pfp;
      return g_attack_metadata_table_by_character[(&g_player1)[uVar4].character_id]
             [(uint)(byte)(&DAT_00557f82)[uVar4] * 0x14 + 0x12];
    }
  }
  else {
    DVar2 = (&g_player1)[param_1].action_state;
    ac = ac & 0xfffffff8 | (uint)(STATE_DOWNATTACKSTUN < DVar2) << 2 |
         (uint)(DVar2 == STATE_DOWNATTACKSTUN) << 1 | (uint)(DVar2 < STATE_DOWNATTACKSTUN);
    if (((byte)ac & 1 | STATE_DOWNATTACKSTUN < DVar2) == 1) {
      if ((&g_player1)[param_1].action_state == STATE_THROWCAUGHT) {
        puVar5 = PTR_ARRAY_0009cec0[(&g_player1)[uVar4].character_id];
      }
      else {
        puVar5 = PTR_ARRAY_0009cf00[(&g_player1)[uVar4].character_id];
      }
      uVar4 = (uint)(byte)g_character_act_record_tables[(&g_player1)[uVar4].character_id]
                          [(uint)(&g_player1)[param_1].action_code * 8 + -4];
      bVar3 = (&DAT_00557f80)[param_1];
      ac = uVar1 & 0xfffffff8 | (uint)(1 < bVar3) << 2 | (uint)(bVar3 == 1) << 1 |
           (uint)(bVar3 == 0);
      if (((byte)ac & 1 | 1 < bVar3) != 1) {
        fp = unaff_pfp;
        return puVar5[uVar4 * 0xc + 6];
      }
      bVar3 = (&DAT_00557f80)[param_1];
      ac = uVar1 & 0xfffffff8 | (uint)(2 < bVar3) << 2 | (uint)(bVar3 == 2) << 1 | (uint)(bVar3 < 2)
      ;
      if (((byte)ac & 1 | 2 < bVar3) != 1) {
        fp = unaff_pfp;
        return puVar5[uVar4 * 0xc + 7];
      }
      fp = unaff_pfp;
      return puVar5[uVar4 * 0xc + 8];
    }
  }
  fp = unaff_pfp;
  return g_character_combat_record_table_candidate[(&g_player1)[uVar4].character_id]
         [(uint)(byte)(&DAT_00557f82)[uVar4] * 0x14 + 2];
}

