
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void Debug_DrawPlayerStateOverlay(void)

{
  undefined1 (*pauVar1) [64];
  undefined1 (*pauVar2) [64];
  undefined4 unaff_pfp;
  undefined1 in_register_00000008 [56];
  undefined1 auVar4 [64];
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar17 [64];
  undefined1 auVar19 [64];
  undefined1 auVar21 [64];
  undefined1 auVar23 [64];
  undefined1 auVar25 [64];
  undefined1 auVar27 [64];
  undefined1 auVar29 [64];
  undefined1 auVar31 [64];
  undefined1 auVar33 [64];
  undefined1 auVar35 [64];
  undefined1 auVar37 [64];
  undefined1 auVar39 [64];
  undefined1 auVar41 [64];
  undefined1 auVar43 [64];
  undefined1 auVar45 [64];
  undefined1 auVar47 [64];
  undefined1 auVar49 [64];
  undefined1 auVar51 [64];
  undefined1 auVar53 [64];
  undefined1 auVar55 [64];
  undefined1 auVar57 [64];
  undefined1 auVar59 [64];
  undefined1 auVar61 [64];
  uint uVar62;
  undefined4 extraout_g1;
  undefined4 extraout_g1_00;
  undefined4 extraout_g1_01;
  int iVar63;
  uint uVar64;
  uint uVar65;
  int iVar66;
  undefined4 in_g3;
  undefined4 in_g4;
  uint uVar67;
  uint uVar68;
  undefined4 in_g5;
  int in_g6;
  undefined4 in_g7;
  undefined4 in_g8;
  undefined4 in_g9;
  undefined4 in_g10;
  undefined4 in_g11;
  float10 fVar69;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [64];
  undefined1 auStack_80 [64];
  undefined1 auStack_c0 [64];
  undefined1 auStack_100 [64];
  undefined1 auStack_140 [64];
  undefined1 auStack_180 [999616];
  undefined1 auVar3 [64];
  undefined1 auVar13 [64];
  undefined1 auVar16 [64];
  undefined1 auVar18 [64];
  undefined1 auVar20 [64];
  undefined1 auVar22 [64];
  undefined1 auVar24 [64];
  undefined1 auVar26 [64];
  undefined1 auVar28 [64];
  undefined1 auVar30 [64];
  undefined1 auVar32 [64];
  undefined1 auVar34 [64];
  undefined1 auVar36 [64];
  undefined1 auVar38 [64];
  undefined1 auVar40 [64];
  undefined1 auVar42 [64];
  undefined1 auVar44 [64];
  undefined1 auVar46 [64];
  undefined1 auVar48 [64];
  undefined1 auVar50 [64];
  undefined1 auVar52 [64];
  undefined1 auVar54 [64];
  undefined1 auVar56 [64];
  undefined1 auVar58 [64];
  undefined1 auVar60 [64];
  
  auVar4._4_4_ = auStackX_0;
  auVar4._0_4_ = unaff_pfp;
  uVar62 = (uint)g_player1.controller_type;
  uVar64 = (uint)g_player2.controller_type;
  auVar4._12_52_ = in_register_00000008._4_52_;
  auVar4._8_4_ = 0x511c;
  *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar4;
  auVar3._8_56_ = auVar4._8_56_;
  auVar3._4_4_ = auStackX_0;
  auVar3._0_4_ = fp;
  FUN_0008e740(s_mancom__2X__2X_00004d00,uVar62,uVar64,in_g3,in_g4,in_g5,in_g6,in_g7,in_g8,in_g9,
               in_g10,in_g11);
  auStackX_0._12_52_ = auVar3._12_52_;
  auStackX_0._0_8_ = auVar3._0_8_;
  auStackX_0._8_4_ = 0x5138;
  auVar5._8_56_ = auStackX_0._8_56_;
  auVar5._4_4_ = auStack_40;
  auVar5._0_4_ = auStackX_0;
  FUN_0008e740(s_chrnum__2X__2X_00004d20,(uint)g_player1.character_id,(uint)g_player2.character_id,
               in_g3,in_g4,in_g5,in_g6,in_g7,in_g8,in_g9,in_g10,in_g11);
  auStack_40._12_52_ = auVar5._12_52_;
  auStack_40._0_8_ = auVar5._0_8_;
  auStack_40._8_4_ = 0x5154;
  auVar6._8_56_ = auStack_40._8_56_;
  auVar6._4_4_ = auStack_80;
  auVar6._0_4_ = auStack_40;
  FUN_0008e740(s_chrcol__2X__2X_00004d40,(uint)g_player1.costume_id,(uint)g_player2.costume_id,in_g3
               ,in_g4,in_g5,in_g6,in_g7,in_g8,in_g9,in_g10,in_g11);
  auStack_80._12_52_ = auVar6._12_52_;
  auStack_80._0_8_ = auVar6._0_8_;
  auStack_80._8_4_ = 0x5180;
  auVar7._8_56_ = auStack_80._8_56_;
  auVar7._4_4_ = auStack_c0;
  auVar7._0_4_ = auStack_80;
  FUN_0008e740(s_Xpos__6_2f__6_2f_00004d60,extraout_g1,g_player1.x_position,in_g3,
               g_player2.x_position,in_g5,in_g6,in_g7,in_g8,in_g9,in_g10,in_g11);
  auStack_c0._12_52_ = auVar7._12_52_;
  auStack_c0._0_8_ = auVar7._0_8_;
  auStack_c0._8_4_ = 0x51ac;
  auVar8._8_56_ = auStack_c0._8_56_;
  auVar8._4_4_ = auStack_100;
  auVar8._0_4_ = auStack_c0;
  FUN_0008e740(s_Ypos__6_2f__6_2f_00004d80,extraout_g1_00,g_player1.y_position,in_g3,
               g_player2.y_position,in_g5,in_g6,in_g7,in_g8,in_g9,in_g10,in_g11);
  fVar69 = (float10)(int)g_player2.z_position;
  auStack_100._12_52_ = auVar8._12_52_;
  auStack_100._0_8_ = auVar8._0_8_;
  auStack_100._8_4_ = 0x51d8;
  auVar9._8_56_ = auStack_100._8_56_;
  auVar9._4_4_ = auStack_180;
  auVar9._0_4_ = auStack_100;
  FUN_0008e740(s_Zpos__6_2f__6_2f_00004da0,extraout_g1_01,g_player1.z_position,in_g3,
               g_player2.z_position,in_g5,in_g6,in_g7,in_g8,in_g9,in_g10,in_g11);
  auVar10._0_16_ = auVar9._0_16_;
  auVar10._16_4_ = 0;
  auVar10._20_4_ = 1089470464;
  auVar10._24_4_ = 0;
  auVar10._32_32_ = auVar9._32_32_;
  auVar10._28_4_ = 1081507840;
  uVar62 = auVar9._4_4_ + 0x3f;
  pauVar1 = (undefined1 (*) [64])(uVar62 & 0xffffffc0);
  auStack_140._12_52_ = auVar10._12_52_;
  auStack_140._0_8_ = auVar9._0_8_;
  auStack_140._8_4_ = 0x523c;
  auVar11._8_56_ = auStack_140._8_56_;
  auVar11._4_4_ = pauVar1 + 1;
  auVar11._0_4_ = auStack_140;
  FUN_0008e740(s_drct__3d__3d_00004dc0,(int)(float10)in_g6,
               (int)(float10)(ushort)g_player2.facing_direction,in_g3,
               (uint)(ushort)g_player2.facing_direction,in_g5,in_g6,in_g7,in_g8,in_g9,in_g10,in_g11)
  ;
  uVar67 = (uint)(ushort)g_player2.attack_direction;
  uVar64 = auVar11._4_4_ + 0x3f;
  pauVar2 = (undefined1 (*) [64])(uVar64 & 0xffffffc0);
  auVar13._12_52_ = auVar11._12_52_;
  auVar13._0_8_ = auVar11._0_8_;
  auVar13._8_4_ = 0x5288;
  *pauVar1 = auVar13;
  auVar12._8_56_ = auVar13._8_56_;
  auVar12._0_8_ = CONCAT44(pauVar2 + 1,uVar62) & 0xffffffffffffffc0;
  FUN_0008e740(s_atkdrct__3d__3d_00004de0,(int)(float10)in_g6,(int)(float10)uVar67,in_g3,uVar67,
               in_g5,in_g6,in_g7,in_g8,in_g9,in_g10,in_g11);
  uVar68 = (uint)(ushort)g_player2.body_direction;
  auVar14._26_38_ = auVar12._26_38_;
  auVar14._0_16_ = auVar12._0_16_;
  auVar14._16_10_ = fVar69;
  uVar62 = auVar12._4_4_ + 0x3f;
  uVar67 = uVar62 & 0xffffffc0;
  auVar16._12_52_ = auVar14._12_52_;
  auVar16._0_8_ = auVar12._0_8_;
  auVar16._8_4_ = 0x52d4;
  *pauVar2 = auVar16;
  auVar15._8_56_ = auVar16._8_56_;
  auVar15._0_8_ = CONCAT44(uVar62,uVar64) & 0xffffffc0ffffffc0;
  FUN_0008e740(s_bodydrct__3d__3d_00004e00,(int)(float10)in_g6,(int)(float10)SUB104(fVar69,0),in_g3,
               uVar68,in_g5,in_g6,in_g7,in_g8,in_g9,in_g10,in_g11);
  uVar64 = (uint)g_player1.animation_id;
  uVar65 = (uint)g_player2.animation_id;
  auVar18._12_52_ = auVar15._12_52_;
  auVar18._0_8_ = auVar15._0_8_;
  auVar18._8_4_ = 0x52f0;
  *(undefined1 (*) [64])(uVar62 & 0xffffffc0) = auVar18;
  auVar17._8_56_ = auVar18._8_56_;
  auVar17._0_8_ = CONCAT44(uVar67 + 0x40,uVar62) & 0xffffffffffffffc0;
  FUN_0008e740(s_anime__4X__4X_00004e20,uVar64,uVar65,in_g3,uVar68,in_g5,in_g6,in_g7,in_g8,in_g9,
               in_g10,in_g11);
  uVar62 = (uint)g_player1.action_flag;
  uVar64 = (uint)g_player2.action_flag;
  auVar20._12_52_ = auVar17._12_52_;
  auVar20._0_8_ = auVar17._0_8_;
  auVar20._8_4_ = 0x530c;
  *(undefined1 (*) [64])(uVar67 + 0x40) = auVar20;
  auVar19._8_56_ = auVar20._8_56_;
  auVar19._4_4_ = uVar67 + 0x80;
  auVar19._0_4_ = uVar67 + 0x40;
  FUN_0008e740(s_actcodeflg__2X__2X_00004e40,uVar62,uVar64,in_g3,uVar68,in_g5,in_g6,in_g7,in_g8,
               in_g9,in_g10,in_g11);
  uVar62 = (uint)g_player1.upside_down_head;
  uVar64 = (uint)g_player2.upside_down_head;
  auVar22._12_52_ = auVar19._12_52_;
  auVar22._0_8_ = auVar19._0_8_;
  auVar22._8_4_ = 0x5328;
  *(undefined1 (*) [64])(uVar67 + 0x80) = auVar22;
  auVar21._8_56_ = auVar22._8_56_;
  auVar21._4_4_ = uVar67 + 0xc0;
  auVar21._0_4_ = uVar67 + 0x80;
  FUN_0008e740(s_updownhead__2X__2X_00004e60,uVar62,uVar64,in_g3,uVar68,in_g5,in_g6,in_g7,in_g8,
               in_g9,in_g10,in_g11);
  uVar62 = (uint)g_player1.attack_point;
  uVar64 = (uint)g_player2.attack_point;
  auVar24._12_52_ = auVar21._12_52_;
  auVar24._0_8_ = auVar21._0_8_;
  auVar24._8_4_ = 0x5344;
  *(undefined1 (*) [64])(uVar67 + 0xc0) = auVar24;
  auVar23._8_56_ = auVar24._8_56_;
  auVar23._4_4_ = uVar67 + 0x100;
  auVar23._0_4_ = uVar67 + 0xc0;
  FUN_0008e740(s_attackpoint_2X__2X_00004e80,uVar62,uVar64,in_g3,uVar68,in_g5,in_g6,in_g7,in_g8,
               in_g9,in_g10,in_g11);
  uVar62 = (uint)g_player1.attack_state;
  uVar64 = (uint)g_player2.attack_state;
  auVar26._12_52_ = auVar23._12_52_;
  auVar26._0_8_ = auVar23._0_8_;
  auVar26._8_4_ = 0x5360;
  *(undefined1 (*) [64])(uVar67 + 0x100) = auVar26;
  auVar25._8_56_ = auVar26._8_56_;
  auVar25._4_4_ = uVar67 + 0x140;
  auVar25._0_4_ = uVar67 + 0x100;
  FUN_0008e740(s_attacksta__2X__2X_00004ea0,uVar62,uVar64,in_g3,uVar68,in_g5,in_g6,in_g7,in_g8,in_g9
               ,in_g10,in_g11);
  iVar63 = (int)(char)g_player1.animation_flip;
  iVar66 = (int)(char)g_player2.animation_flip;
  auVar28._12_52_ = auVar25._12_52_;
  auVar28._0_8_ = auVar25._0_8_;
  auVar28._8_4_ = 0x537c;
  *(undefined1 (*) [64])(uVar67 + 0x140) = auVar28;
  auVar27._8_56_ = auVar28._8_56_;
  auVar27._4_4_ = uVar67 + 0x180;
  auVar27._0_4_ = uVar67 + 0x140;
  FUN_0008e740(s_animeflip__2X__2X_00004ec0,iVar63,iVar66,in_g3,uVar68,in_g5,in_g6,in_g7,in_g8,in_g9
               ,in_g10,in_g11);
  uVar62 = (uint)g_player1.animation_flag;
  uVar64 = (uint)g_player2.animation_flag;
  auVar30._12_52_ = auVar27._12_52_;
  auVar30._0_8_ = auVar27._0_8_;
  auVar30._8_4_ = 0x5398;
  *(undefined1 (*) [64])(uVar67 + 0x180) = auVar30;
  auVar29._8_56_ = auVar30._8_56_;
  auVar29._4_4_ = uVar67 + 0x1c0;
  auVar29._0_4_ = uVar67 + 0x180;
  FUN_0008e740(s_animeflg__2X__2X_00004ee0,uVar62,uVar64,in_g3,uVar68,in_g5,in_g6,in_g7,in_g8,in_g9,
               in_g10,in_g11);
  uVar62 = (uint)g_player1.hit_attack;
  uVar64 = (uint)g_player2.hit_attack;
  auVar32._12_52_ = auVar29._12_52_;
  auVar32._0_8_ = auVar29._0_8_;
  auVar32._8_4_ = 0x53b4;
  *(undefined1 (*) [64])(uVar67 + 0x1c0) = auVar32;
  auVar31._8_56_ = auVar32._8_56_;
  auVar31._4_4_ = uVar67 + 0x200;
  auVar31._0_4_ = uVar67 + 0x1c0;
  FUN_0008e740(s_hitattack__2X__2X_00004f00,uVar62,uVar64,in_g3,uVar68,in_g5,in_g6,in_g7,in_g8,in_g9
               ,in_g10,in_g11);
  uVar62 = (uint)g_player1.hit_body;
  uVar64 = (uint)g_player2.hit_body;
  auVar34._12_52_ = auVar31._12_52_;
  auVar34._0_8_ = auVar31._0_8_;
  auVar34._8_4_ = 0x53d0;
  *(undefined1 (*) [64])(uVar67 + 0x200) = auVar34;
  auVar33._8_56_ = auVar34._8_56_;
  auVar33._4_4_ = uVar67 + 0x240;
  auVar33._0_4_ = uVar67 + 0x200;
  FUN_0008e740(s_hitbody__2X__2X_00004f20,uVar62,uVar64,in_g3,uVar68,in_g5,in_g6,in_g7,in_g8,in_g9,
               in_g10,in_g11);
  uVar62 = (uint)g_player1.hit_stage;
  uVar64 = (uint)g_player2.hit_stage;
  auVar36._12_52_ = auVar33._12_52_;
  auVar36._0_8_ = auVar33._0_8_;
  auVar36._8_4_ = 0x53ec;
  *(undefined1 (*) [64])(uVar67 + 0x240) = auVar36;
  auVar35._8_56_ = auVar36._8_56_;
  auVar35._4_4_ = uVar67 + 0x280;
  auVar35._0_4_ = uVar67 + 0x240;
  FUN_0008e740(s_hitstage__2X__2X_00004f40,uVar62,uVar64,in_g3,uVar68,in_g5,in_g6,in_g7,in_g8,in_g9,
               in_g10,in_g11);
  uVar62 = (uint)g_player1.beat_state;
  uVar64 = (uint)g_player2.beat_state;
  auVar38._12_52_ = auVar35._12_52_;
  auVar38._0_8_ = auVar35._0_8_;
  auVar38._8_4_ = 0x5408;
  *(undefined1 (*) [64])(uVar67 + 0x280) = auVar38;
  auVar37._8_56_ = auVar38._8_56_;
  auVar37._4_4_ = uVar67 + 0x2c0;
  auVar37._0_4_ = uVar67 + 0x280;
  FUN_0008e740(s_beatsta__2X__2X_00004f60,uVar62,uVar64,in_g3,uVar68,in_g5,in_g6,in_g7,in_g8,in_g9,
               in_g10,in_g11);
  uVar62 = (uint)g_player1.sky_state;
  uVar64 = (uint)g_player2.sky_state;
  auVar40._12_52_ = auVar37._12_52_;
  auVar40._0_8_ = auVar37._0_8_;
  auVar40._8_4_ = 0x5424;
  *(undefined1 (*) [64])(uVar67 + 0x2c0) = auVar40;
  auVar39._8_56_ = auVar40._8_56_;
  auVar39._4_4_ = uVar67 + 0x300;
  auVar39._0_4_ = uVar67 + 0x2c0;
  FUN_0008e740(s_skysta__2X__2X_00004f80,uVar62,uVar64,in_g3,uVar68,in_g5,in_g6,in_g7,in_g8,in_g9,
               in_g10,in_g11);
  uVar62 = (uint)g_player1.down_hit;
  uVar64 = (uint)g_player2.down_hit;
  auVar42._12_52_ = auVar39._12_52_;
  auVar42._0_8_ = auVar39._0_8_;
  auVar42._8_4_ = 0x5440;
  *(undefined1 (*) [64])(uVar67 + 0x300) = auVar42;
  auVar41._8_56_ = auVar42._8_56_;
  auVar41._4_4_ = uVar67 + 0x340;
  auVar41._0_4_ = uVar67 + 0x300;
  FUN_0008e740(s_downhit__2X__2X_00004fa0,uVar62,uVar64,in_g3,uVar68,in_g5,in_g6,in_g7,in_g8,in_g9,
               in_g10,in_g11);
  uVar62 = (uint)g_player1.action_cancel;
  uVar64 = (uint)g_player2.action_cancel;
  auVar44._12_52_ = auVar41._12_52_;
  auVar44._0_8_ = auVar41._0_8_;
  auVar44._8_4_ = 0x545c;
  *(undefined1 (*) [64])(uVar67 + 0x340) = auVar44;
  auVar43._8_56_ = auVar44._8_56_;
  auVar43._4_4_ = uVar67 + 0x380;
  auVar43._0_4_ = uVar67 + 0x340;
  FUN_0008e740(s_actcancel__2X__2X_00004fc0,uVar62,uVar64,in_g3,uVar68,in_g5,in_g6,in_g7,in_g8,in_g9
               ,in_g10,in_g11);
  uVar62 = (uint)g_player1.grasp_state;
  uVar64 = (uint)g_player2.grasp_state;
  auVar46._12_52_ = auVar43._12_52_;
  auVar46._0_8_ = auVar43._0_8_;
  auVar46._8_4_ = 0x5478;
  *(undefined1 (*) [64])(uVar67 + 0x380) = auVar46;
  auVar45._8_56_ = auVar46._8_56_;
  auVar45._4_4_ = uVar67 + 0x3c0;
  auVar45._0_4_ = uVar67 + 0x380;
  FUN_0008e740(s_graspsta__2X__2X_00004fe0,uVar62,uVar64,in_g3,uVar68,in_g5,in_g6,in_g7,in_g8,in_g9,
               in_g10,in_g11);
  uVar62 = (uint)g_player1.grounded_targetable;
  uVar64 = (uint)g_player2.grounded_targetable;
  auVar48._12_52_ = auVar45._12_52_;
  auVar48._0_8_ = auVar45._0_8_;
  auVar48._8_4_ = 0x5494;
  *(undefined1 (*) [64])(uVar67 + 0x3c0) = auVar48;
  auVar47._8_56_ = auVar48._8_56_;
  auVar47._4_4_ = uVar67 + 0x400;
  auVar47._0_4_ = uVar67 + 0x3c0;
  FUN_0008e740(s_dwnasta__2X__2X_00005000,uVar62,uVar64,in_g3,uVar68,in_g5,in_g6,in_g7,in_g8,in_g9,
               in_g10,in_g11);
  uVar62 = (uint)g_player1.mount_state;
  uVar64 = (uint)g_player2.mount_state;
  auVar50._12_52_ = auVar47._12_52_;
  auVar50._0_8_ = auVar47._0_8_;
  auVar50._8_4_ = 0x54b0;
  *(undefined1 (*) [64])(uVar67 + 0x400) = auVar50;
  auVar49._8_56_ = auVar50._8_56_;
  auVar49._4_4_ = uVar67 + 0x440;
  auVar49._0_4_ = uVar67 + 0x400;
  FUN_0008e740(s_mountsta__2X__2X_00005020,uVar62,uVar64,in_g3,uVar68,in_g5,in_g6,in_g7,in_g8,in_g9,
               in_g10,in_g11);
  uVar62 = (uint)g_player1.attack_height;
  uVar64 = (uint)g_player2.attack_height;
  auVar52._12_52_ = auVar49._12_52_;
  auVar52._0_8_ = auVar49._0_8_;
  auVar52._8_4_ = 0x54cc;
  *(undefined1 (*) [64])(uVar67 + 0x440) = auVar52;
  auVar51._8_56_ = auVar52._8_56_;
  auVar51._4_4_ = uVar67 + 0x480;
  auVar51._0_4_ = uVar67 + 0x440;
  FUN_0008e740(s_atkheight__2X__2X_00005040,uVar62,uVar64,in_g3,uVar68,in_g5,in_g6,in_g7,in_g8,in_g9
               ,in_g10,in_g11);
  uVar62 = (uint)g_player1.ring_hit;
  uVar64 = (uint)g_player2.ring_hit;
  auVar54._12_52_ = auVar51._12_52_;
  auVar54._0_8_ = auVar51._0_8_;
  auVar54._8_4_ = 0x54e8;
  *(undefined1 (*) [64])(uVar67 + 0x480) = auVar54;
  auVar53._8_56_ = auVar54._8_56_;
  auVar53._4_4_ = uVar67 + 0x4c0;
  auVar53._0_4_ = uVar67 + 0x480;
  FUN_0008e740(s_ringhit__2X__2X_00005060,uVar62,uVar64,in_g3,uVar68,in_g5,in_g6,in_g7,in_g8,in_g9,
               in_g10,in_g11);
  uVar62 = (uint)g_player1.direction_adjust;
  uVar64 = (uint)g_player2.direction_adjust;
  auVar56._12_52_ = auVar53._12_52_;
  auVar56._0_8_ = auVar53._0_8_;
  auVar56._8_4_ = 0x5504;
  *(undefined1 (*) [64])(uVar67 + 0x4c0) = auVar56;
  auVar55._8_56_ = auVar56._8_56_;
  auVar55._4_4_ = uVar67 + 0x500;
  auVar55._0_4_ = uVar67 + 0x4c0;
  FUN_0008e740(s_drctajstflg_2X__2X_00005080,uVar62,uVar64,in_g3,uVar68,in_g5,in_g6,in_g7,in_g8,
               in_g9,in_g10,in_g11);
  uVar62 = (uint)g_player1.damage_number;
  uVar64 = (uint)g_player2.damage_number;
  auVar58._12_52_ = auVar55._12_52_;
  auVar58._0_8_ = auVar55._0_8_;
  auVar58._8_4_ = 0x5520;
  *(undefined1 (*) [64])(uVar67 + 0x500) = auVar58;
  auVar57._8_56_ = auVar58._8_56_;
  auVar57._4_4_ = uVar67 + 0x540;
  auVar57._0_4_ = uVar67 + 0x500;
  FUN_0008e740(s_damagenum__2X__2X_000050a0,uVar62,uVar64,in_g3,uVar68,in_g5,in_g6,in_g7,in_g8,in_g9
               ,in_g10,in_g11);
  uVar62 = (uint)g_player1.hit_grasp;
  uVar64 = (uint)g_player2.hit_grasp;
  auVar60._12_52_ = auVar57._12_52_;
  auVar60._0_8_ = auVar57._0_8_;
  auVar60._8_4_ = 0x553c;
  *(undefined1 (*) [64])(uVar67 + 0x540) = auVar60;
  auVar59._8_56_ = auVar60._8_56_;
  auVar59._4_4_ = uVar67 + 0x580;
  auVar59._0_4_ = uVar67 + 0x540;
  FUN_0008e740(s_hitgrasp__2X__2X_000050c0,uVar62,uVar64,in_g3,uVar68,in_g5,in_g6,in_g7,in_g8,in_g9,
               in_g10,in_g11);
  uVar62 = (uint)g_player1.cancel_use;
  uVar64 = (uint)g_player2.cancel_use;
  auVar61._12_52_ = auVar59._12_52_;
  auVar61._0_8_ = auVar59._0_8_;
  auVar61._8_4_ = 0x5558;
  *(undefined1 (*) [64])(uVar67 + 0x580) = auVar61;
  FUN_0008e740(s_a_c_use__2X__2X_000050e0,uVar62,uVar64,in_g3,uVar68,in_g5,in_g6,in_g7,in_g8,in_g9,
               in_g10,in_g11);
  fp = uVar67 + 0x580;
  return;
}

