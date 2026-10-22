
void FUN_82541910(int param_1)

{
  ulonglong uVar1;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar2;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  
  Menu_LoadDefinition();
  for (piVar9 = *(int **)(param_1 + 0x2c);
      piVar9 < (int *)(*(int *)(param_1 + 0x24) * 4 + *(int *)(param_1 + 0x2c)); piVar9 = piVar9 + 1
      ) {
    if (*piVar9 != 0) {
      *(undefined4 *)(*piVar9 + 0xc) = 1;
    }
  }
  uVar1 = Function_826200F0(0x1a20);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = Function_8253DB88();
  }
  *(int *)(param_1 + 0x84) = iVar3;
  FUN_8253e4b0(iVar3);
  uVar1 = Function_826200F0(0x1870);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = Function_8253F6B8();
  }
  *(int *)(param_1 + 0x88) = iVar3;
  FUN_8253fdf0(iVar3);
  uVar1 = Function_826200F0(0x730);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = Function_82540CD8();
  }
  *(undefined4 *)(param_1 + 0x8c) = uVar4;
  if (*(int *)(param_1 + 0x84) != 0) {
    lVar5 = 0;
    lVar7 = 0;
    lVar8 = 0x1830;
    do {
      iVar3 = Menu_GetItemByIndex(param_1,0xb,(int)lVar5);
      if (iVar3 != 0) {
        if ((int)lVar5 < 5) {
          uVar2 = FUN_8253d9a0(*(undefined4 *)(iVar3 + 4));
          *(int *)((int)lVar7 + *(int *)(param_1 + 0x84) + 0x8e0) = (int)uVar2;
        }
        uVar2 = MainMenu_IsDemoLocked(*(undefined4 *)(iVar3 + 4));
        iVar6 = (int)lVar5;
        if ((char)uVar2 == '\0') {
LAB_82541a3c:
          if (iVar6 < 5) {
            uVar2 = FUN_8253d7d8(*(undefined4 *)(iVar3 + 4));
            *(int *)((int)lVar8 + *(int *)(param_1 + 0x84) + 0x14) = (int)uVar2;
          }
        }
        else if (iVar6 < 5) {
          *(undefined1 *)(iVar6 + *(int *)(param_1 + 0x84) + 2000) = 1;
          goto LAB_82541a3c;
        }
        iVar3 = *(int *)(iVar3 + 4);
        uVar4 = 0x210001;
        if ((iVar3 - 0x38U < 5) && (iVar3 != 0x39)) {
          if (iVar3 == 0x3a) {
            uVar4 = 0x210005;
          }
          else if (iVar3 == 0x3b) {
            uVar4 = 0x210004;
          }
          else if (iVar3 == 0x38) {
            uVar4 = 0x210002;
          }
          else {
            uVar4 = 0x210003;
          }
        }
        if ((int)lVar5 < 5) {
          *(undefined4 *)((int)lVar8 + *(int *)(param_1 + 0x84)) = uVar4;
        }
      }
      lVar8 = lVar8 + 4;
      lVar5 = lVar5 + 1;
      lVar7 = lVar7 + 0x110;
    } while ((int)lVar8 < 0x1844);
  }
  return;
}

