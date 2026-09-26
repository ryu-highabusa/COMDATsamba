
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00062ec0(int param_1)

{
  undefined4 unaff_pfp;
  
  DAT_00800010 = 0x101;
  DAT_00804000 = (&FLOAT_0203a160)[param_1 * 4];
  DAT_00804004 = *(undefined4 *)(&DAT_0203a164 + param_1 * 0x10);
  DAT_00804008 = (&PTR_GEOBASE_00800000_0203a168)[param_1 * 4];
  DAT_0080400c = (&DWORD_0203a16c)[param_1 * 4];
  fp = unaff_pfp;
  return;
}

