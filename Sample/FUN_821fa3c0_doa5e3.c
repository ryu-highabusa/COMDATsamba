
void FUN_821fa3c0(uint param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0xff) * 0x640;
  if ((&ACT_STATE_P1_83e72d98_)[iVar2] == 0x0_Neutral) {
    switch((&CHAR_NUM_P1_83e72d34)[iVar2]) {
    case char_0x7:
      if ((&DAT_83e72de3)[iVar2] == '\0') {
        DAT_82b11794 = 0x1f5f;
        return;
      }
      if ((&DAT_83e72de3)[iVar2] == -1) {
        DAT_82b11794 = 0x1f60;
        return;
      }
      break;
    case char_ayane:
      DAT_82b11794 = 0x1f5d;
      return;
    case char_0xf:
      DAT_82b11794 = 0x1f64;
      return;
    case char_0x10:
      DAT_82b11794 = 0x206d;
      return;
    case char_0x13:
      cVar1 = (&DAT_83e72de3)[iVar2];
      if (cVar1 == '\x01') {
        DAT_82b11794 = 0x1f79;
        return;
      }
      if (cVar1 == '\x02') {
        DAT_82b11794 = 0x1f8e;
        return;
      }
      if (cVar1 == -1) {
        DAT_82b11794 = 0x1f74;
        return;
      }
      break;
    case char_christie:
      if ((&DAT_83e72de3)[iVar2] == '\0') {
        if ((&DWORD_83e72da0)[(param_1 & 0xff) * 400] == 1) {
          return;
        }
        DAT_82b11794 = 0x1f70;
        return;
      }
      if ((&DAT_83e72de3)[iVar2] != -1) {
        return;
      }
    default:
      DAT_82b11794 = 0x12;
    }
  }
  return;
}

