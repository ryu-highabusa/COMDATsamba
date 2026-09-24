
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00041b00(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined1 (*pauVar5) [64];
  char cVar6;
  DOA_ACTSTATE DVar7;
  uint16_t uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [20];
  byte bVar12;
  uint8_t uVar13;
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined8 in_register_0000000c;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined1 in_register_00000028 [24];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  undefined1 auVar29 [64];
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  undefined1 auVar33 [64];
  undefined1 auVar35 [64];
  undefined1 auVar37 [64];
  undefined1 auVar38 [64];
  undefined4 extraout_g1;
  undefined4 extraout_g1_00;
  undefined4 uVar39;
  short *psVar40;
  int iVar41;
  short sVar42;
  int iVar43;
  short *psVar44;
  short *psVar45;
  DOA_ARCADE_PLAYER *pDVar46;
  undefined4 in_g8;
  undefined4 in_g9;
  undefined4 in_g10;
  undefined4 in_g11;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [64];
  undefined1 auStack_80 [999872];
  undefined1 auVar16 [64];
  undefined1 auVar25 [64];
  undefined1 auVar28 [64];
  undefined1 auVar30 [64];
  undefined1 auVar34 [64];
  undefined1 auVar36 [64];
  
  uVar10 = CONCAT44(auStackX_0,unaff_pfp);
  auVar11._8_4_ = unaff_retaddr;
  auVar11._0_8_ = uVar10;
  auVar11._12_8_ = in_register_0000000c;
  auVar14._20_4_ = unaff_r5;
  auVar14._0_20_ = auVar11;
  auVar14._24_4_ = unaff_r6;
  auVar14._28_4_ = unaff_r7;
  auVar14._32_4_ = unaff_r8;
  auVar14._36_4_ = unaff_r9;
  auVar14._40_24_ = in_register_00000028;
  uVar1 = ac & 0xfffffff8 | (uint)(DAT_0054fcfe != '\0') << 2;
  auVar15._20_44_ = auVar14._20_44_;
  auVar15._0_16_ = auVar11._0_16_;
  auVar15._16_4_ = param_1;
  if (((byte)(uVar1 >> 2) & 1) != 1) {
    psVar45 = (short *)(param_1 * 0x58);
    pDVar46 = &g_player1;
    uVar1 = ac & 0xfffffff8 | (uint)((char)psVar45[0x2a7e1b] == '\x01') << 1;
    if ((((byte)(uVar1 >> 1) & 1) == 1) ||
       (ac = ac & 0xfffffff8 | (uint)((short)(&DAT_0056ac14)[param_1] < 0), uVar1 = ac,
       ((byte)ac & 1 | 0 < (short)(&DAT_0056ac14)[param_1]) != 1)) {
      ac = uVar1;
      if ((&DAT_0056ac14)[param_1] != 0) {
        (&DAT_0056ac14)[param_1] = (undefined2)g14;
      }
      uVar1 = ac & 0xfffffff8;
      if ((&DAT_0056ac18)[param_1] == '\x01') {
        (&DAT_0056ac20)[param_1] = (&DAT_0056ac20)[param_1];
      }
      if ((*(char *)((int)psVar45 + 0x54fc35) == '\x02') && ((&DAT_0056ac30)[param_1] == '\0')) {
        *(undefined1 *)((int)psVar45 + 0x54fc35) = (undefined1)g14;
      }
      iVar43 = (int)(short)(&DAT_0056ac34)[param_1];
      auVar16._12_52_ = auVar15._12_52_;
      if (((iVar43 == 0) && (DAT_0056ac38 == '\0')) ||
         ((&g_player1)[param_1].animation_request == '\x01')) {
        psVar44 = (short *)(int)(short)(&DAT_0056ac3c)[param_1];
        psVar40 = (short *)(int)(short)(&AnimeFrameNo___P1_0056ac40)[param_1];
        uVar2 = uVar1 | (uint)((int)psVar44 < (int)psVar40) << 2 | (uint)(psVar44 == psVar40) << 1;
        ac = uVar2 | (int)psVar40 < (int)psVar44;
        (&DAT_0056ac44)[param_1] = (undefined1)g14;
        if (((byte)(uVar2 >> 1) & 1) == 1) {
LAB_00041c2c:
          auVar16._8_4_ = 0x41c30;
          auVar16._0_8_ = uVar10;
          *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar16;
          auVar15._8_56_ = auVar16._8_56_;
          auVar15._4_4_ = auStack_40;
          auVar15._0_4_ = fp;
          FUN_00042940(param_1,param_2,param_3,param_4,psVar40,psVar44,psVar45,0x54fc00,in_g8,in_g9,
                       in_g10,in_g11);
          param_2 = extraout_g1;
          fp = (undefined1 (*) [64])register0x00000004;
        }
        else {
          psVar40 = (short *)(uint)(&g_player1)[param_1].animation_request;
          uVar2 = uVar1 | (uint)((short *)((int)&DWORD_00000000 + 1U) < psVar40) << 2 |
                  (uint)(psVar40 == (short *)((int)&DWORD_00000000 + 1U)) << 1;
          ac = uVar2 | psVar40 == (short *)0x0;
          if (((byte)(uVar2 >> 1) & 1) == 1) goto LAB_00041c2c;
          psVar40 = (short *)(int)(char)(&DAT_0056ac46)[param_1];
          uVar2 = uVar1 | (uint)(1 < (int)psVar40) << 2 |
                  (uint)(psVar40 == (short *)((int)&DWORD_00000000 + 1U)) << 1;
          ac = uVar2 | (int)psVar40 < 1;
          if (((byte)(uVar2 >> 1) & 1) == 1) goto LAB_00041c2c;
          psVar40 = (short *)(int)(char)(&DAT_0056ac48)[param_1];
          ac = uVar1 | (uint)(1 < (int)psVar40) << 2 |
               (uint)(psVar40 == (short *)((int)&DWORD_00000000 + 1U)) << 1 |
               (uint)((int)psVar40 < 1);
          if (((byte)ac & 1 | 1 < (int)psVar40) != 1) goto LAB_00041c2c;
        }
        uVar2 = ac;
        sVar42 = (&DAT_0056ac4c)[param_1];
        uVar1 = ac & 0xfffffff8 | (uint)(sVar42 < -1) << 2 | (uint)(sVar42 == -1) << 1;
        ac = uVar1 | -1 < sVar42;
        if (((byte)(uVar1 >> 1) & 1) != 1) {
          cVar6 = (&DAT_0056ac44)[param_1];
          ac = uVar2 & 0xfffffff8 | (uint)('\0' < cVar6) << 2 | (uint)(cVar6 == '\0') << 1 |
               (uint)(cVar6 < '\0');
          if (((byte)ac & 1 | '\0' < cVar6) != 1) {
            puVar4 = (undefined1 *)(auVar15._4_4_ + 0x3fU & 0xffffffc0);
            auVar17._12_52_ = auVar15._12_52_;
            auVar17._0_8_ = auVar15._0_8_;
            auVar17._8_4_ = 0x41c54;
            *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar17;
            auVar15._8_56_ = auVar17._8_56_;
            auVar15._4_4_ = puVar4 + 0x40;
            auVar15._0_4_ = fp;
            FUN_000421c0(param_1,param_2,0xffffffff,param_4);
            fp = (undefined1 (*) [64])puVar4;
          }
          sVar42 = (&DAT_0056ac4c)[param_1];
          puVar4 = (undefined1 *)(auVar15._4_4_ + 0x3fU & 0xffffffc0);
          auVar18._12_52_ = auVar15._12_52_;
          auVar18._0_8_ = auVar15._0_8_;
          auVar18._8_4_ = 0x41c64;
          *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar18;
          auVar15._8_56_ = auVar18._8_56_;
          auVar15._4_4_ = puVar4 + 0x40;
          auVar15._0_4_ = fp;
          FUN_00042170(param_1,(int)sVar42);
          fp = (undefined1 (*) [64])puVar4;
        }
        uVar2 = auVar15._4_4_ + 0x3f;
        puVar4 = (undefined1 *)(uVar2 & 0xffffffc0);
        auVar19._12_52_ = auVar15._12_52_;
        auVar19._0_8_ = auVar15._0_8_;
        auVar19._8_4_ = 0x41c6c;
        *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar19;
        auVar15._8_56_ = auVar19._8_56_;
        auVar15._4_4_ = puVar4 + 0x40;
        auVar15._0_4_ = fp;
        FUN_00041d50(param_1);
        uVar9 = ac;
        sVar42 = (&DAT_0056ac34)[param_1];
        uVar1 = ac & 0xfffffff8 | (uint)(0 < sVar42) << 2 | (uint)(sVar42 == 0) << 1;
        ac = uVar1 | sVar42 < 0;
        auVar20._0_8_ = auVar15._0_8_;
        auVar20._12_52_ = auVar15._12_52_;
        if (((byte)(uVar1 >> 1) & 1) == 1) {
          cVar6 = (&DAT_0056ac50)[param_1];
          ac = uVar9 & 0xfffffff8 | (uint)('\0' < cVar6) << 2 | (uint)(cVar6 == '\0') << 1 |
               (uint)(cVar6 < '\0');
          fp = (undefined1 (*) [64])puVar4;
          uVar1 = ac;
          if (((byte)ac & 1 | '\0' < cVar6) != 1) {
            fp = (undefined1 (*) [64])(puVar4 + 0x40);
            auVar21._8_4_ = 0x41c98;
            auVar21._0_8_ = auVar20._0_8_;
            auVar21._12_52_ = auVar20._12_52_;
            *(undefined1 (*) [64])(uVar2 & 0xffffffc0) = auVar21;
            auVar15._8_56_ = auVar21._8_56_;
            auVar15._0_8_ = CONCAT44(puVar4 + 0x80,uVar2) & 0xffffffffffffffc0;
            FUN_00044830(param_1);
            uVar1 = ac;
          }
          goto LAB_00041cf0;
        }
        fp = (undefined1 (*) [64])(puVar4 + 0x40);
        auVar20._8_4_ = 0x41c80;
        *(undefined1 (*) [64])(uVar2 & 0xffffffc0) = auVar20;
        auVar15._8_56_ = auVar20._8_56_;
        auVar15._0_8_ = CONCAT44(puVar4 + 0x80,uVar2) & 0xffffffffffffffc0;
        FUN_0004a660(param_1);
      }
      else {
        ac = uVar1 | (uint)(iVar43 == 0) << 1;
        if ((((byte)(ac >> 1) & 1) == 1) ||
           (ac = uVar1 | (uint)('\0' < DAT_0056ac38) << 2 | (uint)(DAT_0056ac38 == '\0') << 1 |
                 (uint)(DAT_0056ac38 < '\0'), ((byte)ac & 1 | '\0' < DAT_0056ac38) == 1)) {
          uVar1 = ac;
          iVar41 = (int)(short)(&DAT_0056ac34)[param_1];
          ac = ac & 0xfffffff8 | (uint)(0 < iVar41) << 2 | (uint)(iVar41 == 0) << 1 |
               (uint)(iVar41 < 0);
          if (((byte)ac & 1 | 0 < iVar41) != 1) {
            iVar41 = (int)DAT_0056ac38;
            uVar1 = uVar1 & 0xfffffff8 | (uint)(0 < iVar41) << 2 | (uint)(iVar41 == 0) << 1;
            ac = uVar1 | iVar41 < 0;
            if (((byte)(uVar1 >> 1) & 1) != 1) {
              auVar23._8_4_ = 0x41cd4;
              auVar23._0_8_ = uVar10;
              auVar23._12_52_ = auVar16._12_52_;
              *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar23;
              auVar15._8_56_ = auVar23._8_56_;
              auVar15._4_4_ = auStack_40;
              auVar15._0_4_ = fp;
              FUN_00051b80();
              fp = (undefined1 (*) [64])register0x00000004;
              uVar1 = ac;
              goto LAB_00041cf0;
            }
          }
          uVar39 = 0x1e;
          auVar25._8_4_ = 0x41ce4;
          auVar25._0_8_ = uVar10;
          auVar25._12_52_ = auVar16._12_52_;
          *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar25;
          auVar24._8_56_ = auVar25._8_56_;
          auVar24._4_4_ = auStackX_0;
          auVar24._0_4_ = fp;
          Debug_SetTextPosition(0x1e,0x1e);
          fp = &auStack_40;
          auVar26._12_52_ = auVar24._12_52_;
          auVar26._0_8_ = auVar24._0_8_;
          auVar26._8_4_ = 0x41cf0;
          auVar15._8_56_ = auVar26._8_56_;
          auVar15._4_4_ = auStack_80;
          auVar15._0_4_ = auStackX_0;
          FUN_0008e740(s_HOKANTYU_ha_EDIT_YAMETE__00041ae0,uVar39,param_3,param_4,iVar41,iVar43,
                       psVar45,pDVar46,in_g8,in_g9,in_g10,in_g11);
          uVar1 = ac;
          goto LAB_00041cf0;
        }
      }
      puVar4 = (undefined1 *)(auVar15._4_4_ + 0x3fU & 0xffffffc0);
      auVar22._12_52_ = auVar15._12_52_;
      auVar22._0_8_ = auVar15._0_8_;
      auVar22._8_4_ = 0x41cb4;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar22;
      auVar15._8_56_ = auVar22._8_56_;
      auVar15._4_4_ = puVar4 + 0x40;
      auVar15._0_4_ = fp;
      FUN_0004a980(param_1);
      fp = (undefined1 (*) [64])puVar4;
      uVar1 = ac;
    }
  }
LAB_00041cf0:
  ac = uVar1;
  auVar32._16_4_ = auVar15._16_4_;
  cVar6 = (&DAT_0056ac52)[auVar32._16_4_];
  ac = ac & 0xfffffff8 | (uint)('\0' < cVar6) << 2 | (uint)(cVar6 == '\0') << 1 |
       (uint)(cVar6 < '\0');
  if (((byte)ac & 1 | '\0' < cVar6) != 1) {
    (&DAT_0056ac58)[auVar32._16_4_] = (&g_player1)[auVar32._16_4_].facing_direction;
  }
  uVar1 = auVar15._4_4_ + 0x3f;
  uVar2 = uVar1 & 0xffffffc0;
  auVar28._12_52_ = auVar15._12_52_;
  auVar28._0_8_ = auVar15._0_8_;
  auVar28._8_4_ = 0x41d24;
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar28;
  auVar27._8_56_ = auVar28._8_56_;
  auVar27._0_8_ = CONCAT44(uVar1,fp) & 0xffffffc0ffffffff;
  FUN_00045870(auVar32._16_4_);
  pauVar5 = (undefined1 (*) [64])(uVar2 + 0x40);
  auVar30._12_52_ = auVar27._12_52_;
  auVar30._0_8_ = auVar27._0_8_;
  auVar30._8_4_ = 0x41d2c;
  *(undefined1 (*) [64])(uVar1 & 0xffffffc0) = auVar30;
  auVar29._8_56_ = auVar30._8_56_;
  auVar29._0_8_ = CONCAT44(uVar2 + 0x80,uVar1) & 0xffffffffffffffc0;
  FUN_0004ad80(auVar32._16_4_);
  uVar1 = ac;
  uVar13 = g_motion_debug_render_mode;
  if (DAT_0054fcfe != '\0') {
    fp = (undefined1 (*) [64])uVar2;
    ac = ac & 0xfffffff8 | (uint)(DAT_0054fcfe != '\0') << 2 | (uint)(DAT_0054fcfe == '\0') << 1;
    return;
  }
  auVar31._0_24_ = auVar29._0_24_;
  auVar31._24_4_ = auVar32._16_4_ * 4;
  auVar31._28_4_ = auVar32._16_4_ * 4;
  auVar31._32_4_ = auVar32._16_4_ * 4;
  auVar31._40_24_ = auVar29._40_24_;
  auVar31._36_4_ = auVar32._16_4_ << 2;
  auVar32._0_16_ = auVar29._0_16_;
  (&DAT_0056ac72)[auVar32._16_4_] = (undefined1)g14;
  (&DAT_0056ac78)[auVar32._16_4_] = g14;
  (&DAT_0056ac60)[auVar32._16_4_] = (undefined1)g14;
  uVar9 = ac & 0xfffffff8 | (uint)((char)uVar13 < '\0') << 2;
  ac = uVar9 | '\0' < (char)uVar13;
  auVar32._24_40_ = auVar31._24_40_;
  auVar32._20_4_ = &g_player1 + auVar32._16_4_;
  if (((((byte)ac & 1 | (byte)(uVar9 >> 2) & 1) == 1) ||
      (ac = uVar1 & 0xfffffff8, 1 < (byte)(DAT_0054fcfd - 1))) ||
     (bVar12 = GameOverFlag____0054fcb4 - 2,
     ac = uVar1 & 0xfffffff8 | (uint)(1 < bVar12) << 2 | (uint)(bVar12 == 1) << 1 |
          (uint)(GameOverFlag____0054fcb4 == 2), 1 >= bVar12)) {
    uVar9 = ac;
    uVar1 = ac & 0xfffffff8 | (uint)(DAT_0054fcfd < 4) << 2;
    ac = uVar1 | (uint)(DAT_0054fcfd == 4) << 1 | (uint)(4 < DAT_0054fcfd);
    fp = pauVar5;
    auVar33 = auVar32;
    if (((byte)ac & 1 | (byte)(uVar1 >> 2) & 1) != 1) {
      DVar7 = (&g_player1)[auVar32._16_4_].action_state;
      ac = uVar9 & 0xfffffff8 | (uint)(STATE_SPECIALMOVE < DVar7) << 2 |
           (uint)(DVar7 == STATE_SPECIALMOVE) << 1 | (uint)(DVar7 < STATE_SPECIALMOVE);
      if (((byte)ac & 1 | STATE_SPECIALMOVE < DVar7) != 1) {
        bVar12 = (&g_player1)[auVar32._16_4_].action_code + CMD_NML_UP_H_K;
        uVar1 = uVar9 & 0xfffffff8 | (uint)(9 < bVar12) << 2 | (uint)(bVar12 == 9) << 1;
        ac = uVar1 | bVar12 < 9;
        if (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) == 1) goto LAB_00041ec8;
      }
      goto LAB_00041ec4;
    }
  }
  else {
LAB_00041ec4:
    fp = (undefined1 (*) [64])(uVar2 + 0x80);
    auVar34._12_52_ = auVar32._12_52_;
    auVar34._0_8_ = auVar29._0_8_;
    auVar34._8_4_ = &LAB_00041ec8;
    *(undefined1 (*) [64])(uVar2 + 0x40) = auVar34;
    auVar33._8_56_ = auVar34._8_56_;
    auVar33._4_4_ = uVar2 + 0xc0;
    auVar33._0_4_ = pauVar5;
    FUN_00044430(auVar32._16_4_);
  }
LAB_00041ec8:
  uVar1 = auVar33._4_4_ + 0x3f;
  pauVar5 = (undefined1 (*) [64])(uVar1 & 0xffffffc0);
  auVar36._12_52_ = auVar33._12_52_;
  auVar36._0_8_ = auVar33._0_8_;
  auVar36._8_4_ = 0x41ed0;
  *fp = auVar36;
  auVar35._8_56_ = auVar36._8_56_;
  auVar35._4_4_ = pauVar5 + 1;
  auVar35._0_4_ = fp;
  FUN_00044720(auVar32._16_4_);
  iVar43 = auVar35._16_4_;
  uVar39 = extraout_g1_00;
  if ((byte)((&g_player1)[auVar32._16_4_].character_id - NAME_HAYABUSA) < 2) {
    uVar8 = (&g_player1)[auVar32._16_4_].animation_id;
    if (uVar8 == 0xa28) {
      iVar41 = (&DAT_0056ac80)[auVar32._16_4_];
      if (0x3c < (short)(&AnimeFrameNo___P1_0056ac40)[auVar32._16_4_]) {
        iVar41 = 0x47ae147b;
      }
      (&DAT_0056ac80)[auVar32._16_4_] = iVar41;
      if ((float10)'\x01' <= (float10)iVar41) {
        (&DAT_0056ac80)[iVar43] = 0x3c;
      }
    }
    else if (((uVar8 == 0xa65) || ((ushort)(uVar8 - 0xb88) < 2)) || (uVar8 == 0xb8e)) {
      iVar41 = (&DAT_0056ac80)[auVar32._16_4_];
      if (0x78 < (short)(&AnimeFrameNo___P1_0056ac40)[auVar32._16_4_]) {
        iVar41 = -0x66666666;
      }
      (&DAT_0056ac80)[auVar32._16_4_] = iVar41;
      if ((float10)iVar41 < (float10)'\0') {
LAB_00042024:
        (&DAT_0056ac80)[iVar43] = g14;
      }
    }
    else if (uVar8 == 0x58d) {
      iVar41 = (&DAT_0056ac80)[auVar32._16_4_];
      if (0x62 < (short)(&AnimeFrameNo___P1_0056ac40)[auVar32._16_4_]) {
        iVar41 = 0x33333333;
      }
      (&DAT_0056ac80)[auVar32._16_4_] = iVar41;
      if ((float10)iVar41 < (float10)'\0') goto LAB_00042024;
    }
    if (uVar8 == 0x428) {
      piVar3 = (int *)((int)&DAT_0056ac80 + auVar35._36_4_);
      uVar39 = 0x3c;
      iVar41 = *piVar3;
      if (0x3c < (short)(&AnimeFrameNo___P1_0056ac40)[iVar43]) {
        iVar41 = 0x47ae147b;
      }
      *piVar3 = iVar41;
      if ((float10)iVar41 < (float10)'\x01') goto LAB_00042110;
    }
    else {
      if (*(short *)(auVar35._20_4_ + 0x28) != 0x5b0) goto LAB_00042110;
      if (((int)(short)(&AnimeFrameNo___P1_0056ac40)[iVar43] + 0xfffeU & 0xffff) < 0x12) {
        (&DAT_0056ac80)[iVar43] = 0x9999999a;
        goto LAB_00042110;
      }
      uVar39 = 0x27;
      if ((short)(&AnimeFrameNo___P1_0056ac40)[iVar43] < 0x28) {
        (&DAT_0056ac80)[iVar43] = g14;
        goto LAB_00042110;
      }
    }
  }
  (&DAT_0056ac80)[iVar43] = uVar39;
LAB_00042110:
  ac = ac & 0xfffffff8;
  ac = ac | (uint)(MODE_FIGHT < GameMode) << 2 | (uint)(GameMode == MODE_FIGHT) << 1 |
       (uint)(GameMode == MODE_LOAD);
  fp = pauVar5;
  if (((byte)ac & 1 | MODE_FIGHT < GameMode) != 1) {
    fp = (undefined1 (*) [64])(auVar35._4_4_ + 0x3fU & 0xffffffc0);
    auVar37._12_52_ = auVar35._12_52_;
    auVar37._0_8_ = auVar35._0_8_;
    auVar37._8_4_ = &LAB_00042124;
    *pauVar5 = auVar37;
    auVar35._8_56_ = auVar37._8_56_;
    auVar35._0_8_ = CONCAT44(fp + 1,uVar1) & 0xffffffffffffffc0;
    FUN_0004b7a0(iVar43);
  }
  auVar38._12_52_ = auVar35._12_52_;
  auVar38._0_8_ = auVar35._0_8_;
  auVar38._8_4_ = 0x4212c;
  *fp = auVar38;
  FUN_0004b710(iVar43);
  sVar42 = (&DAT_0056ac14)[iVar43];
  uVar2 = ac & 0xfffffff8 | (uint)(sVar42 < 0) << 2;
  uVar1 = uVar2 | (uint)(sVar42 == 0) << 1;
  ac = uVar1 | 0 < sVar42;
  (&DAT_0056ac88)[iVar43] = (&g_player1)[iVar43].facing_direction;
  if (((byte)(uVar1 >> 1) & 1 | (byte)(uVar2 >> 2) & 1) != 1) {
    sVar42 = sVar42 + -1;
  }
  (&DAT_0056ac14)[iVar43] = sVar42;
  return;
}

