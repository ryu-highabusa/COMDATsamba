
undefined8 FUN_823ef9e8(int param_1)

{
  if ((&ACT_STATE_P1)[param_1 * 0x98] != 0x0_Neutral) {
    return 0;
  }
  if (((&ACT_CODE_P1)[param_1 * 0x4c] != 4) && ((&ACT_CODE_P1)[param_1 * 0x4c] != 0x11)) {
    return 0;
  }
  return 1;
}

