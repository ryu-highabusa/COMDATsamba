
void FUN_0004bc90(int param_1)

{
  uint uVar1;
  uint8_t uVar2;
  undefined4 unaff_pfp;
  
  uVar2 = (uint8_t)g14;
  (&DAT_005882d8)[param_1] = (uint8_t)g14;
  (&DAT_005882b8)[param_1] = (uint8_t)g14;
  (&DAT_005882f8)[param_1] = (uint8_t)g14;
  *(undefined4 *)(&DAT_00565d40 + param_1 * 4) = g14;
  *(undefined4 *)(&DAT_00565d48 + param_1 * 4) = g14;
  (&DAT_005882e8)[param_1] = 0;
  (&DAT_00565e40)[param_1] = g14;
  (&DAT_0056ac52)[param_1] = (uint8_t)g14;
  (&DAT_005882d0)[param_1] = (uint8_t)g14;
  (&DAT_0056ac20)[param_1] = 0;
  (&DAT_0056ac50)[param_1] = (uint8_t)g14;
  (&DAT_0056ac28)[param_1] = 0;
  (&DAT_005882d4)[param_1 * 2] = (uint8_t)g14;
  (&DAT_0056ac18)[param_1] = (uint8_t)g14;
  (&DAT_005882d5)[param_1 * 2] = (uint8_t)g14;
  uVar1 = ac & 0xfffffff8 | (uint)(param_1 < 0) << 2;
  ac = uVar1 | (uint)(param_1 == 0) << 1 | (uint)(0 < param_1);
  (&DAT_005882e0)[param_1] = g14;
  (&DAT_005882bc)[param_1] = (undefined2)g14;
  (&DAT_0056ac10)[param_1] = (undefined2)g14;
  if (((byte)ac & 1 | (byte)(uVar1 >> 2) & 1) != 1) {
    DAT_00589dd0 = (undefined2)g14;
    DAT_00589dd2 = (undefined2)g14;
    DAT_00589dd4 = (undefined2)g14;
    DAT_00589dd8 = uVar2;
  }
  g_motion_script_refresh_request_P1[param_1] = uVar2;
  (&DAT_005882b6)[param_1] = uVar2;
  (&DAT_005882b4)[param_1] = uVar2;
  fp = unaff_pfp;
  return;
}

