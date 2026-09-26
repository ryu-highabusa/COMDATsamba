
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_000841f0(char param_1)

{
  undefined4 unaff_pfp;
  
  ac = ac & 0xfffffff8 | (uint)(param_1 != '\0') << 2 | (uint)(param_1 == '\0') << 1;
  if (param_1 == '\0') {
    DAT_005bfa38 = DAT_005bf8f8;
    DAT_005bfa3c = DAT_005bf900;
    DAT_005bfa40 = DAT_005bf908;
    fp = unaff_pfp;
    return;
  }
  DAT_005bfa38 = DAT_005bf8fc;
  DAT_005bfa3c = DAT_005bf904;
  DAT_005bfa40 = DAT_005bf90c;
  fp = unaff_pfp;
  return;
}

