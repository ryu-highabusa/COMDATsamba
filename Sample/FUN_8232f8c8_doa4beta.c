
void FUN_8232f8c8(uint param_1)

{
  int iVar1;
  
  param_1 = param_1 & 0xff;
  iVar1 = param_1 * 0x98;
  if ((&ACT_CODE_P1)[param_1 * 0x4c] == 0) {
    return;
  }
  (&DAT_82ce4ea4)[iVar1] = (&DAT_82ce4e31_)[iVar1];
  (&ANIME_SPD_P1)[param_1 * 0x26] = 1.0;
  (&ANIME_P1_82ce4e40)[param_1 * 0x4c] = 0;
  (&BYTE_82ce4e4f)[iVar1] = 0;
  (&ACT_CODE_P1)[param_1 * 0x4c] = 0;
  (&ACT_FLAG_P1)[iVar1] = 0;
  (&ACT_REQ_P1)[param_1 * 0x4c] = 0;
  (&ACT_STATE_P1)[iVar1] = 0x0_Neutral;
  (&BYTE_82ce4e4e)[iVar1] = 0;
  (&BYTE_82ce4e50)[iVar1] = 1;
  return;
}

