
void FUN_000063a0(void)

{
  undefined4 unaff_pfp;
  uint uVar1;
  int iVar2;
  
  iVar2 = (uint)DAT_0054fd30 * 2;
  SettingsCoinMode_Chute1 = (&DAT_00090670)[iVar2];
  SettingsCoinMode_Chute2 = (&BYTE_00090671_ChuteValues_)[iVar2];
  SettingsCoinMode_CoinCounterType_0054fda0 = DAT_0054fd31;
  SettingsCoinMode_CoinChuteType = DAT_0054fd32;
  SettingsCoinMode_StartCredits_0054fced = DAT_0054fd33;
  SettingsCoinMode_ContinueCredits_0054fce1 = DAT_0054fd34;
  SettingsCoinMode_VsStartCredits_0054fcec = DAT_0054fd35;
  SettingsCoinMode_VsContinueCredits_0054fce9 = DAT_0054fd36;
  if ((uint)(byte)GAME_SETTINGS_VALUES_000906f0._8_1_ < (uint)DAT_0054fd30) {
    SettingsCoinMode_Chute1 = (&DAT_00090670)[(uint)(byte)GAME_SETTINGS_VALUES_000906c0._8_1_ * 2];
    SettingsCoinMode_Chute2 =
         (&BYTE_00090671_ChuteValues_)[(uint)(byte)GAME_SETTINGS_VALUES_000906c0._8_1_ * 2];
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
  if ((byte)GAME_SETTINGS_VALUES_000906f0._14_1_ < DAT_0054fd36) {
    SettingsCoinMode_VsContinueCredits_0054fce9 = GAME_SETTINGS_VALUES_000906c0._14_1_;
  }
  if (SettingsCoinMode_Chute1 == value_freeplay) {
    DWORD_0054f430 = 1;
    DWORD_0054f438 = 1;
    DWORD_0054f440 = g14;
  }
  else {
    uVar1 = (uint)SettingsCoinMode_Chute1;
    DWORD_0054f430 = (&DWORD_000905b0)[uVar1 * 3];
    DWORD_0054f438 = (&DWORD_000905b4)[uVar1 * 3];
    DWORD_0054f440 = (&DWORD_000905b8)[uVar1 * 3];
  }
  DWORD_0054f448 = g14;
  if (SettingsCoinMode_Chute2 == value_freeplay) {
    DWORD_0054f434 = 1;
    DWORD_0054f43c = 1;
    DWORD_0054f444 = g14;
  }
  else {
    uVar1 = (uint)SettingsCoinMode_Chute2;
    DWORD_0054f434 = (&DWORD_000905b0)[uVar1 * 3];
    DWORD_0054f43c = (&DWORD_000905b4)[uVar1 * 3];
    DWORD_0054f444 = (&DWORD_000905b8)[uVar1 * 3];
  }
  DWORD_0054f44c = g14;
  CoinCounter_0054fce4 = (dword)Bookkeeping_CoinCredits_01d0000c;
  DWORD_0054fcf4 = (dword)WORD_01d0000e;
  DAT_0054fda4 = (dword)WORD_01d00010;
  DAT_0054fda8 = (dword)WORD_01d00012;
  if (0x18 < CoinCounter_0054fce4) {
    CoinCounter_0054fce4 = g14;
  }
  if (0x18 < DWORD_0054fcf4) {
    DWORD_0054fcf4 = g14;
  }
  if (5 < DAT_0054fda4) {
    DAT_0054fda4 = g14;
  }
  uVar1 = ac & 0xfffffff8 | (uint)(5 < DAT_0054fda8) << 2 | (uint)(DAT_0054fda8 == 5) << 1;
  ac = uVar1 | DAT_0054fda8 < 5;
  if (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) != 1) {
    DAT_0054fda8 = g14;
  }
  DAT_0054fdac = g14;
  DAT_0054fdb0 = g14;
  DAT_0054f410 = g14;
  DAT_0054f414 = g14;
  DAT_0054f418 = g14;
  DAT_0054f400 = g14;
  DAT_0054f420 = g14;
  DAT_0054f424 = g14;
  DAT_0054f428 = 1;
  DAT_0054f404 = g14;
  fp = unaff_pfp;
  return;
}

