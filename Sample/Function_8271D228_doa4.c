
undefined8 Function_8271D228(void)

{
  if (Sparring_Menu_DISP_8318b1e3 == '\0') {
    Sparring_Menu_DISP_8318b1e3 = '\x01';
    DAT_8318b07a = '\0';
    DAT_8318b082 = '\0';
    Sparring_Menu_Cursor_YPOS1_8318b22d = 0;
    Sparring_Menu_Cursor_YPOS2_8318b22e = 0;
    Sparring_COM1stAction_Selection = Sparring_COM1stAction_Current;
    Sparring_COM2ndAction_Selection = Sparring_COM2ndAction_Current;
    COM2ndAction_ActiveFlag_Current = COM2ndAction_ActiveFlag_Selection;
    Sparring_COM1stAction_Combo__Selection = Sparring_COM1stAction_Combo__Current;
    DAT_8318b08b = DAT_8318b1da;
    Sparring_CounterHitSetting_Selection = Sparring_CounterHitSetting_Current;
    if ((TAG_FLAG != 0) &&
       ((&DAT_8301df48_)[(uint)DAT_8318b23a_ + ((int)(uint)DAT_8318b23a_ >> 1) * -2] == '\x01')) {
      BYTE_8318af2e = DAT_82fb8feb;
    }
    DAT_8318b23b = '\0';
    DAT_8318b0aa = 0;
    *(float *)(DAT_83194054 + 4) =
         (float)(longlong)(int)(*(byte *)(DAT_83022320_ + 0x20) / 5) * 0.01;
    Function_82530560();
    DWORD_8318b210 = 0;
    DAT_8318b1f0_ = 0;
    if (DAT_8318b23d == '\0') {
      DAT_8318b1e8_ = 0x14004b;
      DAT_8318b1ec = 0xffffffff;
    }
    else {
      DAT_8318b1e8_ = 0x14004c;
      DAT_8318b1ec = 0xffffffff;
    }
  }
  else if (DAT_8318b07a == '\0') {
    if (DAT_8318b082 != '\0') {
      Sparring_Menu_DISP_8318b1e3 = 0;
      DAT_8318b07a = 0;
      DAT_8318b082 = 0;
      Sparring_Menu_Cursor_XPOS_8318b08f = 0;
      *(float *)(DAT_83194054 + 4) = (float)(ulonglong)*(byte *)(DAT_83022320_ + 0x20) * 0.01;
      Function_82530600();
      if (DAT_8318b23b != '\0') {
        DAT_830a5282 = 3;
        DAT_8318b23b = '\0';
        DAT_8318b0aa = 1;
      }
      COM2ndAction_ActiveFlag_Selection = COM2ndAction_ActiveFlag_Current;
      Sparring_COM2ndAction_Current = Sparring_COM2ndAction_Selection;
      DAT_8318b0ab = 0;
      DAT_8318b1da = DAT_8318b08b;
      Sparring_COM1stAction_Combo__Current = Sparring_COM1stAction_Combo__Selection;
      Sparring_COM1stAction_Current = Sparring_COM1stAction_Selection;
      Sparring_CounterHitSetting_Current = Sparring_CounterHitSetting_Selection;
      return 1;
    }
  }
  else {
    DAT_8318b07a = '\0';
    DAT_8318b082 = '\x01';
  }
  return 0;
}

