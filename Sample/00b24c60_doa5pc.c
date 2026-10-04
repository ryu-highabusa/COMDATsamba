
uint8_t __cdecl
StageGroup_GetVariantCount(uint32_t base_stage_id,bool tag_mode,uint8_t unlock_context)

{
  char cVar1;
  uint uVar2;
  byte bVar3;
  
  if (tag_mode) {
    uVar2 = 0;
    do {
      if (base_stage_id == (&TagStage_ID_MAX)[uVar2]) {
        return (&tagstagegrouping)[uVar2];
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 10);
    return '\x01';
  }
  uVar2 = 0;
  do {
    if (base_stage_id == (&SingleStage_ID_MAX)[uVar2]) {
      bVar3 = unlock_context;
      if (base_stage_id == 0x21) {
        cVar1 = FUN_00a892c0(0,0x21);
        if (cVar1 != '\0') goto LAB_00b24cd3;
        bVar3 = 1;
      }
      cVar1 = FUN_00a892c0(bVar3,base_stage_id);
      if (cVar1 != '\0') {
LAB_00b24cd3:
        return (&singlestagegrouping)[uVar2];
      }
    }
    uVar2 = uVar2 + 1;
    if (0x18 < uVar2) {
      return '\x01';
    }
  } while( true );
}

