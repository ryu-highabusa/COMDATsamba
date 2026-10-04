
void FUN_016dfa70(long param_1,uint param_2)

{
  byte bVar1;
  dword dVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  long lVar6;
  dword *pdVar7;
  long lVar8;
  
  if (*(char *)(param_1 + 0xbc) == '\0') {
    lVar6 = 0;
    lVar8 = lVar6;
    if (param_2 == 0x21) {
      do {
        if (lVar8 == 6) {
          iVar3 = FUN_01758e50(0,0x21);
          lVar6 = 6;
          if ((char)iVar3 != '\0') goto LAB_016dfb4e;
          iVar3 = FUN_01758e50(1,0x21);
          lVar6 = 6;
          if ((char)iVar3 != '\0') goto LAB_016dfb4e;
        }
        lVar8 = lVar8 + 1;
      } while ((uint)lVar8 < 0x1e);
    }
    else {
      uVar5 = *(uint *)(param_1 + 0xb8);
      pdVar7 = &SingleStage_ID_MAX;
      do {
        if ((*pdVar7 == param_2) &&
           (iVar3 = FUN_01758e50((ulong)uVar5,param_2), (char)iVar3 != '\0')) goto LAB_016dfb4e;
        pdVar7 = pdVar7 + 1;
        lVar6 = lVar6 + 1;
      } while ((uint)lVar6 < 0x1e);
    }
LAB_016dfb41:
    *(undefined1 *)(param_1 + 0x12f) = 1;
    goto LAB_016dfb75;
  }
  uVar5 = 0;
  pbVar4 = &DAT_01fb8437;
  pdVar7 = &TagStage_ID_MAX;
  do {
    if (9 < uVar5) goto LAB_016dfb41;
    pbVar4 = pbVar4 + 1;
    uVar5 = uVar5 + 1;
    dVar2 = *pdVar7;
    pdVar7 = pdVar7 + 1;
  } while (dVar2 != param_2);
  goto LAB_016dfb58;
LAB_016dfb4e:
  pbVar4 = &DAT_01fb8450 + lVar6;
LAB_016dfb58:
  bVar1 = *pbVar4;
  *(byte *)(param_1 + 0x12f) = bVar1;
  if (bVar1 == 2) {
    *(undefined2 *)(param_1 + 300) = 0x100;
    return;
  }
  if (bVar1 != 1) {
    if (bVar1 < 3) {
      return;
    }
    *(undefined1 *)(param_1 + 300) = 0;
    *(undefined1 *)(param_1 + 0x12d) = 1;
    *(undefined1 *)(param_1 + 0x12e) = 2;
    *(byte *)(param_1 + 299) = bVar1 - 1;
    *(byte *)(param_1 + 0x12a) = bVar1 - 2;
    return;
  }
LAB_016dfb75:
  *(undefined1 *)(param_1 + 300) = 0;
  return;
}

