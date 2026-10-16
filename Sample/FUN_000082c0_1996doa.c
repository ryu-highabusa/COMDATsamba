
/* unknown slot operation */

void FUN_000082c0(int param_1,int param_2)

{
  uint uVar1;
  undefined4 unaff_pfp;
  
  (&g_task_slots)[param_1 * 8] = 1;
  uVar1 = ac & 0xfffffff8 | (uint)(0 < param_2) << 2 | (uint)(param_2 == 0) << 1;
  ac = uVar1 | param_2 < 0;
  if (((byte)(uVar1 >> 1) & 1) != 1) {
    (&DAT_0054b1a4)[param_1 * 8] = param_2;
    fp = unaff_pfp;
    return;
  }
  (&DAT_0054b1a4)[param_1 * 8] = 1;
  fp = unaff_pfp;
  return;
}

