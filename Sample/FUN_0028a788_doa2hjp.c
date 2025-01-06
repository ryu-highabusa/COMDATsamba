
undefined8
FUN_0028a788(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5,
            ulong param_6,ulong param_7,undefined8 param_8)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  
  bVar1 = Pause_Flag_0067bf75;
  if (Pause_Display_0067b225 == 1) {
    uVar6 = (ulong)BYTE_0067b162;
    if ((uVar6 == 7) || (uVar6 == 0xb)) {
      cVar2 = FUN_00384450();
      lVar5 = (long)cVar2;
    }
    else if ((byte)(BYTE_0067b162 - 0xe) < 2) {
      iVar4 = FUN_0028ea10(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      lVar5 = (long)iVar4;
    }
    else {
      iVar4 = FUN_0028d220();
      lVar5 = (long)iVar4;
    }
    if (lVar5 == 2) {
      return 2;
    }
    bVar3 = FUN_0028d438();
    uVar7 = (uint)BYTE_0067b162;
    if ((uVar7 == 7) || (uVar7 == 0xb)) {
      bVar3 = 0xff;
    }
    if ((BYTE_0067b224 == bVar3) || (lVar5 != 0)) {
      if (uVar7 - 0xe < 2) {
        FUN_00269c08();
      }
      Pause_Display_0067b225 = 0;
      BYTE_0067b163 = 0;
      uVar6 = FUN_0021ef20();
      FUN_0021ec90(uVar6,0);
      FUN_002891b8();
      Pause_Flag_0067bf75 = 0;
      BYTE_0067bf82 = 0;
      BYTE_0067bf83 = 0;
      FUN_00310d40();
      BYTE_004a2bd3 = BYTE_0067bf88;
      BYTE_004a2c3b = BYTE_0067bf89;
      uVar6 = FUN_0021ef20();
      FUN_0021ec90(uVar6,0);
      FUN_0021ed18();
    }
    if (lVar5 == 3) {
      return 3;
    }
    if (lVar5 == 4) {
      return 4;
    }
  }
  else {
    if ((BYTE_0067b162 == 7) || (BYTE_0067b162 == 0xb)) {
      FUN_00384488();
    }
    lVar5 = FUN_0028d438();
    if (-1 < lVar5) {
      BYTE_0067b224 = (byte)lVar5;
      Pause_Display_0067b225 = 1;
      FUN_00289170();
      BYTE_0067bf3e = 0x1e;
      Pause_Flag_0067bf75 = 1;
      DWORD_0067be48 = 2;
      Pause_Timer_0067bf08 = 0;
      if (BYTE_0067b162 - 0xe < 2) {
        DWORD_0067be48 = 4;
        FUN_0028e9b0();
      }
      BYTE_0067bf9c = 0;
      DWORD_0067be4c = 0;
    }
  }
  if (DebugFlag___0067bf70 == 1) {
    Debug___FUN_0028a9c8();
  }
  if (bVar1 != Pause_Flag_0067bf75) {
    if (Pause_Flag_0067bf75 == 0) {
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

