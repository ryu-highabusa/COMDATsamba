
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00070a00(void)

{
  float10 fVar1;
  float10 fVar2;
  undefined4 unaff_pfp;
  
  fVar1 = (float10)(int)FLOAT_0054fd08;
  fVar2 = (float10)0x4028000000000000;
  ac = ac & 0xfffffff8;
  if (!NAN(fVar1) && !NAN(fVar2)) {
    ac = ac | (uint)(fVar1 < fVar2) << 2;
    ac = ac | (uint)(fVar1 == fVar2) << 1;
    ac = ac | fVar2 < fVar1;
  }
  if (((byte)(ac >> 2) & 1) == 1) {
    fVar2 = (float10)0x4026000000000000;
    ac = ac & 0xfffffff8;
    if (!NAN(fVar1) && !NAN(fVar2)) {
      ac = ac | (uint)(fVar1 < fVar2) << 2;
      ac = ac | (uint)(fVar1 == fVar2) << 1;
      ac = ac | fVar2 < fVar1;
    }
    if (((byte)(ac >> 2) & 1) == 1) {
      fVar2 = (float10)0x4024000000000000;
      ac = ac & 0xfffffff8;
      if (!NAN(fVar1) && !NAN(fVar2)) {
        ac = ac | (uint)(fVar1 < fVar2) << 2;
        ac = ac | (uint)(fVar1 == fVar2) << 1;
        ac = ac | fVar2 < fVar1;
      }
      DAT_005a7624 = 3;
      if (((byte)(ac >> 2) & 1) != 1) {
        DAT_005a7624 = 2;
      }
    }
    else {
      DAT_005a7624 = 1;
    }
  }
  else {
    DAT_005a7624 = 0;
  }
  fp = unaff_pfp;
  return;
}

