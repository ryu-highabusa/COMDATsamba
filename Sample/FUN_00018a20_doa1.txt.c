
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00018a20(void)

{
  uint uVar1;
  undefined4 unaff_pfp;
  
  uVar1 = ac;
  if (((CHAR_NUM_P1_0054fc01_ == 0xb) && (DAT_005555dd == '\0')) &&
     ((MAN_COM_P1_0054fc00_ == 0 || (_MAN_COM_P2_0054fc58_ != 0xb00)))) {
    XPOS_P1_0054fc04 = -0.74;
  }
  else {
    XPOS_P1_0054fc04 = -1.0;
  }
  YPOS_P1_0054fc08 = SUB104((float10)'\x01',0);
  ZPOS_P1_0054fc0c = g14;
  ANIME_SPD_P1_0054fc10 = SUB104((float10)'\x01',0);
  _DIRECT_P1_0054fc14 = g14;
  _ATK_DIR_P1_0054fc18 = g14;
  _BODY_DIR_P1_0054fc1c = g14;
  HIT_POINT_P1_0054fc20 = (ushort)HIT_POINT_CurrentSetting_005555e6;
  DAMAGE_P2_0054fc7a = g14._0_2_;
  DAMAGE_P1_0054fc22 = g14._0_2_;
  LAST_DMG_P1_0054fc24 = g14._0_2_;
  DMG_DISP_P1_0054fc26 = g14._0_2_;
  ACT_CODE_P1_0054fc2a = g14._0_1_;
  ACT_FLAG_P1_0054fc2b = g14._0_1_;
  ACT_REQ_P1_0054fc2c = g14._0_1_;
  ACT_STA_P1_0054fc2d = g14._0_1_;
  POSE_STA_P1_0054fc2e = g14._0_1_;
  DOWN_STA_P1_0054fc2f = g14._0_1_;
  UpsideDownHead_P1_0054fc30 = g14._0_1_;
  DOWN_DIR_P1_0054fc31 = g14._0_1_;
  ATK_POINT_P1_0054fc32 = g14._0_1_;
  ATK_STA_P1_0054fc33 = g14._0_1_;
  ANIM_FLIP_P1_0054fc34 = g14._0_1_;
  ANIM_REQ_P1_0054fc36 = g14._0_1_;
  HIT_ATK_P1_0054fc37 = g14._0_1_;
  HIT_BODY_P1_0054fc38 = g14._0_1_;
  HIT_STAGE_P1_0054fc39 = g14._0_1_;
  GUARD_STA_P1_0054fc3a = g14._0_1_;
  JUMP_STA_P1_0054fc3b = g14._0_1_;
  JUMP_HIGH_P1_0054fc3c = g14._0_1_;
  JUMP_DIR_P1_0054fc3d = g14._0_1_;
  BEAT_STA_P1_0054fc3e = g14._0_1_;
  SKY_STA_P1_0054fc3f = g14._0_1_;
  DOWN_HIT_P1_0054fc40 = g14._0_1_;
  ACT_CANCEL_P1_0054fc41 = g14._0_1_;
  GRASP_STA_P1_0054fc42 = g14._0_1_;
  DWNA_STA_P1_0054fc43 = g14._0_1_;
  MOUNT_STA_P1_0054fc44 = g14._0_1_;
  RING_OUT_P1_0054fc45 = g14._0_1_;
  ATK_HEIGHT_P1_0054fc46 = g14._0_1_;
  RING_HIT_P1_0054fc47 = g14._0_1_;
  PLYR_DISP_P1_0054fc48_ = 1;
  DANGERFLG_P1_0054fc49 = g14._0_1_;
  DIR_AJST_P1_0054fc4a = g14._0_1_;
  DAMAGE_NUM_P1_0054fc4b = g14._0_1_;
  SIDE_SPIN_P1_0054fc4c = g14._0_1_;
  GRPLSLIP_P1_0054fc4e = g14._0_1_;
  BEAT_HITST_P1_0054fc4f = g14._0_1_;
  UKEMI_FLG_P1_0054fc50 = g14._0_1_;
  DANGERSET_P1_0054fc51 = g14._0_1_;
  COMBO_FLG_P1_0054fc52 = g14._0_1_;
  COMBO_CNT_P1_0054fc53 = g14._0_1_;
  CMB_START_P1_0054fc54 = g14._0_1_;
  CANCELUSE_P1_0054fc55 = g14._0_1_;
  ac = ac & 0xfffffff8 | (uint)(0xb < CHAR_NUM_P2_0054fc59_) << 2 |
       (uint)(CHAR_NUM_P2_0054fc59_ == 0xb) << 1 | (uint)(CHAR_NUM_P2_0054fc59_ < 0xb);
  if ((((byte)ac & 1 | 0xb < CHAR_NUM_P2_0054fc59_) == 1) ||
     (ac = uVar1 & 0xfffffff8 | (uint)(DAT_005555dd != '\0') << 2 |
           (uint)(DAT_005555dd == '\0') << 1, DAT_005555dd != '\0')) {
LAB_00018c64:
    XPOS_P2_0054fc5c = SUB104((float10)'\x01',0);
  }
  else {
    ac = uVar1 & 0xfffffff8 | (uint)(MAN_COM_P2_0054fc58_ != 0) << 2 |
         (uint)(MAN_COM_P2_0054fc58_ == 0) << 1;
    if (((byte)(ac >> 1) & 1) != 1) {
      uVar1 = uVar1 & 0xfffffff8 | (uint)(_MAN_COM_P1_0054fc00_ < 0xb00) << 2 |
              (uint)(_MAN_COM_P1_0054fc00_ == 0xb00) << 1;
      ac = uVar1 | 0xb00 < _MAN_COM_P1_0054fc00_;
      if (((byte)(uVar1 >> 1) & 1) == 1) goto LAB_00018c64;
    }
    XPOS_P2_0054fc5c = 0.74;
  }
  YPOS_P2_0054fc60 = SUB104((float10)'\x01',0);
  ZPOS_P2_0054fc64 = g14;
  ANIME_SPD_P2_0054fc68 = SUB104((float10)'\x01',0);
  _DIRECT_P2_0054fc6c = 0x8000;
  _ATK_DIR_P2_0054fc70 = 0x8000;
  _BODY_DIR_P2_0054fc74 = 0x8000;
  HIT_POINT_P2_0054fc78 = (ushort)HIT_POINT_CurrentSetting_005555e6;
  LAST_DMG_P2_0054fc7c = DAMAGE_P2_0054fc7a;
  DMG_DISP_P2_0054fc7e = DAMAGE_P2_0054fc7a;
  ACT_CODE_P2_0054fc82 = g14._0_1_;
  ACT_FLAG_P2_0054fc83 = g14._0_1_;
  ACT_REQ_P2_0054fc84 = g14._0_1_;
  ACT_STA_P2_0054fc85 = g14._0_1_;
  POSE_STA_P2_0054fc86 = g14._0_1_;
  DOWN_STA_P2_0054fc87 = g14._0_1_;
  UpsideDownHead_P2_0054fc88 = g14._0_1_;
  DOWN_DIR_P2_0054fc89 = g14._0_1_;
  ATK_POINT_P2_0054fc8a = g14._0_1_;
  ATK_STA_P2_0054fc8b = g14._0_1_;
  ANIM_FLIP_P2_0054fc8c = g14._0_1_;
  ANIM_REQ_P2_0054fc8e = g14._0_1_;
  HIT_ATK_P2_0054fc8f = g14._0_1_;
  HIT_BODY_P2_0054fc90 = g14._0_1_;
  HIT_STAGE_P2_0054fc91 = g14._0_1_;
  GUARD_STA_P2_0054fc92 = g14._0_1_;
  JUMP_STA_P2_0054fc93 = g14._0_1_;
  JUMP_HIGH_P2_0054fc94 = g14._0_1_;
  JUMP_DIR_P2_0054fc95 = g14._0_1_;
  BEAT_STA_P2_0054fc96 = g14._0_1_;
  SKY_STA_P2_0054fc97 = g14._0_1_;
  DOWN_HIT_P2_0054fc98 = g14._0_1_;
  ACT_CANCEL_P2_0054fc99 = g14._0_1_;
  GRASP_STA_P2_0054fc9a = g14._0_1_;
  DWNA_STA_P2_0054fc9b = g14._0_1_;
  MOUNT_STA_P2_0054fc9c = g14._0_1_;
  RING_OUT_P2_0054fc9d = g14._0_1_;
  ATK_HEIGHT_P2_0054fc9e = g14._0_1_;
  RING_HIT_P2_0054fc9f = g14._0_1_;
  PLYR_DISP_P2_0054fca0_ = 1;
  DANGERFLG_P2_0054fca1 = g14._0_1_;
  DIR_AJST_P2_0054fca2 = g14._0_1_;
  DAMAGE_NUM_P2_0054fca3 = g14._0_1_;
  SIDE_SPIN_P2_0054fca4 = g14._0_1_;
  GRPLSLIP_P2_0054fca6 = g14._0_1_;
  BEAT_HITST_P2_0054fca7 = g14._0_1_;
  UKEMI_FLG_P2_0054fca8 = g14._0_1_;
  DANGERSET_P2_0054fca9 = g14._0_1_;
  COMBO_FLG_P2_0054fcaa = g14._0_1_;
  COMBO_CNT_P2_0054fcab = g14._0_1_;
  CMB_START_P2_0054fcac = g14._0_1_;
  CANCELUSE_P2_0054fcad = g14._0_1_;
  fp = unaff_pfp;
  return;
}

