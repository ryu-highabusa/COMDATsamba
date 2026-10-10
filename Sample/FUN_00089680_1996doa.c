
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void GameModeMenu_AdjustVsFinish
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
  uVar2 = ac & 0xfffffff8 | (uint)(9 < SettingsGameMode_VsFinish) << 2 |
          (uint)(SettingsGameMode_VsFinish == 9) << 1;
  ac = uVar2 | SettingsGameMode_VsFinish < 9;
  if (((byte)ac & 1 | (byte)(uVar2 >> 1) & 1) == 1) {
    SettingsGameMode_VsFinish = SettingsGameMode_VsFinish + 1;
  }
  else {
    SettingsGameMode_VsFinish = g14;
  }
  auVar1._12_52_ = in_register_00000008._4_52_;
  auVar1._8_4_ = 0x896b8;
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar1;
  Debug_SetTextPosition(0x30,0x20);
  uVar2 = (uint)SettingsGameMode_VsFinish;
  ac = ac & 0xfffffff8 | (uint)(uVar2 != 0) << 2 | (uint)(uVar2 == 0) << 1;
  if (uVar2 == 0) {
    thunk_FUN_00008b0c(s_OFF_0008951c);
    fp = auStackX_0;
    return;
  }
  FUN_0008e740(s__3d_0008967c,(uint)SettingsGameMode_VsFinish,param_3,param_4,uVar2,param_6,param_7,
               param_8,param_9,param_10,param_11,param_12);
  fp = auStackX_0;
  return;
}

