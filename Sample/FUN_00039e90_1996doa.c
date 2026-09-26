
void FUN_00039e90(byte *param_1)

{
  uint uVar1;
  byte bVar2;
  undefined4 unaff_pfp;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar1 = ac & 0xfffffff8 | (uint)(*param_1 == 0) << 1;
  ac = uVar1 | *param_1 != 0;
  iVar3 = (DAT_0054f988 + DAT_0054f984 * 0x40) * 2 + 0x1000000;
  if (((byte)(uVar1 >> 1) & 1) != 1) {
    do {
      if (*param_1 == 10) {
        iVar4 = 0;
        iVar3 = iVar3 + 0x80;
        DAT_0054f984 = DAT_0054f984 + 1;
      }
      else {
        *(ushort *)(iVar4 * 2 + iVar3) = *param_1 | 0x8000;
        iVar4 = iVar4 + 1;
      }
      param_1 = param_1 + 1;
      bVar2 = *param_1;
      ac = ac & 0xfffffff8 | (uint)(bVar2 != 0) << 2 | (uint)(bVar2 == 0) << 1;
    } while (bVar2 != 0);
  }
  DAT_0054f988 = iVar4 + DAT_0054f988;
  fp = unaff_pfp;
  return;
}

