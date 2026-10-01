
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00024030(uint param_1)

{
  uint uVar1;
  DOA_ACTCODE_COMMON DVar2;
  uint uVar3;
  undefined4 unaff_pfp;
  undefined1 auVar4 [36];
  undefined1 in_register_00000008 [56];
  undefined1 auVar5 [64];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  int iVar13;
  undefined1 auVar10 [64];
  undefined1 auVar12 [64];
  DOA_ACTSTATE DVar14;
  undefined1 uVar15;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [64];
  undefined1 auStack_80 [999872];
  undefined1 auVar11 [64];
  undefined1 auVar6 [64];
  undefined1 auVar9 [64];
  
  uVar3 = ac;
  auVar5._4_4_ = auStackX_0;
  auVar5._0_4_ = unaff_pfp;
  auVar5._8_56_ = in_register_00000008;
  auVar6._32_32_ = in_register_00000008._24_32_;
  auVar6._0_28_ = auVar5._0_28_;
  auVar6._28_4_ = param_1;
  auVar7._28_36_ = auVar6._28_36_;
  auVar7._0_24_ = auVar5._0_24_;
  auVar7._24_4_ = param_1 ^ 1;
  auVar8._0_16_ = auVar5._0_16_;
  auVar8._16_4_ = &g_player1 + param_1;
  auVar8._24_40_ = auVar7._24_40_;
  auVar8._20_4_ = &g_player1 + auVar7._24_4_;
  if ((&g_player1)[auVar7._24_4_].action_state == 0x2_JUMPATTACK ||
      (&g_player1)[auVar7._24_4_].action_state == 0x3_ATTACK) {
LAB_00024084:
    uVar15 = 2;
  }
  else {
    if ((&g_player1)[auVar7._24_4_].action_state == 0xE_DOWNATTACK) goto LAB_00024084;
    uVar15 = 3;
  }
  (&DAT_00557f20)[auVar7._24_4_] = uVar15;
  (&g_player1)[param_1].action_code = (&g_player1)[param_1].action_request;
  (&g_player1)[auVar7._24_4_].action_code = (&g_player1)[param_1].action_request + CMD_FRONT;
  if ((&g_player1)[param_1].action_flag == '\0') {
    (&g_player1)[auVar7._24_4_].action_flag = '\x01';
  }
  (&g_player1)[param_1].animation_flag = g14;
  (&g_player1)[auVar7._24_4_].animation_flag = g14;
  (&g_player1)[param_1].action_request = 0xff;
  (&g_player1)[auVar7._24_4_].action_request = 0xff;
  (&g_player1)[param_1].animation_request = '\x01';
  (&g_player1)[auVar7._24_4_].animation_request = '\x01';
  DVar14 = (&g_player1)[param_1].action_state;
  uVar1 = ac & 0xfffffff8 | (uint)(0x4_THROW < DVar14) << 2 | (uint)(DVar14 == 0x4_THROW) << 1;
  ac = uVar1 | DVar14 < 0x4_THROW;
  auVar9._36_28_ = in_register_00000008._28_28_;
  auVar4._0_32_ = auVar8._0_32_;
  if (((byte)(uVar1 >> 1) & 1) != 1) {
    ac = uVar3 & 0xfffffff8 | (uint)(0xA_THROWCAUGHT < DVar14) << 2 |
         (uint)(DVar14 == 0xA_THROWCAUGHT) << 1 | (uint)(DVar14 < 0xA_THROWCAUGHT);
    if (((byte)ac & 1 | 0xA_THROWCAUGHT < DVar14) == 1) {
      auVar4._32_4_ = 0;
      goto LAB_000240f4;
    }
  }
  auVar4._32_4_ = 1;
LAB_000240f4:
  auVar9._0_36_ = auVar4;
  iVar13 = auVar4._32_4_;
  DVar2 = (&g_player1)[param_1].action_code;
  auVar11._12_52_ = auVar9._12_52_;
  auVar11._0_8_ = auVar4._0_8_;
  auVar11._8_4_ = 0x24100;
  *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar11;
  auVar10._8_56_ = auVar11._8_56_;
  auVar10._4_4_ = auStackX_0;
  auVar10._0_4_ = fp;
  DVar14 = Player_GetActionStateForCode((uint)DVar2,param_1);
  (&g_player1)[param_1].action_state = DVar14;
  auStackX_0._12_52_ = auVar10._12_52_;
  auStackX_0._0_8_ = auVar10._0_8_;
  auStackX_0._8_4_ = 0x24110;
  auVar12._8_56_ = auStackX_0._8_56_;
  auVar12._4_4_ = auStack_80;
  auVar12._0_4_ = auStackX_0;
  DVar14 = Player_GetActionStateForCode((uint)(&g_player1)[auVar7._24_4_].action_code,auVar7._24_4_)
  ;
  (&g_player1)[auVar7._24_4_].action_state = DVar14;
  ac = ac & 0xfffffff8 | (uint)(iVar13 != 0) << 2 | (uint)(iVar13 == 0) << 1;
  if (iVar13 == 0) {
    (&g_player1)[auVar7._24_4_].facing_direction = (&g_player1)[param_1].facing_direction;
    (&g_player1)[param_1].animation_flip = (&g_player1)[auVar7._24_4_].animation_flip;
    (&g_player1)[param_1].combo_start = '\x01';
    (&g_player1)[param_1].combo_flag = '\x01';
    (&g_player1)[param_1].combo_count = g14;
    auStack_40._12_52_ = auVar12._12_52_;
    auStack_40._0_8_ = auVar12._0_8_;
    auStack_40._8_4_ = 0x24140;
    auVar12._8_56_ = auStack_40._8_56_;
    auVar12._4_4_ = (undefined1 *)0x0;
    auVar12._0_4_ = auStack_40;
    FUN_00024bb0(param_1);
  }
  (&g_player1)[auVar7._24_4_].ukemi_flag = g14;
  DAT_00557f28 = 1;
  fp = auVar12._0_4_;
  return;
}

