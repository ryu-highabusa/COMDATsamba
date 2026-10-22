
undefined1 FUN_82518bb8(int param_1,uint param_2)

{
  if (param_2 < 6) {
    switch(*(undefined1 *)(param_1 + 0xc)) {
    case 0:
      return (&costumes_zack_full)[param_2];
    case 1:
      return (&costumes_tina_full)[param_2];
    case 4:
      return (&costumes_hayabusa_full)[param_2];
    case 5:
      return (&costumes_kasumi_full)[param_2];
    case 7:
      return (&costumes_helena_full)[param_2];
    case 9:
      return (&costumes_bass_full)[param_2];
    case 10:
      return (&costumes_kokoro_full)[param_2];
    case 0xb:
      return (&costumes_hayate_full)[param_2];
    case 0xc:
      return (&costumes_leifang_full)[param_2];
    case 0xd:
      return (&costume_ayane_full)[param_2];
    case 0x13:
      return (&costumes_bradwong_full)[param_2];
    case 0x14:
      return (&costumes_christie_full)[param_2];
    case 0x15:
      return (&costumes_hitomi_full)[param_2];
    case 0x18:
      return (&costumes_bayman_full)[param_2];
    case 0x1d:
      return (&costumes_rig_full)[param_2];
    case 0x1f:
      return (&costumes_akira_full)[param_2];
    case 0x20:
      return (&costumes_sarah_full_candidate)[param_2];
    }
  }
  return 0;
}

