
int FUN_0c0e9c30(char *param_1,int param_2)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  pcVar2 = PTR_s_TOMONOBU_0c0e9d08 + (param_2 + 1U & 0xff) * 9;
  bVar1 = true;
  do {
    if (*pcVar2 != *param_1) {
      bVar1 = false;
    }
    if (pcVar2[1] != param_1[1]) {
      bVar1 = false;
    }
    if (pcVar2[2] != param_1[2]) {
      bVar1 = false;
    }
    iVar3 = iVar3 + 4;
    if (pcVar2[3] != param_1[3]) {
      bVar1 = false;
    }
    param_1 = param_1 + 4;
    pcVar2 = pcVar2 + 4;
  } while (iVar3 < 5);
  while (iVar3 < 9) {
    iVar3 = iVar3 + 1;
    if (*pcVar2 != *param_1) {
      bVar1 = false;
    }
    param_1 = param_1 + 1;
    pcVar2 = pcVar2 + 1;
  }
  if (!bVar1) {
    return 0;
  }
  uVar4 = param_2 + 1U & 0xff;
  if (uVar4 == 0) {
    if (PTR_DAT_0c0e9d0c[3] == '\0') {
      PTR_DAT_0c0e9d0c[3] = 1;
      return 1;
    }
  }
  else if (uVar4 == 1) {
    if (PTR_DAT_0c0e9d0c[2] == '\0') {
      PTR_DAT_0c0e9d0c[2] = 1;
      return 2;
    }
  }
  else {
    if (uVar4 != 2) {
      return uVar4 + 1;
    }
    if (PTR_DAT_0c0e9d0c[4] == '\0') {
      PTR_DAT_0c0e9d0c[4] = 1;
      return 3;
    }
  }
  return 0;
}

