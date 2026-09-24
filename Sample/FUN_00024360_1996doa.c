
undefined1 FUN_00024360(uint param_1,uint param_2)

{
  byte bVar1;
  undefined4 unaff_pfp;
  
  bVar1 = (&g_player1)[param_2].action_flag;
  ac = ac & 0xfffffff8 | (uint)(1 < bVar1) << 2 | (uint)(bVar1 == 1) << 1 | (uint)(bVar1 == 0);
  if (((byte)ac & 1 | 1 < bVar1) != 1) {
    param_2 = param_2 ^ 1;
  }
  fp = unaff_pfp;
  return g_character_act_record_tables[(&g_player1)[param_2].character_id][(param_1 & 0xff) * 8 + 3]
  ;
}

