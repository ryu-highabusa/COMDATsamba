
void FUN_00024d50(uint param_1)

{
  byte bVar1;
  undefined4 unaff_pfp;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  
  uVar3 = ac;
  if ((&g_player1)[param_1].action_state == '\x05') {
    bVar2 = (&g_player1)[param_1].action_flag;
    ac = ac & 0xfffffff8 | (uint)(1 < bVar2) << 2 | (uint)(bVar2 == 1) << 1 | (uint)(bVar2 == 0);
    uVar3 = param_1;
    if (((byte)ac & 1 | 1 < bVar2) != 1) {
      uVar3 = param_1 ^ 1;
    }
    (&g_player1)[param_1].attack_height =
         (&PTR_DAT_0009c670_ZACK_0009c630)[(&g_player1)[param_1].character_id]
         [(uint)(byte)(&g_character_act_record_table_candidate)[(&g_player1)[uVar3].character_id]
                      [(uint)(&g_player1)[param_1].action_code * 8 + 4] * 0xc + 0xb];
    (&g_player1)[param_1].attack_point = (DOA_U8)g14;
    (&g_player1)[param_1].attack_direction = (&g_player1)[param_1].facing_direction;
    fp = unaff_pfp;
    return;
  }
  bVar2 = (&g_player1)[param_1].action_state - 2;
  ac = ac & 0xfffffff8 | (uint)(1 < bVar2) << 2 | (uint)(bVar2 == 1) << 1 |
       (uint)((&g_player1)[param_1].action_state == '\x02');
  if (1 >= bVar2) {
    puVar5 = (&PTR_DAT_0009d900_ZACK_0009d8c0)[(&g_player1)[param_1].character_id];
    uVar4 = param_1;
    if ((&g_player1)[param_1].action_flag == '\x01') {
      uVar4 = param_1 ^ 1;
    }
    bVar2 = (&g_character_act_record_table_candidate)[(&g_player1)[uVar4].character_id]
            [(uint)(&g_player1)[param_1].action_code * 8 + 4];
    bVar1 = puVar5[(uint)bVar2 * 0x14 + 0xb];
    (&g_player1)[param_1].attack_point = bVar1 / 4;
    (&g_player1)[param_1].attack_height = bVar1 & 3;
    (&g_player1)[param_1].attack_direction = (&g_player1)[param_1].facing_direction;
    (&g_player1)[param_1].hit_grasp = puVar5[(uint)bVar2 * 0x14 + 10];
    (&DAT_00557f84)[param_1] = (DOA_U8)g14;
    bVar2 = (&DAT_00557f7c)[param_1 * 2];
    ac = uVar3 & 0xfffffff8 | (uint)(3 < bVar2) << 2 | (uint)(bVar2 == 3) << 1 | (uint)(bVar2 < 3);
    if (((byte)ac & 1 | 3 < bVar2) != 1) {
      *(undefined4 *)(&DAT_00557f70 + param_1 * 4) = 1;
      fp = unaff_pfp;
      return;
    }
    *(undefined4 *)(&DAT_00557f70 + param_1 * 4) = g14;
  }
  fp = unaff_pfp;
  return;
}

