
void UndefinedFunction_82412f50(void)

{
  byte bVar1;
  float fVar2;
  ushort uVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  byte *pbVar11;
  longlong lVar12;
  float *pfVar13;
  int iVar14;
  byte *pbVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  dVar18 = 0.0;
  dVar19 = 0.5;
  lVar12 = 0;
  pbVar15 = &DAT_830edf1a;
  pbVar11 = &ACT_STATE_P1_830201bf_;
  do {
    if (((pbVar11[9] == 1) &&
        (((((bVar1 = *pbVar11, bVar1 == 7 || (bVar1 == 9)) || (bVar1 == 8)) &&
          ((pbVar11[0x13] == 0 && (pbVar11[0x18] == 0)))) && (pbVar11[0x2f] == 0)))) &&
       (cVar5 = FUN_824eb180(lVar12), cVar5 == '\0')) {
      if (pbVar15[-0x43] == 0) {
        iVar7 = 0;
        uVar3 = *(ushort *)
                 (*(int *)(&DAT_83099e58 + (uint)(&BYTE_830201a9)[((uint)lVar12 ^ 1) * 0x9c] * 0x84)
                  + (uint)*pbVar15 * 0x40 + 0x20);
        bVar1 = *(byte *)(*(int *)(&DAT_83099e58 + (uint)pbVar15[0xb] * 0x84) +
                          (uint)*pbVar15 * 0x40 + 0x22);
        bVar6 = bVar1 >> 2;
        iVar14 = (uint)bVar1 + ((int)(uint)bVar1 >> 2) * -4;
        if (((uVar3 != 0xffff) && (uVar3 < 0xfff5)) &&
           ((0xffea < uVar3 || (((uVar3 == 1 || (uVar3 == 3)) || (uVar3 == 5)))))) {
          iVar7 = 1;
        }
        if (0 < iVar14) {
          iVar14 = iVar14 + -1;
        }
        bVar4 = bVar1 >> 2;
        if (pbVar15[1] == 1) {
          bVar1 = bVar1 >> 2;
          if (bVar4 == 0) {
LAB_82413104:
            bVar6 = bVar1;
            iVar8 = 0;
          }
          else {
            iVar8 = 1;
          }
        }
        else if (bVar4 == 1) {
          bVar6 = 2;
          iVar8 = 1;
        }
        else {
          if (bVar4 != 2) {
            bVar1 = 0;
            goto LAB_82413104;
          }
          bVar6 = 1;
          iVar8 = 1;
        }
        bVar1 = *(byte *)((uint)*(ushort *)(pbVar15 + -4) * 10 +
                          *(int *)(&DAT_83099e50_act___ + (uint)pbVar15[0xb] * 0x84) + 8);
        if (bVar1 == 0) {
          *(float *)(pbVar15 + 0x152) = (float)dVar18;
          *(undefined4 *)(pbVar15 + 0x14a) = 0;
        }
        else {
          iVar10 = bVar1 - 1;
          if ((bVar6 == 0) && (3 < iVar10)) {
            if (iVar10 < 7) {
              iVar10 = bVar1 - 5;
              goto LAB_8241317c;
            }
LAB_8241319c:
            pfVar13 = (float *)(&DWORD_82c40e38 + (iVar10 + -7) * 4);
          }
          else {
LAB_8241317c:
            if (6 < iVar10) goto LAB_8241319c;
            pfVar13 = &FLOAT_82c408f8 + (((iVar8 * 3 + iVar14) * 2 + iVar7) * 7 + iVar10) * 4;
          }
          *(float **)(pbVar15 + 0x156) = pfVar13;
          iVar14 = *(ushort *)(pbVar15 + 6) + 0x4000;
          if (bVar6 == 1) {
            iVar14 = iVar14 - (int)pfVar13[3];
          }
          else if (bVar6 == 2) {
            iVar14 = (int)pfVar13[3] + iVar14;
          }
          dVar17 = (double)FUN_829ebfa8((double)((ZPOS_P2_83020230 - ZPOS_P1_83020194) *
                                                 (ZPOS_P2_83020230 - ZPOS_P1_83020194) +
                                                (XPOS_P2_83020228 - XPOS_P1_8302018c) *
                                                (XPOS_P2_83020228 - XPOS_P1_8302018c)));
          fVar2 = (*(float **)(pbVar15 + 0x156))[2];
          dVar16 = dVar18;
          if ((float)dVar17 < fVar2) {
            dVar16 = (double)(((fVar2 - (float)dVar17) / fVar2) * **(float **)(pbVar15 + 0x156) *
                             2.0);
          }
          bVar1 = *pbVar11;
          *(float *)(pbVar15 + 0x152) = (float)dVar16;
          *(int *)(pbVar15 + 0x14e) = iVar14;
          *(undefined4 *)(pbVar15 + 0x14a) = 1;
          if ((bVar1 == 8) || ((bVar1 == 9 && (0x41a7 < *(ushort *)(pbVar11 + -5))))) {
            *(float *)(pbVar15 + 0x152) = (float)(dVar16 * dVar19);
          }
        }
      }
      else {
        *(float *)(pbVar15 + 0x152) = (float)dVar18;
        *(undefined4 *)(pbVar15 + 0x14a) = 0;
      }
    }
    pbVar11 = pbVar11 + 0x9c;
    lVar12 = lVar12 + 1;
    pbVar15 = pbVar15 + 0x250;
    if (-0x7cfdfd0a < (int)pbVar11) {
      pfVar13 = (float *)&DAT_830ee06c;
      pbVar11 = &ACT_STATE_P1_830201bf_;
      do {
        bVar1 = *pbVar11;
        if ((((bVar1 == 7) || (bVar1 == 9)) || (bVar1 == 8)) &&
           (((pbVar11[0x13] == 0 && (pbVar11[0x18] == 0)) && (pbVar11[0x2f] == 0)))) {
          bVar9 = false;
          if (((*(char *)(pfVar13 + -0x34) != '\0') || (*(short *)(pbVar11 + -5) == 0x4447)) ||
             (*(short *)(pbVar11 + -5) == 0x4448)) {
            bVar9 = true;
          }
          if ((!bVar9) && (pfVar13[1] != 0.0)) {
            if (pfVar13[-2] != 0.0) {
              pfVar13[-2] = (float)((int)pfVar13[-2] + -1);
                    /* WARNING: Subroutine does not return */
              FUN_829ebfb0((double)((float)(longlong)(int)pfVar13[-1] * 9.58738e-05));
            }
            if (dVar18 < (double)*pfVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_829ebfb0((double)((float)(longlong)(int)pfVar13[-1] * 9.58738e-05));
            }
          }
        }
        pbVar11 = pbVar11 + 0x9c;
        pfVar13 = pfVar13 + 0x94;
        if (-0x7cfdfd0a < (int)pbVar11) {
          return;
        }
      } while( true );
    }
  } while( true );
}

