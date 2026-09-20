
void FUN_000419b0_kasumicostumecheckmaybe(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 unaff_pfp;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  uVar4 = ac;
  iVar1 = param_1 * 0x6c;
  *(int *)(&DAT_00565d60 + iVar1) = param_2;
  (&DWORD_00565d98)[param_1 * 0x1b] = g14;
  (&DWORD_00565db4)[param_1 * 0x1b] = 0;
  (&DWORD_00565db8)[param_1 * 0x1b] = 0;
  (&DWORD_00565dbc)[param_1 * 0x1b] = 0;
  (&DWORD_00565d9c)[param_1 * 0x1b] = g14;
  (&DWORD_00565da0)[param_1 * 0x1b] = g14;
  (&DWORD_00565da4)[param_1 * 0x1b] = g14;
  (&DWORD_00565dac)[param_1 * 0x1b] = 0;
  (&DWORD_00565da8)[param_1 * 0x1b] = g14;
  *(dword *)(&DAT_00565d64 + iVar1) = g14;
  *(dword *)(&DAT_00565d68 + iVar1) = g14;
  *(dword *)(&DAT_00565d6c + iVar1) = g14;
  *(undefined4 *)(&DAT_00565d70 + iVar1) = 0x1e;
  puVar6 = (undefined4 *)PTR_ARRAY_000d8038[param_2];
  puVar5 = (undefined4 *)*puVar6;
  *(undefined4 *)(&DAT_00565d74 + iVar1) = *puVar5;
  (&DWORD_00565db0)[param_1 * 0x1b] = puVar5[1];
  (&DWORD_00565dc0)[param_1 * 0x1b] = puVar6[1];
  uVar3 = ac & 0xfffffff8 | (uint)(param_2 < NAME_KASUMI) << 2;
  ac = uVar3 | (uint)(param_2 == NAME_KASUMI) << 1 | (uint)(NAME_KASUMI < param_2);
  (&DWORD_00565dc4)[param_1 * 0x1b] = puVar6[2];
  if (((byte)ac & 1 | (byte)(uVar3 >> 2) & 1) != 1) {
    bVar2 = (&g_player1)[param_1].costume_id;
    ac = uVar4 & 0xfffffff8 | (uint)(2 < bVar2) << 2 | (uint)(bVar2 == 2) << 1 | (uint)(bVar2 < 2);
    if (((byte)ac & 1 | 2 < bVar2) != 1) {
      *(dword **)(&DAT_00565dc8 + iVar1) = &DWORD_000bc0b0;
      fp = unaff_pfp;
      return;
    }
  }
  *(undefined4 *)(&DAT_00565dc8 + iVar1) = puVar6[3];
  fp = unaff_pfp;
  return;
}

