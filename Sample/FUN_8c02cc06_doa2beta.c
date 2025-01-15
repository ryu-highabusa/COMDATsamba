
void FUN_8c02cc06(void)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte *pbVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined2 *puVar8;
  undefined *puVar9;
  ushort uVar10;
  ushort uVar11;
  short sVar12;
  short sVar13;
  int iVar14;
  uint uVar15;
  char *pcVar16;
  undefined *puVar17;
  uint uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  
  puVar20 = PTR_DAT_8c02cccc;
  puVar21 = PTR_DAT_8c02ccc8;
  puVar17 = PTR_DAT_8c02ccc4;
  puVar4 = PTR_timersetting_current_mode__8c02cce8;
  *puVar17 = 1;
  *puVar21 = 0;
  *puVar20 = 0;
  puVar21 = PTR_DAT_8c02ccd4;
  puVar20 = PTR_DAT_8c02ccd8;
  puVar17 = PTR_DAT_8c02ccd0;
  puVar3 = PTR_CHAR__var0b_8c02cce4;
  pbVar5 = PTR_DAT_8c02ccec;
  puVar6 = PTR_HIT_POINT_VALUES_8c02ccf0;
  puVar19 = PTR_DAT_8c02cce0;
  puVar8 = (undefined2 *)PTR_HIT_POINT_CURRENT_SETTING_8c02ccf8;
  puVar9 = PTR_DAT_8c02ccfc;
  puVar2 = PTR_DAT_8c02ccdc;
  puVar7 = PTR_Unlock_State_Flag_8c02ccf4;
  *puVar17 = 0;
  *puVar21 = 0;
  *puVar20 = 0;
  pcVar16 = PTR_BYTE_8c02cd00;
  cVar1 = *pcVar16;
  if (cVar1 == '\x02') {
    *puVar9 = 1;
    pcVar16 = PTR_BYTE_8c02ce04;
    puVar9[1] = 1;
    if (*pcVar16 == '\0') {
      puVar17 = PTR_DIFFICULT_MAX3__8c02ce08;
      *puVar17 = puVar7[6];
      *pbVar5 = 0;
      *puVar4 = 99;
      *puVar8 = *(undefined2 *)(puVar6 + 8);
      uVar10 = USHORT_8c02cdfa;
      puVar8[1] = *(undefined2 *)(puVar6 + 8);
      if (puVar7[(short)uVar10] == '\x05') {
        *puVar9 = 0;
        puVar9[1] = 0;
      }
      uVar10 = USHORT_8c02cdfc;
      pcVar16 = PTR_MANCOM_P1_8c02ce10;
      puVar17 = PTR_BYTE_8c02ce0c;
      *puVar19 = puVar17[(byte)puVar7[(short)uVar10]];
      puVar17 = PTR_CHAR_P1_var12_8c02ce14;
      iVar14 = (uint)(*pcVar16 != '\x01') * 10;
      *puVar3 = puVar17[iVar14];
      puVar17 = PTR_DAT_8c02ce18;
      puVar3[1] = puVar17[iVar14];
      *puVar2 = 1;
    }
    else {
      puVar17 = PTR_timer_values_8c02ce1c;
      *pbVar5 = puVar7[0x10];
      uVar10 = USHORT_8c02cdfe;
      *puVar4 = puVar17[*pbVar5];
      uVar11 = USHORT_8c02cdfe;
      *puVar8 = *(undefined2 *)(puVar6 + (uint)(byte)puVar7[(short)uVar10] * 2);
      puVar8[1] = *(undefined2 *)(puVar6 + (uint)(byte)puVar7[(short)uVar11] * 2);
      uVar10 = USHORT_8c02cdfe;
      if (puVar7[(short)uVar10] == '\x05') {
        *puVar9 = 0;
        puVar9[1] = 0;
      }
      uVar10 = USHORT_8c02ce00;
      puVar17 = PTR_BYTE_8c02ce0c;
      *puVar19 = puVar17[(byte)puVar7[(short)uVar10]];
      *puVar2 = 0;
    }
    puVar17 = PTR_DAT_8c02ce20;
    uVar15 = 0;
    do {
      uVar10 = USHORT_8c02ce02;
      uVar11 = USHORT_8c02ce02;
      *(undefined4 *)(puVar17 + uVar15 + 0x34) =
           *(undefined4 *)(puVar7 + uVar15 + (int)(short)uVar10 + 0x34);
      uVar18 = uVar15 + 8;
      *(undefined4 *)(puVar17 + uVar15 + 0x38) =
           *(undefined4 *)(puVar7 + uVar15 + (int)(short)uVar11 + 0x38);
      uVar15 = uVar18;
    } while (uVar18 < 0x1d);
  }
  else {
    if (cVar1 == '\x03') {
      *puVar9 = 1;
      pcVar16 = PTR_BYTE_8c02cf40;
      puVar9[1] = 1;
      if (*pcVar16 == '\0') {
        puVar17 = PTR_DIFFICULT_MAX3__8c02cf44;
        *puVar17 = puVar7[7];
        puVar17 = PTR_timer_values_8c02cf48;
        *pbVar5 = puVar7[0x12];
        sVar12 = DAT_8c02cf36;
        *puVar4 = puVar17[*pbVar5];
        sVar13 = DAT_8c02cf36;
        *puVar8 = *(undefined2 *)(puVar6 + (uint)(byte)puVar7[sVar12] * 2);
        puVar8[1] = *(undefined2 *)(puVar6 + (uint)(byte)puVar7[sVar13] * 2);
        sVar12 = DAT_8c02cf36;
        if (puVar7[sVar12] == '\x05') {
          *puVar9 = 0;
          puVar9[1] = 0;
        }
        sVar12 = DAT_8c02cf38;
        pcVar16 = PTR_MANCOM_P1_8c02cf50;
        puVar17 = PTR_BYTE_8c02cf4c;
        *puVar19 = puVar17[(byte)puVar7[sVar12]];
        cVar1 = *pcVar16;
        puVar17 = PTR_CHAR_P1_var12_8c02cf54;
        iVar14 = (uint)(cVar1 != '\x01') * 10;
        *puVar3 = puVar17[iVar14];
        puVar17 = PTR_DAT_8c02cf58;
        puVar3[1] = puVar17[iVar14];
        puVar3[2] = cVar1 != '\x01';
      }
      else {
        puVar17 = PTR_timer_values_8c02cf48;
        *pbVar5 = puVar7[0x10];
        sVar12 = DAT_8c02cf3a;
        *puVar4 = puVar17[*pbVar5];
        sVar13 = DAT_8c02cf3a;
        *puVar8 = *(undefined2 *)(puVar6 + (uint)(byte)puVar7[sVar12] * 2);
        puVar8[1] = *(undefined2 *)(puVar6 + (uint)(byte)puVar7[sVar13] * 2);
        sVar12 = DAT_8c02cf3a;
        if (puVar7[sVar12] == '\x05') {
          *puVar9 = 0;
          puVar9[1] = 0;
        }
        sVar12 = DAT_8c02cf3c;
        puVar17 = PTR_BYTE_8c02cf4c;
        *puVar19 = puVar17[(byte)puVar7[sVar12]];
      }
      puVar17 = PTR_DAT_8c02cf5c;
      uVar15 = 0;
      do {
        sVar12 = DAT_8c02cf3e;
        *(undefined4 *)(puVar17 + uVar15) = *(undefined4 *)(puVar7 + uVar15 + (int)sVar12);
        sVar12 = DAT_8c02cf3e;
        *(undefined4 *)(puVar17 + uVar15 + 4) = *(undefined4 *)(puVar7 + uVar15 + 4 + (int)sVar12);
        sVar12 = DAT_8c02cf3e;
        *(undefined4 *)(puVar17 + uVar15 + 8) = *(undefined4 *)(puVar7 + uVar15 + 8 + (int)sVar12);
        uVar15 = uVar15 + 0xc;
      } while (uVar15 < 0x21);
    }
    else if (cVar1 == '\t') {
      *puVar9 = 1;
      pcVar16 = PTR_BYTE_8c02d01c;
      puVar9[1] = 1;
      if (*pcVar16 == '\0') {
        puVar17 = PTR_DIFFICULT_MAX3__8c02d020;
        *puVar17 = puVar7[8];
        sVar12 = DAT_8c02d018;
        *pbVar5 = 0;
        *puVar4 = 99;
        sVar13 = DAT_8c02d018;
        *puVar8 = *(undefined2 *)(puVar6 + (uint)(byte)puVar7[sVar12] * 2);
        puVar8[1] = *(undefined2 *)(puVar6 + (uint)(byte)puVar7[sVar13] * 2);
        sVar12 = DAT_8c02d018;
        if (puVar7[sVar12] == '\x05') {
          *puVar9 = 0;
          puVar9[1] = 0;
        }
        pcVar16 = PTR_MANCOM_P1_8c02d024;
        sVar12 = DAT_8c02d01a;
        puVar17 = PTR_BYTE_8c02d028;
        *puVar19 = puVar17[(byte)puVar7[sVar12]];
        cVar1 = *pcVar16;
        if (cVar1 != '\x01') {
          pcVar16 = pcVar16 + 0x68;
        }
        pcVar16[0x61] = pcVar16[0x61] & 1;
        puVar17 = PTR_CHAR_P1_var11_8c02d02c;
        iVar14 = (uint)(cVar1 != '\x01') * 10;
        puVar21 = PTR_WORD_8c02d030;
        puVar20 = PTR_StageOrder_____8c02d034;
        pcVar16[1] = puVar17[iVar14];
        pcVar16[2] = puVar21[iVar14];
        puVar17 = PTR_BYTE_8c02d038;
        puVar21 = puVar17 + 7;
        for (; puVar17 <= puVar21; puVar17 = puVar17 + 2) {
          puVar19 = puVar20 + 1;
          *puVar17 = *puVar20;
          puVar20 = puVar20 + 2;
          puVar17[1] = *puVar19;
        }
      }
      else {
        sVar12 = DAT_8c02d154;
        *pbVar5 = 0;
        *puVar4 = 99;
        sVar13 = DAT_8c02d154;
        *puVar8 = *(undefined2 *)(puVar6 + (uint)(byte)puVar7[sVar12] * 2);
        puVar8[1] = *(undefined2 *)(puVar6 + (uint)(byte)puVar7[sVar13] * 2);
        sVar12 = DAT_8c02d154;
        if (puVar7[sVar12] == '\x05') {
          *puVar9 = 0;
          puVar9[1] = 0;
        }
        sVar12 = DAT_8c02d156;
        puVar17 = PTR_BYTE_8c02d15c;
        *puVar19 = puVar17[(byte)puVar7[sVar12]];
      }
      puVar17 = PTR_DAT_8c02d160;
      *puVar4 = 99;
      uVar15 = 0;
      do {
        sVar12 = DAT_8c02d158;
        *(undefined4 *)(puVar17 + uVar15 + 0x68) =
             *(undefined4 *)(puVar7 + uVar15 + (int)sVar12 + 0x68);
        sVar12 = DAT_8c02d158;
        sVar13 = DAT_8c02d158;
        *(undefined4 *)(puVar17 + uVar15 + 0x6c) =
             *(undefined4 *)(puVar7 + uVar15 + (int)sVar12 + 0x6c);
        uVar18 = uVar15 + 0xc;
        *(undefined4 *)(puVar17 + uVar15 + 0x70) =
             *(undefined4 *)(puVar7 + uVar15 + (int)sVar13 + 0x70);
        uVar15 = uVar18;
      } while (uVar18 < 0x15);
    }
    else {
      if (cVar1 != '\x05') {
        if (cVar1 != '\0') {
          return;
        }
        *puVar9 = 0;
        puVar9[1] = 0;
        sVar12 = DAT_8c02d2ba;
        puVar17 = PTR_DIFFICULT_MAX3__8c02d2c8;
        sVar13 = DAT_8c02d2ba;
        *puVar8 = *(undefined2 *)(puVar6 + (uint)(byte)puVar7[sVar12] * 2);
        puVar8[1] = *(undefined2 *)(puVar6 + (uint)(byte)puVar7[sVar13] * 2);
        *puVar17 = 3;
        *puVar19 = 1;
        return;
      }
      *puVar9 = 1;
      pcVar16 = PTR_BYTE_8c02d164;
      puVar9[1] = 1;
      if (*pcVar16 == '\0') {
        puVar17 = PTR_DIFFICULT_MAX3__8c02d168;
        *puVar17 = puVar7[9];
        puVar17 = PTR_timer_values_8c02d16c;
        *pbVar5 = puVar7[0x13];
        sVar12 = DAT_8c02d15a;
        *puVar4 = puVar17[*pbVar5];
        sVar13 = DAT_8c02d15a;
        *puVar8 = *(undefined2 *)(puVar6 + (uint)(byte)puVar7[sVar12] * 2);
        puVar8[1] = *(undefined2 *)(puVar6 + (uint)(byte)puVar7[sVar13] * 2);
        sVar12 = DAT_8c02d15a;
        if (puVar7[sVar12] == '\x05') {
          *puVar9 = 0;
          puVar9[1] = 0;
        }
        pcVar16 = PTR_MANCOM_P1_8c02d170;
        *puVar19 = 1;
        cVar1 = *pcVar16;
        puVar17 = PTR_CHAR_P1_var12_8c02d174;
        iVar14 = (uint)(cVar1 != '\x01') * 10;
        puVar21 = PTR_DAT_8c02d178;
        *puVar3 = puVar17[iVar14];
        puVar3[1] = puVar21[iVar14];
        puVar3[2] = cVar1 != '\x01';
      }
      else {
        puVar17 = PTR_timer_values_8c02d2c0;
        *pbVar5 = puVar7[0x10];
        sVar12 = DAT_8c02d2ba;
        *puVar4 = puVar17[*pbVar5];
        sVar13 = DAT_8c02d2ba;
        *puVar8 = *(undefined2 *)(puVar6 + (uint)(byte)puVar7[sVar12] * 2);
        puVar8[1] = *(undefined2 *)(puVar6 + (uint)(byte)puVar7[sVar13] * 2);
        sVar12 = DAT_8c02d2ba;
        if (puVar7[sVar12] == '\x05') {
          *puVar9 = 0;
          puVar9[1] = 0;
        }
        sVar12 = DAT_8c02d2bc;
        puVar17 = PTR_BYTE_8c02d2c4;
        *puVar19 = puVar17[(byte)puVar7[sVar12]];
        *puVar2 = 0;
      }
    }
    *puVar2 = 0;
  }
  return;
}

