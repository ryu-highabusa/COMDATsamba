
undefined8 FUN_82282528(uint param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_2 & 0xff;
  iVar2 = (param_1 ^ 1) * 0x640;
  uVar1 = 0;
  if (uVar3 == 0xfd) {
    return 1;
  }
  if (uVar3 == 0xfe) {
    return uVar1;
  }
  if (uVar3 == 0xff) {
    return 1;
  }
  uVar3 = param_2 & 0xe0;
  if (uVar3 == 0x40) {
    if (DWORD_82acee44 != 3) {
      return uVar1;
    }
    if (DAT_82acee4c != 0) {
      return uVar1;
    }
    if ((&MANCOM_P1_83e72d30)[param_1 * 400] != 0) {
      return uVar1;
    }
  }
  else {
    if (uVar3 == 0x80) {
      if (DWORD_82acee44 != 3) {
        return uVar1;
      }
      if (DAT_82acee4c != 0) {
        return uVar1;
      }
      if ((&MANCOM_P1_83e72d30)[param_1 * 400] != 1) {
        return uVar1;
      }
      uVar3 = DAT_82acee51 + 1;
      goto LAB_8228264c;
    }
    if (uVar3 == 0xc0) {
      if (DWORD_82acee44 != 3) {
        return uVar1;
      }
      if (DAT_82acee4c != 0) {
        return uVar1;
      }
      if ((&MANCOM_P1_83e72d30)[param_1 * 400] != 1) {
        return uVar1;
      }
      if ((uint)(&CHAR_NUM_P1_83e72d34)[iVar2] == (param_2 & 0x1f)) {
        if (2 < DAT_82acee59) {
          return 1;
        }
        return uVar1;
      }
      return uVar1;
    }
  }
  uVar3 = (uint)(&CHAR_NUM_P1_83e72d34)[iVar2];
LAB_8228264c:
  if (uVar3 == (param_2 & 0x1f)) {
    return 1;
  }
  return uVar1;
}

