
void FUN_143a3b160(longlong param_1,byte param_2)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  uint *puVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  longlong *plVar16;
  byte bVar17;
  ushort uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong *plVar21;
  undefined8 uVar22;
  longlong *plVar23;
  char local_res10 [8];
  undefined8 *local_res18;
  byte local_res20 [8];
  byte local_1d8;
  byte local_1d7;
  byte local_1d6;
  byte local_1d5;
  byte local_1d4;
  byte local_1d3;
  byte local_1d2 [2];
  uint local_1d0;
  longlong local_1c8;
  undefined4 local_1c0;
  undefined2 local_1bc;
  undefined8 local_1b8;
  longlong *plStack_1b0;
  undefined4 local_1a8;
  undefined2 local_1a4;
  longlong *local_1a0;
  undefined8 local_198;
  longlong *plStack_190;
  undefined **local_188;
  ulonglong local_180;
  undefined **local_178;
  ulonglong local_170;
  undefined8 local_168;
  longlong *plStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined **local_148;
  ulonglong local_140;
  undefined **local_138;
  ulonglong local_130;
  undefined **local_128;
  ulonglong local_120;
  undefined **local_118;
  ulonglong local_110;
  undefined8 *local_108;
  undefined **local_100;
  undefined1 local_f8;
  undefined4 local_f0;
  uint local_ec;
  uint local_e8;
  undefined **local_e0;
  undefined1 local_d8;
  undefined4 local_d0;
  uint local_cc;
  uint local_c8;
  undefined **local_c0;
  byte local_b8;
  uint local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 local_98 [2];
  undefined8 local_88 [2];
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68 [5];
  
  local_a8 = 0xfffffffffffffffe;
  local_1d0 = 0;
  FUN_143b0c9d8(&DAT_148737316);
  bVar17 = param_2 ^ 1;
  lVar7 = FUN_143a4f310(param_2);
  local_1a0 = (longlong *)FUN_143a4f310(bVar17);
  lVar8 = FUN_143a4f310(bVar17);
  if (*(char *)(lVar7 + 0x95c) == '\a') {
    return;
  }
  iVar14 = *(int *)(lVar8 + 0x68);
  *(undefined1 *)(lVar8 + 0x19d) = 1;
  *(int *)(lVar8 + 0x1a0) = iVar14;
  local_1c8 = lVar8;
  FUN_143a901f0((int *)(lVar8 + 0xd70),iVar14);
  piVar15 = (int *)(lVar8 + 0xf74);
  lVar19 = 0xf;
  do {
    if (piVar15 + -0x1e != piVar15) {
      piVar13 = piVar15 + -0x1d;
      do {
        if ((*piVar13 != 0xffff) && (iVar14 == *piVar13)) {
          *piVar13 = 0xffff;
        }
        piVar1 = piVar13 + 2;
        piVar13 = piVar13 + 3;
      } while (piVar1 != piVar15);
    }
    piVar15 = piVar15 + 0x1e;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  local_res18 = local_98;
  puVar9 = FUN_14299d980(local_98,(undefined8 *)(lVar7 + 0x948));
  bVar2 = FUN_143ac26d0((uint *)(lVar7 + 0x930),puVar9);
  if (bVar2) {
    return;
  }
  uVar6 = 1;
  if ((*(char *)(lVar8 + 0x1a6) != '\0') && (*(char *)(lVar7 + 0x965) != '\0')) {
    bVar2 = FUN_143a8a730(param_2,'\0');
    if (bVar2) {
      *(undefined4 *)(lVar7 + 0x210) = 1;
    }
    *(undefined1 *)(lVar8 + 0x1a6) = 0;
  }
  lVar8 = lVar7 + 0x16d0;
  lVar19 = *(longlong *)(lVar7 + 0x16d8);
  local_res10[0] = '\0';
  uVar20 = (ulonglong)*(uint *)(lVar19 + 0x928);
  puVar9 = (undefined8 *)(ulonglong)*(byte *)(lVar19 + 0x95c);
  uVar22 = FUN_143aa2f60(lVar8,*(uint *)(lVar19 + 0x96c),*(byte *)(lVar19 + 0x95c),
                         *(uint *)(lVar19 + 0x928),local_res10);
  *(char *)(lVar19 + 0x966) = local_res10[0];
  uVar5 = FUN_143aa35f0(lVar8);
  uVar5 = (uint)((float)uVar5 * (float)uVar22);
  uVar18 = (ushort)uVar5;
  if (*(int *)(lVar7 + 0x928) - 0x1cU < 4) {
    bVar2 = false;
    if (*(char *)(lVar7 + 600) == '\0') {
      *(undefined1 *)(lVar7 + 600) = 1;
      *(ushort *)(lVar7 + 0x25a) = uVar18;
      *(undefined1 *)(lVar7 + 0x25c) = 0;
    }
    else {
      *(short *)(lVar7 + 0x25a) = *(short *)(lVar7 + 0x25a) + uVar18;
      lVar8 = FUN_1428b3790(DAT_145ea4670 + 0x48);
      if (((*(int *)(lVar8 + 0x2c) < (int)(uint)*(ushort *)(lVar7 + 0x25a)) ||
          (*(char *)(lVar7 + 0x25c) != '\0')) ||
         (bVar2 = false, *(char *)(lVar7 + 0x1be) == *(char *)(lVar7 + 0x259))) {
        bVar2 = true;
      }
    }
    *(undefined1 *)(lVar7 + 0x259) = *(undefined1 *)(lVar7 + 0x1be);
    if (uVar18 < *(ushort *)(lVar7 + 0x580)) {
      if (bVar2) {
        puVar10 = FUN_14299d980(local_68,(undefined8 *)(lVar7 + 0x948));
        local_a0 = &local_158;
        uStack_150 = 0;
        if (puVar10[1] != 0) {
          LOCK();
          piVar15 = (int *)(puVar10[1] + 0xc);
          *piVar15 = *piVar15 + 1;
          UNLOCK();
          uStack_150 = puVar10[1];
        }
        local_158 = *puVar10;
        puVar9 = &local_158;
        local_108 = puVar10;
        uVar6 = FUN_143a9f6b0(0xbc,(uint *)(lVar7 + 0x930),puVar9);
        plVar21 = (longlong *)puVar10[1];
        if (plVar21 != (longlong *)0x0) {
          LOCK();
          piVar15 = (int *)((longlong)plVar21 + 0xc);
          iVar14 = *piVar15;
          *piVar15 = *piVar15 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*plVar21 + 8))();
          }
        }
        FUN_143a33c70(uVar6,param_2);
      }
    }
    else {
      local_res18 = local_88;
      puVar10 = FUN_14299d980(local_88,(undefined8 *)(lVar7 + 0x948));
      bVar2 = FUN_143ac27b0((uint *)(lVar7 + 0x930),(longlong)puVar10);
      if (bVar2) {
        plStack_190 = (longlong *)0x0;
        if (*(longlong *)(lVar7 + 0x1e0) != 0) {
          LOCK();
          piVar15 = (int *)(*(longlong *)(lVar7 + 0x1e0) + 0xc);
          *piVar15 = *piVar15 + 1;
          UNLOCK();
          plStack_190 = *(longlong **)(lVar7 + 0x1e0);
        }
        uVar22 = *(undefined8 *)(lVar7 + 0x1d8);
        puVar10 = &local_198;
        local_1d0 = 1;
        local_198 = uVar22;
      }
      else {
        puVar10 = FUN_142b58fe0(lVar7,&local_78);
        uVar6 = 2;
        local_1d0 = 2;
        uVar22 = *puVar10;
      }
      plStack_1b0 = (longlong *)puVar10[1];
      *puVar10 = 0;
      puVar10[1] = 0;
      local_1b8 = uVar22;
      if (((uVar6 & 2) != 0) &&
         (local_1d0 = uVar6 & 0xfffffffd, uVar6 = local_1d0, local_70 != (longlong *)0x0)) {
        LOCK();
        piVar15 = (int *)((longlong)local_70 + 0xc);
        iVar14 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_70 + 8))();
          uVar6 = local_1d0;
        }
      }
      if (((uVar6 & 1) != 0) && (local_1d0 = uVar6 & 0xfffffffe, plStack_190 != (longlong *)0x0)) {
        LOCK();
        piVar15 = (int *)((longlong)plStack_190 + 0xc);
        iVar14 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*plStack_190 + 8))();
        }
      }
      plVar21 = plStack_1b0;
      uVar6 = *(uint *)(lVar7 + 0x930);
      local_108 = &local_168;
      if (plStack_1b0 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plStack_1b0 + 0xc) = *(int *)((longlong)plStack_1b0 + 0xc) + 1;
        UNLOCK();
      }
      local_168 = uVar22;
      plStack_160 = plStack_1b0;
      uVar11 = FUN_143a85db0(&local_168,uVar6);
      if (((char)uVar11 == '\0') && (iVar14 = *(int *)(lVar7 + 0x928), 0x1b < iVar14)) {
        if (iVar14 < 0x1e) {
          uVar6 = 0x613d;
        }
        else {
          if (0x1f < iVar14) goto LAB_143a3b551;
          uVar6 = 0x6149;
        }
        uVar6 = FUN_143a38740(uVar6,param_2);
        FUN_143a33c70(uVar6,param_2);
      }
LAB_143a3b551:
      if (plVar21 != (longlong *)0x0) {
        LOCK();
        piVar15 = (int *)((longlong)plVar21 + 0xc);
        iVar14 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*plStack_1b0 + 8))();
        }
      }
    }
  }
  else {
    puVar9 = (undefined8 *)(ulonglong)(uVar5 & 0xffff);
    FUN_143a3ac70(lVar8,param_2,uVar18);
  }
  plVar21 = local_1a0;
  *(undefined1 *)(lVar7 + 0x12d) = 1;
  *(undefined1 *)(lVar7 + 0x8f4) = 0;
  if ((char)local_1a0[0x27] == '\0') {
    lVar8 = FUN_143a4f310(bVar17);
    *(undefined4 *)(lVar8 + 0x138) = 0x101;
    *(undefined8 *)(lVar8 + 0x170c) = 0;
    FUN_143a4f0f0(&local_1d6,lVar8);
    lVar19 = FUN_143a4f310(local_1d6 ^ 1);
    FUN_143a4f0f0(&local_1d5,lVar8);
    FUN_143a4f310(local_1d5);
    FUN_143a4f0f0(&local_1d4,lVar8);
    local_138 = &PTR_LAB_144d89380;
    local_130 = (ulonglong)local_1d4;
    for (plVar23 = DAT_147ef4428; plVar23 != (longlong *)0x0; plVar23 = (longlong *)plVar23[1]) {
      (**(code **)(*plVar23 + 8))(plVar23,&local_138);
    }
    *(undefined2 *)(lVar19 + 0x202) = 0;
    *(undefined4 *)(lVar19 + 0x1708) = 0;
    FUN_143a4f0f0(&local_1d3,lVar8);
    if (*(char *)(lVar19 + 0x587) != '\0') {
      *(ushort *)(lVar19 + 0x580) = *(ushort *)(lVar19 + 0x582);
      local_e0 = &PTR_LAB_144d89890;
      local_d0 = 0;
      local_cc = (uint)*(ushort *)(lVar19 + 0x582);
      local_d8 = local_1d3 == 0;
      local_c8 = local_cc;
      for (plVar23 = DAT_147ef43e8; plVar23 != (longlong *)0x0; plVar23 = (longlong *)plVar23[1]) {
        (**(code **)(*plVar23 + 8))(plVar23,&local_e0);
      }
    }
  }
  else if ((*(char *)(lVar7 + 0x71) != '\0') && (*(char *)(local_1c8 + 0x19c) == '\0')) {
    lVar8 = FUN_143a4f310(bVar17);
    *(undefined4 *)(lVar8 + 0x138) = 0x101;
    *(undefined8 *)(lVar8 + 0x170c) = 0;
    FUN_143a4f0f0((byte *)&local_res18,lVar8);
    lVar19 = FUN_143a4f310((byte)local_res18 ^ 1);
    FUN_143a4f0f0(local_res20,lVar8);
    FUN_143a4f310(local_res20[0]);
    FUN_143a4f0f0(&local_1d8,lVar8);
    local_148 = &PTR_LAB_144d89380;
    local_140 = (ulonglong)local_1d8;
    for (plVar23 = DAT_147ef4428; plVar23 != (longlong *)0x0; plVar23 = (longlong *)plVar23[1]) {
      (**(code **)(*plVar23 + 8))(plVar23,&local_148);
    }
    *(undefined2 *)(lVar19 + 0x202) = 0;
    *(undefined4 *)(lVar19 + 0x1708) = 0;
    FUN_143a4f0f0(&local_1d7,lVar8);
    if (*(char *)(lVar19 + 0x587) != '\0') {
      *(ushort *)(lVar19 + 0x580) = *(ushort *)(lVar19 + 0x582);
      local_100 = &PTR_LAB_144d89890;
      local_f0 = 0;
      local_ec = (uint)*(ushort *)(lVar19 + 0x582);
      local_f8 = local_1d7 == 0;
      local_e8 = local_ec;
      for (plVar23 = DAT_147ef43e8; plVar23 != (longlong *)0x0; plVar23 = (longlong *)plVar23[1]) {
        (**(code **)(*plVar23 + 8))(plVar23,&local_100);
      }
    }
  }
  lVar8 = local_1c8;
  *(char *)((longlong)plVar21 + 0x13a) = *(char *)((longlong)plVar21 + 0x13a) + '\x01';
  FUN_143a4f0f0(local_1d2,(longlong)plVar21);
  FUN_143ac8ad0(param_1,local_1d2);
  if (*(char *)(lVar7 + 0x1d1) != -1) {
    FUN_143a68e50((longlong)plVar21,param_1);
  }
  if (*(char *)((longlong)plVar21 + 0x139) != '\0') {
    *(undefined2 *)(lVar7 + 0x202) = *(undefined2 *)(lVar7 + 0x204);
  }
  if ((*(char *)(lVar7 + 0x3f4) != '\0') && (1 < *(int *)(lVar7 + 0x928) - 0x1aU)) {
    *(undefined1 *)(lVar7 + 0x3f6) = 1;
  }
  if (*(char *)(lVar7 + 0x966) != '\0') {
    local_128 = &PTR_LAB_144d88c38;
    local_120 = (ulonglong)param_2 ^ 1;
    for (plVar23 = DAT_147ef42a0; plVar23 != (longlong *)0x0; plVar23 = (longlong *)plVar23[1]) {
      (**(code **)(*plVar23 + 8))(plVar23,&local_128);
    }
    lVar19 = FUN_1428b3790(DAT_145ea4670 + 0x48);
    uVar20 = CONCAT71((int7)(uVar20 >> 8),1);
    FUN_1439573b0(*(undefined4 *)(lVar19 + 0x7c),*(undefined4 *)(lVar19 + 0x80),
                  *(undefined4 *)(lVar19 + 0x84),'\x01');
    local_1a8 = 0x2a;
    local_1a4 = 0xff00;
    for (plVar23 = DAT_147ef4440; plVar23 != (longlong *)0x0; plVar23 = (longlong *)plVar23[1]) {
      (**(code **)(*plVar23 + 8))(plVar23,&local_1a8);
    }
    plVar23 = plVar21 + 0x2e7;
    piVar15 = *(int **)(*(longlong *)(DAT_145ea4670 + 0x50) + 0x50);
    puVar12 = (uint *)(piVar15 + 4);
    if (*piVar15 == 0) {
      puVar12 = (uint *)0x0;
    }
    if (puVar12 == (uint *)0x0) {
      lVar19 = 0;
    }
    else {
      lVar19 = (ulonglong)*puVar12 + (longlong)piVar15;
    }
    bVar2 = false;
    cVar3 = FUN_143a91a50((longlong)plVar23);
    if ((cVar3 != '\0') ||
       (bVar4 = FUN_143a92110((longlong)plVar23,*(uint *)(plVar21[0x2e8] + 0x68)), bVar4)) {
      bVar2 = true;
    }
    bVar4 = FUN_143a90cc0((longlong)plVar23);
    if ((!bVar4) && (!bVar2)) {
      uVar20 = 0;
      puVar9 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar9 >> 8),1);
      FUN_143a90f50((longlong)plVar23,*(int *)(lVar19 + 0x94),1,0);
    }
    *(undefined1 *)(lVar7 + 0x214) = 1;
    FUN_1437cfe20(*(longlong *)(DAT_145e01508 + 0x28),0x6a6dbf3b,puVar9,uVar20);
    FUN_143aca0d0(lVar7 + 0x1790,lVar8,puVar9,uVar20);
    plVar21 = local_1a0;
  }
  if (((byte)((char)plVar21[0x21] - 2U) < 2) || ((char)plVar21[0x21] == '\x0e')) {
    local_c0 = &PTR_LAB_144d88c80;
    local_b0 = (uint)*(byte *)((longlong)plVar21 + 0x13a);
    local_b8 = bVar17;
    for (plVar23 = DAT_147ef4190; plVar23 != (longlong *)0x0; plVar23 = (longlong *)plVar23[1]) {
      (**(code **)(*plVar23 + 8))(plVar23,&local_c0);
    }
  }
  if ((undefined **)*plVar21 == &PTR_FUN_144d893c0) {
    cVar3 = FUN_143a91a50((longlong)(plVar21 + 0x2e7));
  }
  else {
    cVar3 = (*(code *)((undefined **)*plVar21)[4])(plVar21);
  }
  plVar23 = plVar21 + 0x2e7;
  if (cVar3 != '\0') {
    local_118 = &PTR_LAB_144d88c48;
    local_110 = (ulonglong)param_2 ^ 1;
    for (plVar16 = DAT_147ef4080; plVar16 != (longlong *)0x0; plVar16 = (longlong *)plVar16[1]) {
      (**(code **)(*plVar16 + 8))(plVar16,&local_118);
    }
  }
  if (*(short *)(lVar7 + 0x204) == 1) {
    local_178 = &PTR_FUN_144d88ba8;
    local_170 = (ulonglong)param_2 ^ 1;
    plVar16 = DAT_147ef4278;
    if (DAT_147ef4278 != (longlong *)0x0) {
      do {
        (**(code **)(*plVar16 + 8))(plVar16,&local_178);
        plVar16 = (longlong *)plVar16[1];
      } while (plVar16 != (longlong *)0x0);
      bVar17 = (byte)local_170;
    }
    FUN_142b5c0b0(bVar17);
    piVar15 = *(int **)(*(longlong *)(DAT_145ea4670 + 0x50) + 0x50);
    puVar12 = (uint *)(piVar15 + 4);
    if (*piVar15 == 0) {
      puVar12 = (uint *)0x0;
    }
    if (puVar12 == (uint *)0x0) {
      lVar8 = 0;
    }
    else {
      lVar8 = (ulonglong)*puVar12 + (longlong)piVar15;
    }
    cVar3 = FUN_143a91a50((longlong)plVar23);
    if (cVar3 == '\0') {
      FUN_143a92110((longlong)plVar23,*(uint *)(plVar21[0x2e8] + 0x68));
    }
    FUN_143a90cc0((longlong)plVar23);
    iVar14 = *(int *)(lVar8 + 0x9c);
  }
  else {
    if (*(short *)(lVar7 + 0x204) != 2) goto LAB_143a3bc93;
    local_188 = &PTR_FUN_144d88bb0;
    local_180 = (ulonglong)param_2 ^ 1;
    plVar16 = DAT_147ef4298;
    if (DAT_147ef4298 != (longlong *)0x0) {
      do {
        (**(code **)(*plVar16 + 8))(plVar16,&local_188);
        plVar16 = (longlong *)plVar16[1];
      } while (plVar16 != (longlong *)0x0);
      bVar17 = (byte)local_180;
    }
    FUN_142b5c050(bVar17);
    piVar15 = *(int **)(*(longlong *)(DAT_145ea4670 + 0x50) + 0x50);
    puVar12 = (uint *)(piVar15 + 4);
    if (*piVar15 == 0) {
      puVar12 = (uint *)0x0;
    }
    if (puVar12 == (uint *)0x0) {
      lVar8 = 0;
    }
    else {
      lVar8 = (ulonglong)*puVar12 + (longlong)piVar15;
    }
    cVar3 = FUN_143a91a50((longlong)plVar23);
    if (cVar3 == '\0') {
      FUN_143a92110((longlong)plVar23,*(uint *)(plVar21[0x2e8] + 0x68));
    }
    FUN_143a90cc0((longlong)plVar23);
    iVar14 = *(int *)(lVar8 + 0x98);
  }
  FUN_143a90e30((longlong)plVar23,iVar14);
LAB_143a3bc93:
  bVar2 = FUN_143a6cf70((longlong)plVar21,0x1cc);
  if (bVar2) {
    local_1c0 = CONCAT22(*(undefined2 *)(lVar7 + 0x202),*(undefined2 *)(lVar7 + 0x204));
    local_1bc = CONCAT11(*(undefined1 *)(lVar7 + 0x265),*(undefined1 *)(lVar7 + 0x20a));
    *(undefined4 *)(lVar7 + 0x172c) = local_1c0;
    *(undefined2 *)(lVar7 + 0x1730) = local_1bc;
  }
  else {
    *(undefined4 *)(lVar7 + 0x172c) = 0;
    *(undefined2 *)(lVar7 + 0x1730) = 0;
  }
  FUN_143a9fba0(lVar7 + 0x228,param_2);
  return;
}

