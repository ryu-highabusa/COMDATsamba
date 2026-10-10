
int FUN_00004890(void)

{
  uint uVar1;
  undefined4 unaff_pfp;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    uVar1 = ac;
    uVar2 = (&RankingTime1stScore_01d0025c)[iVar3 * 3];
    ac = ac & 0xfffffff8 | (uint)(uVar2 < 359999) << 2 | (uint)(uVar2 == 359999) << 1 |
         (uint)(359999 < uVar2);
    if (((byte)ac & 1) == 1) {
      fp = unaff_pfp;
      return 1;
    }
    iVar3 = iVar3 + 1;
    uVar1 = uVar1 & 0xfffffff8 | (uint)(19 < iVar3) << 2 | (uint)(iVar3 == 19) << 1;
    ac = uVar1 | iVar3 < 19;
  } while (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) == 1);
  fp = unaff_pfp;
  return 0;
}

