
undefined1 FUN_000242a0(uint param_1)

{
  byte bVar1;
  undefined4 unaff_pfp;
  uint uVar2;
  
  bVar1 = (&g_player1)[param_1].action_flag;
  ac = ac & 0xfffffff8 | (uint)(1 < bVar1) << 2 | (uint)(bVar1 == 1) << 1 | (uint)(bVar1 == 0);
  uVar2 = param_1;
  if (((byte)ac & 1 | 1 < bVar1) != 1) {
    uVar2 = param_1 ^ 1;
  }
  fp = unaff_pfp;
  return g_character_act_record_tables[(&g_player1)[uVar2].character_id]
         [(uint)(&g_player1)[param_1].action_code * 8 + 3];
}

