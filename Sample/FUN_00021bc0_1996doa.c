
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1 FUN_00021bc0(uint param_1)

{
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  undefined1 (*pauVar4) [64];
  DOA_ACTSTATE DVar5;
  DOA_ACTCODE_COMMON DVar6;
  char cVar7;
  ushort uVar8;
  undefined4 unaff_pfp;
  undefined1 auVar9 [20];
  undefined1 auVar10 [32];
  undefined1 auVar11 [52];
  undefined1 auVar15 [56];
  undefined1 in_register_00000008 [12];
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined1 in_register_0000001c [20];
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined8 in_register_00000038;
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  undefined1 auVar33 [64];
  undefined1 auVar34 [64];
  undefined1 auVar35 [64];
  undefined1 auVar36 [64];
  undefined1 auVar37 [64];
  undefined1 auVar39 [64];
  undefined1 auVar40 [64];
  undefined1 auVar41 [64];
  undefined1 auVar42 [64];
  undefined1 auVar43 [64];
  undefined1 auVar44 [64];
  undefined1 auVar45 [64];
  undefined1 auVar46 [64];
  undefined1 auVar47 [64];
  undefined1 auVar48 [64];
  undefined1 auVar49 [64];
  undefined1 auVar50 [64];
  undefined1 auVar52 [64];
  undefined1 auVar16 [56];
  undefined1 auVar54 [64];
  undefined1 auVar55 [64];
  undefined1 auVar56 [64];
  undefined1 auVar57 [64];
  undefined1 auVar58 [64];
  undefined1 auVar59 [64];
  undefined1 auVar60 [64];
  undefined1 auVar61 [64];
  undefined1 auVar62 [64];
  undefined1 auVar63 [64];
  undefined1 auVar64 [64];
  undefined1 auVar65 [64];
  undefined1 auVar66 [64];
  undefined1 auVar67 [64];
  undefined1 auVar68 [64];
  undefined1 auVar69 [64];
  undefined1 auVar70 [64];
  undefined1 auVar71 [64];
  undefined1 auVar73 [64];
  undefined1 auVar74 [64];
  undefined1 auVar75 [64];
  undefined1 auVar76 [64];
  undefined1 auVar77 [64];
  undefined1 auVar78 [64];
  undefined1 auVar79 [64];
  undefined1 auVar80 [64];
  undefined1 auVar81 [64];
  undefined1 auVar12 [52];
  undefined1 auVar83 [64];
  undefined1 auVar84 [64];
  undefined1 auVar85 [64];
  undefined1 auVar86 [64];
  undefined1 auVar87 [64];
  undefined1 auVar88 [64];
  undefined1 auVar13 [52];
  undefined1 auVar89 [64];
  undefined1 auVar90 [64];
  undefined1 auVar91 [64];
  undefined1 auVar93 [64];
  undefined1 auVar94 [64];
  undefined1 auVar95 [64];
  undefined1 auVar96 [64];
  undefined1 auVar97 [64];
  undefined1 auVar98 [64];
  undefined1 auVar99 [64];
  undefined1 auVar101 [64];
  undefined1 auVar102 [64];
  undefined1 auVar103 [64];
  undefined1 auVar104 [64];
  undefined1 auVar105 [64];
  undefined1 auVar106 [64];
  undefined1 auVar107 [64];
  undefined1 auVar109 [64];
  undefined1 auVar110 [64];
  undefined1 auVar111 [64];
  undefined1 auVar112 [64];
  undefined1 auVar113 [64];
  undefined1 auVar114 [64];
  undefined1 auVar14 [52];
  undefined1 auVar115 [64];
  undefined1 auVar116 [64];
  undefined1 auVar117 [64];
  undefined1 auVar119 [64];
  undefined1 auVar121 [64];
  int iVar125;
  undefined1 auVar122 [64];
  undefined1 auVar123 [64];
  bool bVar126;
  byte bVar127;
  ushort uVar128;
  undefined3 extraout_var;
  uint uVar129;
  int iVar130;
  uint uVar131;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  undefined3 extraout_var_08;
  undefined3 extraout_var_09;
  undefined *puVar132;
  uint uVar133;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [64];
  undefined1 auStack_80 [64];
  undefined1 auStack_c0 [64];
  undefined1 auStack_100 [64];
  undefined1 auStack_140 [64];
  undefined1 auStack_180 [999616];
  undefined1 auVar24 [64];
  undefined1 auVar38 [64];
  undefined1 auVar51 [64];
  undefined1 auVar72 [64];
  undefined1 auVar92 [64];
  undefined1 auVar100 [64];
  undefined1 auVar108 [64];
  undefined1 auVar118 [64];
  undefined1 auVar120 [64];
  undefined1 auVar124 [64];
  undefined1 auVar17 [64];
  undefined1 auVar20 [64];
  undefined1 auVar25 [64];
  undefined1 auVar53 [64];
  undefined1 auVar82 [64];
  
  auVar9._8_12_ = in_register_00000008;
  auVar9._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  auVar17._20_4_ = unaff_r5;
  auVar17._0_20_ = auVar9;
  auVar17._24_4_ = unaff_r6;
  auVar17._28_20_ = in_register_0000001c;
  auVar17._48_4_ = unaff_r12;
  auVar17._52_4_ = unaff_r13;
  auVar17._56_8_ = in_register_00000038;
  auVar18._20_44_ = auVar17._20_44_;
  auVar18._0_16_ = auVar9._0_16_;
  auVar18._16_4_ = param_1;
  auVar19._44_20_ = auVar17._44_20_;
  auVar19._0_40_ = auVar18._0_40_;
  auVar19._40_4_ = param_1 ^ 1;
  auVar20._32_32_ = auVar19._32_32_;
  auVar10._0_28_ = auVar18._0_28_;
  auVar10._28_4_ = &g_player1 + param_1;
  auVar20._0_32_ = auVar10;
  auVar21._48_16_ = auVar17._48_16_;
  auVar21._0_44_ = auVar20._0_44_;
  auVar21._44_4_ = &g_player1 + auVar19._40_4_;
  auVar22._36_28_ = auVar21._36_28_;
  auVar22._32_4_ = g_attack_metadata_table_by_character[(&g_player1)[auVar19._40_4_].character_id];
  auVar22._0_32_ = auVar10;
  auVar24._12_52_ = auVar22._12_52_;
  auVar24._8_4_ = 0x21c08;
  auVar24._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar24;
  auVar23._8_56_ = auVar24._8_56_;
  auVar23._4_4_ = auStack_40;
  auVar23._0_4_ = fp;
  bVar126 = FUN_00025790(param_1);
  uVar131 = ac;
  iVar125 = CONCAT31(extraout_var,bVar126);
  auVar25._40_24_ = auVar23._40_24_;
  auVar25._0_36_ = auVar23._0_36_;
  auVar25._36_4_ = iVar125;
  auVar9 = auVar23._0_20_;
  (&DAT_00557f84)[auVar19._40_4_] = g14;
  (&DAT_00557f50)[param_1] = g14;
  (&DAT_00557f52)[param_1] = (&g_player1)[param_1].animation_flip;
  bVar127 = (&g_player1)[auVar19._40_4_].hit_attack;
  ac = ac & 0xfffffff8 | (uint)(1 < bVar127) << 2 | (uint)(bVar127 == 1) << 1 | (uint)(bVar127 == 0)
  ;
  if (((byte)ac & 1 | 1 < bVar127) == 1) goto LAB_000225f8;
  ac = uVar131 & 0xfffffff8 | (uint)((&g_player1)[param_1].action_state < 0xA_THROWCAUGHT);
  if (((byte)ac & 1 | 0xA_THROWCAUGHT < (&g_player1)[param_1].action_state) != 1) {
    bVar127 = (&g_player1)[param_1].mount_state;
    ac = uVar131 & 0xfffffff8 | (uint)(3 < bVar127) << 2 | (uint)(bVar127 == 3) << 1 |
         (uint)(bVar127 < 3);
    if (((byte)ac & 1 | 3 < bVar127) == 1) goto LAB_000225f8;
  }
  uVar129 = ac;
  DVar5 = (&g_player1)[param_1].action_state;
  uVar131 = ac & 0xfffffff8 | (uint)(0xC_GROUNDED < DVar5) << 2 | (uint)(DVar5 == 0xC_GROUNDED) << 1
  ;
  ac = uVar131 | DVar5 < 0xC_GROUNDED;
  if (((byte)(uVar131 >> 1) & 1) == 1) goto LAB_000225f8;
  uVar131 = uVar129 & 0xfffffff8 | (uint)(0xF_DOWNATTACKSTUN < DVar5) << 2 |
            (uint)(DVar5 == 0xF_DOWNATTACKSTUN) << 1;
  ac = uVar131 | DVar5 < 0xF_DOWNATTACKSTUN;
  if (((byte)(uVar131 >> 1) & 1) == 1) goto LAB_000225f8;
  ac = uVar129 & 0xfffffff8 | (uint)(DVar5 < 0xD_SPECIALMOVE);
  auVar26 = auVar25;
  if (((byte)ac & 1 | 0xD_SPECIALMOVE < DVar5) != 1) {
    auVar26._52_12_ = auVar23._52_12_;
    auVar26._0_48_ = auVar25._0_48_;
    auVar26._48_4_ = 0xff;
    bVar127 = (&g_player1)[param_1].action_code - CMD_NORM_UP_H;
    uVar131 = uVar129 & 0xfffffff8 | (uint)(0x17 < bVar127) << 2 | (uint)(bVar127 == 0x17) << 1;
    ac = uVar131 | bVar127 < 0x17;
    if (((byte)ac & 1 | (byte)(uVar131 >> 1) & 1) == 1) goto LAB_000225f8;
  }
  uVar131 = ac;
  ac = ac & 0xfffffff8 | (uint)((&g_player1)[param_1].action_state < 0x3_ATTACK);
  auVar27 = auVar26;
  if (((byte)ac & 1 | 0x3_ATTACK < (&g_player1)[param_1].action_state) != 1) {
    auVar27._56_8_ = auVar26._56_8_;
    auVar27._0_52_ = auVar26._0_52_;
    auVar27._52_4_ = 0xff;
    auVar9 = auVar26._0_20_;
    ac = uVar131 & 0xfffffff8;
    if ((byte)((&g_player1)[param_1].action_code + 0x8d) < 0x18) {
      bVar127 = (&g_player1)[param_1].attack_state;
      ac = uVar131 & 0xfffffff8 | (uint)(2 < bVar127) << 2 | (uint)(bVar127 == 2) << 1 |
           (uint)(bVar127 < 2);
      if (((byte)ac & 1 | 2 < bVar127) == 1) goto LAB_000225f8;
    }
  }
  uVar131 = ac;
  ac = ac & 0xfffffff8 | (uint)((&g_player1)[param_1].action_state < 0xD_SPECIALMOVE);
  auVar28 = auVar27;
  if (((byte)ac & 1 | 0xD_SPECIALMOVE < (&g_player1)[param_1].action_state) != 1) {
    auVar28._52_12_ = auVar27._52_12_;
    auVar28._0_48_ = auVar27._0_48_;
    auVar28._48_4_ = 0xff;
    auVar9 = auVar27._0_20_;
    bVar127 = (&g_player1)[param_1].action_code - 0x38;
    uVar131 = uVar131 & 0xfffffff8 | (uint)(3 < bVar127) << 2 | (uint)(bVar127 == 3) << 1;
    ac = uVar131 | bVar127 < 3;
    if (((byte)ac & 1 | (byte)(uVar131 >> 1) & 1) == 1) goto LAB_000225f8;
  }
  uVar131 = ac;
  auVar29._56_8_ = auVar28._56_8_;
  auVar29._0_52_ = auVar28._0_52_;
  auVar29._52_4_ = 0xff;
  auVar9 = auVar28._0_20_;
  uVar129 = ac & 0xfffffff8;
  if ((byte)((&g_player1)[param_1].action_state - 0x1_JUMP) < 2) {
    ac = ac & 0xfffffff8 | (uint)((&g_player1)[param_1].jump_state == 0);
    uVar129 = ac;
    if (((byte)ac & 1 | 1 < (&g_player1)[param_1].jump_state) != 1) {
      bVar127 = (&g_player1)[auVar19._40_4_].attack_height;
      uVar131 = uVar131 & 0xfffffff8 | (uint)(3 < bVar127) << 2 | (uint)(bVar127 == 3) << 1;
      ac = uVar131 | bVar127 < 3;
      uVar129 = ac;
      if (((byte)(uVar131 >> 1) & 1) == 1) goto LAB_000225f8;
    }
  }
  ac = uVar129;
  uVar131 = ac;
  DVar5 = (&g_player1)[param_1].action_state;
  ac = ac & 0xfffffff8 | (uint)(0xD_SPECIALMOVE < DVar5) << 2 |
       (uint)(DVar5 == 0xD_SPECIALMOVE) << 1 | (uint)(DVar5 < 0xD_SPECIALMOVE);
  if (((byte)ac & 1 | 0xD_SPECIALMOVE < DVar5) != 1) {
    DVar6 = (&g_player1)[param_1].action_code;
    auVar29._0_48_ = auVar28._0_48_;
    auVar29._48_4_ = 0x98;
    uVar131 = uVar131 & 0xfffffff8 | (uint)(DVar6 < (0x90|CMD_SITDOWN_FRONT)) << 2 |
              (uint)(DVar6 == (0x90|CMD_SITDOWN_FRONT)) << 1;
    ac = uVar131 | (0x90|CMD_SITDOWN_FRONT) < DVar6;
    if (((byte)(uVar131 >> 1) & 1) == 1) goto LAB_000225f8;
  }
  auVar30._24_40_ = auVar29._24_40_;
  auVar30._0_20_ = auVar29._0_20_;
  auVar30._20_4_ = 0xff;
  auStackX_0._12_52_ = auVar30._12_52_;
  auStackX_0._0_8_ = auVar29._0_8_;
  auStackX_0._8_4_ = 0x21ce8;
  auVar31._8_56_ = auStackX_0._8_56_;
  auVar31._4_4_ = auStack_40;
  auVar31._0_4_ = auStackX_0;
  uVar129 = FUN_000241e0(auVar19._40_4_);
  auVar32._28_36_ = auVar31._28_36_;
  auVar32._0_24_ = auVar31._0_24_;
  auVar32._24_4_ = uVar129;
  (&DAT_00557f82)[auVar19._40_4_] = (char)uVar129;
  (&DAT_00557f24)[auVar19._40_4_] = (&g_player1)[auVar19._40_4_].action_code;
  auVar33._56_8_ = auVar31._56_8_;
  auVar33._0_52_ = auVar32._0_52_;
  auVar33._52_4_ = 3;
  (&DAT_00557f20)[param_1] = 3;
  auStack_40._12_52_ = auVar33._12_52_;
  auStack_40._0_8_ = auVar31._0_8_;
  auStack_40._8_4_ = 0x21d14;
  auVar34._8_56_ = auStack_40._8_56_;
  auVar34._4_4_ = &auStack_c0;
  auVar34._0_4_ = auStack_40;
  iVar130 = FUN_00023b80(param_1);
  uVar131 = ac;
  auVar41._52_12_ = auVar34._52_12_;
  auVar41._0_48_ = auVar34._0_48_;
  auVar36._56_8_ = auVar34._56_8_;
  auVar35._0_20_ = auVar34._0_20_;
  auVar38._0_8_ = auVar34._0_8_;
  fp = &auStack_80;
  if (iVar130 == 1) {
LAB_00021d20:
    if ((&g_player1)[param_1].upside_down_head == '\x01') {
      ac = ac & 0xfffffff8 | (uint)(1 < iVar125) << 2 | (uint)(iVar125 == 1) << 1 |
           (uint)(iVar125 < 1);
      auVar35._24_40_ = auVar34._24_40_;
      if (((byte)ac & 1 | 1 < iVar125) == 1) {
        auVar40._20_4_ = 0x44;
        auVar40._0_20_ = auVar35._0_20_;
        auVar40._24_40_ = auVar35._24_40_;
        auVar49._0_48_ = auVar40._0_48_;
        auVar49._48_4_ = 8;
        (&DAT_00557f54)[param_1] = 8;
        auVar49._52_4_ = 0xff;
        auVar49._56_8_ = auVar36._56_8_;
        bVar127 = 0x44;
LAB_00021e04:
        uVar131 = auVar49._4_4_ + 0x3f;
        auVar51._12_52_ = auVar49._12_52_;
        auVar51._0_8_ = auVar49._0_8_;
        auVar51._8_4_ = 0x21e0c;
        *fp = auVar51;
        auVar50._8_56_ = auVar51._8_56_;
        auVar50._0_8_ = CONCAT44(uVar131,fp) & 0xffffffc0ffffffff;
        FUN_00023ea0(bVar127,param_1);
        fp = (undefined1 (*) [64])((uVar131 & 0xffffffc0) + 0x40);
        auVar52._12_52_ = auVar50._12_52_;
        auVar52._0_8_ = auVar50._0_8_;
        auVar52._8_4_ = 0x21e18;
        *(undefined1 (*) [64])(uVar131 & 0xffffffc0) = auVar52;
        auVar39._8_56_ = auVar52._8_56_;
        auVar39._0_8_ = CONCAT44((uVar131 & 0xffffffc0) + 0x80,uVar131) & 0xffffffffffffffc0;
        uVar131 = FUN_00023c60(param_1,0);
      }
      else {
        auVar35._20_4_ = 0x45;
        auVar36._0_48_ = auVar35._0_48_;
        auVar36._48_4_ = 9;
        (&DAT_00557f54)[param_1] = 9;
        auVar36._52_4_ = 0xff;
        auVar38._12_52_ = auVar36._12_52_;
        auVar38._8_4_ = 0x21d4c;
        auVar37._8_56_ = auVar38._8_56_;
        auVar37._4_4_ = auStack_c0;
        auVar37._0_4_ = &auStack_80;
        auStack_80 = auVar38;
        FUN_00023ea0(0x45,param_1);
        fp = &auStack_100;
        auStack_c0._12_52_ = auVar37._12_52_;
        auStack_c0._0_8_ = auVar37._0_8_;
        auStack_c0._8_4_ = 0x21d58;
        auVar39._8_56_ = auStack_c0._8_56_;
        auVar39._4_4_ = auStack_140;
        auVar39._0_4_ = auStack_c0;
        uVar131 = FUN_00023c60(param_1,1);
      }
LAB_00021e18:
      *(uint *)(&DAT_00557f58 + param_1 * 4) = uVar131;
    }
    else if (iVar125 == 1) {
      auVar41._48_4_ = 0xff;
      bVar127 = auVar22._32_4_[(uVar129 & 0xff) * 0x14 + 9];
      auVar39._24_40_ = auVar41._24_40_;
      auVar39[0x14] = bVar127;
      auVar39._0_20_ = auVar35._0_20_;
      auVar39._21_3_ = 0;
      ac = ac & 0xfffffff8 | (uint)(bVar127 != 0xff) << 2 | (uint)(bVar127 == 0xff) << 1;
      if (((byte)(ac >> 1) & 1) != 1) {
        auVar42._0_52_ = auVar39._0_52_;
        auVar42._52_4_ = 9;
        auVar42._56_8_ = auVar36._56_8_;
        (&DAT_00557f54)[param_1] = 9;
        auStack_80._12_52_ = auVar42._12_52_;
        auStack_80._8_4_ = 0x21dac;
        auStack_80._0_8_ = auVar38._0_8_;
        auVar43._8_56_ = auStack_80._8_56_;
        auVar43._4_4_ = auStack_c0;
        auVar43._0_4_ = &auStack_80;
        bVar127 = FUN_00023f30(bVar127,param_1);
        auVar44._21_3_ = extraout_var_00;
        auVar44[0x14] = bVar127;
        auVar44._24_40_ = auVar43._24_40_;
        auVar44._0_20_ = auVar43._0_20_;
        auStack_c0._12_52_ = auVar44._12_52_;
        auStack_c0._0_8_ = auVar43._0_8_;
        auStack_c0._8_4_ = 0x21dbc;
        auVar45._8_56_ = auStack_c0._8_56_;
        auVar45._4_4_ = auStack_100;
        auVar45._0_4_ = auStack_c0;
        FUN_00023ea0(bVar127,param_1);
        fp = &auStack_140;
        auStack_100._12_52_ = auVar45._12_52_;
        auStack_100._0_8_ = auVar45._0_8_;
        auStack_100._8_4_ = 0x21dc8;
        auVar39._8_56_ = auStack_100._8_56_;
        auVar39._4_4_ = auStack_180;
        auVar39._0_4_ = auStack_100;
        uVar131 = FUN_00023c60(param_1,1);
        goto LAB_00021e18;
      }
    }
    else {
      auVar46._48_4_ = 0xff;
      auVar46._0_48_ = auVar41._0_48_;
      auVar46._52_12_ = auVar41._52_12_;
      bVar127 = auVar22._32_4_[(uVar129 & 0xff) * 0x14 + 8];
      auVar39._24_40_ = auVar46._24_40_;
      auVar39[0x14] = bVar127;
      auVar39._0_20_ = auVar35._0_20_;
      auVar39._21_3_ = 0;
      ac = ac & 0xfffffff8 | (uint)(bVar127 != 0xff) << 2 | (uint)(bVar127 == 0xff) << 1;
      if (((byte)(ac >> 1) & 1) != 1) {
        auVar47._0_52_ = auVar39._0_52_;
        auVar47._52_4_ = 8;
        auVar47._56_8_ = auVar36._56_8_;
        (&DAT_00557f54)[param_1] = 8;
        fp = &auStack_c0;
        auStack_80._12_52_ = auVar47._12_52_;
        auStack_80._8_4_ = 0x21dfc;
        auStack_80._0_8_ = auVar38._0_8_;
        auVar48._8_56_ = auStack_80._8_56_;
        auVar48._4_4_ = auStack_100;
        auVar48._0_4_ = &auStack_80;
        bVar127 = FUN_00023f30(bVar127,param_1);
        auVar49._21_3_ = extraout_var_01;
        auVar49[0x14] = bVar127;
        auVar49._24_40_ = auVar48._24_40_;
        auVar49._0_20_ = auVar48._0_20_;
        goto LAB_00021e04;
      }
    }
    auVar53._52_12_ = auVar39._52_12_;
    auVar11._0_48_ = auVar39._0_48_;
    auVar11._48_4_ = 0xff;
    auVar53._0_52_ = auVar11;
    if ((&g_player1)[param_1].action_state == 0x2_JUMPATTACK ||
        (&g_player1)[param_1].action_state == 0x3_ATTACK) {
LAB_00021e3c:
      auVar53._56_8_ = auVar39._56_8_;
      auVar53._52_4_ = 1;
      (&DAT_00557f22)[param_1] = 1;
    }
    else {
      if ((&g_player1)[param_1].action_state == 0xE_DOWNATTACK) goto LAB_00021e3c;
      if ((&g_player1)[param_1].action_state == 0x1_JUMP) {
        (&DAT_00557f22)[param_1] = g14;
      }
      else {
        auVar53._48_4_ = 2;
        auVar53._0_48_ = auVar11._0_48_;
        (&DAT_00557f22)[param_1] = 2;
      }
    }
    auVar34._56_8_ = auVar53._56_8_;
    auVar34._0_52_ = auVar53._0_52_;
    auVar15._0_48_ = auVar53._0_48_;
    if ((byte)((&DAT_00557f48)[param_1] - 0x38) < 2) {
      auVar15._48_4_ = 0x66666666;
      auVar15._52_4_ = 0x3ff66666;
      auVar34._0_56_ = auVar15;
      fVar3 = (float10)auVar15._48_8_;
      fVar2 = (float10)CONCAT44(param_1 * 0x2d,*(undefined4 *)(&DAT_005552d4 + param_1 * 0xb4));
      ac = ac & 0xfffffff8;
      if (!NAN(fVar2) && !NAN(fVar3)) {
        ac = ac | (uint)(fVar2 == fVar3) << 1;
        ac = ac | fVar3 < fVar2;
      }
      uVar1 = ac;
      if (((byte)ac & 1 | (byte)(ac >> 1) & 1) != 1) {
        if ((&DAT_00557f54)[param_1] == '\b') {
          uVar131 = ac & 0xfffffff8 | (uint)((&g_player1)[param_1].down_state != '\0') << 2;
          ac = uVar131 | (uint)((&g_player1)[param_1].down_state == '\0') << 1;
          bVar127 = 0x3c;
          if (((byte)(uVar131 >> 2) & 1) != 1) {
            bVar127 = 0x3a;
          }
        }
        else {
          uVar131 = ac & 0xfffffff8 | (uint)((&g_player1)[param_1].down_state != '\0') << 2;
          ac = uVar131 | (uint)((&g_player1)[param_1].down_state == '\0') << 1;
          bVar127 = 0x3d;
          if (((byte)(uVar131 >> 2) & 1) != 1) {
            bVar127 = 0x3b;
          }
        }
LAB_00021f60:
        pauVar4 = (undefined1 (*) [64])(auVar39._4_4_ + 0x3fU & 0xffffffc0);
        auVar54._12_52_ = auVar34._12_52_;
        auVar54._0_8_ = auVar34._0_8_;
        auVar54._8_4_ = 0x21f68;
        *fp = auVar54;
        auVar34._8_56_ = auVar54._8_56_;
        auVar34._4_4_ = pauVar4 + 1;
        auVar34._0_4_ = fp;
        FUN_00023ea0(bVar127,param_1);
        fp = pauVar4;
        uVar1 = ac;
      }
    }
    else {
      auVar34._52_4_ = 0xff;
      uVar1 = ac & 0xfffffff8;
      if ((byte)((&DAT_00557f48)[param_1] + 0xa6) < 2) {
        auVar16._48_4_ = 0xcccccccd;
        auVar16._0_48_ = auVar15._0_48_;
        auVar16._52_4_ = 0x3ffccccc;
        auVar34._0_56_ = auVar16;
        fVar3 = (float10)auVar16._48_8_;
        fVar2 = (float10)CONCAT44(param_1 * 0x2d,*(undefined4 *)(&DAT_005552d4 + param_1 * 0xb4));
        ac = ac & 0xfffffff8;
        if (!NAN(fVar2) && !NAN(fVar3)) {
          ac = ac | (uint)(fVar2 == fVar3) << 1;
          ac = ac | fVar3 < fVar2;
        }
        uVar1 = ac;
        if (((byte)ac & 1 | (byte)(ac >> 1) & 1) != 1) {
          bVar127 = (&DAT_00557f54)[param_1];
          uVar131 = ac & 0xfffffff8 | (uint)(8 < bVar127) << 2;
          ac = uVar131 | (uint)(bVar127 == 8) << 1 | (uint)(bVar127 < 8);
          bVar127 = 0x5d;
          if (((byte)ac & 1 | (byte)(uVar131 >> 2) & 1) != 1) {
            bVar127 = 0x5c;
          }
          goto LAB_00021f60;
        }
      }
    }
  }
  else {
    if ((&g_player1)[param_1].mount_state == '\x01') goto LAB_00021d20;
    auVar55._0_52_ = auVar34._0_52_;
    if (iVar125 == 1) {
      if ((&g_player1)[param_1].pose_state == '\0') {
        auVar55._52_4_ = 0xff;
        auVar55._56_8_ = auVar36._56_8_;
        bVar127 = auVar22._32_4_[(uVar129 & 0xff) * 0x14 + 1];
        auVar34._24_40_ = auVar55._24_40_;
        auVar34[0x14] = bVar127;
        auVar34._0_20_ = auVar35._0_20_;
        auVar34._21_3_ = 0;
        ac = ac & 0xfffffff8 | (uint)(bVar127 != 0xff) << 2 | (uint)(bVar127 == 0xff) << 1;
        uVar1 = ac;
        if (((byte)(ac >> 1) & 1) != 1) {
          auVar56._52_12_ = auVar55._52_12_;
          auVar56._0_48_ = auVar34._0_48_;
          auVar56._48_4_ = 1;
          (&DAT_00557f54)[param_1] = 1;
          auStack_80._12_52_ = auVar56._12_52_;
          auStack_80._8_4_ = 0x21fa8;
          auStack_80._0_8_ = auVar38._0_8_;
          auVar57._8_56_ = auStack_80._8_56_;
          auVar57._4_4_ = auStack_c0;
          auVar57._0_4_ = &auStack_80;
          bVar127 = FUN_00023f30(bVar127,param_1);
          auVar58._21_3_ = extraout_var_02;
          auVar58[0x14] = bVar127;
          auVar58._24_40_ = auVar57._24_40_;
          auVar58._0_20_ = auVar57._0_20_;
          auStack_c0._12_52_ = auVar58._12_52_;
          auStack_c0._0_8_ = auVar57._0_8_;
          auStack_c0._8_4_ = 0x21fb8;
          auVar59._8_56_ = auStack_c0._8_56_;
          auVar59._4_4_ = auStack_100;
          auVar59._0_4_ = auStack_c0;
          FUN_00023ea0(bVar127,param_1);
          fp = &auStack_140;
          auStack_100._12_52_ = auVar59._12_52_;
          auStack_100._0_8_ = auVar59._0_8_;
          auStack_100._8_4_ = 0x21fc4;
          auVar34._8_56_ = auStack_100._8_56_;
          auVar34._4_4_ = (undefined1 (*) [64])auStack_180;
          auVar34._0_4_ = auStack_100;
          uVar131 = FUN_00023c60(param_1,1);
          goto LAB_000224f0;
        }
      }
      else {
        auVar60._52_4_ = 0xff;
        auVar60._0_52_ = auVar55._0_52_;
        auVar60._56_8_ = auVar36._56_8_;
        bVar127 = auVar22._32_4_[(uVar129 & 0xff) * 0x14 + 5];
        auVar34._24_40_ = auVar60._24_40_;
        auVar34[0x14] = bVar127;
        auVar34._0_20_ = auVar35._0_20_;
        auVar34._21_3_ = 0;
        ac = ac & 0xfffffff8 | (uint)(bVar127 != 0xff) << 2 | (uint)(bVar127 == 0xff) << 1;
        uVar1 = ac;
        if (((byte)(ac >> 1) & 1) != 1) {
          auVar61._52_12_ = auVar60._52_12_;
          auVar61._0_48_ = auVar34._0_48_;
          auVar61._48_4_ = 5;
          (&DAT_00557f54)[param_1] = 5;
          auStack_80._12_52_ = auVar61._12_52_;
          auStack_80._8_4_ = 0x21ff8;
          auStack_80._0_8_ = auVar38._0_8_;
          auVar62._8_56_ = auStack_80._8_56_;
          auVar62._4_4_ = auStack_c0;
          auVar62._0_4_ = &auStack_80;
          bVar127 = FUN_00023f30(bVar127,param_1);
          auVar63._21_3_ = extraout_var_03;
          auVar63[0x14] = bVar127;
          auVar63._24_40_ = auVar62._24_40_;
          auVar63._0_20_ = auVar62._0_20_;
          auStack_c0._12_52_ = auVar63._12_52_;
          auStack_c0._0_8_ = auVar62._0_8_;
          auStack_c0._8_4_ = 0x22008;
          auVar64._8_56_ = auStack_c0._8_56_;
          auVar64._4_4_ = auStack_100;
          auVar64._0_4_ = auStack_c0;
          FUN_00023ea0(bVar127,param_1);
          fp = &auStack_140;
          auStack_100._12_52_ = auVar64._12_52_;
          auStack_100._0_8_ = auVar64._0_8_;
          auStack_100._8_4_ = 0x22014;
          auVar34._8_56_ = auStack_100._8_56_;
          auVar34._4_4_ = (undefined1 (*) [64])auStack_180;
          auVar34._0_4_ = auStack_100;
          uVar131 = FUN_00023c60(param_1,1);
          goto LAB_000224f0;
        }
      }
    }
    else {
      auVar66._0_24_ = auVar34._0_24_;
      if ((&g_player1)[param_1].pose_state != '\0') {
        if ((&g_player1)[param_1].guard_state == '\x01') {
          uVar133 = ac & 0xfffffff8 |
                    (uint)((&g_player1)[auVar19._40_4_].attack_height == '\x01') << 1;
          ac = uVar133 | (&g_player1)[auVar19._40_4_].attack_height == '\0';
          uVar1 = ac;
          if (((byte)ac & 1 | (byte)(uVar133 >> 1) & 1) != 1) {
            auVar93._52_4_ = 0xff;
            auVar93._0_52_ = auVar55._0_52_;
            auVar93._56_8_ = auVar36._56_8_;
            auVar94._28_36_ = auVar93._28_36_;
            auVar94._24_4_ = auVar22._32_4_ + (uVar129 & 0xff) * 0x14;
            auVar94._0_24_ = auVar66._0_24_;
            bVar127 = auVar94._24_4_[2];
            auVar34._24_40_ = auVar94._24_40_;
            auVar34[0x14] = bVar127;
            auVar34._0_20_ = auVar35._0_20_;
            auVar34._21_3_ = 0;
            ac = uVar131 & 0xfffffff8 | (uint)(bVar127 != 0xff) << 2 | (uint)(bVar127 == 0xff) << 1;
            uVar1 = ac;
            if (((byte)(ac >> 1) & 1) != 1) {
              auStack_80._12_52_ = auVar34._12_52_;
              auStack_80._8_4_ = 0x222d4;
              auStack_80._0_8_ = auVar38._0_8_;
              auVar95._8_56_ = auStack_80._8_56_;
              auVar95._4_4_ = auStack_100;
              auVar95._0_4_ = &auStack_80;
              bVar127 = FUN_000243c0(bVar127,param_1);
              uVar131 = ac & 0xfffffff8 | (uint)(7 < bVar127) << 2 | (uint)(bVar127 == 7) << 1;
              ac = uVar131 | bVar127 < 7;
              fp = &auStack_c0;
              if (((byte)(uVar131 >> 1) & 1) != 1) {
                fp = &auStack_100;
                auStack_c0._12_52_ = auVar95._12_52_;
                auStack_c0._0_8_ = auVar95._0_8_;
                auStack_c0._8_4_ = 0x222e4;
                auVar96._8_56_ = auStack_c0._8_56_;
                auVar96._4_4_ = auStack_140;
                auVar96._0_4_ = &auStack_c0;
                uVar128 = FUN_00025430(auVar19._40_4_);
                uVar129 = ac;
                uVar8 = (&g_player1)[param_1].currentHealth;
                auVar95._52_12_ = auVar96._52_12_;
                auVar95._0_48_ = auVar96._0_48_;
                auVar95._48_4_ = 0xffff;
                uVar131 = ac & 0xfffffff8 | (uint)(uVar8 < uVar128) << 2 |
                          (uint)(uVar8 == uVar128) << 1;
                ac = uVar131 | uVar128 < uVar8;
                if (((byte)ac & 1 | (byte)(uVar131 >> 1) & 1) != 1) {
                  cVar7 = auVar94._24_4_[3];
                  ac = uVar129 & 0xfffffff8 | (uint)(cVar7 != -1) << 2 | (uint)(cVar7 == -1) << 1;
                  if (((byte)(ac >> 1) & 1) != 1) {
                    auVar95._0_20_ = auVar96._0_20_;
                    auVar95[0x14] = cVar7;
                    auVar95._21_3_ = 0;
                  }
                }
              }
              auVar97._56_8_ = auVar95._56_8_;
              auVar97._0_52_ = auVar95._0_52_;
              auVar97._52_4_ = 2;
              (&DAT_00557f54)[param_1] = 2;
              auVar98._52_12_ = auVar97._52_12_;
              auVar98._0_48_ = auVar95._0_48_;
              auVar98._48_4_ = 0xff;
              pauVar4 = (undefined1 (*) [64])(auVar95._4_4_ + 0x3fU & 0xffffffc0);
              auVar100._12_52_ = auVar98._12_52_;
              auVar100._0_8_ = auVar95._0_8_;
              auVar100._8_4_ = 0x22320;
              *fp = auVar100;
              auVar99._8_56_ = auVar100._8_56_;
              auVar99._4_4_ = pauVar4 + 1;
              auVar99._0_4_ = fp;
              bVar127 = FUN_00023f30(auVar95[0x14],param_1);
              auVar73._21_3_ = extraout_var_07;
              auVar73[0x14] = bVar127;
              auVar73._24_40_ = auVar99._24_40_;
              auVar73._0_20_ = auVar99._0_20_;
              fp = pauVar4;
              goto LAB_000224dc;
            }
          }
        }
        else {
          if ((&g_player1)[param_1].guard_state == '\x02') {
            auVar101._52_4_ = 0xff;
            auVar101._0_52_ = auVar55._0_52_;
            auVar101._56_8_ = auVar36._56_8_;
            auVar102._28_36_ = auVar101._28_36_;
            auVar102._24_4_ = auVar22._32_4_ + (uVar129 & 0xff) * 0x14;
            auVar102._0_24_ = auVar66._0_24_;
            bVar127 = auVar102._24_4_[6];
            auVar34._24_40_ = auVar102._24_40_;
            auVar34[0x14] = bVar127;
            auVar34._0_20_ = auVar35._0_20_;
            auVar34._21_3_ = 0;
            ac = ac & 0xfffffff8 | (uint)(bVar127 != 0xff) << 2 | (uint)(bVar127 == 0xff) << 1;
            uVar1 = ac;
            if (((byte)(ac >> 1) & 1) != 1) {
              auStack_80._12_52_ = auVar34._12_52_;
              auStack_80._8_4_ = 0x2235c;
              auStack_80._0_8_ = auVar38._0_8_;
              auVar103._8_56_ = auStack_80._8_56_;
              auVar103._4_4_ = auStack_100;
              auVar103._0_4_ = &auStack_80;
              bVar127 = FUN_000243c0(bVar127,param_1);
              uVar131 = ac & 0xfffffff8 | (uint)(7 < bVar127) << 2 | (uint)(bVar127 == 7) << 1;
              ac = uVar131 | bVar127 < 7;
              fp = &auStack_c0;
              if (((byte)(uVar131 >> 1) & 1) != 1) {
                fp = &auStack_100;
                auStack_c0._12_52_ = auVar103._12_52_;
                auStack_c0._0_8_ = auVar103._0_8_;
                auStack_c0._8_4_ = 0x2236c;
                auVar104._8_56_ = auStack_c0._8_56_;
                auVar104._4_4_ = auStack_140;
                auVar104._0_4_ = &auStack_c0;
                uVar128 = FUN_00025430(auVar19._40_4_);
                uVar129 = ac;
                uVar8 = (&g_player1)[param_1].currentHealth;
                auVar103._52_12_ = auVar104._52_12_;
                auVar103._0_48_ = auVar104._0_48_;
                auVar103._48_4_ = 0xffff;
                uVar131 = ac & 0xfffffff8 | (uint)(uVar8 < uVar128) << 2 |
                          (uint)(uVar8 == uVar128) << 1;
                ac = uVar131 | uVar128 < uVar8;
                if (((byte)ac & 1 | (byte)(uVar131 >> 1) & 1) != 1) {
                  cVar7 = auVar102._24_4_[7];
                  ac = uVar129 & 0xfffffff8 | (uint)(cVar7 != -1) << 2 | (uint)(cVar7 == -1) << 1;
                  if (((byte)(ac >> 1) & 1) != 1) {
                    auVar103._0_20_ = auVar104._0_20_;
                    auVar103[0x14] = cVar7;
                    auVar103._21_3_ = 0;
                  }
                }
              }
              auVar105._56_8_ = auVar103._56_8_;
              auVar105._0_52_ = auVar103._0_52_;
              auVar105._52_4_ = 6;
              (&DAT_00557f54)[param_1] = 6;
              auVar106._52_12_ = auVar105._52_12_;
              auVar106._0_48_ = auVar103._0_48_;
              auVar106._48_4_ = 0xff;
              pauVar4 = (undefined1 (*) [64])(auVar103._4_4_ + 0x3fU & 0xffffffc0);
              auVar108._12_52_ = auVar106._12_52_;
              auVar108._0_8_ = auVar103._0_8_;
              auVar108._8_4_ = 0x223a8;
              *fp = auVar108;
              auVar107._8_56_ = auVar108._8_56_;
              auVar107._4_4_ = pauVar4 + 1;
              auVar107._0_4_ = fp;
              bVar127 = FUN_00023f30(auVar103[0x14],param_1);
              auVar73._21_3_ = extraout_var_08;
              auVar73[0x14] = bVar127;
              auVar73._24_40_ = auVar107._24_40_;
              auVar73._0_20_ = auVar107._0_20_;
              fp = pauVar4;
              goto LAB_000224dc;
            }
            goto LAB_000224f8;
          }
          auVar109._52_4_ = 0xff;
          auVar109._0_52_ = auVar55._0_52_;
          auVar109._56_8_ = auVar36._56_8_;
          if ((byte)((&g_player1)[param_1].action_state - 0x2_JUMPATTACK) < 2) {
            if (1 < (&g_player1)[param_1].attack_state) goto LAB_000223d0;
          }
          else {
LAB_000223d0:
            if ((&g_player1)[param_1].action_state == 0xD_SPECIALMOVE) {
              auVar109._48_4_ = 0x99;
              auVar109._0_48_ = auVar41._0_48_;
              if ((&g_player1)[param_1].action_code == (0x90|CMD_SITDOWN_BACK)) goto LAB_000223ec;
            }
            if ((&g_player1)[param_1].action_state != 0x8_CRITICALSTUN) {
              auVar112._56_8_ = auVar109._56_8_;
              auVar112._0_52_ = auVar109._0_52_;
              auVar112._52_4_ = 0xff;
              auVar34._24_40_ = auVar112._24_40_;
              auVar34._0_20_ = auVar109._0_20_;
              auVar34[0x14] = auVar22._32_4_[(uVar129 & 0xff) * 0x14 + 4];
              auVar34._21_3_ = 0;
              uVar1 = ac & 0xfffffff8 |
                      (uint)(auVar22._32_4_[(uVar129 & 0xff) * 0x14 + 4] == -1) << 1;
              if (((byte)(uVar1 >> 1) & 1) == 1) goto LAB_000224f8;
              DVar5 = (&g_player1)[param_1].action_state;
              ac = ac & 0xfffffff8 | (uint)(0x3_ATTACK < DVar5) << 2 |
                   (uint)(DVar5 == 0x3_ATTACK) << 1 | (uint)(DVar5 < 0x3_ATTACK);
              auStack_80._0_8_ = auVar109._0_8_;
              auStack_80._12_52_ = auVar34._12_52_;
              if (((byte)ac & 1 | 0x3_ATTACK < DVar5) == 1) {
LAB_00022480:
                auStack_80._8_4_ = 0x22488;
                auVar114._8_56_ = auStack_80._8_56_;
                auVar114._4_4_ = auStack_100;
                auVar114._0_4_ = &auStack_80;
                uVar131 = FUN_00025430(auVar19._40_4_);
              }
              else {
                uVar129 = (uint)(&g_player1)[param_1].attack_state;
                ac = uVar131 & 0xfffffff8 | (uint)(2 < uVar129) << 2 | (uint)(uVar129 == 2) << 1 |
                     (uint)(uVar129 < 2);
                if (((byte)ac & 1 | 2 < uVar129) == 1) goto LAB_00022480;
                auStack_80._8_4_ = 0x22448;
                auVar113._8_56_ = auStack_80._8_56_;
                auVar113._4_4_ = auStack_100;
                auVar113._0_4_ = &auStack_80;
                FUN_00025430(auVar19._40_4_);
                auVar114._52_12_ = auVar113._52_12_;
                auVar114._0_48_ = auVar113._0_48_;
                auVar114._48_4_ = 0xffff;
                uVar131 = (uint)(float10)(int)uVar129;
              }
              uVar1 = ac;
              fp = &auStack_c0;
              uVar133 = (uint)*(ushort *)(auVar114._28_4_ + 0x20);
              auVar115._52_12_ = auVar114._52_12_;
              auVar14._0_48_ = auVar114._0_48_;
              auVar14._48_4_ = 0xffff;
              auVar115._0_52_ = auVar14;
              uVar131 = uVar131 & 0xffff;
              uVar129 = ac & 0xfffffff8 | (uint)(uVar133 < uVar131) << 2 |
                        (uint)(uVar133 == uVar131) << 1;
              ac = uVar129 | uVar131 < uVar133;
              if (((byte)ac & 1 | (byte)(uVar129 >> 1) & 1) != 1) {
                auVar115._56_8_ = auVar114._56_8_;
                auVar115._52_4_ = 0xff;
                cVar7 = *(char *)(auVar114._32_4_ + 7 + (auVar114._24_4_ & 0xff) * 0x14);
                ac = uVar1 & 0xfffffff8 | (uint)(cVar7 != -1) << 2 | (uint)(cVar7 == -1) << 1;
                if (((byte)(ac >> 1) & 1) != 1) {
                  auVar115._0_20_ = auVar114._0_20_;
                  auVar115[0x14] = cVar7;
                  auVar115._21_3_ = 0;
                }
              }
              auVar77._52_12_ = auVar115._52_12_;
              auVar77._0_48_ = auVar115._0_48_;
              auVar77._48_4_ = 4;
              goto LAB_000224bc;
            }
          }
LAB_000223ec:
          auVar110._56_8_ = auVar109._56_8_;
          auVar110._0_52_ = auVar109._0_52_;
          auVar110._52_4_ = 0xff;
          bVar127 = auVar22._32_4_[(uVar129 & 0xff) * 0x14 + 7];
          auVar34._24_40_ = auVar110._24_40_;
          auVar34._0_20_ = auVar109._0_20_;
          auVar34[0x14] = bVar127;
          auVar34._21_3_ = 0;
          ac = ac & 0xfffffff8 | (uint)(bVar127 != 0xff) << 2 | (uint)(bVar127 == 0xff) << 1;
          uVar1 = ac;
          if (((byte)(ac >> 1) & 1) != 1) {
            auVar111._52_12_ = auVar110._52_12_;
            auVar111._0_48_ = auVar34._0_48_;
            auVar111._48_4_ = 7;
            (&DAT_00557f54)[param_1] = 7;
            goto LAB_000224cc;
          }
        }
        goto LAB_000224f8;
      }
      if ((&g_player1)[param_1].guard_state == '\x01') {
        auVar65._52_4_ = 0xff;
        auVar65._0_52_ = auVar55._0_52_;
        auVar65._56_8_ = auVar36._56_8_;
        auVar66._28_36_ = auVar65._28_36_;
        auVar66._24_4_ = auVar22._32_4_ + (uVar129 & 0xff) * 0x14;
        bVar127 = auVar66._24_4_[2];
        auVar34._24_40_ = auVar66._24_40_;
        auVar34[0x14] = bVar127;
        auVar34._0_20_ = auVar35._0_20_;
        auVar34._21_3_ = 0;
        ac = ac & 0xfffffff8 | (uint)(bVar127 != 0xff) << 2 | (uint)(bVar127 == 0xff) << 1;
        uVar1 = ac;
        if (((byte)(ac >> 1) & 1) != 1) {
          auStack_80._12_52_ = auVar34._12_52_;
          auStack_80._8_4_ = 0x22050;
          auStack_80._0_8_ = auVar38._0_8_;
          auVar67._8_56_ = auStack_80._8_56_;
          auVar67._4_4_ = auStack_100;
          auVar67._0_4_ = &auStack_80;
          bVar127 = FUN_000243c0(bVar127,param_1);
          uVar131 = ac & 0xfffffff8 | (uint)(7 < bVar127) << 2 | (uint)(bVar127 == 7) << 1;
          ac = uVar131 | bVar127 < 7;
          fp = &auStack_c0;
          if (((byte)(uVar131 >> 1) & 1) != 1) {
            fp = &auStack_100;
            auStack_c0._12_52_ = auVar67._12_52_;
            auStack_c0._0_8_ = auVar67._0_8_;
            auStack_c0._8_4_ = 0x22060;
            auVar68._8_56_ = auStack_c0._8_56_;
            auVar68._4_4_ = auStack_140;
            auVar68._0_4_ = &auStack_c0;
            uVar128 = FUN_00025430(auVar19._40_4_);
            uVar129 = ac;
            uVar8 = (&g_player1)[param_1].currentHealth;
            auVar67._52_12_ = auVar68._52_12_;
            auVar67._0_48_ = auVar68._0_48_;
            auVar67._48_4_ = 0xffff;
            uVar131 = ac & 0xfffffff8 | (uint)(uVar8 < uVar128) << 2 | (uint)(uVar8 == uVar128) << 1
            ;
            ac = uVar131 | uVar128 < uVar8;
            if (((byte)ac & 1 | (byte)(uVar131 >> 1) & 1) != 1) {
              cVar7 = auVar66._24_4_[3];
              ac = uVar129 & 0xfffffff8 | (uint)(cVar7 != -1) << 2 | (uint)(cVar7 == -1) << 1;
              if (((byte)(ac >> 1) & 1) != 1) {
                auVar67._0_20_ = auVar68._0_20_;
                auVar67[0x14] = cVar7;
                auVar67._21_3_ = 0;
              }
            }
          }
          auVar69._56_8_ = auVar67._56_8_;
          auVar69._0_52_ = auVar67._0_52_;
          auVar69._52_4_ = 2;
          (&DAT_00557f54)[param_1] = 2;
          auVar70._52_12_ = auVar69._52_12_;
          auVar70._0_48_ = auVar67._0_48_;
          auVar70._48_4_ = 0xff;
          pauVar4 = (undefined1 (*) [64])(auVar67._4_4_ + 0x3fU & 0xffffffc0);
          auVar72._12_52_ = auVar70._12_52_;
          auVar72._0_8_ = auVar67._0_8_;
          auVar72._8_4_ = 0x2209c;
          *fp = auVar72;
          auVar71._8_56_ = auVar72._8_56_;
          auVar71._4_4_ = pauVar4 + 1;
          auVar71._0_4_ = fp;
          bVar127 = FUN_00023f30(auVar67[0x14],param_1);
          auVar73._21_3_ = extraout_var_04;
          auVar73[0x14] = bVar127;
          auVar73._24_40_ = auVar71._24_40_;
          auVar73._0_20_ = auVar71._0_20_;
          fp = pauVar4;
          goto LAB_000224dc;
        }
        goto LAB_000224f8;
      }
      if ((&g_player1)[param_1].guard_state == '\x02') {
        if ((&g_player1)[auVar19._40_4_].attack_height < 2) {
          auVar74._52_4_ = 0xff;
          auVar74._0_52_ = auVar55._0_52_;
          auVar74._56_8_ = auVar36._56_8_;
          auVar75._28_36_ = auVar74._28_36_;
          auVar75._24_4_ = auVar22._32_4_ + (uVar129 & 0xff) * 0x14;
          auVar75._0_24_ = auVar66._0_24_;
          cVar7 = *auVar75._24_4_;
          auVar34._24_40_ = auVar75._24_40_;
          auVar34[0x14] = cVar7;
          auVar34._0_20_ = auVar35._0_20_;
          auVar34._21_3_ = 0;
          ac = ac & 0xfffffff8 | (uint)(cVar7 != -1) << 2 | (uint)(cVar7 == -1) << 1;
          uVar1 = ac;
          if (((byte)(ac >> 1) & 1) == 1) goto LAB_000224f8;
          fp = &auStack_c0;
          auStack_80._12_52_ = auVar34._12_52_;
          auStack_80._8_4_ = 0x220dc;
          auStack_80._0_8_ = auVar38._0_8_;
          auVar76._8_56_ = auStack_80._8_56_;
          auVar76._4_4_ = auStack_100;
          auVar76._0_4_ = &auStack_80;
          uVar128 = FUN_00025430(auVar19._40_4_);
          uVar129 = ac;
          uVar8 = (&g_player1)[param_1].currentHealth;
          auVar77._52_12_ = auVar76._52_12_;
          auVar77._0_48_ = auVar76._0_48_;
          auVar77._48_4_ = 0xffff;
          uVar131 = ac & 0xfffffff8 | (uint)(uVar8 < uVar128) << 2 | (uint)(uVar8 == uVar128) << 1;
          ac = uVar131 | uVar128 < uVar8;
          if (((byte)ac & 1 | (byte)(uVar131 >> 1) & 1) != 1) {
            cVar7 = auVar75._24_4_[3];
            ac = uVar129 & 0xfffffff8 | (uint)(cVar7 != -1) << 2 | (uint)(cVar7 == -1) << 1;
            if (((byte)(ac >> 1) & 1) != 1) {
              auVar77._0_20_ = auVar76._0_20_;
              auVar77[0x14] = cVar7;
              auVar77._21_3_ = 0;
            }
          }
          (&DAT_00557f54)[param_1] = g14;
        }
        else {
          auVar78._48_4_ = 0xff;
          auVar78._0_48_ = auVar41._0_48_;
          auVar78._52_12_ = auVar41._52_12_;
          auVar79._28_36_ = auVar78._28_36_;
          auVar79._24_4_ = auVar22._32_4_ + (uVar129 & 0xff) * 0x14;
          auVar79._0_24_ = auVar66._0_24_;
          bVar127 = auVar79._24_4_[6];
          auVar34._24_40_ = auVar79._24_40_;
          auVar34[0x14] = bVar127;
          auVar34._0_20_ = auVar35._0_20_;
          auVar34._21_3_ = 0;
          ac = ac & 0xfffffff8 | (uint)(bVar127 != 0xff) << 2 | (uint)(bVar127 == 0xff) << 1;
          uVar1 = ac;
          if (((byte)(ac >> 1) & 1) == 1) goto LAB_000224f8;
          auStack_80._12_52_ = auVar34._12_52_;
          auStack_80._8_4_ = 0x22130;
          auStack_80._0_8_ = auVar38._0_8_;
          auVar80._8_56_ = auStack_80._8_56_;
          auVar80._4_4_ = auStack_100;
          auVar80._0_4_ = &auStack_80;
          bVar127 = FUN_000243c0(bVar127,param_1);
          uVar131 = ac & 0xfffffff8 | (uint)(7 < bVar127) << 2 | (uint)(bVar127 == 7) << 1;
          ac = uVar131 | bVar127 < 7;
          fp = &auStack_c0;
          if (((byte)(uVar131 >> 1) & 1) != 1) {
            fp = &auStack_100;
            auStack_c0._12_52_ = auVar80._12_52_;
            auStack_c0._0_8_ = auVar80._0_8_;
            auStack_c0._8_4_ = 0x22140;
            auVar81._8_56_ = auStack_c0._8_56_;
            auVar81._4_4_ = auStack_140;
            auVar81._0_4_ = &auStack_c0;
            uVar128 = FUN_00025430(auVar19._40_4_);
            uVar129 = ac;
            uVar8 = (&g_player1)[param_1].currentHealth;
            auVar80._56_8_ = auVar81._56_8_;
            auVar80._0_52_ = auVar81._0_52_;
            auVar80._52_4_ = 0xffff;
            uVar131 = ac & 0xfffffff8 | (uint)(uVar8 < uVar128) << 2 | (uint)(uVar8 == uVar128) << 1
            ;
            ac = uVar131 | uVar128 < uVar8;
            if (((byte)ac & 1 | (byte)(uVar131 >> 1) & 1) != 1) {
              cVar7 = auVar79._24_4_[7];
              ac = uVar129 & 0xfffffff8 | (uint)(cVar7 != -1) << 2 | (uint)(cVar7 == -1) << 1;
              if (((byte)(ac >> 1) & 1) != 1) {
                auVar80._0_20_ = auVar81._0_20_;
                auVar80[0x14] = cVar7;
                auVar80._21_3_ = 0;
              }
            }
          }
          auVar77._52_12_ = auVar80._52_12_;
          auVar77._0_48_ = auVar80._0_48_;
          auVar77._48_4_ = 6;
LAB_000224bc:
          (&DAT_00557f54)[auVar77._16_4_] = auVar77[0x30];
        }
        auVar111._56_8_ = auVar77._56_8_;
        auVar111._0_52_ = auVar77._0_52_;
        auVar111._52_4_ = 0xff;
        bVar127 = auVar77[0x14];
LAB_000224cc:
        auVar116._56_8_ = auVar111._56_8_;
        auVar116._0_52_ = auVar111._0_52_;
        auVar116._52_4_ = 0xff;
        pauVar4 = (undefined1 (*) [64])(auVar111._4_4_ + 0x3fU & 0xffffffc0);
        auVar118._12_52_ = auVar116._12_52_;
        auVar118._0_8_ = auVar111._0_8_;
        auVar118._8_4_ = 0x224d4;
        *fp = auVar118;
        auVar117._8_56_ = auVar118._8_56_;
        auVar117._4_4_ = pauVar4 + 1;
        auVar117._0_4_ = fp;
        bVar127 = FUN_00023f30(bVar127,auVar111._16_4_);
        auVar73._21_3_ = extraout_var_09;
        auVar73[0x14] = bVar127;
        auVar73._24_40_ = auVar117._24_40_;
        auVar73._0_20_ = auVar117._0_20_;
        fp = pauVar4;
      }
      else {
        auVar12._48_4_ = 0xff;
        auVar12._0_48_ = auVar41._0_48_;
        auVar82._52_12_ = auVar41._52_12_;
        auVar82._0_52_ = auVar12;
        if ((byte)((&g_player1)[param_1].action_state - 0x2_JUMPATTACK) < 2) {
          if (1 < (&g_player1)[param_1].attack_state) goto LAB_00022184;
        }
        else {
LAB_00022184:
          if ((&g_player1)[param_1].action_state == 0xD_SPECIALMOVE) {
            auVar82._52_4_ = 0x99;
            auVar82._56_8_ = auVar36._56_8_;
            if ((&g_player1)[param_1].action_code == (0x90|CMD_SITDOWN_BACK)) goto LAB_000221a0;
          }
          if ((&g_player1)[param_1].action_state != 0x8_CRITICALSTUN) {
            auVar86._52_12_ = auVar82._52_12_;
            auVar86._0_48_ = auVar82._0_48_;
            auVar86._48_4_ = 0xff;
            auVar34._24_40_ = auVar86._24_40_;
            auVar34._0_20_ = auVar82._0_20_;
            auVar34[0x14] = auVar22._32_4_[(uVar129 & 0xff) * 0x14];
            auVar34._21_3_ = 0;
            uVar1 = ac & 0xfffffff8 | (uint)(auVar22._32_4_[(uVar129 & 0xff) * 0x14] == -1) << 1;
            if (((byte)(uVar1 >> 1) & 1) == 1) goto LAB_000224f8;
            DVar5 = (&g_player1)[param_1].action_state;
            ac = ac & 0xfffffff8 | (uint)(0x3_ATTACK < DVar5) << 2 |
                 (uint)(DVar5 == 0x3_ATTACK) << 1 | (uint)(DVar5 < 0x3_ATTACK);
            auStack_80._0_8_ = auVar82._0_8_;
            auStack_80._12_52_ = auVar34._12_52_;
            if (((byte)ac & 1 | 0x3_ATTACK < DVar5) == 1) {
LAB_00022240:
              auStack_80._8_4_ = 0x22248;
              auVar88._8_56_ = auStack_80._8_56_;
              auVar88._4_4_ = auStack_100;
              auVar88._0_4_ = &auStack_80;
              uVar131 = FUN_00025430(auVar19._40_4_);
            }
            else {
              uVar129 = (uint)(&g_player1)[param_1].attack_state;
              ac = uVar131 & 0xfffffff8 | (uint)(2 < uVar129) << 2 | (uint)(uVar129 == 2) << 1 |
                   (uint)(uVar129 < 2);
              if (((byte)ac & 1 | 2 < uVar129) == 1) goto LAB_00022240;
              auStack_80._8_4_ = 0x22208;
              auVar87._8_56_ = auStack_80._8_56_;
              auVar87._4_4_ = auStack_100;
              auVar87._0_4_ = &auStack_80;
              FUN_00025430(auVar19._40_4_);
              auVar88._56_8_ = auVar87._56_8_;
              auVar88._0_52_ = auVar87._0_52_;
              auVar88._52_4_ = 0xffff;
              uVar131 = (uint)(float10)(int)uVar129;
            }
            uVar1 = ac;
            fp = &auStack_c0;
            uVar133 = (uint)*(ushort *)(auVar88._28_4_ + 0x20);
            auVar89._52_12_ = auVar88._52_12_;
            auVar13._0_48_ = auVar88._0_48_;
            auVar13._48_4_ = 0xffff;
            auVar89._0_52_ = auVar13;
            uVar131 = uVar131 & 0xffff;
            uVar129 = ac & 0xfffffff8 | (uint)(uVar133 < uVar131) << 2 |
                      (uint)(uVar133 == uVar131) << 1;
            ac = uVar129 | uVar131 < uVar133;
            if (((byte)ac & 1 | (byte)(uVar129 >> 1) & 1) != 1) {
              auVar89._56_8_ = auVar88._56_8_;
              auVar89._52_4_ = 0xff;
              cVar7 = *(char *)(auVar88._32_4_ + 3 + (auVar88._24_4_ & 0xff) * 0x14);
              ac = uVar1 & 0xfffffff8 | (uint)(cVar7 != -1) << 2 | (uint)(cVar7 == -1) << 1;
              if (((byte)(ac >> 1) & 1) != 1) {
                auVar89._0_20_ = auVar88._0_20_;
                auVar89[0x14] = cVar7;
                auVar89._21_3_ = 0;
              }
            }
            (&DAT_00557f54)[auVar88._16_4_] = g14;
            auVar90._52_12_ = auVar89._52_12_;
            auVar90._0_48_ = auVar89._0_48_;
            auVar90._48_4_ = 0xff;
            pauVar4 = (undefined1 (*) [64])(auVar88._4_4_ + 0x3fU & 0xffffffc0);
            auVar92._12_52_ = auVar90._12_52_;
            auVar92._0_8_ = auVar89._0_8_;
            auVar92._8_4_ = 0x22290;
            auVar91._8_56_ = auVar92._8_56_;
            auVar91._4_4_ = pauVar4 + 1;
            auVar91._0_4_ = fp;
            bVar127 = FUN_00023f30(auVar89[0x14],auVar88._16_4_);
            auVar73._21_3_ = extraout_var_06;
            auVar73[0x14] = bVar127;
            auVar73._24_40_ = auVar91._24_40_;
            auVar73._0_20_ = auVar91._0_20_;
            fp = pauVar4;
            goto LAB_000224dc;
          }
        }
LAB_000221a0:
        auVar83._52_12_ = auVar82._52_12_;
        auVar83._0_48_ = auVar82._0_48_;
        auVar83._48_4_ = 0xff;
        bVar127 = auVar22._32_4_[(uVar129 & 0xff) * 0x14 + 3];
        auVar34._24_40_ = auVar83._24_40_;
        auVar34._0_20_ = auVar82._0_20_;
        auVar34[0x14] = bVar127;
        auVar34._21_3_ = 0;
        ac = ac & 0xfffffff8 | (uint)(bVar127 != 0xff) << 2 | (uint)(bVar127 == 0xff) << 1;
        uVar1 = ac;
        if (((byte)(ac >> 1) & 1) == 1) goto LAB_000224f8;
        auVar84._56_8_ = auVar82._56_8_;
        auVar84._0_52_ = auVar34._0_52_;
        auVar84._52_4_ = 3;
        (&DAT_00557f54)[param_1] = 3;
        auStack_80._12_52_ = auVar84._12_52_;
        auStack_80._0_8_ = auVar82._0_8_;
        auStack_80._8_4_ = 0x221d0;
        auVar85._8_56_ = auStack_80._8_56_;
        auVar85._4_4_ = auStack_100;
        auVar85._0_4_ = &auStack_80;
        bVar127 = FUN_00023f30(bVar127,param_1);
        auVar73._21_3_ = extraout_var_05;
        auVar73[0x14] = bVar127;
        auVar73._24_40_ = auVar85._24_40_;
        auVar73._0_20_ = auVar85._0_20_;
        fp = &auStack_c0;
      }
LAB_000224dc:
      uVar131 = auVar73._4_4_ + 0x3f;
      auVar120._12_52_ = auVar73._12_52_;
      auVar120._0_8_ = auVar73._0_8_;
      auVar120._8_4_ = 0x224e4;
      *fp = auVar120;
      auVar119._8_56_ = auVar120._8_56_;
      auVar119._0_8_ = CONCAT44(uVar131,fp) & 0xffffffc0ffffffff;
      FUN_00023ea0(bVar127,auVar73._16_4_);
      fp = (undefined1 (*) [64])((uVar131 & 0xffffffc0) + 0x40);
      auVar121._12_52_ = auVar119._12_52_;
      auVar121._0_8_ = auVar119._0_8_;
      auVar121._8_4_ = 0x224f0;
      *(undefined1 (*) [64])(uVar131 & 0xffffffc0) = auVar121;
      auVar34._8_56_ = auVar121._8_56_;
      auVar34._0_8_ = CONCAT44((uVar131 & 0xffffffc0) + 0x80,uVar131) & 0xffffffffffffffc0;
      uVar131 = FUN_00023c60(auVar73._16_4_,0);
LAB_000224f0:
      *(uint *)(&DAT_00557f58 + auVar34._16_4_ * 4) = uVar131;
      uVar1 = ac;
    }
  }
LAB_000224f8:
  ac = uVar1;
  uVar131 = ac;
  iVar130 = auVar34._44_4_;
  iVar125 = auVar34._28_4_;
  uVar129 = auVar34._16_4_;
  auVar122._0_48_ = auVar34._0_48_;
  auVar122._48_4_ = 0xff;
  if (*(char *)(iVar125 + 0x2d) == '\x02' || *(char *)(iVar125 + 0x2d) == '\x03') {
LAB_00022514:
    (&DAT_00557f20)[uVar129] = *(undefined1 *)(iVar125 + 0x33);
  }
  else if (*(char *)(iVar125 + 0x2d) == '\x0e') goto LAB_00022514;
  auVar122._56_8_ = auVar34._56_8_;
  auVar122._52_4_ = 0xff;
  auVar9 = auVar34._0_20_;
  uVar133 = auVar34._20_4_ & 0xff;
  uVar1 = ac & 0xfffffff8 | (uint)(uVar133 < 0xff) << 2 | (uint)(uVar133 == 0xff) << 1;
  ac = uVar1 | 0xff < uVar133;
  if (((byte)(uVar1 >> 1) & 1) == 1) goto LAB_000225f8;
  if ((&DAT_00557f4e)[uVar129] != '\a') {
    auVar122._48_4_ = 1;
    (&DAT_00557f84)[auVar34._40_4_] = 1;
    auVar122._52_4_ = 1;
    *(undefined1 *)(iVar125 + 0x4f) = 1;
    *(undefined1 *)(iVar125 + 0x50) = g14;
    if (*(char *)(iVar130 + 0x52) == '\x01') {
      if (*(char *)(iVar125 + 0x41) == '\x01') {
        if (*(int *)(&DAT_00557f70 + auVar34._40_4_ * 4) != 1) {
          auVar122._48_4_ = 1;
          *(undefined1 *)(iVar130 + 0x54) = 1;
          auVar122._52_4_ = 1;
          *(undefined1 *)(iVar130 + 0x53) = 1;
          goto LAB_000225a4;
        }
      }
      *(char *)(iVar130 + 0x53) = *(char *)(iVar130 + 0x53) + '\x01';
    }
    else {
      auVar122._48_4_ = 1;
      *(undefined1 *)(iVar130 + 0x54) = 1;
      auVar122._52_4_ = 1;
      *(undefined1 *)(iVar130 + 0x52) = 1;
      *(undefined1 *)(iVar130 + 0x53) = 1;
    }
  }
LAB_000225a4:
  bVar127 = (&DAT_00557f4a)[uVar129];
  ac = uVar131 & 0xfffffff8 | (uint)(1 < bVar127) << 2 | (uint)(bVar127 == 1) << 1 |
       (uint)(bVar127 == 0);
  uVar131 = uVar129;
  if (((byte)ac & 1 | 1 < bVar127) != 1) {
    uVar131 = uVar129 ^ 1;
  }
  bVar127 = (&DAT_00557f48)[uVar129];
  auVar124._12_52_ = auVar122._12_52_;
  auVar124._0_8_ = auVar122._0_8_;
  auVar124._8_4_ = 0x225c8;
  *fp = auVar124;
  auVar123._8_56_ = auVar124._8_56_;
  auVar123._4_4_ = (auVar34._4_4_ + 0x3fU & 0xffffffc0) + 0x40;
  auVar123._0_4_ = fp;
  puVar132 = FUN_00025680(uVar129,uVar131,bVar127);
  auVar9 = auVar123._0_20_;
  ac = ac & 0xfffffff8 | (uint)(puVar132[0xc] != -1) << 2 | (uint)(puVar132[0xc] == -1) << 1;
  if (((byte)(ac >> 1) & 1) == 1) {
    (&DAT_00557f56)[uVar129] = g14;
    *(undefined1 *)(iVar125 + 0x44) = g14;
  }
  else {
    (&DAT_00557f56)[uVar129] = 1;
    *(undefined1 *)(iVar125 + 0x44) = 3;
  }
LAB_000225f8:
  fp = (undefined1 (*) [64])auVar9._0_4_;
  return (&DAT_00557f50)[auVar9._16_4_];
}

