
void FUN_824fd898(uint param_1)

{
  bool bVar1;
  byte bVar2;
  doa4_character dVar3;
  doa_actstate dVar4;
  word wVar5;
  ushort uVar6;
  doa4_character *pdVar7;
  bool bVar8;
  char cVar11;
  int iVar9;
  int iVar10;
  uint uVar12;
  undefined2 uVar13;
  uint uVar14;
  int iVar15;
  doa4_character *pdVar16;
  uint uVar17;
  uint uVar18;
  double dVar19;
  
  param_1 = param_1 & 0xff;
  iVar10 = param_1 * 0x9c;
  uVar14 = param_1 ^ 1;
  iVar15 = uVar14 * 0x9c;
  bVar2 = (&BYTE_830201c7)[iVar10];
  if (bVar2 == 2) {
    if ((&ACT_FLAG_P1_830201bc)[param_1 * 0x4e] == 0xffff) {
      return;
    }
    Function_824F07D0((&ACT_FLAG_P1_830201bc)[param_1 * 0x4e],param_1,3);
    return;
  }
  uVar17 = (uint)(&ACT_FLAG_P1_830201bc)[param_1 * 0x4e];
  if (uVar17 == 0xffff) {
    if ((&ACT_STATE_P1_830201bf_)[iVar10] != 0x0_Neutral) {
      if ((&POSE_STA_P1_830201c0)[iVar10] == 0) {
        (&ACT_CODE_P1_830201ba_)[param_1 * 0x4e] = 0;
      }
      else {
        (&ACT_CODE_P1_830201ba_)[param_1 * 0x4e] = 10;
      }
    }
    if (bVar2 == 1) {
      Function_82504910(param_1);
      return;
    }
    uVar6 = (&ACT_CODE_P1_830201ba_)[param_1 * 0x4e];
    if (uVar6 == 0) {
      return;
    }
    iVar9 = FUN_824f9180(param_1,6);
    if (iVar9 != 0) {
      return;
    }
    cVar11 = Function_824EE020(param_1,4);
    if (cVar11 == '\x01') {
      return;
    }
    dVar3 = (&CHAR_NUM_P1_83020189)[iVar10];
    if ((dVar3 != char_ayane) || (uVar6 != 0x140)) {
      if (dVar3 == char_helena) {
        if (uVar6 == 0x142) goto LAB_824fe220;
        if ((uVar6 == 0x139) || (uVar6 == 0x13a)) {
          Function_824F07D0(0x132,param_1,0);
          return;
        }
      }
      if ((dVar3 != char_lamariposa) || (uVar6 != 0x140)) {
        if ((0xc < uVar6) && (uVar6 < 0x10)) {
          return;
        }
        if (uVar6 == 0x10b) {
          if ((&ACT_STATE_P1_830201bf_)[param_1 * 0x9c] != 0x0_Neutral) {
            return;
          }
          if (((&ACT_CODE_P1_830201ba_)[param_1 * 0x4e] != 0x10a) &&
             ((&ACT_CODE_P1_830201ba_)[param_1 * 0x4e] != 0x10b)) {
            return;
          }
          if ((&DAT_830a6ab8)[param_1] == '\0') {
            return;
          }
          if (((&ACT_STATE_P1_830201bf_)[iVar15] != 0x3_Attack) &&
             ((&ACT_STATE_P1_830201bf_)[iVar15] != 0x2_Air_Attack)) {
            return;
          }
          if (((&ATK_HEIGHT_P1_830201d8)[uVar14 * 0x4e] != 0) &&
             ((&ATK_HEIGHT_P1_830201d8)[uVar14 * 0x4e] != 1)) {
            return;
          }
          (&ANIME_SPD_P1_83020198)[param_1 * 0x27] = 2.0;
          return;
        }
        if ((0x14 < uVar6) && (iVar10 = FUN_824f9180(param_1,5), iVar10 == 0)) {
          return;
        }
        (&ACT_FLAG_P1_830201bc)[param_1 * 0x4e] = 0;
        iVar10 = FUN_824f9180(param_1,5);
        if (iVar10 == 0) {
          if (((6 < uVar6) && (uVar6 < 0x11)) || (uVar6 == 0x10d)) {
            (&ACT_FLAG_P1_830201bc)[param_1 * 0x4e] = 0xd;
          }
        }
        else {
          uVar13 = char_genfu;
          pdVar16 = DAT_830edbe8;
          if (*(undefined2 *)(DAT_830edbe8 + 2) == 0xffff) {
LAB_824fe3a0:
            (&ACT_FLAG_P1_830201bc)[param_1 * 0x4e] = uVar13;
          }
          else {
            do {
              if (((*pdVar16 == ~char_zack) || (dVar3 == *pdVar16)) &&
                 (*(undefined2 *)(pdVar16 + 4) == char_genfu)) {
                uVar13 = *(undefined2 *)(pdVar16 + 2);
                goto LAB_824fe3a0;
              }
              pdVar7 = pdVar16 + 8;
              pdVar16 = pdVar16 + 6;
            } while (*(undefined2 *)pdVar7 != 0xffff);
            (&ACT_FLAG_P1_830201bc)[param_1 * 0x4e] = 6;
          }
        }
        Function_824F07D0((&ACT_FLAG_P1_830201bc)[param_1 * 0x4e],param_1,0);
        return;
      }
    }
LAB_824fe220:
    Function_824F07D0(0,param_1,0);
    return;
  }
  bVar2 = *(byte *)(*(int *)(&DAT_83099e50_act___ + (uint)(&BYTE_83020220)[iVar10] * 0x84) +
                    uVar17 * 10 + 4);
  if (bVar2 != 0) {
    if (bVar2 < 3) {
      (&JUMP_STA_P1_830201ce)[iVar10] = 0;
      if ((&CHAR_NUM_P1_83020189)[iVar10] == char_tengu) {
        (&JUMP_HIGH_P1_830201cf)[iVar10] = 1;
      }
      else {
        (&JUMP_HIGH_P1_830201cf)[iVar10] = 2;
      }
      if (((uVar17 == 0x37) || (uVar17 == 0xbe)) || (uVar17 == 0xbf)) {
LAB_824fda4c:
        (&BYTE_830201d0)[iVar10] = 1;
      }
      else if (((uVar17 == 0x3f) || (uVar17 == 0xc0)) || (uVar17 == 0xc1)) {
        (&BYTE_830201d0)[iVar10] = 2;
      }
      else {
        if (((uVar17 != 0x36) && (uVar17 != 0xbc)) && (uVar17 != 0xbd)) goto LAB_824fda4c;
        (&BYTE_830201d0)[iVar10] = 0;
      }
      goto LAB_824fda54;
    }
    if (bVar2 != 0xe) goto LAB_824fda54;
    (&JUMP_STA_P1_830201ce)[iVar10] = 0;
    uVar6 = (&ACT_CODE_P1_830201ba_)[param_1 * 0x4e];
    iVar15 = *(int *)(&DAT_83099e50_act___ + (uint)(&BYTE_83020220)[param_1 * 0x9c] * 0x84);
    iVar9 = *(int *)(&DAT_83099e60 + (uint)(&BYTE_83020220)[param_1 * 0x9c] * 0x84);
    (&DAT_830edf02)[param_1 * 0x250] = 0;
    if (*(char *)((uint)*(byte *)((uint)uVar6 * 10 + iVar15 + 5) * 0x20 + iVar9 + 1) == '\x01') {
      if (param_1 == 0) {
        DIRECT_P1_8302019c = DAT_83022d08 & 0xffff;
      }
      else {
        (&DIRECT_P1_8302019c)[param_1 * 0x27] = DAT_83022d08 - 0x8000 & 0xffff;
      }
    }
LAB_824fda58_HELENA:
    dVar3 = (&CHAR_NUM_P1_83020189)[iVar10];
    if (((dVar3 != char_helena) ||
        (((&ACT_CODE_P1_830201ba_)[param_1 * 0x4e] != 0x134 &&
         ((&ACT_CODE_P1_830201ba_)[param_1 * 0x4e] != 0x136)))) ||
       ((uVar17 != 0x13b && ((uVar17 != 0x13c && (uVar17 != 0x141)))))) {
      cVar11 = FUN_824f8ae0(dVar3,uVar17,0);
      pdVar16 = DAT_830edb8c;
      if (cVar11 == '\0') {
        for (; pdVar16 < DAT_830edad4; pdVar16 = pdVar16 + 0x30) {
          if ((uVar17 == (ushort)*(undefined2 *)(pdVar16 + 4)) && (dVar3 == *pdVar16)) {
            if (pdVar16 != (doa4_character *)0x0) {
              Function_824E9A78(param_1,*(undefined2 *)(pdVar16 + 2));
              goto LAB_824fe170;
            }
            break;
          }
        }
        Function_824F07D0(uVar17,param_1,0);
      }
      else {
        Function_824E9A78(param_1,uVar17);
      }
    }
    goto LAB_824fe170;
  }
LAB_824fda54:
  if (bVar2 != 0) goto LAB_824fda58_HELENA;
  dVar4 = (&ACT_STATE_P1_830201bf_)[iVar10];
  if ((((dVar4 == 0x0_Neutral) && (iVar9 = FUN_824f9180(param_1,uVar17), iVar9 != 0)) &&
      (((&BYTE_830201d4)[iVar10] == 0 || (cVar11 = Function_824EE020(param_1,4), cVar11 == '\0'))))
     && ((((&ACT_CODE_P1_830201ba_)[param_1 * 0x4e] < 0x15 ||
          (0x24 < (&ACT_CODE_P1_830201ba_)[param_1 * 0x4e])) ||
         ((int)(char)(&ANIM_FLIP_P1_830201c6)[iVar10] ==
          (uint)(byte)(&DAT_830eded4_act__)[param_1 * 0x250])))) goto LAB_824fe170;
  bVar8 = false;
  if (((&ACT_STATE_P1_830201bf_)[iVar10] == 0x0_Neutral) &&
     (((&ACT_CODE_P1_830201ba_)[param_1 * 0x4e] == 4 ||
      ((&ACT_CODE_P1_830201ba_)[param_1 * 0x4e] == 0x11)))) {
    bVar8 = true;
  }
  if (((bVar8) && ((&BYTE_830201d4)[iVar10] == 0)) && ((uVar17 == 4 || (uVar17 == 0x11))))
  goto LAB_824fe170;
  if (dVar4 != 0x0_Neutral) {
    if ((&POSE_STA_P1_830201c0)[iVar10] == 0) {
      (&ACT_CODE_P1_830201ba_)[param_1 * 0x4e] = 0;
    }
    else {
      (&ACT_CODE_P1_830201ba_)[param_1 * 0x4e] = 10;
    }
  }
  uVar18 = (uint)(&ACT_CODE_P1_830201ba_)[param_1 * 0x4e];
  bVar8 = true;
  uVar13 = *(undefined2 *)(DAT_830edbe8 + 2);
  pdVar16 = DAT_830edbe8;
  while (uVar12 = uVar18, (ushort)uVar13 != 0xffff) {
    if (((*pdVar16 == ~char_zack) || ((&CHAR_NUM_P1_83020189)[iVar10] == *pdVar16)) &&
       (uVar18 == (ushort)uVar13)) {
      uVar12 = (uint)(ushort)*(undefined2 *)(pdVar16 + 4);
      break;
    }
    uVar13 = *(undefined2 *)(pdVar16 + 8);
    pdVar16 = pdVar16 + 6;
  }
  dVar19 = 2.0;
  switch(uVar12 - 3) {
  case 0:
  case 0xb:
    if (uVar17 != 1) {
      bVar1 = uVar17 == 0x14;
      goto LAB_824fde58;
    }
    goto LAB_824fde5c;
  case 1:
  case 0xc:
    bVar1 = uVar17 == 2;
LAB_824fde58:
    if (bVar1) goto LAB_824fde5c;
    break;
  case 2:
    if ((uVar17 == 1) || (uVar17 == 0x14)) {
      if (((&BYTE_830201cb)[iVar10] == 1) && (iVar9 = FUN_824f16c0(param_1), iVar9 == 0)) {
        (&ACT_FLAG_P1_830201bc)[param_1 * 0x4e] = 6;
      }
      else {
        if (((DISTANCE_8301fc44 < 5.0) || (NAN(DISTANCE_8301fc44))) ||
           (iVar9 = FUN_824f16c0(param_1), iVar9 != 1)) goto LAB_824fde5c;
        (&ACT_FLAG_P1_830201bc)[param_1 * 0x4e] = 6;
      }
    }
    break;
  case 3:
    if ((uVar17 != 1) && (uVar17 != 0x14)) {
      bVar1 = uVar17 == 3;
      goto LAB_824fde58;
    }
    goto LAB_824fde5c;
  case 4:
    if (uVar17 == 10) {
      bVar8 = false;
      if ((((&ACT_STATE_P1_830201bf_)[iVar15] == 0x3_Attack) ||
          ((&ACT_STATE_P1_830201bf_)[iVar15] == 0x2_Air_Attack)) &&
         (((&ATK_HEIGHT_P1_830201d8)[uVar14 * 0x4e] == 0 ||
          ((&ATK_HEIGHT_P1_830201d8)[uVar14 * 0x4e] == 1)))) {
LAB_824fddac:
        bVar8 = false;
        (&ANIME_SPD_P1_83020198)[param_1 * 0x27] = 2.0;
      }
    }
    break;
  case 5:
    if (uVar17 == 0xb) {
      bVar8 = false;
      if (((&ACT_STATE_P1_830201bf_)[iVar15] == 0x3_Attack) ||
         ((&ACT_STATE_P1_830201bf_)[iVar15] == 0x2_Air_Attack)) {
        if ((&ATK_HEIGHT_P1_830201d8)[uVar14 * 0x4e] == 0) goto LAB_824fddac;
        if ((&ATK_HEIGHT_P1_830201d8)[uVar14 * 0x4e] == 1) {
          (&ANIME_SPD_P1_83020198)[param_1 * 0x27] = 2.0;
        }
      }
    }
    break;
  case 6:
    if (uVar17 == 0xc) {
      bVar8 = false;
      if (((&ACT_STATE_P1_830201bf_)[iVar15] == 0x3_Attack) ||
         ((&ACT_STATE_P1_830201bf_)[iVar15] == 0x2_Air_Attack)) {
        if ((&ATK_HEIGHT_P1_830201d8)[uVar14 * 0x4e] == 0) goto LAB_824fddac;
        if ((&ATK_HEIGHT_P1_830201d8)[uVar14 * 0x4e] == 1) {
          (&ANIME_SPD_P1_83020198)[param_1 * 0x27] = 2.0;
        }
      }
    }
    break;
  case 0xd:
    if ((uVar17 != 0xb) && (uVar17 != 1)) {
      bVar1 = uVar17 == 0x14;
LAB_824fde50:
      if (!bVar1) {
        bVar1 = uVar17 == 10;
        goto LAB_824fde58;
      }
    }
    goto LAB_824fde5c;
  case 0xe:
    if (uVar17 != 0xc) {
      bVar1 = uVar17 == 2;
      goto LAB_824fde50;
    }
LAB_824fde5c:
    bVar8 = false;
  }
  switch((&CHAR_NUM_P1_83020189)[iVar10]) {
  case char_helena:
    switch(uVar18 - 0x134) {
    case 0:
    case 2:
      if (((&ACT_FLAG_P1_830201bc)[param_1 * 0x4e] == 0x139) ||
         ((&ACT_FLAG_P1_830201bc)[param_1 * 0x4e] == 0x13a)) goto LAB_824fe170;
    default:
      goto switchD_824fde84_caseD_8;
    case 9:
      bVar1 = (&ACT_FLAG_P1_830201bc)[param_1 * 0x4e] == 0x142;
      break;
    case 10:
      bVar1 = (&ACT_FLAG_P1_830201bc)[param_1 * 0x4e] == 0x139;
      break;
    case 0xb:
      bVar1 = (&ACT_FLAG_P1_830201bc)[param_1 * 0x4e] == 0x13a;
    }
LAB_824fdf94:
    if (bVar1) goto LAB_824fe170;
    break;
  case char_ayane:
    if (uVar18 == 0x13a) {
      bVar1 = (&ACT_FLAG_P1_830201bc)[param_1 * 0x4e] == 0x140;
      goto LAB_824fdf94;
    }
    break;
  case char_lamariposa:
    if (uVar18 == 0x141) {
      bVar1 = (&ACT_FLAG_P1_830201bc)[param_1 * 0x4e] == 0x140;
      goto LAB_824fdf94;
    }
    break;
  case char_bradwong:
    if (uVar18 == 0x151) {
      bVar1 = (&ACT_FLAG_P1_830201bc)[param_1 * 0x4e] == 2;
      goto LAB_824fdf94;
    }
  }
switchD_824fde84_caseD_8:
  if (bVar8) {
    wVar5 = (&ACT_FLAG_P1_830201bc)[param_1 * 0x4e];
    if ((wVar5 == 10) && (uVar18 != 7)) {
      if (((uVar18 < 10) || (0xc < uVar18)) &&
         ((uVar18 != 0x10 && ((uVar18 != 0x10b && (uVar18 != 0x10d)))))) {
        (&ACT_FLAG_P1_830201bc)[param_1 * 0x4e] = 7;
      }
    }
    else if ((wVar5 == 0xb) && (uVar18 != 8)) {
      if ((((uVar18 < 10) || (0xc < uVar18)) && (uVar18 != 0x10)) &&
         ((uVar18 != 0x10b && (uVar18 != 0x10d)))) {
        (&ACT_FLAG_P1_830201bc)[param_1 * 0x4e] = 8;
      }
    }
    else if ((wVar5 == 0xc) && (uVar18 != 9)) {
      if (((uVar18 < 10) || (0xc < uVar18)) &&
         ((uVar18 != 0x10 && ((uVar18 != 0x10b && (uVar18 != 0x10d)))))) {
        (&ACT_FLAG_P1_830201bc)[param_1 * 0x4e] = 9;
      }
    }
    else if ((wVar5 == 1) && (uVar18 != 0xe)) {
      if ((((6 < uVar18) && (uVar18 < 0x11)) || (uVar18 == 0x10b)) || (uVar18 == 0x10d)) {
        (&ACT_FLAG_P1_830201bc)[param_1 * 0x4e] = 0xe;
      }
    }
    else if (((wVar5 == 2) && (uVar18 != 0xf)) &&
            (((6 < uVar18 && (uVar18 < 0x11)) || ((uVar18 == 0x10b || (uVar18 == 0x10d)))))) {
      (&ACT_FLAG_P1_830201bc)[param_1 * 0x4e] = 0xf;
    }
    if ((((&POSE_STA_P1_830201c0)[iVar10] == 0) &&
        ((&ACT_FLAG_P1_830201bc)[param_1 * 0x4e] == 0x10b)) &&
       ((((&ACT_STATE_P1_830201bf_)[iVar15] == 0x3_Attack ||
         ((&ACT_STATE_P1_830201bf_)[iVar15] == 0x2_Air_Attack)) &&
        (((&ATK_HEIGHT_P1_830201d8)[uVar14 * 0x4e] == 0 ||
         ((&ATK_HEIGHT_P1_830201d8)[uVar14 * 0x4e] == 1)))))) {
      (&ANIME_SPD_P1_83020198)[param_1 * 0x27] = (float)dVar19;
    }
    Function_824F07D0((&ACT_FLAG_P1_830201bc)[param_1 * 0x4e],param_1,0);
    cVar11 = FUN_824f1d80(param_1,1);
    if (cVar11 == '\x01') {
      (&DAT_830edf08)[param_1 * 0x250] = 1;
    }
  }
LAB_824fe170:
  if ((&BYTE_830201c7)[iVar10] == 1) {
    Function_82504910(param_1);
  }
  (&ACT_FLAG_P1_830201bc)[param_1 * 0x4e] = 0xffff;
  return;
}

