
undefined1 Function_823F3BB8(ulonglong param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined1 uVar4;
  
  uVar3 = (uint)param_1;
  if (((&ACT_STATE_P1)[uVar3 * 0x98] == 0x0_Neutral) &&
     ((&DAT_82dfbff1)[(int)((param_1 + (param_1 & 0x1fffffff) * 8 & 0xffffffff) << 6)] == '\0')) {
LAB_823f3c08:
    uVar4 = Function_823ED920(param_1,((ulonglong)(&BODY_DIR_P1)[uVar3 * 0x26] -
                                      (ulonglong)(&ATK_DIR_P1)[(uVar3 ^ 1) * 0x26]) + 0x8000,0);
    return uVar4;
  }
  iVar2 = (int)((param_1 + (param_1 & 0x1fffffff) * 8 & 0x3ffffff) << 6);
  if ((&DAT_82dfbfd6)[iVar2] == '\x01') goto LAB_823f3c08;
  bVar1 = 0x8000 < (((&BODY_DIR_P1)[uVar3 * 0x26] - (&ATK_DIR_P1)[(uVar3 ^ 1) * 0x26]) + 0xc000 &
                   0xffff);
  uVar3 = ((&BODY_DIR_P1)[uVar3 * 0x26] - (&ATK_DIR_P1)[(uVar3 ^ 1) * 0x26]) + 0x8000 & 0xffff;
  (&DAT_82dfbfea)[iVar2] = bVar1;
  (&DAT_82dfbfeb)[iVar2] = 0;
  if (0x2000 < uVar3) {
    if (uVar3 < 0x6000) {
      uVar4 = 1;
      goto LAB_823f3d04;
    }
    if (uVar3 < 0xa001) {
      uVar4 = 2;
      goto LAB_823f3d04;
    }
    uVar4 = 3;
    if (uVar3 < 0xe000) goto LAB_823f3d04;
  }
  uVar4 = 0;
LAB_823f3d04:
  (&DAT_82dfbff0)[iVar2] = uVar4;
  return bVar1;
}

