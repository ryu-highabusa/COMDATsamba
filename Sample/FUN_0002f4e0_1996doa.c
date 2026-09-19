
undefined1 FUN_0002f4e0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 unaff_pfp;
  uint uVar3;
  undefined1 in_g4;
  
  uVar2 = ac;
  uVar3 = param_1 & 0xf0;
  uVar1 = ac & 0xfffffff8 | (uint)(uVar3 < 0x50) << 2 | (uint)(uVar3 == 0x50) << 1;
  ac = uVar1 | 0x50 < uVar3;
  if (((byte)(uVar1 >> 1) & 1) == 1) {
    in_g4 = 4;
  }
  else if (uVar3 < 0x51) {
    uVar1 = uVar2 & 0xfffffff8 | (uint)(0x10 < uVar3) << 2 | (uint)(uVar3 == 0x10) << 1;
    ac = uVar1 | uVar3 < 0x10;
    if (((byte)(uVar1 >> 1) & 1) == 1) {
      in_g4 = 5;
    }
    else if (uVar3 < 0x11) {
      ac = uVar2 & 0xfffffff8 | (uint)(uVar3 != 0) << 2 | (uint)(uVar3 == 0) << 1;
      if (((byte)(ac >> 1) & 1) == 1) {
        in_g4 = 0;
      }
    }
    else {
      uVar1 = uVar2 & 0xfffffff8 | (uint)(uVar3 < 0x20) << 2 | (uint)(uVar3 == 0x20) << 1;
      ac = uVar1 | 0x20 < uVar3;
      if (((byte)(uVar1 >> 1) & 1) == 1) {
        in_g4 = 1;
      }
      else {
        uVar1 = uVar2 & 0xfffffff8 | (uint)(uVar3 < 0x40) << 2 | (uint)(uVar3 == 0x40) << 1;
        ac = uVar1 | 0x40 < uVar3;
        if (((byte)(uVar1 >> 1) & 1) == 1) {
          in_g4 = 3;
        }
      }
    }
  }
  else {
    uVar1 = uVar2 & 0xfffffff8 | (uint)(uVar3 < 0x80) << 2 | (uint)(uVar3 == 0x80) << 1;
    ac = uVar1 | 0x80 < uVar3;
    if (((byte)(uVar1 >> 1) & 1) == 1) {
      in_g4 = 7;
    }
    else if (uVar3 < 0x81) {
      uVar1 = uVar2 & 0xfffffff8 | (uint)(uVar3 < 0x60) << 2 | (uint)(uVar3 == 0x60) << 1;
      ac = uVar1 | 0x60 < uVar3;
      if (((byte)(uVar1 >> 1) & 1) == 1) {
        in_g4 = 2;
      }
    }
    else {
      uVar1 = uVar2 & 0xfffffff8 | (uint)(uVar3 < 0x90) << 2 | (uint)(uVar3 == 0x90) << 1;
      ac = uVar1 | 0x90 < uVar3;
      if (((byte)(uVar1 >> 1) & 1) == 1) {
        in_g4 = 6;
      }
      else {
        uVar1 = uVar2 & 0xfffffff8 | (uint)(uVar3 < 0xa0) << 2 | (uint)(uVar3 == 0xa0) << 1;
        ac = uVar1 | 0xa0 < uVar3;
        if (((byte)(uVar1 >> 1) & 1) == 1) {
          in_g4 = 8;
        }
      }
    }
  }
  fp = unaff_pfp;
  return in_g4;
}

