
void FUN_0004a660(int param_1)

{
  uint uVar1;
  int *piVar2;
  short sVar3;
  bool bVar4;
  uint uVar5;
  undefined4 unaff_pfp;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  short *psVar13;
  uint uVar14;
  
  iVar8 = (int)(short)(&DAT_0056ac34)[param_1];
  iVar7 = param_1 * 0xc;
  ac = ac & 0xfffffff8 | (uint)((&DAT_0056adb8)[param_1] == '\0') << 1;
  *(undefined4 *)(&DAT_0056ad84 + iVar7) = *(undefined4 *)(&DAT_005888d4 + iVar7);
  *(undefined4 *)(&DAT_00589bf4 + iVar7) = *(undefined4 *)(&DAT_0056acb4 + iVar7);
  if (((byte)(ac >> 1) & 1) == 1) {
    *(undefined4 *)(&DAT_00589bf0 + iVar7) = 0;
    *(undefined4 *)(&DAT_00589bf8 + iVar7) = 0;
  }
  else {
    *(undefined4 *)(&DAT_00589bf0 + iVar7) = *(undefined4 *)(&DAT_0056acb0 + iVar7);
    *(undefined4 *)(&DAT_00589bf8 + iVar7) = *(undefined4 *)(&DAT_0056acb8 + iVar7);
  }
  iVar7 = 0;
  puVar9 = (undefined4 *)(&DAT_0056ad00 + param_1 * 0x3c);
  do {
    psVar13 = (short *)*puVar9;
    bVar4 = false;
    sVar3 = (&DAT_00550144)[param_1];
    iVar6 = (int)*psVar13;
    iVar12 = (int)psVar13[1];
    g13 = (int)psVar13[2];
    if (sVar3 == -1) {
      iVar12 = -iVar12;
      g13 = -g13;
    }
    piVar2 = (int *)(&DAT_0056aa70 + param_1 * 0xb4 + iVar7);
    if (iVar7 == 0x18) {
      if (((&DAT_0056ac72)[param_1] == '\0') || ((&DAT_0056ac78)[param_1] != 0)) {
        if ((&DAT_0056ac78)[param_1] != 0) {
          if ((&g_player1)[param_1].action_state == 0x0_NEUTRAL) {
            if ((&g_player1)[param_1].pose_state == '\0') {
              if (sVar3 == 1) {
                *piVar2 = -0x2d8;
                piVar2[1] = -0x382d;
                iVar10 = -0x38e;
              }
              else {
                *piVar2 = -0x2d8;
                piVar2[1] = 0x382d;
                iVar10 = 0x38e;
              }
            }
            else if (sVar3 == 1) {
              *piVar2 = 0xb6;
              piVar2[1] = -0x27d2;
              iVar10 = -0x93e;
            }
            else {
              *piVar2 = 0xb6;
              piVar2[1] = 0x27d2;
              iVar10 = 0x93e;
            }
            piVar2[2] = iVar10;
          }
        }
      }
      else {
        piVar2[1] = piVar2[1] + 0x8000;
      }
    }
    iVar10 = piVar2[1];
    iVar11 = piVar2[2];
    if ((((iVar6 - *piVar2 & 0xffffU) - 0x5c72 < 0x471c) ||
        ((iVar12 - iVar10 & 0xffffU) - 0x5c72 < 0x471c)) ||
       ((g13 - iVar11 & 0xffffU) - 0x5c72 < 0x471c)) {
      bVar4 = true;
      iVar6 = iVar6 + -0x8000;
    }
    uVar14 = iVar6 - *piVar2 & 0xffff;
    if (0x8000 < uVar14) {
      uVar14 = uVar14 | 0xffff0000;
    }
    iVar6 = iVar7 + param_1 * 0xb4;
    *(int *)(&DAT_00589c10 + iVar6) = (int)uVar14 / iVar8;
    if (bVar4) {
      iVar12 = 0x8000 - iVar12;
    }
    uVar14 = iVar12 - iVar10 & 0xffff;
    if (0x8000 < uVar14) {
      uVar14 = uVar14 | 0xffff0000;
    }
    *(int *)(&DAT_00589c14 + iVar6) = (int)uVar14 / iVar8;
    if (bVar4) {
      g13 = g13 + -0x8000;
    }
    uVar14 = g13 - iVar11 & 0xffff;
    if (0x8000 < uVar14) {
      uVar14 = uVar14 | 0xffff0000;
    }
    iVar7 = iVar7 + 0xc;
    uVar5 = ac & 0xfffffff8 | (uint)(iVar7 < 0xa8) << 2;
    uVar1 = uVar5 | (uint)(iVar7 == 0xa8) << 1;
    ac = uVar1 | 0xa8 < iVar7;
    puVar9 = puVar9 + 1;
    *(int *)(&DAT_00589c18 + iVar6) = (int)uVar14 / iVar8;
  } while (((byte)(uVar1 >> 1) & 1 | (byte)(uVar5 >> 2) & 1) == 1);
  fp = unaff_pfp;
  return;
}

