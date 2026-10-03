
int FUN_8c035174(uint param_1,byte param_2)

{
  undefined *puVar1;
  char *pcVar2;
  code *pcVar3;
  undefined *puVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  char *pcVar13;
  undefined4 uVar14;
  
  uVar14 = 0;
  puVar1 = PTR_BYTE_8c03531c;
  puVar4 = PTR_cutscene_actor_data_8c035320;
  pcVar13 = *(char **)(puVar4 + (uint)(byte)puVar1[param_1 & 0xff] * 4);
  uVar11 = (uint)*pcVar13;
  if (uVar11 == 0xffffffff) {
    pbVar5 = PTR_CHAR__var0b_8c035324;
    uVar11 = (uint)*pbVar5;
  }
  else if (uVar11 == 0xfffffffe) {
    puVar1 = PTR_DAT_8c03530c;
    uVar11 = (uint)(byte)puVar1[param_2];
  }
  uVar6 = FUN_8c034696(uVar11,pcVar13[1],param_2);
  iVar12 = 0;
  iVar7 = FUN_8c034404((char)uVar11,(char)uVar6);
  if (iVar7 == -1) {
    pcVar2 = PTR_DAT_8c035314;
    uVar10 = 0;
    if (*pcVar2 == '\0') {
      uVar8 = FUN_8c034f98();
      uVar10 = (undefined1)uVar8;
    }
    else if (*pcVar2 == '\x01') {
      uVar9 = FUN_8c034ff4();
      uVar10 = (undefined1)uVar9;
    }
    pcVar3 = (code *)PTR_FUN_8c035318;
    (*pcVar3)(uVar10,0,uVar11 & 0xff,uVar6 & 0xff,uVar14);
    iVar12 = 1;
  }
  if (iVar12 == 0) {
    uVar11 = (uint)pcVar13[2];
    if (uVar11 == 0xffffffff) {
      pbVar5 = PTR_CHAR__var0b_8c035324;
      uVar11 = (uint)*pbVar5;
    }
    else if (uVar11 == 0xfffffffe) {
      puVar1 = PTR_DAT_8c03530c;
      uVar11 = (uint)(byte)puVar1[param_2];
    }
    uVar6 = FUN_8c034696(uVar11,pcVar13[3],param_2);
    iVar12 = 0;
    iVar7 = FUN_8c034404((char)uVar11,(char)uVar6);
    if (iVar7 == -1) {
      pcVar13 = PTR_DAT_8c035314;
      uVar10 = 0;
      if (*pcVar13 == '\0') {
        uVar14 = FUN_8c034f98();
        uVar10 = (undefined1)uVar14;
      }
      else if (*pcVar13 == '\x01') {
        uVar9 = FUN_8c034ff4();
        uVar10 = (undefined1)uVar9;
      }
      pcVar3 = (code *)PTR_FUN_8c035318;
      (*pcVar3)(uVar10,0,uVar11 & 0xff,uVar6 & 0xff);
      iVar12 = 1;
    }
  }
  return iVar12;
}

