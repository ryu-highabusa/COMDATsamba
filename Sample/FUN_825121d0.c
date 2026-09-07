
void FUN_825121d0(int *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  byte bVar1;
  undefined4 uVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  
  iVar6 = FUN_8252a3b8();
  if (iVar6 == 0) {
    uVar15 = 0x12;
    lVar12 = -0x7d3dbc38;
  }
  else {
    uVar15 = 0x18;
    lVar12 = -0x7d0b4a10;
  }
  uVar16 = (uint)uVar15;
  uVar17 = 0;
  if (uVar16 != 0) {
    lVar8 = param_2;
    uVar17 = uVar15;
    do {
      lVar13 = (lVar12 - param_2) + lVar8;
      lVar19 = 10;
      lVar10 = lVar8;
      do {
        puVar14 = (undefined4 *)lVar13;
        lVar13 = lVar13 + 4;
        *(undefined4 *)lVar10 = *puVar14;
        lVar10 = lVar10 + 4;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      uVar17 = uVar17 - 1;
      lVar8 = lVar8 + 0x28;
    } while ((uVar17 & 0xffffffff) != 0);
    uVar17 = uVar15;
    if (0x17 < uVar16) goto LAB_825122ac;
  }
  uVar15 = 0x18 - uVar17;
  lVar12 = uVar17 * 0x28 + param_2;
  do {
    lVar10 = 10;
    lVar8 = lVar12;
    puVar14 = (undefined4 *)&Character_Select_LOCKEDCHAR_Value??;
    do {
      uVar2 = *puVar14;
      puVar14 = puVar14 + 1;
      *(undefined4 *)lVar8 = uVar2;
      lVar8 = lVar8 + 4;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    uVar15 = uVar15 - 1;
    lVar12 = lVar12 + 0x28;
  } while ((uVar15 & 0xffffffff) != 0);
LAB_825122ac:
  *param_1 = (int)param_2;
  param_1[1] = uVar16;
  iVar5 = DAT_83022320*;
  iVar18 = 0;
  if (uVar16 != 0) {
    do {
      pbVar7 = (byte *)param_2;
      bVar1 = *pbVar7;
      iVar9 = 0;
      if (iVar6 == 0) {
        if (0 < param_1[1]) {
          iVar11 = 0;
          do {
            if (*(byte *)(iVar11 + *param_1) == bVar1) {
              *(undefined4 *)((byte *)(iVar11 + *param_1) + 0x24) = 0;
            }
            iVar9 = iVar9 + 1;
            iVar11 = iVar11 + 0x28;
          } while (iVar9 < param_1[1]);
        }
        if (pbVar7[1] != 0) {
          if (pbVar7[2] == 0) {
            if (0x18 < *pbVar7) goto LAB_8251249c;
            if ((0x16 < (&BYTE_82c4a038)[*pbVar7]) ||
               (bVar4 = true, *(char *)(iVar5 + (uint)(&BYTE_82c4a038)[*pbVar7] + 0x3fd9) == '\0'))
            {
              bVar4 = false;
            }
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            iVar9 = 0;
            bVar1 = *pbVar7;
            if (0 < param_1[1]) {
              iVar11 = 0;
              do {
                if (*(byte *)(iVar11 + *param_1) == bVar1) {
                  *(undefined4 *)((byte *)(iVar11 + *param_1) + 0x24) = 3;
                }
                iVar9 = iVar9 + 1;
                iVar11 = iVar11 + 0x28;
              } while (iVar9 < param_1[1]);
            }
          }
        }
      }
      else {
        if (0 < param_1[1]) {
          iVar11 = 0;
          do {
            if (*(byte *)(iVar11 + *param_1) == bVar1) {
              *(undefined4 *)((byte *)(iVar11 + *param_1) + 0x24) = 1;
            }
            iVar9 = iVar9 + 1;
            iVar11 = iVar11 + 0x28;
          } while (iVar9 < param_1[1]);
        }
        if (pbVar7[2] == 0) {
          if (0x18 < *pbVar7) goto LAB_8251249c;
          if ((0x16 < (&BYTE_82c4a038)[*pbVar7]) ||
             (bVar4 = true, *(char *)(iVar5 + (uint)(&BYTE_82c4a038)[*pbVar7] + 0x3fd9) == '\0')) {
            bVar4 = false;
          }
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          iVar9 = 0;
          bVar1 = *pbVar7;
          if (0 < param_1[1]) {
            iVar11 = 0;
            do {
              if (*(byte *)(iVar11 + *param_1) == bVar1) {
                *(undefined4 *)((byte *)(iVar11 + *param_1) + 0x24) = 3;
              }
              iVar9 = iVar9 + 1;
              iVar11 = iVar11 + 0x28;
            } while (iVar9 < param_1[1]);
          }
        }
      }
LAB_8251249c:
      iVar18 = iVar18 + 1;
      param_2 = param_2 + 0x28;
    } while (iVar18 < param_1[1]);
  }
  lVar8 = 0x19;
  lVar12 = param_4;
  do {
    *(undefined *)lVar12 = 0;
    lVar12 = lVar12 + 1;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  iVar6 = 0;
  do {
    puVar3 = (undefined *)(iVar5 + 0x3fc2 + iVar6);
    pbVar7 = &CHAR-TABLE_ALT + iVar6;
    iVar6 = iVar6 + 1;
    *(undefined *)((uint)*pbVar7 + (int)param_4) = *puVar3;
  } while (iVar6 < 0x17);
  return;
}