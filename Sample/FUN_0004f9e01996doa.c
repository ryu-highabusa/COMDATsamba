
void Player_InitCostumeSecondaryParts(int param_1)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  uint8_t uVar5;
  uint8_t uVar6;
  uint8_t uVar7;
  byte bVar8;
  byte bVar9;
  uint8_t uVar10;
  uint uVar11;
  undefined4 unaff_pfp;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined *puVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  char *pcVar20;
  uint8_t *puVar21;
  
  iVar18 = 0;
  puVar16 = &g_player_secondary_motion_groups + param_1 * 0x618;
  uVar17 = ac;
  do {
    ac = uVar17;
    uVar11 = ac;
    *puVar16 = g14;
    puVar16[4] = g14;
    puVar16[5] = g14;
    puVar16[6] = g14;
    puVar16[7] = g14;
    puVar16[8] = g14;
    puVar16[0x18] = g14;
    puVar16[0x19] = g14;
    puVar16[0x1a] = g14;
    puVar16[0x1b] = g14;
    puVar16[0x1c] = g14;
    puVar16[0x2c] = g14;
    puVar16[0x2d] = g14;
    puVar16[0x2e] = g14;
    puVar16[0x2f] = g14;
    puVar16[0x30] = g14;
    puVar16[0x40] = g14;
    puVar16[0x41] = g14;
    puVar16[0x42] = g14;
    puVar16[0x43] = g14;
    puVar16[0x44] = g14;
    puVar16[0x54] = g14;
    puVar16[0x55] = g14;
    iVar18 = iVar18 + 0xd;
    puVar16[0x56] = g14;
    puVar16[0x57] = g14;
    puVar16[0x58] = g14;
    uVar10 = g_debug_anime_mode;
    uVar1 = ac & 0xfffffff8 | (uint)(iVar18 < 0xb6) << 2;
    uVar17 = uVar1 | (uint)(iVar18 == 0xb6) << 1;
    puVar16 = puVar16 + 0x68;
  } while (((byte)(uVar17 >> 1) & 1 | (byte)(uVar1 >> 2) & 1) == 1);
  bVar9 = (&g_player1)[param_1].costume_id;
  uVar17 = (uint)(&g_player1)[param_1].character_id;
  ac = ac & 0xfffffff8 | (uint)(bVar9 != 0);
  if (((byte)ac & 1) != 1) {
    iVar18 = 0;
    iVar13 = 0;
    g13 = &g_player_secondary_motion_groups + param_1 * 0x618;
    do {
      iVar12 = (int)(char)(&g_costume0_secondary_part_counts)[iVar13 + uVar17 * 0xf];
      *g13 = (&g_costume0_secondary_part_counts)[iVar13 + uVar17 * 0xf];
      if (0 < iVar12) {
        cVar2 = (&g_costume0_secondary_part_ids)[iVar18 + uVar17 * 7];
        g13[6] = (char)iVar18;
        cVar3 = ARRAY_000c44a0[cVar2];
        cVar4 = ARRAY_000c44c0[cVar2];
        g13[4] = cVar2;
        g13[5] = cVar3;
        g13[7] = cVar4;
        if (uVar10 == '\0') {
          g13[8] = ARRAY_000c44e0[cVar2];
        }
        iVar15 = 1;
        iVar14 = iVar18 + 1;
        iVar19 = 0x18;
        g13[9] = ARRAY_000c4500[cVar2];
        if (1 < iVar12) {
          do {
            cVar2 = (&g_costume0_secondary_part_ids)[iVar14 + uVar17 * 7];
            pcVar20 = (char *)(g13 + iVar19);
            pcVar20[2] = (char)iVar14;
            cVar3 = ARRAY_000c44a0[cVar2];
            cVar4 = ARRAY_000c44c0[cVar2];
            *pcVar20 = cVar2;
            pcVar20[1] = cVar3;
            pcVar20[3] = cVar4;
            if (uVar10 == '\0') {
              pcVar20[4] = ARRAY_000c44e0[cVar2];
            }
            cVar3 = (&g_costume0_secondary_part_ids)[iVar14 + 1 + uVar17 * 7];
            pcVar20[5] = ARRAY_000c4500[cVar2];
            pcVar20 = (char *)(g13 + iVar19 + 0x14);
            *pcVar20 = cVar3;
            cVar2 = ARRAY_000c44a0[cVar3];
            cVar4 = ARRAY_000c44c0[cVar3];
            pcVar20[2] = (char)(iVar14 + 1);
            pcVar20[1] = cVar2;
            pcVar20[3] = cVar4;
            if (uVar10 == '\0') {
              pcVar20[4] = ARRAY_000c44e0[cVar3];
            }
            iVar15 = iVar15 + 2;
            iVar14 = iVar14 + 2;
            iVar19 = iVar19 + 0x28;
            pcVar20[5] = ARRAY_000c4500[cVar3];
          } while (iVar15 < iVar12);
        }
      }
      ac = ac & 0xfffffff8;
      iVar13 = iVar13 + 1;
      uVar1 = ac | (uint)(0xe < iVar13) << 2 | (uint)(iVar13 == 0xe) << 1;
      ac = uVar1 | iVar13 < 0xe;
      iVar18 = iVar18 + iVar12;
      g13 = g13 + 0x68;
    } while (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) == 1);
    fp = unaff_pfp;
    return;
  }
  ac = uVar11 & 0xfffffff8 | (uint)(bVar9 == 0);
  if (((byte)ac & 1 | 1 < bVar9) != 1) {
    iVar18 = 0;
    iVar13 = 0;
    g13 = &g_player_secondary_motion_groups + param_1 * 0x618;
    do {
      iVar12 = (int)(char)(&g_costume1_secondary_part_counts)[iVar13 + uVar17 * 0xf];
      *g13 = (&g_costume1_secondary_part_counts)[iVar13 + uVar17 * 0xf];
      if (0 < iVar12) {
        uVar5 = (&g_costume1_secondary_part_ids)[iVar18 + uVar17 * 7];
        g13[6] = (uint8_t)iVar18;
        uVar6 = ARRAY_000c4680[(char)uVar5];
        uVar7 = ARRAY_000c46a0[(char)uVar5];
        g13[4] = uVar5;
        g13[5] = uVar6;
        g13[7] = uVar7;
        if (uVar10 == '\0') {
          g13[8] = ARRAY_000c46c0[(char)uVar5];
        }
        iVar15 = 1;
        iVar14 = iVar18 + 1;
        iVar19 = 0x18;
        g13[9] = ARRAY_000c46e0[(char)uVar5];
        if (1 < iVar12) {
          do {
            uVar5 = (&g_costume1_secondary_part_ids)[iVar14 + uVar17 * 7];
            puVar21 = g13 + iVar19;
            puVar21[2] = (uint8_t)iVar14;
            uVar6 = ARRAY_000c4680[(char)uVar5];
            uVar7 = ARRAY_000c46a0[(char)uVar5];
            *puVar21 = uVar5;
            puVar21[1] = uVar6;
            puVar21[3] = uVar7;
            if (uVar10 == '\0') {
              puVar21[4] = ARRAY_000c46c0[(char)uVar5];
            }
            uVar6 = (&g_costume1_secondary_part_ids)[iVar14 + 1 + uVar17 * 7];
            puVar21[5] = ARRAY_000c46e0[(char)uVar5];
            puVar21 = g13 + iVar19 + 0x14;
            *puVar21 = uVar6;
            uVar5 = ARRAY_000c4680[(char)uVar6];
            uVar7 = ARRAY_000c46a0[(char)uVar6];
            puVar21[2] = (uint8_t)(iVar14 + 1);
            puVar21[1] = uVar5;
            puVar21[3] = uVar7;
            if (uVar10 == '\0') {
              puVar21[4] = ARRAY_000c46c0[(char)uVar6];
            }
            iVar15 = iVar15 + 2;
            iVar14 = iVar14 + 2;
            iVar19 = iVar19 + 0x28;
            puVar21[5] = ARRAY_000c46e0[(char)uVar6];
          } while (iVar15 < iVar12);
        }
      }
      ac = ac & 0xfffffff8;
      iVar13 = iVar13 + 1;
      uVar1 = ac | (uint)(0xe < iVar13) << 2 | (uint)(iVar13 == 0xe) << 1;
      ac = uVar1 | iVar13 < 0xe;
      iVar18 = iVar18 + iVar12;
      g13 = g13 + 0x68;
    } while (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) == 1);
    fp = unaff_pfp;
    return;
  }
  iVar18 = 0;
  iVar13 = 0;
  g13 = &g_player_secondary_motion_groups + param_1 * 0x618;
  do {
    iVar12 = (int)(char)(&g_costume2_secondary_part_counts)[iVar13 + uVar17 * 0xf];
    *g13 = (&g_costume2_secondary_part_counts)[iVar13 + uVar17 * 0xf];
    if (0 < iVar12) {
      uVar5 = (&g_costume2_secondary_part_ids)[iVar18 + uVar17 * 7];
      g13[6] = (uint8_t)iVar18;
      bVar9 = BYTE_ARRAY_000c4860[(char)uVar5];
      bVar8 = BYTE_ARRAY_000c4880[(char)uVar5];
      g13[4] = uVar5;
      g13[5] = bVar9;
      g13[7] = bVar8;
      if (uVar10 == '\0') {
        g13[8] = BYTE_ARRAY_000c48a0[(char)uVar5];
      }
      iVar15 = 1;
      iVar14 = iVar18 + 1;
      iVar19 = 0x18;
      g13[9] = BYTE_ARRAY_000c48c0[(char)uVar5];
      if (1 < iVar12) {
        do {
          uVar5 = (&g_costume2_secondary_part_ids)[iVar14 + uVar17 * 7];
          puVar21 = g13 + iVar19;
          puVar21[2] = (uint8_t)iVar14;
          bVar9 = BYTE_ARRAY_000c4860[(char)uVar5];
          bVar8 = BYTE_ARRAY_000c4880[(char)uVar5];
          *puVar21 = uVar5;
          puVar21[1] = bVar9;
          puVar21[3] = bVar8;
          if (uVar10 == '\0') {
            puVar21[4] = BYTE_ARRAY_000c48a0[(char)uVar5];
          }
          uVar6 = (&g_costume2_secondary_part_ids)[iVar14 + 1 + uVar17 * 7];
          puVar21[5] = BYTE_ARRAY_000c48c0[(char)uVar5];
          puVar21 = g13 + iVar19 + 0x14;
          *puVar21 = uVar6;
          bVar9 = BYTE_ARRAY_000c4860[(char)uVar6];
          bVar8 = BYTE_ARRAY_000c4880[(char)uVar6];
          puVar21[2] = (uint8_t)(iVar14 + 1);
          puVar21[1] = bVar9;
          puVar21[3] = bVar8;
          if (uVar10 == '\0') {
            puVar21[4] = BYTE_ARRAY_000c48a0[(char)uVar6];
          }
          iVar15 = iVar15 + 2;
          iVar14 = iVar14 + 2;
          iVar19 = iVar19 + 0x28;
          puVar21[5] = BYTE_ARRAY_000c48c0[(char)uVar6];
        } while (iVar15 < iVar12);
      }
    }
    ac = ac & 0xfffffff8;
    iVar13 = iVar13 + 1;
    uVar1 = ac | (uint)(0xe < iVar13) << 2 | (uint)(iVar13 == 0xe) << 1;
    ac = uVar1 | iVar13 < 0xe;
    iVar18 = iVar18 + iVar12;
    g13 = g13 + 0x68;
  } while (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) == 1);
  fp = unaff_pfp;
  return;
}

