
undefined8 Function_825140D8(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0xffffffffffffffff;
  if (param_1 != 0) {
    uVar1 = character_select_demo_limit(param_1);
    switch((uint)uVar1 & 0xff) {
    case 0:
      return 0x110000;
    case 1:
      return 0x110001;
    case 4:
      return 0x110003;
    case 5:
      return 0x110004;
    case 10:
      return 0x110008;
    case 0xb:
      return 0x110009;
    case 0xc:
      return 0x11000a;
    case 0xd:
      return 0x11000b;
    case 0x14:
      return 0x11000f;
    case 0x15:
      return 0x110010;
    case 0x18:
      return 0x110011;
    case 0x1f:
      uVar2 = 0x110014;
    }
  }
  return uVar2;
}

