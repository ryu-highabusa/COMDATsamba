
void FUN_000185c0(void)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 unaff_pfp;
  uint uVar5;
  
  uVar4 = ac;
  uVar2 = (uint)BYTE_0054fcea * 2 - 1;
  uVar5 = (uint)DAT_005555dc;
  uVar1 = ac & 0xfffffff8 | (uint)((int)uVar2 < (int)uVar5) << 2 | (uint)(uVar2 == uVar5) << 1;
  ac = uVar1 | (int)uVar5 < (int)uVar2;
  if (((byte)(uVar1 >> 1) & 1) != 1) {
    uVar1 = uVar4 & 0xfffffff8 | (uint)(1 < BYTE_0054fd12) << 2;
    ac = uVar1 | (uint)(BYTE_0054fd12 == 1) << 1 | (uint)(BYTE_0054fd12 == 0);
    if (((byte)ac & 1 | (byte)(uVar1 >> 2) & 1) == 1) {
      fp = unaff_pfp;
      FLOAT_0054fd08 = 10.0;
      FLOAT_0054fd0c = 10.0;
      return;
    }
    if (GameOverFlag____0054fcb4 == 0) {
      if (g_player1.controller_type == MAN) {
        uVar1 = uVar4 & 0xfffffff8 | (uint)(1 < BYTE_0054fcfa) << 2;
        ac = uVar1 | (uint)(BYTE_0054fcfa == 1) << 1 | (uint)(BYTE_0054fcfa == 0);
        bVar3 = (byte)ac & 1 | (byte)(uVar1 >> 2) & 1;
      }
      else {
        uVar1 = uVar4 & 0xfffffff8 | (uint)(1 < BYTE_0054fcfb) << 2;
        ac = uVar1 | (uint)(BYTE_0054fcfb == 1) << 1 | (uint)(BYTE_0054fcfb == 0);
        bVar3 = (byte)ac & 1 | (byte)(uVar1 >> 2) & 1;
      }
    }
    else {
      ac = uVar4 & 0xfffffff8 | (uint)(GameOverFlag____0054fcb4 < 4);
      if ((((byte)ac & 1 | 4 < GameOverFlag____0054fcb4) != 1) &&
         (uVar1 = uVar4 & 0xfffffff8 | (uint)(4 < DAT_005555eb) << 2 |
                  (uint)(DAT_005555eb == 4) << 1, ac = uVar1 | DAT_005555eb < 4,
         ((byte)(uVar1 >> 1) & 1) == 1)) {
        fp = unaff_pfp;
        FLOAT_0054fd08 = 0.0;
        FLOAT_0054fd0c = 0.0;
        return;
      }
      uVar2 = ac;
      uVar1 = ac & 0xfffffff8 | (uint)(1 < BYTE_0054fcfa) << 2;
      ac = uVar1 | (uint)(BYTE_0054fcfa == 1) << 1 | (uint)(BYTE_0054fcfa == 0);
      if (((byte)ac & 1 | (byte)(uVar1 >> 2) & 1) == 1) {
        fp = unaff_pfp;
        FLOAT_0054fd08 = 10.0;
        FLOAT_0054fd0c = 10.0;
        return;
      }
      uVar1 = uVar2 & 0xfffffff8 | (uint)(1 < BYTE_0054fcfb) << 2;
      ac = uVar1 | (uint)(BYTE_0054fcfb == 1) << 1 | (uint)(BYTE_0054fcfb == 0);
      bVar3 = (byte)ac & 1 | (byte)(uVar1 >> 2) & 1;
    }
    if (bVar3 == 1) {
      fp = unaff_pfp;
      FLOAT_0054fd08 = 10.0;
      FLOAT_0054fd0c = 10.0;
      return;
    }
  }
  FLOAT_0054fd08 = 0.0;
  FLOAT_0054fd0c = 0.0;
  fp = unaff_pfp;
  return;
}

