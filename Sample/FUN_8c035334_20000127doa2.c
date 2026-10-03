
uint FUN_8c035334(uint param_1,byte param_2)

{
  byte bVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte *pbVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  
  puVar3 = PTR_BYTE_8c035520;
  puVar4 = PTR_cutscene_actor_data_8c035524;
  pcVar14 = *(char **)(puVar4 + (uint)(byte)puVar3[param_1 & 0xff] * 4);
  uVar11 = (uint)*pcVar14;
  uVar13 = 0;
  if (uVar11 == 0xffffffff) {
    pbVar5 = PTR_CHAR__var0b_8c035528;
    uVar11 = (uint)*pbVar5;
  }
  else if (uVar11 == 0xfffffffe) {
    puVar3 = PTR_DAT_8c03552c;
    uVar11 = (uint)(byte)puVar3[param_2];
  }
  uVar7 = FUN_8c034696(uVar11,pcVar14[1],param_2);
  uVar12 = (uint)pcVar14[2];
  if (uVar12 == 0xffffffff) {
    pbVar5 = PTR_CHAR__var0b_8c035528;
    uVar12 = (uint)*pbVar5;
  }
  else if (uVar12 == 0xfffffffe) {
    puVar3 = PTR_DAT_8c03552c;
    uVar12 = (uint)(byte)puVar3[param_2];
  }
  uVar8 = FUN_8c034696(uVar12,pcVar14[3],param_2);
  if (pcVar14[5] != -1) {
    uVar13 = FUN_8c0359d0(0,(char)uVar11,'\x01');
  }
  if (pcVar14[6] != -1) {
    uVar9 = FUN_8c0359d0(1,(char)uVar12,'\x01');
    uVar13 = uVar13 | uVar9;
  }
  FUN_8c0357b4((char)uVar11,(char)uVar7,(char)uVar12,(char)uVar8);
  cVar2 = pcVar14[4];
  uVar11 = 0;
  if ((-1 < cVar2) && (iVar10 = FUN_8c03462c(cVar2), iVar10 == -1)) {
    pbVar5 = PTR_DAT_8c035530;
    pcVar6 = (code *)PTR_FUN_8c035534;
    bVar1 = *pbVar5;
    (*pcVar6)((int)(char)(bVar1 ^ 1),(int)cVar2);
    puVar3 = PTR_BYTE_8c035538;
    puVar3[(char)(bVar1 ^ 1)] = cVar2;
    uVar11 = 1;
  }
  pcVar6 = (code *)PTR_FUN_8c03553c;
  uVar7 = (*pcVar6)(pcVar14);
  return uVar13 | uVar11 | uVar7;
}

