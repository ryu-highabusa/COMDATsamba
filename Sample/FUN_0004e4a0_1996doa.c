
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void Motion_Initialize(uint16_t anime_id)

{
  bool bVar1;
  uint uVar2;
  undefined1 (*pauVar3) [64];
  short sVar4;
  ushort uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [20];
  undefined1 auVar8 [24];
  int iVar9;
  undefined4 unaff_pfp;
  int iVar47;
  undefined1 auVar10 [20];
  undefined1 auVar11 [20];
  undefined1 auVar12 [24];
  int iVar46;
  undefined4 unaff_retaddr;
  undefined4 unaff_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  uint uVar53;
  undefined1 in_register_00000028 [24];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  int iVar48;
  ushort *puVar49;
  int iVar50;
  short *psVar51;
  short *psVar52;
  undefined1 auVar19 [64];
  undefined1 auVar21 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  undefined1 auVar31 [64];
  undefined1 auVar33 [64];
  undefined1 auVar35 [64];
  undefined1 auVar37 [64];
  undefined1 auVar39 [64];
  undefined1 auVar42 [64];
  undefined1 auVar44 [64];
  undefined1 auVar45 [64];
  undefined2 in_register_00000042;
  undefined4 *puVar54;
  undefined4 uVar55;
  undefined4 extraout_g1;
  undefined4 extraout_g1_00;
  undefined4 extraout_g1_01;
  undefined4 extraout_g1_02;
  undefined4 in_g2;
  undefined4 uVar56;
  undefined4 uVar57;
  uint uVar58;
  undefined4 *puVar59;
  undefined4 *puVar60;
  undefined4 *puVar61;
  undefined4 *puVar62;
  undefined4 in_g8;
  undefined4 in_g9;
  undefined4 in_g10;
  undefined4 in_g11;
  undefined1 auStackX_0 [1000000];
  undefined1 auVar20 [64];
  undefined1 auVar27 [64];
  undefined1 auVar30 [64];
  undefined1 auVar32 [64];
  undefined1 auVar34 [64];
  undefined1 auVar36 [64];
  undefined1 auVar38 [64];
  undefined1 auVar40 [64];
  undefined1 auVar22 [64];
  undefined1 auVar41 [64];
  undefined1 auVar43 [64];
  undefined1 auVar13 [26];
  
  auVar6._4_4_ = auStackX_0;
  auVar6._0_4_ = unaff_pfp;
  auVar6._8_4_ = unaff_retaddr;
  auVar6._12_4_ = unaff_r3;
  auVar7._16_4_ = unaff_r4;
  auVar7._0_16_ = auVar6;
  auVar8._20_4_ = unaff_r5;
  auVar8._0_20_ = auVar7;
  auVar14._24_4_ = unaff_r6;
  auVar14._0_24_ = auVar8;
  auVar14._28_4_ = unaff_r7;
  auVar14._32_4_ = unaff_r8;
  auVar14._36_4_ = unaff_r9;
  auVar14._44_20_ = in_register_00000028._4_20_;
  auVar14._40_4_ = CONCAT22(in_register_00000042,anime_id);
  uVar2 = (uint)anime_id;
  uVar58 = (uint)(anime_id >> 9);
  iVar48 = uVar58 * -0x200;
  if (0x1fff < uVar2) {
    uVar58 = 0xd;
  }
  if ((g_debug_anime_mode == '\0') ||
     (g_debug_anime_id_cached = g_external_anime_id,
     (int)g_external_anime_id < (int)uVar2 || (int)uVar2 < (int)g_external_anime_id)) {
    DAT_00589f50 = *(undefined **)
                    (g_anime_pointer_bank_table[uVar58] +
                    ((CONCAT22(in_register_00000042,anime_id) + iVar48) * 0x10000 >> 0x10) * 4);
  }
  else {
    DAT_00589f50 = &g_external_anime_data;
  }
  ac = ac & 0xfffffff8;
  puVar54 = &DAT_00589e10;
  puVar60 = &DAT_00589eb0;
  puVar61 = &DAT_00589e10;
  do {
    puVar60[2] = g14;
    puVar60[3] = g14;
    puVar61[2] = g14;
    puVar61[3] = g14;
    puVar60[4] = g14;
    puVar60[5] = g14;
    puVar61[4] = g14;
    *puVar60 = g14;
    puVar61[5] = g14;
    puVar60[6] = g14;
    puVar60[1] = g14;
    puVar60[7] = g14;
    puVar61[6] = g14;
    *puVar61 = g14;
    puVar61[7] = g14;
    puVar59 = puVar60 + 8;
    *puVar59 = g14;
    puVar54 = puVar54 + 10;
    puVar61[1] = g14;
    puVar62 = puVar61 + 10;
    puVar61[8] = g14;
    puVar60[9] = g14;
    puVar61[9] = g14;
    puVar60 = puVar60 + 10;
    puVar61 = puVar62;
  } while ((int)puVar54 < 0x589e5d);
  DAT_0056ac48 = '\x01';
  DAT_0056ac94 = 1;
  AnimeFrameNo___P1_0056ac40 = 1;
  DAT_00589f58 = g14;
  DAT_0056ac18 = (char)g14;
  DAT_0056ac20 = 0;
  DAT_0056ac28 = (undefined4 *)0x0;
  DAT_0056ac14 = (undefined2)g14;
  auVar15._24_4_ = 0;
  auVar15._0_24_ = auVar8;
  DAT_0056ada8 = g14;
  auVar15._32_32_ = auVar14._32_32_;
  auVar15._28_4_ = &AnimeFrameNo___P1_0056ac40;
  auVar16._40_24_ = auVar14._40_24_;
  auVar16._0_36_ = auVar15._0_36_;
  auVar16._36_4_ = &DAT_0056ac20;
  auVar17._24_40_ = auVar16._24_40_;
  auVar17._20_4_ = &DAT_0056ac14;
  auVar17._0_20_ = auVar7;
  DAT_0056acf0 = 0;
  auVar18._36_28_ = auVar16._36_28_;
  auVar18._0_32_ = auVar17._0_32_;
  auVar18._32_4_ = &DAT_0056ac34;
  auVar19._20_44_ = auVar18._20_44_;
  auVar19._16_4_ = 0;
  auVar19._0_16_ = auVar6;
  DAT_0056ac3c = -1;
  DAT_0056ac34 = (undefined2)g14;
  DAT_0056ac4c = -1;
  DAT_0056add0 = in_g2;
  do {
    uVar2 = ac;
    puVar54 = DAT_0056ac28;
    if (DAT_0056ac18 == '\x01') {
      *auVar19._36_4_ = *auVar19._36_4_;
      puVar59 = puVar54;
    }
    uVar53 = auVar19._40_4_;
    psVar52 = auVar19._32_4_;
    psVar51 = auVar19._28_4_;
    iVar50 = auVar19._24_4_;
    puVar49 = auVar19._20_4_;
    iVar48 = auVar19._16_4_;
    uVar58 = ac | (uint)('\x01' < DAT_0056ac48) << 2 | (uint)(DAT_0056ac48 == '\x01') << 1;
    ac = uVar58 | DAT_0056ac48 < '\x01';
    if (((byte)(uVar58 >> 1) & 1) == 1) {
LAB_0004e6a4:
      uVar2 = auVar19._4_4_ + 0x3fU & 0xffffffc0;
      auVar20._12_52_ = auVar19._12_52_;
      auVar20._0_8_ = auVar19._0_8_;
      auVar20._8_4_ = 0x4e6a8;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar20;
      auVar19._8_56_ = auVar20._8_56_;
      auVar19._4_4_ = uVar2 + 0x40;
      auVar19._0_4_ = fp;
      FUN_0004ea80();
      fp = (undefined1 (*) [64])uVar2;
    }
    else {
      puVar59 = (undefined4 *)(int)*psVar51;
      puVar54 = (undefined4 *)(int)DAT_0056ac3c;
      ac = uVar2 | (uint)((int)puVar59 < (int)puVar54) << 2 | (uint)(puVar59 == puVar54) << 1 |
           (uint)((int)puVar54 < (int)puVar59);
      if (((byte)ac & 1 | (int)puVar59 < (int)puVar54) != 1) goto LAB_0004e6a4;
    }
    iVar46 = auVar19._4_4_;
    uVar56 = 0xffffffff;
    uVar2 = ac & 0xfffffff8 | (uint)(DAT_0056ac4c < -1) << 2 | (uint)(DAT_0056ac4c == -1) << 1;
    ac = uVar2 | -1 < DAT_0056ac4c;
    if (((byte)(uVar2 >> 1) & 1) != 1) {
      g14 = 0x4e6bc;
      FUN_0004efc8();
    }
    uVar2 = ac;
    sVar4 = *psVar52;
    ac = ac & 0xfffffff8 | (uint)(0 < sVar4) << 2 | (uint)(sVar4 == 0) << 1 | (uint)(sVar4 < 0);
    if (((byte)ac & 1 | 0 < sVar4) == 1) {
      *psVar52 = sVar4 + -1;
    }
    else {
      sVar4 = *psVar51;
      uVar2 = uVar2 & 0xfffffff8 | (uint)(0 < sVar4) << 2 | (uint)(sVar4 == 0) << 1;
      ac = uVar2 | sVar4 < 0;
      if (((byte)(uVar2 >> 1) & 1) != 1) {
        uVar2 = iVar46 + 0x3fU & 0xffffffc0;
        auVar21._12_52_ = auVar19._12_52_;
        auVar21._0_8_ = auVar19._0_8_;
        auVar21._8_4_ = 0x4e6d0;
        *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar21;
        auVar19._8_56_ = auVar21._8_56_;
        auVar19._4_4_ = uVar2 + 0x40;
        auVar19._0_4_ = fp;
        FUN_0004e890();
        fp = (undefined1 (*) [64])uVar2;
      }
    }
    iVar47 = auVar19._4_4_;
    g14 = 0x4e6e0;
    FUN_0004ea08();
    uVar5 = *puVar49;
    uVar2 = ac & 0xfffffff8 | (uint)(0 < (short)uVar5) << 2 | (uint)(uVar5 == 0) << 1;
    ac = uVar2 | (short)uVar5 < 0;
    if (((byte)(uVar2 >> 1) & 1) != 1) {
      do {
        g14 = 0x4e6ec;
        FUN_0004ea08();
        puVar59 = (undefined4 *)(*puVar49 - 1);
        iVar9 = (int)puVar59 * 0x10000;
        uVar2 = ac & 0xfffffff8 | (uint)(0 < iVar9) << 2;
        ac = uVar2 | (uint)(iVar9 == 0) << 1 | (uint)(iVar9 < 0);
        *puVar49 = (ushort)puVar59;
      } while (((byte)ac & 1 | (byte)(uVar2 >> 2) & 1) == 1);
    }
    uVar58 = ac;
    auVar22._20_44_ = auVar19._20_44_;
    auVar10._0_16_ = auVar19._0_16_;
    auVar10._16_4_ = iVar48 + 1;
    auVar22._0_20_ = auVar10;
    uVar57 = 2000;
    uVar2 = ac & 0xfffffff8 | (uint)(auVar10._16_4_ < 2000) << 2 |
            (uint)(auVar10._16_4_ == 2000) << 1;
    ac = uVar2 | 2000 < auVar10._16_4_;
    auVar25._28_36_ = auVar19._28_36_;
    if (((byte)(uVar2 >> 1) & 1 | auVar10._16_4_ < 2000) != 1) {
      auVar23._24_40_ = auVar19._24_40_;
      auVar23._20_4_ = 0;
      auVar23._0_20_ = auVar10;
      auVar24._20_44_ = auVar23._20_44_;
      auVar24._16_4_ = 0;
      auVar24._0_16_ = auVar10._0_16_;
      auVar25._0_24_ = auVar24._0_24_;
      auVar25._24_4_ = 0;
      pauVar3 = (undefined1 (*) [64])(iVar47 + 0x3fU & 0xffffffc0);
      auVar27._12_52_ = auVar25._12_52_;
      auVar27._0_8_ = auVar19._0_8_;
      auVar27._8_4_ = &LAB_0004e72c;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar27;
      auVar26._8_56_ = auVar27._8_56_;
      auVar26._4_4_ = pauVar3 + 1;
      auVar26._0_4_ = fp;
      Debug_PrintMotionInitError(uVar53 & 0xffff);
      fp = pauVar3;
      goto LAB_0004e72c;
    }
    uVar58 = uVar58 & 0xfffffff8;
    auVar19._0_24_ = auVar22._0_24_;
    auVar19._24_4_ = iVar50 + 1;
    auVar19._28_36_ = auVar25._28_36_;
    sVar4 = *psVar51;
    puVar60 = (undefined4 *)(int)sVar4;
    if ((iVar50 == 2) &&
       (puVar59 = (undefined4 *)(int)(float10)DAT_0056acf0, DAT_005555f4 = sVar4,
       DAT_005555f8 = DAT_0056acf0, (float10)0x3fe0000000000000 <= (float10)DAT_0056acf0)) {
      DAT_005555f8 = 0;
      puVar59 = (undefined4 *)0xbff00000;
    }
    ac = uVar58;
  } while (puVar60 != (undefined4 *)0x0);
  auVar41._20_44_ = auVar19._20_44_;
  auVar11._16_4_ = 0;
  auVar11._0_16_ = auVar10._0_16_;
  auVar41._0_20_ = auVar11;
  ac = uVar58 | (uint)(DAT_00589e14 == 4) << 1;
  auVar42._0_24_ = auVar41._0_24_;
  auVar42._24_4_ = 0;
  auVar42._28_36_ = auVar25._28_36_;
  auVar43._24_40_ = auVar42._24_40_;
  if ((((byte)(ac >> 1) & 1) == 1) ||
     (ac = uVar58 | (uint)(DAT_00589e14 < 0x21) << 2 | (uint)(DAT_00589e14 == 0x21) << 1 |
           (uint)(0x21 < DAT_00589e14), ((byte)ac & 1 | DAT_00589e14 < 0x21) != 1)) {
    uVar58 = ac;
    uVar2 = ac & 0xfffffff8 | (uint)(DAT_00589e18 < -1) << 2;
    ac = uVar2 | (uint)(DAT_00589e18 == -1) << 1 | (uint)(-1 < DAT_00589e18);
    auVar12._20_4_ = DAT_00589e14;
    auVar12._0_20_ = auVar11;
    auVar43._0_24_ = auVar12;
    if (((byte)ac & 1 | (byte)(uVar2 >> 2) & 1) == 1) {
      ac = uVar58 & 0xfffffff8 | (uint)(5 < DAT_00589e18) << 2 | (uint)(DAT_00589e18 == 5) << 1 |
           (uint)(DAT_00589e18 < 5);
      if (((byte)ac & 1 | 5 < DAT_00589e18) != 1) {
        auVar43._24_4_ = 1;
        auVar43._28_36_ = auVar25._28_36_;
      }
    }
    else {
      DAT_00589eb4 = DAT_00589eb4 + 1;
    }
    auVar44._20_44_ = auVar43._20_44_;
    auVar44._0_16_ = auVar43._0_16_;
    auVar44._16_4_ = DAT_00589eb4;
    auVar13 = auVar44._0_26_;
  }
  else {
    auVar45._20_4_ = DAT_00589eb0 + 1;
    auVar45._0_20_ = auVar11;
    auVar45._24_40_ = auVar43._24_40_;
    auVar13 = auVar45._0_26_;
  }
  goto LAB_0004e870;
  while( true ) {
    uVar53 = (uint)ButtonPress_P1_0054fcd5;
    uVar58 = ac & 0xfffffff8;
    ac = uVar58 | 2;
    fp = pauVar3;
    if ((ButtonPress_P1_0054fcd5 & button_kick) == button_none) break;
LAB_0004e72c:
    uVar2 = auVar26._4_4_ + 0x3f;
    pauVar3 = (undefined1 (*) [64])(uVar2 & 0xffffffc0);
    auVar28._12_52_ = auVar26._12_52_;
    auVar28._0_8_ = auVar26._0_8_;
    auVar28._8_4_ = 0x4e734;
    *fp = auVar28;
    auVar26._8_56_ = auVar28._8_56_;
    auVar26._4_4_ = pauVar3 + 1;
    auVar26._0_4_ = fp;
    FUN_00008250(1);
    uVar53 = ButtonPress_P1 & 3;
    bVar1 = (ButtonPress_P1 & button_HP) != button_none;
    uVar58 = ac & 0xfffffff8 | (uint)bVar1 << 2 |
             (uint)((ButtonPress_P1 & button_HP) == button_none) << 1;
    if (bVar1) break;
  }
  ac = uVar58;
  uVar55 = 5;
  auVar30._12_52_ = auVar26._12_52_;
  auVar30._0_8_ = auVar26._0_8_;
  auVar30._8_4_ = 0x4e75c;
  *(undefined1 (*) [64])(uVar2 & 0xffffffc0) = auVar30;
  auVar29._8_56_ = auVar30._8_56_;
  auVar29._0_8_ = CONCAT44(pauVar3 + 1,uVar2) & 0xffffffffffffffc0;
  Debug_SetTextPosition(0xf,5);
  auVar32._12_52_ = auVar29._12_52_;
  auVar32._0_8_ = auVar29._0_8_;
  auVar32._8_4_ = 0x4e768;
  pauVar3[1] = auVar32;
  auVar31._8_56_ = auVar32._8_56_;
  auVar31._4_4_ = pauVar3 + 2;
  auVar31._0_4_ = pauVar3 + 1;
  FUN_0008e740(s__0004e3b0,uVar55,uVar56,uVar57,uVar53,puVar59,puVar60,puVar62,in_g8,in_g9,in_g10,
               in_g11);
  auVar34._12_52_ = auVar31._12_52_;
  auVar34._0_8_ = auVar31._0_8_;
  auVar34._8_4_ = 0x4e774;
  pauVar3[2] = auVar34;
  auVar33._8_56_ = auVar34._8_56_;
  auVar33._4_4_ = pauVar3 + 3;
  auVar33._0_4_ = pauVar3 + 2;
  FUN_0008e740(s__0004e3e0,extraout_g1,uVar56,uVar57,uVar53,puVar59,puVar60,puVar62,in_g8,in_g9,
               in_g10,in_g11);
  auVar36._12_52_ = auVar33._12_52_;
  auVar36._0_8_ = auVar33._0_8_;
  auVar36._8_4_ = 0x4e780;
  pauVar3[3] = auVar36;
  auVar35._8_56_ = auVar36._8_56_;
  auVar35._4_4_ = pauVar3 + 4;
  auVar35._0_4_ = pauVar3 + 3;
  FUN_0008e740(s__0004e410,extraout_g1_00,uVar56,uVar57,uVar53,puVar59,puVar60,puVar62,in_g8,in_g9,
               in_g10,in_g11);
  auVar38._12_52_ = auVar35._12_52_;
  auVar38._0_8_ = auVar35._0_8_;
  auVar38._8_4_ = 0x4e78c;
  pauVar3[4] = auVar38;
  auVar37._8_56_ = auVar38._8_56_;
  auVar37._4_4_ = pauVar3 + 5;
  auVar37._0_4_ = pauVar3 + 4;
  FUN_0008e740(s__0004e440,extraout_g1_01,uVar56,uVar57,uVar53,puVar59,puVar60,puVar62,in_g8,in_g9,
               in_g10,in_g11);
  auVar40._12_52_ = auVar37._12_52_;
  auVar40._0_8_ = auVar37._0_8_;
  auVar40._8_4_ = 0x4e798;
  pauVar3[5] = auVar40;
  auVar39._8_56_ = auVar40._8_56_;
  auVar39._4_4_ = pauVar3 + 7;
  auVar39._0_4_ = pauVar3 + 5;
  FUN_0008e740(s__0004e470,extraout_g1_02,uVar56,uVar57,uVar53,puVar59,puVar60,puVar62,in_g8,in_g9,
               in_g10,in_g11);
  auVar13 = auVar39._0_26_;
LAB_0004e870:
  DAT_005555ee = auVar13._20_2_;
  DAT_005555f0 = auVar13._16_2_;
  DAT_005555f2 = auVar13._24_2_;
  fp = (undefined1 (*) [64])auVar13._0_4_;
  return;
}

