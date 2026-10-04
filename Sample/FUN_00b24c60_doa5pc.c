
undefined1 __cdecl FUN_00b24c60(int param_1,char param_2,byte param_3)

{
  char cVar1;
  uint uVar2;
  byte bVar3;
  
  if (param_2 != 0) {
    uVar2 = 0;
    do {
      if (param_1 == (&TagStage_ID_MAX)[uVar2]) {
        return (&tagstagegrouping)[uVar2];
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 10);
    return 1;
  }
  uVar2 = 0;
  do {
    if (param_1 == (&SingleStage_ID_MAX)[uVar2]) {
      bVar3 = param_3;
      if (param_1 == 0x21) {
        cVar1 = FUN_00a892c0(0,0x21);
        if (cVar1 != '\0') goto LAB_00b24cd3;
        bVar3 = 1;
      }
      cVar1 = FUN_00a892c0(bVar3,param_1);
      if (cVar1 != '\0') {
LAB_00b24cd3:
        return (&singlestagegrouping)[uVar2];
      }
    }
    uVar2 = uVar2 + 1;
    if (0x18 < uVar2) {
      return 1;
    }
  } while( true );
}

