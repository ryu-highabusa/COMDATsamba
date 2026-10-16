
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0004dcb0(void)

{
  float10 fVar1;
  float10 fVar2;
  undefined4 unaff_pfp;
  
  if (GameMode == MODE_CHARSEL) {
    if (GameOverFlag____0054fcb4 != 4) {
      DWORD_00589df0 = SUB104((float10)DAT_005555d0,0);
      DWORD_ARRAY_00589df8[0] = 0xcccccccd;
      goto LAB_0004dd8c;
    }
  }
  DWORD_ARRAY_00589df8[0] = (dword)(&FLOAT_000c6d98)[(uint)g_current_stage * 3];
  DWORD_00589df0 =
       SUB104((float10)DAT_005555d0 + (float10)(int)(&FLOAT_000c6d90)[(uint)g_current_stage * 3],0);
LAB_0004dd8c:
  fVar2 = (float10)(int)DWORD_00589df4;
  fVar1 = (float10)'\0';
  ac = ac & 0xfffffff8;
  if (!NAN(fVar1) && !NAN(fVar2)) {
    ac = ac | (uint)(fVar1 < fVar2) << 2;
    ac = ac | (uint)(fVar1 == fVar2) << 1;
    ac = ac | fVar2 < fVar1;
  }
  if (((byte)ac & 1 | (byte)(ac >> 2) & 1) != 1) {
    DWORD_00589df4 = 0x3a83126f;
  }
  fp = unaff_pfp;
  return;
}

