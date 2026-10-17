
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00020750(uint param_1)

{
  DOA_ACTSTATE DVar1;
  uint uVar2;
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined1 in_register_0000000c [52];
  undefined1 auVar3 [64];
  undefined1 auVar5 [64];
  byte bVar6;
  undefined1 auStackX_0 [1000000];
  undefined1 auVar4 [64];
  
  uVar2 = ac;
  auVar3._8_4_ = unaff_retaddr;
  auVar3._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  auVar3._12_52_ = in_register_0000000c;
  auVar4._20_44_ = in_register_0000000c._8_44_;
  auVar4._0_16_ = auVar3._0_16_;
  auVar4._16_4_ = param_1;
  bVar6 = (&g_player1)[param_1].animation_flag;
  ac = ac & 0xfffffff8 | (uint)(1 < bVar6) << 2 | (uint)(bVar6 == 1) << 1 | (uint)(bVar6 == 0);
  if (((byte)ac & 1 | 1 < bVar6) != 1) {
    (&g_player1)[param_1].animation_flag = g14;
    auVar5._12_52_ = auVar4._12_52_;
    auVar5._8_4_ = 0x2077c;
    auVar5._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar5;
    fp = auStackX_0;
    FUN_00023da0(param_1);
    Player_ApplyActionCombatMetadata(param_1);
    return;
  }
  bVar6 = (&g_player1)[param_1].animation_flag;
  ac = uVar2 & 0xfffffff8 | (uint)(2 < bVar6) << 2 | (uint)(bVar6 == 2) << 1 | (uint)(bVar6 < 2);
  if (((byte)ac & 1 | 2 < bVar6) != 1) {
    ac = uVar2 & 0xfffffff8 | (uint)((&g_player1)[param_1].action_request != 0xff) << 2 |
         (uint)((&g_player1)[param_1].action_request == 0xff) << 1;
    if (((byte)(ac >> 1) & 1) != 1) {
      (&g_player1)[param_1].animation_flag = '\x03';
      DVar1 = (&g_player1)[param_1].action_state;
      ac = uVar2 & 0xfffffff8 | (uint)(0x3_ATTACK < DVar1) << 2 | (uint)(DVar1 == 0x3_ATTACK) << 1 |
           (uint)(DVar1 < 0x3_ATTACK);
      if (((byte)ac & 1 | 0x3_ATTACK < DVar1) != 1) {
        bVar6 = (&g_player1)[param_1].action_code + (CMD_SIDE_DOWN_F_LK|CMD_SIT_UP_F);
        ac = uVar2 & 0xfffffff8 | (uint)(5 < bVar6) << 2 | (uint)(bVar6 == 5) << 1 |
             (uint)(bVar6 < 5);
        if (5 >= bVar6) {
          (&g_player1)[param_1].facing_direction =
               (&g_player1)[param_1].facing_direction + 0x8000U & 0xffff;
        }
      }
      Player_SetActCode((&g_player1)[param_1].action_request,param_1);
      return;
    }
  }
  fp = (undefined1 *)unaff_pfp;
  return;
}

