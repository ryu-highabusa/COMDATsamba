undefined8 ValidateCharacterSelection(undefined8 param_1, uint selectedCharacterId)

{
  byte characterStatus;               // Temporary variable to store character's status byte
  byte characterSlotStatus;           // Another byte variable for the current character slot's status
  byte characterIdFromSlot;           // Temporary byte to store character ID from the selected slot
  int resultCode;                     // Integer variable for function return values (success/failure)
  uint calculatedValue;               // A temporary variable for a calculated value based on selected character
  byte *characterSlotPointer;         // Pointer for traversing character slots in memory
  uint comparisonValue;               // Temporary variable for further calculations
  int slotIndex;                      // Loop counter for traversing through character slots

  // Call another function to retrieve some data (presumably character-related information)
  resultCode = FUN_829eecb0();

  // Call another function and store its return value for later use
  calculatedValue = Function_82512500();

  // Retrieve a byte of data from a specific memory location based on resultCode (character data)
  characterStatus = *(byte *)(resultCode + 0x1c);

  // Pointer to a specific data structure (likely related to the character's data)
  characterSlotPointer = (byte *)FUN_82513768(*(undefined4 *)(resultCode + 0x44), characterStatus);

  // Check if the character data's status is valid (non-'3' status indicates it's not available)
  if (*(int *)(characterSlotPointer + 0x24) != 3) {
    // If not valid, reset pointer to a default value (perhaps an invalid slot or character)
    characterSlotPointer = &CharacterSelectSlotStory??_FE_82c24698;
  }

  // Retrieve the status of the character slot
  characterSlotStatus = *characterSlotPointer;

  // If the character slot is valid (not an invalid marker like 0xff or 0xfe), proceed with validation
  if ((characterSlotStatus != 0xff) && (characterSlotStatus != 0xfe)) {

    slotIndex = 0;  // Reset the loop counter for character slot iteration
    characterSlotPointer = &CHAR_NUM_P??_830ef82d;  // Pointer to another set of character data

    // Loop through character slots to check if the selected character matches the data
    do {
      // Check if the current character slot is active (contains a valid entry)
      if ((&BYTE_830a5268)[slotIndex] != 0) {   // Check for active character slot
        comparisonValue = Function_82512500(characterSlotPointer + -0x1d);  // Call another function to retrieve data
        if (comparisonValue + (((int)comparisonValue >> 1) + (uint)((int)comparisonValue < 0 && (comparisonValue & 1) != 0)) * -2 !=
            (calculatedValue & 0xff) + ((int)(calculatedValue & 0xff) >> 1) * -2) {
          characterIdFromSlot = *characterSlotPointer;  // Retrieve the character ID from the slot
          if ((characterIdFromSlot == 0xff) || (characterIdFromSlot == 0xfe)) {
            comparisonValue = 0;  // If the ID is invalid, reset the value
          }
          else {
            comparisonValue = (uint)(characterSlotPointer + -0x1d)[characterIdFromSlot + 0x70];  // Calculate the corresponding value based on character ID
          }

          // If the comparison value matches the selected character ID, return success (1)
          if ((comparisonValue == (selectedCharacterId & 0xff)) && (characterSlotPointer[-1] == characterStatus)) {
            return 1;
          }
        }
      }
      characterSlotPointer = characterSlotPointer + 0x8c;  // Move to the next character slot
      slotIndex = slotIndex + 1;  // Increment the loop counter
    } while ((int)characterSlotPointer < -0x7cf105a3);  // Continue until the end of the character slots

    // Call the function again and recalculate the values
    calculatedValue = Function_82512500(resultCode);

    slotIndex = 0;  // Reset the loop counter for the second loop
    calculatedValue = 1 - (calculatedValue + (((int)calculatedValue >> 1) + (uint)((int)calculatedValue < 0 && (calculatedValue & 1) != 0) &
                         0x7fffffff) * -2);

    // Further calculations to check if the selected character matches the data
    resultCode = (calculatedValue & 0xff) * 0x10 - (calculatedValue & 0xff);
    do {
      // If the character ID matches the selected character, return success (1)
      if (((&CHAR_NUM_P1_830ef630)[slotIndex + resultCode] == characterSlotStatus) &&
         ((int)(char)(&DAT_830ef678)[resultCode + slotIndex] == (selectedCharacterId & 0xff))) {
        return 1;
      }
      slotIndex = slotIndex + 1;  // Increment the loop counter
    } while (slotIndex < 0xf);  // Loop until all possible character slots are checked
  }

  return 0;  // If no match is found, return failure (0)
}
