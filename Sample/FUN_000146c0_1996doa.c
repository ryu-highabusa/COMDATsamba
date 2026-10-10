
void FUN_000146c0(uint param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 unaff_pfp;
  uint uVar3;
  uint uVar4;
  
  uVar2 = ac;
  g13 = (uint)(&g_player1)[param_1].character_id;
  uVar4 = (uint)(&g_player1)[param_1 ^ 1].character_id;
  uVar3 = ac & 0xfffffff8 | (uint)(uVar4 < g13) << 2;
  ac = uVar3 | (uint)(uVar4 == g13) << 1 | (uint)(g13 < uVar4);
  uVar4 = (&DAT_00557b70)[param_1 * 0xf + g13];
  if (((byte)ac & 1 | (byte)(uVar3 >> 2) & 1) != 1) {
    uVar3 = (uint)(&g_player1)[param_1 ^ 1].costume_id;
    ac = uVar2 & 0xfffffff8 | (uint)((int)uVar4 < (int)uVar3) << 2 | (uint)(uVar4 == uVar3) << 1 |
         (uint)((int)uVar3 < (int)uVar4);
    if (((byte)ac & 1 | (int)uVar4 < (int)uVar3) != 1) {
      uVar4 = uVar4 + 1;
      if ((((g13 < 2) || (g13 == 2)) || ((g13 + 0xfc & 0xff) < 2)) ||
         (((g13 == 8 || (g13 == 6)) || (g13 == 0xc)))) {
        uVar3 = uVar2 & 0xfffffff8 | (uint)(2 < (int)uVar4) << 2 | (uint)(uVar4 == 2) << 1;
        ac = uVar3 | (int)uVar4 < 2;
        bVar1 = (byte)ac & 1 | (byte)(uVar3 >> 1) & 1;
      }
      else {
        uVar3 = uVar2 & 0xfffffff8 | (uint)(1 < (int)uVar4) << 2 | (uint)(uVar4 == 1) << 1;
        ac = uVar3 | (int)uVar4 < 1;
        bVar1 = (byte)ac & 1 | (byte)(uVar3 >> 1) & 1;
      }
      if (bVar1 != 1) {
        uVar4 = 0;
      }
    }
  }
  (&g_player1)[param_1].costume_id = (DOA_U8)uVar4;
  (&DAT_00557b70)[param_1 * 0xf + g13] = uVar4;
  fp = unaff_pfp;
  return;
}

