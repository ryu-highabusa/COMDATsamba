
void FUN_82542ca0(int param_1)

{
  int iVar2;
  undefined8 uVar1;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 *puVar6;
  uint uVar7;
  longlong lVar8;
  
  if (*(int *)(param_1 + 0x80) == 3) {
    return;
  }
  Function_82623108(param_1,0,0x38);
  Function_82623108(param_1,0,0x3e);
  Function_826231E0(param_1,0,0xc);
  iVar2 = FUN_826236d8(param_1,0,0xb);
  lVar5 = 0;
  if (iVar2 == 0) {
    uVar7 = 0;
  }
  else if (*(int *)(iVar2 + 8) == 0) {
    uVar7 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(iVar2 + 8) + 0x14);
    if (iVar2 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(uint *)(iVar2 + 0x2c);
      if (5 < uVar7) goto LAB_82542d40;
    }
  }
  *(uint *)(*(int *)(param_1 + 0x88) + 0x10) = uVar7;
LAB_82542d40:
  iVar2 = *(int *)(param_1 + 0x88);
  iVar4 = 0;
  lVar8 = 6;
  do {
    *(undefined1 *)(iVar2 + 0x5e0 + iVar4) = 0;
    iVar4 = iVar4 + 1;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  puVar6 = (undefined4 *)(*(int *)(param_1 + 0x88) + 0x184c);
  lVar8 = 6;
  do {
    puVar6 = puVar6 + 1;
    *puVar6 = 0xffffffff;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  uVar3 = 0;
  if (uVar7 != 0) {
    lVar8 = 0x1850;
    do {
      iVar2 = Menu_GetItemByIndex(param_1,0xc,(int)uVar3);
      if (iVar2 != 0) {
        if ((int)uVar3 < 6) {
          uVar1 = FUN_8253d9a0(*(undefined4 *)(iVar2 + 4));
          *(int *)((int)lVar5 + *(int *)(param_1 + 0x88) + 0x6f0) = (int)uVar1;
        }
        uVar1 = MainMenu_IsDemoLocked(*(undefined4 *)(iVar2 + 4));
        iVar4 = (int)uVar3;
        if ((char)uVar1 != '\0') {
          if (5 < iVar4) goto LAB_82542e08;
          *(undefined1 *)(*(int *)(param_1 + 0x88) + iVar4 + 0x5e0) = 1;
        }
        if (iVar4 < 6) {
          uVar1 = FUN_8253d7d8(*(undefined4 *)(iVar2 + 4));
          *(int *)((int)lVar8 + *(int *)(param_1 + 0x88)) = (int)uVar1;
        }
      }
LAB_82542e08:
      uVar3 = uVar3 + 1;
      lVar8 = lVar8 + 4;
      lVar5 = lVar5 + 0x110;
    } while ((uVar3 & 0xffffffff) < (ulonglong)uVar7);
  }
  Function_8253F3F0();
  Function_82540A90();
  Function_825412D8();
  *(undefined4 *)(param_1 + 0x80) = 3;
  *(undefined4 *)(*(int *)(param_1 + 0x84) + 4) = 3;
  *(undefined4 *)(*(int *)(param_1 + 0x88) + 4) = 3;
  *(undefined4 *)(*(int *)(param_1 + 0x8c) + 4) = 3;
  return;
}

