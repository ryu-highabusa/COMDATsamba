
void FUN_82522af8(void)

{
  bool bVar1;
  bool bVar2;
  dword dVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  
  puVar4 = PTR_821b4db8;
  if ((char)GameMode_Current_830f7ba0 < '\0') {
    return;
  }
  if ((char)((char)GameMode_Max_830f7c28 + -1) < (char)GameMode_Current_830f7ba0) {
    return;
  }
  iVar8 = (int)(char)GameMode_Current_830f7ba0 + (char)GameMode_Current_830f7ba0 * 8;
  if (GameMode_ResetFlag_830f7c38 != 0) {
    Function_825230D0(0xffffffff830f7ba0);
    GameMode_ResetFlag_830f7c38 = 0;
  }
  dVar3 = GameMode_Stage_830f7bc8;
  FUN_82523248(0xffffffff830f7ba0);
  (**(code **)(puVar4 + iVar8 * 4 + 4))
            (0xffffffff830f7ba0,*(undefined4 *)(puVar4 + iVar8 * 4 + 0x20));
  FUN_82523248(0xffffffff830f7ba0);
  DAT_830f7bcc = dVar3;
  if (GameMode_Stage_830f7bc8 == 0) {
    if (DAT_830f7bd8 <= DAT_830f7bd4) {
      GameMode_Stage_830f7bc8 = 1;
    }
    goto LAB_82522ed4;
  }
  if (GameMode_Stage_830f7bc8 == 2) {
    iVar5 = Function_82522A30(0xffffffff830f7ba0);
    if (iVar5 == 0) goto LAB_82522ed4;
    DAT_830f7bbc = 1;
    if (*(code **)(PTR_821b5040 + 0x1c) != (code *)0x0) {
      (**(code **)(PTR_821b5040 + 0x1c))(0xffffffff830f7ba0,*(undefined4 *)(PTR_821b5040 + 0x20));
    }
    if (*(code **)(puVar4 + iVar8 * 4 + 0x1c) != (code *)0x0) {
      (**(code **)(puVar4 + iVar8 * 4 + 0x1c))
                (0xffffffff830f7ba0,*(undefined4 *)(puVar4 + iVar8 * 4 + 0x20));
    }
    iVar8 = 0;
    DAT_830f7bbc = 0;
    if (0 < DAT_830f7c2c) {
      iVar9 = 0;
      iVar5 = DAT_830f7c2c;
      iVar6 = DAT_830f7c20;
      do {
        if (GameMode_Flag2_830f7ba2 == *(byte *)(iVar9 + iVar6)) {
          (**(code **)(iVar9 + iVar6 + 4))(0xffffffff830f7ba0);
          iVar5 = DAT_830f7c2c;
          iVar6 = DAT_830f7c20;
        }
        iVar8 = iVar8 + 1;
        iVar9 = iVar9 + 8;
      } while (iVar8 < iVar5);
    }
    bVar1 = DAT_830f7bc4 != -1;
    GameMode_Flag1_830f7ba1 = GameMode_Current_830f7ba0;
    if (DAT_830f7bc0 == 1) {
      GameMode_CounterA_830f7bb0 = 0;
      pbVar7 = &GameMode_Flag3_830f7ba3;
      lVar10 = 10;
      do {
        *pbVar7 = 0xff;
        pbVar7 = pbVar7 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    else if (GameMode_CounterA_830f7bb0 < 10) {
      (&GameMode_Flag3_830f7ba3)[GameMode_CounterA_830f7bb0] = GameMode_Current_830f7ba0;
      GameMode_CounterA_830f7bb0 = GameMode_CounterA_830f7bb0 + 1;
    }
    else {
      GameMode_CounterA_830f7bb0 = 9;
    }
    GameMode_Current_830f7ba0 = GameMode_Flag2_830f7ba2;
    if (GameStateTable_830f7c1c != (code *)0x0) {
      (*GameStateTable_830f7c1c)(0xffffffff830f7ba0);
    }
    GameMode_Flag2_830f7ba2 = 0xff;
    if (bVar1) {
      if (!bVar1) goto LAB_82522ed4;
      goto LAB_82522ea4;
    }
  }
  else {
    if ((GameMode_Stage_830f7bc8 != 3) ||
       (iVar5 = Function_82522A30(0xffffffff830f7ba0), iVar5 == 0)) goto LAB_82522ed4;
    DAT_830f7bbc = 1;
    if (*(code **)(PTR_821b5040 + 0x10) != (code *)0x0) {
      (**(code **)(PTR_821b5040 + 0x10))(0xffffffff830f7ba0,*(undefined4 *)(PTR_821b5040 + 0x20));
    }
    if (*(code **)(puVar4 + iVar8 * 4 + 0x10) != (code *)0x0) {
      (**(code **)(puVar4 + iVar8 * 4 + 0x10))
                (0xffffffff830f7ba0,*(undefined4 *)(puVar4 + iVar8 * 4 + 0x20));
    }
    DAT_830f7bbc = 0;
    bVar2 = DAT_830f7bc4 != -1;
    GameMode_CounterA_830f7bb0 = GameMode_CounterA_830f7bb0 - DAT_830f7bb4;
    bVar1 = (int)GameMode_CounterA_830f7bb0 < 0;
    if (bVar1) {
      GameMode_CounterA_830f7bb0 = 0;
    }
    GameMode_Flag1_830f7ba1 = GameMode_Current_830f7ba0;
    GameMode_Current_830f7ba0 = (&GameMode_Flag3_830f7ba3)[GameMode_CounterA_830f7bb0];
    if (GameStateTable_830f7c1c != (code *)0x0) {
      (*GameStateTable_830f7c1c)(0xffffffff830f7ba0);
    }
    GameMode_Flag2_830f7ba2 = 0xff;
    if (bVar1 || bVar2) {
LAB_82522ea4:
      GameMode_Flag2_830f7ba2 = 0xff;
      if ((int)GameMode_CounterA_830f7bb0 < 0) {
        GameMode_CounterA_830f7bb0 = 0;
      }
      if (PTR_82529e40 != (undefined *)0x0) {
        (*(code *)PTR_82529e40)(0xffffffff830f7ba0,DAT_830f7bc4);
      }
      goto LAB_82522ed4;
    }
    if (DAT_830f7bc4 != -1) goto LAB_82522ed4;
  }
  GameMode_Flag2_830f7ba2 = 0xff;
  iVar8 = 0;
  if (0 < DAT_830f7c30) {
    iVar9 = 0;
    iVar5 = DAT_830f7c24;
    iVar6 = DAT_830f7c30;
    do {
      if (GameMode_Flag1_830f7ba1 == *(byte *)(iVar9 + iVar5)) {
        (**(code **)(iVar9 + iVar5 + 4))(0xffffffff830f7ba0);
        iVar5 = DAT_830f7c24;
        iVar6 = DAT_830f7c30;
      }
      iVar8 = iVar8 + 1;
      iVar9 = iVar9 + 8;
    } while (iVar8 < iVar6);
  }
  GameMode_ResetFlag_830f7c38 = 1;
  if (DAT_830f7c34 == 0) {
    Function_825230D0(0xffffffff830f7ba0);
    GameMode_ResetFlag_830f7c38 = 0;
  }
LAB_82522ed4:
  DAT_830f7bd4 = DAT_830f7bd4 + 1;
  DAT_830f7bd0 = DAT_830f7bd0 + 1;
  return;
}

