
/* WARNING: Removing unreachable block (ram,0x00123b35) */
/* WARNING: Removing unreachable block (ram,0x00123b51) */

undefined4 __cdecl FUN_00123780(int param_1,void *param_2)

{
  void *this;
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint uVar6;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  uint uVar7;
  undefined3 extraout_var_03;
  char cVar8;
  void **this_00;
  byte *pbVar9;
  int iVar10;
  char local_1a;
  char local_19;
  char local_18 [7];
  byte local_11;
  undefined4 local_10;
  int local_c;
  uint local_8;
  byte *local_4;
  
  local_10 = local_10 & 0xffffff00;
  local_19 = '\0';
  iVar4 = FUN_00134780();
  this = param_2;
  if (iVar4 == 0) {
    uVar5 = (uint)(byte)(&DAT_008a107c)[*(byte *)((int)param_2 + 0x18)];
  }
  else {
    uVar5 = FUN_00130660(*(undefined *)((int)param_2 + 0x18));
    uVar5 = uVar5 & 0xff;
  }
  uVar6 = ((DAT_00878e2e + 3) * 10) / 0x3c;
  pbVar9 = &DAT_006ddc04 + uVar5 * 8;
  local_8 = uVar5;
  local_4 = pbVar9;
  iVar4 = FUN_0011b4c0(pbVar9,uVar6,uVar6);
  if (iVar4 != 0) {
    local_10 = CONCAT31(local_10._1_3_,0xff);
  }
  iVar4 = FUN_0011b520(pbVar9,uVar6,uVar6);
  if (iVar4 != 0) {
    local_10 = CONCAT31(local_10._1_3_,1);
  }
  iVar4 = FUN_0011b400(pbVar9,uVar6,uVar6);
  if (iVar4 != 0) {
    local_19 = -1;
  }
  iVar4 = FUN_0011b460(pbVar9,uVar6,uVar6);
  if (iVar4 != 0) {
    local_19 = '\x01';
  }
  local_11 = *(byte *)((int)this + 0x14);
  if (((char)local_10 != '\0') || (local_19 != '\0')) {
    DAT_00df0a00 = 3;
    iVar4 = (int)DATA_006dc9a8 / 2;
    cVar8 = (char)iVar4;
    local_1a = (char)((int)*(char *)((int)this + 0x14) / iVar4);
    cVar1 = (char)((int)*(char *)((int)this + 0x14) % iVar4);
    param_2 = (void *)CONCAT31(param_2._1_3_,cVar1);
    if (cVar8 != '\0') {
      cVar1 = cVar1 + (char)local_10 % cVar8;
      param_2 = (void *)CONCAT31(param_2._1_3_,cVar1);
      if (cVar1 < cVar8) {
        if (cVar1 < '\0') {
          param_2 = (void *)CONCAT31(param_2._1_3_,cVar1 + cVar8);
        }
      }
      else {
        param_2 = (void *)CONCAT31(param_2._1_3_,cVar1 % cVar8);
      }
    }
    local_18[0] = (char)((int)DATA_006dc9a8 / iVar4);
    if (local_18[0] != '\0') {
      local_1a = local_1a + local_19 % local_18[0];
      if (local_1a < local_18[0]) {
        if (local_1a < '\0') {
          local_1a = local_1a + local_18[0];
        }
      }
      else {
        local_1a = local_1a % local_18[0];
      }
    }
    cVar1 = cVar8 * local_1a + (char)param_2;
    FUN_0011f010((int)this);
    iVar4 = FUN_00120220(this,local_18);
    if (iVar4 == 0) {
      *(char *)((int)this + 0x14) = cVar1;
    }
    else if (DAT_00873d32 == '\b') {
      *(char *)((int)this + 0x14) = cVar1;
      *(char *)((int)cVar1 + (int)this) = local_18[0];
    }
    else {
      if ((char)local_10 == '\0') {
        uVar5 = 1;
        this_00 = (void **)&local_1a;
      }
      else {
        this_00 = &param_2;
        uVar5 = local_10;
      }
      local_c = (int)DATA_006dc9a8 / 2;
      FUN_0011f320(this_00,(char)uVar5);
      *(char *)((int)this + 0x14) = (char)local_c * local_1a + (char)param_2;
    }
    FUN_00122b40(param_1,(int)this,0);
    uVar5 = local_8;
    pbVar9 = local_4;
  }
  bVar3 = *(byte *)((int)this + 0x14);
  if (bVar3 != local_11) {
    if (DAT_00df1154 == 0x15) {
      pbVar9 = &CharacterSelectSlotVersus01_Kasumi_006dc5c8 +
               (uint)(byte)(&DAT_00df09dc)[bVar3] * 0x14;
    }
    else {
      pbVar9 = &BYTE_006dc438 + (uint)(byte)(&DAT_00df09dc)[bVar3] * 0x14;
    }
    *(byte *)((int)this + 0x12) = *pbVar9;
    *(undefined *)((int)this + 0x13) = *(undefined *)((int)(char)bVar3 + (int)this);
    uVar5 = FUN_0011f010((int)this);
    uVar6 = uVar5 & 0xff;
    bVar2 = FUN_0011f400();
    if ((CONCAT31(extraout_var,bVar2) == 0) &&
       (bVar2 = FUN_0011f460(), CONCAT31(extraout_var_00,bVar2) == 0)) {
      iVar4 = FUN_00134780();
      if ((iVar4 == 0) || (iVar4 = FUN_001335d0(param_1,(int)this), iVar4 != 0)) {
        (&DAT_00df1417)[uVar6 * 0x20] = 0;
        FUN_001214d0((int)this,0);
        FUN_0012ea80(uVar6,*(undefined *)((int)this + 0x12),*(undefined *)((int)this + 0x13));
        FUN_0011f1e0(uVar6,0,(int)this);
        *(undefined *)((int)this + 0x31) = 0;
        goto LAB_00123afe;
      }
    }
    else {
      iVar4 = FUN_00134780();
      if ((iVar4 != 0) &&
         ((iVar4 = FUN_001335d0(param_1,(int)this), iVar4 != 0 && (DAT_00873d32 != '\b')))) {
        (&DAT_00df1417)[uVar6 * 0x20] = 0;
        FUN_00121560((int)this,0);
        FUN_0012ea80(uVar6,*(undefined *)((int)this + 0x12),*(undefined *)((int)this + 0x13));
        FUN_0011f220(uVar6,0,(int)this);
        *(undefined *)((int)this + 0x31) = 0;
        goto LAB_00123afe;
      }
    }
    FUN_0012e890(uVar6,0);
    FUN_001279e0((int)(&DAT_00df1410 + uVar6 * 0x20));
    (&DAT_00df1417)[uVar6 * 0x20] = 1;
    *(undefined *)((int)this + 0x31) = 1;
LAB_00123afe:
    (&DAT_00df142d)[uVar6 * 0x20] = 0;
    *(undefined4 *)((int)this + 0x24) = 0;
    *(undefined4 *)((int)this + 0x20) = 0;
    FUN_000fed80(0x23);
    bVar3 = FUN_0011eb70((int)this);
    iVar4 = FUN_00130e90();
    if (iVar4 == 0) {
      (&CHAR_P1_00851594)[(uVar5 & 1) * 7 + (uint)bVar3] = *(byte *)((int)this + 0x12);
    }
    else {
      uVar6 = FUN_00130e20();
      (&CHAR_P1_00851594)[(uVar5 & 1) * 7 + uVar6] = *(byte *)((int)this + 0x12);
    }
    iVar4 = FUN_00134780();
    if (iVar4 == 0) {
      return 1;
    }
    uVar5 = FUN_0029a1f0();
    uVar6 = FUN_002991c0();
    if ((uVar5 ^ uVar6 ^ 1) != (uint)*(byte *)((int)this + 0x18)) {
      return 1;
    }
    if (*(char *)((int)this + 0x17) == '\0') {
      DAT_006dda38 = *(undefined *)((int)this + 0x12);
      DAT_006dda3a = *(undefined *)((int)this + 0x13);
    }
    else {
      DAT_006dda39 = *(undefined *)((int)this + 0x12);
      DAT_006dda3b = *(undefined *)((int)this + 0x13);
    }
    FUN_002940a0(DAT_006dda38,DAT_006dda3a,DAT_006dda39,DAT_006dda3b);
    return 1;
  }
  iVar4 = FUN_00134780();
  if (iVar4 == 0) {
    iVar4 = FUN_00121640(pbVar9);
    if (iVar4 == 0) {
      uVar6 = (&DAT_00878c08)[(uint)*pbVar9 * 0xc];
      goto LAB_00123c36;
    }
LAB_00123c3c:
    if (*(int *)((int)this + 0x20) < 1) {
      bVar2 = FUN_0011f460();
      if ((CONCAT31(extraout_var_01,bVar2) == 0) ||
         ((iVar4 = FUN_001335d0(param_1,(int)this), iVar4 != 0 &&
          ((iVar4 = FUN_00134780(), iVar4 == 0 || (DAT_00873d32 != '\b')))))) {
        *(undefined4 *)((int)this + 0x20) = 1;
        bVar2 = FUN_0011f400();
        if (CONCAT31(extraout_var_02,bVar2) != 0) {
          iVar4 = FUN_00122fc0(param_1,(byte)uVar5,0);
          if (iVar4 == 0) {
            FUN_000fed80(0x29);
            return 1;
          }
          FUN_000fed80(0x24);
          return 1;
        }
        iVar4 = FUN_00134780();
        if ((iVar4 == 0) || (iVar4 = FUN_001335d0(param_1,(int)this), iVar4 != 0)) {
          FUN_000fed80(0x24);
          *(undefined4 *)((int)this + 0x38) = 1;
          iVar4 = FUN_00134780();
          if (iVar4 != 0) {
            uVar6 = FUN_0029a1f0();
            uVar7 = FUN_002991c0();
            if (uVar5 == (uVar6 ^ uVar7 ^ 1)) {
              if (*(char *)((int)this + 0x17) == '\0') {
                FUN_002941c0(1,0xffff);
                return 1;
              }
              FUN_002941c0(3,0xffff);
            }
          }
          return 1;
        }
      }
      return 0;
    }
  }
  else {
    uVar6 = (&DAT_00878c08)[uVar5 * 0xc];
    if (((uVar6 & 0xd00) != 0) || ((uVar6 & 0x10) != 0)) goto LAB_00123c3c;
LAB_00123c36:
    if ((uVar6 & 0x2000) != 0) goto LAB_00123c3c;
  }
  iVar4 = FUN_00134780();
  if (iVar4 == 0) {
    iVar4 = FUN_0011b5b0(pbVar9);
    if (iVar4 == 1) goto LAB_00123d99;
  }
  else if ((((&DAT_00878c08)[uVar5 * 0xc] & 0x200) != 0) ||
          (((&DAT_00878c08)[uVar5 * 0xc] & 0x20) != 0)) {
LAB_00123d99:
    if (('\0' < *(char *)((int)this + 0x17)) &&
       (bVar2 = FUN_00120310(param_1,(int)this), CONCAT31(extraout_var_03,bVar2) == 0)) {
      uVar5 = FUN_0011f010((int)this);
      uVar5 = uVar5 & 0xff;
      iVar4 = FUN_0011ff90();
      if (iVar4 != 0) {
        if (DAT_00873d32 == '\b') {
          FUN_001214d0((int)this,0);
          FUN_0012ea80(uVar5,*(undefined *)((int)this + 0x12),*(undefined *)((int)this + 0x13));
          FUN_0011f1e0(uVar5,0,(int)this);
        }
        else {
          FUN_001279e0((int)(&DAT_00df1410 + uVar5 * 0x20));
        }
      }
      *(uint *)((int)this + 0x20) = ((DAT_00878e2e + 6) * 5) / 0x3c;
      goto LAB_00123e91;
    }
  }
  iVar10 = 0;
  iVar4 = FUN_00134780();
  if (iVar4 == 0) {
    iVar10 = FUN_0011b5b0(pbVar9);
  }
  else if ((((&DAT_00878c08)[uVar5 * 0xc] & 0x200) != 0) ||
          (((&DAT_00878c08)[uVar5 * 0xc] & 0x20) != 0)) {
    iVar10 = 1;
  }
  if (DAT_00873d32 != '\b') {
    return 1;
  }
  if (iVar10 != 1) {
    return 1;
  }
  if (*(char *)((int)this + 0x17) != '\0') {
    return 1;
  }
  iVar4 = FUN_00134780();
  if (iVar4 != 0) {
    return 1;
  }
  FUN_001279e0((int)(&DAT_00df1410 + (uint)*(byte *)((int)this + 0x18) * 0x20));
  *(undefined4 *)((int)this + 0x38) = 3;
  *(uint *)((int)this + 0x20) = ((DAT_00878e2e + 6) * 5) / 0x3c;
LAB_00123e91:
  FUN_000fed80(0x29);
  return 1;
}

