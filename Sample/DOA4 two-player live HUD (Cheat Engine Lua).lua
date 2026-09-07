-- === DOA4 two-player live HUD (Cheat Engine Lua) ============================
-- Uses your CT addresses; reads byte + 2-byte BIG-ENDIAN values.
-- Shows a two-column panel: Field | P1 | P2, updates ~6x/sec.

-- ───── Address book (from your CT) ──────────────────────────────────────────
local ADDR = {
  P1 = {
    MAN_COM   = "0x182CE4E10",
    CHAR_NUM  = "0x182CE4E11",
    HIT_POINT = "0x182CE4E34",
    ANIME     = "0x182CE4E40",
    ACT_CODE  = "0x182CE4E42",
    ACT_FLAG  = "0x182CE4E44",
    ACT_REQ   = "0x182CE4E46",
    ACT_STATE = "0x182CE4E47",
  },
  P2 = {
    MAN_COM   = "0x182CE4EA8",
    CHAR_NUM  = "0x182CE4EA9",
    HIT_POINT = "0x182CE4ECC",
    ANIME     = "0x182CE4ED8",
    ACT_CODE  = "0x182CE4EDA",
    ACT_FLAG  = "0x182CE4EDC",
    ACT_REQ   = "0x182CE4EDE",
    ACT_STATE = "0x182CE4EDF",
},
  DISP = {
    STAGE_DISP = "0x182CE4DE0",
    CHAR_DISP_P1 = "0x182CE4E30",
    CHAR_DISP_P2 = "0x182CE4EC8",
    FIX_DISP = "0x182D76DA1",
    GAME_RULE = "0x182DFC64E",
    TIMER_ONOFF = "0x182DFC7B4", }
}

-- ───── Name maps / formatters ───────────────────────────────
local MANCOM = { [0] = "Computer", [1] = "Human" }
local STAGE_DISP = { [0] = "Computer", [1] = "Human" }
local CHAR_DISP_P1 = { [0] = "Computer", [1] = "Human" }
local CHAR_DISP_P2 = { [0] = "Computer", [1] = "Human" }
local FIX_DISP = { [0] = "Computer", [1] = "Human" }
local GAME_RULE = { [0] = "Computer", [1] = "Human" }
local TIMER_ONOFF = { [0] = "C", [1] = "Human" } 

local ACT_STATE = {
  [0x00] = "0x0 - NEUTRAL",
  [0x01] = "0x1 - AIR",
  [0x02] = "0x2 - AIR ATTACK",
  [0x03] = "0x3 - ATTACK",
  [0x04] = "0x4 - THROW",
  [0x05] = "0x5 - HOLD",
  [0x06] = "0x6 - HOLD SUCCESS",
  [0x07] = "0x7 - BLOCK STUN (Hold Unavail.)",
  [0x08] = "0x8 - CRITICAL STUN (Hold Avail.)",
  [0x09] = "0x9 - HIT STUN (Hold Unavail.)",
  [0x0A] = "0xA - BEING THROWN",
  [0x0B] = "0xB - BEING HELD",
  [0x0C] = "0xC - GROUND (WUK avail.)",
  [0x0D] = "0xD - SPECIAL MOVE",
  [0x0E] = "0xE - DOWN ATTACK",
  [0x0F] = "0xF - DOWN ATTACK STUN",
  [0x10] = "0x10 - THROW MISS",
}

-- map character ids --
local CHAR_NAME = {
  [0x00] = "Zack",
  [0x01] = "Tina",
  [0x02] = "Jann Lee",
  [0x03] = "Ein",
  [0x04] = "Hayabusa",
  [0x05] = "Kasumi",
  [0x06] = "Gen Fu",
  [0x07] = "Helena",
  [0x08] = "Leon",
  [0x09] = "Bass",
  [0x0A] = "Kokoro",
  [0x0B] = "Hayate",
  [0x0C] = "Lei Fang",
  [0x0D] = "Ayane",
  [0x0E] = "Eliot",
  [0x0F] = "La Mariposa",
  [0x10] = "Alpha 152",
  [0x11] = "Tengu",
  [0x12] = "Spartan 458",
  [0x13] = "Brad Wong",
  [0x14] = "Christie",
  [0x15] = "Hitomi",
  [0x16] = "Real Time Movie",
  [0x17] = "?? 23 ??",
  [0x18] = "Bayman",
}

-- colors (BGR in CE)
local COLOR = {
  text     = 0xEAEAEA,
  p1       = 0xDCDCDC,
  p2       = 0xDCDCDC,
  neutral  = 0x808080,  -- ACT_STATE 0
  critical = 0x00A000, -- green-ish (since Holds are avaialble to the player)
  stun     = 0x0000FF,  -- red-ish (for stun-lock)
}

-- which ACT_STATE values count as "stun" for coloring
local STUN_STATES = { [0x07]=true,[0x08]=false,[0x09]=true,[0x0F]=true }

-- ───── helpers ───────────────────────────────────────────────────────────────
local function A(a) return tonumber(a) or getAddressSafe(a) end

local function read_u8(addr)
  local t = readBytes(addr, 1, true)
  return t and t[1] or nil
end

-- helpers
local function write_u8(addr, v) writeBytes(addr, v & 0xFF) end
local function read_u8_safe(addr) local t=readBytes(addr,1,true); return t and t[1] or 0 end
local function flip_mancom(addr) write_u8(addr, (read_u8_safe(addr)==0) and 1 or 0) end

-- helpers
local function read_flag(addr)
  if not addr then return nil end
  local t = readBytes(addr,1,true); return t and t[1] or 0
end

local function write_flag(addr, v)
  if addr then writeBytes(addr, (v and 1 or 0)) end
end

local function toggle_flag(addr)
  if not addr then return end
  local v = read_flag(addr)
  write_flag(addr, (v==0) and 1 or 0)
end

local function flag_caption(v, names)  -- names optional: {"OFF","ON"}
  names = names or {"OFF","ON"}
  return names[(v==1) and 2 or 1]
end


-- pretty strings/colors
local function manStr(v) return (v==1) and "Human" or "Computer" end
local function manColor(v) return (v==1) and 0x00A000 or 0x808080 end  -- BGR in C

-- CT uses “2 Byte Big Endian”; assemble big-endian manually
local function read_u16_be(addr)
  local t = readBytes(addr, 2, true)
  if not t or not t[1] or not t[2] then return nil end
  return (t[1] << 8) | t[2]
end

local function hex8(n)  return string.format("0x%02X", (n or 0) & 0xFF) end
local function hex16(n) return string.format("0x%04X", (n or 0) & 0xFFFF) end

local function fmtManCom(v) return string.format("%s (%d)", MANCOM[v] or "?", v or -1) end
local function fmtChar(v)   return string.format("%s%s", hex8(v), CHAR_NAME[v] and (" - "..CHAR_NAME[v]) or "") end
local function fmtHP(v)     return tostring(v or 0) end
local function fmtAnime(v)  return hex16(v) end
local function fmtActCode(v)return hex16(v) end
local function fmtActFlag(v)return hex16(v) end
local function fmtActReq(v) return hex8(v) end
local function fmtActState(v)
  return string.format("%s", ACT_STATE[v] or (hex8(v).." - <unknown>"))
end

local function colorForState(v)
  if v == 0x08 then return COLOR.critical end
  if v == 0x00 then return COLOR.neutral end
  if STUN_STATES[v] then return COLOR.stun end
  return COLOR.text
end

-- ───── UI layout ────────────────────────────────────────────────────────────
local fields = {
  { key="MAN_COM",   label="MAN_COM",  read=read_u8,     fmt=fmtManCom },
  { key="CHAR_NUM",  label="CHAR_NUM",                   read=read_u8,     fmt=fmtChar   },
  { key="HIT_POINT", label="HIT_POINT",                  read=read_u16_be, fmt=fmtHP     },
  { key="ANIME",     label="ANIME",                      read=read_u16_be, fmt=fmtAnime  },
  { key="ACT_CODE",  label="ACT_CODE",                   read=read_u16_be, fmt=fmtActCode},
  { key="ACT_FLAG",  label="ACT_FLAG",                   read=read_u16_be, fmt=fmtActFlag},
  { key="ACT_REQ",   label="ACT_REQ",                    read=read_u8,     fmt=fmtActReq },
  { key="ACT_STATE", label="ACT_STATE",                  read=read_u8,     fmt=fmtActState},
}

-- Resolve addresses up front
for side, bag in pairs(ADDR) do
  for k, v in pairs(bag) do ADDR[side][k] = A(v) end
end

-- Build form
local form = createForm(false)
form.Caption = "DOA4 — Live Player Stats"
form.Width  = 720
form.Height = 40 + (#fields+1)*28
form.Position = "poScreenCenter"

-- Headers
local h_field = createLabel(form); h_field.Caption = "Field";   h_field.Left=12;  h_field.Top=10;  h_field.Width=260; h_field.Font.Style="fsBold"
local h_p1    = createLabel(form); h_p1.Caption    = "Player 1";h_p1.Left=280; h_p1.Top=10; h_p1.Width=200; h_p1.Font.Style="fsBold"
local h_p2    = createLabel(form); h_p2.Caption    = "Player 2";h_p2.Left=500; h_p2.Top=10; h_p2.Width=200; h_p2.Font.Style="fsBold"

-- Rows (one label for field name, and two value labels)
local rows = {}
for i, f in ipairs(fields) do
  local y = 10 + i*26
  local lf = createLabel(form); lf.Left=12;  lf.Top=y; lf.Width=260; lf.Caption=f.label
  local l1 = createLabel(form); l1.Left=280; l1.Top=y; l1.Width=200; l1.Caption="…"
  local l2 = createLabel(form); l2.Left=500; l2.Top=y; l2.Width=200; l2.Caption="…"
  rows[i] = { field=f, lf=lf, l1=l1, l2=l2 }
end

-- Timer update
local t = createTimer(form); t.Interval = 160
t.OnTimer = function()
  for _, r in ipairs(rows) do
    local f = r.field
    local p1v = f.read(ADDR.P1[f.key])
    local p2v = f.read(ADDR.P2[f.key])

    r.l1.Caption = p1v and f.fmt(p1v) or "<read fail>"
    r.l2.Caption = p2v and f.fmt(p2v) or "<read fail>"

    -- special coloring for ACT_STATE
    if f.key == "ACT_STATE" then
      r.l1.Font.Color = colorForState(p1v or 0)
      r.l2.Font.Color = colorForState(p2v or 0)
    else
      r.l1.Font.Color = COLOR.text
      r.l2.Font.Color = COLOR.text
    end
  end
end

-- UI: buttons under headers
local btnP1 = createButton(form)
btnP1.Left, btnP1.Top, btnP1.Width, btnP1.Height = 280, 36, 130, 22
btnP1.OnClick = function()
  flip_mancom(ADDR.P1.MAN_COM)
  -- refresh caption immediately after write
  local v = read_u8_safe(ADDR.P1.MAN_COM)
  btnP1.Caption   = ("P1: %s (toggle)"):format(manStr(v))
  btnP1.Font.Color = manColor(v)
end

local btnP2 = createButton(form)
btnP2.Left, btnP2.Top, btnP2.Width, btnP2.Height = 500, 36, 130, 22
btnP2.OnClick = function()
  flip_mancom(ADDR.P2.MAN_COM)
  local v = read_u8_safe(ADDR.P2.MAN_COM)
  btnP2.Caption   = ("P2: %s (toggle)"):format(manStr(v))
  btnP2.Font.Color = manColor(v)
end

-- UI: disp buttons
-- label, key in ADDR.DISP, optional custom ON/OFF names, optional invert
local DISP_BUTTONS = {
  { label="Stage",     key="STAGE_DISP", names={"{HIDE","SHOW"}, },
  { label="Player 1",  key="CHAR_DISP_P1", names={"HIDE","SHOW"}, },
  { label="Player 2",  key="CHAR_DISP_P2", names={"HIDE","SHOW"}, },
  { label="Lifebar",    key="FIX_DISP", names={"ON","OFF"},}, -- leave works even if nil (will show N/A)
  { label="Game Rule", key="GAME_RULE",  names={"ON","OFF"}, invert=true }, -- example names
  { label="Timer",     key="TIMER_ONOFF", names={"ON","OFF"} },             -- adapt if inverted
}

-- layout row for these buttons
local dispY = 0  -- vertical position
local xStart, btnW, btnH, gap = 80, 110, 22, 6

-- "Display Flags" header
local lblDisp = createLabel(form)
lblDisp.Caption = "Display Flags"
lblDisp.Left, lblDisp.Top, lblDisp.Width = 12, dispY+3, 260
lblDisp.Font.Style = "fsBold"

-- keep handles so we can update captions every tick
local dispBtns = {}

local function makeDispButton(ix, spec)
  local addr = ADDR.DISP[spec.key]  -- numeric (or nil if not set yet)
  local btn = createButton(form)
  btn.Left  = xStart + (ix-1)*(btnW+gap)
  btn.Top   = dispY
  btn.Width = btnW
  btn.Height= btnH
  btn.Caption = spec.label..": …"
  btn.Enabled = (addr ~= nil)
  btn.OnClick = function()
    if addr then toggle_flag(addr) end
  end
  dispBtns[ix] = {btn=btn, addr=addr, names=spec.names, invert=spec.invert}
end

for i, spec in ipairs(DISP_BUTTONS) do
  makeDispButton(i, spec)
end

-- make more space for the button row
form.Height = form.Height + (dispY + btnH + 8 - 40)

-- updater for button captions/colors
local function updateMancomButtons()
  local v1 = read_u8_safe(ADDR.P1.MAN_COM)
  local v2 = read_u8_safe(ADDR.P2.MAN_COM)
  btnP1.Caption    = ("P1: %s (toggle)"):format(manStr(v1))
  btnP1.Font.Color = manColor(v1)
  btnP2.Caption    = ("P2: %s (toggle)"):format(manStr(v2))
  btnP2.Font.Color = manColor(v2)
end

--update DISP captions each tick
local function updateDispButtons()
  for _, b in ipairs(dispBtns) do
    if b.addr then
      local v = read_flag(b.addr)
      if b.invert then v = (v==0) and 1 or 0 end
      b.btn.Caption = string.format("%s: %s", b.btn.Caption:match("^[^:]+"), flag_caption(v, b.names))
      b.btn.Enabled = true
    else
      b.btn.Caption = string.format("%s: N/A", b.btn.Caption:match("^[^:]+"))
      b.btn.Enabled = false
    end
  end
end


-- call once now
updateMancomButtons()
updateDispButtons()

form.OnClose = function()
  t.destroy()
end

form.show()
-- ============================================================================
