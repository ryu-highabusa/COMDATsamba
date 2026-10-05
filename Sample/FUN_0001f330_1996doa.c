
void FUN_0001f330(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 unaff_pfp;
  uint uVar3;
  
  uVar2 = ac;
  uVar1 = (uint)_0d_DAT_0054fd77;
  DAT_00557efc = DAT_00557efc + 1;
  if (uVar1 <= DAT_00557efc) {
    DAT_00557efc = 0;
    if (TimeCurrentMatch_Seconds_005555a0 == 0) {
      g_timeUpPending = 1;
      DAT_00557efc = _0d_DAT_0054fd77 - 1;
    }
    else {
      TimeCurrentMatch_Seconds_005555a0 = TimeCurrentMatch_Seconds_005555a0 - 1;
    }
  }
  uVar3 = ac & 0xfffffff8 | (uint)(g_timeUpPending == 0) << 2;
  ac = uVar3 | (uint)(g_timeUpPending == 1) << 1 | (uint)(1 < g_timeUpPending);
  TimeCurrentMatch_MilliSeconds_005555a1 = (byte)(int)(float10)(int)(uVar1 - 1);
  if (((byte)ac & 1 | (byte)(uVar3 >> 2) & 1) == 1) {
    ac = uVar2 & 0xfffffff8 | (uint)(GameOverFlag____0054fcb4 != 0) << 2 |
         (uint)(GameOverFlag____0054fcb4 == 0) << 1;
    if (GameOverFlag____0054fcb4 == 0) {
      TimeTotal_MilliSeconds_0054fd17 = BYTE_ARRAY_00557ec0[0] + 1;
      uVar3 = (uint)TimeTotal_MilliSeconds_0054fd17;
      ac = uVar2 & 0xfffffff8 | (uint)(uVar3 < uVar1) << 2 | (uint)(uVar3 == uVar1) << 1 |
           (uint)(uVar1 < uVar3);
      BYTE_ARRAY_00557ec0[0] = TimeTotal_MilliSeconds_0054fd17;
      if (uVar3 >= uVar1) {
        TimeTotal_MilliSeconds_0054fd17 = 0;
        TimeTotal_Seconds_0054fd16 = TimeTotal_Seconds_0054fd16 + 1;
        uVar1 = uVar2 & 0xfffffff8 | (uint)(0x3b < TimeTotal_Seconds_0054fd16) << 2 |
                (uint)(TimeTotal_Seconds_0054fd16 == 0x3b) << 1;
        ac = uVar1 | TimeTotal_Seconds_0054fd16 < 0x3b;
        BYTE_ARRAY_00557ec0[0] = TimeTotal_MilliSeconds_0054fd17;
        if (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) != 1) {
          TimeTotal_Seconds_0054fd16 = g14;
          TimeTotal_Minutes_0054fd15 = TimeTotal_Minutes_0054fd15 + 1;
          uVar1 = uVar2 & 0xfffffff8 | (uint)(0x62 < TimeTotal_Minutes_0054fd15) << 2 |
                  (uint)(TimeTotal_Minutes_0054fd15 == 0x62) << 1;
          ac = uVar1 | TimeTotal_Minutes_0054fd15 < 0x62;
          if (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) != 1) {
            TimeTotal_Minutes_0054fd15 = 99;
          }
        }
      }
    }
    fp = unaff_pfp;
    return;
  }
  fp = unaff_pfp;
  return;
}

