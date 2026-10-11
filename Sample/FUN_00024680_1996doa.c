
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* 1. Read the selected player’s facing_direction.
   2. Normalize P2 by subtracting 0x8000—180 degrees.
   3. Compare that direction with DAT_005555a8
   4. Either snap the player onto the shared P1/P2 axis or gradually rotate them.
   5. During gradual adjustment, update both:
       player->facing_direction;
       player->body_direction;
   6. Return 1 while gradual adjustment was applied, or 0 when the direction was snapped/completed.
    */

uint32_t Player_AlignFacingToInterplayerAxis(int player_index,int turn_rate_variant)

{
  undefined4 unaff_pfp;
  uint uVar1;
  uint uVar2;
  int normalized_facing_angle;
  uint relative_angle_or_correction;
  int turn_rate_bias;
  
  turn_rate_bias = 4;
  if (turn_rate_variant == 1) {
    turn_rate_bias = 0xc;
  }
  normalized_facing_angle = g_player1.facing_direction;
  if (player_index != 0) {
    normalized_facing_angle = (&g_player1)[player_index].facing_direction + -0x8000;
  }
  relative_angle_or_correction = normalized_facing_angle - g_p1_to_p2_heading_bam16;
  if ((relative_angle_or_correction + 0x5b0 & 0xffff) < 0xb61) {
    relative_angle_or_correction =
         ac & 0xfffffff8 | (uint)(0 < player_index) << 2 | (uint)(player_index == 0) << 1;
    ac = relative_angle_or_correction | player_index < 0;
    if (((byte)(relative_angle_or_correction >> 1) & 1) != 1) {
      g13 = 0xffff;
      relative_angle_or_correction = g_p1_to_p2_heading_bam16 + 0x8000U & 0xffff;
      goto LAB_00024754;
    }
  }
  else {
    if (0xb60 < (relative_angle_or_correction + 0x85b0 & 0xffff)) {
      if ((((&g_player1)[player_index].action_state == 0xD_SPECIALMOVE) ||
          ((&g_player1)[player_index].action_state == 0x3_ATTACK)) &&
         (((byte)((&g_player1)[player_index].action_code - CMD_NORM_UP_H) < 0x18 ||
          ((byte)((&g_player1)[player_index].action_code + 0x8d) < 0x18)))) {
        switch((&g_player1)[player_index].action_code) {
        case CMD_NORM_UP_F:
        case CMD_NORM_DOWN_H:
        case CMD_SIDE_UP_F:
        case CMD_SIDE_DOWN_H:
        case CMD_REAR_UP_H:
        case CMD_REAR_UP_F:
        case CMD_REAR_DOWN_H:
        case CMD_REAR_DOWN_F:
        case CMD_SIT_UP_F:
        case CMD_SIT_DOWN_H:
        case CMD_SIT_SIDE_UP_F:
        case CMD_SIT_SIDE_DOWN_H:
        case CMD_SIT_REAR_UP_H:
        case CMD_SIT_REAR_UP_F:
        case CMD_SIT_REAR_DOWN_H:
        case CMD_SIT_REAR_DOWN_F:
        case CMD_NML_UP_F_K:
        case CMD_NML_UP_F_LK:
        case CMD_NML_DOWN_H_K:
        case CMD_NML_DOWN_H_LK:
        case CMD_SIDE_UP_F_K:
        case CMD_SIDE_UP_F_LK:
        case CMD_SIDE_DOWN_H_K:
        case CMD_SIDE_DOWN_H_LK:
        case CMD_REAR_UP_F_K:
        case CMD_REAR_UP_F_LK:
        case CMD_REAR_UP_H_K:
        case CMD_REAR_DOWN_F_K:
        case CMD_REAR_DOWN_H_K:
        case CMD_REAR_DOWN_H_LK:
          if ((relative_angle_or_correction + 0x9555 & 0xffff) < 0x2aab) {
            uVar1 = relative_angle_or_correction & 0xffff;
            uVar2 = ac & 0xfffffff8 | (uint)(uVar1 < 0x7fff) << 2 | (uint)(uVar1 == 0x7fff) << 1;
            ac = uVar2 | 0x7fff < uVar1;
            if (((byte)(uVar2 >> 1) & 1 | uVar1 < 0x7fff) != 1) {
              relative_angle_or_correction = 0x168 - turn_rate_bias;
              goto LAB_00024b48;
            }
          }
          else {
            uVar2 = relative_angle_or_correction & 0xffff;
            ac = ac & 0xfffffff8 | (uint)(uVar2 < 0x7fff) << 2 | (uint)(uVar2 == 0x7fff) << 1 |
                 (uint)(0x7fff < uVar2);
            if (((byte)ac & 1) != 1) {
              relative_angle_or_correction = 0x168 - turn_rate_bias;
              goto LAB_00024b48;
            }
          }
          break;
        default:
          if (&DAT_0000d555 <
              (undefined *)((int)&DWORD_0000eaaa + relative_angle_or_correction & 0xffff)) {
            uVar2 = relative_angle_or_correction & 0xffff;
            ac = ac & 0xfffffff8 | (uint)(uVar2 < 0x7fff) << 2 | (uint)(uVar2 == 0x7fff) << 1 |
                 (uint)(0x7fff < uVar2);
            if (((byte)ac & 1) != 1) {
              relative_angle_or_correction = 0x168 - turn_rate_bias;
              goto LAB_00024b48;
            }
          }
          else {
            uVar1 = relative_angle_or_correction & 0xffff;
            uVar2 = ac & 0xfffffff8 | (uint)(uVar1 < 0x7fff) << 2 | (uint)(uVar1 == 0x7fff) << 1;
            ac = uVar2 | 0x7fff < uVar1;
            if (((byte)(uVar2 >> 1) & 1 | uVar1 < 0x7fff) != 1) {
              relative_angle_or_correction = 0x168 - turn_rate_bias;
              goto LAB_00024b48;
            }
          }
        }
      }
      else if ((((&g_player1)[player_index].character_id == CHAR_TINA) &&
               ((&g_player1)[player_index].action_state == 0xD_SPECIALMOVE)) &&
              ((&g_player1)[player_index].action_code == (CMD_SIDE_DOWN_F_LK|0x6a))) {
        if (&DAT_0000d555 <
            (undefined *)((int)&DWORD_0000eaaa + relative_angle_or_correction & 0xffff)) {
          uVar2 = relative_angle_or_correction & 0xffff;
          ac = ac & 0xfffffff8 | (uint)(uVar2 < 0x7fff) << 2 | (uint)(uVar2 == 0x7fff) << 1 |
               (uint)(0x7fff < uVar2);
          if (((byte)ac & 1) != 1) {
            relative_angle_or_correction = 0x168 - turn_rate_bias;
            goto LAB_00024b48;
          }
        }
        else {
          uVar1 = relative_angle_or_correction & 0xffff;
          uVar2 = ac & 0xfffffff8 | (uint)(uVar1 < 0x7fff) << 2 | (uint)(uVar1 == 0x7fff) << 1;
          ac = uVar2 | 0x7fff < uVar1;
          if (((byte)(uVar2 >> 1) & 1 | uVar1 < 0x7fff) != 1) {
            relative_angle_or_correction = 0x168 - turn_rate_bias;
            goto LAB_00024b48;
          }
        }
      }
      else if (((uint)(&DAT_0000aaaa + relative_angle_or_correction) & 0xffff) < 0x5556) {
        uVar1 = relative_angle_or_correction & 0xffff;
        uVar2 = ac & 0xfffffff8 | (uint)(uVar1 < 0x7fff) << 2 | (uint)(uVar1 == 0x7fff) << 1;
        ac = uVar2 | 0x7fff < uVar1;
        if (((byte)(uVar2 >> 1) & 1 | uVar1 < 0x7fff) != 1) {
          relative_angle_or_correction = 0x168 - turn_rate_bias;
          goto LAB_00024b48;
        }
      }
      else {
        uVar2 = relative_angle_or_correction & 0xffff;
        ac = ac & 0xfffffff8 | (uint)(uVar2 < 0x7fff) << 2 | (uint)(uVar2 == 0x7fff) << 1 |
             (uint)(0x7fff < uVar2);
        if (((byte)ac & 1) != 1) {
          relative_angle_or_correction = 0x168 - turn_rate_bias;
          goto LAB_00024b48;
        }
      }
      relative_angle_or_correction = relative_angle_or_correction & 0xffff;
LAB_00024b48:
      (&g_player1)[player_index].facing_direction =
           (int)(float10)(int)relative_angle_or_correction +
           (&g_player1)[player_index].facing_direction & 0xffff;
      (&g_player1)[player_index].body_direction =
           (int)(float10)(int)relative_angle_or_correction +
           (&g_player1)[player_index].body_direction & 0xffff;
      g13 = 0xffff;
      fp = unaff_pfp;
      return 1;
    }
    ac = ac & 0xfffffff8 | (uint)(0 < player_index) << 2 | (uint)(player_index == 0) << 1 |
         (uint)(player_index < 0);
    if (((byte)ac & 1 | 0 < player_index) != 1) {
      g13 = 0xffff;
      relative_angle_or_correction = g_p1_to_p2_heading_bam16 + 0x8000U & 0xffff;
      goto LAB_00024754;
    }
  }
  g13 = 0xb60;
  relative_angle_or_correction = g_p1_to_p2_heading_bam16 & 0xffff;
LAB_00024754:
  (&g_player1)[player_index].facing_direction = relative_angle_or_correction;
  fp = unaff_pfp;
  return 0;
}

