
void FUN_8c02b114(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  
  puVar3 = MenuIdleTimerCounter;
  puVar10 = PTR_DAT_8c02b14c;
  puVar12 = PTR_DAT_8c02b148;
  puVar11 = PTR_DAT_8c02b144;
  iVar13 = 0;
  *(undefined *)(DAT_8c02b13a + param_1) = 0;
  for (uVar9 = 0; (puVar4 = PTR_DAT_8c02b290, (int)uVar9 < 0x19 && (uVar9 < 0xe)); uVar9 = uVar9 + 1
      ) {
    cVar1 = *PTR_GameMode_8c02b27c;
    uVar7 = (uint)(byte)PTR_CHARACTER_SELECT_IDs_MULTIPLAYER_8c02b278[uVar9];
    if (((cVar1 != STORY_MODE) && ((cVar1 != WATCH_MODE_SINGLE && (cVar1 != WATCH_MODE_TAG)))) ||
       ((uVar7 != TENGU && (uVar7 != BAYMAN)))) {
      PTR_DAT_8c02b280[iVar13] = PTR_CHARACTER_SELECT_IDs_MULTIPLAYER_8c02b278[uVar9];
      puVar4 = PTR_DAT_8c02b28c;
      *(undefined4 *)(PTR_DAT_8c02b284 + iVar13 * 4) =
           *(undefined4 *)(PTR_PTR_BYTE_8c02b288 + uVar7 * 4);
      iVar8 = (int)DAT_8c02b276;
      uVar7 = (uint)(byte)puVar4[uVar7];
      iVar5 = (int)DAT_8c02b274;
      *puVar10 = puVar3[uVar7 + (int)DAT_8c02b274];
      iVar6 = (int)DAT_8c02b274;
      *puVar12 = puVar3[uVar7 + iVar5];
      *puVar11 = puVar3[uVar7 + iVar6];
      puVar12 = puVar12 + 1;
      *(char *)(iVar8 + param_1) = *(char *)(iVar8 + param_1) + '\x01';
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
      iVar13 = iVar13 + 1;
    }
  }
  iVar13 = 0;
  do {
    if ((byte)puVar4[iVar13] < (byte)puVar3[iVar13 + DAT_8c02b274]) {
      puVar4[iVar13] = puVar3[iVar13 + DAT_8c02b274];
    }
    iVar8 = iVar13 + 1;
    if ((byte)puVar4[iVar8] < (byte)puVar3[iVar8 + DAT_8c02b274]) {
      puVar4[iVar8] = puVar3[iVar8 + DAT_8c02b274];
    }
    iVar8 = iVar13 + 2;
    if ((byte)puVar4[iVar8] < (byte)puVar3[iVar8 + DAT_8c02b274]) {
      puVar4[iVar8] = puVar3[iVar8 + DAT_8c02b274];
    }
    iVar8 = iVar13 + 3;
    if ((byte)puVar4[iVar8] < (byte)puVar3[iVar8 + DAT_8c02b274]) {
      puVar4[iVar8] = puVar3[iVar8 + DAT_8c02b274];
    }
    iVar13 = iVar13 + 4;
  } while (iVar13 < 10);
  for (; iVar13 < 0xe; iVar13 = iVar13 + 1) {
    if ((byte)puVar4[iVar13] < (byte)puVar3[iVar13 + DAT_8c02b338]) {
      puVar4[iVar13] = puVar3[iVar13 + DAT_8c02b338];
    }
  }
  puVar4[0xe] = puVar4[0xe] | puVar3[DAT_8c02b33a];
  puVar4[0xf] = puVar4[0xf] | puVar3[DAT_8c02b33c];
  puVar10 = PTR_BYTE_8c02b348;
  puVar12 = PTR_DAT_8c02b344;
  puVar11 = PTR_DAT_8c02b340;
  iVar13 = 0;
  if (*(char *)(DAT_8c02b33e + param_1) != '\0') {
    do {
      bVar2 = puVar11[iVar13];
      iVar13 = iVar13 + 1;
      if ((byte)puVar10[bVar2] < (byte)puVar4[(byte)puVar12[bVar2]]) {
        puVar4[(byte)puVar12[bVar2]] = puVar10[bVar2];
      }
    } while (iVar13 < (int)(uint)*(byte *)(DAT_8c02b33e + param_1));
  }
  return;
}

