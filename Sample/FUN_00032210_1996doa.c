
void FUN_00032210(uint param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  undefined4 unaff_pfp;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar3 = ac;
  bVar2 = (&g_player1)[param_1].beat_state;
  uVar1 = ac & 0xfffffff8 | (uint)(1 < bVar2) << 2 | (uint)(bVar2 == 1) << 1;
  ac = uVar1 | bVar2 == 0;
  if (((byte)(uVar1 >> 1) & 1) != 1) {
    ac = uVar3 & 0xfffffff8 | (uint)(5 < bVar2) << 2 | (uint)(bVar2 == 5) << 1 | (uint)(bVar2 < 5);
  }
  uVar5 = (undefined4)
          ((unkuint10)
           ((float10)(int)(&FLOAT_000b6060)[(&g_player1)[param_1].character_id] *
           (float10)(int)(&FLOAT_000b5ff0)
                         [(byte)g_character_act_record_tables
                                [(&g_player1)[param_1 ^ 1].character_id]
                                [(uint)(&g_player1)[param_1 ^ 1].action_code * 8 + 7]]) >> 0x20);
  uVar4 = SUB104((float10)(int)(&FLOAT_000b6060)[(&g_player1)[param_1].character_id] *
                 (float10)(int)(&FLOAT_000b5ff0)
                               [(byte)g_character_act_record_tables
                                      [(&g_player1)[param_1 ^ 1].character_id]
                                      [(uint)(&g_player1)[param_1 ^ 1].action_code * 8 + 7]],0);
  DAT_008801e0 = 0x1e1e;
  *(undefined4 *)PTR_DAT_000006a4 = uVar5;
  *(undefined4 *)PTR_DAT_000006a0 = uVar4;
  (&DAT_005647f8)[param_1] = *(undefined4 *)PTR_DAT_000006a0;
  DAT_008801d0 = 0x1d1d;
  *(undefined4 *)PTR_DAT_000006a4 = uVar5;
  *(undefined4 *)PTR_DAT_000006a0 = uVar4;
  (&DAT_00564800)[param_1] = *(undefined4 *)PTR_DAT_000006a0;
  fp = unaff_pfp;
  return;
}

