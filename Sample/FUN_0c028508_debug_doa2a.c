
void FUN_0c028508(char param_1)

{
  short sVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  char *pcVar8;
  
  puVar4 = PTR_Debug_Printf_0c028580;
  puVar3 = PTR_s__s_0c02857c;
  puVar2 = PTR_s_Pause___0c028578;
  pcVar8 = s_Pause___0c13b60a;
  if (param_1 == '\0') {
    puVar7 = PTR_s_Pause___0c028578 + 0x20;
  }
  else {
    puVar7 = PTR_s_Pause___0c028578 + 0x30;
  }
  (*(code *)PTR_Debug_Printf_0c028580)(PTR_s__s_0c02857c,puVar7,s_Pause___0c13b60a);
  (*(code *)puVar4)(puVar3,puVar2 + 0x40);
  if (param_1 == '\x01') {
    puVar7 = puVar2 + 0x20;
  }
  else {
    puVar7 = puVar2 + 0x30;
  }
  (*(code *)puVar4)(puVar3,puVar7,pcVar8);
  (*(code *)puVar4)(puVar3,puVar2 + DAT_0c0286b8);
  sVar1 = DAT_0c0286bc;
  if (*PTR_DAT_0c0286cc != '\0') {
    sVar1 = DAT_0c0286ba;
  }
  (*(code *)puVar4)(puVar3,puVar2 + sVar1,pcVar8);
  if (param_1 == '\x02') {
    puVar7 = puVar2 + 0x20;
  }
  else {
    puVar7 = puVar2 + 0x30;
  }
  (*(code *)puVar4)(puVar3,puVar7);
  (*(code *)puVar4)(puVar3,puVar2 + DAT_0c0286be);
  puVar6 = PTR_DOA2_PLAYER_0c0286d4;
  puVar7 = PTR_s__d___d_0c0286d0;
  (*(code *)puVar4)(PTR_s__d___d_0c0286d0,*PTR_DOA2_PLAYER_0c0286d4,PTR_DOA2_PLAYER_0c0286d4[0x68]);
  if (param_1 == '\x03') {
    puVar5 = puVar2 + 0x20;
  }
  else {
    puVar5 = puVar2 + 0x30;
  }
  (*(code *)puVar4)(puVar3,puVar5);
  (*(code *)puVar4)(puVar3,puVar2 + DAT_0c0286c0);
  (*(code *)puVar4)(puVar7,puVar6[0x53],puVar6[DAT_0c0286c2]);
  if (param_1 == '\x04') {
    puVar5 = puVar2 + 0x20;
  }
  else {
    puVar5 = puVar2 + 0x30;
  }
  (*(code *)puVar4)(puVar3,puVar5);
  (*(code *)puVar4)(puVar3,puVar2 + DAT_0c0286c4);
  (*(code *)puVar4)(puVar7,*(undefined2 *)(puVar6 + 0x20),*(undefined2 *)(puVar6 + DAT_0c0286c6));
  if (param_1 == '\x05') {
    puVar5 = puVar2 + 0x20;
  }
  else {
    puVar5 = puVar2 + 0x30;
  }
  (*(code *)puVar4)(puVar3,puVar5);
  (*(code *)puVar4)(puVar3,puVar2 + DAT_0c0286c8);
  (*(code *)puVar4)(puVar7,*(undefined2 *)(PTR_DAT_0c0286d8 + ((byte)puVar6[0x61] >> 1 ^ 1) * 2),
                    *(undefined2 *)
                     (PTR_DAT_0c0286d8 + ((byte)puVar6[DAT_0c0286ca] >> 1 ^ 1) * 2 + 4));
  if (param_1 == '\x06') {
    puVar7 = puVar2 + 0x20;
  }
  else {
    puVar7 = puVar2 + 0x30;
  }
  (*(code *)puVar4)(puVar3,puVar7);
  (*(code *)puVar4)(puVar3,puVar2 + DAT_0c02880a);
  puVar7 = PTR_s__d_0c02881c;
  (*(code *)puVar4)(PTR_s__d_0c02881c,*DAT_0c028820);
  if (param_1 == '\a') {
    puVar6 = puVar2 + 0x20;
  }
  else {
    puVar6 = puVar2 + 0x30;
  }
  (*(code *)puVar4)(puVar3,puVar6);
  (*(code *)puVar4)(puVar3,puVar2 + DAT_0c02880c);
  (*(code *)puVar4)(puVar7,*DAT_0c028824);
  if (param_1 == '\b') {
    puVar6 = puVar2 + 0x20;
  }
  else {
    puVar6 = puVar2 + 0x30;
  }
  (*(code *)puVar4)(puVar3,puVar6);
  puVar6 = puVar2;
  (*(code *)puVar4)(puVar3,puVar2 + DAT_0c02880e,puVar2);
  (*(code *)puVar4)(puVar3,puVar6 + DAT_0c028810);
  (*(code *)puVar4)(puVar7,*DAT_0c028828);
  if (param_1 == '\t') {
    puVar6 = puVar2 + 0x20;
  }
  else {
    puVar6 = puVar2 + 0x30;
  }
  (*(code *)puVar4)(puVar3,puVar6);
  puVar6 = puVar2;
  (*(code *)puVar4)(puVar3,puVar2 + DAT_0c028812,puVar2);
  (*(code *)puVar4)(puVar3,puVar6 + DAT_0c028814);
  (*(code *)puVar4)(puVar7,*DAT_0c02882c);
  if (param_1 == '\n') {
    puVar7 = puVar2 + 0x20;
  }
  else {
    puVar7 = puVar2 + 0x30;
  }
  (*(code *)puVar4)(puVar3,puVar7);
  (*(code *)puVar4)(puVar3,puVar2 + DAT_0c028816);
  (*(code *)puVar4)(PTR_s__0c028830);
  if (param_1 == '\v') {
    puVar7 = puVar2 + 0x20;
  }
  else {
    puVar7 = puVar2 + 0x30;
  }
  (*(code *)puVar4)(puVar3,puVar7);
  (*(code *)puVar4)(puVar3,puVar2 + DAT_0c028818);
  (*(code *)puVar4)(PTR_s__d_0c028838,*DAT_0c028834);
  if (param_1 == '\f') {
    puVar7 = puVar2 + 0x20;
  }
  else {
    puVar7 = puVar2 + 0x30;
  }
  (*(code *)puVar4)(puVar3,puVar7);
  (*(code *)puVar4)(puVar3,puVar2 + DAT_0c028928);
  (*(code *)puVar4)(PTR_s__d_0c028930,*DAT_0c02892c);
  return;
}

