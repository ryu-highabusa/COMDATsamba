
void FUN_8c033ea0(void)

{
  byte bVar1;
  byte *pbVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte *pbVar5;
  char *pcVar6;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  char *pcVar15;
  undefined4 uVar16;
  
  uVar16 = 1;
  pbVar2 = PTR_DAT_8c033ffc;
  puVar3 = PTR_BYTE_8c034000;
  pbVar5 = PTR_BYTE_8c034008;
  puVar4 = PTR_cutscene_actor_data_8c034004;
  pcVar15 = *(char **)(puVar4 + (uint)(byte)puVar3[*pbVar2] * 4);
  uVar13 = (uint)*pcVar15;
  if (uVar13 == 0xffffffff) {
    pbVar2 = PTR_CHAR__var0b_8c03400c;
    uVar13 = (uint)*pbVar2;
  }
  else if (uVar13 == 0xfffffffe) {
    puVar3 = PTR_DAT_8c034010;
    uVar13 = (uint)(byte)puVar3[*pbVar5];
  }
  uVar10 = FUN_8c034696(uVar13,pcVar15[1],*pbVar5);
  uVar14 = (uint)pcVar15[2];
  if (uVar14 == 0xffffffff) {
    pbVar2 = PTR_CHAR__var0b_8c03400c;
    uVar14 = (uint)*pbVar2;
  }
  else if (uVar14 == 0xfffffffe) {
    puVar3 = PTR_DAT_8c034010;
    uVar14 = (uint)(byte)puVar3[*pbVar5];
  }
  uVar11 = FUN_8c034696(uVar14,pcVar15[3],*pbVar5);
  bVar8 = false;
  iVar12 = FUN_8c034404((char)uVar13,(char)uVar10);
  if (iVar12 == -1) {
    pcVar6 = PTR_DAT_8c034014;
    uVar9 = 0;
    if (*pcVar6 == '\0') {
      UNRECOVERED_JUMPTABLE = (code *)PTR_FUN_8c034018;
      uVar9 = (*UNRECOVERED_JUMPTABLE)(uVar16);
    }
    else if (*pcVar6 == '\x01') {
      UNRECOVERED_JUMPTABLE = (code *)PTR_FUN_8c03401c;
      uVar9 = (*UNRECOVERED_JUMPTABLE)();
    }
    UNRECOVERED_JUMPTABLE = (code *)PTR_FUN_8c034020;
    (*UNRECOVERED_JUMPTABLE)(uVar9,0,(char)uVar13,uVar10 & 0xff);
    bVar8 = true;
  }
  bVar7 = true;
  if (!bVar8) {
    bVar7 = false;
    iVar12 = FUN_8c034404((char)uVar14,(char)uVar11);
    if (iVar12 == -1) {
      pcVar6 = PTR_DAT_8c034014;
      uVar9 = 0;
      if (*pcVar6 == '\0') {
        UNRECOVERED_JUMPTABLE = (code *)PTR_FUN_8c034018;
        uVar9 = (*UNRECOVERED_JUMPTABLE)();
      }
      else if (*pcVar6 == '\x01') {
        UNRECOVERED_JUMPTABLE = (code *)PTR_FUN_8c0340fc;
        uVar9 = (*UNRECOVERED_JUMPTABLE)();
      }
      UNRECOVERED_JUMPTABLE = (code *)PTR_FUN_8c034100;
      (*UNRECOVERED_JUMPTABLE)(uVar9,0,uVar14 & 0xff,uVar11 & 0xff);
      bVar7 = true;
    }
  }
  iVar12 = FUN_8c03462c(pcVar15[4]);
  if ((char)iVar12 == -1) {
    pbVar2 = PTR_DAT_8c034104;
    UNRECOVERED_JUMPTABLE = (code *)PTR_FUN_8c034108;
    bVar1 = *pbVar2;
    (*UNRECOVERED_JUMPTABLE)((int)(char)(bVar1 ^ 1),(int)pcVar15[4]);
    puVar3 = PTR_BYTE_8c03410c;
    bVar7 = true;
    puVar3[(char)(bVar1 ^ 1)] = pcVar15[4];
  }
  if (!bVar7) {
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)PTR_FUN_8c034110;
                    /* WARNING: Could not recover jumptable at 0x8c034096. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(0);
  return;
}

