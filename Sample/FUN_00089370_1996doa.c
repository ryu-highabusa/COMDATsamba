
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void GameModeMenu_AdjustVsComSetCount
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  undefined4 unaff_pfp;
  undefined1 in_register_00000008 [56];
  undefined1 auVar1 [64];
  uint uVar2;
  undefined1 auStackX_0 [1000000];
  
  auVar1._4_4_ = auStackX_0;
  auVar1._0_4_ = unaff_pfp;
  uVar2 = (uint)SettingsGameMode_VsComSetCount;
  ac = ac & 0xfffffff8 | (uint)(4 < uVar2) << 2 | (uint)(uVar2 == 4) << 1 | (uint)(uVar2 < 4);
  if (4 < uVar2) {
    param_3 = 2;
    SettingsGameMode_VsComSetCount = 2;
  }
  else {
    uVar2 = SettingsGameMode_VsComSetCount + 1;
    SettingsGameMode_VsComSetCount = (byte)uVar2;
  }
  auVar1._12_52_ = in_register_00000008._4_52_;
  auVar1._8_4_ = 0x893ac;
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar1;
  Debug_SetTextPosition(0x32,8);
  FUN_0008e740(s__1d_00089360,(uint)SettingsGameMode_VsComSetCount,param_3,param_4,uVar2,param_6,
               param_7,param_8,param_9,param_10,param_11,param_12);
  fp = auStackX_0;
  return;
}

