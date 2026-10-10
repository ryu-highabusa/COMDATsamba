
void FUN_00013db0(int param_1)

{
  uint uVar1;
  short *psVar2;
  DOA1_CHARACTER_ID DVar3;
  short sVar4;
  uint uVar5;
  undefined4 unaff_pfp;
  short *psVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  short *psVar10;
  
  DAT_00557a80 = DAT_00557a80 ^ 1;
  if (param_1 == 0) {
    ac = ac & 0xfffffff8 | (uint)(g_effective_nation != JAPAN);
    psVar6 = &DAT_01000244;
    DVar3 = g_player1.character_id;
    if (((byte)ac & 1) != 1) {
      iVar8 = (int)(short)(&WORD_00090b70)[g_player1.character_id];
      goto LAB_00013e30;
    }
  }
  else {
    ac = ac & 0xfffffff8 | (uint)(g_effective_nation != JAPAN);
    psVar6 = &DAT_01000206;
    DVar3 = g_player2.character_id;
    if (((byte)ac & 1) != 1) {
      iVar8 = (int)(short)(&WORD_00090b70)[g_player2.character_id];
      goto LAB_00013e30;
    }
  }
  iVar8 = (int)(short)(&WORD_00090b8a)[DVar3];
LAB_00013e30:
  iVar7 = 0;
  sVar4 = (short)*(undefined4 *)(&DAT_00555660 + DAT_00557a80 * 0xc) * 0x80 + -0x8000;
  psVar10 = (short *)(PTR_ARRAY_020c0008[iVar8 * 3] + 4);
  do {
    iVar8 = 0;
    psVar9 = psVar6;
    do {
      uVar5 = ac;
      *psVar9 = sVar4 + *psVar10;
      psVar9[1] = sVar4 + psVar10[1];
      psVar9[2] = sVar4 + psVar10[2];
      iVar8 = iVar8 + 5;
      uVar1 = ac & 0xfffffff8 | (uint)(iVar8 == 0x18) << 1;
      ac = uVar1 | iVar8 < 0x18;
      psVar9[3] = sVar4 + psVar10[3];
      psVar2 = psVar10 + 4;
      psVar10 = psVar10 + 5;
      psVar9[4] = sVar4 + *psVar2;
      psVar9 = psVar9 + 5;
    } while (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) == 1);
    iVar7 = iVar7 + 1;
    uVar1 = uVar5 & 0xfffffff8 | (uint)(0x18 < iVar7) << 2 | (uint)(iVar7 == 0x18) << 1;
    ac = uVar1 | iVar7 < 0x18;
    psVar6 = psVar6 + 0x40;
  } while (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) == 1);
  fp = unaff_pfp;
  return;
}

