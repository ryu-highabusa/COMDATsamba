
undefined8 FUN_82622e50(void)

{
  bool bVar1;
  undefined8 uVar2;
  
  uVar2 = 1;
  if ((CHAR_DISP_P1_830201a8 != 0) || (CHAR_DISP_P2_83020244 != 0)) {
    if ((DAT_8301df53 != '\x01') ||
       ((gamemodemaybe____83020318 != '\x01' || (bVar1 = true, DAT_83022cee != '\x03')))) {
      bVar1 = false;
    }
    if (!bVar1) {
      if ((((CHAR_NUM_P1_83020189 != KASUMI) && (CHAR_NUM_P1_83020189 != KOKORO)) &&
          (CHAR_NUM_P1_83020189 != LEIFANG)) &&
         ((CHAR_NUM_P1_83020189 != HITOMI && (CHAR_NUM_P1_83020189 != BRADWONG)))) {
        uVar2 = 0;
      }
      if (CHAR_NUM_P2_83020225 == KASUMI) {
        return uVar2;
      }
      if (CHAR_NUM_P2_83020225 == KOKORO) {
        return uVar2;
      }
      if (CHAR_NUM_P2_83020225 == LEIFANG) {
        return uVar2;
      }
      if (CHAR_NUM_P2_83020225 == HITOMI) {
        return uVar2;
      }
      if (CHAR_NUM_P2_83020225 == BRADWONG) {
        return uVar2;
      }
    }
  }
  return 0;
}

