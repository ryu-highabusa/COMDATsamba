
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall StageRandom_RebuildCandidatePool(void *ctx)

{
  uint32_t uVar1;
  bool bVar2;
  char cVar3;
  uint8_t uVar4;
  byte bVar5;
  undefined4 uVar6;
  byte bVar7;
  uint uVar8;
  doa5lrpc_stage_id stage_id;
  int *unaff_FS_OFFSET;
  int local_20;
  UINT32 *local_1c;
  int local_18;
  byte local_11;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00d0f05e;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  FUN_00a7a7b0();
  local_18 = 0;
  if (*(char *)((int)ctx + 0x84) == '\0') {
    local_1c = &SingleStage_ID_MAX;
    local_20 = 0x19;
    do {
      uVar1 = *local_1c;
      bVar5 = (byte)*(undefined4 *)((int)ctx + 0x80);
      if ((uVar1 != 0xff) &&
         ((*(char *)((int)ctx + 0x84) == '\0' || (bVar2 = Stage_IsTagCompatible(uVar1), bVar2)))) {
        if (uVar1 == 0x21) {
          cVar3 = FUN_00a892c0(0,0x21);
          if (cVar3 == '\0') {
            bVar5 = 1;
            goto LAB_00b29a7e;
          }
        }
        else {
LAB_00b29a7e:
          cVar3 = FUN_00a892c0(bVar5,uVar1);
          if (cVar3 == '\0') goto LAB_00b29b62;
        }
        local_11 = 0;
        uVar4 = StageGroup_GetVariantCount
                          (uVar1,*(bool *)((int)ctx + 0x84),
                           (uint8_t)*(undefined4 *)((int)ctx + 0x80));
        if (uVar4 != '\0') {
          do {
            stage_id = local_11 + uVar1;
            uVar6 = FUN_00b296c0();
            if ((((char)uVar6 != '\0') ||
                (cVar3 = FUN_00a81300((byte)*(undefined4 *)((int)ctx + 0x80),stage_id),
                cVar3 != '\0')) &&
               ((uVar6 = FUN_00b296c0(), (char)uVar6 == '\0' || (stage_id != Dojo)))) {
              if ((_DAT_01389658 & 1) == 0) {
                _DAT_01389658 = _DAT_01389658 | 1;
                local_8 = 0;
                FUN_004d1f00((undefined4 *)&DAT_01383d00);
                _atexit(FUN_00d61370);
                local_8 = 0xffffffff;
              }
              bVar2 = FUN_00a7bd40(0x1383d00);
              if (((!bVar2) || ((int)stage_id < 0x2c)) || (0x2d < (int)stage_id)) {
                StageRandom_SetCandidateEnabled(stage_id,1);
                local_18 = local_18 + 1;
              }
            }
            local_11 = local_11 + 1;
            bVar5 = StageGroup_GetVariantCount
                              (uVar1,*(bool *)((int)ctx + 0x84),
                               (uint8_t)*(undefined4 *)((int)ctx + 0x80));
          } while (local_11 < bVar5);
        }
      }
LAB_00b29b62:
      local_1c = local_1c + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
    if (local_18 == 0) {
      local_1c = &SingleStage_ID_MAX;
      local_20 = 0x19;
      do {
        uVar1 = *local_1c;
        bVar5 = (byte)*(undefined4 *)((int)ctx + 0x80);
        if ((uVar1 != 0xff) &&
           ((*(char *)((int)ctx + 0x84) == '\0' || (bVar2 = Stage_IsTagCompatible(uVar1), bVar2))))
        {
          if (uVar1 == 0x21) {
            cVar3 = FUN_00a892c0(0,0x21);
            if (cVar3 == '\0') {
              bVar5 = 1;
              goto LAB_00b29bd9;
            }
          }
          else {
LAB_00b29bd9:
            cVar3 = FUN_00a892c0(bVar5,uVar1);
            if (cVar3 == '\0') goto LAB_00b29c2e;
          }
          uVar8 = 0;
          uVar4 = StageGroup_GetVariantCount
                            (uVar1,*(bool *)((int)ctx + 0x84),
                             (uint8_t)*(undefined4 *)((int)ctx + 0x80));
          if (uVar4 != '\0') {
            do {
              StageRandom_SetCandidateEnabled(uVar8 + uVar1,1);
              bVar7 = (char)uVar8 + 1;
              uVar8 = (uint)bVar7;
              bVar5 = StageGroup_GetVariantCount
                                (uVar1,*(bool *)((int)ctx + 0x84),
                                 (uint8_t)*(undefined4 *)((int)ctx + 0x80));
            } while (bVar7 < bVar5);
          }
        }
LAB_00b29c2e:
        local_1c = local_1c + 1;
        local_20 = local_20 + -1;
      } while (local_20 != 0);
    }
  }
  else {
    local_1c = &TagStage_ID_MAX;
    local_20 = 10;
    do {
      uVar1 = *local_1c;
      bVar5 = (byte)*(undefined4 *)((int)ctx + 0x80);
      if ((uVar1 != 0xff) &&
         ((*(char *)((int)ctx + 0x84) == '\0' || (bVar2 = Stage_IsTagCompatible(uVar1), bVar2)))) {
        if (uVar1 == 0x21) {
          cVar3 = FUN_00a892c0(0,0x21);
          if (cVar3 == '\0') {
            bVar5 = 1;
            goto LAB_00b298ae;
          }
        }
        else {
LAB_00b298ae:
          cVar3 = FUN_00a892c0(bVar5,uVar1);
          if (cVar3 == '\0') goto LAB_00b29931;
        }
        local_11 = 0;
        uVar4 = StageGroup_GetVariantCount
                          (uVar1,*(bool *)((int)ctx + 0x84),
                           (uint8_t)*(undefined4 *)((int)ctx + 0x80));
        if (uVar4 != '\0') {
          do {
            uVar6 = FUN_00b296c0();
            if (((char)uVar6 != '\0') ||
               (cVar3 = FUN_00a81300((byte)*(undefined4 *)((int)ctx + 0x80),local_11 + uVar1),
               cVar3 != '\0')) {
              StageRandom_SetCandidateEnabled(local_11 + uVar1,1);
              local_18 = local_18 + 1;
            }
            local_11 = local_11 + 1;
            bVar5 = StageGroup_GetVariantCount
                              (uVar1,*(bool *)((int)ctx + 0x84),
                               (uint8_t)*(undefined4 *)((int)ctx + 0x80));
          } while (local_11 < bVar5);
        }
      }
LAB_00b29931:
      local_1c = local_1c + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
    if (local_18 == 0) {
      local_1c = &TagStage_ID_MAX;
      local_20 = 10;
      do {
        uVar1 = *local_1c;
        bVar5 = (byte)*(undefined4 *)((int)ctx + 0x80);
        if ((uVar1 != 0xff) &&
           ((*(char *)((int)ctx + 0x84) == '\0' || (bVar2 = Stage_IsTagCompatible(uVar1), bVar2))))
        {
          if (uVar1 == 0x21) {
            cVar3 = FUN_00a892c0(0,0x21);
            if (cVar3 == '\0') {
              bVar5 = 1;
              goto LAB_00b299a9;
            }
          }
          else {
LAB_00b299a9:
            cVar3 = FUN_00a892c0(bVar5,uVar1);
            if (cVar3 == '\0') goto LAB_00b299fe;
          }
          uVar8 = 0;
          uVar4 = StageGroup_GetVariantCount
                            (uVar1,*(bool *)((int)ctx + 0x84),
                             (uint8_t)*(undefined4 *)((int)ctx + 0x80));
          if (uVar4 != '\0') {
            do {
              StageRandom_SetCandidateEnabled(uVar8 + uVar1,1);
              bVar7 = (char)uVar8 + 1;
              uVar8 = (uint)bVar7;
              bVar5 = StageGroup_GetVariantCount
                                (uVar1,*(bool *)((int)ctx + 0x84),
                                 (uint8_t)*(undefined4 *)((int)ctx + 0x80));
            } while (bVar7 < bVar5);
          }
        }
LAB_00b299fe:
        local_1c = local_1c + 1;
        local_20 = local_20 + -1;
        if (local_20 == 0) {
          *unaff_FS_OFFSET = local_10;
          return;
        }
      } while( true );
    }
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

