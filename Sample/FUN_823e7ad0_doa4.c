
void FUN_823e7ad0(void)

{
  char replayFlag;
  int memoryOffset;
  uint replayLength;
  undefined *currentDataPointer;
  undefined *nextDataPointer;
  ulonglong unknownFlag;
  ushort *largeDataPointer;
  uint uVar1;
  longlong loopCounter;
  double calculatedDelta;
  double fractionalDelta;
  bool hasStateChanged;
  
  replayFlag = DAT_830996c3;
  uVar1 = (uint)ReplayLength_____83020184;
  fractionalDelta = (double)DAT_83022d34;
  DAT_83099e14 = DAT_830224cc;
  if (DAT_83099670 != 0) {
    DAT_83099e14 = DAT_83099670 + 0x280;
  }
  calculatedDelta = 0.0;
  if (DAT_83099e20 == 0) {
    uVar1 = 0;
    fractionalDelta = calculatedDelta;
  }
  else if ((((DAT_83099e20 - 1 < uVar1) && (gamemodemaybe____83020318 != '\r')) &&
           (gamemodemaybe____83020318 != '\x0f')) &&
          ((gamemodemaybe____83020318 != '\x0e' && (gamemodemaybe____83020318 != '\x10')))) {
    uVar1 = DAT_83099e20 + 0xffff & 0xffff;
    fractionalDelta = calculatedDelta;
  }
  if (DAT_8301b6e6 == '\0') {
    replayLength = 300;
    if (DAT_83099e20 < 0x12d) {
      replayLength = DAT_83099e20;
    }
    replayLength = (uVar1 - replayLength) + DAT_83099e18;
    DAT_83099e00_ = replayLength - (replayLength / DAT_83099e10) * DAT_83099e10;
  }
  else {
    DAT_83099e00_ = (uVar1 + DAT_83099e18) - ((uVar1 + DAT_83099e18) / DAT_83099e10) * DAT_83099e10;
  }
  trapWord(6,(ulonglong)DAT_83099e10,0);
  trapWord(6,(ulonglong)DAT_83099e10,0);
  DAT_83099e1c = (DAT_83099e00_ + 1) - ((DAT_83099e00_ + 1) / DAT_83099e10) * DAT_83099e10;
  if (DAT_83099e20 == 0) {
    DAT_83099ba8 = &DAT_83099bb8;
    DAT_83099e04 = &DAT_83099bb8;
  }
  else {
    memoryOffset = DAT_83099e00_ * 0x248;
    if (TAG_FLAG == 0) {
      memoryOffset = DAT_83099e00_ * 0x1ac;
    }
    DAT_83099e04 = (undefined *)(memoryOffset + DAT_83099e14);
    if (TAG_FLAG == 0) {
      memoryOffset = DAT_83099e1c * 0x1ac;
    }
    else {
      memoryOffset = DAT_83099e1c * 0x248;
    }
    DAT_83099ba8 = (undefined *)(memoryOffset + DAT_83099e14);
  }
  nextDataPointer = &DAT_830a0000;
  currentDataPointer = &DAT_830a0000;
  DAT_83099ba4 = 0.0;
  DAT_83099676 = 0;
  DAT_830996f7 = '\0';
  DAT_83099793 = 0;
  DAT_830996c3 = 0;
  DAT_83099667 = 0;
  DAT_83099796 = 0;
  hasStateChanged = DAT_83099e00_ != DAT_83099e08;
  unknownFlag = (ulonglong)DAT_83099ba0;
  DAT_83099afc = (float)(fractionalDelta - (double)(longlong)(int)fractionalDelta);
  if (hasStateChanged) {
    DAT_83099677 = 0;
  }
  else {
    DAT_83099afc = 0.0;
    DAT_83099676 = DAT_83099ba0 + 2 <= uVar1;
    DAT_83099677 = 1;
    DAT_83099ba8 = DAT_83099e04;
    DAT_83099e1c = DAT_83099e00_;
    currentDataPointer = &DAT_830a0000;
    nextDataPointer = &DAT_830a0000;
    replayFlag = FUN_823b5a20();
  }
  if ((unknownFlag & 0xffff) == 0xffff) {
    DAT_830996f7 = '\x01';
    nextDataPointer[-0x686d] = 1;
  }
  else {
    memoryOffset = (int)(unknownFlag & 0xffff);
    if (uVar1 < memoryOffset + 2U) {
      if (fractionalDelta <= (double)DAT_83099bac) {
        if ((double)DAT_83099bac <= fractionalDelta) {
          currentDataPointer[-0x686a] = 1;
        }
        else {
          if (replayFlag == '\0') {
            loopCounter = 0;
            do {
              Function_82763138(DAT_83194044,loopCounter,1,7);
              Function_82767810(*(undefined4 *)(DAT_83194044 + 0x60),loopCounter,1,9);
              loopCounter = loopCounter + 1;
            } while ((int)loopCounter < 2);
            Function_8271F9E0();
            DAT_8301b414 = 0;
          }
          DAT_830996c3 = 1;
        }
      }
      else if (uVar1 == memoryOffset + 1U) {
        nextDataPointer[-0x686d] = 1;
      }
    }
    else {
      Function_8271F9E0();
      largeDataPointer = &DAT_8321c540;
      DAT_8301b414 = 0;
      do {
        if (!hasStateChanged) {
          *(undefined *)((int)largeDataPointer + 0x38741) = 0;
          *(undefined *)(largeDataPointer + 0x1c3a1) = 0;
          *largeDataPointer = *largeDataPointer | 0x7b;
        }
        largeDataPointer = largeDataPointer + 0x1c3b0;
      } while ((int)largeDataPointer < -0x7cd01d40);
      DAT_83099667 = 1;
    }
  }
  memoryOffset = Function_823E84D8(hasStateChanged);
  if (memoryOffset == 0) {
    DAT_83099afc = (float)calculatedDelta;
    DAT_83099e1c = DAT_83099e00_;
    DAT_83099ba8 = DAT_83099e04;
  }
  DAT_83099ba0 = (short)uVar1;
  if (DAT_830996f7 == '\0') {
    calculatedDelta = fractionalDelta - (double)DAT_83099bac;
  }
  DAT_83099bac = (float)fractionalDelta;
  DAT_83099ba4 = (float)calculatedDelta;
  return;
}

