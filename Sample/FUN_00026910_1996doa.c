
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00026910(void)

{
  undefined1 auVar1 [64];
  DOA_S32 DVar2;
  DOA_S32 DVar3;
  undefined4 unaff_pfp;
  undefined1 in_register_0000000c [52];
  undefined1 auStackX_0 [1000000];
  
  DVar3 = g_player1.body_direction;
  DVar2 = g_player1.facing_direction;
  auVar1._4_4_ = auStackX_0;
  auVar1._0_4_ = unaff_pfp;
  auVar1._8_4_ = 0x26928;
  auVar1._12_52_ = in_register_0000000c;
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar1;
  fp = auStackX_0;
  FUN_00026950(0,DVar2,DVar3);
  FUN_00026950(1,g_player2.facing_direction + 0x8000,g_player2.body_direction + 0x8000);
  return;
}

