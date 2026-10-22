
void FUN_82541770(int param_1,int param_2)

{
  int *piVar1;
  int iVar3;
  undefined8 uVar2;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  
  if (param_2 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x88) == 0) {
    return;
  }
  lVar6 = 0;
  if (*(int *)(param_2 + 8) == 0) {
    uVar8 = 0;
  }
  else {
    iVar9 = *(int *)(*(int *)(param_2 + 8) + 0x14);
    if (iVar9 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(uint *)(iVar9 + 0x2c);
      if (5 < uVar8) goto LAB_825417cc;
    }
  }
  *(uint *)(*(int *)(param_1 + 0x88) + 0x10) = uVar8;
LAB_825417cc:
  iVar9 = -1;
  if ((*(int *)(param_2 + 8) != 0) &&
     (piVar1 = *(int **)(*(int *)(param_2 + 8) + 0x14), piVar1 != (int *)0x0)) {
    iVar9 = *piVar1;
  }
  iVar3 = *(int *)(param_1 + 0x88);
  iVar5 = 0;
  lVar10 = 6;
  do {
    *(undefined1 *)(iVar3 + 0x5e0 + iVar5) = 0;
    iVar5 = iVar5 + 1;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  puVar7 = (undefined4 *)(*(int *)(param_1 + 0x88) + 0x184c);
  lVar10 = 6;
  do {
    puVar7 = puVar7 + 1;
    *puVar7 = 0xffffffff;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  uVar4 = 0;
  if (uVar8 != 0) {
    lVar10 = 0x1850;
    do {
      iVar3 = Menu_GetItemByIndex(param_1,iVar9,(int)uVar4);
      if (iVar3 != 0) {
        if ((int)uVar4 < 6) {
          uVar2 = FUN_8253d9a0(*(undefined4 *)(iVar3 + 4));
          *(int *)((int)lVar6 + *(int *)(param_1 + 0x88) + 0x6f0) = (int)uVar2;
        }
        uVar2 = MainMenu_IsDemoLocked(*(undefined4 *)(iVar3 + 4));
        iVar5 = (int)uVar4;
        if ((char)uVar2 != '\0') {
          if (5 < iVar5) goto LAB_825418b8;
          *(undefined1 *)(*(int *)(param_1 + 0x88) + iVar5 + 0x5e0) = 1;
        }
        if (iVar5 < 6) {
          uVar2 = FUN_8253d7d8(*(undefined4 *)(iVar3 + 4));
          *(int *)((int)lVar10 + *(int *)(param_1 + 0x88)) = (int)uVar2;
        }
      }
LAB_825418b8:
      uVar4 = uVar4 + 1;
      lVar10 = lVar10 + 4;
      lVar6 = lVar6 + 0x110;
    } while ((uVar4 & 0xffffffff) < (ulonglong)uVar8);
  }
  uVar4 = Function_826235B8(param_1,0,iVar9);
  FUN_826238b8(param_1,iVar9,(int)uVar4);
  Function_82540428();
  return;
}

