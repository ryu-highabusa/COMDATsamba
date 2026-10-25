
void FUN_8251aaa8(int *param_1,uint param_2)

{
  byte bVar1;
  dword dVar2;
  int iVar4;
  undefined8 uVar3;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  ulonglong uVar9;
  uint uVar10;
  uint *puVar11;
  int *piVar12;
  byte bVar14;
  undefined1 uVar15;
  dword *pdVar13;
  ulonglong uVar16;
  int iVar17;
  
  dVar2 = DWORD_829aac40;
  uVar16 = 4;
  uVar9 = 0;
  puVar11 = &DAT_83b6d9d4;
  do {
    if (*puVar11 == param_2) {
      uVar16 = uVar9;
      if ((int)uVar9 < 0) {
        return;
      }
      break;
    }
    puVar11 = puVar11 + 1;
    uVar9 = uVar9 + 1;
  } while ((int)puVar11 < -0x7c49261c);
  if ((ulonglong)(uint)param_1[0x28] <= (uVar16 & 0xffffffff)) {
    return;
  }
  iVar17 = *(int *)((int)((uVar16 & 0xffffffff) << 2) + param_1[0x2a]);
  if (iVar17 == 0) {
    return;
  }
  piVar12 = &DAT_83b6d9d4;
  iVar4 = 0;
  do {
    iVar6 = iVar4;
    if (*piVar12 == *(int *)(iVar17 + 0x10)) break;
    piVar12 = piVar12 + 1;
    iVar4 = iVar4 + 1;
    iVar6 = 4;
  } while ((int)piVar12 < -0x7c49261c);
  cVar8 = '\0';
  iVar4 = 0;
  bVar1 = *(byte *)(*(int *)(iVar17 + 0xa4) + iVar17 + 0x1d);
  do {
    if (iVar4 != iVar6) {
      if (((&CHAR_NUM_P1_83b6d9d0)[iVar4 * 2] == *(charids *)(iVar17 + 0x1c)) &&
         ((&CHAR_COL_P1_83b6d9d1)[iVar4 * 2] == bVar1)) {
        cVar8 = '\x01';
      }
      break;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 2);
  if ((uint)LZCOUNT((int)cVar8) >> 5 == 0) {
    Function_82438A50();
    return;
  }
  Function_82516728();
  iVar17 = (int)uVar16;
  if (iVar17 < 2) {
    iVar4 = (int)((uVar16 & 0xffffffff) << 4) - iVar17;
    bVar14 = (&CHAR_NUM_P1_83b6d71c)[iVar4];
    (&DAT_83b6d75c)[iVar4] = bVar1;
  }
  else {
    bVar14 = 0;
  }
  if ((bVar14 == 5) && (bVar1 < 6)) {
    if ((bVar1 != 1) && (bVar1 != 2)) {
      if (bVar1 == 3) goto LAB_8251ac64;
      if ((bVar1 != 4) && (bVar1 == 0)) {
        uVar15 = 3;
        goto LAB_8251ac68;
      }
    }
    uVar15 = 1;
  }
  else {
LAB_8251ac64:
    uVar15 = 0;
  }
LAB_8251ac68:
  if (iVar17 < 2) {
    (&DAT_83b6d7ac)[(int)((uVar16 & 0xffffffff) << 4) - iVar17] = uVar15;
  }
  (&BYTE_83e6c570)[iVar17] = 1;
  iVar4 = FUN_826236d8((int)param_1,param_2,4);
  if ((iVar4 != 0) && (iVar17 < 2)) {
    iVar17 = (int)((uVar16 & 0x7fffffff) << 1);
    uVar3 = character_select_demo_limit(iVar4);
    (&CHAR_NUM_P1_83b6d9d0)[iVar17] = (charids)uVar3;
    (&CHAR_COL_P1_83b6d9d1)[iVar17] = bVar1;
  }
  Function_82438A50();
  puVar11 = &DAT_83b6d9d4;
  iVar17 = 0;
  do {
    iVar4 = iVar17;
    if (*puVar11 == param_2) break;
    puVar11 = puVar11 + 1;
    iVar17 = iVar17 + 1;
    iVar4 = 4;
  } while ((int)puVar11 < -0x7c49261c);
  puVar11 = &DAT_83b6d9d4;
  iVar17 = 0;
  do {
    iVar6 = iVar17;
    if (*puVar11 == param_2) break;
    puVar11 = puVar11 + 1;
    iVar17 = iVar17 + 1;
    iVar6 = 4;
  } while ((int)puVar11 < -0x7c49261c);
  Function_82623108((int)param_1,param_2,((uint)LZCOUNT(iVar6) >> 5 ^ 1) + 0x27);
  Function_826231E0((int)param_1,param_2,((uint)LZCOUNT(iVar4) >> 5 ^ 1) + 7);
  puVar11 = &DAT_83b6d9d4;
  uVar7 = 4;
  uVar10 = 0;
  do {
    if (*puVar11 == param_2) {
      uVar7 = uVar10;
      if ((int)uVar10 < 0) goto LAB_8251ae14;
      break;
    }
    puVar11 = puVar11 + 1;
    uVar10 = uVar10 + 1;
  } while ((int)puVar11 < -0x7c49261c);
  if (((uVar7 < (uint)param_1[0x24]) && (iVar17 = *(int *)(param_1[0x26] + uVar7 * 4), iVar17 != 0))
     && (*(int *)(iVar17 + 0xc) == 4)) {
    Function_82514D88();
    Function_82515200(iVar17);
  }
LAB_8251ae14:
  Function_821CA310();
  if ((param_1[0x1f] == 1) && (selection_owner_slot_candidate == param_2)) {
    uVar3 = Function_821CA310();
    iVar17 = *(int *)((int)uVar3 + 0x20);
    iVar4 = FUN_8261eec0(iVar17,dVar2);
    if (iVar4 != 0) {
      *(undefined1 *)(iVar4 + 0x9a) = 0;
    }
    param_1[0x1f] = 2;
    if (dVar2 == 0) {
      DAT_83e6c578 = &LAB_82507ec0;
    }
    else if (dVar2 == 1) {
      DAT_83e6c578 = &LAB_82507ed0;
    }
    if (selection_owner_slot_candidate == 0) {
      puVar5 = &LAB_82507ec0;
    }
    else {
      puVar5 = &LAB_82507ed0;
    }
    Function_8250F178(dVar2,puVar5);
    pdVar13 = &DAT_83b6d9d4;
    uVar7 = 4;
    uVar10 = 0;
    do {
      if (*pdVar13 == dVar2) {
        uVar7 = uVar10;
        if ((int)uVar10 < 0) {
          return;
        }
        break;
      }
      pdVar13 = pdVar13 + 1;
      uVar10 = uVar10 + 1;
    } while ((int)pdVar13 < -0x7c49261c);
    if (((uVar7 < (uint)param_1[0x24]) && (*(int *)(param_1[0x26] + uVar7 * 4) != 0)) &&
       (iVar4 = FUN_826236d8((int)param_1,dVar2,4), iVar4 != 0)) {
      if ((uVar7 < (uint)param_1[0x28]) && (*(int *)(param_1[0x2a] + uVar7 * 4) != 0)) {
        character_select_demo_limit(iVar4);
        Function_82514910();
      }
      Function_82520728();
      Function_8251C4A0(param_1,dVar2);
      iVar4 = FUN_8261eec0(iVar17,selection_owner_slot_candidate);
      if (iVar4 != 0) {
        uVar16 = Function_8261FF68(iVar17);
        *(int *)(iVar4 + 0x14) = (int)uVar16;
      }
      iVar4 = FUN_8261eec0(iVar17,dVar2);
      if (iVar4 != 0) {
        uVar16 = Function_8261FF68(iVar17);
        *(int *)(iVar4 + 0x14) = (int)uVar16;
      }
    }
  }
  else if ((param_1[0x1f] == 2) && (dVar2 == param_2)) {
    Function_8250F178(dVar2,DAT_83e6c578);
    uVar3 = Function_821CA310();
    iVar17 = *(int *)((int)uVar3 + 0x20);
    iVar4 = FUN_8261eec0(iVar17,selection_owner_slot_candidate);
    if (iVar4 != 0) {
      uVar16 = Function_8261FF68(iVar17);
      *(int *)(iVar4 + 0x14) = (int)uVar16;
    }
    iVar4 = FUN_8261eec0(iVar17,dVar2);
    if (iVar4 != 0) {
      uVar16 = Function_8261FF68(iVar17);
      *(int *)(iVar4 + 0x14) = (int)uVar16;
    }
  }
  return;
}

