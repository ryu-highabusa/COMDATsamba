
undefined8 Function_823E7D68(ulonglong param_1)

{
  int iVar1;
  
  if ((((param_1 & 0xffffffff) < 2) &&
      (((&ACT_STATE_P1)[(int)param_1 * 0x98] == 0x4_Throw ||
       ((&ACT_STATE_P1)[(int)param_1 * 0x98] == 0x6_Hold_Success)))) &&
     ((iVar1 = FUN_823f0610(param_1,1), iVar1 != 0 ||
      ((iVar1 = FUN_823f0610(param_1,2), iVar1 != 0 || (iVar1 = FUN_823f0610(param_1,3), iVar1 != 0)
       ))))) {
    return 1;
  }
  return 0;
}

