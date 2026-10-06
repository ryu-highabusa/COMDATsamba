
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00031dc0(int param_1)

{
  float10 fVar1;
  float10 fVar2;
  undefined4 unaff_pfp;
  undefined4 uVar3;
  undefined4 in_g7;
  
  (&DAT_005647e0)[param_1] = g14;
  (&DAT_005647f0)[param_1] = g14;
  ac = ac & 0xfffffff8;
  if ((float10)CONCAT44(2.0,(&g_player1)[param_1].x_position) <
      (float10)CONCAT44(in_g7,g_ringBoundaryHalfExtentX)) {
    if ((float10)CONCAT44(2.0,(&g_player1)[param_1].x_position) <
        (float10)(longlong)(CONCAT44(in_g7,g_ringBoundaryHalfExtentX) ^ -0.0)) {
      uVar3 = -0.1;
      goto LAB_00031e70;
    }
  }
  else {
    uVar3 = 0.1;
LAB_00031e70:
    (&DAT_005647e0)[param_1] = uVar3;
  }
  fVar2 = (float10)CONCAT44(2.0,(&g_player1)[param_1].z_position);
  fVar1 = (float10)CONCAT44(in_g7,g_ringBoundaryHalfExtentZ);
  if (!NAN(fVar1) && !NAN(fVar2)) {
    ac = ac | (uint)(fVar1 < fVar2) << 2;
    ac = ac | (uint)(fVar1 == fVar2) << 1;
    ac = ac | fVar2 < fVar1;
  }
  if (((byte)ac & 1) == 1) {
    fVar2 = (float10)CONCAT44(2.0,(&g_player1)[param_1].z_position);
    fVar1 = (float10)(longlong)(CONCAT44(in_g7,g_ringBoundaryHalfExtentZ) ^ -0.0);
    ac = ac & 0xfffffff8;
    if (!NAN(fVar1) && !NAN(fVar2)) {
      ac = ac | (uint)(fVar1 < fVar2) << 2;
      ac = ac | (uint)(fVar1 == fVar2) << 1;
      ac = ac | fVar2 < fVar1;
    }
    if (((byte)(ac >> 1) & 1 | (byte)(ac >> 2) & 1) == 1) goto LAB_00031f20;
    uVar3 = -0.1;
  }
  else {
    uVar3 = 0.1;
  }
  (&DAT_005647f0)[param_1] = uVar3;
LAB_00031f20:
  (&DAT_005647e8)[param_1] = -0.1;
  fp = unaff_pfp;
  return;
}

