
/* password */

int FUN_0c0e8d96(char *param_1)

{
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int aiStack_2c [5];
  
  puVar1 = PTR_DAT_0c0e8ebc;
  iVar6 = 1;
  iVar5 = 0;
  do {
    piVar7 = aiStack_2c + iVar6;
    *piVar7 = 1;
    iVar2 = 0;
    pcVar3 = PTR_s_TOMONOBU_0c0e8ec0 + iVar6 * 9;
    pcVar4 = param_1;
    do {
      if (*pcVar3 != *pcVar4) {
        *piVar7 = 0;
      }
      if (pcVar3[1] != pcVar4[1]) {
        *piVar7 = 0;
      }
      if (pcVar3[2] != pcVar4[2]) {
        *piVar7 = 0;
      }
      iVar2 = iVar2 + 4;
      if (pcVar3[3] != pcVar4[3]) {
        *piVar7 = 0;
      }
      pcVar4 = pcVar4 + 4;
      pcVar3 = pcVar3 + 4;
    } while (iVar2 < 5);
    while (iVar2 < 9) {
      iVar2 = iVar2 + 1;
      if (*pcVar3 != *pcVar4) {
        *piVar7 = 0;
      }
      pcVar4 = pcVar4 + 1;
      pcVar3 = pcVar3 + 1;
    }
    if (aiStack_2c[iVar6] == 1) {
      iVar5 = iVar6 + 1;
      if (iVar6 == 0) {
        if (puVar1[3] == '\0') {
          puVar1[3] = 1;
        }
        else {
LAB_0c0e8e74:
          iVar5 = 0;
        }
      }
      else if (iVar6 == 1) {
        if (puVar1[2] != '\0') goto LAB_0c0e8e74;
        puVar1[2] = 1;
      }
      else if (iVar6 == 2) {
        if (puVar1[4] != '\0') goto LAB_0c0e8e74;
        puVar1[4] = 1;
      }
    }
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      if (iVar5 != 0) {
        (*(code *)PTR_FUN_0c0e8ec4)();
      }
      return iVar5;
    }
  } while( true );
}

