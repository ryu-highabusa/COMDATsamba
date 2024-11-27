
undefined8 Function_82512B18(undefined8 param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  
  iVar4 = FUN_829eecb0();
  uVar5 = Function_82512500();
  bVar1 = *(byte *)(iVar4 + 0x1c);
  pbVar6 = (byte *)FUN_82513768(*(undefined4 *)(iVar4 + 0x44),bVar1);
  if (*(int *)(pbVar6 + 0x24) != 3) {
    pbVar6 = &CharacterSelectSlotStory___FE_82c24698;
  }
  bVar2 = *pbVar6;
  if ((bVar2 != 0xff) && (bVar2 != 0xfe)) {
    iVar8 = 0;
    pbVar6 = &CHAR_NUM_P___830ef82d;
    do {
      if ((&BYTE_830a5268)[iVar8] != 0) {
        uVar7 = Function_82512500(pbVar6 + -0x1d);
        if (uVar7 + (((int)uVar7 >> 1) + (uint)((int)uVar7 < 0 && (uVar7 & 1) != 0)) * -2 !=
            (uVar5 & 0xff) + ((int)(uVar5 & 0xff) >> 1) * -2) {
          bVar3 = *pbVar6;
          if ((bVar3 == 0xff) || (bVar3 == 0xfe)) {
            uVar7 = 0;
          }
          else {
            uVar7 = (uint)(pbVar6 + -0x1d)[bVar3 + 0x70];
          }
          if ((uVar7 == (param_2 & 0xff)) && (pbVar6[-1] == bVar1)) {
            return 1;
          }
        }
      }
      pbVar6 = pbVar6 + 0x8c;
      iVar8 = iVar8 + 1;
    } while ((int)pbVar6 < -0x7cf105a3);
    uVar5 = Function_82512500(iVar4);
    iVar8 = 0;
    uVar5 = 1 - (uVar5 + (((int)uVar5 >> 1) + (uint)((int)uVar5 < 0 && (uVar5 & 1) != 0) &
                         0x7fffffff) * -2);
    iVar4 = (uVar5 & 0xff) * 0x10 - (uVar5 & 0xff);
    do {
      if (((&CHAR_NUM_P1_830ef630)[iVar8 + iVar4] == bVar2) &&
         ((int)(char)(&DAT_830ef678)[iVar4 + iVar8] == (param_2 & 0xff))) {
        return 1;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 0xf);
  }
  return 0;
}

