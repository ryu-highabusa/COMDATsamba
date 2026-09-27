
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0004db90(int param_1)

{
  DOA1_NAME_ID DVar1;
  undefined1 auVar2 [64];
  undefined4 unaff_pfp;
  undefined4 unaff_r3;
  undefined1 in_register_0000001c [36];
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [999936];
  
  DVar1 = (&g_player1)[param_1].character_id;
  (&g_player_projection_scale_candidate)[param_1] = FLOAT_ARRAY_000c5970[DVar1];
  auVar2._4_4_ = auStackX_0;
  auVar2._0_4_ = unaff_pfp;
  auVar2._8_4_ = 0x4dbd0;
  auVar2._12_4_ = unaff_r3;
  auVar2._16_4_ = param_1 * 0x58;
  auVar2._20_4_ = param_1;
  auVar2._24_4_ = &g_player1;
  auVar2._28_36_ = in_register_0000001c;
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar2;
  Player_InitSecondaryMotionParts((uint)DVar1,param_1);
  auStackX_0._4_4_ = auStackX_0;
  auStackX_0._0_4_ = fp;
  auStackX_0._8_4_ = 0x4dbd8;
  auStackX_0._12_4_ = unaff_r3;
  auStackX_0._16_4_ = param_1 * 0x58;
  auStackX_0._20_4_ = param_1;
  auStackX_0._24_4_ = &g_player1;
  auStackX_0._28_36_ = in_register_0000001c;
  fp = auStack_40;
  Player_InitCostumeSecondaryParts(param_1);
  Player_InitializeCharacterModelResources(param_1,(uint)(&g_player1)[param_1].character_id);
  return;
}

