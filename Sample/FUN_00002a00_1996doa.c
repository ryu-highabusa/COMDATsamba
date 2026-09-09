
undefined4 FUN_00002a00(undefined2 *param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  undefined4 unaff_pfp;
  byte *pbVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  
  DAT_01d84000 = *param_1;
  do {
    ac = ac & 0xfffffff8 | (uint)(0xfff0 < (ushort)DWORD_01d8400c);
  } while (((byte)ac & 1 | (ushort)DWORD_01d8400c < 0xfff0) == 1);
  puVar5 = (undefined2 *)(*(int *)(param_1 + 8) + 4);
  puVar6 = (undefined2 *)(&DAT_01d80000 + (uint)(ushort)param_1[0xc] * 2);
  iVar7 = 0;
  while (ac = ac & 0xfffffff8 | (uint)(iVar7 < (int)((*(int *)(param_1 + 10) - 3U) / 2)) << 2,
        ((byte)(ac >> 2) & 1) == 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
    iVar7 = iVar7 + 1;
  }
  do {
    ac = ac & 0xfffffff8 | (uint)(0xfff0 < (ushort)DWORD_01d8400c);
  } while (((byte)ac & 1 | (ushort)DWORD_01d8400c < 0xfff0) == 1);
  puVar6 = *(undefined2 **)(param_1 + 6);
  iVar7 = 0;
  do {
    puVar6 = puVar6 + 1;
    do {
      uVar1 = ac;
      ac = ac & 0xfffffff8 | (uint)(0xfff0 < (ushort)DWORD_01d8400c);
    } while (((byte)ac & 1 | (ushort)DWORD_01d8400c < 0xfff0) == 1);
    iVar7 = iVar7 + 1;
    uVar1 = uVar1 & 0xfffffff8 | (uint)(iVar7 == 0x17) << 1;
    ac = uVar1 | iVar7 < 0x17;
  } while (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) == 1);
  DAT_01d87ff4 = 0x80;
  do {
    ac = ac & 0xfffffff8 | (uint)(0xfff0 < (ushort)DWORD_01d8400c);
  } while (((byte)ac & 1 | (ushort)DWORD_01d8400c < 0xfff0) == 1);
  iVar7 = 0;
  do {
    DAT_01d87ff6 = *puVar6;
    puVar6 = puVar6 + 1;
    do {
      uVar1 = ac;
      ac = ac & 0xfffffff8 | (uint)(0xfff0 < (ushort)DWORD_01d8400c);
    } while (((byte)ac & 1 | (ushort)DWORD_01d8400c < 0xfff0) == 1);
    iVar7 = iVar7 + 1;
    ac = uVar1 & 0xfffffff8 | (uint)(iVar7 == 0x7f) << 1;
  } while (((byte)(ac >> 1) & 1 | iVar7 < 0x7f) == 1);
  DAT_01d87ff0 = g14;
  do {
    ac = ac & 0xfffffff8 | (uint)(0xfff0 < (ushort)DWORD_01d8400c);
  } while (((byte)ac & 1 | (ushort)DWORD_01d8400c < 0xfff0) == 1);
  DAT_01d87ff2 = param_1[0xc];
  do {
    ac = ac & 0xfffffff8 | (uint)(0xfff0 < (ushort)DWORD_01d8400c);
  } while (((byte)ac & 1 | (ushort)DWORD_01d8400c < 0xfff0) == 1);
  do {
    uVar1 = ac;
    ac = ac & 0xfffffff8 | (uint)(0xfff0 < (ushort)DWORD_01d8400c);
  } while (((byte)ac & 1 | (ushort)DWORD_01d8400c < 0xfff0) == 1);
  iVar7 = 0;
  if ((*(int *)(param_1 + 4) + 1U) / 2 != 0) {
    do {
      *(ushort *)(&DAT_0054b3b0 + iVar7 * 2) = (DAT_01d87ff8 >> 8) + DAT_01d87ff8 * 0x100;
      do {
      } while ((ushort)DWORD_01d8400c != 0xfff0);
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)((*(int *)(param_1 + 4) + 1U) / 2));
  }
  pbVar4 = *(byte **)(param_1 + 2);
  pbVar9 = &DAT_0054b3b0;
  iVar8 = 0;
  iVar7 = *(int *)(param_1 + 4);
  uVar1 = uVar1 & 0xfffffff8 | (uint)(0 < iVar7) << 2 | (uint)(iVar7 == 0) << 1;
  ac = uVar1 | iVar7 < 0;
  if (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) != 1) {
    iVar7 = *(int *)(param_1 + 4);
    do {
      uVar1 = ac;
      bVar2 = *pbVar4;
      bVar3 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      pbVar4 = pbVar4 + 1;
      ac = ac & 0xfffffff8 | (uint)(bVar2 < bVar3) << 2 | (uint)(bVar2 == bVar3) << 1 |
           (uint)(bVar3 < bVar2);
      if (((byte)ac & 1 | bVar2 < bVar3) == 1) {
        fp = unaff_pfp;
        return 0;
      }
      iVar8 = iVar8 + 1;
      ac = uVar1 & 0xfffffff8 | (uint)(iVar8 < iVar7) << 2 | (uint)(iVar8 == iVar7) << 1 |
           (uint)(iVar7 < iVar8);
    } while (iVar8 < iVar7);
  }
  fp = unaff_pfp;
  return 1;
}

