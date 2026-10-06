
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_000039f0(void)

{
  uint uVar1;
  undefined1 (*pauVar2) [64];
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 unaff_pfp;
  int iVar32;
  undefined4 unaff_retaddr;
  undefined1 in_register_0000000c [52];
  undefined1 auVar7 [64];
  undefined1 auVar9 [64];
  undefined1 auVar8 [64];
  undefined1 auVar10 [64];
  undefined1 auVar12 [64];
  undefined1 auVar11 [64];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar19 [64];
  undefined1 auVar18 [64];
  undefined1 auVar21 [64];
  undefined1 auVar20 [64];
  undefined1 auVar22 [64];
  undefined1 auVar24 [64];
  undefined1 auVar23 [64];
  undefined1 auVar25 [64];
  undefined1 auVar27 [64];
  undefined1 auVar26 [64];
  undefined1 auVar28 [64];
  undefined1 auVar30 [64];
  undefined1 auVar29 [64];
  undefined1 auVar31 [64];
  uint uVar33;
  uint uVar34;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [64];
  
  uVar1 = ac;
  uVar4 = CONCAT44(auStackX_0,unaff_pfp);
  auVar7._8_4_ = unaff_retaddr;
  auVar7._0_8_ = uVar4;
  auVar7._12_52_ = in_register_0000000c;
  uVar33 = ac & 0xfffffff8 | (uint)(1 < BYTE_0054fcee) << 2;
  ac = uVar33 | BYTE_0054fcee == 0;
  if (((byte)ac & 1 | (byte)(uVar33 >> 2) & 1) != 1) {
    BYTE_0054fcee = (DOA_MANCOM)g14;
    g_player1.controller_type = MAN;
    BYTE_0054fd00 = 1;
    uVar33 = uVar1 & 0xfffffff8 | (uint)(g_player2.controller_type != 0) << 2;
    ac = uVar33 | (uint)(g_player2.controller_type == 0) << 1;
    if (((byte)(uVar33 >> 2) & 1) == 1) {
      GameOverFlag____0054fcb4 = 1;
      BYTE_0054fd11 = 1;
      auVar10._8_4_ = 0x3a5c;
      auVar10._0_8_ = uVar4;
      auVar10._12_52_ = in_register_0000000c;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar10;
      auVar8._8_56_ = auVar10._8_56_;
      auVar8._4_4_ = auStack_40;
      auVar8._0_4_ = fp;
      FUN_00004640(1);
    }
    else {
      GameOverFlag____0054fcb4 = (DOA_MANCOM)g14;
      BYTE_0054fd11 = (DOA_MANCOM)g14;
      auVar9._8_4_ = 0x3a3c;
      auVar9._0_8_ = uVar4;
      auVar9._12_52_ = in_register_0000000c;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar9;
      auVar8._8_56_ = auVar9._8_56_;
      auVar8._4_4_ = auStack_40;
      auVar8._0_4_ = fp;
      FUN_00004640(0);
    }
    auStackX_0._0_4_ = auVar8._0_4_;
    auStackX_0._4_4_ = auStackX_0;
    fp = &auStack_40;
    auStackX_0._12_52_ = auVar8._12_52_;
    auStackX_0._8_4_ = 0x3a64;
    auVar7._8_56_ = auStackX_0._8_56_;
    auVar7._4_4_ = &stack0x00000080;
    auVar7._0_4_ = auStackX_0;
    FUN_00004840(0);
  }
  uVar1 = ac;
  uVar33 = ac & 0xfffffff8 | (uint)(1 < BYTE_0054fcf8) << 2;
  ac = uVar33 | BYTE_0054fcf8 == 0;
  if (((byte)ac & 1 | (byte)(uVar33 >> 2) & 1) != 1) {
    BYTE_0054fcf8 = (DOA_MANCOM)g14;
    g_player2.controller_type = MAN;
    BYTE_0054fd01 = 1;
    uVar33 = uVar1 & 0xfffffff8 | (uint)(g_player1.controller_type != 0) << 2;
    ac = uVar33 | (uint)(g_player1.controller_type == 0) << 1;
    auVar12._0_8_ = auVar7._0_8_;
    auVar12._12_52_ = auVar7._12_52_;
    if (((byte)(uVar33 >> 2) & 1) == 1) {
      GameOverFlag____0054fcb4 = 1;
      BYTE_0054fd11 = (DOA_MANCOM)g14;
      pauVar2 = (undefined1 (*) [64])(auVar7._4_4_ + 0x3fU & 0xffffffc0);
      auVar13._8_4_ = &LAB_00003ad0;
      auVar13._0_8_ = auVar12._0_8_;
      auVar13._12_52_ = auVar12._12_52_;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar13;
      auVar11._8_56_ = auVar13._8_56_;
      auVar11._4_4_ = pauVar2 + 1;
      auVar11._0_4_ = fp;
      FUN_00004640(1);
      fp = pauVar2;
    }
    else {
      GameOverFlag____0054fcb4 = (DOA_MANCOM)g14;
      BYTE_0054fd11 = 1;
      pauVar2 = (undefined1 (*) [64])(auVar7._4_4_ + 0x3fU & 0xffffffc0);
      auVar12._8_4_ = 0x3ab0;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar12;
      auVar11._8_56_ = auVar12._8_56_;
      auVar11._4_4_ = pauVar2 + 1;
      auVar11._0_4_ = fp;
      FUN_00004640(0);
      fp = pauVar2;
    }
    puVar3 = (undefined1 *)(auVar11._4_4_ + 0x3fU & 0xffffffc0);
    auVar14._12_52_ = auVar11._12_52_;
    auVar14._0_8_ = auVar11._0_8_;
    auVar14._8_4_ = 0x3ad8;
    *fp = auVar14;
    auVar7._8_56_ = auVar14._8_56_;
    auVar7._4_4_ = puVar3 + 0x40;
    auVar7._0_4_ = fp;
    FUN_00004840(1);
    fp = (undefined1 (*) [64])puVar3;
  }
  uVar33 = ac;
  iVar32 = auVar7._4_4_;
  auVar16._0_8_ = auVar7._0_8_;
  auVar16._12_52_ = auVar7._12_52_;
  if (SplashScreenFlag != 1) {
    uVar34 = (uint)g_player1.controller_type;
    uVar1 = ac & 0xfffffff8 | (uint)(1 < uVar34) << 2 | (uint)(uVar34 == 1) << 1;
    ac = uVar1 | uVar34 == 0;
    if (((byte)(uVar1 >> 1) & 1) != 1) {
      uVar34 = (uint)g_player2.controller_type;
      uVar1 = uVar33 & 0xfffffff8 | (uint)(1 < uVar34) << 2;
      ac = uVar1 | (uint)(uVar34 == 1) << 1 | (uint)(uVar34 == 0);
      if (((byte)ac & 1 | (byte)(uVar1 >> 2) & 1) == 1) {
        if (DWORD_0054f3b0 == 1) {
          uVar1 = uVar33 & 0xfffffff8 | (uint)(1 < BYTE_0054fd12) << 2;
          ac = uVar1 | (uint)(BYTE_0054fd12 == 1) << 1 | (uint)(BYTE_0054fd12 == 0);
          if (((byte)ac & 1 | (byte)(uVar1 >> 2) & 1) == 1) {
            uVar33 = uVar33 & 0xfffffff8 | (uint)(USA < SettingsGameMode_Nation) << 2 |
                     (uint)(SettingsGameMode_Nation == USA) << 1;
            ac = uVar33 | SettingsGameMode_Nation == JAPAN;
            if (((byte)(uVar33 >> 1) & 1) == 1) {
LAB_00003ca8:
              DWORD_0054f3b0 = 3;
              GameOverFlag____0054fcb4 = 2;
              SplashScreen = BYTE_07_EPARecycleSplashScreen_0008fda3;
              uVar33 = iVar32 + 0x3f;
              auVar27._8_4_ = 0x3cd4;
              auVar27._0_8_ = auVar16._0_8_;
              auVar27._12_52_ = auVar16._12_52_;
              *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar27;
              auVar26._8_56_ = auVar27._8_56_;
              auVar26._0_8_ = CONCAT44(uVar33,fp) & 0xffffffc0ffffffff;
              FUN_00004790();
              auVar28._12_52_ = auVar26._12_52_;
              auVar28._0_8_ = auVar26._0_8_;
              auVar28._8_4_ = 0x3cdc;
              *(undefined1 (*) [64])(uVar33 & 0xffffffc0) = auVar28;
              FUN_00004110(0);
              g_player2.controller_type = g_player1.controller_type;
              g_player2.character_id = g_player1.character_id;
              g_player2.costume_id = g_player1.costume_id;
              g_player2.rounds_won = g_player1.rounds_won;
              g_player2.x_position = g_player1.x_position;
              g_player2.y_position = g_player1.y_position;
              g_player2.z_position = g_player1.z_position;
              g_player2.animation_speed = g_player1.animation_speed;
              g_player2.facing_direction = g_player1.facing_direction;
              g_player2.attack_direction = g_player1.attack_direction;
              g_player2.body_direction = g_player1.body_direction;
              g_player2.currentHealth = g_player1.currentHealth;
              g_player2.pendingDamage = g_player1.pendingDamage;
              g_player2.lastHitDamage = g_player1.lastHitDamage;
              g_player2.damageDisplayAmount = g_player1.damageDisplayAmount;
              g_player2.animation_id = g_player1.animation_id;
              g_player2.action_code = g_player1.action_code;
              g_player2.action_flag = g_player1.action_flag;
              g_player2.action_request = g_player1.action_request;
              g_player2.action_state = g_player1.action_state;
              g_player2.pose_state = g_player1.pose_state;
              g_player2.down_state = g_player1.down_state;
              g_player2.upside_down_head = g_player1.upside_down_head;
              g_player2.down_direction = g_player1.down_direction;
              g_player2.attack_point = g_player1.attack_point;
              g_player2.attack_state = g_player1.attack_state;
              g_player2.animation_flip = g_player1.animation_flip;
              g_player2.animation_flag = g_player1.animation_flag;
              g_player2.animation_request = g_player1.animation_request;
              g_player2.hit_attack = g_player1.hit_attack;
              g_player2.hit_body = g_player1.hit_body;
              g_player2.hit_stage = g_player1.hit_stage;
              g_player2.guard_state = g_player1.guard_state;
              g_player2.jump_state = g_player1.jump_state;
              g_player2.jump_height = g_player1.jump_height;
              g_player2.jump_direction = g_player1.jump_direction;
              g_player2.beat_state = g_player1.beat_state;
              g_player2.sky_state = g_player1.sky_state;
              g_player2.down_hit = g_player1.down_hit;
              g_player2.action_cancel = g_player1.action_cancel;
              g_player2.grasp_state = g_player1.grasp_state;
              g_player2.grounded_targetable = g_player1.grounded_targetable;
              g_player2.mount_state = g_player1.mount_state;
              g_player2.ring_out = g_player1.ring_out;
              g_player2.attack_height = g_player1.attack_height;
              g_player2.ring_hit = g_player1.ring_hit;
              g_player2.player_display = g_player1.player_display;
              g_player2.danger_flag = g_player1.danger_flag;
              g_player2.direction_adjust = g_player1.direction_adjust;
              g_player2.damage_number = g_player1.damage_number;
              g_player2.side_spin = g_player1.side_spin;
              g_player2.hit_grasp = g_player1.hit_grasp;
              g_player2.grapple_slip = g_player1.grapple_slip;
              g_player2.beat_hit_state = g_player1.beat_hit_state;
              g_player2.ukemi_flag = g_player1.ukemi_flag;
              g_player2.danger_set = g_player1.danger_set;
              g_player2.combo_flag = g_player1.combo_flag;
              g_player2.combo_count = g_player1.combo_count;
              g_player2.combo_start = g_player1.combo_start;
              g_player2.cancel_use = g_player1.cancel_use;
              g_player2.unknown_56[0] = g_player1.unknown_56[0];
              g_player2.unknown_56[1] = g_player1.unknown_56[1];
              fp = (undefined1 (*) [64])(uVar33 & 0xffffffc0);
              return;
            }
            goto LAB_00003d40;
          }
          DWORD_0054f3b0 = 2;
          SplashScreen = BYTE_08_BurstModeTitleScreen_0008fda2;
        }
        else {
          if (1 < (int)DWORD_0054f3b0) {
            if (DWORD_0054f3b0 == 2) {
              uVar33 = uVar33 & 0xfffffff8 | (uint)(USA < SettingsGameMode_Nation) << 2;
              ac = uVar33 | (uint)(SettingsGameMode_Nation == USA) << 1 |
                   (uint)(SettingsGameMode_Nation == JAPAN);
              if (((byte)ac & 1 | (byte)(uVar33 >> 2) & 1) != 1) goto LAB_00003ca8;
            }
            else {
              uVar33 = uVar33 & 0xfffffff8 | (uint)(3 < (int)DWORD_0054f3b0) << 2 |
                       (uint)(DWORD_0054f3b0 == 3) << 1;
              ac = uVar33 | (int)DWORD_0054f3b0 < 3;
              if (((byte)(uVar33 >> 1) & 1) != 1) {
                fp = (undefined1 (*) [64])auVar7._0_4_;
                return;
              }
            }
LAB_00003d40:
            DWORD_0054f3b0 = g14;
            GameOverFlag____0054fcb4 = 2;
            SplashScreen = BYTE_00_SplashScreen_0008fda0;
            uVar33 = iVar32 + 0x3f;
            auVar30._8_4_ = 0x3d68;
            auVar30._0_8_ = auVar16._0_8_;
            auVar30._12_52_ = auVar16._12_52_;
            *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar30;
            auVar29._8_56_ = auVar30._8_56_;
            auVar29._0_8_ = CONCAT44(uVar33,fp) & 0xffffffc0ffffffff;
            FUN_00004790();
            auVar31._12_52_ = auVar29._12_52_;
            auVar31._0_8_ = auVar29._0_8_;
            auVar31._8_4_ = 0x3d70;
            *(undefined1 (*) [64])(uVar33 & 0xffffffc0) = auVar31;
            FUN_00004110(0);
            g_player2.controller_type = g_player1.controller_type;
            g_player2.character_id = g_player1.character_id;
            g_player2.costume_id = g_player1.costume_id;
            g_player2.rounds_won = g_player1.rounds_won;
            g_player2.x_position = g_player1.x_position;
            g_player2.y_position = g_player1.y_position;
            g_player2.z_position = g_player1.z_position;
            g_player2.animation_speed = g_player1.animation_speed;
            g_player2.facing_direction = g_player1.facing_direction;
            g_player2.attack_direction = g_player1.attack_direction;
            g_player2.body_direction = g_player1.body_direction;
            g_player2.currentHealth = g_player1.currentHealth;
            g_player2.pendingDamage = g_player1.pendingDamage;
            g_player2.lastHitDamage = g_player1.lastHitDamage;
            g_player2.damageDisplayAmount = g_player1.damageDisplayAmount;
            g_player2.animation_id = g_player1.animation_id;
            g_player2.action_code = g_player1.action_code;
            g_player2.action_flag = g_player1.action_flag;
            g_player2.action_request = g_player1.action_request;
            g_player2.action_state = g_player1.action_state;
            g_player2.pose_state = g_player1.pose_state;
            g_player2.down_state = g_player1.down_state;
            g_player2.upside_down_head = g_player1.upside_down_head;
            g_player2.down_direction = g_player1.down_direction;
            g_player2.attack_point = g_player1.attack_point;
            g_player2.attack_state = g_player1.attack_state;
            g_player2.animation_flip = g_player1.animation_flip;
            g_player2.animation_flag = g_player1.animation_flag;
            g_player2.animation_request = g_player1.animation_request;
            g_player2.hit_attack = g_player1.hit_attack;
            g_player2.hit_body = g_player1.hit_body;
            g_player2.hit_stage = g_player1.hit_stage;
            g_player2.guard_state = g_player1.guard_state;
            g_player2.jump_state = g_player1.jump_state;
            g_player2.jump_height = g_player1.jump_height;
            g_player2.jump_direction = g_player1.jump_direction;
            g_player2.beat_state = g_player1.beat_state;
            g_player2.sky_state = g_player1.sky_state;
            g_player2.down_hit = g_player1.down_hit;
            g_player2.action_cancel = g_player1.action_cancel;
            g_player2.grasp_state = g_player1.grasp_state;
            g_player2.grounded_targetable = g_player1.grounded_targetable;
            g_player2.mount_state = g_player1.mount_state;
            g_player2.ring_out = g_player1.ring_out;
            g_player2.attack_height = g_player1.attack_height;
            g_player2.ring_hit = g_player1.ring_hit;
            g_player2.player_display = g_player1.player_display;
            g_player2.danger_flag = g_player1.danger_flag;
            g_player2.direction_adjust = g_player1.direction_adjust;
            g_player2.damage_number = g_player1.damage_number;
            g_player2.side_spin = g_player1.side_spin;
            g_player2.hit_grasp = g_player1.hit_grasp;
            g_player2.grapple_slip = g_player1.grapple_slip;
            g_player2.beat_hit_state = g_player1.beat_hit_state;
            g_player2.ukemi_flag = g_player1.ukemi_flag;
            g_player2.danger_set = g_player1.danger_set;
            g_player2.combo_flag = g_player1.combo_flag;
            g_player2.combo_count = g_player1.combo_count;
            g_player2.combo_start = g_player1.combo_start;
            g_player2.cancel_use = g_player1.cancel_use;
            g_player2.unknown_56[0] = g_player1.unknown_56[0];
            g_player2.unknown_56[1] = g_player1.unknown_56[1];
            FLOAT_0054fd08 = 10.0;
            FLOAT_0054fd0c = 10.0;
            fp = (undefined1 (*) [64])(uVar33 & 0xffffffc0);
            return;
          }
          uVar33 = uVar33 & 0xfffffff8 | (uint)(0 < (int)DWORD_0054f3b0) << 2 |
                   (uint)(DWORD_0054f3b0 == 0) << 1;
          ac = uVar33 | (int)DWORD_0054f3b0 < 0;
          if (((byte)(uVar33 >> 1) & 1) != 1) {
            fp = (undefined1 (*) [64])auVar7._0_4_;
            return;
          }
          SplashScreen = *(DOA_SplashScreen *)(DWORD_0054f3b0 + 0x8fda1);
          DWORD_0054f3b0 = DWORD_0054f3b0 + 1;
        }
        GameOverFlag____0054fcb4 = 4;
        uVar33 = iVar32 + 0x3f;
        auVar24._8_4_ = 0x3c10;
        auVar24._0_8_ = auVar16._0_8_;
        auVar24._12_52_ = auVar16._12_52_;
        *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar24;
        auVar23._8_56_ = auVar24._8_56_;
        auVar23._0_8_ = CONCAT44(uVar33,fp) & 0xffffffc0ffffffff;
        Task_RegisterOrReplace(&LAB_00016a60,2);
        auVar25._12_52_ = auVar23._12_52_;
        auVar25._0_8_ = auVar23._0_8_;
        auVar25._8_4_ = 0x3c18;
        *(undefined1 (*) [64])(uVar33 & 0xffffffc0) = auVar25;
        FUN_00004110(0);
        uVar5 = g_player1._0_4_;
        g_player2.x_position = g_player1.x_position;
        g_player2.y_position = g_player1.y_position;
        g_player2.z_position = g_player1.z_position;
        g_player2.animation_speed = g_player1.animation_speed;
        g_player2.facing_direction = g_player1.facing_direction;
        g_player2.attack_direction = g_player1.attack_direction;
        g_player2.body_direction = g_player1.body_direction;
        g_player2.currentHealth = g_player1.currentHealth;
        g_player2.pendingDamage = g_player1.pendingDamage;
        g_player2.lastHitDamage = g_player1.lastHitDamage;
        g_player2.damageDisplayAmount = g_player1.damageDisplayAmount;
        g_player2.animation_id = g_player1.animation_id;
        g_player2.action_code = g_player1.action_code;
        g_player2.action_flag = g_player1.action_flag;
        g_player2.action_request = g_player1.action_request;
        g_player2.action_state = g_player1.action_state;
        g_player2.pose_state = g_player1.pose_state;
        g_player2.down_state = g_player1.down_state;
        g_player2.upside_down_head = g_player1.upside_down_head;
        g_player2.down_direction = g_player1.down_direction;
        g_player2.attack_point = g_player1.attack_point;
        g_player2.attack_state = g_player1.attack_state;
        g_player2.animation_flip = g_player1.animation_flip;
        g_player2.animation_flag = g_player1.animation_flag;
        g_player2.animation_request = g_player1.animation_request;
        g_player2.hit_attack = g_player1.hit_attack;
        g_player2.hit_body = g_player1.hit_body;
        g_player2.hit_stage = g_player1.hit_stage;
        g_player2.guard_state = g_player1.guard_state;
        g_player2.jump_state = g_player1.jump_state;
        g_player2.jump_height = g_player1.jump_height;
        g_player2.jump_direction = g_player1.jump_direction;
        g_player2.beat_state = g_player1.beat_state;
        g_player2.sky_state = g_player1.sky_state;
        g_player2.down_hit = g_player1.down_hit;
        g_player2.action_cancel = g_player1.action_cancel;
        g_player2.grasp_state = g_player1.grasp_state;
        g_player2.grounded_targetable = g_player1.grounded_targetable;
        g_player2.mount_state = g_player1.mount_state;
        g_player2.ring_out = g_player1.ring_out;
        g_player2.attack_height = g_player1.attack_height;
        g_player2.ring_hit = g_player1.ring_hit;
        g_player2.player_display = g_player1.player_display;
        g_player2.danger_flag = g_player1.danger_flag;
        g_player2.direction_adjust = g_player1.direction_adjust;
        g_player2.damage_number = g_player1.damage_number;
        g_player2.side_spin = g_player1.side_spin;
        g_player2.hit_grasp = g_player1.hit_grasp;
        g_player2.grapple_slip = g_player1.grapple_slip;
        g_player2.beat_hit_state = g_player1.beat_hit_state;
        g_player2.ukemi_flag = g_player1.ukemi_flag;
        g_player2.danger_set = g_player1.danger_set;
        g_player2.combo_flag = g_player1.combo_flag;
        g_player2.combo_count = g_player1.combo_count;
        g_player2.combo_start = g_player1.combo_start;
        g_player2.cancel_use = g_player1.cancel_use;
        g_player2.unknown_56[0] = g_player1.unknown_56[0];
        g_player2.unknown_56[1] = g_player1.unknown_56[1];
        g_player1.controller_type = (DOA_MANCOM)g14;
        uVar6 = g_player1._0_4_;
        g_player1.character_id = SUB41(uVar5,1);
        g_player1.costume_id = SUB41(uVar5,2);
        g_player1.rounds_won = SUB41(uVar5,3);
        g_player2.character_id = g_player1.character_id;
        g_player2.costume_id = g_player1.costume_id;
        g_player2.rounds_won = g_player1.rounds_won;
        g_player2.controller_type = (DOA_MANCOM)g14;
        fp = (undefined1 (*) [64])(uVar33 & 0xffffffc0);
        g_player1._0_4_ = uVar6;
        return;
      }
    }
    GameMode = (DOA_MANCOM)g14;
    uVar33 = iVar32 + 0x3f;
    auVar19._8_4_ = 0x3b64;
    auVar19._0_8_ = auVar16._0_8_;
    auVar19._12_52_ = auVar16._12_52_;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar19;
    auVar18._8_56_ = auVar19._8_56_;
    auVar18._0_8_ = CONCAT44(uVar33,fp) & 0xffffffc0ffffffff;
    FUN_00004790();
    fp = (undefined1 (*) [64])((uVar33 & 0xffffffc0) + 0x40);
    auVar21._12_52_ = auVar18._12_52_;
    auVar21._0_8_ = auVar18._0_8_;
    auVar21._8_4_ = 0x3b74;
    *(undefined1 (*) [64])(uVar33 & 0xffffffc0) = auVar21;
    auVar20._8_56_ = auVar21._8_56_;
    auVar20._0_8_ = CONCAT44(fp,uVar33) & 0xffffffffffffffc0;
    Task_RegisterOrReplace(&LAB_00013770,2);
    auVar22._12_52_ = auVar20._12_52_;
    auVar22._0_8_ = auVar20._0_8_;
    auVar22._8_4_ = 0x3b78;
    *(undefined1 (*) [64])((uVar33 & 0xffffffc0) + 0x40) = auVar22;
    FUN_00004550();
    return;
  }
  uVar33 = ac & 0xfffffff8 | (uint)(g_player1.controller_type == 1) << 1;
  if (((byte)(uVar33 >> 1) & 1) != 1) {
    uVar33 = (uint)g_player2.controller_type;
    uVar1 = ac & 0xfffffff8 | (uint)(1 < uVar33) << 2;
    ac = uVar1 | (uint)(uVar33 == 1) << 1 | (uint)(uVar33 == 0);
    uVar33 = ac;
    if (((byte)ac & 1 | (byte)(uVar1 >> 2) & 1) == 1) goto LAB_00003b3c;
  }
  ac = uVar33;
  SplashScreen = ~DistributedByAcclaim;
  uVar33 = ac & 0xfffffff8 | (uint)(1 < (int)DWORD_0054f3c0) << 2;
  ac = uVar33 | (uint)(DWORD_0054f3c0 == 1) << 1 | (uint)((int)DWORD_0054f3c0 < 1);
  if (((byte)ac & 1 | (byte)(uVar33 >> 2) & 1) != 1) {
    uVar33 = iVar32 + 0x3f;
    auVar16._8_4_ = 0x3b1c;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar16;
    auVar15._8_56_ = auVar16._8_56_;
    auVar15._0_8_ = CONCAT44(uVar33,fp) & 0xffffffc0ffffffff;
    FUN_00008320(3);
    auVar17._12_52_ = auVar15._12_52_;
    auVar17._0_8_ = auVar15._0_8_;
    auVar17._8_4_ = 0x3b24;
    *(undefined1 (*) [64])(uVar33 & 0xffffffc0) = auVar17;
    auVar7._8_56_ = auVar17._8_56_;
    auVar7._4_4_ = (undefined1 *)0x0;
    auVar7._0_4_ = uVar33 & 0xffffffc0;
    FUN_00008320(0xd);
    BYTE_0054fcfe = (DOA_MANCOM)g14;
    DWORD_0054f3c0 = g14;
    DWORD_0054f3c8 = g14;
  }
LAB_00003b3c:
  fp = (undefined1 (*) [64])auVar7._0_4_;
  return;
}

