
bool FUN_016e2d60(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  dword *pdVar6;
  char cVar7;
  long lVar8;
  char cVar9;
  bool bVar10;
  
  bVar10 = false;
  if (((param_2 != 0) && (*(long *)(param_2 + 8) != 0)) &&
     (uVar1 = *(uint *)(*(long *)(param_2 + 8) + 0x14), uVar1 != 0xff)) {
    if (*(char *)(param_1 + 0xbc) == '\0') {
      uVar5 = *(uint *)(param_1 + 0xb8);
      lVar8 = 0;
      pdVar6 = &SingleStage_ID_MAX;
      cVar7 = '\x01';
      do {
        if (*pdVar6 == uVar1) {
          if (uVar1 == 0x21) {
            iVar3 = FUN_01758e50(0,0x21);
            cVar9 = '\x01';
            if ((char)iVar3 == '\0') {
              iVar3 = FUN_01758e50(1,0x21);
              cVar9 = (char)iVar3 != '\0';
            }
          }
          else {
            iVar3 = FUN_01758e50((ulong)uVar5,uVar1);
            cVar9 = (char)iVar3;
          }
          if (cVar9 != '\0') {
            cVar7 = (&DAT_01fb8450)[lVar8];
            break;
          }
        }
        pdVar6 = pdVar6 + 1;
        lVar8 = lVar8 + 1;
      } while ((uint)lVar8 < 0x1e);
    }
    else {
      uVar5 = 0;
      pcVar4 = "";
      pdVar6 = &TagStage_ID_MAX;
      cVar7 = '\x01';
      do {
        if (9 < uVar5) goto LAB_016e2e69;
        pcVar4 = pcVar4 + 1;
        uVar5 = uVar5 + 1;
        uVar2 = *pdVar6;
        pdVar6 = pdVar6 + 1;
      } while (uVar2 != uVar1);
      cVar7 = *pcVar4;
    }
LAB_016e2e69:
    bVar10 = cVar7 != '\x01';
  }
  return bVar10;
}

