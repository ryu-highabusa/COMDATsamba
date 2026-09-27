;This script (B) is used to combo with the environment, execute all Izuna Hold/Throw followups, punish hold resistant strikes, deal with character-specific moves, Tech Roll, prevent going into back turned position and breaking neutral throws.
#Include %A_ScriptDir%\settings.ahk
#Include %A_ScriptDir%\classMemory.ahk
#Include %A_ScriptDir%\combos.ahk

Pause
Loop
{
	DllCall("Sleep",UInt,2)
	#Include %A_ScriptDir%\addresses.ahk
	;PUNISHING HOLD RESISTANT STRIKES
	if (P1_Direction = 0 and P1_CurrentMove = 8256 and P2_Stance = 0 and PX_Distance < 1.75) ;punishing hold resistant strikes standing
		6T()
	if (P1_Direction = 1 and P1_CurrentMove = 8256 and P2_Stance = 0 and PX_Distance < 1.75) ;punishing hold resistant strikes standing
		4T()
	if (P1_Direction = 0 and P1_CurrentMove = 8256 and P2_Stance = 1 and PX_Distance < 1.75) ;punishing hold resistant strikes crouching
		2T()
	if (P1_Direction = 1 and P1_CurrentMove = 8256 and P2_Stance = 1 and PX_Distance < 1.75) ;punishing hold resistant strikes crouching
		2T()
	if (P1_Direction = 0 and P1_CurrentMove = 8256 and P2_Stance ~= "(^768$|^769$)" and P2_TotalRecovery > 35) ;punishing hold resistant strikes air slow
		3H#K()
	if (P1_Direction = 1 and P1_CurrentMove = 8256 and P2_Stance ~= "(^768$|^769$)" and P2_TotalRecovery > 35) ;punishing hold resistant strikes air slow
		1H#K()
	if (P1_Direction = 0 and P1_CurrentMove = 8256 and P2_Stance ~= "(^768$|^769$)" and (P2_TotalRecovery > 30 and P2_TotalRecovery < 36 or P2_TotalRecovery = 0)) ;punishing hold resistant strikes air average
		7K()
	if (P1_Direction = 1 and P1_CurrentMove = 8256 and P2_Stance ~= "(^768$|^769$)" and (P2_TotalRecovery > 30 and P2_TotalRecovery < 36 or P2_TotalRecovery = 0)) ;punishing hold resistant strikes air average
		9K()
	if (P1_Direction = 0 and P1_CurrentMove = 8256 and P2_Stance ~= "(^768$|^769$)" and (P2_TotalRecovery > 0) and (P2_TotalRecovery < 31) and P2_TotalRecovery not 0) ;punishing hold resistant strikes air fast
		6T()
	if (P1_Direction = 1 and P1_CurrentMove = 8256 and P2_Stance ~= "(^768$|^769$)" and (P2_TotalRecovery > 0) and (P2_TotalRecovery < 31) and P2_TotalRecovery not 0) ;punishing hold resistant strikes air fast
		4T()
	;DEALING WITH CHARACTER-SPECIFIC TRICKY MOVES
	if not (P1_MoveType = 8 or P1_MoveType = 9)
	{
		if (P2_CurrentCharacter = 4 and P1_Direction = 0 and (P2_CurrentMove = 608 or P2_CurrentMove = 609) and P2_CurrentMoveFrame < 28 and not (P1_MoveType = 7 or P2_MoveTypeDetailed = 131074 or P2_MoveTypeDetailed =  131075)) ;blocking Hayabusa's Ongyoin stance long range strikes (Ongyoin 6P+K/Ongyoin 6K)
			AlternateGuard7()
		if (P2_CurrentCharacter = 4 and P1_Direction = 1 and (P2_CurrentMove = 608 or P2_CurrentMove = 609) and P2_CurrentMoveFrame < 28 and not (P1_MoveType = 7 or P2_MoveTypeDetailed = 131074 or P2_MoveTypeDetailed =  131075)) ;blocking Hayabusa's Ongyoin stance long range strikes (Ongyoin 6P+K/Ongyoin 6K)
			AlternateGuard9()
		if (P2_CurrentCharacter = 4 and P1_CurrentMove = 8256 and P2_CurrentMove = 221 and P2_CurrentMoveFrame < 39) ;Hayabusa's hold resistant kick string starter (rising 4K)
			PPP()
		if (P2_CurrentCharacter = 7 and (P2_CurrentMove = 279 or P2_CurrentMove = 1120) and P2_CurrentMoveFrame < 20 and PX_Distance < 3) ;Helena's hold resistant cancellable guard breaks (H+K/H+K2 and 66H+K)
			2H#K()
		if (P2_CurrentCharacter = 2 and P2_CurrentMove = 232 and P2_CurrentMoveFrame < 20) ;Jann Lee's unblockable Dragon Kick (236K or running K)
			2H#K()
		if (P2_CurrentCharacter = 45 and P2_CurrentMove = 1270 and P2_CurrentMoveFrame < 20) ;Honoka's unblockable Dragon Kick (236K)
			2H#K()
		if (((P2_CurrentCharacter = 31 and P2_CurrentMove = 1150) or (P2_CurrentCharacter = 32 and P2_CurrentMove = 1080) or (P2_CurrentCharacter = 41 and P2_CurrentMove = 1190)) and PX_Distance < 1.91) ;feint/fake kicks of the Virtua Fighters (KH)
			2P()
		if (P2_CurrentCharacter = 48 and P1_Direction = 0 and (P2_CurrentMove = 1310 or P2_CurrentMove = 1315) and P2_CurrentMoveFrame < 40) ;Mai's fan projectile (236P)
			CrouchDash33()
		if (P2_CurrentCharacter = 48 and P1_Direction = 1 and (P2_CurrentMove = 1310 or P2_CurrentMove = 1315) and P2_CurrentMoveFrame < 40) ;Mai's fan projectile (236P)
			CrouchDash11()
		if (P2_CurrentCharacter = 44 and P1_Direction = 0 and (P2_CurrentMove = 1230 or P2_CurrentMove = 1231 or (P2_CurrentMove = 1232 and P2_CurrentMoveFrame < 41) and not (P1_MoveType = 7 or P2_MoveTypeDetailed = 131074 or P2_MoveTypeDetailed =  131075)) and PX_Distance > 3.5) ;blocking Nyotengu's tornado projectile (4P+KP)
			AlternateGuard7()
		if (P2_CurrentCharacter = 44 and P1_Direction = 1 and (P2_CurrentMove = 1230 or P2_CurrentMove = 1231 or (P2_CurrentMove = 1232 and P2_CurrentMoveFrame < 41) and not (P1_MoveType = 7 or P2_MoveTypeDetailed = 131074 or P2_MoveTypeDetailed =  131075)) and PX_Distance > 3.5) ;blocking Nyotengu's tornado projectile (4P+KP)
			AlternateGuard9()
		if (P2_CurrentCharacter = 44 and P1_Direction = 0 and (P2_CurrentMove = 1230 or P2_CurrentMove = 1231) and PX_Distance < 3.6) ;interrupting Nyotengu's tornado projectile (4P+KP)
			3H#K()
		if (P2_CurrentCharacter = 44 and P1_Direction = 1 and (P2_CurrentMove = 1230 or P2_CurrentMove = 1231) and PX_Distance < 3.6) ;interrupting Nyotengu's tornado projectile (4P+KP)
			1H#K()	
		if (P2_CurrentCharacter = 46 and P1_Direction = 0 and (P2_CurrentMove = 140 or (P2_CurrentMove = 142 and P2_CurrentMoveFrame < 36)) and PX_Distance > 4.29 and not (P1_MoveType = 7 or P2_MoveTypeDetailed = 131074 or P2_MoveTypeDetailed =  131075)) ;blocking Raidou's fireball projectile (1P+K)
			AlternateGuard7()
		if (P2_CurrentCharacter = 46 and P1_Direction = 1 and (P2_CurrentMove = 140 or (P2_CurrentMove = 142 and P2_CurrentMoveFrame < 36)) and PX_Distance > 4.29 and not (P1_MoveType = 7 or P2_MoveTypeDetailed = 131074 or P2_MoveTypeDetailed =  131075)) ;blocking Raidou's fireball projectile (1P+K)
			AlternateGuard9()
		if (P2_CurrentCharacter = 46 and P1_Direction = 0 and P2_CurrentMove = 140 and PX_Distance < 4.30) ;interrupting Raidou's fireball projectile (1P+K)
			3H#K()
		if (P2_CurrentCharacter = 46 and P1_Direction = 1 and P2_CurrentMove = 140 and PX_Distance < 4.30) ;interrupting Raidou's fireball projectile (1P+K)
			1H#K()
		if (P2_CurrentCharacter = 5 and P1_Direction = 0 and P2_CurrentMove = 1000 and P2_CurrentMoveFrame < 27 and not (P1_MoveType = 7 or P2_MoveTypeDetailed = 131074 or P2_MoveTypeDetailed =  131075)) ;blocking Kasumi's double hold resistant safe guard break (9PKP)
			AlternateGuard7()
		if (P2_CurrentCharacter = 5 and P1_Direction = 1 and P2_CurrentMove = 1000 and P2_CurrentMoveFrame < 27 and not (P1_MoveType = 7 or P2_MoveTypeDetailed = 131074 or P2_MoveTypeDetailed =  131075)) ;blocking Kasumi's double hold resistant safe guard break (9PKP)
			AlternateGuard9()
		if (P2_CurrentCharacter = 47 and P1_Direction = 0 and P2_CurrentMove = 1240 and not (P1_MoveType = 7 or P2_MoveTypeDetailed = 131074 or P2_MoveTypeDetailed =  131075)) ;blocking Naotora's full screen multi-hitting kick (236K)
			AlternateGuard7()
		if (P2_CurrentCharacter = 47 and P1_Direction = 1 and P2_CurrentMove = 1240 and not (P1_MoveType = 7 or P2_MoveTypeDetailed = 131074 or P2_MoveTypeDetailed =  131075)) ;blocking Naotora's full screen multi-hitting kick (236K)
			AlternateGuard9()
		if (P2_CurrentCharacter = 1 and P2_CurrentMove = 226 and P2_CurrentMoveFrame < 9 and PX_Distance < 4) ;sidestepping Tina's hold resistant Leaping Elbow (236P)
			2H#P#K()
	;if (P2_CurrentCharacter = 30 and (P2_CurrentMove = 1210 or P2_CurrentMove = 1072) and P2_CurrentMoveFrame < 9 and PX_Distance < 3) ;dealing with Mila's kick feint (3KT or 4PKT)
	;	2H#P#K()
	;if (P2_CurrentCharacter = 30 P1_Direction = 0 and P2_CurrentMove = 1214 and PX_Distance < 3) ;dealing with Mila's OH feint (3KT)
	;	9K()
	;if (P2_CurrentCharacter = 30 P1_Direction = 1 and P2_CurrentMove = 1214 and PX_Distance < 3) ;dealing with Mila's OH feint (3KT)
	;	7K()
		if (P2_CurrentCharacter = 48 and P1_Direction = 0 and (P2_CurrentMove = 1340 or P2_CurrentMove = 1345) and not (P1_MoveType = 7 or P2_MoveTypeDetailed = 131074 or P2_MoveTypeDetailed =  131075)) ;blocking Mai's long range 236K double hit (236K)
			AlternateGuard7()
		if (P2_CurrentCharacter = 48 and P1_Direction = 1 and (P2_CurrentMove = 1340 or P2_CurrentMove = 1345) and not (P1_MoveType = 7 or P2_MoveTypeDetailed = 131074 or P2_MoveTypeDetailed =  131075)) ;blocking Mai's long range 236K double hit (236K)
			AlternateGuard9()
		if (P2_CurrentCharacter = 48 and P1_Direction = 0 and (P2_CurrentMove = 1330 or P2_CurrentMove = 1335) and not (P1_MoveType = 7 or P2_MoveTypeDetailed = 131074 or P2_MoveTypeDetailed =  131075) and PX_Distance < 1.90) ;blocking Mai's fire 1 (214P+K)
			AlternateGuard7()
		if (P2_CurrentCharacter = 48 and P1_Direction = 1 and (P2_CurrentMove = 1330 or P2_CurrentMove = 1335) and not (P1_MoveType = 7 or P2_MoveTypeDetailed = 131074 or P2_MoveTypeDetailed =  131075) and PX_Distance < 1.90) ;blocking Mai's fire 1 (214P+K)
			AlternateGuard9()
		if (P2_CurrentCharacter = 48 and P1_Direction = 0 and (P2_CurrentMove = 1320 or P2_CurrentMove = 1325) and not (P1_MoveType = 7 or P2_MoveTypeDetailed = 131074 or P2_MoveTypeDetailed =  131075) and PX_Distance < 2.10) ;blocking Mai's fire 2 (214P)
			AlternateGuard7()
		if (P2_CurrentCharacter = 48 and P1_Direction = 1 and (P2_CurrentMove = 1320 or P2_CurrentMove = 1325) and not (P1_MoveType = 7 or P2_MoveTypeDetailed = 131074 or P2_MoveTypeDetailed =  131075) and PX_Distance < 2.10) ;blocking Mai's fire 2 (214P)
			AlternateGuard9()
	}
	;RESPONSES TO VARIOUS SITUATIONS
	;if (P1_Direction = 0 and PX_Distance < 1.90 and (P2_CurrentMove = 9152 or P2_CurrentMove = 9153) and P2_CurrentMoveFrame < 4) ;throw against sidesteps
	;	6T()
	;if (P1_Direction = 1 and PX_Distance < 1.90 and (P2_CurrentMove = 9152 or P2_CurrentMove = 9153) and P2_CurrentMoveFrame < 4) ;throw against sidesteps
	;	4T()
	if (P1_Direction = 1 and P1_CurrentMove = 452) ;followup after (accidental) 46T on Normal Hit
		6PK()
	if (P1_Direction = 0 and P1_CurrentMove = 452) ;followup after (accidental) 46T on Normal Hit
		4PK()
	if (P1_Direction = 0 and P1_CurrentMove = 402) ;followup after (accidental) 46T on Counter Hit
		9K()
	if (P1_Direction = 1 and P1_CurrentMove = 402) ;followup after (accidental) 46T on Counter Hit
		7K()
	if (P1_Direction = 0 and (P2_CurrentMove = 9218 or P2_CurrentMove = 9219 or P2_CurrentMove = 8922)) ;wall juggles
		8K()
	if (P1_Direction = 1 and (P2_CurrentMove = 9218 or P2_CurrentMove = 9219 or P2_CurrentMove = 8922)) ;wall juggles
		8K()
	if (P2_CurrentMove = 9252 or P2_CurrentMove = 9253 or P2_CurrentMove = 9254 or P2_CurrentMove = 9255) ;bouncy wall juggles
		8K()
	if (P1_Direction = 0 and P2_CurrentMove ~= "(^545$|^8803$|^8804$|^8913$|^8914$|^8915$|^8916$)") or P2_CurrentMove = 9145 or P2_CurrentMove = 10312 or P2_CurrentMove = 10322 or P2_CurrentMove = 10392 or P2_CurrentMove = 10422 ;breakable objects, Danger Zones, and roof 6T on BT
		3H#K()
	if (P1_Direction = 1 and P2_CurrentMove ~= "(^545$|^8803$|^8804$|^8913$|^8914$|^8915$|^8916$)") or P2_CurrentMove = 9142 or P2_CurrentMove = 10292 ;breakable objects, Danger Zones, and roof 6T on BT
		1H#K()
	if (P2_CurrentMove = 9157 or P1_CurrentMove = 9157) ;cliffhanger time
		RandomCliffhanger()
	if (P1_CurrentMove = 302 and P1_CurrentMoveFrame < 14 or P1_CurrentMove = 303 and P1_CurrentMoveFrame < 21 or P1_CurrentMove = 4000 and P1_CurrentMoveFrame < 36 or P1_CurrentMove ~= "(^480$|^512$)" and P1_CurrentMoveFrame < 27 or P1_CurrentMove ~= "(^472$|^802$)" and P1_CurrentMoveFrame < 40 or P1_CurrentMove ~= "(^432$|^474$|^484$|^506$|^518$|^524$)" and P1_CurrentMoveFrame < 41 or P1_CurrentMove ~= "(^478$|^800$|^4002$)" and P1_CurrentMoveFrame < 46 or P1_CurrentMove ~= "(^454$|^546$|^570$)" and P1_CurrentMoveFrame < 63 or P1_CurrentMove ~= "(^482$|^804$|^4010$|^7107$)" and P1_CurrentMoveFrame < 68) ;followups for all Izunas+Ongyoin throws and holds. Stop doing 360 degrees motions as soon as possible if lag ruined them (code uses RegEx to make it shorter)
		6842T()
	if (P1_MoveType = 10 and P2_MoveType = 4 and P1_CurrentMoveFrame < 4 and P1_Stance = 0) ;breaking neutral throws
		H#P#K()
	if ((P1_Direction = 65792 or P1_Direction = 65793) and P1_MoveType = 0) ;anti-back turned
		BackTurnedH()
	if ((P1_Direction = 0 or P1_Direction = 65793) and (P1_MoveType = 9 or P1_MoveType = 10 or P1_MoveType = 11 or P1_MoveType = 12) and (P1_Stance = 256 or P1_Stance = 512 or P1_Stance = 768) and not P1_CurrentMove ~= "(^9216$|^9217$|^9218$|^9219$|^9252$|^9253$|^8764$)") ;back tech rolls
		TechRollLeft()
	if ((P1_Direction = 1 or P1_Direction = 65792) and (P1_MoveType = 9 or P1_MoveType = 10 or P1_MoveType = 11 or P1_MoveType = 12) and (P1_Stance = 256 or P1_Stance = 512 or P1_Stance = 768) and not P1_CurrentMove ~= "(^9216$|^9217$|^9218$|^9219$|^9252$|^9253$|^8764$)") ; back tech rolls
		TechRollRight()
	if (P1_CurrentMove ~= "(^9216$|^9217$|^9218$|^9219$|^9252$|^9253$|^8764$)") ;tech roll UP in case of wall splats to be in a better position
		TechRollUp()
}
return

~F1::
ReleaseAll()
Pause,,1
return
~Ctrl & ~F1::ExitApp