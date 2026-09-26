
uint32_t SelectPlayerResourceVariant
                   (uint32_t player_index,uint32_t p1_set0,uint32_t p2_set0,uint32_t p1_set1,
                   uint32_t p2_set1)

{
  uint uVar1;
  uint uVar2;
  undefined4 unaff_pfp;
  int iVar3;
  
  uVar2 = ac;
  iVar3 = player_index + (uint)(byte)(&DAT_005a6f1c)[player_index] * 3;
  uVar1 = ac & 0xfffffff8 | (uint)(1 < iVar3) << 2 | (uint)(iVar3 == 1) << 1;
  ac = uVar1 | iVar3 < 1;
  if (((byte)(uVar1 >> 1) & 1) == 1) {
    fp = unaff_pfp;
    return p2_set0;
  }
  if (iVar3 < 2) {
    uVar1 = uVar2 & 0xfffffff8 | (uint)(0 < iVar3) << 2 | (uint)(iVar3 == 0) << 1;
    ac = uVar1 | iVar3 < 0;
    if (((byte)(uVar1 >> 1) & 1) == 1) {
      fp = unaff_pfp;
      return p1_set0;
    }
  }
  else {
    uVar1 = uVar2 & 0xfffffff8 | (uint)(3 < iVar3) << 2 | (uint)(iVar3 == 3) << 1;
    ac = uVar1 | iVar3 < 3;
    if (((byte)(uVar1 >> 1) & 1) == 1) {
      fp = unaff_pfp;
      return p1_set1;
    }
    uVar1 = uVar2 & 0xfffffff8 | (uint)(4 < iVar3) << 2 | (uint)(iVar3 == 4) << 1;
    ac = uVar1 | iVar3 < 4;
    if (((byte)(uVar1 >> 1) & 1) == 1) {
      fp = unaff_pfp;
      return p2_set1;
    }
  }
  fp = unaff_pfp;
  return 0xffffffff;
}

