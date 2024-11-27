undefined8 Function_82512B18(undefined8 param_1, uint param_2)

{
  byte bVar1;               // Temporary variable to store byte data
  byte bVar2;               // Another byte variable for comparisons
  byte bVar3;               // Temporary byte for further comparisons
  int iVar4;                // Integer variable for function return values
  uint uVar5;               // A temporary variable for a calculated value
  byte *pbVar6;             // Pointer for traversing memory locations
  uint uVar7;               // Temporary variable for further calculations
  int iVar8;                // Loop counter

  // Call another function to retrieve some data (presumably a character-related function)
  iVar4 = FUN_829eecb0();

  // Call another function and store its return value for later use
  uVar5 = Function_82512500();

  // Retrieve a byte of data from a specific location in memory based on the result from iVar4
  bVar1 = *(byte *)(iVar4 + 0x1c);

  // Pointer to a specific data structure (likely character-related data)
  pbVar6 = (byte *)FUN_82513768(*(undefined4 *)(iVar4 + 0x44), bVar1);

  // Check if a particular condition (status value) is met (could be character-specific data)
  if (*(int *)(pbVar6 + 0x24) != 3) {
    // If not, update the pointer to a default value
    pbVar6 = &CharacterSelectSlotStory??_FE_82c24698;
  }

  // Retrieve a byte from the memory pointed to by pbVar6
  bVar2 = *pbVar6;

  // If the byte isn't an invalid marker (FF or FE), proceed with checking character data
  if ((bVar2 != 0xff) && (bVar2 != 0xfe)) {

    iVar8 = 0;  // Reset the loop counter
    pbVar6 = &CHAR_NUM_P??_830ef82d;  // Pointer to another data structure

    // Loop through and check the available character data
    do {
      if ((&BYTE_830a5268)[iVar8] != 0) {   // Check if a character slot is active
        uVar7 = Function_82512500(pbVar6 + -0x1d);  // Another function call, likely validating or retrieving data
        if (uVar7 + (((int)uVar7 >> 1) + (uint)((int)uVar7 < 0 && (uVar7 & 1) != 0)) * -2 !=
            (uVar5 & 0xff) + ((int)(uVar5 & 0xff) >> 1) * -2) {
          bVar3 = *pbVar6;  // Retrieve another byte, likely related to the character ID or state
          if ((bVar3 == 0xff) || (bVar3 == 0xfe)) {
            uVar7 = 0;  // If the byte is invalid, reset the value
          }
          else {
            uVar7 = (uint)(pbVar6 + -0x1d)[bVar3 + 0x70];  // Calculate a value based on the character ID
          }

          // If the value matches the parameter condition, return 1 (successful match)
          if ((uVar7 == (param_2 & 0xff)) && (pbVar6[-1] == bVar1)) {
            return 1;
          }
        }
      }
      pbVar6 = pbVar6 + 0x8c;  // Move the pointer to the next character slot
      iVar8 = iVar8 + 1;  // Increment the loop counter
    } while ((int)pbVar6 < -0x7cf105a3);  // Continue looping until the end of the data

    // Call the function again and recalculate values
    uVar5 = Function_82512500(iVar4);

    iVar8 = 0;  // Reset the loop counter
    uVar5 = 1 - (uVar5 + (((int)uVar5 >> 1) + (uint)((int)uVar5 < 0 && (uVar5 & 1) != 0) &
                         0x7fffffff) * -2);

    // Further calculations to check character data
    iVar4 = (uVar5 & 0xff) * 0x10 - (uVar5 & 0xff);
    do {
      // If a character ID matches the parameter, return 1 (match found)
      if (((&CHAR_NUM_P1_830ef630)[iVar8 + iVar4] == bVar2) &&
         ((int)(char)(&DAT_830ef678)[iVar4 + iVar8] == (param_2 & 0xff))) {
        return 1;
      }
      iVar8 = iVar8 + 1;  // Increment the loop counter
    } while (iVar8 < 0xf);  // Loop until all possible character slots are checked
  }

  return 0;  // If no match is found, return 0 (failure)
}
