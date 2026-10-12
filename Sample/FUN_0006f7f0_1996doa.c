
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0006f7f0(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 unaff_pfp;
  undefined1 in_register_0000000c [52];
  undefined1 auVar3 [64];
  undefined1 auStackX_0 [1000000];
  
  uVar2 = ac;
  auVar3._4_4_ = auStackX_0;
  auVar3._0_4_ = unaff_pfp;
  if (g_stage_backdrop_ready == 0) {
    fp = (undefined1 *)unaff_pfp;
    ac = ac & 0xfffffff8 | (uint)(g_stage_backdrop_ready != 0) << 2 |
         (uint)(g_stage_backdrop_ready == 0) << 1;
    return;
  }
  uVar1 = ac & 0xfffffff8 | (uint)(1 < (byte)(g_current_stage - STAGE_DANGERZONE)) << 2 |
          (uint)((DOA1_STAGE_ID)(g_current_stage - STAGE_DANGERZONE) == 1) << 1;
  ac = uVar1 | g_current_stage == STAGE_DANGERZONE;
  if (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) != 1) {
    uVar1 = uVar2 & 0xfffffff8 | (uint)(1 < (byte)(g_current_stage - STAGE_NAMEENTRYFIELD)) << 2 |
            (uint)((DOA1_STAGE_ID)(g_current_stage - STAGE_NAMEENTRYFIELD) == 1) << 1;
    ac = uVar1 | g_current_stage == STAGE_NAMEENTRYFIELD;
    if (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) != 1) {
      uVar1 = uVar2 & 0xfffffff8 | (uint)(STAGE_GAMEOVERSCREEN < g_current_stage) << 2 |
              (uint)(g_current_stage == STAGE_GAMEOVERSCREEN) << 1;
      ac = uVar1 | g_current_stage < STAGE_GAMEOVERSCREEN;
      if (((byte)(uVar1 >> 1) & 1) != 1) {
        ac = uVar2 & 0xfffffff8 | (uint)(g_current_stage != STAGE_SCREENSPLASH) << 2 |
             (uint)(g_current_stage == STAGE_SCREENSPLASH) << 1;
        if (((byte)(ac >> 1) & 1) != 1) {
          ac = uVar2 & 0xfffffff8 | (uint)('\0' < DAT_005af711) << 2 |
               (uint)(DAT_005af711 == '\0') << 1 | (uint)(DAT_005af711 < '\0');
          if (((byte)ac & 1 | '\0' < DAT_005af711) != 1) {
            fp = (undefined1 *)unaff_pfp;
            return;
          }
          auVar3._8_4_ = 0x6f844;
          auVar3._12_52_ = in_register_0000000c;
          *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar3;
          FUN_0006fcd0();
          FUN_00070140_nameentrymaybe__();
          g_stage_backdrop_ready = g14;
          fp = auStackX_0;
          return;
        }
      }
    }
  }
  fp = (undefined1 *)unaff_pfp;
  return;
}

