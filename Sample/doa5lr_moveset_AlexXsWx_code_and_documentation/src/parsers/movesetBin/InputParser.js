InputParser = (function(){

class InputParser {
    
}

InputParser.COMMAND_SUCCESS = "27"; // hex

InputParser.readInput = readInput;
InputParser.parsedDataToString = parsedDataToString;
InputParser.parseCommand = parseCommand;
InputParser.resultsInMoveId = resultsInMoveId;
InputParser.getResultingMoveId = getResultingMoveId;
InputParser.mentionsButton = mentionsButton;

//

function resultsInMoveId(rawAobStr, moveIdAsAobStr) {
    const resultsInMoveId = getResultingMoveId(rawAobStr);
    if (resultsInMoveId) {
        return resultsInMoveId.dehexUint === moveIdAsAobStr.dehexUint;
    }
    // TODO: throw / report error?
    return false;
}

function getResultingMoveId(rawAobStr) {
    const formatted = readInput(rawAobStr).result.value;
    if (
        formatted.length > 0 &&
        formatted[0].command === InputParser.COMMAND_SUCCESS
    ) {
        return formatted[0].args;
    }
    return null;
}

function mentionsButton(rawAobStr, buttonStr) {
    const formatted = readInput(rawAobStr).result.value;
    return formatted.some(entry => {
        const p = parseCommand(entry);
        return p.type === "button" && p.button === buttonStr;
    });
}

function readInput(arg0, optPtrEnd = 0, getByteAt) {
    if (arg0 instanceof Uint8Array || Array.isArray(arg0)) {
        const array = arg0;
        return readInput(array.length - 1, 0, pos => array[pos]);
    }
    if (typeof arg0 === "string") {
        const array = arg0.dehexUintAob;
        return readInput(array.length - 1, 0, pos => array[pos]);
    }
    if (typeof arg0 !== "number") throw new Error("Invalid argument");
    const ptrStart = arg0;

    const argsPerCommand = {};

    // INVALID
    // sarahs's lists 9 and 65 includes 2 entries
    // pai's    lists 9 and 66 includes 2 entries
    argsPerCommand[0xF1] = -1;

    argsPerCommand[0x00] = 1; // max time?
    argsPerCommand[0x01] = 1; // idk
    argsPerCommand[0x02] = 2; // press? (0x02 = punch, 0x04 = kick, 0x05 = h+k)
    argsPerCommand[0x03] = 2;
    argsPerCommand[0x04] = 2; // movement state?.. / held down?
    argsPerCommand[0x05] = 2; // idk, but one of rig's throws has it: B4 1F 27 10 00 05 01 00 03 06
    argsPerCommand[0x06] = 1; // simple press (not for movement) arg: 0x01 = H, 0x02 = P, 0x03 = T, 0x04 = K, 0x05 = H+K, 0x06 = P+K, 0x07 = S/Ap
    argsPerCommand[0x07] = 2;
    argsPerCommand[0x08] = 1;
    argsPerCommand[0x09] = 1; // subsequent press?..
    argsPerCommand[0x0A] = 1;
    argsPerCommand[0x0B] = 1; // first press?..
    argsPerCommand[0x0C] = 1;

    // rig has it in 33k and 33h+k / 33(h+k) (meter and no meter)
    argsPerCommand[0x0D] = 2;

    // FIXME: confirm; this seem to be only mentioned in unlisted part of the generic movelist
    argsPerCommand[0x0E] = 2;

    argsPerCommand[0x0F] = 1;

    // rig has it for post-charge and post-nocharge part of moves
    argsPerCommand[0x10] = 2; // idk

    argsPerCommand[0x12] = 2; // followup to... ?
    argsPerCommand[0x13] = 2; // followup to... ?
    argsPerCommand[0x14] = 2; // followup to... ?
    argsPerCommand[0x15] = 2;
    argsPerCommand[0x16] = 2; // something simple; checks attacker's word vs argument (maybe running or running + crouch?)
    argsPerCommand[0x17] = 2; // throw break?

    // maybe BT check? but gotta be more than just this
    argsPerCommand[0x19] = 0; // TODO: needs a confirmation, 0 is only what it looks like from the data

    // ground attacks and shitty version of P (tag switch / tag ground attack?)
    argsPerCommand[0x1A] = 0; // grounded / juggled?

    argsPerCommand[0x1B] = 0; // idk but 3p from default movelist uses it?

    argsPerCommand[0x1C] = 0; // similar to last part of 0x14?..

    // mostly mentioned in post-no-charge/post-charge moves
    // but also for rig's tlc kk
    argsPerCommand[0x1E] = 2; // idk

    argsPerCommand[0x1F] = 1;
    argsPerCommand[0x20] = 1; // lisa running attacks seem to trigger this
    argsPerCommand[0x21] = 1; // lisa running attacks seem to trigger this

    // Legacy, does nothing (always succeeds)
    argsPerCommand[0x26] = 0;
    argsPerCommand[0x27] = 2; // success
    argsPerCommand[0x28] = 0; // front-facing check?.. canceling move?..

    argsPerCommand[0x2A] = 0;
    argsPerCommand[0x2B] = 2;
    argsPerCommand[0x2C] = 1; // e.g. sometimes during hayabusa 2p+k p+kpp 2684t with ceiling // similar to 0x1C?

    argsPerCommand[0x2E] = 0; // something simple; perhaps attacker or defender's byte check (airborne)?

    // rig only has it for a weird throw (tag throw?)
    argsPerCommand[0x30] = 0; // e.g. Rig's S

    argsPerCommand[0x32] = 0; // unique tag throws maybe?.. (e.g. leon + bass 46S)
    argsPerCommand[0x33] = 0; // maybe genfu hat check for emote?
    argsPerCommand[0x34] = 0; // passes for tengu+eliot 46S (or 66S?..)
    argsPerCommand[0x35] = 3; // e.g. Akira's 9H ~ P
    argsPerCommand[0x36] = 3; // hayabusa legacy stuff, maybe has something to do with distance to opponent
    argsPerCommand[0x37] = 0;

    argsPerCommand[0x3F] = 1; // something simple; checks attacker or defender's byte vs argument
    argsPerCommand[0x40] = 0; // resets 2 flags of attacker?

    argsPerCommand[0x42] = 1; // legacy, does nothing
    argsPerCommand[0x43] = 0;
    argsPerCommand[0x44] = 0; // sarah's flamingo 3h+k t triggers it but doesn't pass

    // rig only has this in S? (shitty version of P)
    argsPerCommand[0x45] = 0;

    // rig only has this in sidesteps as up/down + S
    argsPerCommand[0x46] = 1; // idk; scramble, rig vs crumple stun 33K: 2D 01 27 00 46 50 10 0D 00 00 04 0C 00 50 10 0D 28 (on scramble stage)
    
    // rig only has it for pb variants of 1p+k (pb)
    argsPerCommand[0x47] = 0;  // TODO: needs a confirmation, 0 is only what it looks like from the data

    // rig only has it for non-pb variants of 1p+k (pb)
    argsPerCommand[0x48] = 0;  // TODO: needs a confirmation, 0 is only what it looks like from the data

    argsPerCommand[0x4A] = 1; // akira +h+k-h?

    // rig only has it for super launcher (when low on health)
    argsPerCommand[0x4B] = 0;  // TODO: needs a confirmation, 0 is only what it looks like from the data

    // rig only has it in taunts using S (464S and 646S)
    argsPerCommand[0x4C] = 1;  // TODO: needs a confirmation, 1 is only what it looks like from the data

    argsPerCommand[0x4D] = 0; // something to do with tag?

    //

    // value format:
    // 3 spaces after every command byte
    // 2 spaces between command and its args
    // 1 space between args
    let bytes = "";

    let ptr = ptrStart;

    let limit = 64;

    let err = null;

    while (true) {
        limit = limit - 1;
        if (limit < 0) {
            err = "too long";
            break;
        }
        if (optPtrEnd !== undefined && ptr < optPtrEnd) {
            err = "exceed limit";
            break;
        }
        const byte = readBytes(ptr, 1);
        let str = toHexStr(byte, true);
        ptr -= 1;

        if (argsPerCommand[byte] !== undefined && argsPerCommand[byte] >= 0) {
            if (argsPerCommand[byte] > 0) {
                str = " " + str;
                for (let i = 0; i < argsPerCommand[byte]; i += 1) {
                    str = toHexStr(readBytes(ptr), true) + " " + str;
                    ptr = ptr - 1;
                }
            }
        } else {
            if (argsPerCommand[byte] === -1) {
                err = "invalid command " + toHexStr(byte);
            } else {
                err = "unknown command " + toHexStr(byte);
            }
            bytes = str + "   " + bytes;
            break;
        }

        bytes = str + "   " + bytes;

        if (byte === 0x27) {
            break;
        }
    }

    const result = {};
    if (err !== null) {
        result.error = err;
    }
    result.value = formatRawCommand(bytes);

    return {
        size: ptrStart - ptr,
        result,
    };

    function readBytes(ptr, amount = 1) {
        if (amount !== 1) throw new Error("unexpected amount");
        return getByteAt(ptr);
    }

    function toHexStr(byte, optOmit0x) {
        const result = byte.asHexStr.padStart(2, "0");
        if (optOmit0x) return result;
        return `0x${result}`;
    }
}

//

function formatRawCommand(raw) {
    const chunks = raw.split("   ");
    if (chunks.length > 0 && !chunks[chunks.length - 1]) chunks.pop();
    const data = chunks.map(e => {
        const numberStrs = Array.from(e.split(/\s+/))
        const command = numberStrs.pop();
        const args = numberStrs.join(" ");
        return { command, args };
    });
    return data;
}

//

// parse movelist input requirement
function parsedDataToString(data, optGetStanceName, optGetMoveName) {

    let buttons = [];
    let containsUnknown = false;
    const stances = [];
    let backturned = false;
    let continuation = false;
    const simplePrefixes = [];

    const prefixes = [];
    const str = data.map(entry => {
        const result = parseCommand(entry, optGetStanceName, optGetMoveName);
        if (result.type === "button") {
            if (result.button !== "_") buttons.push(result.button);
            const parser = parseInt(entry.command, 16).asHexStr;
            return `${result.button}{${parser}}`;
        } else
        if (result.type === "prefix") {
            const prefix = `<${result.prefix.join(" ")}>`;
            if (result.prefix[0] === "during") continuation = true;
            else if (result.prefix[0] === "stance") stances.push(result.prefix[1]);
            else if (result.prefix[0] === "bt") backturned = true;
            else simplePrefixes.push(prefix);
            if (!prefixes.includes(prefix)) {
                prefixes.push(prefix);
            }
            return "";
        } else
        if (result.type === "str") {
            return result.str;
        } else
        if (result.type === "unknown") {
            containsUnknown = true;
            return result.str;
        } else 
        if (result.type === "ignore" || result.type === "result") {
            return "";
        }
        throw new Error("invalid type " + result.type);
    }).filter(Boolean);

    // TODO: 
    // <during, stance> -> simplified from parents joined by "/"

    let simplified = "";
    if (stances.length > 0 && stances.length !== 1) containsUnknown = true;
    if (simplePrefixes.some((e, i, a) => a.indexOf(e) !== i)) containsUnknown = true;
    if (containsUnknown) simplified = "? ";
    if (simplePrefixes.length > 0) {
        simplified += `${simplePrefixes.filterUnique().join(" ")} `;
    }
    if (stances.length === 1) {
        simplified += ` <stance ${stances[0]}> `;
    }
    if (continuation) simplified += "... ";
    if (backturned) buttons = buttons.map(e => reverseDirection(e));
    simplified += buttons.join("");

    return {
        simplified,
        complex: [...prefixes, ...str].join(" "),
    };
}

function reverseDirection(directionStr) {
    return ({
        "7": "9",
        "9": "7",
        "4": "6",
        "6": "4",
        "1": "3",
        "3": "1",
    }[directionStr] ?? directionStr);
}

//

function parseCommand(commandEntry, optGetStanceName, optGetMoveName) {
    const { command, args } = commandEntry;
    const raw = `${args} ${command}`;

    if (command === "1F") {
        const stanceName = optGetStanceName?.(args) || `0x${args}`;
        return { type: "prefix", prefix: ["stance", `"${stanceName}"`] };
    }
    if (command === "19") {
        return { type: "prefix", prefix: ["bt"] };
    }
    if (command === "45") {
        return { type: "prefix", prefix: ["tag"] };
    }
    if (command === "1A") {
        return { type: "prefix", prefix: ["juggle/ground"] };
    }
    if (["12", "13", "14"].includes(command)) {
        const moveId = args;
        const moveName = optGetMoveName?.(moveId) || moveId;
        return {
            type: "prefix",
            prefix: ["during", `"${moveName}"`],
        };
    }
    if (command === "47") {
        return { type: "prefix", prefix: ["can pb"] };
    }
    if (command === "48") {
        return { type: "prefix", prefix: ["can't pb"] };
    }

    if (command === "00") {
        return { type: "str", str: `^${Number("0x" + args)}f` };
        // return { type: "ignore" };
    }

    if (
        // legacy
        ["26", "42"].includes(command)
    ) {
        return { type: "ignore" };
    }

    if (command === InputParser.COMMAND_SUCCESS) {
        return { type: "result", result: args };
    }

    const buttonParser = {
        "02": {
            edgeCases: { "00 01 02": "Ap" },
            canAcceptEmpty: true,
            buttons: true,
            movementBasic: true,
            movementDiagonal: true,
        },
        "03": {
            canAcceptEmpty: false,
            buttons: false,
            movementBasic: true,
            movementDiagonal: false,
        },
        "04": {
            canAcceptEmpty: true,
            buttons: false,
            movementBasic: true,
            movementDiagonal: true,
        },
        "05": {
            canAcceptEmpty: false,
            buttons: false,
            movementBasic: true,
            movementDiagonal: false,
        },
        "06": {
            edgeCases: { "0D 06": "H+K" },
            canAcceptEmpty: false,
            buttons: true,
            movementBasic: true,
            movementDiagonal: true,
        },
        "09": {
            canAcceptEmpty: false,
            buttons: false,
            movementBasic: true,
            movementDiagonal: true,
        },
        "0B": {
            canAcceptEmpty: true,
            buttons: false,
            movementBasic: true,
            movementDiagonal: true,
        },
        "0F": {
            canAcceptEmpty: false,
            buttons: false,
            movementBasic: false,
            movementDiagonal: true,
        }
    }[command];

    if (buttonParser) {
        let button = buttonParser.edgeCases?.[raw];

        if (!button) {
            const bytes = args.split(" ");
            if (bytes.length === 1 || bytes[1] === "00")  {
                const low = bytes[0];
                if (low === "00") {
                    if (buttonParser.canAcceptEmpty) {
                        button = "_";
                    } else {
                        // "return"
                    }
                } else {
                    button = (
                        buttonParser.buttons          && bitsToButton(low)        ||
                        buttonParser.movementBasic    && bitsToMovementBasic(low) ||
                        buttonParser.movementDiagonal && bitsToMovementDiagonal(low)
                    ) || undefined;
                }
            }
        }

        if (button) {
            return {
                type: "button",
                button: button,
            };
        }
    }

    return {
        type: "unknown",
        str: "<?" + [args, command].join(" ").trim() + "?>",
    };

}

function bitsToButton(bitsStr) {
    return {
        "01": "H",
        "02": "P",
        "03": "T",
        "04": "K",
        "05": "H+K",
        "06": "P+K",
        "07": "S",
    }[bitsStr];
}

function bitsToMovementBasic(bitsStr) {
    return {
        "10": "2",
        "20": "8",
        "40": "6",
        "80": "4",
    }[bitsStr];
}

function bitsToMovementDiagonal(bitsStr) {
    return {
        "50": "3",
        "60": "9",
        "90": "1",
        "A0": "7",
    }[bitsStr];
}

//

return InputParser;

}());
