
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_000214d0(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined1 in_register_0000000c [52];
  undefined1 auVar3 [64];
  undefined1 auVar4 [64];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar11 [64];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar17 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 auVar23 [64];
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  undefined1 auVar34 [64];
  undefined1 auVar35 [64];
  undefined1 auVar36 [64];
  undefined1 auVar37 [64];
  byte bVar38;
  undefined1 uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [64];
  undefined1 auStack_80 [64];
  undefined1 auStack_c0 [999808];
  undefined1 auVar5 [64];
  undefined1 auVar10 [64];
  undefined1 auVar12 [64];
  undefined1 auVar16 [64];
  undefined1 auVar18 [64];
  undefined1 auVar22 [64];
  undefined1 auVar24 [64];
  undefined1 auVar30 [64];
  undefined1 auVar33 [64];
  
  uVar40 = ac;
  uVar41 = (uint)fp;
  uVar1 = CONCAT44(auStackX_0,unaff_pfp);
  auVar3._8_4_ = unaff_retaddr;
  auVar3._0_8_ = uVar1;
  auVar3._12_52_ = in_register_0000000c;
  auVar21._0_16_ = auVar3._0_16_;
  auVar21._16_4_ = &g_player1;
  auVar21._24_40_ = in_register_0000000c._12_40_;
  auVar21._20_4_ = &g_player2;
  auVar5._12_52_ = auVar21._12_52_;
  if (g_player2.hit_attack == '\x01') {
    if (1 < (byte)(g_player2.action_state - 0x2_JUMPATTACK)) {
      if (g_player2.action_state == 0xE_DOWNATTACK) {
        if (g_player1.hit_attack == '\x01') {
          bVar38 = g_player1.action_state - 0x2_JUMPATTACK;
          ac = ac & 0xfffffff8 | (uint)(1 < bVar38) << 2 | (uint)(bVar38 == 1) << 1 |
               (uint)(g_player1.action_state == 0x2_JUMPATTACK);
          if (1 < bVar38) {
            fp = (undefined1 *)unaff_pfp;
            return;
          }
          auVar14._8_4_ = 0x21708;
          auVar14._0_8_ = uVar1;
          auVar14._12_52_ = auVar5._12_52_;
          *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar14;
          fp = auStackX_0;
          bVar38 = Battle_ResolveHitForPlayer_candidate(1);
          ac = ac & 0xfffffff8 | (uint)(1 < bVar38) << 2 | (uint)(bVar38 == 1) << 1 |
               (uint)(bVar38 == 0);
          if (((byte)ac & 1 | 1 < bVar38) == 1) {
            fp = (undefined1 *)uVar41;
            return;
          }
          FUN_00022610(1);
          return;
        }
        uVar41 = ac & 0xfffffff8 | (uint)(0xD_SPECIALMOVE < g_player1.action_state) << 2 |
                 (uint)(g_player1.action_state == 0xD_SPECIALMOVE) << 1;
        ac = uVar41 | g_player1.action_state < 0xD_SPECIALMOVE;
        if (((((byte)(uVar41 >> 1) & 1) != 1) &&
            (uVar41 = uVar40 & 0xfffffff8 | (uint)(0x9_HITSTUN < g_player1.action_state) << 2 |
                      (uint)(g_player1.action_state == 0x9_HITSTUN) << 1,
            ac = uVar41 | g_player1.action_state < 0x9_HITSTUN, ((byte)(uVar41 >> 1) & 1) != 1)) &&
           (uVar41 = uVar40 & 0xfffffff8 | (uint)(0xC_GROUNDED < g_player1.action_state) << 2 |
                     (uint)(g_player1.action_state == 0xC_GROUNDED) << 1,
           ac = uVar41 | g_player1.action_state < 0xC_GROUNDED, ((byte)(uVar41 >> 1) & 1) != 1)) {
          ac = uVar40 & 0xfffffff8 | (uint)(0x3_ATTACK < g_player1.action_state) << 2 |
               (uint)(g_player1.action_state == 0x3_ATTACK) << 1 |
               (uint)(g_player1.action_state < 0x3_ATTACK);
          if (((byte)ac & 1 | 0x3_ATTACK < g_player1.action_state) != 1) {
            bVar38 = g_player1.action_code + 0x8d;
            ac = uVar40 & 0xfffffff8 | (uint)(0x17 < bVar38) << 2 | (uint)(bVar38 == 0x17) << 1 |
                 (uint)(bVar38 < 0x17);
            if ((0x17 >= bVar38) &&
               (ac = uVar40 & 0xfffffff8 | (uint)(1 < g_player1.mount_state) << 2 |
                     (uint)(g_player1.mount_state == '\x01') << 1 |
                     (uint)(g_player1.mount_state == '\0'),
               ((byte)ac & 1 | 1 < g_player1.mount_state) != 1)) goto LAB_00021754;
          }
          fp = (undefined1 *)unaff_pfp;
          return;
        }
LAB_00021754:
        Battle_SelectAndApplyHitReaction(1);
        return;
      }
      if (g_player1.hit_attack != '\x01') {
        if ((g_player1.action_state == 0x5_HOLD) && (g_player1.attack_state != '\x02')) {
          if ((byte)(g_player1.action_code - CMD_GRASP_HI) < 5) {
            bVar38 = g_player2.action_code - CMD_GRASP_HI;
            uVar40 = ac & 0xfffffff8 | (uint)(4 < bVar38) << 2 | (uint)(bVar38 == 4) << 1;
            ac = uVar40 | bVar38 < 4;
            if (((byte)ac & 1 | (byte)(uVar40 >> 1) & 1) != 1) {
              auVar26._8_4_ = 0x21950;
              auVar26._0_8_ = uVar1;
              auVar26._12_52_ = auVar5._12_52_;
              *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar26;
              fp = auStackX_0;
              auVar21._8_56_ = auVar26._8_56_;
              auVar21._4_4_ = 0;
              auVar21._0_4_ = uVar41;
              uVar41 = FUN_00022b70(1);
              uVar41 = uVar41 & 0xff;
              ac = ac & 0xfffffff8 | (uint)(uVar41 < 0xfd) << 2 | (uint)(uVar41 == 0xfd) << 1 |
                   (uint)(0xfd < uVar41);
              if (((byte)ac & 1) != 1) {
                FUN_000229f0(uVar41,1,0);
                return;
              }
            }
            fp = (undefined1 *)auVar21._0_4_;
            return;
          }
          bVar38 = g_player2.action_code - CMD_GRASP_HI;
          uVar41 = ac & 0xfffffff8 | (uint)(4 < bVar38) << 2 | (uint)(bVar38 == 4) << 1;
          ac = uVar41 | bVar38 < 4;
          if ((((byte)ac & 1 | (byte)(uVar41 >> 1) & 1) != 1) &&
             (ac = uVar40 & 0xfffffff8 | (uint)(g_player1.pose_state < g_player2.pose_state) << 2 |
                   (uint)(g_player1.pose_state == g_player2.pose_state) << 1 |
                   (uint)(g_player2.pose_state < g_player1.pose_state),
             ((byte)ac & 1 | g_player1.pose_state < g_player2.pose_state) != 1)) {
            g_player1.animation_flag = g14;
            auVar24._8_4_ = 0x21900;
            auVar24._0_8_ = uVar1;
            auVar24._12_52_ = auVar5._12_52_;
            *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar24;
            auVar23._8_56_ = auVar24._8_56_;
            auVar23._4_4_ = auStackX_0;
            auVar23._0_4_ = fp;
            uVar39 = FUN_00022f70(10,0);
            auStackX_0._12_52_ = auVar23._12_52_;
            auStackX_0._0_8_ = auVar23._0_8_;
            auStackX_0._8_4_ = 0x21910;
            auVar25._8_56_ = auStackX_0._8_56_;
            auVar25._4_4_ = auStack_40;
            auVar25._0_4_ = auStackX_0;
            FUN_00025020(uVar39,0);
            g_player2.animation_flag = g14;
            auStack_40._12_52_ = auVar25._12_52_;
            auStack_40._0_8_ = auVar25._0_8_;
            auStack_40._8_4_ = 0x21920;
            fp = auStack_80;
            uVar39 = FUN_00022f70(10,1);
            FUN_00025020(uVar39,1);
            return;
          }
          fp = (undefined1 *)unaff_pfp;
          return;
        }
        bVar38 = g_player1.action_state - 0x2_JUMPATTACK;
        ac = ac & 0xfffffff8 | (uint)(1 < bVar38) << 2 | (uint)(bVar38 == 1) << 1 |
             (uint)(g_player1.action_state == 0x2_JUMPATTACK);
        if (1 < bVar38) {
          auVar28._8_4_ = 0x219b4;
          auVar28._0_8_ = uVar1;
          auVar28._12_52_ = auVar5._12_52_;
          *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar28;
          fp = auStackX_0;
          uVar40 = FUN_00022b70(1);
          uVar40 = uVar40 & 0xff;
          ac = ac & 0xfffffff8 | (uint)(uVar40 < 0xfd) << 2 | (uint)(uVar40 == 0xfd) << 1 |
               (uint)(0xfd < uVar40);
          if (((byte)ac & 1) == 1) {
            fp = (undefined1 *)uVar41;
            return;
          }
          FUN_000229f0(uVar40,1,0);
          return;
        }
        auVar27._8_4_ = 0x2198c;
        auVar27._0_8_ = uVar1;
        auVar27._12_52_ = auVar5._12_52_;
        *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar27;
        fp = auStackX_0;
        uVar40 = FUN_00022b70(1);
        uVar40 = uVar40 & 0xff;
        ac = ac & 0xfffffff8 | (uint)(uVar40 < 0xfd) << 2 | (uint)(uVar40 == 0xfd) << 1 |
             (uint)(0xfd < uVar40);
        if (((byte)ac & 1) == 1) {
          fp = (undefined1 *)uVar41;
          return;
        }
        FUN_000229f0(uVar40,1,1);
        return;
      }
      bVar38 = g_player1.action_state - 0x2_JUMPATTACK;
      ac = ac & 0xfffffff8 | (uint)(1 < bVar38) << 2 | (uint)(bVar38 == 1) << 1 |
           (uint)(g_player1.action_state == 0x2_JUMPATTACK);
      if (1 < bVar38) {
        uVar42 = uVar40 & 0xfffffff8 | (uint)(0xE_DOWNATTACK < g_player1.action_state) << 2 |
                 (uint)(g_player1.action_state == 0xE_DOWNATTACK) << 1;
        ac = uVar42 | g_player1.action_state < 0xE_DOWNATTACK;
        if (((byte)(uVar42 >> 1) & 1) != 1) {
          if (4 < (byte)(g_player1.action_code - CMD_GRASP_HI)) {
            bVar38 = g_player2.action_code - CMD_GRASP_HI;
            uVar42 = uVar40 & 0xfffffff8 | (uint)(4 < bVar38) << 2 | (uint)(bVar38 == 4) << 1;
            ac = uVar42 | bVar38 < 4;
            if (((byte)ac & 1 | (byte)(uVar42 >> 1) & 1) == 1) {
              auVar20._8_4_ = 0x21854;
              auVar20._0_8_ = uVar1;
              auVar20._12_52_ = auVar5._12_52_;
              *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar20;
              fp = auStackX_0;
              uVar40 = FUN_00022b70(0);
              uVar40 = uVar40 & 0xff;
              ac = ac & 0xfffffff8 | (uint)(uVar40 < 0xfd) << 2 | (uint)(uVar40 == 0xfd) << 1 |
                   (uint)(0xfd < uVar40);
              if (((byte)ac & 1) == 1) {
                fp = (undefined1 *)uVar41;
                return;
              }
              FUN_000229f0(uVar40,0,0);
              return;
            }
            ac = uVar40 & 0xfffffff8 | (uint)(g_player1.pose_state < g_player2.pose_state) << 2 |
                 (uint)(g_player1.pose_state == g_player2.pose_state) << 1 |
                 (uint)(g_player2.pose_state < g_player1.pose_state);
            if (((byte)ac & 1 | g_player1.pose_state < g_player2.pose_state) == 1) {
              fp = (undefined1 *)unaff_pfp;
              return;
            }
            g_player1.animation_flag = g14;
            auVar18._8_4_ = 0x21818;
            auVar18._0_8_ = uVar1;
            auVar18._12_52_ = auVar5._12_52_;
            *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar18;
            auVar17._8_56_ = auVar18._8_56_;
            auVar17._4_4_ = auStackX_0;
            auVar17._0_4_ = fp;
            uVar39 = FUN_00022f70(10,0);
            auStackX_0._12_52_ = auVar17._12_52_;
            auStackX_0._0_8_ = auVar17._0_8_;
            auStackX_0._8_4_ = 0x21828;
            auVar19._8_56_ = auStackX_0._8_56_;
            auVar19._4_4_ = auStack_40;
            auVar19._0_4_ = auStackX_0;
            FUN_00025020(uVar39,0);
            g_player2.animation_flag = g14;
            auStack_40._12_52_ = auVar19._12_52_;
            auStack_40._0_8_ = auVar19._0_8_;
            auStack_40._8_4_ = 0x21838;
            fp = auStack_80;
            uVar39 = FUN_00022f70(10,1);
            FUN_00025020(uVar39,1);
            return;
          }
          bVar38 = g_player2.action_code - CMD_GRASP_HI;
          uVar40 = uVar40 & 0xfffffff8 | (uint)(4 < bVar38) << 2 | (uint)(bVar38 == 4) << 1;
          ac = uVar40 | bVar38 < 4;
          if (((byte)ac & 1 | (byte)(uVar40 >> 1) & 1) != 1) {
            auVar22._8_4_ = 0x21890;
            auVar22._0_8_ = uVar1;
            auVar22._12_52_ = auVar5._12_52_;
            *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar22;
            fp = auStackX_0;
            auVar21._8_56_ = auVar22._8_56_;
            auVar21._4_4_ = 0;
            auVar21._0_4_ = uVar41;
            uVar41 = FUN_00022b70(1);
            uVar41 = uVar41 & 0xff;
            ac = ac & 0xfffffff8 | (uint)(uVar41 < 0xfd) << 2 | (uint)(uVar41 == 0xfd) << 1 |
                 (uint)(0xfd < uVar41);
            if (((byte)ac & 1) != 1) {
              FUN_000229f0(uVar41,1,0);
              return;
            }
          }
        }
        fp = (undefined1 *)auVar21._0_4_;
        return;
      }
      auVar16._8_4_ = 0x21784;
      auVar16._0_8_ = uVar1;
      auVar16._12_52_ = auVar5._12_52_;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar16;
      auVar15._8_56_ = auVar16._8_56_;
      auVar15._4_4_ = auStack_40;
      auVar15._0_4_ = fp;
      uVar40 = FUN_00022b70(1);
      uVar41 = ac;
      uVar42 = uVar40 & 0xff;
      ac = ac & 0xfffffff8 | (uint)(uVar42 < 0xfd) << 2 | (uint)(uVar42 == 0xfd) << 1 |
           (uint)(0xfd < uVar42);
      if (((byte)ac & 1) == 1) {
        uVar40 = uVar40 & 0xff;
        uVar41 = uVar41 & 0xfffffff8 | (uint)(uVar40 < 0xfe) << 2 | (uint)(uVar40 == 0xfe) << 1;
        ac = uVar41 | 0xfe < uVar40;
        if (((byte)(uVar41 >> 1) & 1) != 1) {
          auStackX_0._12_52_ = auVar15._12_52_;
          auStackX_0._0_8_ = auVar15._0_8_;
          auStackX_0._8_4_ = 0x217b8;
          fp = auStack_40;
          bVar38 = Battle_ResolveHitForPlayer_candidate(1);
          ac = ac & 0xfffffff8 | (uint)(1 < bVar38) << 2 | (uint)(bVar38 == 1) << 1 |
               (uint)(bVar38 == 0);
          if (((byte)ac & 1 | 1 < bVar38) == 1) {
            fp = auStackX_0;
            return;
          }
          FUN_00022610(1);
          return;
        }
LAB_00021a34:
        fp = auStackX_0;
        g_player2.animation_flag = g14;
        Player_SetActCode(0x98,1);
        return;
      }
      uVar41 = 1;
      goto LAB_00021b84;
    }
    if (g_player1.hit_attack == '\x01') {
      bVar38 = g_player1.action_state - 0x2_JUMPATTACK;
      ac = ac & 0xfffffff8 | (uint)(1 < bVar38) << 2 | (uint)(bVar38 == 1) << 1 |
           (uint)(g_player1.action_state == 0x2_JUMPATTACK);
      if (1 >= bVar38) {
        auVar5._8_4_ = 0x21528;
        auVar5._0_8_ = uVar1;
        *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar5;
        auVar4._8_56_ = auVar5._8_56_;
        auVar4._4_4_ = auStackX_0;
        auVar4._0_4_ = fp;
        uVar40 = FUN_00025500();
        uVar41 = ac;
        uVar42 = uVar40 & 0xff;
        ac = ac & 0xfffffff8 | (uint)(2 < uVar42) << 2 | (uint)(uVar42 == 2) << 1 |
             (uint)(uVar42 < 2);
        auStackX_0._0_8_ = auVar4._0_8_;
        auStackX_0._12_52_ = auVar4._12_52_;
        if (((byte)ac & 1 | 2 < uVar42) != 1) {
          auStackX_0._8_4_ = 0x2153c;
          fp = auStack_40;
          bVar38 = Battle_ResolveHitForPlayer_candidate(0);
          ac = ac & 0xfffffff8 | (uint)(1 < bVar38) << 2 | (uint)(bVar38 == 1) << 1 |
               (uint)(bVar38 == 0);
          if (((byte)ac & 1 | 1 < bVar38) == 1) {
            fp = auStackX_0;
            return;
          }
          FUN_00022610(0);
          return;
        }
        uVar40 = uVar40 & 0xff;
        ac = uVar41 & 0xfffffff8 | (uint)(uVar40 != 0) << 2 | (uint)(uVar40 == 0) << 1;
        if (uVar40 == 0) {
          auStackX_0._8_4_ = 0x21568;
          fp = auStack_40;
          bVar38 = Battle_ResolveHitForPlayer_candidate(1);
          ac = ac & 0xfffffff8 | (uint)(1 < bVar38) << 2 | (uint)(bVar38 == 1) << 1 |
               (uint)(bVar38 == 0);
          if (((byte)ac & 1 | 1 < bVar38) == 1) {
            fp = auStackX_0;
            return;
          }
          FUN_00022610(1);
          return;
        }
        auStackX_0._8_4_ = 0x21588;
        auVar6._8_56_ = auStackX_0._8_56_;
        auVar6._4_4_ = auStack_40;
        auVar6._0_4_ = auStackX_0;
        bVar38 = Battle_ResolveHitForPlayer_candidate(0);
        ac = ac & 0xfffffff8 | (uint)(1 < bVar38) << 2 | (uint)(bVar38 == 1) << 1 |
             (uint)(bVar38 == 0);
        auStack_40._0_8_ = auVar6._0_8_;
        auStack_40._12_52_ = auVar6._12_52_;
        if (((byte)ac & 1 | 1 < bVar38) == 1) {
          auStack_40._8_4_ = 0x215bc;
          fp = auStack_80;
          bVar38 = Battle_ResolveHitForPlayer_candidate(1);
          ac = ac & 0xfffffff8 | (uint)(1 < bVar38) << 2 | (uint)(bVar38 == 1) << 1 |
               (uint)(bVar38 == 0);
          if (((byte)ac & 1 | 1 < bVar38) == 1) {
            fp = auStack_40;
            return;
          }
          FUN_00022610(1);
          return;
        }
        auStack_40._8_4_ = 0x2159c;
        auVar7._8_56_ = auStack_40._8_56_;
        auVar7._4_4_ = auStack_c0;
        auVar7._0_4_ = auStack_40;
        bVar38 = Battle_ResolveHitForPlayer_candidate(1);
        ac = ac & 0xfffffff8 | (uint)(1 < bVar38) << 2 | (uint)(bVar38 == 1) << 1 |
             (uint)(bVar38 == 0);
        puVar2 = auStack_80;
        if (((byte)ac & 1 | 1 < bVar38) != 1) {
          auStack_80._12_52_ = auVar7._12_52_;
          auStack_80._0_8_ = auVar7._0_8_;
          auStack_80._8_4_ = 0x215b0;
          FUN_00022610(0);
          puVar2 = auStack_c0;
          goto LAB_00021a78;
        }
LAB_000216d0:
        fp = puVar2;
        FUN_00022610(0);
        return;
      }
      ac = uVar40 & 0xfffffff8 | (uint)(0xE_DOWNATTACK < g_player1.action_state) << 2 |
           (uint)(g_player1.action_state == 0xE_DOWNATTACK) << 1 |
           (uint)(g_player1.action_state < 0xE_DOWNATTACK);
      if (((byte)ac & 1 | 0xE_DOWNATTACK < g_player1.action_state) != 1) {
        auVar8._8_4_ = 0x215e4;
        auVar8._0_8_ = uVar1;
        auVar8._12_52_ = auVar5._12_52_;
        *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar8;
        fp = auStackX_0;
        bVar38 = Battle_ResolveHitForPlayer_candidate(0);
        ac = ac & 0xfffffff8 | (uint)(1 < bVar38) << 2 | (uint)(bVar38 == 1) << 1 |
             (uint)(bVar38 == 0);
        if (((byte)ac & 1 | 1 < bVar38) == 1) {
          fp = (undefined1 *)uVar41;
          return;
        }
        FUN_00022610(0);
        return;
      }
      auVar10._8_4_ = 0x21604;
      auVar10._0_8_ = uVar1;
      auVar10._12_52_ = auVar5._12_52_;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar10;
      auVar9._8_56_ = auVar10._8_56_;
      auVar9._4_4_ = auStack_40;
      auVar9._0_4_ = fp;
      uVar40 = FUN_00022b70(0);
      uVar41 = ac;
      uVar42 = uVar40 & 0xff;
      ac = ac & 0xfffffff8 | (uint)(uVar42 < 0xfd) << 2 | (uint)(uVar42 == 0xfd) << 1 |
           (uint)(0xfd < uVar42);
      if (((byte)ac & 1) == 1) {
        uVar40 = uVar40 & 0xff;
        uVar41 = uVar41 & 0xfffffff8 | (uint)(uVar40 < 0xfe) << 2 | (uint)(uVar40 == 0xfe) << 1;
        ac = uVar41 | 0xfe < uVar40;
        if (((byte)(uVar41 >> 1) & 1) != 1) {
          auStackX_0._12_52_ = auVar9._12_52_;
          auStackX_0._0_8_ = auVar9._0_8_;
          auStackX_0._8_4_ = 0x21634;
          fp = auStack_40;
          bVar38 = Battle_ResolveHitForPlayer_candidate(0);
          ac = ac & 0xfffffff8 | (uint)(1 < bVar38) << 2 | (uint)(bVar38 == 1) << 1 |
               (uint)(bVar38 == 0);
          if (((byte)ac & 1 | 1 < bVar38) == 1) {
            fp = auStackX_0;
            return;
          }
          FUN_00022610(0);
          return;
        }
LAB_0002168c:
        fp = auStackX_0;
        g_player1.animation_flag = g14;
        Player_SetActCode(0x98,0);
        return;
      }
    }
    else {
      ac = ac & 0xfffffff8 | (uint)(0x5_HOLD < g_player1.action_state) << 2 |
           (uint)(g_player1.action_state == 0x5_HOLD) << 1 |
           (uint)(g_player1.action_state < 0x5_HOLD);
      if ((((byte)ac & 1 | 0x5_HOLD < g_player1.action_state) == 1) ||
         (ac = uVar40 & 0xfffffff8 | (uint)(1 < g_player1.attack_state) << 2 |
               (uint)(g_player1.attack_state == '\x01') << 1 |
               (uint)(g_player1.attack_state == '\0'),
         ((byte)ac & 1 | 1 < g_player1.attack_state) == 1)) {
        auVar13._8_4_ = 0x216c4;
        auVar13._0_8_ = uVar1;
        auVar13._12_52_ = auVar5._12_52_;
        *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar13;
        bVar38 = Battle_ResolveHitForPlayer_candidate(0);
        ac = ac & 0xfffffff8 | (uint)(1 < bVar38) << 2 | (uint)(bVar38 == 1) << 1 |
             (uint)(bVar38 == 0);
        puVar2 = (undefined1 *)register0x00000004;
        if (((byte)ac & 1 | 1 < bVar38) == 1) {
          return;
        }
        goto LAB_000216d0;
      }
      auVar12._8_4_ = 0x21664;
      auVar12._0_8_ = uVar1;
      auVar12._12_52_ = auVar5._12_52_;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar12;
      auVar11._8_56_ = auVar12._8_56_;
      auVar11._4_4_ = auStack_40;
      auVar11._0_4_ = fp;
      uVar40 = FUN_00022b70(0);
      uVar41 = ac;
      uVar42 = uVar40 & 0xff;
      ac = ac & 0xfffffff8 | (uint)(uVar42 < 0xfd) << 2 | (uint)(uVar42 == 0xfd) << 1 |
           (uint)(0xfd < uVar42);
      if (((byte)ac & 1) == 1) {
        uVar40 = uVar40 & 0xff;
        ac = uVar41 & 0xfffffff8 | (uint)(uVar40 < 0xfe) << 2 | (uint)(uVar40 == 0xfe) << 1 |
             (uint)(0xfe < uVar40);
        if (((byte)ac & 1 | uVar40 < 0xfe) == 1) {
          auStackX_0._12_52_ = auVar11._12_52_;
          auStackX_0._0_8_ = auVar11._0_8_;
          auStackX_0._8_4_ = 0x216a4;
          fp = auStack_40;
          bVar38 = Battle_ResolveHitForPlayer_candidate(0);
          ac = ac & 0xfffffff8 | (uint)(1 < bVar38) << 2 | (uint)(bVar38 == 1) << 1 |
               (uint)(bVar38 == 0);
          if (((byte)ac & 1 | 1 < bVar38) == 1) {
            fp = auStackX_0;
            return;
          }
          FUN_00022610(0);
          return;
        }
        goto LAB_0002168c;
      }
    }
  }
  else {
    ac = ac & 0xfffffff8 | (uint)(1 < g_player1.hit_attack) << 2 |
         (uint)(g_player1.hit_attack == '\x01') << 1 | (uint)(g_player1.hit_attack == '\0');
    if (((byte)ac & 1 | 1 < g_player1.hit_attack) == 1) {
LAB_00021bb4:
      fp = (undefined1 *)auVar21._0_4_;
      return;
    }
    if ((byte)(g_player1.action_state - 0x2_JUMPATTACK) < 2) {
      ac = uVar40 & 0xfffffff8 | (uint)(0x5_HOLD < g_player2.action_state) << 2 |
           (uint)(g_player2.action_state == 0x5_HOLD) << 1 |
           (uint)(g_player2.action_state < 0x5_HOLD);
      if ((((byte)ac & 1 | 0x5_HOLD < g_player2.action_state) == 1) ||
         (ac = uVar40 & 0xfffffff8 | (uint)(1 < g_player2.attack_state) << 2 |
               (uint)(g_player2.attack_state == '\x01') << 1 |
               (uint)(g_player2.attack_state == '\0'),
         ((byte)ac & 1 | 1 < g_player2.attack_state) == 1)) {
        auVar31._8_4_ = 0x21a6c;
        auVar31._0_8_ = uVar1;
        auVar31._12_52_ = auVar5._12_52_;
        *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar31;
        bVar38 = Battle_ResolveHitForPlayer_candidate(1);
        ac = ac & 0xfffffff8 | (uint)(1 < bVar38) << 2 | (uint)(bVar38 == 1) << 1 |
             (uint)(bVar38 == 0);
        puVar2 = (undefined1 *)register0x00000004;
        if (((byte)ac & 1 | 1 < bVar38) == 1) {
          return;
        }
LAB_00021a78:
        fp = puVar2;
        FUN_00022610(1);
        return;
      }
      auVar30._8_4_ = 0x21a08;
      auVar30._0_8_ = uVar1;
      auVar30._12_52_ = auVar5._12_52_;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar30;
      auVar29._8_56_ = auVar30._8_56_;
      auVar29._4_4_ = auStack_40;
      auVar29._0_4_ = fp;
      uVar40 = FUN_00022b70(1);
      uVar41 = ac;
      uVar42 = uVar40 & 0xff;
      ac = ac & 0xfffffff8 | (uint)(uVar42 < 0xfd) << 2 | (uint)(uVar42 == 0xfd) << 1 |
           (uint)(0xfd < uVar42);
      if (((byte)ac & 1) == 1) {
        uVar40 = uVar40 & 0xff;
        ac = uVar41 & 0xfffffff8 | (uint)(uVar40 < 0xfe) << 2 | (uint)(uVar40 == 0xfe) << 1 |
             (uint)(0xfe < uVar40);
        if (((byte)ac & 1 | uVar40 < 0xfe) == 1) {
          auStackX_0._12_52_ = auVar29._12_52_;
          auStackX_0._0_8_ = auVar29._0_8_;
          auStackX_0._8_4_ = 0x21a4c;
          fp = auStack_40;
          bVar38 = Battle_ResolveHitForPlayer_candidate(1);
          ac = ac & 0xfffffff8 | (uint)(1 < bVar38) << 2 | (uint)(bVar38 == 1) << 1 |
               (uint)(bVar38 == 0);
          if (((byte)ac & 1 | 1 < bVar38) == 1) {
            fp = auStackX_0;
            return;
          }
          FUN_00022610(1);
          return;
        }
        goto LAB_00021a34;
      }
      uVar41 = 1;
      goto LAB_00021b84;
    }
    if (g_player1.action_state == 0xE_DOWNATTACK) {
      uVar41 = uVar40 & 0xfffffff8 | (uint)(0xD_SPECIALMOVE < g_player2.action_state) << 2 |
               (uint)(g_player2.action_state == 0xD_SPECIALMOVE) << 1;
      ac = uVar41 | g_player2.action_state < 0xD_SPECIALMOVE;
      if (((((byte)(uVar41 >> 1) & 1) != 1) &&
          (uVar41 = uVar40 & 0xfffffff8 | (uint)(0x9_HITSTUN < g_player2.action_state) << 2 |
                    (uint)(g_player2.action_state == 0x9_HITSTUN) << 1,
          ac = uVar41 | g_player2.action_state < 0x9_HITSTUN, ((byte)(uVar41 >> 1) & 1) != 1)) &&
         (uVar41 = uVar40 & 0xfffffff8 | (uint)(0xC_GROUNDED < g_player2.action_state) << 2 |
                   (uint)(g_player2.action_state == 0xC_GROUNDED) << 1,
         ac = uVar41 | g_player2.action_state < 0xC_GROUNDED, ((byte)(uVar41 >> 1) & 1) != 1)) {
        fp = (undefined1 *)unaff_pfp;
        return;
      }
      Battle_SelectAndApplyHitReaction(0);
      return;
    }
    if ((g_player2.action_state == 0x5_HOLD) && (g_player1.attack_state != '\x02')) {
      bVar38 = g_player1.action_code - CMD_GRASP_HI;
      uVar42 = uVar40 & 0xfffffff8 | (uint)(4 < bVar38) << 2 | (uint)(bVar38 == 4) << 1;
      ac = uVar42 | bVar38 < 4;
      if (((byte)ac & 1 | (byte)(uVar42 >> 1) & 1) != 1) {
        bVar38 = g_player2.action_code - CMD_GRASP_HI;
        uVar42 = uVar40 & 0xfffffff8 | (uint)(4 < bVar38) << 2 | (uint)(bVar38 == 4) << 1;
        ac = uVar42 | bVar38 < 4;
        if (((byte)ac & 1 | (byte)(uVar42 >> 1) & 1) != 1) {
          ac = uVar40 & 0xfffffff8 | (uint)(g_player1.pose_state < g_player2.pose_state) << 2 |
               (uint)(g_player1.pose_state == g_player2.pose_state) << 1 |
               (uint)(g_player2.pose_state < g_player1.pose_state);
          if (((byte)ac & 1 | g_player1.pose_state < g_player2.pose_state) == 1) {
            fp = (undefined1 *)unaff_pfp;
            return;
          }
          g_player1.animation_flag = g14;
          auVar33._8_4_ = 0x21af8;
          auVar33._0_8_ = uVar1;
          auVar33._12_52_ = auVar5._12_52_;
          *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar33;
          auVar32._8_56_ = auVar33._8_56_;
          auVar32._4_4_ = auStackX_0;
          auVar32._0_4_ = fp;
          uVar39 = FUN_00022f70(10,0);
          auStackX_0._12_52_ = auVar32._12_52_;
          auStackX_0._0_8_ = auVar32._0_8_;
          auStackX_0._8_4_ = 0x21b08;
          auVar34._8_56_ = auStackX_0._8_56_;
          auVar34._4_4_ = auStack_40;
          auVar34._0_4_ = auStackX_0;
          FUN_00025020(uVar39,0);
          g_player2.animation_flag = g14;
          auStack_40._12_52_ = auVar34._12_52_;
          auStack_40._0_8_ = auVar34._0_8_;
          auStack_40._8_4_ = 0x21b18;
          fp = auStack_80;
          uVar39 = FUN_00022f70(10,1);
          FUN_00025020(uVar39,1);
          return;
        }
        auVar35._8_4_ = 0x21b34;
        auVar35._0_8_ = uVar1;
        auVar35._12_52_ = auVar5._12_52_;
        *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar35;
        fp = auStackX_0;
        auVar21._8_56_ = auVar35._8_56_;
        auVar21._4_4_ = 0;
        auVar21._0_4_ = uVar41;
        uVar41 = FUN_00022b70(0);
        uVar41 = uVar41 & 0xff;
        ac = ac & 0xfffffff8 | (uint)(uVar41 < 0xfd) << 2 | (uint)(uVar41 == 0xfd) << 1 |
             (uint)(0xfd < uVar41);
        if (((byte)ac & 1) != 1) {
          FUN_000229f0(uVar41,0,0);
          return;
        }
      }
      fp = (undefined1 *)auVar21._0_4_;
      return;
    }
    bVar38 = g_player2.action_state - 0x2_JUMPATTACK;
    ac = uVar40 & 0xfffffff8 | (uint)(1 < bVar38) << 2 | (uint)(bVar38 == 1) << 1 |
         (uint)(g_player2.action_state == 0x2_JUMPATTACK);
    if (1 < bVar38) {
      auVar37._8_4_ = 0x21b98;
      auVar37._0_8_ = uVar1;
      auVar37._12_52_ = auVar5._12_52_;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar37;
      fp = auStackX_0;
      auVar21._8_56_ = auVar37._8_56_;
      auVar21._4_4_ = 0;
      auVar21._0_4_ = uVar41;
      uVar41 = FUN_00022b70(0);
      uVar41 = uVar41 & 0xff;
      ac = ac & 0xfffffff8 | (uint)(uVar41 < 0xfd) << 2 | (uint)(uVar41 == 0xfd) << 1 |
           (uint)(0xfd < uVar41);
      if (((byte)ac & 1) != 1) {
        FUN_000229f0(uVar41,0,0);
        return;
      }
      goto LAB_00021bb4;
    }
    auVar36._8_4_ = 0x21b70;
    auVar36._0_8_ = uVar1;
    auVar36._12_52_ = auVar5._12_52_;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar36;
    uVar42 = FUN_00022b70(0);
    uVar42 = uVar42 & 0xff;
    ac = ac & 0xfffffff8 | (uint)(uVar42 < 0xfd) << 2 | (uint)(uVar42 == 0xfd) << 1 |
         (uint)(0xfd < uVar42);
    if (((byte)ac & 1) == 1) {
      return;
    }
  }
  uVar41 = 0;
LAB_00021b84:
  fp = auStackX_0;
  FUN_000229f0(uVar42,uVar41,1);
  return;
}

