
void FUN_0008aa10(void)

{
  uint uVar1;
  undefined4 unaff_pfp;
  
  SettingsCoinMode_FreePlay_005bfb72 = DAT_0054fd30;
  SettingsCoinMode_CoinCounterType_0054fda0 = DAT_0054fd31;
  SettingsCoinMode_CoinChuteType = DAT_0054fd32;
  SettingsCoinMode_StartCredits_0054fced = DAT_0054fd33;
  SettingsCoinMode_ContinueCredits_0054fce1 = DAT_0054fd34;
  SettingsCoinMode_VsStartCredits_0054fcec = DAT_0054fd35;
  SettingsCoinMode_VsContinueCredits_0054fce9 = DAT_0054fd36;
  if ((byte)GAME_SETTINGS_VALUES_000906f0._8_1_ < DAT_0054fd30) {
    SettingsCoinMode_FreePlay_005bfb72 = GAME_SETTINGS_VALUES_000906c0._8_1_;
  }
  if ((byte)GAME_SETTINGS_VALUES_000906f0._9_1_ < DAT_0054fd31) {
    SettingsCoinMode_CoinCounterType_0054fda0 = GAME_SETTINGS_VALUES_000906c0._9_1_;
  }
  if ((byte)GAME_SETTINGS_VALUES_000906f0._10_1_ < DAT_0054fd32) {
    SettingsCoinMode_CoinChuteType = GAME_SETTINGS_VALUES_000906c0._10_1_;
  }
  if ((byte)GAME_SETTINGS_VALUES_000906f0._11_1_ < DAT_0054fd33) {
    SettingsCoinMode_StartCredits_0054fced = GAME_SETTINGS_VALUES_000906c0._11_1_;
  }
  if ((byte)GAME_SETTINGS_VALUES_000906f0._12_1_ < DAT_0054fd34) {
    SettingsCoinMode_ContinueCredits_0054fce1 = GAME_SETTINGS_VALUES_000906c0._12_1_;
  }
  if ((byte)GAME_SETTINGS_VALUES_000906f0._13_1_ < DAT_0054fd35) {
    SettingsCoinMode_VsStartCredits_0054fcec = GAME_SETTINGS_VALUES_000906c0._13_1_;
  }
  uVar1 = ac & 0xfffffff8 | (uint)(DAT_0054fd36 < (byte)GAME_SETTINGS_VALUES_000906f0._14_1_) << 2 |
          (uint)(DAT_0054fd36 == GAME_SETTINGS_VALUES_000906f0._14_1_) << 1;
  ac = uVar1 | (byte)GAME_SETTINGS_VALUES_000906f0._14_1_ < DAT_0054fd36;
  if (((byte)(uVar1 >> 1) & 1 | DAT_0054fd36 < (byte)GAME_SETTINGS_VALUES_000906f0._14_1_) != 1) {
    SettingsCoinMode_VsContinueCredits_0054fce9 = GAME_SETTINGS_VALUES_000906c0._14_1_;
  }
  SettingsCoinMode_Chute1 = (&DAT_00090670)[(uint)SettingsCoinMode_FreePlay_005bfb72 * 2];
  SettingsCoinMode_Chute2 =
       (&BYTE_00090671_ChuteValues_)[(uint)SettingsCoinMode_FreePlay_005bfb72 * 2];
  fp = unaff_pfp;
  return;
}

