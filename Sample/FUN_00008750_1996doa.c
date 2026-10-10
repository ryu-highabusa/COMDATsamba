
void Tile_Expand2bppTo4bpp8x8_candidate(ushort *param_1,int *param_2,int param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 unaff_pfp;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  do {
    g13 = 8;
    do {
      iVar5 = 8;
      uVar4 = (uint)*param_1;
      param_1 = param_1 + 1;
      iVar3 = 0;
      do {
        uVar2 = ac;
        iVar3 = iVar3 * 0x10;
        if ((uVar4 & 0xc000) != 0) {
          iVar3 = iVar3 + ((param_4 & 0xf0f0f0f) >> ((uVar4 & 0xc000) >> 0xb) & 0xf);
        }
        uVar4 = uVar4 << 2;
        bVar1 = 1 < iVar5;
        ac = ac & 0xfffffff8 | (uint)(iVar5 < 1);
        iVar5 = iVar5 + -1;
      } while (((byte)ac & 1 | bVar1) == 1);
      *param_2 = iVar3;
      param_2 = param_2 + 1;
      bVar1 = 1 < g13;
      ac = uVar2 & 0xfffffff8 | (uint)(g13 < 1);
      g13 = g13 + -1;
    } while (((byte)ac & 1 | bVar1) == 1);
    uVar4 = uVar2 & 0xfffffff8 | (uint)(1 < param_3) << 2;
    ac = uVar4 | (uint)(param_3 == 1) << 1 | (uint)(param_3 < 1);
    param_3 = param_3 + -1;
  } while (((byte)ac & 1 | (byte)(uVar4 >> 2) & 1) == 1);
  fp = unaff_pfp;
  return;
}

