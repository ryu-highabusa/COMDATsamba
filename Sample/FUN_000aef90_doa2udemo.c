
byte FUN_000aef90(void)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  
  bVar3 = *(byte *)((int)&DAT_0079d3d4 + (uint)DAT_007987e9);
  iVar2 = FUN_00235190();
  if ((iVar2 != 0) && (iVar2 = FUN_00234490(), iVar2 != 0)) {
    if ((byte)(DAT_0079a030 + 1) < 0xc) {
      DAT_0079a030 = DAT_0079a030 + 1;
      return bVar3;
    }
    DAT_0079a030 = 0;
    return bVar3;
  }
  if (DAT_007987e8 == '\0') {
    return (&DAT_007bed6c)[DAT_0079882c];
  }
  if (DAT_007987e8 != '\x01') {
    return bVar3;
  }
  if (DAT_0079d3d0 == '\x06') {
    bVar3 = 9;
  }
  else if (DAT_0079d8bd == '\0') {
    if (DAT_007980db == '\0') {
      bVar3 = DAT_007bed50;
      if (DAT_0079d8ad != '\x01') {
        uVar1 = (uint)DAT_007987f5;
        DAT_007987f5 = DAT_007987f5 + 1;
        bVar3 = (&stagelistsinglesmode___)[uVar1];
        if (0x14 < DAT_007987f5) {
          DAT_007987f5 = 0;
        }
      }
    }
    else if (((((DAT_0079d3d0 == '\x05') || (DAT_0079d3d0 == '\b')) || (DAT_0079d3d0 == '\x04')) ||
             (DAT_0079d3d0 == '\x03')) && (DAT_0079d8ad == '\x01')) {
      bVar3 = DAT_007bed50;
    }
  }
  else {
    if (DAT_007980db == '\0') {
      if (DAT_0079d8ad != '\x01') {
        bVar3 = (&stagetag___)[DAT_0079d810];
        DAT_0079d810 = DAT_0079d810 + 1;
        if ((&stagetag___)[DAT_0079d810] == 0xff) {
          DAT_0079d810 = 0;
        }
      }
    }
    else if (DAT_0079d8ad != '\x01') goto LAB_000af0b6;
    if (100 < DAT_0079d8bc) {
      DAT_0079d8bc = 10;
    }
  }
LAB_000af0b6:
  if ((byte)(DAT_0079a030 + 1) < 0xc) {
    DAT_0079a030 = DAT_0079a030 + 1;
    return bVar3;
  }
  DAT_0079a030 = 0;
  return bVar3;
}

