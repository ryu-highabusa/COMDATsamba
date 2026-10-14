
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_000039f0(void)

{
  uint uVar1;
  undefined1 (*pauVar2) [64];
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [64];
  undefined4 unaff_pfp;
  int iVar37;
  undefined4 unaff_retaddr;
  undefined1 in_register_0000000c [52];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar13 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar22 [64];
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  undefined1 auVar27 [64];
  undefined1 auVar29 [64];
  undefined1 auVar31 [64];
  undefined1 auVar33 [64];
  undefined1 auVar35 [64];
  uint uVar39;
  uint uVar40;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [64];
  undefined1 auStack_80 [999872];
  undefined1 auVar8 [64];
  undefined1 auVar12 [64];
  undefined1 auVar14 [64];
  undefined1 auVar17 [64];
  undefined1 auVar21 [64];
  undefined1 auVar23 [64];
  undefined1 auVar26 [64];
  undefined1 auVar28 [64];
  undefined1 auVar30 [64];
  undefined1 auVar32 [64];
  undefined1 auVar34 [64];
  undefined1 auVar36 [64];
  undefined1 auVar38 [60];
  
  uVar1 = ac;
  uVar4 = CONCAT44(auStackX_0,unaff_pfp);
  auVar6._8_4_ = unaff_retaddr;
  auVar6._0_8_ = uVar4;
  auVar6._12_52_ = in_register_0000000c;
  ac = ac & 0xfffffff8 | (uint)(BYTE_0054fcee == 0);
  if (((byte)ac & 1 | 1 < BYTE_0054fcee) != 1) {
    BYTE_0054fcee = (DOA_MANCOM)g14;
    g_player1.controller_type = MAN;
    BYTE_0054fd00 = 1;
    uVar39 = g_player2._0_4_ & 0xff;
    ac = uVar1 & 0xfffffff8 | (uint)(uVar39 != 0) << 2 | (uint)(uVar39 == 0) << 1;
    if (uVar39 != 0) {
      GameOverFlag____0054fcb4 = 1;
      BYTE_0054fd11 = 1;
      auVar9._8_4_ = 0x3a5c;
      auVar9._0_8_ = uVar4;
      auVar9._12_52_ = in_register_0000000c;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar9;
      auVar5._4_56_ = auVar9._8_56_;
      auVar5._0_4_ = auStack_40;
      auVar5._60_4_ = 0;
      auVar7 = auVar5 << 0x20;
      FUN_00004640(1);
    }
    else {
      GameOverFlag____0054fcb4 = (DOA_MANCOM)g14;
      BYTE_0054fd11 = (DOA_MANCOM)g14;
      auVar8._8_4_ = 0x3a3c;
      auVar8._0_8_ = uVar4;
      auVar8._12_52_ = in_register_0000000c;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar8;
      auVar7._4_56_ = auVar8._8_56_;
      auVar7._0_4_ = auStack_40;
      auVar7._60_4_ = 0;
      auVar7 = auVar7 << 0x20;
      FUN_00004640(0);
    }
    auVar10._8_56_ = auVar7._8_56_;
    auVar10._4_4_ = auStackX_0;
    auVar10._0_4_ = fp;
    fp = &auStack_40;
    auStackX_0._12_52_ = auVar7._12_52_;
    auStackX_0._0_8_ = auVar10._0_8_;
    auStackX_0._8_4_ = 0x3a64;
    auVar6._8_56_ = auStackX_0._8_56_;
    auVar6._4_4_ = auStack_80;
    auVar6._0_4_ = auStackX_0;
    FUN_00004840(0);
  }
  uVar1 = ac;
  puVar3 = *fp;
  ac = ac & 0xfffffff8 | (uint)(BYTE_0054fcf8 == 0);
  if (((byte)ac & 1 | 1 < BYTE_0054fcf8) != 1) {
    BYTE_0054fcf8 = (DOA_MANCOM)g14;
    g_player2.controller_type = MAN;
    BYTE_0054fd01 = 1;
    uVar39 = g_player1._0_4_ & 0xff;
    ac = uVar1 & 0xfffffff8 | (uint)(uVar39 != 0) << 2 | (uint)(uVar39 == 0) << 1;
    auVar12._0_8_ = auVar6._0_8_;
    auVar12._12_52_ = auVar6._12_52_;
    if (uVar39 != 0) {
      GameOverFlag____0054fcb4 = 1;
      BYTE_0054fd11 = (DOA_MANCOM)g14;
      pauVar2 = (undefined1 (*) [64])(auVar6._4_4_ + 0x3fU & 0xffffffc0);
      auVar14._8_4_ = &LAB_00003ad0;
      auVar14._0_8_ = auVar12._0_8_;
      auVar14._12_52_ = auVar12._12_52_;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar14;
      auVar13._4_56_ = auVar14._8_56_;
      auVar13._0_4_ = pauVar2 + 1;
      auVar13._60_4_ = 0;
      auVar13 = auVar13 << 0x20;
      FUN_00004640(1);
      auVar38 = auVar13._4_60_;
      fp = pauVar2;
    }
    else {
      GameOverFlag____0054fcb4 = (DOA_MANCOM)g14;
      BYTE_0054fd11 = 1;
      pauVar2 = (undefined1 (*) [64])(auVar6._4_4_ + 0x3fU & 0xffffffc0);
      auVar12._8_4_ = 0x3ab0;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar12;
      auVar11._4_56_ = auVar12._8_56_;
      auVar11._0_4_ = pauVar2 + 1;
      auVar11._60_4_ = 0;
      auVar11 = auVar11 << 0x20;
      FUN_00004640(0);
      auVar38 = auVar11._4_60_;
      fp = pauVar2;
    }
    auVar15._4_60_ = auVar38;
    auVar15._0_4_ = puVar3;
    puVar3 = (undefined1 *)(auVar38._0_4_ + 0x3fU & 0xffffffc0);
    auVar16._12_52_ = auVar38._8_52_;
    auVar16._0_8_ = auVar15._0_8_;
    auVar16._8_4_ = 0x3ad8;
    *fp = auVar16;
    auVar6._8_56_ = auVar16._8_56_;
    auVar6._4_4_ = puVar3 + 0x40;
    auVar6._0_4_ = fp;
    FUN_00004840(1);
    fp = (undefined1 (*) [64])puVar3;
  }
  uVar1 = ac;
  iVar37 = auVar6._4_4_;
  auVar18._0_8_ = auVar6._0_8_;
  auVar18._12_52_ = auVar6._12_52_;
  if (SplashScreenFlag != 1) {
    uVar40 = g_player1._0_4_ & 0xff;
    uVar39 = ac & 0xfffffff8 | (uint)(1 < uVar40) << 2 | (uint)(uVar40 == 1) << 1;
    ac = uVar39 | uVar40 == 0;
    if (((byte)(uVar39 >> 1) & 1) != 1) {
      uVar39 = g_player2._0_4_ & 0xff;
      ac = uVar1 & 0xfffffff8 | (uint)(1 < uVar39) << 2 | (uint)(uVar39 == 1) << 1 |
           (uint)(uVar39 == 0);
      if (((byte)ac & 1 | 1 < uVar39) == 1) {
        if (DWORD_0054f3b0 == 1) {
          ac = uVar1 & 0xfffffff8 | (uint)(1 < g_effective_burst_mode) << 2 |
               (uint)(g_effective_burst_mode == 1) << 1 | (uint)(g_effective_burst_mode == 0);
          if (((byte)ac & 1 | 1 < g_effective_burst_mode) == 1) {
            uVar1 = uVar1 & 0xfffffff8 | (uint)(USA < g_effective_nation) << 2 |
                    (uint)(g_effective_nation == USA) << 1;
            ac = uVar1 | g_effective_nation == JAPAN;
            if (((byte)(uVar1 >> 1) & 1) == 1) {
LAB_00003ca8:
              DWORD_0054f3b0 = 3;
              GameOverFlag____0054fcb4 = 2;
              SplashScreen = BYTE_07_EPARecycleSplashScreen_0008fda3;
              uVar1 = iVar37 + 0x3f;
              auVar30._8_4_ = 0x3cd4;
              auVar30._0_8_ = auVar18._0_8_;
              auVar30._12_52_ = auVar18._12_52_;
              *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar30;
              auVar29._8_56_ = auVar30._8_56_;
              auVar29._0_8_ = CONCAT44(uVar1,fp) & 0xffffffc0ffffffff;
              FUN_00004790();
              auVar32._12_52_ = auVar29._12_52_;
              auVar32._0_8_ = auVar29._0_8_;
              auVar32._8_4_ = 0x3cdc;
              *(undefined1 (*) [64])(uVar1 & 0xffffffc0) = auVar32;
              auVar31._8_56_ = auVar32._8_56_;
              auVar31._4_4_ = 0;
              auVar31._0_4_ = uVar1 & 0xffffffc0;
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
              fp = (undefined1 (*) [64])auVar31._0_4_;
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
              ac = uVar1 & 0xfffffff8 | (uint)(USA < g_effective_nation) << 2 |
                   (uint)(g_effective_nation == USA) << 1 | (uint)(g_effective_nation == JAPAN);
              if (((byte)ac & 1 | USA < g_effective_nation) != 1) goto LAB_00003ca8;
            }
            else {
              uVar1 = uVar1 & 0xfffffff8 | (uint)(3 < (int)DWORD_0054f3b0) << 2 |
                      (uint)(DWORD_0054f3b0 == 3) << 1;
              ac = uVar1 | (int)DWORD_0054f3b0 < 3;
              if (((byte)(uVar1 >> 1) & 1) != 1) {
                fp = (undefined1 (*) [64])auVar6._0_4_;
                return;
              }
            }
LAB_00003d40:
            DWORD_0054f3b0 = g14;
            GameOverFlag____0054fcb4 = 2;
            SplashScreen = BYTE_00_SplashScreen_0008fda0;
            uVar1 = iVar37 + 0x3f;
            auVar34._8_4_ = 0x3d68;
            auVar34._0_8_ = auVar18._0_8_;
            auVar34._12_52_ = auVar18._12_52_;
            *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar34;
            auVar33._8_56_ = auVar34._8_56_;
            auVar33._0_8_ = CONCAT44(uVar1,fp) & 0xffffffc0ffffffff;
            FUN_00004790();
            auVar36._12_52_ = auVar33._12_52_;
            auVar36._0_8_ = auVar33._0_8_;
            auVar36._8_4_ = 0x3d70;
            *(undefined1 (*) [64])(uVar1 & 0xffffffc0) = auVar36;
            auVar35._8_56_ = auVar36._8_56_;
            auVar35._4_4_ = 0;
            auVar35._0_4_ = uVar1 & 0xffffffc0;
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
            g_dangerBoundaryHalfExtentX = 10.0;
            g_dangerBoundaryHalfExtentZ = 10.0;
            fp = (undefined1 (*) [64])auVar35._0_4_;
            return;
          }
          uVar1 = uVar1 & 0xfffffff8 | (uint)(0 < (int)DWORD_0054f3b0) << 2 |
                  (uint)(DWORD_0054f3b0 == 0) << 1;
          ac = uVar1 | (int)DWORD_0054f3b0 < 0;
          if (((byte)(uVar1 >> 1) & 1) != 1) {
            fp = (undefined1 (*) [64])auVar6._0_4_;
            return;
          }
          SplashScreen = *(DOA_SplashScreen *)(DWORD_0054f3b0 + 0x8fda1);
          DWORD_0054f3b0 = DWORD_0054f3b0 + 1;
        }
        GameOverFlag____0054fcb4 = 4;
        uVar1 = iVar37 + 0x3f;
        auVar26._8_4_ = 0x3c10;
        auVar26._0_8_ = auVar18._0_8_;
        auVar26._12_52_ = auVar18._12_52_;
        *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar26;
        auVar25._8_56_ = auVar26._8_56_;
        auVar25._0_8_ = CONCAT44(uVar1,fp) & 0xffffffc0ffffffff;
        Task_RegisterOrReplace(&LAB_00016a60,2);
        auVar28._12_52_ = auVar25._12_52_;
        auVar28._0_8_ = auVar25._0_8_;
        auVar28._8_4_ = 0x3c18;
        *(undefined1 (*) [64])(uVar1 & 0xffffffc0) = auVar28;
        auVar27._8_56_ = auVar28._8_56_;
        auVar27._4_4_ = 0;
        auVar27._0_4_ = uVar1 & 0xffffffc0;
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
                    /* WARNING: Ignoring partial resolution of indirect */
        g_player1.controller_type = (DOA_MANCOM)g14;
                    /* WARNING: Ignoring partial resolution of indirect */
        g_player2.controller_type = (DOA_MANCOM)g14;
        fp = (undefined1 (*) [64])auVar27._0_4_;
        g_player1._0_4_ = g_player1._0_4_;
        g_player2._0_4_ = g_player2._0_4_;
        return;
      }
    }
    GameMode = (DOA_MANCOM)g14;
    uVar1 = iVar37 + 0x3f;
    auVar21._8_4_ = 0x3b64;
    auVar21._0_8_ = auVar18._0_8_;
    auVar21._12_52_ = auVar18._12_52_;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar21;
    auVar20._8_56_ = auVar21._8_56_;
    auVar20._0_8_ = CONCAT44(uVar1,fp) & 0xffffffc0ffffffff;
    FUN_00004790();
    fp = (undefined1 (*) [64])((uVar1 & 0xffffffc0) + 0x40);
    auVar23._12_52_ = auVar20._12_52_;
    auVar23._0_8_ = auVar20._0_8_;
    auVar23._8_4_ = 0x3b74;
    *(undefined1 (*) [64])(uVar1 & 0xffffffc0) = auVar23;
    auVar22._8_56_ = auVar23._8_56_;
    auVar22._0_8_ = CONCAT44(fp,uVar1) & 0xffffffffffffffc0;
    Task_RegisterOrReplace(&CharacterSelect_TaskMain_candidate,2);
    auVar24._12_52_ = auVar22._12_52_;
    auVar24._0_8_ = auVar22._0_8_;
    auVar24._8_4_ = 0x3b78;
    *(undefined1 (*) [64])((uVar1 & 0xffffffc0) + 0x40) = auVar24;
    FUN_00004550();
    return;
  }
  uVar1 = ac & 0xfffffff8 | (uint)((g_player1._0_4_ & 0xff) == 1) << 1;
  if (((byte)(uVar1 >> 1) & 1) != 1) {
    uVar39 = g_player2._0_4_ & 0xff;
    ac = ac & 0xfffffff8 | (uint)(1 < uVar39) << 2 | (uint)(uVar39 == 1) << 1 | (uint)(uVar39 == 0);
    uVar1 = ac;
    if (((byte)ac & 1 | 1 < uVar39) == 1) goto LAB_00003b3c;
  }
  ac = uVar1;
  SplashScreen = ~DistributedByAcclaim;
  ac = ac & 0xfffffff8 | (uint)(1 < (int)DWORD_0054f3c0) << 2 | (uint)(DWORD_0054f3c0 == 1) << 1 |
       (uint)((int)DWORD_0054f3c0 < 1);
  if (((byte)ac & 1 | 1 < (int)DWORD_0054f3c0) != 1) {
    uVar1 = iVar37 + 0x3f;
    auVar18._8_4_ = 0x3b1c;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar18;
    auVar17._8_56_ = auVar18._8_56_;
    auVar17._0_8_ = CONCAT44(uVar1,fp) & 0xffffffc0ffffffff;
    FUN_00008320(3);
    auVar19._12_52_ = auVar17._12_52_;
    auVar19._0_8_ = auVar17._0_8_;
    auVar19._8_4_ = 0x3b24;
    *(undefined1 (*) [64])(uVar1 & 0xffffffc0) = auVar19;
    auVar6._8_56_ = auVar19._8_56_;
    auVar6._4_4_ = (undefined1 *)0x0;
    auVar6._0_4_ = uVar1 & 0xffffffc0;
    FUN_00008320(0xd);
    BYTE_0054fcfe = (DOA_MANCOM)g14;
    DWORD_0054f3c0 = g14;
    DWORD_0054f3c8 = g14;
  }
LAB_00003b3c:
  fp = (undefined1 (*) [64])auVar6._0_4_;
  return;
}

