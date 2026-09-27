;various speed optimizations https://autohotkey.com/boards/viewtopic.php?t=6413
#SingleInstance Ignore
#NoEnv
#MaxHotkeysPerInterval 99000000
#HotkeyInterval 99000000
#KeyHistory 0
ListLines Off
Process, Priority, , A
SetBatchLines, -1
SetKeyDelay, -1, -1
SetMouseDelay, -1
SetDefaultMouseSpeed, 0
SetWinDelay, -1
SetControlDelay, -1
SendMode Input

CryptBinaryToString(VarIn, Format) ;convert to hexadecimal https://autohotkey.com/boards/viewtopic.php?t=9089
{
	SizeIn := (Strlen(VarIn) + 1) * 2
	if !(DllCall("crypt32.dll\CryptBinaryToString", "Ptr", &VarIn, "UInt", SizeIn, "UInt", Format, "Ptr", 0, "UInt*", SizeOut))
		return "*" A_LastError
	VarSetCapacity(VarOut, SizeOut << 1, 0)
	if !(DllCall("crypt32.dll\CryptBinaryToString", "Ptr", &VarIn, "UInt", SizeIn, "UInt", Format, "Ptr", &VarOut, "UInt*", SizeOut))
		return "*" A_LastError
	return StrGet(&VarOut)
}