
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void GameModeMenu_ToggleContinue(void)

{
  undefined4 unaff_pfp;
  undefined1 in_register_00000008 [56];
  undefined1 auVar1 [64];
  undefined1 auStackX_0 [1000000];
  
  auVar1._4_4_ = auStackX_0;
  auVar1._0_4_ = unaff_pfp;
  ac = ac & 0xfffffff8 | (uint)(1 < SettingsGameMode_Continue) << 2 |
       (uint)(SettingsGameMode_Continue == 1) << 1 | (uint)(SettingsGameMode_Continue == 0);
  if (((byte)ac & 1 | 1 < SettingsGameMode_Continue) == 1) {
    SettingsGameMode_Continue = 1;
  }
  else {
    SettingsGameMode_Continue = g14;
  }
  auVar1._12_52_ = in_register_00000008._4_52_;
  auVar1._8_4_ = 0x89650;
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar1;
  Debug_SetTextPosition(0x30,0x1d);
  ac = ac & 0xfffffff8 | (uint)(1 < SettingsGameMode_Continue) << 2 |
       (uint)(SettingsGameMode_Continue == 1) << 1 | (uint)(SettingsGameMode_Continue == 0);
  if (((byte)ac & 1 | 1 < SettingsGameMode_Continue) != 1) {
    thunk_FUN_00008b0c(s_ON_00089518);
    fp = auStackX_0;
    return;
  }
  thunk_FUN_00008b0c(s_OFF_0008951c);
  fp = auStackX_0;
  return;
}

