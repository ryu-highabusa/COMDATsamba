
void FUN_016df6f0(long param_1,char param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  byte *pbVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  dword *pdVar10;
  long lVar11;
  byte bVar12;
  
  lVar1 = param_1 + 0x140;
  FUN_0158f080(lVar1,0x1f);
  FUN_0158f080(lVar1,0x20);
  bVar12 = (byte)*(undefined4 *)(param_1 + 0xb8);
  if (param_2 == '\0') {
    lVar5 = FUN_019e9e10(param_1,bVar12,0xd);
  }
  else {
    lVar5 = FUN_019e9d90(param_1,bVar12,0xd);
  }
  if (lVar5 == 0) {
    return;
  }
  plVar8 = (long *)(lVar5 + 0x10);
  if (param_2 == '\0') {
    plVar8 = (long *)(lVar5 + 8);
  }
  if (*plVar8 == 0) {
    return;
  }
  uVar2 = *(uint *)(*plVar8 + 0x14);
  if (uVar2 == 0xff) {
    return;
  }
  if (*(char *)(param_1 + 0xbc) == '\0') {
    lVar9 = 0;
    lVar11 = lVar9;
    if (uVar2 == 0x21) {
      do {
        if (lVar11 == 6) {
          iVar4 = FUN_01758e50(0,0x21);
          lVar9 = 6;
          if ((char)iVar4 != '\0') goto LAB_016df845;
          iVar4 = FUN_01758e50(1,0x21);
          lVar9 = 6;
          if ((char)iVar4 != '\0') goto LAB_016df845;
        }
        lVar11 = lVar11 + 1;
        if (0x1d < (uint)lVar11) {
          return;
        }
      } while( true );
    }
    uVar7 = *(uint *)(param_1 + 0xb8);
    pdVar10 = &SingleStage_ID_MAX;
    while ((*pdVar10 != uVar2 || (iVar4 = FUN_01758e50((ulong)uVar7,uVar2), (char)iVar4 == '\0'))) {
      pdVar10 = pdVar10 + 1;
      lVar9 = lVar9 + 1;
      if (0x1d < (uint)lVar9) {
        return;
      }
    }
LAB_016df845:
    pbVar6 = &DAT_01fb8450 + lVar9;
  }
  else {
    uVar7 = 0;
    pbVar6 = &DAT_01fb8437;
    pdVar10 = &TagStage_ID_MAX;
    do {
      if (9 < uVar7) {
        return;
      }
      pbVar6 = pbVar6 + 1;
      uVar7 = uVar7 + 1;
      uVar3 = *pdVar10;
      pdVar10 = pdVar10 + 1;
    } while (uVar3 != uVar2);
  }
  if ((1 < *pbVar6) && (*(long *)(lVar5 + 0x20) != 0)) {
    FUN_01590bd0(lVar1,0x1f,*(int *)(*(long *)(lVar5 + 0x20) + 0x18),0x153);
    return;
  }
  return;
}

