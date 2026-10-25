
int FUN_82517830(int param_1)

{
  bool bVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  Function_825B6D50(param_1 + 0x230);
  uVar2 = Function_82507D60(4);
  if ((uVar2 & 0xffffffff) != 0) {
    for (uVar5 = 0; uVar5 < *(uint *)((int)uVar2 + 0x279c); uVar5 = uVar5 + 1) {
      if (*(char *)(param_1 + 0xc) == *(char *)(*(int *)((int)uVar2 + 0x27a4) + uVar5)) {
        bVar1 = true;
        goto LAB_82517894;
      }
    }
    bVar1 = false;
LAB_82517894:
    if ((!bVar1) && (uVar3 = FUN_82514478(*(charids *)(param_1 + 0xc)), (int)uVar3 != 0x139)) {
      Function_82504FD8();
      uVar3 = Function_82340AB8(uVar3);
      if ((char)uVar3 == '\0') {
        Function_82514410(param_1 + 0x120);
      }
    }
  }
  if (*(char *)(param_1 + 0xd) != '\0') {
    iVar4 = 0;
    do {
      Function_825B8468();
      iVar6 = 0;
      do {
        Function_825B8468();
        iVar6 = iVar6 + 1;
      } while (iVar6 < 5);
      iVar4 = iVar4 + 5;
    } while (iVar4 < 0x1e);
    if (*(char *)(param_1 + 0x522) != '\0') {
      Function_825B6A48();
    }
  }
  iVar4 = param_1 + 0x330;
  if (*(char *)(param_1 + 0x422) != '\0') {
    iVar4 = Function_825B6A48();
  }
  return iVar4;
}

