
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0001ca80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  float10 fVar2;
  DOA_ACTCODE_COMMON DVar3;
  byte bVar4;
  uint uVar5;
  undefined8 uVar6;
  DOA_ARCADE_PLAYER *pDVar7;
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined1 in_register_0000000c [52];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar11 [64];
  undefined1 auVar10 [64];
  undefined1 auVar13 [64];
  undefined1 auVar12 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  uint16_t uVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [64];
  
  uVar6 = CONCAT44(auStackX_0,unaff_pfp);
  auVar8._8_4_ = unaff_retaddr;
  auVar8._0_8_ = uVar6;
  auVar8._12_52_ = in_register_0000000c;
  auVar10._0_16_ = auVar8._0_16_;
  auVar10._20_44_ = in_register_0000000c._8_44_;
  if (g_roundWinner == 0) {
    pDVar7 = &g_player1;
    uVar19 = (_ButtonCoinTestServiceStart & 0xf000) >> 0xc;
    uVar24 = (_ButtonCoinTestServiceStart_0054fcd4 & 0x300) >> 8;
    uVar23 = (_ButtonCoinTestServiceStart_0054fcd4 & 0x400) >> 10;
  }
  else {
    pDVar7 = &g_player2;
    uVar19 = (_ButtonCoinTestServiceStart & 0xf00000) >> 0x14;
    uVar24 = (_ButtonCoinTestServiceStart_0054fcd4 & 0x30000) >> 0x10;
    uVar23 = (_ButtonCoinTestServiceStart_0054fcd4 & 0x40000) >> 0x12;
  }
  auVar10._16_4_ = pDVar7;
  uVar5 = ac & 0xfffffff8;
  uVar1 = uVar5 | (uint)(0 < DAT_00557eb8) << 2 | (uint)(DAT_00557eb8 == 0) << 1;
  ac = uVar1 | DAT_00557eb8 < 0;
  auVar9._12_52_ = auVar10._12_52_;
  if (((byte)(uVar1 >> 1) & 1) != 1) {
    auVar9._8_4_ = 0x1cb18;
    auVar9._0_8_ = uVar6;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar9;
    FUN_0001dc90();
    return;
  }
  fVar2 = (float10)'\x01';
  uVar20 = (undefined4)((unkuint10)fVar2 >> 0x20);
  uVar21 = CONCAT22((short)((uint)param_4 >> 0x10),(short)((unkuint10)fVar2 >> 0x40));
  pDVar7->y_position = SUB104(fVar2,0);
  if ((uVar24 != 0) && (DAT_00557d74 != 0xff)) {
    uVar23 = uVar5 | (uint)('\0' < (char)(&DAT_00095690)[DAT_00557d74]) << 2;
    ac = uVar23 | (char)(&DAT_00095690)[DAT_00557d74] < '\0';
    if (((byte)ac & 1 | (byte)(uVar23 >> 2) & 1) != 1) {
      while (uVar23 = ac & 0xfffffff8 | (uint)(2 < DAT_00557d90) << 2 |
                      (uint)(DAT_00557d90 == 2) << 1, ac = uVar23 | DAT_00557d90 < 2,
            ((byte)ac & 1 | (byte)(uVar23 >> 1) & 1) == 1) {
        (&DAT_00557d88)[DAT_00557d90] = 0x20;
        DAT_00557d90 = DAT_00557d90 + 1;
      }
      DAT_00557d70 = 1;
      fp = (undefined1 (*) [64])unaff_pfp;
      return;
    }
    if ((&DAT_00095690)[DAT_00557d74] == '\x01') {
      uVar23 = uVar5 | (uint)(0 < DAT_00557d90) << 2 | (uint)(DAT_00557d90 == 0) << 1;
      ac = uVar23 | DAT_00557d90 < 0;
      if (((byte)(uVar23 >> 1) & 1) != 1) {
        DAT_00557d90 = DAT_00557d90 + -1;
        (&DAT_00557d88)[DAT_00557d90] = 0x20;
        auVar11._8_4_ = 0x1cbd0;
        auVar11._0_8_ = uVar6;
        auVar11._12_52_ = auVar9._12_52_;
        *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar11;
        auVar10._8_56_ = auVar11._8_56_;
        auVar10._4_4_ = 0;
        auVar10._0_4_ = fp;
        Sound_Request(SE_NAME_ENT);
        iVar22 = (&DAT_00557e18)[DAT_00557d90 * 0x14];
        uVar23 = ac & 0xfffffff8 | (uint)(0 < iVar22) << 2 | (uint)(iVar22 == 0) << 1;
        ac = uVar23 | iVar22 < 0;
        if (((byte)(uVar23 >> 1) & 1) != 1) {
          (&DAT_00557e18)[DAT_00557d90 * 0x14] = g14;
        }
      }
      fp = (undefined1 (*) [64])auVar10._0_4_;
      return;
    }
    uVar5 = uVar5 | (uint)(2 < DAT_00557d90) << 2;
    ac = uVar5 | (uint)(DAT_00557d90 == 2) << 1 | (uint)(DAT_00557d90 < 2);
    if (((byte)(uVar5 >> 2) & 1) != 1) {
      auVar13._8_4_ = 0x1cc10;
      auVar13._0_8_ = uVar6;
      auVar13._12_52_ = auVar9._12_52_;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar13;
      auVar12._8_56_ = auVar13._8_56_;
      auVar12._4_4_ = auStack_40;
      auVar12._0_4_ = fp;
      FUN_0001d740();
      DAT_00557d90 = DAT_00557d90 + 1;
      uVar23 = ac & 0xfffffff8 | (uint)(2 < DAT_00557d90) << 2 | (uint)(DAT_00557d90 == 2) << 1;
      ac = uVar23 | DAT_00557d90 < 2;
      fp = (undefined1 (*) [64])register0x00000004;
      if (((byte)ac & 1 | (byte)(uVar23 >> 1) & 1) != 1) {
        fp = &auStack_40;
        auStackX_0._12_52_ = auVar12._12_52_;
        auStackX_0._0_8_ = auVar12._0_8_;
        auStackX_0._8_4_ = 0x1cc2c;
        auVar12._8_56_ = auStackX_0._8_56_;
        auVar12._4_4_ = &stack0x00000080;
        auVar12._0_4_ = auStackX_0;
        FUN_0001dbe0();
      }
      pDVar7->danger_flag = '\x01';
      auVar14._12_52_ = auVar12._12_52_;
      auVar14._0_8_ = auVar12._0_8_;
      auVar14._8_4_ = 0x1cc3c;
      *fp = auVar14;
      auVar10._8_56_ = auVar14._8_56_;
      auVar10._4_4_ = 0;
      auVar10._0_4_ = fp;
      FUN_0001d480(0,1,uVar20,uVar21);
      DAT_00557da0 = g14;
      DAT_00557d9c = g14;
      DAT_00557da4 = SUB104((float10)SUB104((float10)(DAT_00557d74 % DAT_00557d74),0),0);
      DAT_00557da8 = 0x3fc00000;
      DAT_00557dac = SUB104((float10)SUB104((float10)(DAT_00557d74 / 7),0),0);
    }
    fp = (undefined1 (*) [64])auVar10._0_4_;
    return;
  }
  if (uVar23 != 0) {
    uVar23 = uVar5 | (uint)(0 < DAT_00557d90) << 2 | (uint)(DAT_00557d90 == 0) << 1;
    ac = uVar23 | DAT_00557d90 < 0;
    if (((byte)(uVar23 >> 1) & 1) != 1) {
      DAT_00557d90 = DAT_00557d90 + -1;
      (&DAT_00557d88)[DAT_00557d90] = 0x20;
      auVar15._8_4_ = 0x1cd0c;
      auVar15._0_8_ = uVar6;
      auVar15._12_52_ = auVar9._12_52_;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar15;
      auVar10._8_56_ = auVar15._8_56_;
      auVar10._4_4_ = 0;
      auVar10._0_4_ = fp;
      Sound_Request(SE_NAME_ENT);
      iVar22 = (&DAT_00557e18)[DAT_00557d90 * 0x14];
      uVar23 = ac & 0xfffffff8 | (uint)(0 < iVar22) << 2 | (uint)(iVar22 == 0) << 1;
      ac = uVar23 | iVar22 < 0;
      if (((byte)(uVar23 >> 1) & 1) != 1) {
        (&DAT_00557e18)[DAT_00557d90 * 0x14] = g14;
      }
    }
    fp = (undefined1 (*) [64])auVar10._0_4_;
    return;
  }
  ac = uVar5;
  if (*(ushort *)(&DAT_00095670 + uVar19 * 2) != 0xffff) {
    iVar22 = pDVar7->facing_direction -
             (int)(float10)SUB104((float10)*(ushort *)(&DAT_00095670 + uVar19 * 2),0);
    uVar23 = iVar22 + 0xcccU & 0xffff;
    ac = uVar5 | (uint)(uVar23 < 0x1997) << 2;
    if (((uVar23 == 0x1997 | (byte)(ac >> 2) & 1) == 1) ||
       (ac = uVar5, ((int)&DWORD_00008ccc + iVar22 & 0xffffU) < 0x1998)) {
      uVar23 = (uint)(float10)SUB104((float10)*(ushort *)(&DAT_00095670 + uVar19 * 2),0);
    }
    else {
      uVar23 = pDVar7->facing_direction -
               (int)(float10)SUB104((float10)*(ushort *)(&DAT_00095670 + uVar19 * 2),0);
      if ((int)uVar23 < 0) {
        uVar23 = (pDVar7->facing_direction -
                 (int)(float10)SUB104((float10)*(ushort *)(&DAT_00095670 + uVar19 * 2),0)) + 0x10000
        ;
      }
      if ((uVar23 & 0xffff) < 0x8000) {
        uVar23 = pDVar7->facing_direction - 0xccc;
      }
      else {
        uVar23 = pDVar7->facing_direction + 0xccc;
      }
      uVar23 = uVar23 & 0xffff;
    }
    pDVar7->facing_direction = uVar23;
  }
  uVar23 = ac;
  if (uVar19 == 0) {
    ac = ac & 0xfffffff8 | (uint)(pDVar7->action_code != CMD_STAND) << 2 |
         (uint)(pDVar7->action_code == CMD_STAND) << 1;
    if (((byte)(ac >> 1) & 1) != 1) {
      pDVar7->action_code = (DOA_ACTSTATE)g14;
      pDVar7->action_state = (DOA_ACTSTATE)g14;
      pDVar7->action_flag = (DOA_ACTSTATE)g14;
      uVar23 = (uint)g_roundWinner;
      auVar17._8_4_ = 0x1cf40;
      auVar17._0_8_ = uVar6;
      auVar17._12_52_ = auVar9._12_52_;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar17;
      auVar10._8_56_ = auVar17._8_56_;
      auVar10._4_4_ = 0;
      auVar10._0_4_ = fp;
      uVar18 = Player_ResolveAnimeIdFromActCode(uVar23);
      pDVar7->animation_id = uVar18;
      pDVar7->animation_request = '\x01';
    }
    fp = (undefined1 (*) [64])auVar10._0_4_;
    return;
  }
  DVar3 = pDVar7->action_code;
  uVar19 = ac & 0xfffffff8 | (uint)(CMD_RUN < DVar3) << 2;
  ac = uVar19 | (uint)(DVar3 == CMD_RUN) << 1 | (uint)(DVar3 < CMD_RUN);
  if (((byte)ac & 1 | (byte)(uVar19 >> 2) & 1) != 1) {
    bVar4 = pDVar7->animation_flag;
    uVar23 = uVar23 & 0xfffffff8 | (uint)(1 < bVar4) << 2;
    ac = uVar23 | (uint)(bVar4 == 1) << 1 | (uint)(bVar4 == 0);
    if (((byte)ac & 1 | (byte)(uVar23 >> 2) & 1) == 1) goto LAB_0001cf1c;
  }
  pDVar7->animation_flag = (DOA_ACTSTATE)g14;
  pDVar7->action_code = CMD_RUN;
  pDVar7->action_state = (DOA_ACTSTATE)g14;
  pDVar7->action_flag = (DOA_ACTSTATE)g14;
  uVar23 = (uint)g_roundWinner;
  auVar16._8_4_ = 0x1cf10;
  auVar16._0_8_ = uVar6;
  auVar16._12_52_ = auVar9._12_52_;
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar16;
  auVar10._8_56_ = auVar16._8_56_;
  auVar10._4_4_ = 0;
  auVar10._0_4_ = fp;
  uVar18 = Player_ResolveAnimeIdFromActCode(uVar23);
  pDVar7->animation_id = uVar18;
  pDVar7->animation_request = '\x01';
LAB_0001cf1c:
  fp = (undefined1 (*) [64])auVar10._0_4_;
  return;
}

