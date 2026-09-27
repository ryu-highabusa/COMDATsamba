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

IsCharacterUnlocker := 1 ;used to tell addresses.ahk what script is calling it

;needed by the SetTimer loops
setting1A := 0
setting1B := 0
setting2A := 0
setting2B := 0

;graphical stuff mostly done using AutoGUI and SmartGUI
Gui, New, -DPIScale -MinimizeBox -MaximizeBox
Gui, Show, w177 h174, DOA5LR character unlocker
Gui, Add, Edit, gEditField1A vEditField1A x17 y8 w42 h21 Number, 0
Gui, Add, Edit, gEditField1B vEditField1B x17 y40 w42 h21 Number, 0
Gui, Add, Edit, gEditField2A vEditField2A x17 y72 w42 h21 Number, 0
Gui, Add, Edit, gEditField2B vEditField2B x17 y104 w42 h21 Number, 0
Gui, Add, CheckBox, gIsChecked1A x62 y8 w120 h23, set Player1A
Gui, Add, CheckBox, gIsChecked1B x62 y40 w120 h23, set Player1B
Gui, Add, CheckBox, gIsChecked2A x62 y72 w120 h23, set Player2A
Gui, Add, CheckBox, gIsChecked2B x62 y104 w120 h23, set Player2B
Gui, Add, Button, x50 y136 w77 h28 gInstructionsPage, Instructions
return
InstructionsPage:
Gui, 2:New, -DPIScale +ToolWindow
Gui, 2:Show, w800 h600, Instructions page
Gui, 2:Font, s12
Gui, 2:Add, Edit, x0 y0 w800 h600 ReadOnly, Dead or Alive 5 Last Round character unlocker tool Steam version`n`nInstructions:`n1) Type the ID number of the character you want to unlock and tick its checkbox. Refer to "documentation.txt" (scroll to the very bottom of the file) for a list of tested character numbers.`n2) With the checkbox enabled, choose any character during Character Selection Screen and pick Costume 1; it will be overridden with your choice.`n`nNot picking Costume 1 may result in crashes.`nIf you're still crashing, touch Player1A only.`n`n`n`nTL;DR > type number, tick checkbox, select costume 1
return

;start loops only when the checkboxes are enabled. The memory addresses will be written every 300 milliseconds
IsChecked1A:
SetTimer, loop1A, % (setting1A := !setting1A) ? 300 : "Off"
loop1A:
EditField1A:
if (setting1A = 1)
{
	#Include %A_ScriptDir%\files\addresses.ahk
	GuiControlGet, EditField1A
	TargetProcess.write(P1A_Character, EditField1A, "UChar")
}
return
IsChecked1B:
SetTimer, loop1B, % (setting1B := !setting1B) ? 300 : "Off"
loop1B:
EditField1B:
if (setting1B = 1)
{
	#Include %A_ScriptDir%\files\addresses.ahk
	GuiControlGet, EditField1B
	TargetProcess.write(P1B_Character, EditField1B, "UChar")
}
return
IsChecked2A:
SetTimer, loop2A, % (setting2A := !setting2A) ? 300 : "Off"
loop2A:
EditField2A:
if (setting2A = 1)
{
	#Include %A_ScriptDir%\files\addresses.ahk
	GuiControlGet, EditField2A
	TargetProcess.write(P2A_Character, EditField2A, "UChar")
}
return
IsChecked2B:
SetTimer, loop2B, % (setting2B := !setting2B) ? 300 : "Off"
loop2B:
EditField2B:
if (setting2B = 1)
{
	#Include %A_ScriptDir%\files\addresses.ahk
	GuiControlGet, EditField2B
	TargetProcess.write(P2B_Character, EditField2B, "UChar")
}
return

GuiClose:
ExitApp