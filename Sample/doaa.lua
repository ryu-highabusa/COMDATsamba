require("model2")
function Init()
end
function Frame()
local gameState = I960_ReadByte(0x54F9D5)
if gameState==0x1
then
Model2_SetWideScreen(0)
Model2_SetStretchBLow(0)
Model2_SetStretchBHigh(0)
end
end


Options =
{
	cheat={name="Unlock RAIDOU",values={"Off","On"},runfunc=unlockraidou}
}
