
void FUN_00055730(int param_1)

{
  uint uVar1;
  undefined4 unaff_pfp;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  iVar3 = param_1 * 0xb4;
  puVar9 = (undefined4 *)(&DAT_0056aa70 + iVar3);
  puVar8 = (undefined4 *)(&DAT_00589c10 + iVar3);
  iVar2 = 0;
  puVar4 = (undefined4 *)(&DAT_00589c18 + iVar3);
  puVar6 = (undefined4 *)(&DAT_0056aa78 + iVar3);
  puVar5 = puVar4;
  puVar7 = puVar6;
  do {
    *puVar9 = g14;
    puVar6[-1] = g14;
    *puVar7 = g14;
    *puVar8 = g14;
    puVar9[3] = g14;
    puVar4[-1] = g14;
    puVar6[2] = g14;
    *puVar5 = g14;
    puVar7[3] = g14;
    puVar8[3] = g14;
    puVar9[6] = g14;
    puVar4[2] = g14;
    puVar6[5] = g14;
    puVar5[3] = g14;
    puVar7[6] = g14;
    puVar8[6] = g14;
    puVar9[9] = g14;
    puVar4[5] = g14;
    puVar6[8] = g14;
    puVar5[6] = g14;
    puVar7[9] = g14;
    puVar8[9] = g14;
    puVar9[0xc] = g14;
    puVar4[8] = g14;
    puVar6[0xb] = g14;
    puVar5[9] = g14;
    puVar7[0xc] = g14;
    iVar2 = iVar2 + 5;
    uVar1 = ac & 0xfffffff8 | (uint)(0xe < iVar2) << 2 | (uint)(iVar2 == 0xe) << 1;
    ac = uVar1 | iVar2 < 0xe;
    puVar8[0xc] = g14;
    puVar7 = puVar7 + 0xf;
    puVar4[0xb] = g14;
    puVar6 = puVar6 + 0xf;
    puVar5[0xc] = g14;
    puVar9 = puVar9 + 0xf;
    puVar5 = puVar5 + 0xf;
    puVar4 = puVar4 + 0xf;
    puVar8 = puVar8 + 0xf;
  } while (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) == 1);
  iVar2 = param_1 * 0xc;
  *(undefined4 *)(&DAT_0056ad80 + iVar2) = 0;
  *(undefined4 *)(&DAT_0056ad84 + iVar2) = 0;
  *(undefined4 *)(&DAT_0056ad88 + iVar2) = 0;
  *(undefined4 *)(&DAT_0056acb0 + iVar2) = 0;
  *(undefined4 *)(&DAT_0056acb4 + iVar2) = 0;
  *(undefined4 *)(&DAT_0056acb8 + iVar2) = 0;
  *(undefined4 *)(&DAT_005888d0 + iVar2) = 0;
  *(undefined4 *)(&DAT_005888d4 + iVar2) = 0;
  *(undefined4 *)(&DAT_005888d8 + iVar2) = 0;
  *(undefined4 *)(&DAT_00589bf0 + iVar2) = 0;
  *(undefined4 *)(&DAT_00589bf4 + iVar2) = 0;
  *(undefined4 *)(&DAT_00589bf8 + iVar2) = 0;
  fp = unaff_pfp;
  return;
}

