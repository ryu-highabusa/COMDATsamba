
void FUN_00008b0c(char *param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 unaff_pfp;
  
code_r0x00008b0c:
  do {
    do {
      while( true ) {
        uVar2 = ac;
        cVar1 = *param_1;
        ac = ac & 0xfffffff8 | (uint)('\0' < cVar1) << 2 | (uint)(cVar1 == '\0') << 1 |
             (uint)(cVar1 < '\0');
        if (((byte)ac & 1 | '\0' < cVar1) != 1) {
          fp = unaff_pfp;
          return;
        }
        cVar1 = *param_1;
        param_1 = param_1 + 1;
        if (cVar1 < 0x20) break;
        *(ushort *)((DAT_0054f984 * 0x40 + DAT_0054f988) * 2 + 0x1000000) =
             (ushort)DAT_0054f98c | (short)cVar1 | 0x8000;
        ac = uVar2 & 0xfffffff8 | (uint)(0x3d < (int)DAT_0054f988);
        if (((byte)ac & 1) != 1) {
          DAT_0054f988 = DAT_0054f988 + 1;
        }
      }
      if (cVar1 == 0x9) goto LAB_00008a44;
      ac = uVar2 & 0xfffffff8 | (uint)(cVar1 == 0xa) << 1;
    } while (((byte)(ac >> 1) & 1) != 1);
    DAT_0054f988 = DAT_0054f990;
    ac = uVar2 & 0xfffffff8 | (uint)(0x2e < DAT_0054f984);
  } while (((byte)ac & 1) == 1);
  goto LAB_00008aa0;
LAB_00008a44:
  DAT_0054f988 = DAT_0054f988 + 8 & 0xfffffff8;
  ac = uVar2 & 0xfffffff8 | (uint)(DAT_0054f988 == 0x3d) << 1;
  if (((byte)(ac >> 1) & 1 | (int)DAT_0054f988 < 0x3d) != 1) {
    DAT_0054f988 = g14;
    ac = uVar2 & 0xfffffff8 | (uint)(0x2e < DAT_0054f984);
    if (((byte)ac & 1) != 1) {
LAB_00008aa0:
      DAT_0054f984 = DAT_0054f984 + 1;
    }
  }
  goto code_r0x00008b0c;
}

