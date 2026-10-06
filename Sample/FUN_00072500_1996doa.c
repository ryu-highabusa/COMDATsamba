
undefined4 FUN_00072500(uint param_1,uint param_2)

{
  float10 fVar1;
  float10 fVar2;
  undefined4 unaff_pfp;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = SUB104((float10)(int)param_1 + (float10)(int)param_1,0);
  iVar4 = (int)((unkuint10)((float10)(int)param_1 + (float10)(int)param_1) >> 0x20);
  ac = ac & 0xfffffff8;
  if ((float10)(int)uVar3 < (float10)'\0') {
    uVar3 = uVar3 ^ 0x80000000;
  }
  uVar5 = SUB104((float10)iVar4 + (float10)iVar4,0);
  if ((float10)(int)uVar5 < (float10)'\0') {
    uVar5 = uVar5 ^ 0x80000000;
  }
  fVar2 = (float10)(int)FLOAT_0054fd08;
  fVar1 = (float10)(int)uVar3;
  if (!NAN(fVar1) && !NAN(fVar2)) {
    ac = ac | (uint)(fVar1 < fVar2) << 2;
    ac = ac | (uint)(fVar1 == fVar2) << 1;
  }
  if (((byte)(ac >> 1) & 1 | (byte)(ac >> 2) & 1) != 1) {
    fVar2 = (float10)(int)FLOAT_0054fd7c;
    fVar1 = (float10)(int)uVar3;
    ac = ac & 0xfffffff8;
    if (!NAN(fVar1) && !NAN(fVar2)) {
      ac = ac | (uint)(fVar1 < fVar2) << 2;
      ac = ac | (uint)(fVar1 == fVar2) << 1;
      ac = ac | fVar2 < fVar1;
    }
    if (((byte)(ac >> 2) & 1) == 1) {
      fp = unaff_pfp;
      return 1;
    }
  }
  fVar2 = (float10)(int)FLOAT_0054fd0c;
  fVar1 = (float10)(int)uVar5;
  ac = ac & 0xfffffff8;
  if (!NAN(fVar1) && !NAN(fVar2)) {
    ac = ac | (uint)(fVar1 < fVar2) << 2;
    ac = ac | (uint)(fVar1 == fVar2) << 1;
    ac = ac | fVar2 < fVar1;
  }
  if (((byte)(ac >> 1) & 1 | (byte)(ac >> 2) & 1) != 1) {
    fVar2 = (float10)(int)FLOAT_0054fd80;
    fVar1 = (float10)(int)uVar5;
    ac = ac & 0xfffffff8;
    if (!NAN(fVar1) && !NAN(fVar2)) {
      ac = ac | (uint)(fVar1 < fVar2) << 2;
      ac = ac | (uint)(fVar1 == fVar2) << 1;
      ac = ac | fVar2 < fVar1;
    }
    if (((byte)ac & 1 | (byte)(ac >> 1) & 1) != 1) {
      fp = unaff_pfp;
      return 1;
    }
  }
  fp = unaff_pfp;
  return 0;
}

