
void FUN_0004f9e0(int param_1)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  uint8_t uVar7;
  uint uVar8;
  undefined4 unaff_pfp;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined *puVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  char *pcVar19;
  
  iVar16 = 0;
  puVar14 = &DAT_00588f80 + param_1 * 0x618;
  uVar15 = ac;
  do {
    ac = uVar15;
    uVar8 = ac;
    *puVar14 = g14;
    puVar14[4] = g14;
    puVar14[5] = g14;
    puVar14[6] = g14;
    puVar14[7] = g14;
    puVar14[8] = g14;
    puVar14[0x18] = g14;
    puVar14[0x19] = g14;
    puVar14[0x1a] = g14;
    puVar14[0x1b] = g14;
    puVar14[0x1c] = g14;
    puVar14[0x2c] = g14;
    puVar14[0x2d] = g14;
    puVar14[0x2e] = g14;
    puVar14[0x2f] = g14;
    puVar14[0x30] = g14;
    puVar14[0x40] = g14;
    puVar14[0x41] = g14;
    puVar14[0x42] = g14;
    puVar14[0x43] = g14;
    puVar14[0x44] = g14;
    puVar14[0x54] = g14;
    puVar14[0x55] = g14;
    iVar16 = iVar16 + 0xd;
    puVar14[0x56] = g14;
    puVar14[0x57] = g14;
    puVar14[0x58] = g14;
    uVar7 = g_debug_anime_mode;
    uVar1 = ac & 0xfffffff8 | (uint)(iVar16 < 0xb6) << 2;
    uVar15 = uVar1 | (uint)(iVar16 == 0xb6) << 1;
    puVar14 = puVar14 + 0x68;
  } while (((byte)(uVar15 >> 1) & 1 | (byte)(uVar1 >> 2) & 1) == 1);
  bVar6 = (&g_player1)[param_1].costume_id;
  uVar15 = (uint)(&g_player1)[param_1].character_id;
  ac = ac & 0xfffffff8 | (uint)(bVar6 != 0);
  if (((byte)ac & 1) != 1) {
    iVar16 = 0;
    iVar10 = 0;
    g13 = &DAT_00588f80 + param_1 * 0x618;
    do {
      iVar9 = (int)(char)(&DAT_000c43b0)[iVar10 + uVar15 * 0xf];
      *g13 = (&DAT_000c43b0)[iVar10 + uVar15 * 0xf];
      if (0 < iVar9) {
        cVar2 = (&DAT_000c4340)[iVar16 + uVar15 * 7];
        g13[6] = (char)iVar16;
        cVar3 = (&DAT_000c44a0)[cVar2];
        cVar4 = (&DAT_000c44c0)[cVar2];
        g13[4] = cVar2;
        g13[5] = cVar3;
        g13[7] = cVar4;
        if (uVar7 == '\0') {
          g13[8] = (&DAT_000c44e0)[cVar2];
        }
        iVar12 = 1;
        iVar11 = iVar16 + 1;
        iVar17 = 0x18;
        g13[9] = (&DAT_000c4500)[cVar2];
        if (1 < iVar9) {
          do {
            cVar2 = (&DAT_000c4340)[iVar11 + uVar15 * 7];
            pcVar19 = g13 + iVar17;
            pcVar19[2] = (char)iVar11;
            cVar3 = (&DAT_000c44a0)[cVar2];
            cVar4 = (&DAT_000c44c0)[cVar2];
            *pcVar19 = cVar2;
            pcVar19[1] = cVar3;
            pcVar19[3] = cVar4;
            if (uVar7 == '\0') {
              pcVar19[4] = (&DAT_000c44e0)[cVar2];
            }
            cVar3 = (&DAT_000c4340)[iVar11 + 1 + uVar15 * 7];
            pcVar19[5] = (&DAT_000c4500)[cVar2];
            pcVar19 = g13 + iVar17 + 0x14;
            *pcVar19 = cVar3;
            cVar2 = (&DAT_000c44a0)[cVar3];
            cVar4 = (&DAT_000c44c0)[cVar3];
            pcVar19[2] = (char)(iVar11 + 1);
            pcVar19[1] = cVar2;
            pcVar19[3] = cVar4;
            if (uVar7 == '\0') {
              pcVar19[4] = (&DAT_000c44e0)[cVar3];
            }
            iVar12 = iVar12 + 2;
            iVar11 = iVar11 + 2;
            iVar17 = iVar17 + 0x28;
            pcVar19[5] = (&DAT_000c4500)[cVar3];
          } while (iVar12 < iVar9);
        }
      }
      ac = ac & 0xfffffff8;
      iVar10 = iVar10 + 1;
      uVar1 = ac | (uint)(0xe < iVar10) << 2 | (uint)(iVar10 == 0xe) << 1;
      ac = uVar1 | iVar10 < 0xe;
      iVar16 = iVar16 + iVar9;
      g13 = g13 + 0x68;
    } while (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) == 1);
    fp = unaff_pfp;
    return;
  }
  ac = uVar8 & 0xfffffff8 | (uint)(bVar6 == 0);
  if (((byte)ac & 1 | 1 < bVar6) != 1) {
    iVar16 = 0;
    iVar10 = 0;
    g13 = &DAT_00588f80 + param_1 * 0x618;
    do {
      iVar9 = (int)(char)(&DAT_000c4590)[iVar10 + uVar15 * 0xf];
      *g13 = (&DAT_000c4590)[iVar10 + uVar15 * 0xf];
      if (0 < iVar9) {
        cVar2 = (&DAT_000c4520)[iVar16 + uVar15 * 7];
        iVar17 = (int)cVar2;
        g13[6] = (char)iVar16;
        cVar3 = *(char *)((int)&PTR_DAT_000c4680 + iVar17);
        cVar4 = (&DAT_000c46a0)[iVar17];
        g13[4] = cVar2;
        g13[5] = cVar3;
        g13[7] = cVar4;
        if (uVar7 == '\0') {
          g13[8] = (&DAT_000c46c0)[iVar17];
        }
        iVar13 = 1;
        iVar12 = iVar16 + 1;
        iVar11 = 0x18;
        g13[9] = (&DAT_000c46e0)[iVar17];
        if (1 < iVar9) {
          do {
            cVar2 = (&DAT_000c4520)[iVar12 + uVar15 * 7];
            iVar17 = (int)cVar2;
            pcVar19 = g13 + iVar11;
            pcVar19[2] = (char)iVar12;
            cVar3 = *(char *)((int)&PTR_DAT_000c4680 + iVar17);
            cVar4 = (&DAT_000c46a0)[iVar17];
            *pcVar19 = cVar2;
            pcVar19[1] = cVar3;
            pcVar19[3] = cVar4;
            if (uVar7 == '\0') {
              pcVar19[4] = (&DAT_000c46c0)[iVar17];
            }
            cVar2 = (&DAT_000c4520)[iVar12 + 1 + uVar15 * 7];
            iVar18 = (int)cVar2;
            pcVar19[5] = (&DAT_000c46e0)[iVar17];
            pcVar19 = g13 + iVar11 + 0x14;
            *pcVar19 = cVar2;
            cVar2 = *(char *)((int)&PTR_DAT_000c4680 + iVar18);
            cVar3 = (&DAT_000c46a0)[iVar18];
            pcVar19[2] = (char)(iVar12 + 1);
            pcVar19[1] = cVar2;
            pcVar19[3] = cVar3;
            if (uVar7 == '\0') {
              pcVar19[4] = (&DAT_000c46c0)[iVar18];
            }
            iVar13 = iVar13 + 2;
            iVar12 = iVar12 + 2;
            iVar11 = iVar11 + 0x28;
            pcVar19[5] = (&DAT_000c46e0)[iVar18];
          } while (iVar13 < iVar9);
        }
      }
      ac = ac & 0xfffffff8;
      iVar10 = iVar10 + 1;
      uVar1 = ac | (uint)(0xe < iVar10) << 2 | (uint)(iVar10 == 0xe) << 1;
      ac = uVar1 | iVar10 < 0xe;
      iVar16 = iVar16 + iVar9;
      g13 = g13 + 0x68;
    } while (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) == 1);
    fp = unaff_pfp;
    return;
  }
  iVar16 = 0;
  iVar10 = 0;
  g13 = &DAT_00588f80 + param_1 * 0x618;
  do {
    iVar9 = (int)(char)(&DAT_000c4770)[iVar10 + uVar15 * 0xf];
    *g13 = (&DAT_000c4770)[iVar10 + uVar15 * 0xf];
    if (0 < iVar9) {
      cVar2 = (&DAT_000c4700)[iVar16 + uVar15 * 7];
      g13[6] = (char)iVar16;
      bVar6 = (&BYTE_000c4860)[cVar2];
      bVar5 = (&BYTE_000c4880)[cVar2];
      g13[4] = cVar2;
      g13[5] = bVar6;
      g13[7] = bVar5;
      if (uVar7 == '\0') {
        g13[8] = (&BYTE_000c48a0)[cVar2];
      }
      iVar12 = 1;
      iVar11 = iVar16 + 1;
      iVar17 = 0x18;
      g13[9] = (&BYTE_000c48c0)[cVar2];
      if (1 < iVar9) {
        do {
          cVar2 = (&DAT_000c4700)[iVar11 + uVar15 * 7];
          pcVar19 = g13 + iVar17;
          pcVar19[2] = (char)iVar11;
          bVar6 = (&BYTE_000c4860)[cVar2];
          bVar5 = (&BYTE_000c4880)[cVar2];
          *pcVar19 = cVar2;
          pcVar19[1] = bVar6;
          pcVar19[3] = bVar5;
          if (uVar7 == '\0') {
            pcVar19[4] = (&BYTE_000c48a0)[cVar2];
          }
          cVar3 = (&DAT_000c4700)[iVar11 + 1 + uVar15 * 7];
          pcVar19[5] = (&BYTE_000c48c0)[cVar2];
          pcVar19 = g13 + iVar17 + 0x14;
          *pcVar19 = cVar3;
          bVar6 = (&BYTE_000c4860)[cVar3];
          bVar5 = (&BYTE_000c4880)[cVar3];
          pcVar19[2] = (char)(iVar11 + 1);
          pcVar19[1] = bVar6;
          pcVar19[3] = bVar5;
          if (uVar7 == '\0') {
            pcVar19[4] = (&BYTE_000c48a0)[cVar3];
          }
          iVar12 = iVar12 + 2;
          iVar11 = iVar11 + 2;
          iVar17 = iVar17 + 0x28;
          pcVar19[5] = (&BYTE_000c48c0)[cVar3];
        } while (iVar12 < iVar9);
      }
    }
    ac = ac & 0xfffffff8;
    iVar10 = iVar10 + 1;
    uVar1 = ac | (uint)(0xe < iVar10) << 2 | (uint)(iVar10 == 0xe) << 1;
    ac = uVar1 | iVar10 < 0xe;
    iVar16 = iVar16 + iVar9;
    g13 = g13 + 0x68;
  } while (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) == 1);
  fp = unaff_pfp;
  return;
}

