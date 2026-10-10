
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void GameModeMenu_AdjustVsComEnergy(void)

{
  undefined4 unaff_pfp;
  undefined1 in_register_00000008 [56];
  undefined1 auVar1 [64];
  undefined1 auStackX_0 [1000000];
  
  auVar1._4_4_ = auStackX_0;
  auVar1._0_4_ = unaff_pfp;
  ac = ac & 0xfffffff8 | (uint)(2 < SettingsGameMode_VsComEnergy) << 2 |
       (uint)(SettingsGameMode_VsComEnergy == 2) << 1 | (uint)(SettingsGameMode_VsComEnergy < 2);
  if (2 < SettingsGameMode_VsComEnergy) {
    SettingsGameMode_VsComEnergy = g14;
  }
  else {
    SettingsGameMode_VsComEnergy = SettingsGameMode_VsComEnergy + 1;
  }
  auVar1._12_52_ = in_register_00000008._4_52_;
  auVar1._8_4_ = 0x894b8;
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar1;
  Debug_SetTextPosition(0x2a,0x11);
  FUN_0008a060(SettingsGameMode_VsComEnergy);
  fp = auStackX_0;
  return;
}

