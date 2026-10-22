
/* Maps only twelve slots to character IDs; other slots return 7F */

undefined8 character_select_demo_limit(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x7f;
  if (param_1 == 0) {
    return 0x7f;
  }
  switch(*(undefined4 *)(param_1 + 4)) {
  case 4:
    return char_kasumi;
  case 5:
    return char_bayman;
  case 6:
    return char_kokoro;
  case 7:
    return char_zack;
  case 8:
    return char_leifang;
  case 9:
    return char_ayane;
  case 0xf:
    return char_hayabusa;
  case 0x10:
    return char_christie;
  case 0x11:
    return char_akira;
  case 0x12:
    return char_tina;
  case 0x13:
    return char_hitomi;
  case 0x14:
    uVar1 = char_hayate;
  }
  return uVar1;
}

