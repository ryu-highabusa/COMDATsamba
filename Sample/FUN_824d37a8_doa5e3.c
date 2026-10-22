
void UndefinedFunction_824d37a8(int param_1,int param_2)

{
  charids cVar1;
  float fVar2;
  
  if (*(int *)(*(int *)(param_1 + 0xe0) + 0x224) != 1) goto LAB_824d3944;
  *(undefined1 *)(*(int *)(param_1 + 0xe0) + 0x238) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xe0) + 0x224) = 2;
  *(float *)(*(int *)(param_1 + 0xe0) + 0x214) = 0.0;
  *(float *)(*(int *)(param_1 + 0xe0) + 0x218) = 0.0;
  cVar1 = (&CHAR_NUM_P1_83e72d34)[param_2 * 0x640];
  if (cVar1 == char_hitomi) {
    fVar2 = 153.0;
  }
  else if (cVar1 == New_Name_(2)) {
    fVar2 = 163.0;
  }
  else if (cVar1 == char_hayabusa) {
    fVar2 = 152.0;
  }
  else if (cVar1 == char_hayate) {
    fVar2 = 155.0;
  }
  else if (cVar1 == char_ayane) {
LAB_824d3938:
    fVar2 = 148.0;
  }
  else if (cVar1 == char_akira) {
    fVar2 = 155.0;
  }
  else if (cVar1 == New_Name_(9)) {
    fVar2 = 153.0;
  }
  else if (cVar1 == char_bayman) {
    fVar2 = 150.0;
  }
  else if (cVar1 == New_Name_(19)) {
    fVar2 = 155.0;
  }
  else if (cVar1 == char_christie) {
    fVar2 = 150.0;
  }
  else if (cVar1 == New_Name_(14)) {
    fVar2 = 153.0;
  }
  else if (cVar1 == char_kasumi) {
    fVar2 = 155.0;
  }
  else if (cVar1 == char_kokoro) {
    fVar2 = 153.0;
  }
  else if (cVar1 == char_leifang) {
    fVar2 = 153.0;
  }
  else if (cVar1 == New_Name_(15)) {
    fVar2 = 153.0;
  }
  else if (cVar1 == char_tina) {
    fVar2 = 153.0;
  }
  else if (cVar1 == char_zack) {
    fVar2 = 153.0;
  }
  else if (cVar1 == New_Name_(7)) {
    fVar2 = 153.0;
  }
  else if (cVar1 == New_Name_(29)) {
    fVar2 = 153.0;
  }
  else {
    if (cVar1 != 0x20) goto LAB_824d3938;
    fVar2 = 153.0;
  }
  *(float *)(*(int *)(param_1 + 0xe0) + 0x228) = fVar2;
LAB_824d3944:
  Function_824DC580();
  return;
}

