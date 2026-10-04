
void FUN_82506c68(void)

{
  undefined2 uVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  undefined *puVar5;
  char cVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  
  if (GetReady_82fb9012 == 1) {
    WatchModeScore_P2 = 0;
    WatchModeScore_P1 = 0;
  }
  HandleCriticalHitStunState_FUN_82508278();
  bVar2 = DAT_83022cef;
  uVar4 = (ulonglong)GameMode_83020318;
  if ((DAT_830ee52c == 0) && (DAT_83022cef != 0)) {
    DAT_82fb8fca = DAT_830ee4b3;
    Timer_TimeAttackScore_ = DAT_830ea96a;
    DAT_8301fc4f = DAT_830ee4bb;
    DAT_830ee4ba = DAT_830edc26;
    if (uVar4 == 6) {
      puVar8 = &DAT_830ee4d8;
      puVar7 = &DAT_830ee500;
      Score_SurvivalMode_8301deb8_ = DAT_830ee518;
      DAT_830ee524 = DAT_830ee4b8;
      DAT_830ee4c0 = DAT_830ee4bc;
      lVar9 = 0xc;
      do {
        uVar1 = *puVar8;
        puVar8 = puVar8 + 1;
        *puVar7 = uVar1;
        puVar7 = puVar7 + 1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
  }
  DAT_830ee52c = (uint)bVar2;
  puVar5 = &DAT_830f0000;
  cVar6 = DAT_8301fc4e;
  if ((DAT_8301fc4e == '\x01') && (DAT_830edc27 == '\0')) {
    puVar5 = &DAT_830f0000;
    Function_82506B90();
  }
  puVar5[-0x23d9] = cVar6;
  if (DAT_8302031f == '\x01') {
    DAT_830ee4b7 = '\0';
    DAT_830ee4be = DAT_8301df63 + -1;
    DAT_8302031f = '\0';
    GAME_RULE_ON = 1;
  }
  if (GAME_RULE_ON != 0) {
    uVar10 = 0x3ff0000000000000;
    if (DAT_830ee4b7 != '\x01') {
      uVar4 = uVar4 & 0xff;
      if ((uVar4 == 1) && (DAT_83022f6e == '\0')) {
        Damage_P1 = 0;
        Damage_P2 = 0;
        WORD_830201b0 = 0;
        WORD_8302024c = 0;
        Last_Damage_P1 = 0;
        Last_Damage_P2 = 0;
      }
      else {
        Function_825071D8();
      }
      if (uVar4 == 8) {
        FUN_825079a8();
      }
      else if ((TAG_FLAG == 0) || (uVar4 == 6)) {
        if (HIT_POINT_P1_830201ac_ == 0) {
          if (HIT_POINT_P2_83020248_ == 0) {
            DAT_83022ced = 2;
            DAT_8301df52 = '\x01';
            DAT_83022e72 = 0xc;
            Function_82530740(uVar10,0xffffffffffffff04);
          }
          else {
            FUN_825073a0(1);
          }
        }
        else if (HIT_POINT_P2_83020248_ == 0) {
          FUN_825073a0(0);
        }
      }
      else if (HIT_POINT_P1_830201ac_ == 0) {
        if (HIT_POINT_P2_83020248_ == 0) {
          FUN_825077f0();
        }
        else {
          Function_82507658(1);
        }
      }
      else if (HIT_POINT_P2_83020248_ == 0) {
        Function_82507658(0);
      }
    }
    if ((HIT_POINT_P1_830201ac_ != 0) && (HIT_POINT_P2_83020248_ != 0)) {
      if (DAT_830ee4b7 == '\0') {
        iVar3 = FUN_82507aa0();
        if (iVar3 == 0) {
          FUN_82507050();
        }
      }
      else {
        DAT_830ee4b7 = '\0';
        Timer_Milliseconds = 0;
        if (TAG_FLAG == 0) {
          Function_82507568();
        }
        else {
          DAT_83022ced = FUN_825078b8(HIT_POINT_P1_830201ac_,HIT_POINT_P2_83020248_,
                                      (&HIT_POINT_P3_8301df58_)[~(uint)tagpartner_p1_flag_ & 1],
                                      (&HIT_POINT_P4_8301df5c_)[~(uint)tagpartner_p2_flag_ & 1]);
          DAT_8301df52 = '\x01';
          DAT_830ee4cc = 0;
          DAT_830ee4cd = 0;
          DAT_83022e72 = 7;
          Function_82530740(uVar10,0xffffffffffffff05);
        }
      }
    }
    if (DAT_8301df52 == '\x01') {
      DAT_830ee4c4 = DAT_830ee4c4 + CriticalHitStunBarFlashValue_P1;
      DAT_830ee4c8 = DAT_830ee4c8 + CriticalHitStunBarFlashValue_P2;
      CriticalHitStunBarFlashValue_P1 = 0;
      GAME_RULE_ON = 0;
      CriticalHitStunBarFlashValue_P2 = 0;
    }
  }
  return;
}

