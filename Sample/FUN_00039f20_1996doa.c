
void FUN_00039f20(byte *param_1)

{
  uint uVar1;
  byte bVar2;
  short sVar3;
  undefined4 unaff_pfp;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar1 = ac & 0xfffffff8 | (uint)(*param_1 == 0) << 1;
  ac = uVar1 | *param_1 != 0;
  iVar4 = (DAT_0054f988 + DAT_0054f984 * 0x40) * 2 + 0x1000000;
  if (((byte)(uVar1 >> 1) & 1) != 1) {
    do {
      bVar2 = *param_1;
      if (bVar2 == 10) {
        iVar5 = 0;
        iVar4 = iVar4 + 0x100;
        DAT_0054f984 = DAT_0054f984 + 2;
      }
      else {
        sVar3 = (bVar2 & 0x1f) + (bVar2 & 0xffe0) * 2;
        *(ushort *)(iVar5 * 2 + iVar4) = sVar3 + 0x80U | 0x8000;
        *(ushort *)(iVar4 + 0x80 + iVar5 * 2) = sVar3 + 0xa0U | 0x8000;
        iVar5 = iVar5 + 1;
      }
      param_1 = param_1 + 1;
      bVar2 = *param_1;
      ac = ac & 0xfffffff8 | (uint)(bVar2 != 0) << 2 | (uint)(bVar2 == 0) << 1;
    } while (bVar2 != 0);
  }
  DAT_0054f988 = iVar5 + DAT_0054f988;
  fp = unaff_pfp;
  return;
}

