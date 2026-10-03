
undefined4 FUN_00005b90(void)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 unaff_pfp;
  undefined4 uVar5;
  short sVar6;
  short sVar7;
  
  uVar4 = ac;
  if (DAT_0054fd11 == '\0') {
    sVar6 = 0;
    sVar7 = 0x40;
  }
  else {
    sVar6 = 0x40;
    sVar7 = 0;
  }
  uVar5 = 99;
  uVar3 = (undefined1)g14;
  if (g_championWinCount < 100) {
    ac = ac & 0xfffffff8 | (uint)(9 < DWORD_0054f3e0) << 2 | (uint)(DWORD_0054f3e0 == 9) << 1 |
         (uint)(DWORD_0054f3e0 < 9);
    switch(DWORD_0054f3e0) {
    case 0:
      uVar5 = 0x97;
      *(undefined2 *)DWORD_0054f3dc = 0x97;
      break;
    case 1:
      uVar5 = 0x9f;
      *(undefined2 *)DWORD_0054f3dc = 0x9f;
      break;
    case 2:
      *(short *)DWORD_0054f3dc = sVar6 + 0x3f;
      break;
    case 3:
      *(short *)DWORD_0054f3dc = sVar6 + 0x1f;
      break;
    case 4:
      ac = uVar4 & 0xfffffff8 | (uint)(9 < g_championWinCount) << 2 |
           (uint)(g_championWinCount == '\t') << 1 | (uint)(g_championWinCount < 9);
      if (9 < g_championWinCount) {
        sVar6 = sVar6 + 0x20 + g_championWinCount / 10;
      }
      else {
        sVar6 = sVar6 + 0x3f;
      }
      *(short *)DWORD_0054f3dc = sVar6;
      break;
    case 5:
      sVar6 = sVar6 + (ushort)g_championWinCount % (ushort)g_championWinCount;
      goto LAB_00005e78;
    case 6:
      *(short *)DWORD_0054f3dc = sVar7 + 0x3f;
      break;
    case 7:
      *(short *)DWORD_0054f3dc = sVar7 + 0x1f;
      break;
    case 8:
      uVar5 = 0x97;
      *(undefined2 *)DWORD_0054f3dc = 0x97;
      break;
    case 9:
      *(undefined2 *)DWORD_0054f3dc = 0x9f;
      DWORD_0054f3e0 = g14;
      DAT_0054f3e4 = (undefined2)g14;
      DAT_0054f3e8 = uVar3;
      fp = unaff_pfp;
      return 0x9f;
    default:
      goto switchD_00005bd4_caseD_a;
    }
    goto LAB_00005e7c;
  }
  bVar1 = DAT_0054f3e4 != 0;
  bVar2 = DAT_0054f3e4 == 0;
  if (bVar1) {
    DAT_0054f3e4 = DAT_0054f3e4 + -1;
    fp = unaff_pfp;
    ac = ac & 0xfffffff8 | (uint)bVar1 << 2 | (uint)bVar2 << 1;
    return uVar5;
  }
  ac = ac & 0xfffffff8 | (uint)(0xb < DWORD_0054f3e0) << 2 | (uint)(DWORD_0054f3e0 == 0xb) << 1 |
       (uint)(DWORD_0054f3e0 < 0xb);
  switch(DWORD_0054f3e0) {
  case 0:
    uVar5 = 0x97;
    *(undefined2 *)DWORD_0054f3dc = 0x97;
    goto LAB_00005e7c;
  case 1:
    uVar5 = 0x9f;
    *(undefined2 *)DWORD_0054f3dc = 0x9f;
    goto LAB_00005e7c;
  case 2:
    *(short *)DWORD_0054f3dc = sVar6 + 0x3f;
    goto LAB_00005e7c;
  case 3:
    *(ushort *)DWORD_0054f3dc = sVar6 + g_championWinCount / 100;
    break;
  case 4:
    uVar5 = 100;
    sVar6 = sVar6 + 0x20 + g_championWinCount / 100;
    goto LAB_00005e78;
  case 5:
    *(short *)DWORD_0054f3dc =
         sVar6 + (short)(((uint)g_championWinCount % (uint)g_championWinCount) / 10);
    break;
  case 6:
    uVar5 = 100;
    sVar6 = sVar6 + 0x20 + (short)(((uint)g_championWinCount % (uint)g_championWinCount) / 10);
    goto LAB_00005e78;
  case 7:
    *(ushort *)DWORD_0054f3dc = sVar6 + (ushort)g_championWinCount % (ushort)g_championWinCount;
    break;
  case 8:
    sVar6 = (ushort)g_championWinCount % (ushort)g_championWinCount + 0x20 + sVar6;
LAB_00005e78:
    *(short *)DWORD_0054f3dc = sVar6;
LAB_00005e7c:
    DWORD_0054f3e0 = DWORD_0054f3e0 + 1;
    fp = unaff_pfp;
    return uVar5;
  case 9:
    *(short *)DWORD_0054f3dc = sVar6 + 0x1f;
    break;
  case 10:
    *(short *)DWORD_0054f3dc = sVar6 + 0x3f;
    DWORD_0054f3e0 = DWORD_0054f3e0 + 1;
    DAT_0054f3e4 = 0x3c;
    fp = unaff_pfp;
    return 0x3c;
  case 0xb:
    DWORD_0054f3e0 = g14;
    DAT_0054f3e8 = uVar3;
    fp = unaff_pfp;
    return uVar5;
  default:
switchD_00005bd4_caseD_a:
    DWORD_0054f3e0 = g14;
    DAT_0054f3e4 = (undefined2)g14;
    fp = unaff_pfp;
    return uVar5;
  }
  DWORD_0054f3e0 = DWORD_0054f3e0 + 1;
  DAT_0054f3e4 = 0x14;
  fp = unaff_pfp;
  return 0x14;
}

