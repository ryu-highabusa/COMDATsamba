
void FUN_00040850(int param_1,int param_2)

{
  byte *pbVar1;
  undefined4 *puVar2;
  word wVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  dword dVar14;
  undefined4 unaff_pfp;
  float fVar15;
  byte *pbVar16;
  uint uVar17;
  byte *pbVar18;
  byte bVar19;
  undefined *puVar20;
  byte *pbVar21;
  float fVar22;
  undefined4 *puVar23;
  uint uVar24;
  dword dVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  byte *pbVar29;
  undefined *puVar30;
  undefined *puVar31;
  
  bVar8 = (&g_player1)[param_2].costume_id;
  pbVar18 = PTR_ARRAY_000b7ef0[(uint)bVar8 + param_1 * 3];
  *(undefined4 *)(&DAT_005657e0 + param_2 * 4) = 0xffffffff;
  bVar9 = *pbVar18;
  bVar19 = 0;
  pbVar16 = &DAT_00566140 + param_2 * 0x2360;
  ac = ac & 0xfffffff8 | (uint)(bVar9 == 0) << 1;
  if (((byte)(ac >> 1) & 1) != 1) {
    pbVar21 = &DAT_00566141 + param_2 * 0x2360;
    do {
      pbVar18 = pbVar18 + 1;
      bVar10 = *pbVar18;
      uVar17 = (uint)bVar10;
      pbVar21[6] = (byte)g14;
      bVar11 = *(byte *)((int)WORD_ARRAY_000b8340 + uVar17);
      pbVar21[9] = 2;
      pbVar21[8] = (byte)g14;
      dVar25 = (&DWORD_000b7f90)[uVar17 * 2];
      dVar14 = DWORD_ARRAY_000b7f94[uVar17 * 2];
      pbVar21[10] = (byte)g14;
      pbVar21[4] = bVar11;
      bVar11 = BYTE_ARRAY_000b8080[uVar17];
      *(dword *)(pbVar21 + 0xf) = dVar25;
      *pbVar21 = bVar11;
      bVar11 = BYTE_ARRAY_000b8160[uVar17];
      *pbVar16 = bVar10;
      pbVar21[1] = bVar11;
      wVar3 = WORD_ARRAY_000b80a0[uVar17];
      bVar13 = 0;
      pbVar21[5] = (byte)dVar14;
      bVar10 = BYTE_ARRAY_000b81a0[uVar17];
      *(int *)(pbVar21 + 0xb) = (int)(short)wVar3;
      bVar11 = BYTE_ARRAY_000b8180[uVar17];
      bVar12 = *(byte *)((int)WORD_ARRAY_000b8360 + uVar17);
      pbVar21[3] = bVar10;
      pbVar21[2] = bVar11;
      pbVar21[7] = bVar12;
      do {
        uVar26 = (uint)bVar13;
        *(undefined4 *)(pbVar16 + uVar26 * 4 + 0x14) = g14;
        *(undefined4 *)(pbVar16 + uVar26 * 4 + 0x1c) = g14;
        *(undefined4 *)(pbVar16 + uVar26 * 4 + 0x24) = g14;
        iVar28 = uVar17 * 4 + uVar26 * 2;
        uVar4 = *(ushort *)((int)DWORD_ARRAY_000b87c0 + iVar28);
        bVar13 = bVar13 + 1;
        *(undefined4 *)(pbVar16 + uVar26 * 4 + 0x2c) = g14;
        uVar5 = *(ushort *)((int)DWORD_ARRAY_000b8840 + iVar28);
        uVar6 = *(ushort *)((int)DWORD_ARRAY_000b88c0 + iVar28);
        *(uint *)(pbVar16 + uVar26 * 4 + 0x34) = (uint)uVar4;
        uVar4 = *(ushort *)((int)DWORD_ARRAY_000b85c0 + iVar28);
        uVar7 = *(ushort *)((int)DWORD_ARRAY_000b8640 + iVar28);
        *(uint *)(pbVar16 + uVar26 * 4 + 0x3c) = (uint)uVar5;
        uVar24 = ac & 0xfffffff8 | (uint)(bVar13 == 1) << 1;
        ac = uVar24 | bVar13 == 0;
        *(uint *)(pbVar16 + uVar26 * 4 + 0x44) = (uint)uVar6;
        *(uint *)(pbVar16 + uVar26 * 4 + 0x4c) = (uint)uVar4;
        *(uint *)(pbVar16 + uVar26 * 4 + 0x54) = (uint)uVar7;
      } while (((byte)ac & 1 | (byte)(uVar24 >> 1) & 1) == 1);
      fVar22 = FLOAT_ARRAY_000b8254[uVar17 * 2];
      *(float *)(pbVar21 + 0x5f) = (&FLOAT_000b8250)[uVar17 * 2];
      fVar15 = FLOAT_ARRAY_000b8540[uVar17];
      pbVar21[99] = 0;
      pbVar21[100] = 0;
      pbVar21[0x65] = 0;
      pbVar21[0x66] = 0;
      *(float *)(pbVar21 + 0x67) = fVar15;
      fVar15 = FLOAT_ARRAY_000b80e0[uVar17];
      bVar10 = 0;
      pbVar21[0x6b] = 0;
      pbVar21[0x6c] = 0;
      pbVar21[0x6d] = 0;
      pbVar21[0x6e] = 0;
      *(float *)(pbVar21 + 0x5b) = fVar22;
      *(float *)(pbVar21 + 0x6f) = fVar15;
      uVar24 = ac;
      do {
        ac = uVar24;
        uVar27 = (uint)bVar10;
        bVar10 = bVar10 + 1;
        pbVar29 = pbVar16 + uVar27 * 4 + 0x74;
        pbVar29[0] = 0;
        pbVar29[1] = 0;
        pbVar29[2] = 0;
        pbVar29[3] = 0;
        uVar26 = ac & 0xfffffff8 | (uint)(bVar10 < 2) << 2;
        uVar24 = uVar26 | (uint)(bVar10 == 2) << 1;
        pbVar29 = pbVar16 + uVar27 * 4 + 0x80;
        pbVar29[0] = 0;
        pbVar29[1] = 0;
        pbVar29[2] = 0;
        pbVar29[3] = 0;
      } while (((byte)(uVar24 >> 1) & 1 | (byte)(uVar26 >> 2) & 1) == 1);
      pbVar29 = pbVar16 + 0x8c;
      bVar10 = 0;
      if (*pbVar21 != 0) {
        do {
          iVar28 = 0;
          do {
            if (pbVar21[7] == 0) {
              *(undefined4 *)(pbVar29 + iVar28 + 4) = g14;
            }
            else {
              pbVar1 = pbVar29 + iVar28 + 4;
              pbVar1[0] = 0;
              pbVar1[1] = 0x80;
              pbVar1[2] = 0;
              pbVar1[3] = 0;
            }
            *(undefined4 *)(pbVar29 + iVar28 + 8) = g14;
            if (pbVar21[7] == 0) {
              *(undefined4 *)(pbVar29 + iVar28 + 0xc) = g14;
            }
            else {
              pbVar1 = pbVar29 + iVar28 + 0xc;
              pbVar1[0] = 0;
              pbVar1[1] = 0x80;
              pbVar1[2] = 0;
              pbVar1[3] = 0;
            }
            *(undefined4 *)(pbVar29 + iVar28 + 0x10) = g14;
            if (pbVar21[7] == 0) {
              *(undefined4 *)(pbVar29 + iVar28 + 0x14) = g14;
            }
            else {
              pbVar1 = pbVar29 + iVar28 + 0x14;
              pbVar1[0] = 0;
              pbVar1[1] = 0x80;
              pbVar1[2] = 0;
              pbVar1[3] = 0;
            }
            *(undefined4 *)(pbVar29 + iVar28 + 0x18) = g14;
            if (pbVar21[7] == 0) {
              *(undefined4 *)(pbVar29 + iVar28 + 0x1c) = g14;
            }
            else {
              pbVar1 = pbVar29 + iVar28 + 0x1c;
              pbVar1[0] = 0;
              pbVar1[1] = 0x80;
              pbVar1[2] = 0;
              pbVar1[3] = 0;
            }
            *(undefined4 *)(pbVar29 + iVar28 + 0x20) = g14;
            iVar28 = iVar28 + 0x20;
          } while (iVar28 < 0x39);
          *(undefined4 *)(pbVar29 + 0x44) = g14;
          *(undefined4 *)(pbVar29 + 0x4c) = g14;
          *(undefined4 *)(pbVar29 + 0x54) = g14;
          *(undefined4 *)(pbVar29 + 0x5c) = g14;
          puVar30 = PTR_ARRAY_000baef0[uVar17 * 2];
          puVar20 = PTR_ARRAY_000bbe00[uVar17 * 2];
          *(undefined **)(pbVar29 + 100) = PTR_ARRAY_000b9fe0[uVar17 * 2];
          *(undefined **)(pbVar29 + 0x6c) = puVar30;
          *(undefined **)(pbVar29 + 0x74) = puVar20;
          iVar28 = uVar17 * 2 + 1;
          puVar30 = PTR_ARRAY_000b9fe0[iVar28];
          pbVar1 = (byte *)((int)DWORD_ARRAY_000b83a0 + (uint)bVar10 * 2 + uVar17 * 0xe);
          puVar31 = PTR_ARRAY_000baef0[iVar28];
          *pbVar29 = *pbVar1;
          puVar20 = PTR_ARRAY_000bbe00[iVar28];
          pbVar29[1] = pbVar1[1];
          *(undefined4 *)(pbVar29 + 0x48) = g14;
          *(undefined4 *)(pbVar29 + 0x50) = g14;
          *(undefined4 *)(pbVar29 + 0x58) = g14;
          *(undefined4 *)(pbVar29 + 0x60) = g14;
          *(undefined **)(pbVar29 + 0x68) = puVar30;
          *(undefined **)(pbVar29 + 0x70) = puVar31;
          *(undefined **)(pbVar29 + 0x78) = puVar20;
          bVar10 = bVar10 + 1;
          pbVar29 = pbVar29 + 0x7c;
        } while (bVar10 < *pbVar21);
      }
      bVar19 = bVar19 + 1;
      ac = ac & 0xfffffff8 | (uint)(bVar19 < bVar9);
      pbVar21 = pbVar21 + 0x46c;
      pbVar16 = pbVar16 + 0x46c;
    } while (((byte)ac & 1) == 1);
  }
  *(undefined4 *)(&DAT_005657e8 + param_2 * 4) = g14;
  *(undefined4 *)(&DAT_005657f0 + param_2 * 4) = g14;
  *(undefined4 *)(&DAT_005657f8 + param_2 * 4) = g14;
  *(undefined4 *)(&DAT_00565800 + param_2 * 4) = g14;
  *(undefined4 *)(&DAT_00565808 + param_2 * 4) = 0;
  *(undefined4 *)(&DAT_00565810 + param_2 * 4) = 0;
  *(undefined4 *)(&DAT_00565818 + param_2 * 4) = g14;
  iVar28 = (uint)bVar8 * 2;
  g13 = 0;
  *(undefined4 *)(&DAT_00565820 + param_2 * 4) = g14;
  bVar8 = (&BYTE_000b8398)[iVar28];
  *(undefined4 *)(&DAT_00565828 + param_2 * 4) = g14;
  bVar9 = BYTE_ARRAY_000b8399[iVar28];
  *(undefined4 *)(&DAT_00565830 + param_2 * 4) = 0;
  *(uint *)(&DAT_00565838 + param_2 * 4) = (uint)bVar8;
  *(uint *)(&DAT_00565840 + param_2 * 4) = (uint)bVar9;
  do {
    puVar2 = (undefined4 *)(&DAT_00565850 + (g13 & 0xff) * 0x138 + param_2 * 0x270);
    *puVar2 = g14;
    puVar2[4] = g14;
    puVar2[3] = g14;
    puVar2[2] = g14;
    puVar2[1] = g14;
    iVar28 = 0x20;
    puVar2[5] = g14;
    puVar2[6] = g14;
    puVar2[7] = g14;
    uVar17 = ac;
    do {
      ac = uVar17;
      puVar23 = (undefined4 *)((int)puVar2 + iVar28);
      puVar23[3] = g14;
      puVar23[2] = g14;
      puVar23[1] = g14;
      *puVar23 = g14;
      puVar23[4] = g14;
      puVar23[5] = g14;
      puVar23[6] = g14;
      puVar23 = (undefined4 *)((int)puVar2 + iVar28 + 0x1c);
      puVar23[3] = g14;
      puVar23[2] = g14;
      puVar23[1] = g14;
      *puVar23 = g14;
      iVar28 = iVar28 + 0x38;
      puVar23[4] = g14;
      puVar23[5] = g14;
      uVar24 = ac & 0xfffffff8 | (uint)(iVar28 < 0x11c) << 2;
      uVar17 = uVar24 | (uint)(iVar28 == 0x11c) << 1;
      puVar23[6] = g14;
    } while (((byte)(uVar17 >> 1) & 1 | (byte)(uVar24 >> 2) & 1) == 1);
    uVar24 = g13 & 0xff;
    g13 = g13 + 1;
    uVar26 = g13 & 0xff;
    uVar17 = ac & 0xfffffff8 | (uint)(1 < uVar26) << 2 | (uint)(uVar26 == 1) << 1;
    ac = uVar17 | uVar26 == 0;
    *(undefined4 *)(&DAT_00565d30 + uVar24 * 4 + param_2 * 8) = g14;
  } while (((byte)ac & 1 | (byte)(uVar17 >> 1) & 1) == 1);
  fp = unaff_pfp;
  return;
}

