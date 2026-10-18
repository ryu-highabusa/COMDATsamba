
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_000212d0(uint param_1)

{
  uint uVar1;
  uint8_t action_code;
  DOA_ACTCODE_COMMON DVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 unaff_pfp;
  undefined1 in_register_00000008 [56];
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  bool bVar10;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  byte bVar12;
  undefined1 auStackX_0 [1000000];
  int iVar11;
  
  uVar3 = CONCAT44(auStackX_0,unaff_pfp);
  auVar5._8_56_ = in_register_00000008;
  auVar5._0_8_ = uVar3;
  auVar6._20_44_ = in_register_00000008._12_44_;
  auVar6._0_16_ = auVar5._0_16_;
  auVar6._16_4_ = &g_player1 + param_1;
  uVar1 = ac & 0xfffffff8 | (uint)((&g_player1)[param_1].action_request != 0xff) << 2 |
          (uint)((&g_player1)[param_1].action_request == 0xff) << 1;
  auVar7._12_52_ = auVar6._12_52_;
  if (((byte)(uVar1 >> 1) & 1) != 1) {
    (&g_player1)[param_1].animation_flag = g14;
    action_code = (&g_player1)[param_1].action_request;
    auVar7._8_4_ = 0x21304;
    auVar7._0_8_ = uVar3;
    *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar7;
    ac = uVar1;
    Player_SetActCode(action_code,param_1);
    uVar4 = ac;
    DVar2 = (&g_player1)[param_1].action_code;
    uVar1 = ac & 0xfffffff8 | (uint)(1 < (byte)(DVar2 - CMD_SIDE_UP_F)) << 2 |
            (uint)((DOA_ACTCODE_COMMON)(DVar2 - CMD_SIDE_UP_F) == 1) << 1;
    ac = uVar1 | DVar2 == CMD_SIDE_UP_F;
    if ((((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) != 1) &&
       (bVar12 = DVar2 - CMD_SIT_SIDE_UP_F,
       ac = uVar4 & 0xfffffff8 | (uint)(1 < bVar12) << 2 | (uint)(bVar12 == 1) << 1 |
            (uint)(DVar2 == CMD_SIT_SIDE_UP_F), 1 < bVar12)) {
      DVar2 = (&g_player1)[param_1].action_code;
      uVar1 = uVar4 & 0xfffffff8 | (uint)(CMD_SIDE_UP_H < DVar2) << 2 |
              (uint)(DVar2 == CMD_SIDE_UP_H) << 1;
      ac = uVar1 | DVar2 < CMD_SIDE_UP_H;
      if ((((byte)(uVar1 >> 1) & 1) == 1) ||
         (((uVar1 = uVar4 & 0xfffffff8 | (uint)(DVar2 < CMD_SIDE_DOWN_F) << 2 |
                    (uint)(DVar2 == CMD_SIDE_DOWN_F) << 1, ac = uVar1 | CMD_SIDE_DOWN_F < DVar2,
           ((byte)(uVar1 >> 1) & 1) == 1 ||
           (uVar1 = uVar4 & 0xfffffff8 | (uint)(DVar2 < CMD_SIT_SIDE_UP_H) << 2 |
                    (uint)(DVar2 == CMD_SIT_SIDE_UP_H) << 1, ac = uVar1 | CMD_SIT_SIDE_UP_H < DVar2,
           ((byte)(uVar1 >> 1) & 1) == 1)) ||
          (ac = uVar4 & 0xfffffff8 | (uint)(DVar2 < CMD_SIT_SIDE_DOWN_F) << 2 |
                (uint)(DVar2 == CMD_SIT_SIDE_DOWN_F) << 1 | (uint)(CMD_SIT_SIDE_DOWN_F < DVar2),
          ((byte)ac & 1 | DVar2 < CMD_SIT_SIDE_DOWN_F) != 1)))) {
        (&g_player1)[param_1].animation_flip = (&g_player1)[param_1].side_spin ^ 1;
      }
      return;
    }
    (&g_player1)[param_1].animation_flip = (&g_player1)[param_1].side_spin;
    return;
  }
  DVar2 = (&g_player1)[param_1].action_code;
  ac = ac & 0xfffffff8 | (uint)(DVar2 < 0x33) << 2 | (uint)(DVar2 == 0x33) << 1 |
       (uint)(0x33 < DVar2);
  if (((byte)ac & 1 | DVar2 < 0x33) == 1) {
    (&g_player1)[param_1].down_state = g14;
    auVar9._8_4_ = 0x21390;
    auVar9._0_8_ = uVar3;
    auVar9._12_52_ = auVar7._12_52_;
    *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar9;
    bVar10 = FUN_00025790(param_1);
    iVar11 = CONCAT31(extraout_var_00,bVar10);
    ac = ac & 0xfffffff8 | (uint)(1 < iVar11) << 2 | (uint)(iVar11 == 1) << 1 | (uint)(iVar11 < 1);
    bVar12 = (byte)ac & 1 | 1 < iVar11;
  }
  else {
    (&g_player1)[param_1].down_state = '\x01';
    auVar8._8_4_ = 0x2137c;
    auVar8._0_8_ = uVar3;
    auVar8._12_52_ = auVar7._12_52_;
    *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar8;
    bVar10 = FUN_00025790(param_1);
    iVar11 = CONCAT31(extraout_var,bVar10);
    uVar1 = ac & 0xfffffff8 | (uint)(1 < iVar11) << 2 | (uint)(iVar11 == 1) << 1;
    ac = uVar1 | iVar11 < 1;
    bVar12 = (byte)(uVar1 >> 1) & 1;
  }
  if (bVar12 != 1) {
    (&g_player1)[param_1].down_direction = g14;
    return;
  }
  (&g_player1)[param_1].down_direction = '\x01';
  return;
}

