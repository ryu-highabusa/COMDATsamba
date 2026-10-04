
void __fastcall FUN_00b28060(void *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = FUN_00bd6a70(param_1,0xd);
  iVar4 = 0;
  uVar3 = 0;
  if (*(char *)((int)param_1 + 0x84) == '\0') {
    if (0 < iVar1) {
      do {
        iVar2 = FUN_00bd7770(param_1,0xd,iVar4);
        if ((iVar2 != 0) && (uVar3 < 0x19)) {
          *(UINT32 *)(iVar2 + 0x10) = (&SingleStage_ID_MAX)[uVar3];
          iVar4 = iVar4 + 1;
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < iVar1);
    }
  }
  else if (0 < iVar1) {
    do {
      iVar2 = FUN_00bd7770(param_1,0xd,iVar4);
      if ((iVar2 != 0) && (uVar3 < 10)) {
        *(UINT32 *)(iVar2 + 0x10) = (&TagStage_ID_MAX)[uVar3];
        iVar4 = iVar4 + 1;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar1);
    return;
  }
  return;
}

