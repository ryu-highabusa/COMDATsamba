
/* Reads g_current_stage to select BGM */

void StageMusic_RequestForCurrentStage(void)

{
  uint uVar1;
  undefined4 unaff_pfp;
  
  uVar1 = ac;
  ac = ac & 0xfffffff8 | (uint)(0 < g_debugModeOverride) << 2 |
       (uint)(g_debugModeOverride == 0) << 1 | (uint)(g_debugModeOverride < 0);
  if (((byte)ac & 1 | 0 < g_debugModeOverride) == 1) {
    Sound_Request(0xa00001);
    return;
  }
  uVar1 = uVar1 & 0xfffffff8 | (uint)(4 < GameOverFlag____0054fcb4) << 2 |
          (uint)(GameOverFlag____0054fcb4 == 4) << 1;
  ac = uVar1 | GameOverFlag____0054fcb4 < 4;
  if (((byte)(uVar1 >> 1) & 1) != 1) {
    Bgm_Request_candidate((&g_bgm_command_by_stage_id)[g_current_stage]);
    return;
  }
  fp = unaff_pfp;
  return;
}

