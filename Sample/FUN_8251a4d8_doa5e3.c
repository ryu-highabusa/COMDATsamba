
void FUN_8251a4d8(int param_1,uint param_2)

{
  dword dVar1;
  int iVar3;
  undefined8 uVar2;
  int iVar4;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  uint *puVar9;
  ulonglong uVar10;
  byte bVar5;
  
  iVar3 = FUN_826236d8(param_1,param_2,4);
  if (iVar3 != 0) {
    uVar2 = character_select_demo_limit(iVar3);
    bVar5 = (byte)uVar2;
    puVar9 = &DAT_83b6d9d4;
    uVar8 = 0;
    do {
      uVar10 = uVar8;
      if (*puVar9 == param_2) break;
      puVar9 = puVar9 + 1;
      uVar8 = uVar8 + 1;
      uVar10 = 4;
    } while ((int)puVar9 < -0x7c49261c);
    uVar2 = FUN_82513508();
    if ((char)uVar2 != '\0') {
      iVar3 = (int)uVar10;
      if (iVar3 < 2) {
        iVar4 = (int)((uVar10 & 0xffffffff) << 4) - iVar3;
        (&CHAR_NUM_P1_83b6d71c)[iVar4] = bVar5;
        (&CHAR_NUM_P1_83b6d71d)[iVar4] = bVar5;
      }
      Function_82438A50();
      puVar9 = &DAT_83b6d9d4;
      iVar4 = 0;
      do {
        iVar6 = iVar4;
        if (*puVar9 == param_2) break;
        puVar9 = puVar9 + 1;
        iVar4 = iVar4 + 1;
        iVar6 = 4;
      } while ((int)puVar9 < -0x7c49261c);
      puVar9 = &DAT_83b6d9d4;
      iVar4 = 0;
      do {
        iVar7 = iVar4;
        if (*puVar9 == param_2) break;
        puVar9 = puVar9 + 1;
        iVar4 = iVar4 + 1;
        iVar7 = 4;
      } while ((int)puVar9 < -0x7c49261c);
      Function_82623108(param_1,param_2,((uint)LZCOUNT(iVar7) >> 5 ^ 1) + 0x25);
      Function_826231E0(param_1,param_2,((uint)LZCOUNT(iVar6) >> 5 ^ 1) + 5);
      Function_82520CE8();
      iVar4 = FUN_826236d8(param_1,param_2,4);
      if (iVar4 != 0) {
        uVar2 = Function_825140D8(iVar4);
        puVar9 = &DAT_83b6d9d4;
        iVar4 = 0;
        do {
          if (*puVar9 == param_2) {
            dVar1 = (dword)uVar2;
            if (iVar4 == 0) goto LAB_8251a69c;
            break;
          }
          puVar9 = puVar9 + 1;
          iVar4 = iVar4 + 1;
        } while ((int)puVar9 < -0x7c49261c);
        dVar1 = DWORD_829aac44;
        DWORD_829aac48 = (dword)uVar2;
LAB_8251a69c:
        DWORD_829aac44 = dVar1;
        Function_82508EB8();
      }
      if (-1 < iVar3) {
        if (((uVar10 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0xa0)) &&
           (*(int *)(*(int *)(param_1 + 0xa8) + (int)((uVar10 & 0xffffffff) << 2)) != 0)) {
          Function_82516270();
        }
        if (((uVar10 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0xb0)) &&
           (iVar3 = *(int *)(*(int *)(param_1 + 0xb8) + (int)((uVar10 & 0xffffffff) << 2)),
           iVar3 != 0)) {
          *(undefined1 *)(iVar3 + 0xd) = 0;
        }
      }
    }
  }
  return;
}

