/*
combos.ahk is called by other BusaBot scripts to press buttons on your keyboard and execute moves.

H+K P+K and H+P+K are written as H#K P#K and H#P#K for technical reasons.

If you want to code new moves, you'd better use the DllCall method to sleep instead of using AutoHotkey's default "Sleep", because it's much more accurate.

Since there are so many different keyboard layouts available (QWERTY, AZERTY, QWERTZ etc.), using scan codes instead of "regular" keys makes the Send commands universally compatible. A scan code (SCxxx) identifies a physical key. Here's a simple script written by SKAN made to easily detect and copy the scan code of any pressed key: http://www.autohotkey.com/board/topic/21105-crazy-scripting-scriptlet-to-find-scancode-of-a-key/

If you want to use a different in-game controller setting other than the default TYPE A, customize the "EDITABLE CONFIGURATION" to fit your needs. You can just use actual letters instead of scancodes for simplicity if you're not going to share the script with anyone. Arrow Keys don't really need to use scancodes since they're universal anyway. Here's a list of accepted inputs by the Send command in AutoHotkey: https://autohotkey.com/docs/commands/Send.htm

The comments after each line represent their "meaning" in a QWERTY layout.
The game gives DPad priority over Analog.

EDITABLE CONFIGURATION:
*/
Punch = SC025 ;k
Kick = SC026 ;l
Hold = SC024 ;j
StrongPunch = SC016 ;u
StrongKick = SC018 ;o
Throw = SC032 ;m
SideStep = SC017 ;i
DPadUp = up
DPadDown = down
DPadLeft = left
DPadRight = right
AnalogUp = SC011 ;w
AnalogDown = SC01F ;s
AnalogLeft = SC01E ;a
AnalogRight = SC020 ;d



6842T() ;360 degrees motions for Izuna followups
{
	global
	DllCall("Sleep",UInt,20)
	Send,{%DPadRight% down}
	DllCall("Sleep",UInt,20)
	Send,{%DPadRight% up}
	Send,{%DPadUp% down}
	DllCall("Sleep",UInt,20)
	Send,{%DPadUp% up}
	Send,{%DPadLeft% down}
	DllCall("Sleep",UInt,20)
	Send,{%DPadLeft% up}
	Send,{%DPadDown% down}
	Send,{%Throw% down}
	DllCall("Sleep",UInt,20)
	Send,{%Throw% up}
	Send,{%DPadDown% up}
	DllCall("Sleep",UInt,230)
}
ReleaseAll() ;release every button when pausing the bot, makes Alt+Tab easier
{
	global
	Send,{%AnalogUp% up}
	Send,{%AnalogLeft% up}
	Send,{%StrongKick% up}
	Send,{%AnalogDown% up}
	Send,{%AnalogRight% up}
	Send,{%StrongPunch% up}
	Send,{%SideStep% up}
	Send,{%StrongKick% up}
	Send,{%Hold% up}
	Send,{%Punch% up}
	Send,{%Kick% up}
	Send,{%Throw% up}
	Send,{%DPadUp% up}
	Send,{%DPadLeft% up}
	Send,{%DPadDown% up}
	Send,{%DPadRight% up}
}
ReleaseAllButDirections() ;used to make anti-neutral throws more consistent, directions are untouched in order to interfere less with human inputs
{
	global
	Send,{%StrongKick% up}
	Send,{%StrongPunch% up}
	Send,{%SideStep% up}
	Send,{%StrongKick% up}
	Send,{%Hold% up}
	Send,{%Punch% up}
	Send,{%Kick% up}
	Send,{%Throw% up}
}
RandomCliffhanger() ;rotates continuously various cliffhanger outcomes randomly
{
	global
	Random, RandCliffhanger, 1,3
	if (RandCliffhanger = 1)
	{
		Send,{%Punch% down}
		DllCall("Sleep",UInt,20)
		Send,{%Punch% up}
		DllCall("Sleep",UInt,20)
	}
	if (RandCliffhanger = 2)
	{
		Send,{%Throw% down}
		DllCall("Sleep",UInt,20)
		Send,{%Throw% up}
		DllCall("Sleep",UInt,20)
	}
	if (RandCliffhanger = 3)
	{
		Send,{%Hold% down}
		DllCall("Sleep",UInt,20)
		Send,{%Hold% up}
		DllCall("Sleep",UInt,20)
	}
}
TechRollLeft()
{
	global
	Send,{%DPadLeft% down}
	DllCall("Sleep",UInt,20)
	Send,{%Hold% down}
	DllCall("Sleep",UInt,20)
	Send,{%Hold% up}
	DllCall("Sleep",UInt,20)
	Send,{%DPadLeft% up}
	DllCall("Sleep",UInt,20)
}
TechRollRight()
{
	global
	Send,{%DPadRight% down}
	DllCall("Sleep",UInt,20)
	Send,{%Hold% down}
	DllCall("Sleep",UInt,20)
	Send,{%Hold% up}
	DllCall("Sleep",UInt,20)
	Send,{%DPadRight% up}
	DllCall("Sleep",UInt,20)
}
TechRollUp()
{
	global
	Send,{%DPadUp% down}
	Send,{%Hold% down}
	DllCall("Sleep",UInt,20)
	Send,{%Hold% up}
	DllCall("Sleep",UInt,150)
	Send,{%DPadUp% up}
	DllCall("Sleep",UInt,20)
}
BackTurnedH()
{
	global
	Send,{%Hold% down}
	DllCall("Sleep",UInt,20)
	Send,{%Hold% up}
	DllCall("Sleep",UInt,20)
}
H#P#K()
{
	global
	ReleaseAllButDirections()
	Send,{%SideStep% down}
	DllCall("Sleep",UInt,20)
	Send,{%SideStep% up}
	DllCall("Sleep",UInt,20)
}
3H#K()
{
	global
	Send,{%DPadDown% down}
	Send,{%DPadRight% down}
	Send,{%StrongKick% down}
	DllCall("Sleep",UInt,20)
	Send,{%StrongKick% up}
	Send,{%DPadRight% up}
	Send,{%DPadDown% up}
	DllCall("Sleep",UInt,20)
}
1H#K()
{
	global
	Send,{%DPadDown% down}
	Send,{%DPadLeft% down}
	Send,{%StrongKick% down}
	DllCall("Sleep",UInt,20)
	Send,{%StrongKick% up}
	Send,{%DPadLeft% up}
	Send,{%DPadDown% up}
	DllCall("Sleep",UInt,20)
}
2H#K()
{
	global
	Send,{%DPadDown% down}
	Send,{%StrongKick% down}
	DllCall("Sleep",UInt,20)
	Send,{%StrongKick% up}
	Send,{%DPadDown% up}
	DllCall("Sleep",UInt,20)
}
2P()
{
	global
	Send,{%DPadDown% down}
	Send,{%Punch% down}
	DllCall("Sleep",UInt,40)
	Send,{%Punch% up}
	Send,{%DPadDown% up}
	DllCall("Sleep",UInt,200)
}
7K()
{
	global
	Send,{%DPadUp% down}
	Send,{%DPadLeft% down}
	Send,{%Kick% down}
	DllCall("Sleep",UInt,20)
	Send,{%Kick% up}
	Send,{%DPadLeft% up}
	Send,{%DPadUp% up}
	DllCall("Sleep",UInt,184)
}
9K()
{
	global
	Send,{%DPadUp% down}
	Send,{%DPadRight% down}
	Send,{%Kick% down}
	DllCall("Sleep",UInt,20)
	Send,{%Kick% up}
	Send,{%DPadRight% up}
	Send,{%DPadUp% up}
	DllCall("Sleep",UInt,184)
}
8K()
{
	global
	Send,{%DPadUp% down}
	Send,{%Kick% down}
	DllCall("Sleep",UInt,20)
	Send,{%Kick% up}
	Send,{%DPadUp% up}
	DllCall("Sleep",UInt,20)
}
41236T()
{
	global
	Send,{%DPadLeft% down}
	DllCall("Sleep",UInt,20)
	Send,{%DPadLeft% up}
	Send,{%DPadDown% down}
	DllCall("Sleep",UInt,20)
	Send,{%DPadDown% up}
	Send,{%DPadRight% down}
	Send,{%Throw% down}
	DllCall("Sleep",UInt,20)
	Send,{%Throw% up}
	Send,{%DPadRight% up}
	DllCall("Sleep",UInt,60)
}
63214T()
{
	global
	Send,{%DPadRight% down}
	DllCall("Sleep",UInt,20)
	Send,{%DPadRight% up}
	Send,{%DPadDown% down}
	DllCall("Sleep",UInt,20)
	Send,{%DPadDown% up}
	Send,{%DPadLeft% down}
	Send,{%Throw% down}
	DllCall("Sleep",UInt,20)
	Send,{%Throw% up}
	Send,{%DPadLeft% up}
	DllCall("Sleep",UInt,60)
}
33T()
{
	global
	Send,{%DPadDown% down}
	Send,{%DPadRight% down}
	DllCall("Sleep",UInt,22)
	Send,{%DPadRight% up}
	Send,{%DPadDown% up}
	DllCall("Sleep",UInt,22)
	Send,{%DPadDown% down}
	Send,{%DPadRight% down}
	Send,{%Throw% down}
	DllCall("Sleep",UInt,22)
	Send,{%Throw% up}
	Send,{%DPadRight% up}
	Send,{%DPadDown% up}
	DllCall("Sleep",UInt,60)
}
11T()
{
	global
	Send,{%DPadDown% down}
	Send,{%DPadLeft% down}
	DllCall("Sleep",UInt,22)
	Send,{%DPadLeft% up}
	Send,{%DPadDown% up}
	DllCall("Sleep",UInt,22)
	Send,{%DPadDown% down}
	Send,{%DPadLeft% down}
	Send,{%Throw% down}
	DllCall("Sleep",UInt,22)
	Send,{%Throw% up}
	Send,{%DPadLeft% up}
	Send,{%DPadDown% up}
	DllCall("Sleep",UInt,60)
}
2T()
{
	global
	Send,{%DPadDown% down}
	Send,{%Throw% down}
	DllCall("Sleep",UInt,20)
	Send,{%Throw% up}
	Send,{%DPadDown% up}
	DllCall("Sleep",UInt,60)
}
6T()
{
	global
	Send,{%DPadRight% down}
	Send,{%Throw% down}
	DllCall("Sleep",UInt,20)
	Send,{%Throw% up}
	Send,{%DPadRight% up}
	DllCall("Sleep",UInt,170)
}
4T()
{
	global
	Send,{%DPadLeft% down}
	Send,{%Throw% down}
	DllCall("Sleep",UInt,20)
	Send,{%Throw% up}
	Send,{%DPadLeft% up}
	DllCall("Sleep",UInt,170)
}
6PK()
{
	global
	Send,{%DPadRight% down}
	Send,{%Punch% down}
	DllCall("Sleep",UInt,20)
	Send,{%Punch% up}
	DllCall("Sleep",UInt,140)
	Send,{%Kick% down}
	DllCall("Sleep",UInt,20)
	Send,{%Kick% up}
	Send,{%DPadRight% up}
	DllCall("Sleep",UInt,20)
}
4PK()
{
	global
	Send,{%DPadLeft% down}
	Send,{%Punch% down}
	DllCall("Sleep",UInt,20)
	Send,{%Punch% up}
	DllCall("Sleep",UInt,140)
	Send,{%Kick% down}
	DllCall("Sleep",UInt,20)
	Send,{%Kick% up}
	Send,{%DPadLeft% up}
	DllCall("Sleep",UInt,20)
}
67H()
{
	global
	Send,{%DPadRight% down}
	DllCall("Sleep",UInt,20)
	Send,{%DPadRight% up}
	Send,{%DPadUp% down}
	Send,{%DPadLeft% down}
	Send,{%Hold% down}
	DllCall("Sleep",UInt,20)
	Send,{%Hold% up}
	Send,{%DPadLeft% up}
	Send,{%DPadUp% up}
	DllCall("Sleep",UInt,184)
}
49H()
{
	global
	Send,{%DPadLeft% down}
	DllCall("Sleep",UInt,20)
	Send,{%DPadLeft% up}
	Send,{%DPadUp% down}
	Send,{%DPadRight% down}
	Send,{%Hold% down}
	DllCall("Sleep",UInt,20)
	Send,{%Hold% up}
	Send,{%DPadRight% up}
	Send,{%DPadUp% up}
	DllCall("Sleep",UInt,184)
}
7H()
{
	global
	Send,{%DPadUp% down}
	Send,{%DPadLeft% down}
	Send,{%Hold% down}
	DllCall("Sleep",UInt,20)
	Send,{%Hold% up}
	Send,{%DPadLeft% up}
	Send,{%DPadUp% up}
	DllCall("Sleep",UInt,200)
}
9H()
{
	global
	Send,{%DPadUp% down}
	Send,{%DPadRight% down}
	Send,{%Hold% down}
	DllCall("Sleep",UInt,20)
	Send,{%Hold% up}
	Send,{%DPadRight% up}
	Send,{%DPadUp% up}
	DllCall("Sleep",UInt,200)
}
64H()
{
	global
	Send,{%DPadRight% down}
	DllCall("Sleep",UInt,20)
	Send,{%DPadRight% up}
	Send,{%DPadLeft% down}
	Send,{%Hold% down}
	DllCall("Sleep",UInt,20)
	Send,{%Hold% up}
	Send,{%DPadLeft% up}
	DllCall("Sleep",UInt,184)
}
46H()
{
	global
	Send,{%DPadLeft% down}
	DllCall("Sleep",UInt,20)
	Send,{%DPadLeft% up}
	Send,{%DPadRight% down}
	Send,{%Hold% down}
	DllCall("Sleep",UInt,20)
	Send,{%Hold% up}
	Send,{%DPadRight% up}
	DllCall("Sleep",UInt,184)
}
4H()
{
	global
	Send,{%DPadLeft% down}
	Send,{%Hold% down}
	DllCall("Sleep",UInt,20)
	Send,{%Hold% up}
	Send,{%DPadLeft% up}
	DllCall("Sleep",UInt,200)
}
6H()
{
	global
	Send,{%DPadRight% down}
	Send,{%Hold% down}
	DllCall("Sleep",UInt,20)
	Send,{%Hold% up}
	Send,{%DPadRight% up}
	DllCall("Sleep",UInt,200)
}
61H()
{
	global
	Send,{%DPadRight% down}
	DllCall("Sleep",UInt,20)
	Send,{%DPadRight% up}
	Send,{%DPadDown% down}
	Send,{%DPadLeft% down}
	Send,{%Hold% down}
	DllCall("Sleep",UInt,20)
	Send,{%Hold% up}
	Send,{%DPadLeft% up}
	Send,{%DPadDown% up}
	DllCall("Sleep",UInt,184)
}
43H()
{
	global
	Send,{%DPadLeft% down}
	DllCall("Sleep",UInt,20)
	Send,{%DPadLeft% up}
	Send,{%DPadDown% down}
	Send,{%DPadRight% down}
	Send,{%Hold% down}
	DllCall("Sleep",UInt,20)
	Send,{%Hold% up}
	Send,{%DPadRight% up}
	Send,{%DPadDown% up}
	DllCall("Sleep",UInt,184)
}
1H()
{
	global
	Send,{%DPadDown% down}
	Send,{%DPadLeft% down}
	Send,{%Hold% down}
	DllCall("Sleep",UInt,20)
	Send,{%Hold% up}
	Send,{%DPadLeft% up}
	Send,{%DPadDown% up}
	DllCall("Sleep",UInt,200)
}
3H()
{
	global
	Send,{%DPadDown% down}
	Send,{%DPadRight% down}
	Send,{%Hold% down}
	DllCall("Sleep",UInt,20)
	Send,{%Hold% up}
	Send,{%DPadRight% up}
	Send,{%DPadDown% up}
	DllCall("Sleep",UInt,200)
}
1P()
{
	global
	Send,{%DPadDown% down}
	Send,{%DPadLeft% down}
	Send,{%Punch% down}
	DllCall("Sleep",UInt,40)
	Send,{%Punch% up}
	Send,{%DPadLeft% up}
	Send,{%DPadDown% up}
	DllCall("Sleep",UInt,250)
}
3P()
{
	global
	Send,{%DPadDown% down}
	Send,{%DPadRight% down}
	Send,{%Punch% down}
	DllCall("Sleep",UInt,40)
	Send,{%Punch% up}
	Send,{%DPadRight% up}
	Send,{%DPadDown% up}
	DllCall("Sleep",UInt,250)
}
CrouchDash33()
{
	global
	Send,{%DPadDown% down}
	Send,{%DPadRight% down}
	DllCall("Sleep",UInt,20)
	Send,{%DPadDown% up}
	Send,{%DPadRight% up}
	DllCall("Sleep",UInt,20)
}
CrouchDash11()
{
	global
	Send,{%DPadDown% down}
	Send,{%DPadLeft% down}
	DllCall("Sleep",UInt,20)
	Send,{%DPadDown% up}
	Send,{%DPadLeft% up}
	DllCall("Sleep",UInt,20)
}
AlternateGuard7()
{
	global
	Send,{%AnalogLeft% down}
	Send,{%AnalogUp% down}
	DllCall("Sleep",UInt,300)
	Send,{%Hold% down}
	DllCall("Sleep",UInt,40)
	Send,{%AnalogUp% up}
	Send,{%AnalogLeft% up}
	DllCall("Sleep",UInt,40)
	Send,{%Hold% up}
}
AlternateGuard9()
{
	global
	Send,{%AnalogRight% down}
	Send,{%AnalogUp% down}
	DllCall("Sleep",UInt,300)
	Send,{%Hold% down}
	DllCall("Sleep",UInt,40)
	Send,{%AnalogUp% up}
	Send,{%AnalogRight% up}
	DllCall("Sleep",UInt,40)
	Send,{%Hold% up}
}
PK()
{
	global
	loop 8
	{
		
		Send,{%Punch% down}
		DllCall("Sleep",UInt,20)
		Send,{%Punch% up}
		DllCall("Sleep",UInt,20)
		Send,{%Kick% down}
		DllCall("Sleep",UInt,20)
		Send,{%Kick% up}
		DllCall("Sleep",UInt,20)
	}
}










;unused or outdated functions
RandomLowStrikeA()
{
	global
	Random, RandLowA, 1,2
	if (RandLowA = 1)
	{
		Send,{%DPadDown% down}
		Send,{%DPadLeft% down}
		Send,{%Punch% down}
		DllCall("Sleep",UInt,40)
		Send,{%Punch% up}
		Send,{%DPadLeft% up}
		Send,{%DPadDown% up}
		DllCall("Sleep",UInt,250)
	}
	if (RandLowA = 2)
	{
		Send,{%DPadDown% down}
		Send,{%StrongKick% down}
		DllCall("Sleep",UInt,20)
		Send,{%StrongKick% up}
		Send,{%DPadDown% up}
		DllCall("Sleep",UInt,433)
	}
}
RandomLowStrikeB()
{
	global
	Random, RandLowB, 1,2
	if (RandLowB = 1)
	{
		Send,{%DPadDown% down}
		Send,{%DPadRight% down}
		Send,{%Punch% down}
		DllCall("Sleep",UInt,40)
		Send,{%Punch% up}
		Send,{%DPadRight% up}
		Send,{%DPadDown% up}
		DllCall("Sleep",UInt,250)
	}
	if (RandLowB = 2)
	{
		Send,{%DPadDown% down}
		Send,{%StrongKick% down}
		DllCall("Sleep",UInt,20)
		Send,{%StrongKick% up}
		Send,{%DPadDown% up}
		DllCall("Sleep",UInt,433)
	}
}
GuardUpLeft()
{
	global
	Send,{%AnalogUp% down}
	Send,{%AnalogLeft% down}
}
GuardUpRight()
{
	global
	Send,{%AnalogUp% down}
	Send,{%AnalogRight% down}
}
GuardRelease()
{
	global
	DllCall("Sleep",UInt,60)
	Send,{%AnalogUp% up}
	Send,{%AnalogLeft% up}
	Send,{%AnalogRight% up}
}
2H#P#K()
{
	global
	Send,{%DPadDown% down}
	Send,{%SideStep% down}
	DllCall("Sleep",UInt,20)
	Send,{%SideStep% up}
	Send,{%DPadDown% up}
	DllCall("Sleep",UInt,20)
}
PPP()
{
	global
	Send,{%Punch% down}
	DllCall("Sleep",UInt,20)
	Send,{%Punch% up}
	DllCall("Sleep",UInt,20)
	Send,{%Punch% down}
	DllCall("Sleep",UInt,20)
	Send,{%Punch% up}
	DllCall("Sleep",UInt,20)
	Send,{%Punch% down}
	DllCall("Sleep",UInt,20)
	Send,{%Punch% up}
	DllCall("Sleep",UInt,20)
}
1P#K()
{
	global
	Send,{%DPadDown% down}
	Send,{%DPadLeft% down}
	Send,{%StrongPunch% down}
	DllCall("Sleep",UInt,40)
	Send,{%StrongPunch% up}
	Send,{%DPadLeft% up}
	Send,{%DPadDown% up}
	DllCall("Sleep",UInt,250)
}
3P#K()
{
	global
	Send,{%DPadDown% down}
	Send,{%DPadRight% down}
	Send,{%StrongPunch% down}
	DllCall("Sleep",UInt,40)
	Send,{%StrongPunch% up}
	Send,{%DPadRight% up}
	Send,{%DPadDown% up}
	DllCall("Sleep",UInt,250)
}