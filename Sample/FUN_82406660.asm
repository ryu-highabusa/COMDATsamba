FUN_82406660:
    82406660 94 21 ff 90     stwu       r1,local_70(r1)                  # Create a new stack frame
    82406664 7c 7e 1b 78     or         r30,r3,r3                        # Copy r3 to r30 (likely parameter or index)
    82406668 3d 60 83 02     lis        r11,-0x7cfe                     # Load immediate upper half for calculations
    8240666c 1d 5e 00 9c     mulli      r10,r30,0x9c                    # Multiply index r30 by 0x9C (size of structure)
    82406670 39 6b 01 88     addi       r11,r11,0x188                   # Adjust base address
    82406674 7f ea 5a 14     add        r31,r10,r11                     # Calculate pointer to a structure
    82406678 89 7f 00 37     lbz        r11,0x37(r31)                   # Load ACT_STATE_P1 from the structure
    8240667c 2b 0b 00 00     cmplwi     cr6,r11,0x0                     # Check if ACT_STATE_P1 == NEUTRAL
    82406680 3d 60 82 c4     lis        r11,-0x7d3c                     # Load immediate upper half for CHAR_NUM table
    82406684 3b ab 37 e0     addi       r29,r11,0x37e0                  # Calculate CHAR_NUM table address
    82406688 40 9a 00 18     bne        cr6,LAB_824066a0                # Branch if ACT_STATE_P1 is not NEUTRAL
    8240668c 89 5f 00 01     lbz        r10,0x1(r31)                    # Load CHAR_NUM_P1
    82406690 7d 2a e8 ae     lbzx       r9,r10,r29                      # Get associated value from CHAR_NUM table
    82406694 7d 28 07 74     extsb      r8,r9                           # Sign-extend loaded value
    82406698 55 04 04 3e     rlwinm     r4,r8,0x0,0x10,0x1f             # Prepare value for function call
    8240669c 48 00 02 3d     bl         FUN_824068d8                    # Branch to function (possibly handling the state)

LAB_824066a0:
    824066a0 89 5f 00 37     lbz        r10,0x37(r31)                   # Reload ACT_STATE_P1
    824066a4 2b 0a 00 0d     cmplwi     cr6,r10,0xd                     # Check if ACT_STATE_P1 == SPECIAL_MOVE
    824066a8 40 9a 00 2c     bne        cr6,LAB_824066d4                # Branch if not SPECIAL_MOVE
    824066ac a1 7f 00 32     lhz        r11,0x32(r31)                   # Load ACT_CODE_P1
    824066b0 2b 0b 00 fa     cmplwi     cr6,r11,0xfa                    # Compare ACT_CODE_P1 with 0xFA
    824066b4 41 9a 00 0c     beq        cr6,LAB_824066c0                # Branch if ACT_CODE_P1 == 0xFA
    824066b8 2b 0b 00 fb     cmplwi     cr6,r11,0xfb                    # Compare ACT_CODE_P1 with 0xFB
    824066bc 40 9a 00 18     bne        cr6,LAB_824066d4                # Branch if ACT_CODE_P1 is not 0xFB

LAB_824066c0:
    824066c0 88 ff 00 01     lbz        r7,0x1(r31)                     # Load CHAR_NUM_P1
    824066c4 7c c7 e8 ae     lbzx       r6,r7,r29                       # Load associated table value
    824066c8 7c c5 07 74     extsb      r5,r6                           # Sign-extend table value
    824066cc 54 a4 04 3e     rlwinm     r4,r5,0x0,0x10,0x1f             # Prepare value for function call
    824066d0 48 00 01 40     b          LAB_82406810                    # Branch to end processing

LAB_824066d4:
    824066d4 2b 0a 00 0c     cmplwi     cr6,r10,0xc                     # Check if ACT_STATE_P1 == GROUND_STATE
    824066d8 40 9a 00 24     bne        cr6,LAB_824066fc                # Branch if not GROUND_STATE
    824066dc 88 9f 00 39     lbz        r4,0x39(r31)                    # Load DOWN_STA_P1
    824066e0 7f c3 f3 78     or         r3,r30,r30                      # Copy r30 to r3
    824066e4 2b 04 00 00     cmplwi     cr6,r4,0x0                      # Check if DOWN_STA_P1 is set
    824066e8 40 9a 00 0c     bne        cr6,LAB_824066f4                # Branch if DOWN_STA_P1 is set
    824066ec 38 80 00 3f     li         r4,0x3f                         # Load value 0x3F
    824066f0 48 00 01 24     b          LAB_82406814                    # Branch to end processing
