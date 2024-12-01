
void __cdecl FUN_00064700(uint param_1)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  uint3 uVar4;
  byte bVar5;
  bool bVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  int iVar9;
  undefined3 extraout_var;
  int iVar10;
  undefined2 extraout_var_00;
  uint uVar11;
  uint uVar12;
  int iVar13;
  float *pfVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  
  bVar5 = DAT_00873d34;
  iVar13 = param_1 * 0x2c;
  pfVar14 = (float *)(&DAT_00851520 + iVar13);
  if ((&DAT_00851548)[iVar13] == DAT_00873d34) {
    if (DAT_00873d34 == 0) {
      (&DAT_00851549)[iVar13] = 0;
    }
  }
  else {
    if (DAT_00873d34 < 2) {
      (&DAT_00851549)[iVar13] = 0;
    }
    (&DAT_00851548)[iVar13] = bVar5;
  }
  local_38 = (&FLOAT_00650794)[DAT_00873604];
  iVar9 = param_1 * 0x94;
  uVar11 = (uint)(ushort)(&DAT_008767f6)[param_1 * 0x4a];
  uVar15 = param_1 ^ 1;
  uVar12 = (uint)(ushort)(&DAT_008767f6)[uVar15 * 0x4a];
  bVar6 = FUN_00065260();
  if (CONCAT31(extraout_var,bVar6) == 0) {
    fVar17 = 1.0;
    fVar16 = 1.0;
    if ((&DAT_00878e38)[param_1] != 0) {
      fVar16 = (float)(uint)(ushort)(&DAT_008767f4)[param_1 * 0x4a] /
               (float)(uint)(ushort)(&DAT_00878e38)[param_1];
    }
    if ((&DAT_00878e38)[uVar15] != 0) {
      fVar17 = (float)(uint)(ushort)(&DAT_008767f4)[uVar15 * 0x4a] /
               (float)(uint)(ushort)(&DAT_00878e38)[uVar15];
    }
    *(float *)(&DAT_00851538 + iVar13) = fVar16 - fVar17;
  }
  else {
    if (uVar12 != 0) {
      *(float *)(&DAT_00851538 + iVar13) =
           (float)uVar12 * 0.003125 + *(float *)(&DAT_00851538 + iVar13);
    }
    if (uVar11 != 0) {
      *(float *)(&DAT_00851538 + iVar13) =
           *(float *)(&DAT_00851538 + iVar13) - (float)uVar11 * 0.003125;
    }
    fVar16 = *(float *)(&DAT_00851538 + iVar13);
    fVar17 = 1.0;
    if ((fVar16 <= 1.0) && (fVar17 = -1.0, -1.0 <= fVar16)) {
      fVar17 = fVar16;
    }
    *(float *)(&DAT_00851538 + iVar13) = fVar17;
    local_38 = CharacterTable;
    uVar11 = uVar11 - *(int *)(&DAT_00851540 + iVar13);
    uVar12 = uVar12 - *(int *)(&DAT_00851544 + iVar13);
    iVar10 = FUN_000652c0();
    if (iVar10 < 2) {
      uVar11 = 0;
      (&DAT_00851549)[iVar13] = 0;
      uVar12 = 0;
    }
    uVar7 = FUN_000652b0();
    if ((CONCAT22(extraout_var_00,uVar7) == 3) && (iVar10 = FUN_000652c0(), 0x24d < iVar10)) {
      iVar10 = FUN_000652c0();
      fVar16 = (float)(iVar10 + -0x24e) * 0.03333334;
      if (fVar16 <= 1.0) {
        if (fVar16 < 0.0) {
          fVar16 = 0.0;
        }
      }
      else {
        fVar16 = 1.0;
      }
      local_38 = (1.0 - fVar16) * local_38;
    }
  }
  uVar3 = (&DAT_008767f6)[uVar15 * 0x4a];
  *(uint *)(&DAT_00851540 + iVar13) = (uint)(ushort)(&DAT_008767f6)[param_1 * 0x4a];
  *(uint *)(&DAT_00851544 + iVar13) = (uint)uVar3;
  if ((&DAT_00851549)[iVar13] == '\0') {
    FUN_000a8500(2);
    *pfVar14 = 0.0;
    *(undefined4 *)(&DAT_00851524 + iVar13) = 0;
    *(undefined4 *)(&DAT_00851528 + iVar13) = 0;
    *(undefined4 *)(&DAT_0085152c + iVar13) = 0;
    *(undefined4 *)(&DAT_00851530 + iVar13) = 0;
    *(undefined4 *)(&DAT_00851534 + iVar13) = 0;
    *(undefined4 *)(&DAT_00851538 + iVar13) = 0;
    *(undefined4 *)(&DAT_0085153c + iVar13) = 0;
    *(undefined4 *)(&DAT_00851540 + iVar13) = 0;
    *(undefined4 *)(&DAT_00851544 + iVar13) = 0;
    (&DAT_00851549)[iVar13] = 1;
  }
  bVar5 = DAT_00873d34;
  fVar16 = FLOAT_0065077c;
  fVar19 = 0.0;
  fVar17 = *(float *)(&DAT_0085152c + iVar13) + *(float *)(&DAT_00851528 + iVar13) + *pfVar14;
  local_30 = FLOAT_0065077c;
  if ((fVar17 <= FLOAT_0065077c) && (local_30 = fVar17, fVar17 < 0.0)) {
    local_30 = 0.0;
  }
  local_30 = local_30 * local_38;
  if (local_30 <= 1.0) {
    if (local_30 < 0.0) {
      local_30 = 0.0;
    }
  }
  else {
    local_30 = 1.0;
  }
  fVar17 = 1.0;
  if (DAT_00878e3f == '\0') {
    fVar17 = -1.0;
  }
  if (DAT_00873d69 != '\0') goto LAB_00064d3e;
  *(int *)(&DAT_0085153c + iVar13) = *(int *)(&DAT_0085153c + iVar13) + 1;
  switch(bVar5) {
  case 1:
  case 2:
  case 3:
    fVar16 = *(float *)(&DAT_00851538 + iVar13) * FLOAT_00650754;
    if (fVar16 <= 1.0) {
      if (fVar16 < 0.0) {
        fVar16 = 0.0;
      }
    }
    else {
      fVar16 = 1.0;
    }
    fVar16 = FLOAT_00650758 + fVar16;
    if (fVar16 <= 1.0) {
      if (fVar16 < 0.0) {
        fVar16 = 0.0;
      }
    }
    else {
      fVar16 = 1.0;
    }
    fVar16 = FLOAT_0065075c * fVar16;
    fVar20 = *(float *)(&DAT_00851528 + iVar13) * FLOAT_00650764;
    *(float *)(&DAT_00851524 + iVar13) = fVar16;
    *pfVar14 = (fVar16 - *pfVar14) * FLOAT_00650760 + *pfVar14;
    fVar16 = *(float *)(&DAT_0085152c + iVar13) * FLOAT_00650768;
    *(float *)(&DAT_00851528 + iVar13) = fVar20;
    *(float *)(&DAT_0085152c + iVar13) = fVar16;
    if (fVar16 < 0.0) {
      fVar16 = 0.0 - fVar16;
    }
    if (fVar16 < FLOAT_0065076c) {
      *(undefined4 *)(&DAT_0085152c + iVar13) = 0;
    }
    if (uVar12 != 0) {
      *(float *)(&DAT_00851528 + iVar13) =
           ((float)uVar12 / FLOAT_00650774) * FLOAT_00650770 + fVar20;
    }
    sVar2 = (&DAT_00876802)[param_1 * 0x4a];
    if (((((sVar2 == 0x113) || (sVar2 == 0x112)) && (cVar1 = (&DAT_00876807)[iVar9], cVar1 != '\a'))
        && ((cVar1 != '\b' && (cVar1 != '\t')))) && (cVar1 != '\x0f')) {
      *(float *)(&DAT_00851528 + iVar13) = *(float *)(&DAT_00851528 + iVar13) + 0.01;
      *(float *)(&DAT_00851530 + iVar13) = *(float *)(&DAT_00851530 + iVar13) + 0.1;
      *(float *)(&DAT_00851534 + iVar13) =
           FLOAT_00650788 * fVar17 + *(float *)(&DAT_00851534 + iVar13);
    }
    else {
      if (((sVar2 == 0x114) && (cVar1 = (&DAT_00876807)[iVar9], cVar1 != '\a')) &&
         ((cVar1 != '\b' && ((cVar1 != '\t' && (cVar1 != '\x0f')))))) {
        *(float *)(&DAT_00851530 + iVar13) = *(float *)(&DAT_00851530 + iVar13) - 0.1;
        fVar19 = *(float *)(&DAT_00851534 + iVar13) - FLOAT_0065078c * fVar17;
      }
      else {
        *(float *)(&DAT_00851530 + iVar13) = *(float *)(&DAT_00851530 + iVar13) * 0.8;
        fVar16 = *(float *)(&DAT_00851534 + iVar13) * FLOAT_00650790;
        *(float *)(&DAT_00851534 + iVar13) = fVar16;
        if (fVar16 < 0.0) {
          fVar16 = 0.0 - fVar16;
        }
        if (FLOAT_00650784 <= fVar16) goto LAB_00064c31;
      }
      *(float *)(&DAT_00851534 + iVar13) = fVar19;
    }
LAB_00064c31:
    iVar10 = FUN_001e03e0(&local_2c,&local_20);
    if (iVar10 != 0) {
      *(undefined4 *)(&DAT_00851528 + iVar13) = 0;
    }
    if (uVar11 != 0) {
      *(float *)(&DAT_0085152c + iVar13) =
           *(float *)(&DAT_00851528 + iVar13) + *pfVar14 + FLOAT_00650778;
      *pfVar14 = 0.0;
      *(undefined4 *)(&DAT_00851528 + iVar13) = 0;
    }
    if (*(float *)(&DAT_00851528 + iVar13) <= 1.0) {
      uVar18 = 0xbf800000;
      if (-1.0 < *(float *)(&DAT_00851528 + iVar13) || *(float *)(&DAT_00851528 + iVar13) == -1.0) {
        uVar18 = *(undefined4 *)(&DAT_00851528 + iVar13);
      }
    }
    else {
      uVar18 = 0x3f800000;
    }
    *(undefined4 *)(&DAT_00851528 + iVar13) = uVar18;
    if (*(float *)(&DAT_0085152c + iVar13) <= 1.0) {
      uVar18 = 0xbf800000;
      if (-1.0 < *(float *)(&DAT_0085152c + iVar13) || *(float *)(&DAT_0085152c + iVar13) == -1.0) {
        uVar18 = *(undefined4 *)(&DAT_0085152c + iVar13);
      }
    }
    else {
      uVar18 = 0x3f800000;
    }
    *(undefined4 *)(&DAT_0085152c + iVar13) = uVar18;
    if (*(float *)(&DAT_00851530 + iVar13) <= 1.0) {
      uVar18 = 0xbf000000;
      if (-0.5 < *(float *)(&DAT_00851530 + iVar13) || *(float *)(&DAT_00851530 + iVar13) == -0.5) {
        uVar18 = *(undefined4 *)(&DAT_00851530 + iVar13);
      }
    }
    else {
      uVar18 = 0x3f800000;
    }
    *(undefined4 *)(&DAT_00851530 + iVar13) = uVar18;
    fVar16 = FLOAT_0065077c;
    fVar17 = *(float *)(&DAT_00851534 + iVar13);
    fVar19 = 1.0;
    if ((fVar17 <= 1.0) && (fVar19 = -1.0, -1.0 <= fVar17)) {
      fVar19 = fVar17;
    }
    *(float *)(&DAT_00851534 + iVar13) = fVar19;
    goto LAB_00064d3e;
  default:
    *pfVar14 = 0.0;
    *(undefined4 *)(&DAT_00851524 + iVar13) = 0;
    *(undefined4 *)(&DAT_00851528 + iVar13) = 0;
    *(undefined4 *)(&DAT_0085152c + iVar13) = 0;
    break;
  case 5:
    fVar17 = *pfVar14 - 0.0125;
    *pfVar14 = fVar17;
    if (fVar17 <= 1.0) {
      if (fVar17 < 0.0) {
        fVar17 = 0.0;
      }
    }
    else {
      fVar17 = 1.0;
    }
    *pfVar14 = fVar17;
    fVar17 = *(float *)(&DAT_00851528 + iVar13);
    *(undefined4 *)(&DAT_00851524 + iVar13) = 0;
    *(float *)(&DAT_00851528 + iVar13) = fVar17 - 0.0125;
    if (fVar17 - 0.0125 <= 1.0) {
      uVar18 = 0;
      if (0.0 < *(float *)(&DAT_00851528 + iVar13) || *(float *)(&DAT_00851528 + iVar13) == 0.0) {
        uVar18 = *(undefined4 *)(&DAT_00851528 + iVar13);
      }
    }
    else {
      uVar18 = 0x3f800000;
    }
    *(undefined4 *)(&DAT_00851528 + iVar13) = uVar18;
    fVar17 = *(float *)(&DAT_0085152c + iVar13);
    *(float *)(&DAT_0085152c + iVar13) = fVar17 - 0.0125;
    if (fVar17 - 0.0125 <= 1.0) {
      uVar18 = 0;
      if (0.0 < *(float *)(&DAT_0085152c + iVar13) || *(float *)(&DAT_0085152c + iVar13) == 0.0) {
        uVar18 = *(undefined4 *)(&DAT_0085152c + iVar13);
      }
      *(undefined4 *)(&DAT_0085152c + iVar13) = uVar18;
    }
    else {
      *(undefined4 *)(&DAT_0085152c + iVar13) = 0x3f800000;
    }
  }
  *(undefined4 *)(&DAT_00851530 + iVar13) = 0;
  *(undefined4 *)(&DAT_00851534 + iVar13) = 0;
  *(undefined4 *)(&DAT_00851538 + iVar13) = 0;
LAB_00064d3e:
  fVar17 = *(float *)(&DAT_0085152c + iVar13) + *(float *)(&DAT_00851528 + iVar13) + *pfVar14;
  if ((fVar17 <= fVar16) && (fVar16 = fVar17, fVar17 < 0.0)) {
    fVar16 = 0.0;
  }
  fVar16 = fVar16 * local_38;
  if ((fVar16 <= 1.0) && ((fVar16 < 0.0 || (fVar16 <= 0.0)))) {
    FUN_000a8500(2);
    return;
  }
  if (local_30 <= 0.0) {
    local_1c = CONCAT31(local_1c._1_3_,2);
    uVar4 = (uint3)local_1c;
    local_1c = CONCAT13(1,uVar4 & 0xffff);
    local_10._3_1_ = 2;
    local_14 = 1;
    local_18 = 0;
    uVar21 = FUN_00335730();
    local_10._0_3_ = (uint3)(byte)uVar21;
    FUN_000a9830((byte *)&local_1c);
  }
  FUN_00284320((undefined4 *)0x0);
  if ((&DAT_008767f0)[iVar9] == '\0') {
    uVar7 = (undefined2)(DAT_00e61424 / 2);
    uVar8 = (undefined2)(DAT_00e61288 / 2);
  }
  else {
    FUN_002840f0((undefined4 *)(&DAT_00871880 + param_1 * 0x800));
    local_2c = -0.1;
    local_28 = 0.0;
    local_24 = 0x3dcccccd;
    FUN_002844b0((undefined (*) [16])&local_2c);
    local_20 = 1.0;
    FUN_002840f0((undefined4 *)&DAT_008762a0);
    FUN_00284610((undefined (*) [16])&local_2c);
    if (local_20 <= 0.0) {
      local_2c = (float)(DAT_00e61288 / 2);
      local_28 = (float)(DAT_00e61424 / 2);
      uVar8 = (undefined2)(int)local_2c;
      uVar7 = (undefined2)(int)local_28;
    }
    else {
      fVar17 = 1.0 / local_20;
      D3D8::D3DDevice_GetViewport(&local_1c);
      fVar16 = (float)local_14;
      if (local_14 < 0) {
        fVar16 = fVar16 + 4.294967e+09;
      }
      fVar19 = (float)local_10;
      if (local_10 < 0) {
        fVar19 = fVar19 + 4.294967e+09;
      }
      fVar20 = (float)local_1c;
      if (local_1c < 0) {
        fVar20 = fVar20 + 4.294967e+09;
      }
      local_2c = fVar20 + fVar16 * 0.5 + fVar16 * fVar17 * local_2c * 0.5;
      fVar16 = (float)local_18;
      if (local_18 < 0) {
        fVar16 = fVar16 + 4.294967e+09;
      }
      uVar8 = (undefined2)(int)local_2c;
      local_28 = fVar16 + fVar19 * 0.5 + fVar17 * local_28 * fVar19 * -0.5;
      uVar7 = (undefined2)(int)local_28;
    }
  }
  FUN_000a7a80(uVar8,uVar7);
  FUN_00284390(1);
  FUN_000a7aa0(1.02 - *(float *)(&DAT_00851530 + iVar13) * 0.04);
  uVar21 = FUN_00335730();
  iVar9 = (int)uVar21;
  FUN_000a7ae0((char)uVar21);
  FUN_00283810((float10 *)
               ((int)(DAT_0085157c * 182.0444) -
               (int)(DAT_00851578 * -182.0444) * *(int *)(&DAT_0085153c + iVar13)),iVar9);
  uVar21 = FUN_00335730();
  FUN_000a7af0((int)uVar21);
  return;
}

