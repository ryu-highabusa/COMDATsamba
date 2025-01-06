
undefined8
FUN_0028a788(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5,
            ulong param_6,ulong param_7,undefined8 param_8)

{
  char cVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  
  cVar1 = DAT_0067bf75;
  if (DAT_0067b225 == '\x01') {
    uVar5 = (ulong)DAT_0067b162;
    if ((uVar5 == 7) || (uVar5 == 0xb)) {
      cVar2 = FUN_00384450();
      lVar4 = (long)cVar2;
    }
    else if ((byte)(DAT_0067b162 - 0xe) < 2) {
      iVar3 = FUN_0028ea10(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      lVar4 = (long)iVar3;
    }
    else {
      iVar3 = FUN_0028d220();
      lVar4 = (long)iVar3;
    }
    if (lVar4 == 2) {
      return 2;
    }
    cVar2 = FUN_0028d438();
    uVar6 = (uint)DAT_0067b162;
    if ((uVar6 == 7) || (uVar6 == 0xb)) {
      cVar2 = -1;
    }
    if ((DAT_0067b224 == cVar2) || (lVar4 != 0)) {
      if (uVar6 - 0xe < 2) {
        FUN_00269c08();
      }
      DAT_0067b225 = '\0';
      DAT_0067b163 = 0;
      uVar5 = FUN_0021ef20();
      FUN_0021ec90(uVar5,0);
      FUN_002891b8();
      DAT_0067bf75 = '\0';
      DAT_0067bf82 = 0;
      DAT_0067bf83 = 0;
      FUN_00310d40();
      DAT_004a2bd3 = DAT_0067bf88;
      DAT_004a2c3b = DAT_0067bf89;
      uVar5 = FUN_0021ef20();
      FUN_0021ec90(uVar5,0);
      FUN_0021ed18();
    }
    if (lVar4 == 3) {
      return 3;
    }
    if (lVar4 == 4) {
      return 4;
    }
  }
  else {
    if ((DAT_0067b162 == 7) || (DAT_0067b162 == 0xb)) {
      FUN_00384488();
    }
    lVar4 = FUN_0028d438();
    if (-1 < lVar4) {
      DAT_0067b224 = (char)lVar4;
      DAT_0067b225 = '\x01';
      FUN_00289170();
      DAT_0067bf3e = 0x1e;
      DAT_0067bf75 = '\x01';
      DAT_0067be48 = 2;
      DAT_0067bf08 = 0;
      if (DAT_0067b162 - 0xe < 2) {
        DAT_0067be48 = 4;
        FUN_0028e9b0();
      }
      DAT_0067bf9c = 0;
      DAT_0067be4c = 0;
    }
  }
  if (DebugFlag___0067bf70 == 1) {
    Debug___FUN_0028a9c8();
  }
  if (cVar1 != DAT_0067bf75) {
    if (DAT_0067bf75 == '\0') {
      FUN_002b5908();
      FUN_002b6728();
    }
    else {
      FUN_002b58d8();
      FUN_002b6708();
    }
  }
  return 0;
}

