
/* WARNING: Removing unreachable block (ram,0x0c10f528) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0c10f460(undefined4 param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  double *pdVar4;
  undefined8 *puVar5;
  short *psVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  float fVar17;
  double dVar16;
  float fVar18;
  double dVar19;
  undefined8 uVar20;
  undefined4 uVar22;
  double dVar21;
  float fVar23;
  undefined4 uVar24;
  undefined4 in_fr13;
  undefined4 in_fr12;
  undefined4 in_fr15;
  undefined4 in_fr14;
  double in_xd0;
  double dVar25;
  undefined8 in_xd2;
  ulonglong in_xd4;
  undefined8 in_xd6;
  float in_xf8;
  float in_xf9;
  float in_xf10;
  float in_xf11;
  float in_xf12;
  float in_xf13;
  float in_xf14;
  float in_xf15;
  undefined *puVar26;
  bool bVar27;
  bool bVar28;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 auStack_48 [7];
  undefined1 auStack_2c [4];
  undefined1 local_28 [12];
  
  puVar26 = PTR_DAT_0c10f5d8;
  uVar7 = **(uint **)PTR_DAT_0c10f4a8;
  uVar2 = (*(uint **)PTR_DAT_0c10f4a8)[2];
  if (in_FPSCR_SZ == '\0') {
    puVar8 = local_28;
  }
  else {
    puVar8 = auStack_2c;
  }
  if (in_FPSCR_SZ == '\0') {
    puVar9 = puVar8 + -4;
    *(undefined4 *)(puVar8 + -4) = in_fr14;
  }
  else {
    puVar9 = puVar8 + -8;
    *(ulonglong *)(puVar8 + -8) = CONCAT44(in_fr14,in_fr15);
  }
  if (in_FPSCR_SZ == '\0') {
    puVar10 = puVar9 + -4;
    *(undefined4 *)(puVar9 + -4) = in_fr13;
  }
  else {
    puVar10 = puVar9 + -8;
    *(ulonglong *)(puVar9 + -8) = CONCAT44(in_xf13,in_xf12);
  }
  if (in_FPSCR_SZ == '\0') {
    puVar11 = puVar10 + -4;
    *(undefined4 *)(puVar10 + -4) = in_fr12;
  }
  else {
    puVar11 = puVar10 + -8;
    *(ulonglong *)(puVar10 + -8) = CONCAT44(in_fr12,in_fr13);
  }
  *(uint *)(PTR_DAT_0c10f5d8 + 0x50) = uVar2 & 0x3ffffff | 0xe0000000;
  *(uint *)(puVar26 + 0x48) = uVar7 & 0x3ffffff | 0xe0000000;
  if (in_FPSCR_SZ == '\0') {
    dVar14 = (double)CONCAT44(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14));
    fVar17 = *(float *)(param_2 + 0x18);
    pdVar4 = (double *)(param_2 + 0x1c);
  }
  else {
    dVar14 = *(double *)(param_2 + 0x10);
    in_xd0 = *(double *)(param_2 + 0x18);
    fVar17 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x20) >> 0x20);
    pdVar4 = (double *)(param_2 + 0x28);
  }
  dVar16 = (double)CONCAT44(fVar17,0x3f800000);
                    /* WARNING: Ignoring partial resolution of indirect */
  if (in_FPSCR_PR == '\0') {
    fVar13 = SUB84(dVar14,0);
    fVar18 = (float)((ulonglong)dVar14 >> 0x20);
    fVar12 = SUB84(in_xd0,0) * fVar13 + (float)in_xd4 * fVar18 + in_xf8 * 1.0 + in_xf12 * fVar17;
    fVar12 = (float)((ulonglong)in_xd0 >> 0x20) * fVar13 + (float)(in_xd4 >> 0x20) * fVar18 +
             in_xf9 * 1.0 + in_xf13 * fVar17;
    fVar12 = (float)in_xd2 * fVar13 + (float)in_xd6 * fVar18 + in_xf10 * 1.0 + in_xf14 * fVar17;
    fVar17 = (float)((ulonglong)in_xd2 >> 0x20) * fVar13 +
             (float)((ulonglong)in_xd6 >> 0x20) * fVar18 + in_xf11 * 1.0 + in_xf15 * fVar17;
  }
  dVar21 = (double)CONCAT44(*(float *)(puVar26 + 0x28),param_1);
  if (in_FPSCR_SZ == '\0') {
    dVar19 = (double)CONCAT44(*(undefined4 *)pdVar4,*(undefined4 *)PTR_DAT_0c10f5ac);
  }
  else {
    dVar19 = *pdVar4;
    in_xd4 = *(ulonglong *)PTR_DAT_0c10f5ac;
  }
  if (in_FPSCR_PR == '\0') {
    dVar16 = (double)CONCAT44(-(float)((ulonglong)dVar16 >> 0x20),SUB84(dVar16,0));
    dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) * *(float *)(puVar26 + 0x28),
                              SUB84(dVar19,0));
  }
  else {
    dVar16 = -dVar16;
    dVar19 = dVar19 * dVar21;
  }
  fVar17 = (float)((ulonglong)dVar16 >> 0x20);
  dVar25 = dVar16;
  if (in_FPSCR_SZ == '\0') {
    dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),fVar17);
    dVar25 = in_xd0;
  }
  fVar12 = (float)((ulonglong)dVar19 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    fVar13 = SUB84(dVar14,0) + fVar12;
    dVar16 = (double)CONCAT44(fVar17 - fVar12,SUB84(dVar16,0));
  }
  else {
    fVar13 = SUB84(dVar14 + dVar19,0);
    dVar16 = dVar16 - dVar19;
  }
  if (in_FPSCR_PR == '\0') {
    bVar27 = SUB84(dVar19,0) < (float)((ulonglong)dVar16 >> 0x20);
  }
  else {
    bVar27 = dVar19 < dVar16;
  }
  if ((in_FPSCR_PR != '\0' || 0.0 <= fVar13) && (!bVar27)) {
    *(undefined1 **)(puVar11 + -4) = &LAB_0c10f5dc;
    (*(code *)PTR_FUN_0c10f5b0)(0);
    fVar12 = (float)in_xd6;
    fVar17 = (float)in_xd2;
    uVar24 = SUB84(dVar21,0);
    (**(code **)(puVar26 + 0x14))();
    if (in_FPSCR_SZ == '\0') {
      uVar20 = CONCAT44((undefined4)DAT_0c10f5b8,DAT_0c10f5b8._4_4_);
    }
    else {
      uVar20 = CONCAT44(DAT_0c10f5b8._4_4_,(undefined4)DAT_0c10f5b8);
      in_xd4 = CONCAT44(uRam0c10f5c4,PTR_DAT_0c10f5c0);
    }
    (*(code *)PTR_FUN_0c10f5b4)(uVar20);
    if (in_FPSCR_SZ == '\0') {
      dVar14 = (double)CONCAT44(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14));
      fVar13 = *(float *)(param_2 + 0x18);
      puVar5 = (undefined8 *)(param_2 + 0x1c);
    }
    else {
      dVar14 = *(double *)(param_2 + 0x10);
      dVar25 = *(double *)(param_2 + 0x18);
      fVar13 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x20) >> 0x20);
      puVar5 = (undefined8 *)(param_2 + 0x28);
    }
    fVar18 = 1.0;
                    /* WARNING: Ignoring partial resolution of indirect */
    if (in_FPSCR_PR == '\0') {
      fVar23 = SUB84(dVar14,0);
      fVar15 = (float)((ulonglong)dVar14 >> 0x20);
      fVar18 = fVar17 * fVar23 + fVar12 * fVar15 + in_xf10 * 1.0 + in_xf14 * fVar13;
      fVar17 = SUB84(dVar25,0) * fVar23 + (float)in_xd4 * fVar15 + in_xf8 * 1.0 + in_xf12 * fVar13;
      fVar17 = (float)((ulonglong)dVar25 >> 0x20) * fVar23 + (float)(in_xd4 >> 0x20) * fVar15 +
               in_xf9 * 1.0 + in_xf13 * fVar13;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar22 = *(undefined4 *)puVar5;
    }
    else {
      uVar22 = (undefined4)((ulonglong)*puVar5 >> 0x20);
    }
    dVar21 = (double)CONCAT44(uVar22,0x3f800000);
    dVar16 = dVar21;
    if (in_FPSCR_SZ == '\0') {
      dVar16 = (double)CONCAT44(uVar22,fVar18);
    }
    if (in_FPSCR_PR == '\0') {
      dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) * *(float *)(puVar26 + 0x28),
                                SUB84(dVar16,0));
    }
    else {
      dVar16 = dVar16 * (double)CONCAT44(*(float *)(puVar26 + 0x28),uVar24);
    }
    if (in_FPSCR_PR == '\0' && fVar18 < 0.0) {
      dVar21 = (double)CONCAT44(uVar22,0xbf800000);
    }
    if (in_FPSCR_PR == '\0') {
      dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar21,0) / SUB84(dVar16,0));
    }
    else {
      dVar21 = dVar21 / dVar16;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar19 = (double)CONCAT44((undefined4)DAT_0c10f5b8,DAT_0c10f5b8._4_4_);
    }
    else {
      dVar19 = (double)CONCAT44(DAT_0c10f5b8._4_4_,(undefined4)DAT_0c10f5b8);
    }
    fVar17 = SUB84(dVar21,0);
    if (in_FPSCR_PR == '\0') {
      dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),SUB84(dVar14,0) * fVar17);
    }
    else {
      dVar14 = dVar14 * dVar21;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),(int)((ulonglong)dVar14 >> 0x20));
    }
    fVar12 = (float)((ulonglong)dVar19 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),SUB84(dVar16,0) * fVar17);
      dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) * fVar12,fVar17);
    }
    else {
      dVar16 = dVar16 * dVar21;
      dVar21 = dVar21 * dVar19;
    }
    fVar17 = SUB84(dVar21,0);
    if (in_FPSCR_SZ == '\0') {
      in_xd4 = CONCAT44(fVar17,SUB84(dVar14,0));
    }
    fVar13 = (float)(in_xd4 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      fVar18 = (float)((ulonglong)dVar16 >> 0x20) * SUB84(dVar19,0);
      fVar23 = (float)((ulonglong)dVar21 >> 0x20);
      dVar16 = (double)CONCAT44(fVar18,fVar13 * fVar23 + SUB84(dVar16,0));
      in_xd4 = CONCAT44(fVar13,fVar13 * fVar18 + (float)in_xd4);
      dVar14 = (double)CONCAT44(fVar23 * (fVar17 + fVar17),fVar17 + fVar17);
    }
    else {
      dVar16 = dVar16 * dVar19;
      fVar18 = (float)((ulonglong)dVar16 >> 0x20);
      dVar14 = (dVar21 + dVar21) * (dVar21 + dVar21);
    }
    if (in_FPSCR_PR == '\0') {
      bVar27 = 0.0 < SUB84(dVar16,0);
      dVar16 = (double)CONCAT44(fVar18 * SUB84(dVar14,0),SUB84(dVar16,0));
    }
    else {
      bVar27 = (double)(in_xd4 & 0xffffffff) < dVar16;
      dVar16 = dVar16 * dVar14;
    }
    if (bVar27) {
      if (in_FPSCR_PR == '\0') {
        fVar17 = (float)((ulonglong)dVar16 >> 0x20);
        dVar16 = (double)CONCAT44(fVar17,SUB84(dVar16,0) - (float)((ulonglong)dVar14 >> 0x20));
        dVar14 = (double)(ulonglong)(uint)((float)in_xd4 - fVar17);
      }
      else {
        dVar16 = dVar16 - dVar14;
        dVar14 = (double)(in_xd4 & 0xffffffff) - dVar16;
      }
      if (in_FPSCR_PR == '\0' && 0.0 < (float)in_xd4) {
        if (in_FPSCR_PR == '\0') {
          bVar27 = fVar12 < SUB84(dVar16,0);
        }
        else {
          bVar27 = dVar19 < dVar16;
        }
        if (in_FPSCR_PR == '\0') {
          bVar28 = SUB84(dVar19,0) < SUB84(dVar14,0);
        }
        else {
          bVar28 = dVar19 < dVar14;
        }
        if ((!bVar27) && (!bVar28)) {
          (**(code **)(puVar26 + 0x10))
                    (*(undefined4 *)(param_2 + 4),*(undefined4 *)PTR_DAT_0c10f5c0,
                     *(undefined4 *)(param_2 + 8),param_2);
          iVar3 = *(int *)(puVar26 + 0xc);
          psVar6 = *(short **)(param_2 + 0xc);
          sVar1 = *psVar6;
          while (-1 < sVar1) {
            (**(code **)((uint)(byte)sVar1 * 4 + iVar3))();
            sVar1 = *psVar6;
          }
        }
      }
    }
    (*(code *)PTR_FUN_0c10f5d4)(1);
    return;
  }
  return;
}

