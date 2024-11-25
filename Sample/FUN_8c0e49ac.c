
int FUN_8c0e49ac(char *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int aiStack_2c [5];
  
  puVar1 = PTR_DAT_8c0e4b94;
  iVar8 = 1;
  iVar7 = 0;
  do {
    piVar9 = aiStack_2c + iVar8;
    *piVar9 = 1;
    iVar4 = 0;
    puVar2 = PTR_Password_TOMONOBU_8c0e4b98;
    pcVar5 = puVar2 + iVar8 * 9;
    pcVar6 = param_1;
    do {
      if (*pcVar5 != *pcVar6) {
        *piVar9 = 0;
      }
      if (pcVar5[1] != pcVar6[1]) {
        *piVar9 = 0;
      }
      if (pcVar5[2] != pcVar6[2]) {
        *piVar9 = 0;
      }
      iVar4 = iVar4 + 4;
      if (pcVar5[3] != pcVar6[3]) {
        *piVar9 = 0;
      }
      pcVar6 = pcVar6 + 4;
      pcVar5 = pcVar5 + 4;
    } while (iVar4 < 5);
    while (iVar4 < 9) {
      iVar4 = iVar4 + 1;
      if (*pcVar5 != *pcVar6) {
        *piVar9 = 0;
      }
      pcVar6 = pcVar6 + 1;
      pcVar5 = pcVar5 + 1;
    }
    if (aiStack_2c[iVar8] == 1) {
      iVar7 = iVar8 + 1;
      if (iVar8 == 0) {
        if (puVar1[3] == '\0') {
          puVar1[3] = 1;
        }
        else {
LAB_8c0e4a8a:
          iVar7 = 0;
        }
      }
      else if (iVar8 == 1) {
        if (puVar1[2] != '\0') goto LAB_8c0e4a8a;
        puVar1[2] = 1;
      }
      else if (iVar8 == 2) {
        if (puVar1[4] != '\0') goto LAB_8c0e4a8a;
        puVar1[4] = 1;
      }
    }
    iVar8 = iVar8 + 1;
    if (2 < iVar8) {
      if (iVar7 != 0) {
        pcVar3 = (code *)PTR_FUN_8c0e4b9c;
        (*pcVar3)();
      }
      return iVar7;
    }
  } while( true );
}

