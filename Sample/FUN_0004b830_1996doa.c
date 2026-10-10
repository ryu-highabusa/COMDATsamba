
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0004b830(int param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint32_t uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  uint32_t uVar6;
  undefined4 uVar7;
  uint32_t uVar8;
  DOA_U8 DVar9;
  undefined *puVar10;
  dword dVar11;
  dword dVar12;
  undefined4 unaff_pfp;
  int iVar13;
  dword dVar14;
  
  dVar12 = DWORD_ARRAY_000c5a1c[0];
  dVar14 = DWORD_ARRAY_000c59dc[0];
  dVar11 = DWORD_000006a8;
  puVar10 = PTR_DAT_000006a0;
  if ((&DAT_005882fa)[param_1] == '\x01') {
    if (GameMode != MODE_LOAD) {
      DVar9 = (&g_player1)[param_1].costume_id;
      ac = ac & 0xfffffff8 | (uint)(DVar9 != '\0') << 2 | (uint)(DVar9 == '\0') << 1;
      if (DVar9 != '\0') {
        uVar1 = *(undefined4 *)(PTR_DAT_000006a0 + 4);
        uVar4 = *(undefined4 *)(PTR_DAT_000006a0 + 8);
        uVar7 = *(undefined4 *)(PTR_DAT_000006a0 + 0xc);
        *(undefined4 *)DWORD_000006a8 = *(undefined4 *)PTR_DAT_000006a0;
        *(undefined4 *)(dVar11 + 4) = uVar1;
        *(undefined4 *)(dVar11 + 8) = uVar4;
        *(undefined4 *)(dVar11 + 0xc) = uVar7;
        uVar1 = *(undefined4 *)(puVar10 + 4);
        uVar4 = *(undefined4 *)(puVar10 + 8);
        uVar7 = *(undefined4 *)(puVar10 + 0xc);
        *(undefined4 *)dVar11 = *(undefined4 *)puVar10;
        *(undefined4 *)(dVar11 + 4) = uVar1;
        *(undefined4 *)(dVar11 + 8) = uVar4;
        *(undefined4 *)(dVar11 + 0xc) = uVar7;
        uVar1 = *(undefined4 *)(puVar10 + 4);
        uVar4 = *(undefined4 *)(puVar10 + 8);
        uVar7 = *(undefined4 *)(puVar10 + 0xc);
        *(undefined4 *)dVar11 = *(undefined4 *)puVar10;
        *(undefined4 *)(dVar11 + 4) = uVar1;
        *(undefined4 *)(dVar11 + 8) = uVar4;
        *(undefined4 *)(dVar11 + 0xc) = uVar7;
        iVar13 = (&DAT_005a6f00)[param_1];
        puVar2 = (&PTR_DAT_0206f3d4)[iVar13 * 4];
        puVar5 = (&PTR_DAT_0206f3d8)[iVar13 * 4];
        uVar1 = *(undefined4 *)(&DAT_0206f3dc + iVar13 * 0x10);
        *(undefined **)dVar11 = (&PTR_DAT_0206f3d0)[iVar13 * 4];
        *(undefined **)(dVar11 + 4) = puVar2;
        *(undefined **)(dVar11 + 8) = puVar5;
        *(undefined4 *)(dVar11 + 0xc) = uVar1;
        dVar14 = DWORD_ARRAY_000c3fe0[(short)(&DAT_005882bc)[param_1]];
      }
      else {
        uVar1 = *(undefined4 *)(PTR_DAT_000006a0 + 4);
        uVar4 = *(undefined4 *)(PTR_DAT_000006a0 + 8);
        uVar7 = *(undefined4 *)(PTR_DAT_000006a0 + 0xc);
        *(undefined4 *)DWORD_000006a8 = *(undefined4 *)PTR_DAT_000006a0;
        *(undefined4 *)(dVar11 + 4) = uVar1;
        *(undefined4 *)(dVar11 + 8) = uVar4;
        *(undefined4 *)(dVar11 + 0xc) = uVar7;
        uVar1 = *(undefined4 *)(puVar10 + 4);
        uVar4 = *(undefined4 *)(puVar10 + 8);
        uVar7 = *(undefined4 *)(puVar10 + 0xc);
        *(undefined4 *)dVar11 = *(undefined4 *)puVar10;
        *(undefined4 *)(dVar11 + 4) = uVar1;
        *(undefined4 *)(dVar11 + 8) = uVar4;
        *(undefined4 *)(dVar11 + 0xc) = uVar7;
        uVar1 = *(undefined4 *)(puVar10 + 4);
        uVar4 = *(undefined4 *)(puVar10 + 8);
        uVar7 = *(undefined4 *)(puVar10 + 0xc);
        *(undefined4 *)dVar11 = *(undefined4 *)puVar10;
        *(undefined4 *)(dVar11 + 4) = uVar1;
        *(undefined4 *)(dVar11 + 8) = uVar4;
        *(undefined4 *)(dVar11 + 0xc) = uVar7;
        iVar13 = (&DAT_005a6f00)[param_1];
        puVar2 = (&PTR_DAT_0206d154)[iVar13 * 4];
        puVar5 = (&PTR_DAT_0206d158)[iVar13 * 4];
        uVar1 = *(undefined4 *)(&DAT_0206d15c + iVar13 * 0x10);
        *(undefined **)dVar11 = (&PTR_DAT_0206d150)[iVar13 * 4];
        *(undefined **)(dVar11 + 4) = puVar2;
        *(undefined **)(dVar11 + 8) = puVar5;
        *(undefined4 *)(dVar11 + 0xc) = uVar1;
        dVar14 = DWORD_ARRAY_000c3fb0[(short)(&DAT_005882bc)[param_1]];
      }
      goto LAB_0004bbdc;
    }
  }
  if (GameMode == MODE_FIGHT) {
    if (BYTE_0054fcfd == 4) {
      if ((byte)((&g_player1)[param_1].action_code + CMD_NML_UP_F_LK) < 5) {
        DVar9 = (&g_player1)[param_1].costume_id;
        ac = ac & 0xfffffff8 | (uint)(DVar9 != '\0') << 2 | (uint)(DVar9 == '\0') << 1;
        if (DVar9 != '\0') {
          uVar1 = *(undefined4 *)(PTR_DAT_000006a0 + 4);
          uVar4 = *(undefined4 *)(PTR_DAT_000006a0 + 8);
          uVar7 = *(undefined4 *)(PTR_DAT_000006a0 + 0xc);
          *(undefined4 *)DWORD_000006a8 = *(undefined4 *)PTR_DAT_000006a0;
          *(undefined4 *)(dVar11 + 4) = uVar1;
          *(undefined4 *)(dVar11 + 8) = uVar4;
          *(undefined4 *)(dVar11 + 0xc) = uVar7;
          uVar1 = *(undefined4 *)(puVar10 + 4);
          uVar4 = *(undefined4 *)(puVar10 + 8);
          uVar7 = *(undefined4 *)(puVar10 + 0xc);
          *(undefined4 *)dVar11 = *(undefined4 *)puVar10;
          *(undefined4 *)(dVar11 + 4) = uVar1;
          *(undefined4 *)(dVar11 + 8) = uVar4;
          *(undefined4 *)(dVar11 + 0xc) = uVar7;
          uVar1 = *(undefined4 *)(puVar10 + 4);
          uVar4 = *(undefined4 *)(puVar10 + 8);
          uVar7 = *(undefined4 *)(puVar10 + 0xc);
          *(undefined4 *)dVar11 = *(undefined4 *)puVar10;
          *(undefined4 *)(dVar11 + 4) = uVar1;
          *(undefined4 *)(dVar11 + 8) = uVar4;
          *(undefined4 *)(dVar11 + 0xc) = uVar7;
          iVar13 = (&DAT_005a6f00)[param_1];
          puVar2 = (&PTR_DAT_0206f424)[iVar13 * 4];
          puVar5 = (&PTR_DAT_0206f428)[iVar13 * 4];
          dVar14 = (&DWORD_0206f42c)[iVar13 * 4];
          *(undefined **)dVar11 = (&PTR_DAT_0206f420)[iVar13 * 4];
          *(undefined **)(dVar11 + 4) = puVar2;
          *(undefined **)(dVar11 + 8) = puVar5;
          *(dword *)(dVar11 + 0xc) = dVar14;
          dVar14 = DWORD_ARRAY_000c4040[(short)(&DAT_005882bc)[param_1]];
        }
        else {
          uVar1 = *(undefined4 *)(PTR_DAT_000006a0 + 4);
          uVar4 = *(undefined4 *)(PTR_DAT_000006a0 + 8);
          uVar7 = *(undefined4 *)(PTR_DAT_000006a0 + 0xc);
          *(undefined4 *)DWORD_000006a8 = *(undefined4 *)PTR_DAT_000006a0;
          *(undefined4 *)(dVar11 + 4) = uVar1;
          *(undefined4 *)(dVar11 + 8) = uVar4;
          *(undefined4 *)(dVar11 + 0xc) = uVar7;
          uVar1 = *(undefined4 *)(puVar10 + 4);
          uVar4 = *(undefined4 *)(puVar10 + 8);
          uVar7 = *(undefined4 *)(puVar10 + 0xc);
          *(undefined4 *)dVar11 = *(undefined4 *)puVar10;
          *(undefined4 *)(dVar11 + 4) = uVar1;
          *(undefined4 *)(dVar11 + 8) = uVar4;
          *(undefined4 *)(dVar11 + 0xc) = uVar7;
          uVar1 = *(undefined4 *)(puVar10 + 4);
          uVar4 = *(undefined4 *)(puVar10 + 8);
          uVar7 = *(undefined4 *)(puVar10 + 0xc);
          *(undefined4 *)dVar11 = *(undefined4 *)puVar10;
          *(undefined4 *)(dVar11 + 4) = uVar1;
          *(undefined4 *)(dVar11 + 8) = uVar4;
          *(undefined4 *)(dVar11 + 0xc) = uVar7;
          iVar13 = (&DAT_005a6f00)[param_1];
          puVar2 = (&PTR_DAT_0206d1a4)[iVar13 * 4];
          puVar5 = (&PTR_DAT_0206d1a8)[iVar13 * 4];
          dVar14 = (&DWORD_0206d1ac)[iVar13 * 4];
          *(undefined **)dVar11 = (&PTR_DAT_0206d1a0)[iVar13 * 4];
          *(undefined **)(dVar11 + 4) = puVar2;
          *(undefined **)(dVar11 + 8) = puVar5;
          *(dword *)(dVar11 + 0xc) = dVar14;
          dVar14 = DWORD_ARRAY_000c4010[(short)(&DAT_005882bc)[param_1]];
        }
        goto LAB_0004bbdc;
      }
    }
  }
  DVar9 = (&g_player1)[param_1].costume_id;
  ac = ac & 0xfffffff8 | (uint)(DVar9 != '\0') << 2 | (uint)(DVar9 == '\0') << 1;
  if (DVar9 != '\0') {
    uVar1 = *(undefined4 *)(PTR_DAT_000006a0 + 4);
    uVar4 = *(undefined4 *)(PTR_DAT_000006a0 + 8);
    uVar7 = *(undefined4 *)(PTR_DAT_000006a0 + 0xc);
    *(undefined4 *)DWORD_000006a8 = *(undefined4 *)PTR_DAT_000006a0;
    *(undefined4 *)(dVar11 + 4) = uVar1;
    *(undefined4 *)(dVar11 + 8) = uVar4;
    *(undefined4 *)(dVar11 + 0xc) = uVar7;
    uVar1 = *(undefined4 *)(puVar10 + 4);
    uVar4 = *(undefined4 *)(puVar10 + 8);
    uVar7 = *(undefined4 *)(puVar10 + 0xc);
    *(undefined4 *)dVar11 = *(undefined4 *)puVar10;
    *(undefined4 *)(dVar11 + 4) = uVar1;
    *(undefined4 *)(dVar11 + 8) = uVar4;
    *(undefined4 *)(dVar11 + 0xc) = uVar7;
    uVar1 = *(undefined4 *)(puVar10 + 4);
    uVar4 = *(undefined4 *)(puVar10 + 8);
    uVar7 = *(undefined4 *)(puVar10 + 0xc);
    *(undefined4 *)dVar11 = *(undefined4 *)puVar10;
    *(undefined4 *)(dVar11 + 4) = uVar1;
    *(undefined4 *)(dVar11 + 8) = uVar4;
    *(undefined4 *)(dVar11 + 0xc) = uVar7;
    iVar13 = (&DAT_005a6f00)[param_1] + dVar12 + 1;
    uVar3 = (&MODEL_ENTRY)[iVar13].material_header_word_index;
    uVar6 = (&MODEL_ENTRY)[iVar13].polygon_word_address;
    uVar8 = (&MODEL_ENTRY)[iVar13].polygon_count;
    *(uint32_t *)dVar11 = (&MODEL_ENTRY)[iVar13].texture_point_word_index;
    *(uint32_t *)(dVar11 + 4) = uVar3;
    *(uint32_t *)(dVar11 + 8) = uVar6;
    *(uint32_t *)(dVar11 + 0xc) = uVar8;
    dVar14 = DWORD_ARRAY_000c3620[(short)(&DAT_005882bc)[param_1]];
  }
  else {
    uVar1 = *(undefined4 *)(PTR_DAT_000006a0 + 4);
    uVar4 = *(undefined4 *)(PTR_DAT_000006a0 + 8);
    uVar7 = *(undefined4 *)(PTR_DAT_000006a0 + 0xc);
    *(undefined4 *)DWORD_000006a8 = *(undefined4 *)PTR_DAT_000006a0;
    *(undefined4 *)(dVar11 + 4) = uVar1;
    *(undefined4 *)(dVar11 + 8) = uVar4;
    *(undefined4 *)(dVar11 + 0xc) = uVar7;
    uVar1 = *(undefined4 *)(puVar10 + 4);
    uVar4 = *(undefined4 *)(puVar10 + 8);
    uVar7 = *(undefined4 *)(puVar10 + 0xc);
    *(undefined4 *)dVar11 = *(undefined4 *)puVar10;
    *(undefined4 *)(dVar11 + 4) = uVar1;
    *(undefined4 *)(dVar11 + 8) = uVar4;
    *(undefined4 *)(dVar11 + 0xc) = uVar7;
    uVar1 = *(undefined4 *)(puVar10 + 4);
    uVar4 = *(undefined4 *)(puVar10 + 8);
    uVar7 = *(undefined4 *)(puVar10 + 0xc);
    *(undefined4 *)dVar11 = *(undefined4 *)puVar10;
    *(undefined4 *)(dVar11 + 4) = uVar1;
    *(undefined4 *)(dVar11 + 8) = uVar4;
    *(undefined4 *)(dVar11 + 0xc) = uVar7;
    iVar13 = (&DAT_005a6f00)[param_1] + dVar14 + 1;
    uVar3 = (&MODEL_ENTRY)[iVar13].material_header_word_index;
    uVar6 = (&MODEL_ENTRY)[iVar13].polygon_word_address;
    uVar8 = (&MODEL_ENTRY)[iVar13].polygon_count;
    *(uint32_t *)dVar11 = (&MODEL_ENTRY)[iVar13].texture_point_word_index;
    *(uint32_t *)(dVar11 + 4) = uVar3;
    *(uint32_t *)(dVar11 + 8) = uVar6;
    *(uint32_t *)(dVar11 + 0xc) = uVar8;
    dVar14 = DWORD_ARRAY_000c3350[(short)(&DAT_005882bc)[param_1]];
  }
LAB_0004bbdc:
  g13 = &DAT_00001111;
  DAT_00880110 = &DAT_00001111;
  DAT_008000b0 = 0xb0b;
  uVar1 = *(undefined4 *)(puVar10 + 4);
  uVar4 = *(undefined4 *)(puVar10 + 8);
  uVar7 = *(undefined4 *)(puVar10 + 0xc);
  *(undefined4 *)dVar11 = *(undefined4 *)puVar10;
  *(undefined4 *)(dVar11 + 4) = uVar1;
  *(undefined4 *)(dVar11 + 8) = uVar4;
  *(undefined4 *)(dVar11 + 0xc) = uVar7;
  uVar1 = *(undefined4 *)(puVar10 + 4);
  uVar4 = *(undefined4 *)(puVar10 + 8);
  uVar7 = *(undefined4 *)(puVar10 + 0xc);
  *(undefined4 *)dVar11 = *(undefined4 *)puVar10;
  *(undefined4 *)(dVar11 + 4) = uVar1;
  *(undefined4 *)(dVar11 + 8) = uVar4;
  *(undefined4 *)(dVar11 + 0xc) = uVar7;
  uVar1 = *(undefined4 *)(puVar10 + 4);
  uVar4 = *(undefined4 *)(puVar10 + 8);
  uVar7 = *(undefined4 *)(puVar10 + 0xc);
  *(undefined4 *)dVar11 = *(undefined4 *)puVar10;
  *(undefined4 *)(dVar11 + 4) = uVar1;
  *(undefined4 *)(dVar11 + 8) = uVar4;
  *(undefined4 *)(dVar11 + 0xc) = uVar7;
  DAT_00800010 = 0x101;
  iVar13 = dVar14 + (&DAT_005a6f00)[param_1];
  uVar3 = (&MODEL_ENTRY)[iVar13].material_header_word_index;
  uVar6 = (&MODEL_ENTRY)[iVar13].polygon_word_address;
  uVar8 = (&MODEL_ENTRY)[iVar13].polygon_count;
  *(uint32_t *)dVar11 = (&MODEL_ENTRY)[iVar13].texture_point_word_index;
  *(uint32_t *)(dVar11 + 4) = uVar3;
  *(uint32_t *)(dVar11 + 8) = uVar6;
  *(uint32_t *)(dVar11 + 0xc) = uVar8;
  fp = unaff_pfp;
  return;
}

