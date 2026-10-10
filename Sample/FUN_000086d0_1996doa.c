
void Tile_Expand1bppTo4bpp8x8_candidate
               (byte *param_1,uint *param_2,int param_3,uint param_4,uint param_5)

{
  bool bVar1;
  uint uVar2;
  undefined4 unaff_pfp;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  g13 = 0;
  do {
    iVar7 = 8;
    do {
      iVar6 = 8;
      bVar3 = *param_1;
      param_1 = param_1 + 1;
      uVar5 = 0;
      do {
        uVar5 = uVar5 * 0x10;
        uVar2 = ac & 0xfffffff8;
        if ((bVar3 & 0x80) == 0) {
          uVar5 = uVar5 + (param_4 & 0xf);
        }
        bVar3 = bVar3 * '\x02';
        uVar4 = uVar2 | (uint)(1 < iVar6) << 2;
        ac = uVar4 | iVar6 < 1;
        iVar6 = iVar6 + -1;
      } while (((byte)ac & 1 | (byte)(uVar4 >> 2) & 1) == 1);
      uVar4 = uVar5;
      if ((int)(uVar5 << 4) <= (int)uVar5 && (int)uVar5 <= (int)(uVar5 << 4)) {
        uVar4 = g13 & 1 | uVar5;
      }
      *param_2 = uVar4;
      param_2 = param_2 + 1;
      g13 = uVar5 * (param_5 & 0xf) >> 4;
      bVar1 = 1 < iVar7;
      ac = uVar2 | iVar7 < 1;
      iVar7 = iVar7 + -1;
    } while (((byte)ac & 1 | bVar1) == 1);
    uVar2 = uVar2 | (uint)(1 < param_3) << 2;
    ac = uVar2 | (uint)(param_3 == 1) << 1 | (uint)(param_3 < 1);
    param_3 = param_3 + -1;
  } while (((byte)ac & 1 | (byte)(uVar2 >> 2) & 1) == 1);
  fp = unaff_pfp;
  return;
}

