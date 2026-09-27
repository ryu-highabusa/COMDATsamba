if not (IsCharacterUnlocker = 1) ;check what script is calling this file first
{
	myAOBpattern := "af47e942" ;unique array of byte hex signature used as a base point of reference to auto-update the memory address nearby. These 4 specific bytes have existed in the game from at least Ver.1.02
	myAOBpatternalt := "af47e9420000" ;how AHK interprets it after readString and CryptBinaryToString (using the "View variables and their contents" menu)
	if not (myAOBscanconverted = myAOBpatternalt) or not (TargetProcess.isHandleValid()) ;the actual AOB scan happens here when necessary
	{
		TargetProcess := new _ClassMemory("ahk_exe game.exe", "", hProcessCopy)
		myAOBscan := TargetProcess.hexStringToPattern(myAOBpattern)
		myAOBaddress := TargetProcess.processPatternScan(,, myAOBscan*)
	}
	if (myAOBscancontent = "") or not (TargetProcess.isHandleValid()) ;check if the AOB location in the memory is still valid
	{
		myAOBscancontent := TargetProcess.readString(myAOBaddress, 4, "UTF-16") ;scan the first 12 bytes at AOB address
		myAOBscanconverted := CryptBinaryToString(myAOBscancontent, 0x4000000c) ;convert moonspeak to raw hex
	}
	;######
	P1_Airborne := TargetProcess.read(myAOBaddress + 0x35EF8, "UChar")
	,P1_ComboCounter := TargetProcess.read(myAOBaddress + 0x34E28, "UChar")
	,P1_CurrentCharacter := TargetProcess.read(myAOBaddress + 0x268F4, "UChar")
	,P1_CurrentMove := TargetProcess.read(myAOBaddress + 0x375EC, "UShort")
	,P1_CurrentMoveFrame := TargetProcess.read(myAOBaddress + 0x35EE0, "UShort")
	,P1_Direction := TargetProcess.read(myAOBaddress + 0x37B58, "UInt")
	,P1_HighMidLowGround := TargetProcess.read(myAOBaddress + 0x690, "UChar")
	,P1_MoveType := TargetProcess.read(myAOBaddress + 0x268FE, "UChar")
	,P1_MoveTypeDetailed := TargetProcess.read(myAOBaddress + 0x35E34, "UInt")
	,P1_Stance := TargetProcess.read(myAOBaddress + 0x37BD0, "UShort")
	,P1_StrikeType := TargetProcess.read(myAOBaddress + 0x692, "UChar")
	,P1_TotalRecovery := TargetProcess.read(myAOBaddress + 0x37BB2, "UShort")
	,P1_TotalStartup := TargetProcess.read(myAOBaddress + 0x37BAE, "UShort")
	;######
	,P2_Airborne := TargetProcess.read(myAOBaddress + 0x36380, "UChar")
	,P2_ComboCounter := TargetProcess.read(myAOBaddress + 0x34E3C, "UChar")
	,P2_CurrentCharacter := TargetProcess.read(myAOBaddress + 0x26924, "UChar")
	,P2_CurrentMove := TargetProcess.read(myAOBaddress + 0x37CB4, "UShort")
	,P2_CurrentMoveFrame := TargetProcess.read(myAOBaddress + 0x36368, "UShort")
	,P2_Direction := TargetProcess.read(myAOBaddress + 0x38220, "UInt")
	,P2_HighMidLowGround := TargetProcess.read(myAOBaddress + 0x7D4, "UChar")
	,P2_MoveType := TargetProcess.read(myAOBaddress + 0x2692E, "UChar")
	,P2_MoveTypeDetailed := TargetProcess.read(myAOBaddress + 0x35E68, "UInt")
	,P2_Stance := TargetProcess.read(myAOBaddress + 0x38298, "UShort")
	,P2_StrikeType := TargetProcess.read(myAOBaddress + 0x7D6, "UChar")
	,P2_TotalRecovery := TargetProcess.read(myAOBaddress + 0x3827A, "UShort")
	,P2_TotalStartup := TargetProcess.read(myAOBaddress + 0x38276, "UShort")
	;######
	,PX_Distance := TargetProcess.read(myAOBaddress + 0x1FE68, "UFloat")
	,PX_TotalActiveFrames := TargetProcess.read(myAOBaddress + 0x37578, "UShort")
}

if (IsCharacterUnlocker = 1) ;the Character unlocker uses a different AOB
{
	myAOBpattern := "ff0000000064656661756c74"
	myAOBpatternalt := "ff000000"
	if not (myAOBscanconverted = myAOBpatternalt) or not (TargetProcess.isHandleValid())
	{
		TargetProcess := new _ClassMemory("ahk_exe game.exe", "", hProcessCopy)
		myAOBscan := TargetProcess.hexStringToPattern(myAOBpattern)
		myAOBaddress := TargetProcess.processPatternScan(,, myAOBscan*)
	}
	if (myAOBscancontent = "") or not (TargetProcess.isHandleValid())
	{
		myAOBscancontent := TargetProcess.readString(myAOBaddress, 12, "UTF-16")
		myAOBscanconverted := CryptBinaryToString(myAOBscancontent, 0x4000000c)
	}
	P1A_Character := (myAOBaddress - 0x6BB)
	,P1B_Character := (myAOBaddress - 0x6BA)
	,P2A_Character := (myAOBaddress - 0x6AC)
	,P2B_Character := (myAOBaddress - 0x6AB)
}