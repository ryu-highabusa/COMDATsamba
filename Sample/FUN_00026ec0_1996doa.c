
word FUN_00026ec0(void)

{
  uint uVar1;
  undefined4 unaff_pfp;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  switch(pwrk_rival[0x2d]) {
  case 2:
  case 3:
  case 5:
    iVar2 = 0;
    do {
      if ((byte)pwrk_rival[0x2a] <= (byte)(&DAT_005646f0)[iVar2 + (uint)plyr * 0x10] &&
          (byte)(&DAT_005646f0)[iVar2 + (uint)plyr * 0x10] <= (byte)pwrk_rival[0x2a]) {
        uVar3 = uVar3 + 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x10);
    break;
  case 4:
    uVar3 = (uint)(byte)(&DAT_00564712)[plyr];
    break;
  case 6:
    uVar3 = (uint)(byte)(&DAT_00564714)[plyr];
  }
  uVar1 = ac & 0xfffffff8 | (uint)(0xf < (int)uVar3) << 2 | (uint)(uVar3 == 0xf) << 1;
  ac = uVar1 | (int)uVar3 < 0xf;
  if (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) != 1) {
    uVar3 = 0xf;
  }
  fp = unaff_pfp;
  return (&WORD_000a1010)[uVar3];
}

