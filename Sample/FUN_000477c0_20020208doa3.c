
void FUN_000477c0(int param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 unaff_pfp;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  
  puVar2 = PTR_DAT_000006a0;
  DAT_00880050 = 0x505;
  pcVar7 = &g_player_secondary_motion_groups + param_1 * 0x618 + param_2 * 0x68;
  iVar3 = (int)*pcVar7;
  iVar4 = 0;
  uVar1 = ac & 0xfffffff8 | (uint)(0 < iVar3) << 2 | (uint)(iVar3 == 0) << 1;
  ac = uVar1 | iVar3 < 0;
  g13 = pcVar7 + 4;
  if (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) != 1) {
    pcVar6 = pcVar7 + 0x10;
    pcVar5 = pcVar7 + 0xc;
    do {
      pcVar7 = pcVar7 + 0x14;
      puVar8 = (undefined4 *)PTR_ARRAY_000c50c0[*g13];
      DAT_008801a0 = 0x1a1a;
      uVar11 = puVar8[1];
      uVar9 = puVar8[2];
      *(undefined4 *)puVar2 = *puVar8;
      *(undefined4 *)puVar2 = uVar11;
      *(undefined4 *)puVar2 = uVar9;
      *(undefined4 *)pcVar5 = *(undefined4 *)puVar2;
      iVar4 = iVar4 + 1;
      *(undefined4 *)pcVar6 = *(undefined4 *)puVar2;
      iVar10 = iVar4 * 0x10000 >> 0x10;
      ac = ac & 0xfffffff8 | (uint)(iVar3 < iVar10) << 2 | (uint)(iVar3 == iVar10) << 1 |
           (uint)(iVar10 < iVar3);
      g13 = g13 + 0x14;
      pcVar5 = pcVar5 + 0x14;
      pcVar6 = pcVar6 + 0x14;
      DAT_00880050 = 0x505;
      *(undefined4 *)pcVar7 = *(undefined4 *)puVar2;
    } while (((byte)ac & 1) == 1);
  }
  DAT_00880060 = 0x606;
  fp = unaff_pfp;
  return;
}

