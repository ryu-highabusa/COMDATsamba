
void FUN_8251eba8(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  uint *puVar3;
  int *piVar4;
  dword dVar5;
  undefined8 uVar6;
  int iVar8;
  ulonglong uVar7;
  undefined4 uVar9;
  int *piVar11;
  longlong lVar10;
  undefined1 *puVar12;
  dword *pdVar13;
  int *piVar14;
  uint uVar15;
  
  if (((param_2 != -1) && (param_2 != 0)) && (param_2 != 5)) {
    uVar6 = Function_821CA6D8();
    *(int *)((int)uVar6 + 0x5c) = param_2;
  }
  Function_821D2F98();
  *(undefined4 *)(param_1 + 0x27b8) = 0;
  DAT_83b6d9d4 = 8;
  DAT_83b6d9d8 = 8;
  DAT_83b6d9dc = 8;
  DAT_83b6d9e0 = 8;
  selection_owner_slot_candidate = 0;
  DWORD_829aac40 = 1;
  bVar2 = false;
  uVar6 = Function_821CA6D8();
  uVar15 = *(uint *)((int)uVar6 + 0x58);
  if (uVar15 == 0) {
    bVar2 = active_slot_0 == '\0';
    if (bVar2) {
      DWORD_829aac40 = 0;
    }
    else {
      selection_owner_slot_candidate = 0;
    }
    bVar1 = !bVar2;
    DAT_83b6d9d4 = 0;
    if (active_slot_1 == '\0') {
      if (!bVar2) {
        DWORD_829aac40 = 1;
        bVar2 = true;
        goto LAB_8251ee9c;
      }
    }
    else if (!bVar1) {
      selection_owner_slot_candidate = 1;
      bVar1 = true;
LAB_8251ee9c:
      DAT_83b6d9d8 = 1;
    }
    if (active_slot_2 == '\0') {
      if (!bVar2) {
        bVar2 = true;
        DWORD_829aac40 = 2;
        goto LAB_8251eee0;
      }
    }
    else if (!bVar1) {
      bVar1 = true;
      selection_owner_slot_candidate = 2;
LAB_8251eee0:
      DAT_83b6d9dc = 2;
    }
    if (active_slot_3 != '\0') {
      if (!bVar1) {
        selection_owner_slot_candidate = 3;
        DAT_83b6d9e0 = 3;
      }
      goto LAB_8251ef18;
    }
  }
  else if (uVar15 == 1) {
    bVar1 = active_slot_0 != '\0';
    if (bVar1) {
      selection_owner_slot_candidate = 0;
      DAT_83b6d9d4 = 0;
    }
    if (active_slot_1 != '\0') {
      DAT_83b6d9d8 = 1;
      if (bVar1) {
        DWORD_829aac40 = 1;
        bVar2 = true;
      }
      else {
        selection_owner_slot_candidate = 1;
        bVar1 = true;
      }
    }
    if (active_slot_2 != '\0') {
      if (bVar1) {
        if (bVar2) goto LAB_8251edd4;
        bVar2 = true;
        DWORD_829aac40 = 2;
      }
      else {
        bVar1 = true;
        selection_owner_slot_candidate = 2;
      }
      DAT_83b6d9dc = 2;
    }
LAB_8251edd4:
    if (active_slot_3 == '\0') goto LAB_8251ef18;
    if (!bVar1) {
      selection_owner_slot_candidate = 3;
      DAT_83b6d9e0 = 3;
      goto LAB_8251ef18;
    }
  }
  else {
    if (2 < uVar15) goto LAB_8251ef18;
    bVar1 = active_slot_0 != '\0';
    if (bVar1) {
      selection_owner_slot_candidate = 0;
      DAT_83b6d9d4 = 0;
    }
    if (active_slot_1 != '\0') {
      DAT_83b6d9d8 = 1;
      if (bVar1) {
        DWORD_829aac40 = 1;
        bVar2 = true;
      }
      else {
        selection_owner_slot_candidate = 1;
        bVar1 = true;
      }
    }
    if (active_slot_2 != '\0') {
      if (bVar1) {
        if (bVar2) goto LAB_8251ecf8;
        bVar2 = true;
        DWORD_829aac40 = 2;
      }
      else {
        bVar1 = true;
        selection_owner_slot_candidate = 2;
      }
      DAT_83b6d9dc = 2;
    }
LAB_8251ecf8:
    if (active_slot_3 == '\0') goto LAB_8251ef18;
    if (!bVar1) {
      selection_owner_slot_candidate = 3;
      DAT_83b6d9e0 = 3;
      goto LAB_8251ef18;
    }
  }
  if (!bVar2) {
    DAT_83b6d9e0 = 3;
    DWORD_829aac40 = 3;
  }
LAB_8251ef18:
  dVar5 = selection_owner_slot_candidate;
  iVar8 = 0;
  pdVar13 = &DAT_83b6d9d4;
  do {
    if (*pdVar13 == selection_owner_slot_candidate) {
      if (iVar8 == 0) {
        uVar6 = Function_821CA408();
        iVar8 = FUN_8261eec0((int)uVar6,dVar5);
        if (iVar8 == 0) goto LAB_8251efbc;
        puVar12 = &LAB_82507ec0;
        goto LAB_8251efb8;
      }
      break;
    }
    pdVar13 = pdVar13 + 1;
    iVar8 = iVar8 + 1;
  } while ((int)pdVar13 < -0x7c49261c);
  iVar8 = 0;
  pdVar13 = &DAT_83b6d9d4;
  do {
    if (*pdVar13 == selection_owner_slot_candidate) {
      if (iVar8 == 1) {
        uVar6 = Function_821CA408();
        iVar8 = FUN_8261eec0((int)uVar6,dVar5);
        if (iVar8 != 0) {
          puVar12 = &LAB_82507ed0;
LAB_8251efb8:
          *(undefined1 **)(iVar8 + 0x9c) = puVar12;
        }
      }
      break;
    }
    pdVar13 = pdVar13 + 1;
    iVar8 = iVar8 + 1;
  } while ((int)pdVar13 < -0x7c49261c);
LAB_8251efbc:
  dVar5 = DWORD_829aac40;
  iVar8 = 0;
  pdVar13 = &DAT_83b6d9d4;
  do {
    if (*pdVar13 == DWORD_829aac40) {
      if (iVar8 == 0) {
        uVar6 = Function_821CA408();
        iVar8 = FUN_8261eec0((int)uVar6,dVar5);
        if (iVar8 == 0) goto LAB_8251f070;
        puVar12 = &LAB_82507ec0;
        goto LAB_8251f06c;
      }
      break;
    }
    pdVar13 = pdVar13 + 1;
    iVar8 = iVar8 + 1;
  } while ((int)pdVar13 < -0x7c49261c);
  iVar8 = 0;
  pdVar13 = &DAT_83b6d9d4;
  do {
    if (*pdVar13 == DWORD_829aac40) {
      if (iVar8 == 1) {
        uVar6 = Function_821CA408();
        iVar8 = FUN_8261eec0((int)uVar6,dVar5);
        if (iVar8 != 0) {
          puVar12 = &LAB_82507ed0;
LAB_8251f06c:
          *(undefined1 **)(iVar8 + 0x9c) = puVar12;
        }
      }
      break;
    }
    pdVar13 = pdVar13 + 1;
    iVar8 = iVar8 + 1;
  } while ((int)pdVar13 < -0x7c49261c);
LAB_8251f070:
  uVar15 = 0;
  do {
    iVar8 = 0;
    pdVar13 = &DAT_83b6d9d4;
    do {
      if (*pdVar13 == uVar15) {
        if (iVar8 == 0) {
          uVar6 = FUN_8251c858(param_1);
          iVar8 = (int)uVar6;
          goto LAB_8251f0ec;
        }
        break;
      }
      pdVar13 = pdVar13 + 1;
      iVar8 = iVar8 + 1;
    } while ((int)pdVar13 < -0x7c49261c);
    iVar8 = 0;
    pdVar13 = &DAT_83b6d9d4;
    do {
      if (*pdVar13 == uVar15) {
        if (iVar8 == 1) {
          uVar6 = FUN_8251c880(param_1);
          iVar8 = (int)uVar6;
LAB_8251f0ec:
          Function_82623108(param_1,uVar15,iVar8);
        }
        break;
      }
      pdVar13 = pdVar13 + 1;
      iVar8 = iVar8 + 1;
    } while ((int)pdVar13 < -0x7c49261c);
    uVar15 = uVar15 + 1;
  } while (uVar15 < 4);
  piVar14 = *(int **)(param_1 + 0x5c);
  piVar11 = piVar14 + *(int *)(param_1 + 0x54);
  for (; piVar14 < piVar11; piVar14 = piVar14 + 1) {
    puVar3 = (uint *)*piVar14;
    if ((puVar3 != (uint *)0x0) && (*puVar3 == DAT_83b6d9d4)) {
      if ((int *)puVar3[1] != (int *)0x0) {
        iVar8 = *(int *)puVar3[1];
        goto LAB_8251f164;
      }
      break;
    }
  }
  iVar8 = -1;
LAB_8251f164:
  piVar14 = *(int **)(param_1 + 0x2c);
  piVar11 = piVar14 + *(int *)(param_1 + 0x24);
  for (; piVar14 < piVar11; piVar14 = piVar14 + 1) {
    piVar4 = (int *)*piVar14;
    if ((piVar4 != (int *)0x0) && (iVar8 == *piVar4)) {
      FUN_826202d8(1 << (DAT_83b6d9d4 & 0x3f),(int)(piVar4 + 10));
      break;
    }
  }
  Function_8251C8B0();
  for (piVar14 = *(int **)(param_1 + 0x5c);
      piVar14 < (int *)(*(int *)(param_1 + 0x54) * 4 + *(int *)(param_1 + 0x5c));
      piVar14 = piVar14 + 1) {
    puVar3 = (uint *)*piVar14;
    if ((puVar3 != (uint *)0x0) && (*puVar3 == DAT_83b6d9d8)) {
      if ((int *)puVar3[1] != (int *)0x0) {
        iVar8 = *(int *)puVar3[1];
        goto LAB_8251f220;
      }
      break;
    }
  }
  iVar8 = -1;
LAB_8251f220:
  piVar14 = *(int **)(param_1 + 0x2c);
  piVar11 = piVar14 + *(int *)(param_1 + 0x24);
  for (; piVar14 < piVar11; piVar14 = piVar14 + 1) {
    piVar4 = (int *)*piVar14;
    if ((piVar4 != (int *)0x0) && (iVar8 == *piVar4)) {
      FUN_826202d8(1 << (DAT_83b6d9d8 & 0x3f),(int)(piVar4 + 10));
      break;
    }
  }
  Function_8251C8B0();
  Function_821CA538(1);
  if (*(char *)(param_1 + 0x80) == '\0') {
    uVar6 = Function_8222AC80();
    Function_8224CD58((undefined4 *)uVar6);
    Function_8251B6E0();
    *(undefined1 *)(param_1 + 0x80) = 1;
  }
  Function_8251BC40();
  for (piVar14 = *(int **)(param_1 + 0x5c);
      piVar14 < (int *)(*(int *)(param_1 + 0x54) * 4 + *(int *)(param_1 + 0x5c));
      piVar14 = piVar14 + 1) {
    puVar3 = (uint *)*piVar14;
    if ((puVar3 != (uint *)0x0) && (*puVar3 == DAT_83b6d9d4)) {
      if ((int *)puVar3[1] != (int *)0x0) {
        iVar8 = *(int *)puVar3[1];
        goto LAB_8251f308;
      }
      break;
    }
  }
  iVar8 = -1;
LAB_8251f308:
  piVar14 = *(int **)(param_1 + 0x2c);
  piVar11 = piVar14 + *(int *)(param_1 + 0x24);
  for (; piVar14 < piVar11; piVar14 = piVar14 + 1) {
    piVar4 = (int *)*piVar14;
    if ((piVar4 != (int *)0x0) && (iVar8 == *piVar4)) {
      iVar8 = FUN_826202d8(1 << (DAT_83b6d9d4 & 0x3f),(int)(piVar4 + 10));
      goto LAB_8251f358;
    }
  }
  iVar8 = 0;
LAB_8251f358:
  uVar6 = character_select_demo_limit(iVar8);
  Function_8251BDE0(param_1,(uint)uVar6,0);
  for (piVar14 = *(int **)(param_1 + 0x5c);
      piVar14 < (int *)(*(int *)(param_1 + 0x54) * 4 + *(int *)(param_1 + 0x5c));
      piVar14 = piVar14 + 1) {
    puVar3 = (uint *)*piVar14;
    if ((puVar3 != (uint *)0x0) && (*puVar3 == DAT_83b6d9d8)) {
      if ((int *)puVar3[1] != (int *)0x0) {
        iVar8 = *(int *)puVar3[1];
        goto LAB_8251f3c4;
      }
      break;
    }
  }
  iVar8 = -1;
LAB_8251f3c4:
  piVar14 = *(int **)(param_1 + 0x2c);
  piVar11 = piVar14 + *(int *)(param_1 + 0x24);
  do {
    if (piVar11 <= piVar14) {
      iVar8 = 0;
LAB_8251f414:
      uVar6 = character_select_demo_limit(iVar8);
      Function_8251BDE0(param_1,(uint)uVar6,1);
      if ((*(int *)(param_1 + 0xa0) != 0) && (**(int **)(param_1 + 0xa8) != 0)) {
        Function_82517480();
      }
      if ((1 < *(uint *)(param_1 + 0xa0)) && (*(int *)(*(int *)(param_1 + 0xa8) + 4) != 0)) {
        Function_82517480();
      }
      uVar7 = Function_826200F0(0x2b80);
      if ((uVar7 & 0xffffffff) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = Function_825131C0();
      }
      lVar10 = (ulonglong)*(uint *)(param_1 + 0xb0) - (ulonglong)*(uint *)(param_1 + 0xb4);
      if (0 < lVar10 + 1) {
        uVar7 = lVar10 + 0x40U & 0xffffffc0;
        uVar6 = Function_82504C68((ulonglong)*(uint *)(param_1 + 0xb8),
                                  (uVar7 + *(uint *)(param_1 + 0xb4) & 0x3fffffff) << 2);
        *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + (int)uVar7;
        *(int *)(param_1 + 0xb8) = (int)uVar6;
      }
      *(undefined4 *)(*(int *)(param_1 + 0xb0) * 4 + *(int *)(param_1 + 0xb8)) = uVar9;
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
      uVar7 = Function_826200F0(0x2b80);
      if ((uVar7 & 0xffffffff) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = Function_825131C0();
      }
      lVar10 = (ulonglong)*(uint *)(param_1 + 0xb0) - (ulonglong)*(uint *)(param_1 + 0xb4);
      if (0 < lVar10 + 1) {
        uVar7 = lVar10 + 0x40U & 0xffffffc0;
        uVar6 = Function_82504C68((ulonglong)*(uint *)(param_1 + 0xb8),
                                  (uVar7 + *(uint *)(param_1 + 0xb4) & 0x3fffffff) << 2);
        *(int *)(param_1 + 0xb4) = (int)uVar7 + *(int *)(param_1 + 0xb4);
        *(int *)(param_1 + 0xb8) = (int)uVar6;
      }
      *(undefined4 *)(*(int *)(param_1 + 0xb0) * 4 + *(int *)(param_1 + 0xb8)) = uVar9;
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
      uVar7 = Function_826200F0(0xf80);
      if ((uVar7 & 0xffffffff) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = Function_825132B0();
      }
      *(undefined4 *)(param_1 + 0xbc) = uVar9;
      if ((DAT_83f93d6c & 1) == 0) {
        DAT_83f93d6c = DAT_83f93d6c | 1;
        FUN_821ca5a0();
        Function_82881338();
      }
      if ((DAT_83f93c7c & 1) != 0) {
        *(undefined1 *)(param_1 + 0x89) = 1;
      }
      return;
    }
    piVar4 = (int *)*piVar14;
    if ((piVar4 != (int *)0x0) && (iVar8 == *piVar4)) {
      iVar8 = FUN_826202d8(1 << (DAT_83b6d9d8 & 0x3f),(int)(piVar4 + 10));
      goto LAB_8251f414;
    }
    piVar14 = piVar14 + 1;
  } while( true );
}

