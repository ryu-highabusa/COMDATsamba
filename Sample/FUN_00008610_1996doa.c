
void FUN_00008610(void)

{
  uint uVar1;
  undefined4 unaff_pfp;
  int iVar2;
  word *pwVar3;
  
  pwVar3 = &DAT_01800020;
  iVar2 = 0;
  do {
    *pwVar3 = (&WORD_00090a50)[iVar2];
    pwVar3 = pwVar3 + 1;
    iVar2 = iVar2 + 1;
    uVar1 = ac & 0xfffffff8 | (uint)(iVar2 == 0xf) << 1;
    ac = uVar1 | iVar2 < 0xf;
  } while (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) == 1);
  iVar2 = 0;
  do {
    *pwVar3 = (&WORD_00090a50)[iVar2];
    pwVar3 = pwVar3 + 1;
    iVar2 = iVar2 + 1;
    uVar1 = ac & 0xfffffff8 | (uint)(0xf < iVar2) << 2 | (uint)(iVar2 == 0xf) << 1;
    ac = uVar1 | iVar2 < 0xf;
  } while (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) == 1);
  fp = unaff_pfp;
  return;
}

