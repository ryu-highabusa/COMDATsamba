
void FUN_00004320(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 unaff_pfp;
  
  uVar2 = ac;
  SettingsGameMode_VsComDifficulty_0054fd70 = SettingsGameMode_VsComDifficulty_0054fd37;
  SettingsGameMode_VsComEnergy_0054fd71 = SettingsGameMode_VsComEnergy_0054fd38;
  SettingsGameMode_VsManEnergy_0054fd72 = SettingsGameMode_VsManEnergy_0054fd39;
  SettingsGameMode_DemoSound_0054fd73 = SettingsGameMode_DemoSound_0054fd3c;
  DAT_0054fd74 = DAT_0054fd3d;
  DAT_0054fd75 = DAT_0054fd3f;
  DAT_0054fd12 = DAT_0054fd40;
  if (BYTE_000906ff < SettingsGameMode_VsComDifficulty_0054fd37) {
    SettingsGameMode_VsComDifficulty_0054fd70 = BYTE_000906cf;
  }
  if (BYTE_00090700 < SettingsGameMode_VsComEnergy_0054fd38) {
    SettingsGameMode_VsComEnergy_0054fd71 = SettingsGameMode_VsComEnergy_000906d0;
  }
  if (BYTE_00090701 < SettingsGameMode_VsManEnergy_0054fd39) {
    SettingsGameMode_VsManEnergy_0054fd72 = SettingsGameMode_VsManEnergy_000906d1;
  }
  if (BYTE_00090704 < SettingsGameMode_DemoSound_0054fd3c) {
    SettingsGameMode_DemoSound_0054fd73 = SettingsGameMode_DemoSound_000906d4;
  }
  if (BYTE_00090705 < DAT_0054fd3d) {
    DAT_0054fd74 = BYTE_000906d5;
  }
  if (BYTE_00090707 < DAT_0054fd3f) {
    DAT_0054fd75 = BYTE_000906d7;
  }
  if (DAT_00090708 < DAT_0054fd40) {
    DAT_0054fd12 = DAT_000906d8;
  }
  SettingsGameMode_Nation = SettingsGameMode_Nation_000906d6;
  if (SettingsGameMode_Nation_0054fd3e <= BYTE_00090706) {
    SettingsGameMode_Nation = SettingsGameMode_Nation_0054fd3e;
  }
  ac = ac & 0xfffffff8 | (uint)(0 < (int)DWORD_0054f3d4) << 2 | (uint)(DWORD_0054f3d4 == 0) << 1 |
       (uint)((int)DWORD_0054f3d4 < 0);
  if (((((byte)ac & 1 | 0 < (int)DWORD_0054f3d4) != 1) &&
      (uVar1 = uVar2 & 0xfffffff8 | (uint)((int)Bookkeeping_TotalTime_01d00000 < -1) << 2 |
               (uint)(Bookkeeping_TotalTime_01d00000 == 0xffffffff) << 1,
      ac = uVar1 | -1 < (int)Bookkeeping_TotalTime_01d00000, ((byte)(uVar1 >> 1) & 1) != 1)) &&
     (uVar2 = uVar2 & 0xfffffff8 | (uint)(Bookkeeping_TotalTime_01d00000 < 0x20f57f) << 2 |
              (uint)(Bookkeeping_TotalTime_01d00000 == 0x20f57f) << 1,
     ac = uVar2 | 0x20f57f < Bookkeeping_TotalTime_01d00000,
     ((byte)(uVar2 >> 1) & 1 | Bookkeeping_TotalTime_01d00000 < 0x20f57f) != 1)) {
    SettingsUnlisted_UnlockRaidou_0054fd76_ = 1;
  }
  _0d_DAT_0054fd77 = 0x3c;
  SettingsUnlistedGameMode_Time_0054fd78 = 0x1e;
  FLOAT_0054fd7c = 24.0;
  FLOAT_0054fd80 = 24.0;
  FLOAT_0054fd08 = 10.0;
  FLOAT_0054fd0c = 10.0;
  BYTE_0054fd84 = 0xff;
  BYTE_0054fd85 = g14;
  BYTE_0054fcea = 1;
  DAT_0054fcfe = g14;
  DAT_0054fd86 = g14;
  FLOAT_0054fd88 = 1.09;
  g_debug_anime_mode = g14;
  fp = unaff_pfp;
  return;
}

