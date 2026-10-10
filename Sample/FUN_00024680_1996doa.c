
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_00024680(int param_1,int param_2)

{
  undefined4 unaff_pfp;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 4;
  if (param_2 == 1) {
    iVar5 = 0xc;
  }
  iVar3 = g_player1.facing_direction;
  if (param_1 != 0) {
    iVar3 = (&g_player1)[param_1].facing_direction + -0x8000;
  }
  uVar4 = iVar3 - DAT_005555a8;
  if ((uVar4 + 0x5b0 & 0xffff) < 0xb61) {
    uVar4 = ac & 0xfffffff8 | (uint)(0 < param_1) << 2 | (uint)(param_1 == 0) << 1;
    ac = uVar4 | param_1 < 0;
    if (((byte)(uVar4 >> 1) & 1) != 1) {
      g13 = 0xffff;
      uVar4 = DAT_005555a8 + 0x8000 & 0xffff;
      goto LAB_00024754;
    }
  }
  else {
    if (0xb60 < (uVar4 + 0x85b0 & 0xffff)) {
      if ((((&g_player1)[param_1].action_state == 0xD_SPECIALMOVE) ||
          ((&g_player1)[param_1].action_state == 0x3_ATTACK)) &&
         (((byte)((&g_player1)[param_1].action_code - CMD_NORM_UP_H) < 0x18 ||
          ((byte)((&g_player1)[param_1].action_code + 0x8d) < 0x18)))) {
        switch((&g_player1)[param_1].action_code) {
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
          if ((uVar4 + 0x9555 & 0xffff) < 0x2aab) {
            uVar1 = uVar4 & 0xffff;
            uVar2 = ac & 0xfffffff8 | (uint)(uVar1 < 0x7fff) << 2 | (uint)(uVar1 == 0x7fff) << 1;
            ac = uVar2 | 0x7fff < uVar1;
            if (((byte)(uVar2 >> 1) & 1 | uVar1 < 0x7fff) != 1) {
              uVar4 = 0x168 - iVar5;
              goto LAB_00024b48;
            }
          }
          else {
            uVar2 = uVar4 & 0xffff;
            ac = ac & 0xfffffff8 | (uint)(uVar2 < 0x7fff) << 2 | (uint)(uVar2 == 0x7fff) << 1 |
                 (uint)(0x7fff < uVar2);
            if (((byte)ac & 1) != 1) {
              uVar4 = 0x168 - iVar5;
              goto LAB_00024b48;
            }
          }
          break;
        default:
          if (&DAT_0000d555 < (undefined *)((int)&DWORD_0000eaaa + uVar4 & 0xffff)) {
            uVar2 = uVar4 & 0xffff;
            ac = ac & 0xfffffff8 | (uint)(uVar2 < 0x7fff) << 2 | (uint)(uVar2 == 0x7fff) << 1 |
                 (uint)(0x7fff < uVar2);
            if (((byte)ac & 1) != 1) {
              uVar4 = 0x168 - iVar5;
              goto LAB_00024b48;
            }
          }
          else {
            uVar1 = uVar4 & 0xffff;
            uVar2 = ac & 0xfffffff8 | (uint)(uVar1 < 0x7fff) << 2 | (uint)(uVar1 == 0x7fff) << 1;
            ac = uVar2 | 0x7fff < uVar1;
            if (((byte)(uVar2 >> 1) & 1 | uVar1 < 0x7fff) != 1) {
              uVar4 = 0x168 - iVar5;
              goto LAB_00024b48;
            }
          }
        }
      }
      else if ((((&g_player1)[param_1].character_id == CHAR_TINA) &&
               ((&g_player1)[param_1].action_state == 0xD_SPECIALMOVE)) &&
              ((&g_player1)[param_1].action_code == (CMD_FA_HIT_YAM|CMD_SIT_SIDE_UP_H))) {
        if (&DAT_0000d555 < (undefined *)((int)&DWORD_0000eaaa + uVar4 & 0xffff)) {
          uVar2 = uVar4 & 0xffff;
          ac = ac & 0xfffffff8 | (uint)(uVar2 < 0x7fff) << 2 | (uint)(uVar2 == 0x7fff) << 1 |
               (uint)(0x7fff < uVar2);
          if (((byte)ac & 1) != 1) {
            uVar4 = 0x168 - iVar5;
            goto LAB_00024b48;
          }
        }
        else {
          uVar1 = uVar4 & 0xffff;
          uVar2 = ac & 0xfffffff8 | (uint)(uVar1 < 0x7fff) << 2 | (uint)(uVar1 == 0x7fff) << 1;
          ac = uVar2 | 0x7fff < uVar1;
          if (((byte)(uVar2 >> 1) & 1 | uVar1 < 0x7fff) != 1) {
            uVar4 = 0x168 - iVar5;
            goto LAB_00024b48;
          }
        }
      }
      else if (((uint)(&DAT_0000aaaa + uVar4) & 0xffff) < 0x5556) {
        uVar1 = uVar4 & 0xffff;
        uVar2 = ac & 0xfffffff8 | (uint)(uVar1 < 0x7fff) << 2 | (uint)(uVar1 == 0x7fff) << 1;
        ac = uVar2 | 0x7fff < uVar1;
        if (((byte)(uVar2 >> 1) & 1 | uVar1 < 0x7fff) != 1) {
          uVar4 = 0x168 - iVar5;
          goto LAB_00024b48;
        }
      }
      else {
        uVar2 = uVar4 & 0xffff;
        ac = ac & 0xfffffff8 | (uint)(uVar2 < 0x7fff) << 2 | (uint)(uVar2 == 0x7fff) << 1 |
             (uint)(0x7fff < uVar2);
        if (((byte)ac & 1) != 1) {
          uVar4 = 0x168 - iVar5;
          goto LAB_00024b48;
        }
      }
      uVar4 = uVar4 & 0xffff;
LAB_00024b48:
      (&g_player1)[param_1].facing_direction =
           (int)(float10)(int)uVar4 + (&g_player1)[param_1].facing_direction & 0xffff;
      (&g_player1)[param_1].body_direction =
           (int)(float10)(int)uVar4 + (&g_player1)[param_1].body_direction & 0xffff;
      g13 = 0xffff;
      fp = unaff_pfp;
      return 1;
    }
    ac = ac & 0xfffffff8 | (uint)(0 < param_1) << 2 | (uint)(param_1 == 0) << 1 |
         (uint)(param_1 < 0);
    if (((byte)ac & 1 | 0 < param_1) != 1) {
      g13 = 0xffff;
      uVar4 = DAT_005555a8 + 0x8000 & 0xffff;
      goto LAB_00024754;
    }
  }
  g13 = 0xb60;
  uVar4 = DAT_005555a8 & 0xffff;
LAB_00024754:
  (&g_player1)[param_1].facing_direction = uVar4;
  fp = unaff_pfp;
  return 0;
}

