int FUN_8c03151c(void)
{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  byte *pbVar4;
  undefined *puVar5;
  byte *pbVar6;
  int iVar7;

  // Assigning memory addresses or variables to pointers
  pcVar2 = (char *)0x01; // BYTE_8c1fdc2c: A flag indicating mode or state
  pcVar3 = (char *)0x02; // BYTE_8c1fad2c: Possibly another state or mode indicator
  pcVar1 = (char *)0x09; // BYTE_8c1fac41: Initial value of stage or game mode
  iVar7 = (int)*pcVar1;  // Initialize iVar7 with the value from the BYTE_8c1fac41 address

  // First branch: If *pcVar2 is 0, execute this block
  if (*pcVar2 == 0) {
    // If *pcVar3 equals 5, set the return value to 2
    if (*pcVar3 == 5) {
      iVar7 = 2;
    } else {
      // If not, retrieve a value from *pbVar4 and set iVar7 accordingly
      pbVar4 = (byte *)0x00; // BYTE_8c1fdc18: A pointer to some game data (stage or flag)
      puVar5 = (undefined *)0x15; // BYTE_8c1fa18d: Another data pointer used to map stages
      iVar7 = (int)(char)puVar5[*pbVar4]; // Set iVar7 from a specific value in the data array
    }
  } 
  // Second branch: If *pcVar2 equals 1, execute this block
  else if (*pcVar2 == 1) {
    pbVar4 = (byte *)0x01; // BYTE_8c1faf7c: Another pointer related to game state
    // Check if *pcVar3 equals 9
    if (*pcVar3 == 9) {
      iVar7 = 8; // Set iVar7 to 8 when condition is met
      // If the value at *pbVar4 is greater than 100, reset it to 10
      if (100 < *pbVar4) {
        *pbVar4 = 10;
      }
    } else {
      pcVar1 = (char *)0x00; // BYTE_8c1faf82: Another game-related flag
      // Check if the value at *pcVar1 is 0 (a condition for advancing stages)
      if (*pcVar1 == 0) {
        pbVar6 = (byte *)0x00; // STORY_GAMEPLAY_START_RAM_FLAG_8c1fdc22: A flag for starting game sequences
        puVar5 = (undefined *)0x00; // BYTE_8c1faf7d: Another game-related byte
        // Perform bitwise XOR and check a condition on a game flag
        if (puVar5[*pbVar6 ^ 1] == 0) {
          pbVar4 = (byte *)0x01; // BYTE_8c1fdc1b: The current stage ID index
          puVar5 = (undefined *)0x09; // StageOrder_Versus_8c14ea2d: Array holding predefined stages
          // Fetch the stage from the array using the current index
          iVar7 = (int)(char)puVar5[*pbVar4];
          // Increment the stage index
          *pbVar4 = *pbVar4 + 1;
          // If the index exceeds 23, wrap it around to 0
          if (23 < *pbVar4) {
            *pbVar4 = 0;
          }
        } else {
          // Default behavior when the condition is not met
          iVar7 = 2;
          // Adjust the value of *pbVar4 if it's above 100
          if (100 < *pbVar4) {
            *pbVar4 = 10;
          }
        }
      }
    }
    // Increment and potentially reset the counter value at *pbVar4
    pbVar4 = (byte *)0x00; // PTR_BYTE_8c031694: Pointer to the game state counter
    *pbVar4 = *pbVar4 + 1; // Increment the counter
    // If the counter exceeds 11, reset it to 0
    if (11 < *pbVar4) {
      *pbVar4 = 0;
    }
  }

  // Return the final value of iVar7, which could represent the selected stage or mode
  return iVar7;
}
