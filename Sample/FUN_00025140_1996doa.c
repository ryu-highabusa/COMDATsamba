
undefined1 FUN_00025140(uint param_1)

{
  DOA_ACTSTATE DVar1;
  undefined4 unaff_pfp;
  uint uVar2;
  undefined *puVar3;
  
  uVar2 = param_1 ^ 1;
  DVar1 = (&g_player1)[param_1].action_state;
  ac = ac & 0xfffffff8 | (uint)(STATE_THROWCAUGHT < DVar1) << 2 |
       (uint)(DVar1 == STATE_THROWCAUGHT) << 1 | (uint)(DVar1 < STATE_THROWCAUGHT);
  if (((byte)ac & 1 | STATE_THROWCAUGHT < DVar1) == 1) {
    puVar3 = PTR_ARRAY_0009cf00[(&g_player1)[uVar2].character_id];
  }
  else {
    puVar3 = PTR_ARRAY_0009cec0[(&g_player1)[uVar2].character_id];
  }
  fp = unaff_pfp;
  return puVar3[(uint)(byte)g_character_act_record_tables[(&g_player1)[uVar2].character_id]
                            [(uint)(&g_player1)[param_1].action_code * 8 + -4] * 0xc + 4];
}

