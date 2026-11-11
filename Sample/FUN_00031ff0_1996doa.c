
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00031ff0(uint param_1)

{
  undefined4 unaff_pfp;
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 ^ 1;
  DAT_00884000 = (&g_player1)[param_1].x_position;
  DAT_00884004 = (&g_player1)[param_1].z_position;
  DAT_008800a0 = 0xa0a;
  uVar2 = *(uint *)PTR_DAT_000006a4;
  DAT_008801e0 = 0x1e1e;
  *(uint *)PTR_DAT_000006a4 = uVar2 & 0xffff;
  *(undefined4 *)PTR_DAT_000006a0 = 0x3dcccccd;
  DAT_008801d0 = 0x1d1d;
  *(uint *)PTR_DAT_000006a4 = uVar2 & 0xffff;
  *(undefined4 *)PTR_DAT_000006a0 = 0x3dcccccd;
  (&g_player1)[param_1].x_position = (&g_player1)[param_1].x_position;
  (&g_player1)[param_1].z_position = (&g_player1)[param_1].z_position;
  (&g_player1)[uVar1].x_position = (&g_player1)[uVar1].x_position;
  (&g_player1)[uVar1].z_position = (&g_player1)[uVar1].z_position;
  fp = unaff_pfp;
  return;
}

