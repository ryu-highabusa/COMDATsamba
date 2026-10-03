
uint Cutscene_ResolveCostume(undefined4 character_id,char costume_selector,char player_index)

{
  byte *pbVar1;
  code *pcVar2;
  uint uVar3;
  
  uVar3 = (uint)costume_selector;
  pbVar1 = PTR_CHAR__var0b_8c034734;
  if (uVar3 == 0xffffffff) {
    uVar3 = (uint)(char)pbVar1[1];
  }
  else {
    if (uVar3 != 0xfffffffe) {
      if (uVar3 == 0xfffffffd) {
        if ((int)(char)character_id == (uint)*pbVar1) {
          uVar3 = (uint)(char)pbVar1[1];
        }
        else {
          pcVar2 = (code *)PTR_FUN_8c03473c;
          uVar3 = (*pcVar2)(character_id,(int)player_index);
        }
        return uVar3 & 0xff;
      }
      if (uVar3 != 0xfffffffc) {
        return uVar3;
      }
      return (uint)(pbVar1[1] == 0);
    }
    pcVar2 = (code *)PTR_FUN_8c03473c;
    uVar3 = (*pcVar2)(character_id,(int)player_index);
  }
  return uVar3 & 0xff;
}

