
/* WARNING: Heritage AFTER dead removal. Example location: r3 : 0x8251dbd0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_8251db64(void)

{
  bool bVar1;
  char cVar2;
  dword *pdVar3;
  dword dVar4;
  dword dVar5;
  char in_r3;
  int *piVar7;
  int iVar8;
  undefined8 uVar6;
  uint uVar10;
  ulonglong uVar9;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int *piVar14;
  char cVar15;
  int iVar16;
  char unaff_r23;
  int *unaff_r27;
  char *unaff_r28;
  ulonglong uVar17;
  code *in_CTR;
  
  (*in_CTR)();
  if ((in_r3 != '\0') && (Function_82520908(), unaff_r27[0x1f] == 3)) {
    uVar10 = *(uint *)(unaff_r28 + 9);
    piVar7 = FUN_826219d0((int)unaff_r27,uVar10);
    if ((piVar7 != (int *)0x0) && (((int *)piVar7[1] != (int *)0x0 && (*(int *)piVar7[1] == 4)))) {
      iVar8 = Function_826242F0((int)unaff_r27,uVar10);
      uVar6 = character_select_demo_limit(iVar8);
      uVar6 = FUN_82513508(uVar6,uVar6);
      in_r3 = (char)uVar6;
      if ((in_r3 != '\0') && (unaff_r27[0x2f] != 0)) {
        Function_82519A80();
      }
    }
  }
  (**(code **)(*unaff_r27 + 0x40))(unaff_r27,0xb);
  if (in_r3 != '\0') {
    Function_82520908();
  }
  iVar8 = 0;
  uVar6 = Function_821CA310();
  if (0 < *(int *)((int)uVar6 + 0x58)) {
    do {
      Function_8251C220(unaff_r27);
      iVar8 = iVar8 + 1;
      uVar6 = Function_821CA310();
    } while (iVar8 < *(int *)((int)uVar6 + 0x58));
  }
  Function_8251A120();
  Function_8251A120();
  uVar6 = Function_821CA310();
  iVar8 = *(int *)((int)uVar6 + 0x20);
  uVar11 = (ulonglong)*(uint *)(unaff_r28 + 9);
  uVar9 = 0;
  uVar17 = (ulonglong)DWORD_829aac40;
  uVar13 = 0xffffffff83f8def0;
  uVar12 = 0xffffffff82b59ac8;
  do {
    cVar15 = '\0';
    if ((unaff_r27[0x1f] == 0) || (unaff_r27[0x1f] == 2)) {
      if ((uVar11 & 0xffffffff) != (uVar9 & 0xffffffff)) {
        bVar1 = uVar17 == (uVar9 & 0xffffffff);
        goto LAB_8251dcc0;
      }
    }
    else {
      bVar1 = (uVar11 & 0xffffffff) == (uVar9 & 0xffffffff);
LAB_8251dcc0:
      if (!bVar1) {
        cVar15 = unaff_r23;
      }
    }
    cVar2 = *(char *)((int)uVar9 + (int)uVar12);
    iVar16 = (int)cVar2;
    if (cVar2 == '\x05') {
      iVar16 = *(int *)((int)uVar13 + 0xd0c);
    }
    if (((*(char *)(iVar16 * 600 + (int)uVar13 + 0x58) != '\0') && (cVar15 != '\0')) &&
       (iVar16 = FUN_8261eec0(iVar8,(int)uVar9), iVar16 != 0)) {
      *(char *)(iVar16 + 0x9a) = unaff_r23;
    }
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 4);
  if (*(char *)(unaff_r27 + 0x1a) != '\0') {
    piVar7 = *(int **)(iVar8 + 0x54);
    piVar14 = piVar7 + *(int *)(iVar8 + 0x4c);
    for (; piVar7 < piVar14; piVar7 = piVar7 + 1) {
      iVar16 = *piVar7;
      if ((iVar16 != 0) && ((ulonglong)*(uint *)(iVar16 + 4) == (uVar11 & 0xffffffff))) {
        *(char *)(iVar16 + 0x9a) = unaff_r23;
        break;
      }
    }
    piVar7 = *(int **)(iVar8 + 0x54);
    piVar14 = piVar7 + *(int *)(iVar8 + 0x4c);
    for (; piVar7 < piVar14; piVar7 = piVar7 + 1) {
      iVar16 = *piVar7;
      if ((iVar16 != 0) && (*(uint *)(iVar16 + 4) == uVar17)) {
        *(char *)(iVar16 + 0x9a) = unaff_r23;
        break;
      }
    }
    (**(code **)(*unaff_r27 + 0x40))(unaff_r27,0x18);
    if ((char)uVar6 != '\0') {
      if (*(char *)((int)unaff_r27 + 0x89) != '\0') {
        Function_821CA6D8();
        Function_821C5E90();
                    /* WARNING: Subroutine does not return */
        Function_821C96D0();
      }
      if (unaff_r23 != '\0') {
        uVar6 = Function_821CA6D8();
        iVar16 = (int)uVar6;
        uVar10 = *(uint *)(iVar16 + 100);
        if ((uVar10 >> 2 & 1) != 0) {
          *(uint *)(iVar16 + 100) = uVar10 & 0xfffffffb;
          *(uint *)(iVar16 + 100) = uVar10 & 0xfffffffb | 8;
        }
        *(undefined1 *)(unaff_r27 + 0x1a) = 0;
        uVar6 = Function_821CA310();
        iVar16 = FUN_8261eec0(*(int *)((int)uVar6 + 0x20),0);
        if (iVar16 != 0) {
          *(undefined1 *)(iVar16 + 0x9a) = 0;
        }
        if (unaff_r27[0x1f] == 0) {
          uVar9 = (ulonglong)*(uint *)(unaff_r28 + 9);
          iVar16 = FUN_8261eec0(iVar8,*(uint *)(unaff_r28 + 9));
          if (iVar16 != 0) {
            *(undefined1 *)(iVar16 + 0x9a) = 0;
          }
          uVar11 = (ulonglong)DWORD_829aac40;
          iVar16 = FUN_8261eec0(iVar8,DWORD_829aac40);
          if (iVar16 != 0) {
            *(undefined1 *)(iVar16 + 0x9a) = 0;
          }
          uVar17 = 0;
          do {
            if ((((uVar17 & 0xffffffff) != (uVar9 & 0xffffffff)) &&
                ((uVar17 & 0xffffffff) != (uVar11 & 0xffffffff))) &&
               (iVar16 = FUN_8261eec0(iVar8,(int)uVar17), iVar16 != 0)) {
              *(char *)(iVar16 + 0x9a) = unaff_r23;
            }
            uVar17 = uVar17 + 1;
          } while ((uVar17 & 0xffffffff) < 4);
        }
        else {
          uVar9 = (ulonglong)*(uint *)(unaff_r28 + 9);
          iVar16 = FUN_8261eec0(iVar8,*(uint *)(unaff_r28 + 9));
          if (iVar16 != 0) {
            *(undefined1 *)(iVar16 + 0x9a) = 0;
          }
          uVar11 = 0;
          do {
            if (((uVar11 & 0xffffffff) != (uVar9 & 0xffffffff)) &&
               (iVar16 = FUN_8261eec0(iVar8,(int)uVar11), iVar16 != 0)) {
              *(char *)(iVar16 + 0x9a) = unaff_r23;
            }
            uVar11 = uVar11 + 1;
          } while ((uVar11 & 0xffffffff) < 4);
        }
        (**(code **)(*unaff_r27 + 0x34))(unaff_r27,0x19);
      }
    }
  }
  if (*(char *)((int)unaff_r27 + 0x69) != '\0') {
    Function_821CA538(1);
    (**(code **)(*unaff_r27 + 0x40))(unaff_r27,0x22);
    if ((char)uVar6 != '\0') {
      *(undefined1 *)((int)unaff_r27 + 0x69) = 0;
      uVar6 = Function_821CA310();
      iVar8 = FUN_8261eec0(*(int *)((int)uVar6 + 0x20),0);
      if (iVar8 != 0) {
        *(undefined1 *)(iVar8 + 0x9a) = 0;
      }
      *unaff_r28 = unaff_r23;
      Function_8251B988();
      uVar6 = Function_821D1F58();
      iVar8 = *(int *)((int)uVar6 + 0x14);
      if ((iVar8 < 4) || ((5 < iVar8 && (iVar8 != 7)))) {
        uVar6 = Function_821D1F58();
        *(undefined4 *)((int)uVar6 + 0xc) = 5;
        Function_8251CF08();
      }
      else {
        uVar6 = Function_821D1F58();
        *(undefined4 *)((int)uVar6 + 0xc) = 0xffffffff;
        Function_821CA6D8();
        Function_82506538();
      }
    }
  }
  iVar8 = 0;
  uVar6 = Function_821CA310();
  if (0 < *(int *)((int)uVar6 + 0x58)) {
    do {
      Function_82519D90();
      iVar8 = iVar8 + 1;
      uVar6 = Function_821CA310();
    } while (iVar8 < *(int *)((int)uVar6 + 0x58));
  }
  Function_8251B8C0();
  uVar9 = (ulonglong)(uint)unaff_r27[0x28];
  if (0 < unaff_r27[0x28]) {
    iVar8 = 0;
    do {
      if (*(int *)(iVar8 + unaff_r27[0x2a]) != 0) {
        Function_82515AE0();
      }
      uVar9 = uVar9 - 1;
      iVar8 = iVar8 + 4;
    } while (uVar9 != 0);
  }
  uVar9 = (ulonglong)(uint)unaff_r27[0x2c];
  if (0 < unaff_r27[0x2c]) {
    iVar8 = 0;
    do {
      if (((*(int *)(unaff_r27[0x2e] + iVar8) != 0) &&
          (Function_82517610(), *(char *)(unaff_r27 + 0x1a) != '\0')) &&
         ((0x27 < (uint)unaff_r27[0x21] && (*(int *)(unaff_r27[0x26] + iVar8) != 0)))) {
        iVar16 = *(int *)(*(int *)(unaff_r27[0x26] + iVar8) + 0xc);
        if ((iVar16 == 2) || (cVar15 = '\0', iVar16 == 3)) {
          cVar15 = unaff_r23;
        }
        if (cVar15 != '\0') {
          Function_82517C68();
        }
      }
      uVar9 = uVar9 - 1;
      iVar8 = iVar8 + 4;
    } while (uVar9 != 0);
  }
  if (unaff_r27[0x1f] == 3) {
    iVar8 = 0;
    uVar6 = Function_821CA310();
    if (0 < *(int *)((int)uVar6 + 0x58)) {
      do {
        if (unaff_r27[0x2f] != 0) {
          Function_82519898();
        }
        iVar8 = iVar8 + 1;
        uVar6 = Function_821CA310();
      } while (iVar8 < *(int *)((int)uVar6 + 0x58));
    }
  }
  dVar5 = DAT_83b6d9d4;
  piVar7 = (int *)unaff_r27[0x17];
  piVar14 = piVar7 + unaff_r27[0x15];
  for (; piVar7 < piVar14; piVar7 = piVar7 + 1) {
    pdVar3 = (dword *)*piVar7;
    if ((pdVar3 != (dword *)0x0) && (*pdVar3 == DAT_83b6d9d4)) {
      if ((int *)pdVar3[1] != (int *)0x0) {
        if (*(int *)pdVar3[1] == 4) {
          *(char *)(*(int *)(unaff_r27[0x43] + 4) + 0xf2) = unaff_r23;
        }
        else {
          *(undefined1 *)(*(int *)(unaff_r27[0x43] + 4) + 0xf2) = 0;
        }
      }
      break;
    }
  }
  dVar4 = DWORD_829aac40;
  cVar15 = '\0';
  if ((unaff_r27[0x1f] != 0) && (DWORD_829aac40 == dVar5)) {
    cVar15 = unaff_r23;
  }
  if ((cVar15 != '\0') || (uVar6 = Function_825142E8(dVar5), (int)uVar6 != -1)) {
    Function_8252D848();
  }
  dVar5 = DAT_83b6d9d8;
  piVar7 = (int *)unaff_r27[0x17];
  piVar14 = piVar7 + unaff_r27[0x15];
  do {
    if (piVar14 <= piVar7) {
LAB_8251e2a0:
      cVar15 = '\0';
      if ((unaff_r27[0x1f] != 0) && (dVar4 == dVar5)) {
        cVar15 = unaff_r23;
      }
      if (cVar15 == '\0') {
        uVar6 = Function_825142E8(dVar5);
        if ((int)uVar6 != -1) {
          Function_8252D848();
        }
      }
      else {
        Function_8252D848();
      }
      return;
    }
    pdVar3 = (dword *)*piVar7;
    if ((pdVar3 != (dword *)0x0) && (*pdVar3 == DAT_83b6d9d8)) {
      if ((int *)pdVar3[1] != (int *)0x0) {
        if (*(int *)pdVar3[1] == 4) {
          *(char *)(*(int *)(unaff_r27[0x47] + 4) + 0xf2) = unaff_r23;
        }
        else {
          *(undefined1 *)(*(int *)(unaff_r27[0x47] + 4) + 0xf2) = 0;
        }
      }
      goto LAB_8251e2a0;
    }
    piVar7 = piVar7 + 1;
  } while( true );
}

