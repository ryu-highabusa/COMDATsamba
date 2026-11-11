
void FUN_00045740(int param_1,int param_2,int param_3,int *param_4)

{
  uint uVar1;
  undefined4 unaff_pfp;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = ac;
  iVar6 = *param_4;
  g13 = 0x471b;
  iVar5 = param_4[1];
  uVar2 = (iVar6 - param_1 & 0xffffU) - 0x5c72;
  uVar3 = ac & 0xfffffff8 | (uint)(0x471b < uVar2) << 2 | (uint)(uVar2 == 0x471b) << 1;
  ac = uVar3 | uVar2 < 0x471b;
  iVar4 = param_4[2];
  if (((byte)ac & 1 | (byte)(uVar3 >> 1) & 1) != 1) {
    uVar2 = (iVar5 - param_2 & 0xffffU) - 0x5c72;
    uVar3 = uVar1 & 0xfffffff8 | (uint)(uVar2 < 0x471b) << 2 | (uint)(uVar2 == 0x471b) << 1;
    ac = uVar3 | 0x471b < uVar2;
    if (((byte)(uVar3 >> 1) & 1 | uVar2 < 0x471b) != 1) {
      uVar3 = (iVar4 - param_3 & 0xffffU) - 0x5c72;
      ac = uVar1 & 0xfffffff8 | (uint)(uVar3 < 0x471b) << 2 | (uint)(uVar3 == 0x471b) << 1 |
           (uint)(0x471b < uVar3);
      if (((byte)ac & 1) == 1) goto LAB_000457b8;
    }
  }
  iVar6 = iVar6 + -0x8000;
  iVar5 = 0x8000 - iVar5;
  iVar4 = iVar4 + -0x8000;
LAB_000457b8:
  param_4[2] = iVar4;
  param_4[1] = iVar5;
  *param_4 = iVar6;
  fp = unaff_pfp;
  return;
}

