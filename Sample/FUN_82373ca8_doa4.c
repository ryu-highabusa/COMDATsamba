
void FUN_82373ca8(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 *puVar3;
  ushort uVar4;
  int iVar5;
  short *psVar7;
  undefined uVar9;
  ulonglong uVar6;
  int iVar8;
  ushort uVar10;
  uint uVar11;
  ushort uVar12;
  ushort uVar13;
  ulonglong uVar14;
  byte *pbVar15;
  int *piVar16;
  int *piVar17;
  
  iVar8 = 4;
  DAT_8302304c = (undefined2)param_2;
  DAT_8302304e = (undefined)param_3;
  puVar3 = &DAT_8302304c;
  do {
    iVar8 = iVar8 + -1;
    *(undefined *)(puVar3 + 2) = 0xff;
    *(undefined *)((int)puVar3 + 5) = 0xff;
    *(undefined *)(puVar3 + 3) = 0xff;
    puVar3[4] = 0xffff;
    puVar3 = puVar3 + 3;
  } while (iVar8 != 0);
  iVar8 = 2;
  pbVar15 = &BYTE_83023068;
  do {
    iVar8 = iVar8 + -1;
    *pbVar15 = 0xff;
    *(undefined2 *)(pbVar15 + 2) = 0xffff;
    pbVar15 = pbVar15 + 4;
  } while (iVar8 != 0);
  DAT_83023070 = 0xff;
  DAT_83023071 = 0xff;
  DAT_83023072 = 0xff;
  DAT_83023073 = 0xff;
  DAT_83023074 = 0;
  DAT_83023076 = 0xffff;
  uVar12 = 0xffff;
  psVar7 = (short *)FUN_823ef240(4);
  DAT_8302307a = uVar12;
  if (*psVar7 != -1) {
    DAT_83023076 = (undefined2)param_2;
  }
  piVar16 = *(int **)((int)&PTR_POINTER_TABLE_82c712b0 +
                     ((uint)((param_2 & 0xffffffff) << 2) & 0x3fffc));
  DAT_83023078 = 0xffff;
  DAT_8302307c = 0;
  DAT_83023080 = -1;
  uVar12 = *(ushort *)piVar16;
  if (uVar12 != 0xffff) {
    pbVar15 = &BYTE_83023068;
    uVar14 = (ulonglong)SurvivalScore_Wins_82fb9303;
    uVar13 = (ushort)DAT_830995bd;
    do {
      piVar17 = (int *)((int)piVar16 + 2);
      switch(uVar12) {
      case 0:
        uVar11 = *(ushort *)piVar17 & 0xff;
        uVar4 = *(ushort *)(piVar16 + 1) & 0xff;
        iVar5 = uVar11 + (*(ushort *)piVar17 & 0xff) * 2;
        uVar12 = *(ushort *)((int)piVar16 + 6);
        iVar8 = iVar5 * 2;
        uVar1 = *(ushort *)(piVar16 + 2);
        piVar17 = piVar16 + 3;
        uVar2 = *(ushort *)((int)piVar16 + 10);
        uVar6 = param_3;
        if ((param_3 & 0xff) == 0xff) {
          uVar6 = uVar14;
        }
        uVar10 = uVar13;
        if ((uVar4 != 0xfc) && (uVar10 = uVar4, uVar4 == 0xfd)) {
          uVar10 = (ushort)(byte)(&DAT_830996e0)[(uint)uVar6 & 0xff];
        }
        (&DAT_83023050)[iVar8] = (char)uVar10;
        uVar9 = FUN_82373408(uVar12 & 0xff,uVar11,uVar10,param_3);
        (&DAT_83023052)[iVar8] = (char)uVar1;
        (&DAT_83023054)[iVar5] = uVar2;
        (&DAT_83023051)[iVar8] = uVar9;
        if ((uVar2 == 0xfffe) && (DAT_83023074 < 4)) {
          (&DAT_83023070)[DAT_83023074] = (&DAT_83023050)[iVar8];
          DAT_83023074 = DAT_83023074 + 1;
        }
        break;
      case 1:
        uVar11 = *(ushort *)piVar17 & 0xff;
        if ((uVar11 == 0xffffffff) || (0x32 < uVar11)) {
          uVar11 = 2;
        }
        *pbVar15 = (byte)uVar11;
        piVar17 = (int *)((int)piVar16 + 6);
        *(ushort *)(pbVar15 + 2) = *(ushort *)(piVar16 + 1);
        pbVar15 = pbVar15 + 4;
        break;
      case 3:
        piVar17 = piVar16 + 2;
        break;
      case 4:
        DAT_83023078 = *(ushort *)piVar17;
        piVar17 = piVar16 + 1;
        break;
      case 5:
        piVar17 = (int *)(&PTR_POINTER_TABLE_82c712b0)[*(ushort *)piVar17];
        break;
      case 6:
        DAT_8302307a = *(ushort *)piVar17;
        piVar17 = piVar16 + 1;
        break;
      case 7:
        iVar8 = *piVar17;
        uVar6 = param_3;
        if ((param_3 & 0xff) == 0xff) {
          uVar6 = uVar14;
        }
        if (iVar8 == -2) {
          iVar8 = FUN_823e2560(uVar6);
        }
        piVar17 = (int *)((int)piVar16 + 6);
        DAT_83023080 = iVar8;
      }
      uVar12 = *(ushort *)piVar17;
      piVar16 = piVar17;
    } while (uVar12 != 0xffff);
  }
  return;
}

