
undefined4 FUN_0c0bc03e(undefined4 param_1,undefined8 param_2)

{
  char cVar1;
  code *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined *puVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  undefined1 *puVar12;
  float in_fr13;
  undefined8 in_dr14;
  undefined8 uVar13;
  undefined8 in_xd12;
  undefined8 in_xd14;
  char cVar14;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined1 local_34 [12];
  undefined1 local_28 [4];
  undefined8 uStack_24;
  
  puVar3 = PTR_FUN_0c0bc16c;
  if (in_FPSCR_SZ == '\0') {
    uStack_24 = CONCAT44((int)in_dr14,(undefined4)uStack_24);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_24._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    puVar12 = local_28;
  }
  else {
    puVar12 = local_34;
    uStack_24 = in_xd14;
  }
  *(undefined4 *)(puVar12 + -4) = in_PR;
  cVar14 = (*(ushort *)(PTR_DAT_0c0bc168 + 2) & 2) != 0;
  if ((*(ushort *)(PTR_DAT_0c0bc168 + 2) & 1) != 0) {
    cVar14 = -1;
  }
  (*(code *)PTR_FUN_0c0bc16c)(8,7);
  puVar9 = PTR_DAT_0c0bc4dc;
  uVar8 = DAT_0c0bc180;
  pcVar7 = DAT_0c0bc17c;
  iVar6 = DAT_0c0bc178;
  puVar5 = PTR_FUN_0c0bc174;
  pcVar4 = DAT_0c0bc170;
  cVar1 = *DAT_0c0bc170;
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      *(undefined **)(puVar12 + -8) = PTR_s_NML_LIGHT_EDIT___0c0bc4cc;
      (*(code *)PTR_FUN_0c0bc174)();
      FUN_0c0bc604(param_1,param_2);
      if (cVar14 == '\x01') {
        return 0;
      }
      if (cVar14 != -1) {
        return 1;
      }
      *pcVar4 = '\0';
      return 1;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar13 = CONCAT44(FLOAT_0c0bc4d4,FLOAT_0c0bc4d8);
      in_fr13 = FLOAT_0c0bc4d0;
    }
    else {
      in_xd12 = CONCAT44(FLOAT_0c0bc4d4,FLOAT_0c0bc4d0);
      uVar13 = CONCAT44(FLOAT_0c0bc4d8,FLOAT_0c0bc4d4);
      in_xd14 = CONCAT44(PTR_DAT_0c0bc4dc,FLOAT_0c0bc4d8);
    }
    if (cVar1 == '\x02') {
      *(undefined **)(puVar12 + -8) = PTR_s_LIGHT1_EDIT___0c0bc4e0;
      (*(code *)PTR_FUN_0c0bc174)();
      puVar10 = PTR_DAT_0c0bc4dc;
      if (*(short *)(iVar6 + 0x34) == 2) {
        FUN_0c0bcd08(param_1,param_2,0);
      }
      else if (*(short *)(iVar6 + 0x34) == 3) {
        FUN_0c0bca10(0);
      }
      else {
        if (in_FPSCR_SZ == '\0') {
          *(float *)(puVar9 + 4) = in_fr13;
          *(int *)(puVar9 + 8) = (int)((ulonglong)uVar13 >> 0x20);
          pcVar2 = (code *)PTR_FUN_0c0bc4e4;
          *(int *)(puVar9 + 0x10) = (int)uVar13;
          *(int *)(puVar9 + 0x14) = (int)uVar13;
        }
        else {
          *(undefined8 *)(puVar9 + 4) = in_xd12;
          *(undefined8 *)(puVar9 + 8) = uVar13;
          pcVar2 = (code *)PTR_FUN_0c0bc4e4;
          *(undefined8 *)(puVar9 + 0x10) = in_xd14;
          *(undefined8 *)(puVar9 + 0x14) = in_xd14;
        }
        (*pcVar2)(puVar10);
        (*(code *)puVar3)(0x3c,0x26);
        *(undefined **)(puVar12 + -8) = PTR_s_NULL_LIGHT__0c0bc4e8;
        (*(code *)puVar5)();
      }
      if (cVar14 != '\x01') {
        if (cVar14 != -1) {
          return 1;
        }
        *pcVar4 = '\0';
        return 1;
      }
      return 0;
    }
    if (cVar1 == '\x03') {
      *(undefined **)(puVar12 + -8) = PTR_s_LIGHT2_EDIT___0c0bc4ec;
      (*(code *)PTR_FUN_0c0bc174)();
      puVar10 = PTR_DAT_0c0bc4dc;
      if (*(short *)(iVar6 + 0x6c) == 2) {
        FUN_0c0bcd08(param_1,param_2,1);
      }
      else if (*(short *)(iVar6 + 0x6c) == 3) {
        FUN_0c0bca10(1);
      }
      else {
        if (in_FPSCR_SZ == '\0') {
          *(float *)(puVar9 + 4) = in_fr13;
          *(int *)(puVar9 + 8) = (int)((ulonglong)uVar13 >> 0x20);
          pcVar2 = (code *)PTR_FUN_0c0bc4e4;
          *(int *)(puVar9 + 0x10) = (int)uVar13;
          *(int *)(puVar9 + 0x14) = (int)uVar13;
        }
        else {
          *(undefined8 *)(puVar9 + 4) = in_xd12;
          *(undefined8 *)(puVar9 + 8) = uVar13;
          pcVar2 = (code *)PTR_FUN_0c0bc4e4;
          *(undefined8 *)(puVar9 + 0x10) = in_xd14;
          *(undefined8 *)(puVar9 + 0x14) = in_xd14;
        }
        (*pcVar2)(puVar10);
        (*(code *)puVar3)(0x3c,0x26);
        *(undefined **)(puVar12 + -8) = PTR_s_NULL_LIGHT__0c0bc4e8;
        (*(code *)puVar5)();
      }
      if (cVar14 != '\x01') {
        if (cVar14 != -1) {
          return 1;
        }
        *pcVar4 = '\0';
        return 1;
      }
      return 0;
    }
    if (cVar1 == '\x04') {
      *(undefined **)(puVar12 + -8) = PTR_s_LIGHT3_EDIT___0c0bc5c8;
      (*(code *)PTR_FUN_0c0bc174)();
      puVar10 = PTR_DAT_0c0bc5cc;
      if (*(short *)(DAT_0c0bc5c4 + iVar6) == 2) {
        FUN_0c0bcd08(param_1,param_2,2);
      }
      else if (*(short *)(DAT_0c0bc5c4 + iVar6) == 3) {
        FUN_0c0bca10(2);
      }
      else {
        if (in_FPSCR_SZ == '\0') {
          *(float *)(puVar9 + 4) = in_fr13;
          *(int *)(puVar9 + 8) = (int)((ulonglong)uVar13 >> 0x20);
          pcVar2 = (code *)PTR_FUN_0c0bc5d0;
          *(int *)(puVar9 + 0x10) = (int)uVar13;
          *(int *)(puVar9 + 0x14) = (int)uVar13;
        }
        else {
          *(undefined8 *)(puVar9 + 4) = in_xd12;
          *(undefined8 *)(puVar9 + 8) = uVar13;
          pcVar2 = (code *)PTR_FUN_0c0bc5d0;
          *(undefined8 *)(puVar9 + 0x10) = in_xd14;
          *(undefined8 *)(puVar9 + 0x14) = in_xd14;
        }
        (*pcVar2)(puVar10);
        (*(code *)puVar3)(0x3c,0x26);
        *(undefined **)(puVar12 + -8) = PTR_s_NULL_LIGHT__0c0bc5d4;
        (*(code *)puVar5)();
      }
      if (cVar14 != '\x01') {
        if (cVar14 != -1) {
          return 1;
        }
        *pcVar4 = '\0';
        return 1;
      }
      return 0;
    }
    if (cVar1 != '\x05') {
      (*(code *)puVar3)(0x1e);
      *(undefined **)(puVar12 + -8) = PTR_s_MLT_LIGHT_ERROR___0c0bc6d4;
      (*(code *)puVar5)();
      return 1;
    }
    *(undefined **)(puVar12 + -8) = PTR_s_LIGHT4_EDIT___0c0bc5d8;
    (*(code *)PTR_FUN_0c0bc174)();
    puVar10 = PTR_DAT_0c0bc5cc;
    if (*(short *)(DAT_0c0bc5c6 + iVar6) == 2) {
      FUN_0c0bcd08(param_1,param_2,3);
    }
    else if (*(short *)(DAT_0c0bc5c6 + iVar6) == 3) {
      FUN_0c0bca10(3);
    }
    else {
      if (in_FPSCR_SZ == '\0') {
        *(float *)(puVar9 + 4) = in_fr13;
        *(int *)(puVar9 + 8) = (int)((ulonglong)uVar13 >> 0x20);
        pcVar2 = (code *)PTR_FUN_0c0bc5d0;
        *(int *)(puVar9 + 0x10) = (int)uVar13;
        *(int *)(puVar9 + 0x14) = (int)uVar13;
      }
      else {
        *(undefined8 *)(puVar9 + 4) = in_xd12;
        *(undefined8 *)(puVar9 + 8) = uVar13;
        pcVar2 = (code *)PTR_FUN_0c0bc5d0;
        *(undefined8 *)(puVar9 + 0x10) = in_xd14;
        *(undefined8 *)(puVar9 + 0x14) = in_xd14;
      }
      (*pcVar2)(puVar10);
      (*(code *)puVar3)(0x3c,0x26);
      *(undefined **)(puVar12 + -8) = PTR_s_NULL_LIGHT__0c0bc5d4;
      (*(code *)puVar5)();
    }
    if (cVar14 != '\x01') {
      if (cVar14 != -1) {
        return 1;
      }
      *pcVar4 = '\0';
      return 1;
    }
    return 0;
  }
  cVar1 = *DAT_0c0bc17c;
  if (cVar1 == '\0') {
    if (cVar14 == '\x01') {
      if (*DAT_0c0bc158 == '\0') {
        *DAT_0c0bc158 = '\x01';
      }
      else {
        *DAT_0c0bc158 = '\0';
      }
    }
    goto LAB_0c0bc222;
  }
  if (cVar1 == '\x01') {
    if (cVar14 == '\x01') {
      *DAT_0c0bc170 = '\x01';
    }
    goto LAB_0c0bc222;
  }
  if (cVar1 == '\x02') {
    if (cVar14 == '\x01') {
      *DAT_0c0bc170 = '\x02';
    }
    if ((*(ushort *)(PTR_DAT_0c0bc168 + 2) & uVar8) == 0) goto LAB_0c0bc222;
    iVar11 = 0x34;
    if (*(short *)(iVar6 + 0x34) == 0) {
LAB_0c0bc138:
      *(undefined2 *)(iVar11 + iVar6) = 2;
      goto LAB_0c0bc222;
    }
    if (*(short *)(iVar6 + 0x34) != 2) {
      *(undefined2 *)(iVar6 + 0x34) = 0;
      goto LAB_0c0bc222;
    }
    iVar11 = 0x34;
  }
  else if (cVar1 == '\x03') {
    if (cVar14 == '\x01') {
      *DAT_0c0bc170 = '\x03';
    }
    if ((*(ushort *)(PTR_DAT_0c0bc168 + 2) & uVar8) == 0) goto LAB_0c0bc222;
    if (*(short *)(iVar6 + 0x6c) == 0) {
      iVar11 = 0x6c;
      goto LAB_0c0bc138;
    }
    if (*(short *)(iVar6 + 0x6c) != 2) {
      *(undefined2 *)(iVar6 + 0x6c) = 0;
      goto LAB_0c0bc222;
    }
    iVar11 = 0x6c;
  }
  else if (cVar1 == '\x04') {
    if (cVar14 == '\x01') {
      *DAT_0c0bc170 = '\x04';
    }
    if ((*(ushort *)(PTR_DAT_0c0bc240 + 2) & uVar8) == 0) goto LAB_0c0bc222;
    iVar11 = (int)DAT_0c0bc23a;
    if (*(short *)(iVar11 + iVar6) == 0) {
LAB_0c0bc1e8:
      *(undefined2 *)(iVar11 + iVar6) = 2;
      goto LAB_0c0bc222;
    }
    if (*(short *)(iVar11 + iVar6) != 2) {
      *(undefined2 *)(DAT_0c0bc23a + iVar6) = 0;
      goto LAB_0c0bc222;
    }
    iVar11 = (int)DAT_0c0bc23a;
  }
  else {
    if (cVar1 != '\x05') {
      if (cVar1 == '\x06') {
        if (cVar14 == '\x01') {
          return 0;
        }
      }
      else {
        (*(code *)puVar3)(0x1e);
        *(undefined **)(puVar12 + -8) = PTR_s_MLT_LIGHT_ERROR___0c0bc244;
        (*(code *)puVar5)();
      }
      goto LAB_0c0bc222;
    }
    if (cVar14 == '\x01') {
      *DAT_0c0bc170 = '\x05';
    }
    if ((*(ushort *)(PTR_DAT_0c0bc240 + 2) & uVar8) == 0) goto LAB_0c0bc222;
    if (*(short *)(DAT_0c0bc23c + iVar6) == 0) {
      iVar11 = (int)DAT_0c0bc23c;
      goto LAB_0c0bc1e8;
    }
    if (*(short *)(DAT_0c0bc23c + iVar6) != 2) {
      *(undefined2 *)(DAT_0c0bc23c + iVar6) = 0;
      goto LAB_0c0bc222;
    }
    iVar11 = (int)DAT_0c0bc23c;
  }
  *(undefined2 *)(iVar11 + iVar6) = 3;
LAB_0c0bc222:
  *(undefined **)(puVar12 + -8) = PTR_s___MLT_LIGHT___0c0bc248;
  (*(code *)puVar5)();
  if (*PTR_DAT_0c0bc24c == '\x01') {
    *(undefined **)(puVar12 + -8) = PTR_s_SW_ON_0c0bc250;
  }
  else {
    *(undefined **)(puVar12 + -8) = PTR_s_SW_OFF_0c0bc308;
  }
  (*(code *)puVar5)();
  *(undefined **)(puVar12 + -0xc) = PTR_s_NML_LIGHT_0c0bc30c;
  (*(code *)puVar5)();
  if (*(short *)(iVar6 + 0x34) == 0) {
    *(undefined **)(puVar12 + -8) = PTR_s_LIGHT1__NULL__0c0bc310;
    (*(code *)puVar5)();
  }
  else {
    if (*(short *)(iVar6 + 0x34) == 2) {
      *(undefined **)(puVar12 + -8) = PTR_s_LIGHT1__DIR___0c0bc314;
    }
    else {
      *(undefined **)(puVar12 + -8) = PTR_s_LIGHT1__POS___0c0bc318;
    }
    (*(code *)puVar5)();
  }
  if (*(short *)(iVar6 + 0x6c) == 0) {
    *(undefined **)(puVar12 + -8) = PTR_s_LIGHT2__NULL__0c0bc31c;
    (*(code *)puVar5)();
  }
  else {
    if (*(short *)(iVar6 + 0x6c) == 2) {
      *(undefined **)(puVar12 + -8) = PTR_s_LIGHT2__DIR___0c0bc320;
    }
    else {
      *(undefined **)(puVar12 + -8) = PTR_s_LIGHT2__POS___0c0bc324;
    }
    (*(code *)puVar5)();
  }
  if (*(short *)(DAT_0c0bc302 + iVar6) == 0) {
    *(undefined **)(puVar12 + -8) = PTR_s_LIGHT3__NULL__0c0bc328;
    (*(code *)puVar5)();
  }
  else {
    if (*(short *)(DAT_0c0bc302 + iVar6) == 2) {
      *(undefined **)(puVar12 + -8) = PTR_s_LIGHT3__DIR___0c0bc32c;
    }
    else {
      *(undefined **)(puVar12 + -8) = PTR_s_LIGHT3__POS___0c0bc330;
    }
    (*(code *)puVar5)();
  }
  if (*(short *)(DAT_0c0bc304 + iVar6) == 0) {
    *(undefined **)(puVar12 + -8) = PTR_s_LIGHT4__NULL__0c0bc334;
    (*(code *)puVar5)();
  }
  else {
    if (*(short *)(DAT_0c0bc304 + iVar6) == 2) {
      *(undefined **)(puVar12 + -8) = PTR_s_LIGHT4__DIR___0c0bc338;
    }
    else {
      *(undefined **)(puVar12 + -8) = PTR_s_LIGHT4__POS___0c0bc4bc;
    }
    (*(code *)puVar5)();
  }
  *(undefined **)(puVar12 + -8) = PTR_s_EXIT_0c0bc4c0;
  (*(code *)puVar5)();
  if (cVar14 != -1) {
    if (((*(ushort *)(PTR_DAT_0c0bc4c4 + 2) & 0x10) != 0) &&
       (*pcVar7 = *pcVar7 + '\x01', '\x06' < *pcVar7)) {
      *pcVar7 = '\0';
    }
    if (((*(ushort *)(PTR_DAT_0c0bc4c4 + 2) & 0x20) != 0) &&
       (*pcVar7 = *pcVar7 + -1, *pcVar7 < '\0')) {
      *pcVar7 = '\x06';
    }
    (*(code *)puVar3)(5,*pcVar7 + 8);
    *(undefined **)(puVar12 + -8) = PTR_DAT_0c0bc4c8;
    (*(code *)puVar5)();
    (*(code *)puVar3)(5,0x11);
    return 1;
  }
  return 0;
}

