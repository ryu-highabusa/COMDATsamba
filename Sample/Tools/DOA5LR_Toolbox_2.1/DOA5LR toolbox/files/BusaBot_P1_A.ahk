;This script (A) is used to defeat Throws, Offensive Holds, Holds and Strikes.
#Include %A_ScriptDir%\settings.ahk
#Include %A_ScriptDir%\classMemory.ahk
#Include %A_ScriptDir%\combos.ahk

Pause
Loop
{
	DllCall("Sleep",UInt,2)
	#Include %A_ScriptDir%\addresses.ahk
	if (P2_MoveTypeDetailed = 16) ;THROWS AND OFFENSIVE HOLDS
	{
		if (P1_Direction = 0 and P2_HighMidLowGround <= 2 and PX_Distance < 2.16 and P2_TotalStartup <= 10) ;standing throw fast close
			7K()
		if (P1_Direction = 1 and P2_HighMidLowGround <= 2 and PX_Distance < 2.16 and P2_TotalStartup <= 10) ;standing throw fast close
			9K()
		if (P1_Direction = 0 and P2_HighMidLowGround <= 2 and PX_Distance < 1.90 and P2_TotalStartup >= 11) ;standing throw slow (potentially OH)
			2H#K()
		if (P1_Direction = 1 and P2_HighMidLowGround <= 2 and PX_Distance < 1.90 and P2_TotalStartup >= 11) ;standing throw slow (potentially OH)
			2H#K()
		if (P1_Direction = 0 and P2_HighMidLowGround >= 3 and PX_Distance < 2.16) ;crouching throw close
			7K()
		if (P1_Direction = 1 and P2_HighMidLowGround >= 3 and PX_Distance < 2.16) ;crouching throw close
			9K()
	}
	if (P2_MoveType = 5 and (PX_TotalActiveFrames = 15 or PX_TotalActiveFrames = 18 or P1_ComboCounter > 0) and P2_MoveTypeDetailed = 65541) ;HOLDS AND EXPERT HOLDS INSIDE AND OUTSIDE STUNS
	{
		if (P1_Direction = 0 and PX_Distance < 1.90 and P2_HighMidLowGround <= 2) ;standing hold
			41236T()
		if (P1_Direction = 1 and PX_Distance < 1.90 and P2_HighMidLowGround <= 2) ;standing hold
			63214T()
		if (P1_Direction = 0 and PX_Distance < 2.10 and P2_HighMidLowGround = 3) ;crouching hold
			33T()
		if (P1_Direction = 1 and PX_Distance < 2.10 and P2_HighMidLowGround = 3) ;crouching hold
			11T()
	}
	if (P2_MoveType = 5 and PX_TotalActiveFrames = 12 and P2_MoveTypeDetailed = 65541)
	{
		if (P1_Direction = 0 and PX_Distance < 1.75 and P2_HighMidLowGround <= 2) ;standing short hold
			6T()
		if (P1_Direction = 1 and PX_Distance < 1.75 and P2_HighMidLowGround <= 2) ;standing short hold
			4T()
		if (P1_Direction = 0 and PX_Distance < 1.90 and P2_HighMidLowGround = 3) ;crouching short hold
			2T()
		if (P1_Direction = 1 and PX_Distance < 1.90 and P2_HighMidLowGround = 3) ;crouching short hold
			2T()
	}
	if ((P2_MoveTypeDetailed ~= "(^2$|^3$)") and P1_MoveType ~= "(^8$|^9$)") or ((P2_MoveTypeDetailed ~= "(^2$|^3$)") and ((P1_MoveType not ~= "(^8$|^9$)") and not ((P2_CurrentCharacter = 47 and P2_CurrentMove = 1240) or (P2_CurrentCharacter = 4 and (P2_CurrentMove = 608 or P2_CurrentMove = 609)) or (P2_CurrentCharacter = 7 and (P2_CurrentMove = 279 or P2_CurrentMove = 1120)) or (P2_CurrentCharacter = 2 and P2_CurrentMove = 232) or (P2_CurrentCharacter = 45 and P2_CurrentMove = 1270) or (P2_CurrentCharacter = 31 and P2_CurrentMove = 1150) or (P2_CurrentCharacter = 32 and P2_CurrentMove = 1080) or (P2_CurrentCharacter = 41 and P2_CurrentMove = 1190) or (P2_CurrentCharacter = 48 and (P2_CurrentMove ~= "(^1003$|^1004$|^1081$|^1310$|^1315$|^1320$|^1325$|^1330$|^1335$|^1340$|^1345$)")) or (P2_CurrentCharacter = 44 and (P2_CurrentMove = 1230 or P2_CurrentMove = 1231 or P2_CurrentMove = 1232)) or (P2_CurrentCharacter = 46 and (P2_CurrentMove = 140 or P2_CurrentMove = 142) or (P2_CurrentCharacter = 5 and P2_CurrentMove = 1000))))) ;HOLDING INCOMING STRIKES IN THEIR STARTUP FRAMES. Outside of stuns, don't attempt to hold certain moves and let the character-specific code section (in B) handle them differently. During stuns, try to hold them
	{
		if (P1_Direction = 0 and PX_Distance < 2.20 and P2_StrikeType = 0 and not PX_TotalActiveFrames = 0 and (P2_TotalStartup - P2_CurrentMoveFrame) <= 19) ;high punch
			67H()
		if (P1_Direction = 1 and PX_Distance < 2.20 and P2_StrikeType = 0 and not PX_TotalActiveFrames = 0 and (P2_TotalStartup - P2_CurrentMoveFrame) <= 19) ;high punch
			49H()
		if (P1_Direction = 0 and PX_Distance < 2.20 and P2_StrikeType = 1 and not PX_TotalActiveFrames = 0 and (P2_TotalStartup - P2_CurrentMoveFrame) <= 18) ;high kick
			7H()
		if (P1_Direction = 1 and PX_Distance < 2.20 and P2_StrikeType = 1 and not PX_TotalActiveFrames = 0 and (P2_TotalStartup - P2_CurrentMoveFrame) <= 18) ;high kick
			9H()
		if (P1_Direction = 0 and PX_Distance < 2.20 and P2_StrikeType = 2 and not PX_TotalActiveFrames = 0 and (P2_TotalStartup - P2_CurrentMoveFrame) <= 19) ;mid punch
			64H()
		if (P1_Direction = 1 and PX_Distance < 2.20 and P2_StrikeType = 2 and not PX_TotalActiveFrames = 0 and (P2_TotalStartup - P2_CurrentMoveFrame) <= 19) ;mid punch
			46H()
		if (P1_Direction = 0 and PX_Distance < 2.20 and P2_StrikeType = 3 and not PX_TotalActiveFrames = 0 and (P2_TotalStartup - P2_CurrentMoveFrame) <= 19) or (P1_Direction = 0 and PX_Distance < 1.90 and P2_CurrentCharacter = 48 and P2_CurrentMove ~= "(^1004$|^1340$|^1345$)") ;mid kick + exception for Mai 236K with incorrect TotalStartup
			46H()
		if (P1_Direction = 1 and PX_Distance < 2.20 and P2_StrikeType = 3 and not PX_TotalActiveFrames = 0 and (P2_TotalStartup - P2_CurrentMoveFrame) <= 19) or (P1_Direction = 1 and PX_Distance < 1.90 and P2_CurrentCharacter = 48 and P2_CurrentMove ~= "(^1004$|^1340$|^1345$)") ;mid kick + exception for Mai 236K with incorrect TotalStartup
			64H()
		if (P1_Direction = 0 and PX_Distance < 2.20 and P2_StrikeType = 4 and not PX_TotalActiveFrames = 0 and (P2_TotalStartup - P2_CurrentMoveFrame) <= 19) ;low punch
			61H()
		if (P1_Direction = 1 and PX_Distance < 2.20 and P2_StrikeType = 4 and not PX_TotalActiveFrames = 0 and (P2_TotalStartup - P2_CurrentMoveFrame) <= 19) ;low punch
			43H()
		if (P1_Direction = 0 and PX_Distance < 2.20 and P2_StrikeType = 5 and not PX_TotalActiveFrames = 0 and (P2_TotalStartup - P2_CurrentMoveFrame) <= 18) ;low kick
			1H()
		if (P1_Direction = 1 and PX_Distance < 2.20 and P2_StrikeType = 5 and not PX_TotalActiveFrames = 0 and (P2_TotalStartup - P2_CurrentMoveFrame) <= 18) ;low kick
			3H()
	}
}

~F1::Pause
~Ctrl & ~F1::ExitApp