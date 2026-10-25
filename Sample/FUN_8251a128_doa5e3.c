
void FUN_8251a128(int param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  int *piVar5;
  undefined8 uVar3;
  int iVar6;
  int iVar7;
  char cVar8;
  ulonglong uVar4;
  uint uVar9;
  uint uVar10;
  byte bVar13;
  uint *puVar11;
  uint *puVar12;
  
  piVar5 = FUN_826219d0(param_1,param_2);
  if (piVar5 == (int *)0x0) {
    return;
  }
  if ((int *)piVar5[1] == (int *)0x0) {
    return;
  }
  iVar1 = *(int *)piVar5[1];
  if ((iVar1 != 5) && (iVar1 != 6)) {
    return;
  }
  uVar3 = Function_821CA310();
  iVar1 = *(int *)((int)uVar3 + 0x20);
  cVar8 = *(char *)(iVar1 + 0x68);
  iVar7 = (int)cVar8;
  if (cVar8 == '\0') {
    iVar7 = (int)cVar8;
    iVar6 = FUN_8261eec0(iVar1,param_2);
    if (iVar6 == 0) {
      bVar13 = 0;
    }
    else if (*(char *)(iVar6 + 0xa0) == '\0') {
      if (*(int *)(iVar6 + 0x14) == 0) {
        if (*(char *)(iVar6 + 0x9a) == '\0') goto LAB_8251a1d0;
        bVar13 = 0;
      }
      else {
        bVar13 = 0;
      }
    }
    else {
LAB_8251a1d0:
      bVar13 = (byte)(*(uint *)(iVar6 + 0x10) >> 5) & 1;
    }
  }
  else {
    bVar13 = 0;
  }
  if (bVar13 == 0) {
    bVar13 = 0;
    if (iVar7 == 0) {
      iVar6 = FUN_8261eec0(iVar1,param_2);
      if (iVar6 == 0) {
        bVar13 = 0;
      }
      else if (*(char *)(iVar6 + 0xa0) == '\0') {
        if (*(int *)(iVar6 + 0x14) == 0) {
          if (*(char *)(iVar6 + 0x9a) == '\0') goto LAB_8251a23c;
          bVar13 = 0;
        }
        else {
          bVar13 = 0;
        }
      }
      else {
LAB_8251a23c:
        bVar13 = (byte)(*(uint *)(iVar6 + 0x10) >> 0x13) & 1;
      }
    }
    cVar8 = '\0';
    if (bVar13 != 0) goto LAB_8251a254;
  }
  else {
LAB_8251a254:
    cVar8 = '\x01';
  }
  if (iVar7 == 0) {
    iVar6 = FUN_8261eec0(iVar1,param_2);
    if (iVar6 == 0) {
      bVar13 = 0;
    }
    else if (*(char *)(iVar6 + 0xa0) == '\0') {
      if (*(int *)(iVar6 + 0x14) == 0) {
        if (*(char *)(iVar6 + 0x9a) == '\0') goto LAB_8251a2b8;
        bVar13 = 0;
      }
      else {
        bVar13 = 0;
      }
    }
    else {
LAB_8251a2b8:
      bVar13 = (byte)(*(uint *)(iVar6 + 0x10) >> 2) & 1;
    }
  }
  else {
    bVar13 = 0;
  }
  if (bVar13 == 0) {
    bVar13 = 0;
    if (iVar7 == 0) {
      iVar7 = FUN_8261eec0(iVar1,param_2);
      if (iVar7 == 0) {
        bVar13 = 0;
      }
      else if (*(char *)(iVar7 + 0xa0) == '\0') {
        if (*(int *)(iVar7 + 0x14) == 0) {
          if (*(char *)(iVar7 + 0x9a) == '\0') goto LAB_8251a324;
          bVar13 = 0;
        }
        else {
          bVar13 = 0;
        }
      }
      else {
LAB_8251a324:
        bVar13 = (byte)*(undefined2 *)(iVar7 + 0x10) & 1;
      }
    }
    bVar2 = false;
    if (bVar13 == 0) goto LAB_8251a340;
  }
  bVar2 = true;
LAB_8251a340:
  if ((cVar8 != '\0') || (bVar2)) {
    puVar12 = &DAT_83b6d9d4;
    uVar10 = 0;
    puVar11 = puVar12;
    do {
      uVar9 = uVar10;
      if (*puVar11 == param_2) break;
      puVar11 = puVar11 + 1;
      uVar10 = uVar10 + 1;
      uVar9 = 4;
    } while ((int)puVar11 < -0x7c49261c);
    cVar8 = '\0';
    if (((-1 < (int)uVar9) && (uVar9 < *(uint *)(param_1 + 0xa0))) &&
       (*(int *)(*(int *)(param_1 + 0xa8) + uVar9 * 4) != 0)) {
      cVar8 = Function_82516C60();
    }
    if ((cVar8 != '\0') && (iVar7 = FUN_826236d8(param_1,param_2,4), iVar7 != 0)) {
      uVar10 = 4;
      uVar9 = 0;
      do {
        if (*puVar12 == param_2) {
          uVar10 = uVar9;
          if ((int)uVar9 < 0) goto LAB_8251a4a0;
          break;
        }
        puVar12 = puVar12 + 1;
        uVar9 = uVar9 + 1;
      } while ((int)puVar12 < -0x7c49261c);
      if ((uVar10 < *(uint *)(param_1 + 0x90)) &&
         (*(int *)(*(int *)(param_1 + 0x98) + uVar10 * 4) != 0)) {
        character_select_demo_limit(iVar7);
        Function_82514910();
      }
LAB_8251a4a0:
      iVar7 = FUN_8261eec0(iVar1,param_2);
      if (iVar7 != 0) {
        uVar4 = Function_8261FF68(iVar1);
        *(int *)(iVar7 + 0x14) = (int)uVar4;
      }
    }
  }
  return;
}

