#Include %A_ScriptDir%\files\settings.ahk
#Include %A_ScriptDir%\files\classMemory.ahk
full_command_line := DllCall("GetCommandLine", "str")
if not (A_IsAdmin or RegExMatch(full_command_line, " /restart(?!\S)"))
{
	try
	{
		if A_IsCompiled
			RunWait *RunAs "%A_ScriptFullPath%" /restart
		else
			RunWait *RunAs "%A_AhkPath%" /restart "%A_ScriptFullPath%"
	}
}
if not A_IsAdmin
{
	MsgBox, You are running this script with no administrator rights, it may not work correctly.
}

;graphical stuff mostly done using AutoGUI and SmartGUI
Gui, New, -DPIScale -MinimizeBox -MaximizeBox +AlwaysOnTop
Gui, Show, w260 h220, DOA5LR frame counter
Gui, Color, 000000
Gui, Font, cWhite
Gui, Font, S14 Bold
Gui, Add, Text, x110 y0 w60 h40 +Right, P1
Gui, Add, Text, x190 y0 w60 h40 +Right, P2
Gui, Font, S8 
Gui, Add, Text, x4 y52 w100 h23, advantage
Gui, Add, Text, x4 y82 w100 h23, current frame
Gui, Add, Text, x4 y112 w100 h23, *total startup
Gui, Add, Text, x4 y142 w100 h23, *airborne
Gui, Font, S11
Gui, Add, Text, x110 y50 w60 h30 vAdvP1 +Right
Gui, Add, Text, x190 y50 w60 h30 vAdvP2 +Right
Gui, Add, Text, x110 y80 w60 h30 vFrameP1 +Right
Gui, Add, Text, x190 y80 w60 h30 vFrameP2 +Right
Gui, Add, Text, x110 y110 w60 h30 vStartupP1 +Right
Gui, Add, Text, x190 y110 w60 h30 vStartupP2 +Right
Gui, Add, Text, x110 y140 w60 h30 vAirP1 +Right
Gui, Add, Text, x190 y140 w60 h30 vAirP2 +Right
Gui, Font, S8
Gui, Add, Button, x85 y186 w90 h30 gInstructionsPage, Instructions

;update the addresses continuously
Loop
{
	#Include %A_ScriptDir%\files\addresses.ahk
	P1_AdvCalc := P1_CurrentMoveFrame - P2_CurrentMoveFrame
	,P2_AdvCalc := P2_CurrentMoveFrame - P1_CurrentMoveFrame
	if (P1_AdvCalc >= 0) ;add the + sign when the advantage is positive or neutral
	{
		GuiControl,,AdvP1,+%P1_AdvCalc%
	}	
	else
	{
		GuiControl,,AdvP1,%P1_AdvCalc%
	}
	if (P2_AdvCalc >= 0)
	{
		GuiControl,,AdvP2,+%P2_AdvCalc%
	}	
	else
	{
		GuiControl,,AdvP2,%P2_AdvCalc%
	}
	GuiControl,,FrameP1,%P1_CurrentMoveFrame%
	GuiControl,,FrameP2,%P2_CurrentMoveFrame%
	GuiControl,,StartupP1,%P1_TotalStartup%
	GuiControl,,StartupP2,%P2_TotalStartup%
	GuiControl,,AirP1,%P1_Airborne%
	GuiControl,,AirP2,%P2_Airborne%
	DllCall("Sleep",UInt,14) ;should the program eat too much CPU, increase the delay of this line to a higher millisecond value
}

;more graphical stuff
InstructionsPage:
Gui, 2:New, -DPIScale +ToolWindow +AlwaysOnTop
Gui, 2:Show, w800 h600, Instructions page
Gui, 2:Font, s12
Gui, 2:Add, Edit, x0 y0 w800 h600 ReadOnly, Dead or Alive 5 Last Round frame counter tool Steam version`n`nInstructions:`nStart the game in Window mode or else the tool will not show up.`n`n"advantage" is the raw frame advantage calculated by subtracting "current frame" P1 minus P2 and viceversa.`n"current frame" displays accurately which frame the current animation you are doing is at.`n"total startup" * shows immediately how many startup frames the move you are doing will have. This is usually more accurate than the number shown in the in-game Move Details info, but don't trust this value 100`%. I'm only aware of 3 cases where the value is reported incorrectly: Leifang 1K (shows as 20 it's actually 17), Mai 236K (shows 1 for both hits), Akira knee (shows as 16 it's actually 18).`n"airborne" * 0=on the ground 1=in the air. When a character gets hit in the air, it will count as a juggle. The Jump Status field shown in-game is only true for Throws/OH, this one is for Strikes. Brad Wong 66P+K is displayed incorrectly; it's actually Airborne from frame 1 but the tool says it is from frame 10.`n`n* = these numbers update with 1 frame of delay`n`nIf you need a way to slow down the game to count frames more easily, download Cheat Engine and use its Speedhack function. You can optionally set various hotkeys to quickly achieve different speeds. My recommendations are 0.00 to pause the game, 0.02 to play frame-by-frame, 1.00 to play at normal speed on 3 different buttons. Notice that I have also included the proper .CT file inside of the "files" folder in case you don't want to use this tool.
return

GuiClose:
ExitApp