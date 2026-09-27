#Include %A_ScriptDir%\files\settings.ahk
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

;graphical stuff mostly built using AutoGUI and SmartGUI
Gui, New, -DPIScale
Gui, Show, w800 h600, DeadOrAutohotkey
Gui, Font, S12
Gui, Add, Edit, x0 y0 w800 h540 ReadOnly, DeadOrAutohotkey bot Steam version`n`nINSTRUCTIONS, PLEASE READ:`nFirst, press the correct button that suits your current player side.`nF1 = Start/Pause bot Side 1`nCtrl+F1 = Exit bot Side 1`nF2 = Start/Pause bot Side 2`nCtrl+F2 = Exit bot Side 2`nSelect Hayabusa. Make sure you're using the command 2H+P+K for SideSteps and not 22.`nThe bot needs a keyboard as the main controller with the default setting TYPE A, but you can use any custom setting by modifying the top of "combos.ahk".`n`nDon't leave both sides ON at the same time.`nThe bot was designed to work offline, so it may not work properly under online conditions.`n`nThis was coded for Ryu Hayabusa, but it's fairly easy to re-write it for other characters even if you're not a programmer, the code should be simple enough, it's just a long looped list of "if X do Y". You can read more info in "documentation.txt".
Gui, Font, S08
Gui, Add, Button, x174 y552 w141 h36, Player 1 side
Gui, Add, Button, x474 y552 w141 h36, Player 2 side
Return
ButtonPlayer1side:
SoundBeep, 500, 500
Run, %A_ScriptDir%\files\BusaBot_P1_A.ahk
Run, %A_ScriptDir%\files\BusaBot_P1_B.ahk
return
ButtonPlayer2side:
SoundBeep, 500, 500
Run, %A_ScriptDir%\files\BusaBot_P2_A.ahk
Run, %A_ScriptDir%\files\BusaBot_P2_B.ahk
return

GuiClose:
ExitApp