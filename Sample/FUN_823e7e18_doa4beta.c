
undefined8 FUN_823e7e18(uint param_1)

{
  ushort uVar1;
  
  if ((param_1 < 2) && ((&ACT_STATE_P1)[param_1 * 0x98] == 0x1_Air)) {
    uVar1 = (&ACT_CODE_P1)[param_1 * 0x4c];
    if ((0x38 < uVar1) && ((uVar1 < 0x3b || (uVar1 == 0x3d)))) {
      return 1;
    }
  }
  return 0;
}

