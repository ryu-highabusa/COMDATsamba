
void FUN_0002d190(void)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined4 unaff_pfp;
  
  uVar2 = ac;
  bVar3 = (&DAT_00564628)[plyr];
  ac = ac & 0xfffffff8 | (uint)(1 < bVar3) << 2 | (uint)(bVar3 == 1) << 1 | (uint)(bVar3 == 0);
  if (((byte)ac & 1 | 1 < bVar3) != 1) {
    (&DAT_00564628)[plyr] = g14;
    bVar3 = (&DAT_0056462a)[plyr];
    uVar1 = uVar2 & 0xfffffff8 | (uint)(1 < bVar3) << 2 | (uint)(bVar3 == 1) << 1;
    ac = uVar1 | bVar3 == 0;
    if (((byte)(uVar1 >> 1) & 1) == 1) {
      pwrk_own[0x3c] = 1;
      fp = unaff_pfp;
      return;
    }
    if (bVar3 < 2) {
      ac = uVar2 & 0xfffffff8 | (uint)(bVar3 != 0) << 2 | (uint)(bVar3 == 0) << 1;
      if (((byte)(ac >> 1) & 1) == 1) {
        fp = unaff_pfp;
        return;
      }
      fp = unaff_pfp;
      return;
    }
    uVar1 = uVar2 & 0xfffffff8 | (uint)(2 < bVar3) << 2 | (uint)(bVar3 == 2) << 1;
    ac = uVar1 | bVar3 < 2;
    if (((byte)(uVar1 >> 1) & 1) != 1) {
      fp = unaff_pfp;
      return;
    }
    bVar3 = pwrk_own[0x3d];
    uVar1 = uVar2 & 0xfffffff8 | (uint)(1 < bVar3) << 2 | (uint)(bVar3 == 1) << 1;
    ac = uVar1 | bVar3 == 0;
    if (((byte)(uVar1 >> 1) & 1) == 1) {
      g_selected_action_request = '\x15';
    }
    else if (bVar3 < 2) {
      ac = uVar2 & 0xfffffff8 | (uint)(bVar3 != 0) << 2 | (uint)(bVar3 == 0) << 1;
      if (((byte)(ac >> 1) & 1) == 1) {
        g_selected_action_request = '\x14';
      }
    }
    else {
      uVar2 = uVar2 & 0xfffffff8 | (uint)(2 < bVar3) << 2 | (uint)(bVar3 == 2) << 1;
      ac = uVar2 | bVar3 < 2;
      if (((byte)(uVar2 >> 1) & 1) == 1) {
        g_selected_action_request = '\x16';
      }
    }
    pwrk_own[0x2c] = g_selected_action_request;
  }
  fp = unaff_pfp;
  return;
}

