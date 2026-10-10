
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void GameModeMenu_AdjustNation(void)

{
  uint uVar1;
  undefined4 unaff_pfp;
  undefined1 in_register_00000008 [56];
  undefined1 auVar2 [64];
  undefined1 auStackX_0 [1000000];
  
  auVar2._4_4_ = auStackX_0;
  auVar2._0_4_ = unaff_pfp;
  uVar1 = ac & 0xfffffff8 | (uint)(1 < SettingsGameMode_Nation) << 2 |
          (uint)(SettingsGameMode_Nation == 1) << 1;
  ac = uVar1 | SettingsGameMode_Nation == 0;
  if (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) == 1) {
    SettingsGameMode_Nation = SettingsGameMode_Nation + 1;
  }
  else {
    SettingsGameMode_Nation = g14;
  }
  auVar2._12_52_ = in_register_00000008._4_52_;
  auVar2._8_4_ = 0x895d8;
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar2;
  Debug_SetTextPosition(0x2d,0x1a);
  if (SettingsGameMode_Nation == 0) {
    ac = ac & 0xfffffff8 | (uint)(SettingsGameMode_Nation != 0) << 2 |
         (uint)(SettingsGameMode_Nation == 0) << 1;
    thunk_FUN_00008b0c(s_JAPAN_00089580);
    fp = auStackX_0;
    return;
  }
  ac = ac & 0xfffffff8 | (uint)(1 < SettingsGameMode_Nation) << 2 |
       (uint)(SettingsGameMode_Nation == 1) << 1 | (uint)(SettingsGameMode_Nation == 0);
  if (((byte)ac & 1 | 1 < SettingsGameMode_Nation) != 1) {
    thunk_FUN_00008b0c(s_U_S_A__00089588);
    fp = auStackX_0;
    return;
  }
  thunk_FUN_00008b0c(s_EXPORT_00089590);
  fp = auStackX_0;
  return;
}

