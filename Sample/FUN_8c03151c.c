
int FUN_8c03151c(void)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  byte *pbVar4;
  undefined *puVar5;
  byte *pbVar6;
  int iVar7;
  
  pcVar2 = BYTE_8c1fdc2c;
  pcVar3 = BYTE_8c1fad2c;
  pcVar1 = BYTE_8c1fac41;
  iVar7 = (int)*pcVar1;
  if (*pcVar2 == 0) {
    if (*pcVar3 == 5) {
      iVar7 = 2;
    }
    else {
      pbVar4 = BYTE_8c1fdc18;
      puVar5 = BYTE_8c1fa18d;
      iVar7 = (int)(char)puVar5[*pbVar4];
    }
  }
  else if (*pcVar2 == 1) {
    pbVar4 = BYTE_8c1faf7c
    if (*pcVar3 == 9) {
      iVar7 = 8;
      if (100 < *pbVar4) {
        *pbVar4 = 10;
      }
    }
    else {
      pcVar1 = BYTE_8c1faf82
      if (*pcVar1 == 0) {
        pbVar6 = STORY_GAMEPLAY_START_RAM_FLAG_8c1fdc22;
        puVar5 = BYTE_8c1faf7d;
        if (puVar5[*pbVar6 ^ 1] == 0) {
          pbVar4 = BYTE_8c1fdc1b;
          puVar5 = StageOrder_Versus_8c14ea2d;
          iVar7 = (int)(char)puVar5[*pbVar4];
          *pbVar4 = *pbVar4 + 1;
          if (23 < *pbVar4) {
            *pbVar4 = 0;
          }
        }
        else {
          iVar7 = 2;
          if (100 < *pbVar4) {
            *pbVar4 = 10;
          }
        }
      }
    }
    pbVar4 = PTR_BYTE_8c031694;
    *pbVar4 = *pbVar4 + 1;
    if (11 < *pbVar4) {
      *pbVar4 = 0;
    }
  }
  return iVar7;
}

