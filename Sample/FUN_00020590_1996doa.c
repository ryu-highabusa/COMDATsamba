
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00020590(uint param_1)

{
  uint uVar1;
  uint8_t uVar2;
  DOA_U8 DVar3;
  DOA_ACTSTATE DVar4;
  undefined8 uVar5;
  undefined1 auVar6 [20];
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined4 unaff_r3;
  undefined4 unaff_r4;
  undefined1 in_register_00000014 [44];
  undefined1 auVar7 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  byte bVar15;
  uint uVar16;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [999936];
  undefined1 auVar11 [64];
  undefined1 auVar14 [64];
  undefined1 auVar8 [64];
  
  uVar16 = ac;
  uVar1 = (uint)fp;
  uVar5 = CONCAT44(auStackX_0,unaff_pfp);
  auVar6._8_4_ = unaff_retaddr;
  auVar6._0_8_ = uVar5;
  auVar6._12_4_ = unaff_r3;
  auVar6._16_4_ = unaff_r4;
  auVar7._20_44_ = in_register_00000014;
  auVar7._0_20_ = auVar6;
  auVar8._28_36_ = in_register_00000014._8_36_;
  auVar8._0_24_ = auVar7._0_24_;
  auVar8._24_4_ = param_1;
  auVar13._24_40_ = auVar8._24_40_;
  auVar13._20_4_ = &g_player1 + param_1;
  auVar13._0_20_ = auVar6;
  bVar15 = (&g_player1)[param_1].animation_flag;
  ac = ac & 0xfffffff8 | (uint)(1 < bVar15) << 2 | (uint)(bVar15 == 1) << 1 | (uint)(bVar15 == 0);
  if (((byte)ac & 1 | 1 < bVar15) != 1) {
    (&g_player1)[param_1].animation_flag = (DOA_U8)g14;
    FUN_00023da0(param_1);
    return;
  }
  auVar9._12_52_ = auVar13._12_52_;
  if ((&g_player1)[param_1].jump_state == '\x03') {
    if ((byte)((&g_player1)[param_1].action_code - CMD_LO_JUMP_F) < 3) {
      ac = uVar16 & 0xfffffff8 | (uint)((&g_player1)[param_1].action_request != 0xff) << 2 |
           (uint)((&g_player1)[param_1].action_request == 0xff) << 1;
      if (((byte)(ac >> 1) & 1) != 1) {
        (&g_player1)[param_1].animation_flag = (DOA_U8)g14;
        uVar2 = (&g_player1)[param_1].action_request;
        auVar9._8_4_ = 0x205f0;
        auVar9._0_8_ = uVar5;
        *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar9;
        Player_SetActCode(uVar2,param_1);
        (&g_player1)[param_1].action_request = 0xff;
        return;
      }
    }
    else {
      bVar15 = (&g_player1)[param_1].action_code + (0x90|CMD_SIT_FRONT);
      ac = uVar16 & 0xfffffff8 | (uint)(3 < bVar15) << 2 | (uint)(bVar15 == 3) << 1 |
           (uint)(bVar15 < 3);
      if (3 < bVar15) {
        fp = (undefined1 *)unaff_pfp;
        return;
      }
    }
    FUN_00023da0(param_1);
    return;
  }
  if ((&g_player1)[param_1].action_state != 0x1_JUMP) {
    DVar4 = (&g_player1)[param_1].action_state;
    ac = uVar16 & 0xfffffff8 | (uint)(0x2_JUMPATTACK < DVar4) << 2 |
         (uint)(DVar4 == 0x2_JUMPATTACK) << 1 | (uint)(DVar4 < 0x2_JUMPATTACK);
    if (((byte)ac & 1 | 0x2_JUMPATTACK < DVar4) != 1) {
      bVar15 = (&g_player1)[param_1].animation_flag;
      ac = uVar16 & 0xfffffff8 | (uint)(2 < bVar15) << 2 | (uint)(bVar15 == 2) << 1 |
           (uint)(bVar15 < 2);
      if (((byte)ac & 1 | 2 < bVar15) != 1) {
        ac = uVar16 & 0xfffffff8 | (uint)((&g_player1)[param_1].action_request != 0xff) << 2 |
             (uint)((&g_player1)[param_1].action_request == 0xff) << 1;
        if (((byte)(ac >> 1) & 1) != 1) {
          (&g_player1)[param_1].animation_flag = '\x03';
          Player_SetActCode((&g_player1)[param_1].action_request,param_1);
          return;
        }
      }
    }
    fp = (undefined1 *)unaff_pfp;
    return;
  }
  ac = uVar16 & 0xfffffff8 | (uint)((&g_player1)[param_1].action_request != 0xff) << 2 |
       (uint)((&g_player1)[param_1].action_request == 0xff) << 1;
  if (((byte)(ac >> 1) & 1) != 1) {
    DVar3 = (&g_player1)[param_1].jump_state;
    ac = uVar16 & 0xfffffff8 | (uint)(DVar3 != '\0') << 2 | (uint)(DVar3 == '\0') << 1;
    if (DVar3 == '\0') {
      uVar2 = (&g_player1)[param_1].action_request;
      uVar1 = uVar16 & 0xfffffff8 | (uint)(1 < (byte)(uVar2 + 0x9b)) << 2 |
              (uint)((byte)(uVar2 + 0x9b) == 1) << 1;
      ac = uVar1 | uVar2 == 'e';
      if (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) != 1) {
        bVar15 = uVar2 + 0x99;
        ac = uVar16 & 0xfffffff8 | (uint)(1 < bVar15) << 2 | (uint)(bVar15 == 1) << 1 |
             (uint)(uVar2 == 'g');
        if (1 < bVar15) {
          uVar2 = (&g_player1)[param_1].action_request;
          auVar11._8_4_ = 0x20664;
          auVar11._0_8_ = uVar5;
          auVar11._12_52_ = auVar9._12_52_;
          *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar11;
          auVar10._8_56_ = auVar11._8_56_;
          auVar10._4_4_ = auStack_40;
          auVar10._0_4_ = fp;
          Player_SetActCode(uVar2,param_1);
          DVar4 = (&g_player1)[param_1].action_state;
          ac = ac & 0xfffffff8 | (uint)(0xE_DOWNATTACK < DVar4) << 2 |
               (uint)(DVar4 == 0xE_DOWNATTACK) << 1 | (uint)(DVar4 < 0xE_DOWNATTACK);
          if (((byte)ac & 1 | 0xE_DOWNATTACK < DVar4) != 1) {
            *(undefined4 *)(&DAT_00557f40 + param_1 * 4) = g14;
            auVar12._20_44_ = auVar10._20_44_;
            auVar12._0_16_ = auVar10._0_16_;
            auVar12._16_4_ =
                 g_attack_property_tables_by_character[(&g_player1)[param_1].character_id];
            auStackX_0._12_52_ = auVar12._12_52_;
            auStackX_0._0_8_ = auVar10._0_8_;
            auStackX_0._8_4_ = 0x20688;
            auVar10._8_56_ = auStackX_0._8_56_;
            auVar10._4_4_ = (undefined1 *)0x0;
            auVar10._0_4_ = auStackX_0;
            uVar16 = FUN_000241e0(param_1);
            uVar1 = ac;
            bVar15 = auVar12._16_4_[(uVar16 & 0xff) * 0x14 + 1];
            ac = ac & 0xfffffff8 | (uint)(1 < bVar15) << 2 | (uint)(bVar15 == 1) << 1 |
                 (uint)(bVar15 == 0);
            if (((byte)ac & 1 | 1 < bVar15) != 1) {
              ac = uVar1 & 0xfffffff8 | (uint)(0 < (int)param_1) << 2 | (uint)(param_1 == 0) << 1 |
                   (uint)((int)param_1 < 0);
              if (((byte)ac & 1 | 0 < (int)param_1) != 1) {
                (&g_player1)[param_1].facing_direction = g_p1_to_p2_heading_bam16 & 0xffff;
                fp = auStackX_0;
                return;
              }
              (&g_player1)[param_1].facing_direction = g_p1_to_p2_heading_bam16 + 0x8000U & 0xffff;
            }
          }
          fp = (undefined1 *)auVar10._0_4_;
          return;
        }
      }
      fp = (undefined1 *)unaff_pfp;
      return;
    }
    bVar15 = (&g_player1)[param_1].action_request;
    auVar14._8_4_ = 0x206e4;
    auVar14._0_8_ = uVar5;
    auVar14._12_52_ = auVar9._12_52_;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar14;
    fp = auStackX_0;
    auVar13._8_56_ = auVar14._8_56_;
    auVar13._4_4_ = 0;
    auVar13._0_4_ = uVar1;
    bVar15 = Player_GetActionStateForCode((uint)bVar15,param_1);
    uVar1 = ac;
    ac = ac & 0xfffffff8 | (uint)(2 < bVar15) << 2 | (uint)(bVar15 == 2) << 1 | (uint)(bVar15 < 2);
    if (((byte)ac & 1 | 2 < bVar15) != 1) {
      bVar15 = (&g_player1)[param_1].action_request + 0x97;
      uVar1 = uVar1 & 0xfffffff8 | (uint)(5 < bVar15) << 2 | (uint)(bVar15 == 5) << 1;
      ac = uVar1 | bVar15 < 5;
      if (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) != 1) {
        (&g_player1)[param_1].animation_flag = (DOA_U8)g14;
        Player_SetActCode((&g_player1)[param_1].action_request,param_1);
        return;
      }
    }
  }
  fp = (undefined1 *)auVar13._0_4_;
  return;
}

