
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0004db40(void)

{
  undefined1 auVar1 [64];
  undefined4 unaff_pfp;
  undefined1 in_register_0000000c [52];
  uint character_resource_slot;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [64];
  undefined1 auStack_80 [64];
  undefined1 auStack_c0 [64];
  undefined1 auStack_100 [999744];
  
  character_resource_slot = (uint)g_player1.character_id;
  auVar1._4_4_ = auStackX_0;
  auVar1._0_4_ = unaff_pfp;
  auVar1._8_4_ = 0x4db50;
  auVar1._12_52_ = in_register_0000000c;
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar1;
  Character_LoadResources(character_resource_slot,0);
  auStackX_0._4_4_ = auStackX_0;
  auStackX_0._0_4_ = fp;
  auStackX_0._8_4_ = 0x4db60;
  auStackX_0._12_52_ = in_register_0000000c;
  Character_LoadResources((uint)g_player2.character_id,1);
  auStack_40._4_4_ = auStack_40;
  auStack_40._0_4_ = auStackX_0;
  auStack_40._8_4_ = 0x4db68;
  auStack_40._12_52_ = in_register_0000000c;
  FighterAccessoryChains_Initialize(0);
  auStack_80._4_4_ = auStack_80;
  auStack_80._0_4_ = auStack_40;
  auStack_80._8_4_ = 0x4db70;
  auStack_80._12_52_ = in_register_0000000c;
  FighterAccessoryChains_Initialize(1);
  auStack_c0._4_4_ = auStack_c0;
  auStack_c0._0_4_ = auStack_80;
  auStack_c0._8_4_ = 0x4db80;
  auStack_c0._12_52_ = in_register_0000000c;
  fp = auStack_100;
  Player_SetupFighter(0,(uint)g_player1.character_id);
  Player_SetupFighter(1,(uint)g_player2.character_id);
  return;
}

