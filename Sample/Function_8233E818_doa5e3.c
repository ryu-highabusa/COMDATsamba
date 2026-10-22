
ulonglong Function_8233E818(int param_1)

{
  byte bVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)*(byte *)(param_1 + 0x25);
  if (uVar3 != 0xff) {
    switch(*(undefined4 *)(param_1 + 4)) {
    case 8:
    case 0xf:
    case 0x11:
    case 0x13:
    case 0x19:
      Function_822C2FF0();
      break;
    case 0x17:
      plVar2 = FUN_822943a8((uint)*(byte *)(param_1 + 0x25));
      if (plVar2 != (longlong *)0x0) {
        Function_82458520(plVar2);
      }
      bVar1 = *(byte *)(param_1 + 0x25);
      (&CHAR_SEL_P1_83e739b3 + (uint)bVar1 * 2)[0] = 0;
      (&CHAR_SEL_P1_83e739b3 + (uint)bVar1 * 2)[1] = 0;
      Function_822C2FF0();
      break;
    case 0x1d:
      Function_822F5070();
      break;
    case 0x25:
      Function_825C8F68();
      break;
    case 0x29:
      if (DAT_83e6c9b4 != (int *)0x0) {
        (**(code **)(*DAT_83e6c9b4 + 0x118))(DAT_83e6c9b4,*(undefined4 *)(param_1 + 0xc));
      }
      break;
    case 0x2a:
      Function_8244F6E8();
    }
    uVar3 = Function_82342370(*(int *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined1 *)(param_1 + 0x25) = 0xff;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined1 *)(param_1 + 0x24) = 0;
  }
  return uVar3;
}

