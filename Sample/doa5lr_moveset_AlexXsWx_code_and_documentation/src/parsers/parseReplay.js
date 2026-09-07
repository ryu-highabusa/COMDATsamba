fsTools.createFilesReceiver(async files => {
    for (const file of files) {
        console.log(
            await replayTools.parseReplay(file),
        );
    }
});

setTimeout(() => {
    console.log("replayTools =", window.replayTools);
    console.log("Ready to parse replay files");
});

window.replayTools = (function(){

return {
    parseReplay,
    repack,
    validateRepeatingPattern,
};

/*
file format:
[0xBF]
...
E7 C5 A3 81 6F 4D 2B 09 // aka 0x81A3C5E7, 0x092B4D6F
<EOF>
*/

/*
unpacked file format:
...
0x0C-0x0D: frames count? (/60 = replay duration in seconds, from the summary)
0x18-0x1C: random seed
0x28-0x1C: ???
*/

//

// Validate section of replay file
// align: 17 bytes
// 0x00 then 8 x low/high bytes where high is 0x?F and low is increased by 0x12 (overflow in high >> 4)
// somewhere before that is a header "e5 07 02 29 00 14 00 09" (a date of match start in some form or part of it?)
// between those two there is a section that ends with 0xFD?

// Tested on replays:
// P1 rig default vs P2 rig worker on training map / 30s, winning = where he looks over shoulder in the end
// replays 1-4 noone moves
// replays 5-6 punch from 19.99s to 9.99s
// replay 7 spam block

function validateRepeatingPattern(arrayBuffer, position) {
    const tmp = new Uint8Array(arrayBuffer).slice(position);
    let length = tmp.byteLength || tmp.length || 0;
    let i = 0;
    let lastN = undefined;
    while (i < length) {
        if (i >= length) break;
        if (tmp[i++] !== 0) throw new Error("not 0");
        for (let k = 0; k < 8; k += 1) {
            if (i >= length) break;
            const nLow = tmp[i++];
            if (i >= length) break;
            const nHigh = tmp[i++];
            if ((nHigh & 0x0F) !== 0x0F) throw new Error("not 0x?F");
            const n = ((nHigh >> 4) << 8) + nLow;
            if (
                lastN !== undefined &&
                ((lastN + 0x12) & 0xFFF) !== n
            ) {
                throw new Error("unexpected increment");
            }
            lastN = n;
        }
    }
    return `everything as expected ${i}/${tmp.length}`;
}

//

async function parseReplay(file) {

    // return await debug(file);
    return main(await file.arrayBuffer());

    async function debug(file) {

        const arrayBuffer = await file.arrayBuffer();

        const result = [];

        const effectiveSize = findEOFMagic(arrayBuffer);
        const { readByte, getFilePos } = createReadByte(arrayBuffer, effectiveSize, () => -1);
        (function(){
            debugger;
            while (true) {
                const byte = readByte().toString(16);
                if (byte === "-1") return;
                for (let i = 0; i < 8; i += 1) {
                    const low = readByte().toString(16);
                    if (low === "-1") return;
                    result.push(low);
                    if ((parseInt(byte, 16) & (1 << i)) === 0) {
                        const high = readByte().toString(16);
                        if (high !== "-1") {
                            result.push(high);
                        } else {
                            // throw new Error("Unexpected EOF @ 0x" + getFilePos().toString(16));
                        }
                    }
                }
            }
        }());

        fsTools.saveAs(
            new Uint8Array(result.map(e => parseInt(e, 16))),
            `CONVERTED_${file.name}`,
        );

        return result;
    }

    function main(arrayBuffer) {
        const effectiveSize = findEOFMagic(arrayBuffer);

        const dest = [];
        const destMaxSize = Infinity; // 0x2d400; // Where does this come from?..
        let destAllocs = 0;

        let ebx = 0xFEE;
        const dest2 = [];

        const debugAddrs = [];
        let debugDest2Overwrites = 0;

        const { getFilePos, readByte } = createReadByte(
            arrayBuffer,
            effectiveSize,
            () => { throw new Error("EOF") },
        );

        let bytesToReadStuff = 0;

        try {
            while (true) {
                bytesToReadStuff >>= 1;
                if ((bytesToReadStuff & 0x0100) === 0) {
                    bytesToReadStuff = readByte() | 0xFF00;
                }

                if ((bytesToReadStuff & 0x01) !== 0) {
                    const byte = readByte();

                    if (dest.length < destMaxSize - 1) {
                        dest.push(byte);
                    }
                    else if (++destAllocs > 3) throw new Error("out of destAllocs");

                    if (dest2[ebx] !== undefined) debugDest2Overwrites += 1;
                    dest2[ebx] = byte;
                    ebx = (ebx + 1) & 0xFFF;
                } else {
                    const byteLow  = readByte();
                    const byteHigh = readByte();

                    let ebpMinus8 = ((byteHigh & 0xF0) << 4) | byteLow; // 
                    let ebpMinusC =  (byteHigh & 0x0F) + 2;             // bytesToRead? (minus 1)

                    let edi = 0;
                    do {
                        let edx = ebpMinus8; // from end of loop
                        edx = (edx + edi) & 0xFFF;

                        if (dest2[edx] === undefined) {
                            debugAddrs.push({
                                pos: getFilePos() - 2,
                                bytes: [byteLow, byteHigh].map(
                                    e => e.toString(16).toUpperCase().padStart(2, "0")
                                ).join(" "),
                                dest2Addr: edx.toString(16).toUpperCase(),
                            });
                        }
                        const eax = dest2[edx] || 0;

                        if (dest.length < destMaxSize - 1) {
                            dest.push(eax);
                        }
                        else if (++destAllocs > 3) throw new Error("out of destAllocs");

                        if (dest2[ebx] !== undefined) debugDest2Overwrites += 1;
                        dest2[ebx] = eax;
                        ebx = (ebx + 1) & 0xFFF;

                        edi += 1;
                    } while (edi <= ebpMinusC);
                }
            }
        } catch (error) {
            if (error.message !== "EOF") throw error;
        }

        return {
            effectiveSize,
            unpacked: dest,
            dest2,
            debugAddrs,
            debugDest2Overwrites,
            get saveUnpackedAsFile() {
                fsTools.saveAs(
                    new Uint8Array(dest),
                    `UNPACKED_${file.name}`,
                );
            },
        };
    }

    function findEOFMagic(arrayBuffer) {
        if (arrayBuffer.byteLength < 8) throw new Error("file too small");

        for (let i = 0; i <= arrayBuffer.byteLength - 8; i += 1) {
            if (new Uint8Array(arrayBuffer, i, 8).asAobStr === "E7 C5 A3 81 6F 4D 2B 09") {
                return i;
            }
        }

        throw new Error("EOF magic not found");
    }

    function createReadByte(arrayBuffer, effectiveSize, onEOF) {
        let filePos = 0;
        return { getFilePos: () => filePos, readByte };
        function readByte() {
            if (filePos >= effectiveSize) return onEOF();
            return new Uint8Array(arrayBuffer, filePos++, 1)[0];
        }
    }
}

//

async function repack(unpackedReplayFile) {
    const endMagic = "E7 C5 A3 81 6F 4D 2B 09".split(" ").map(e => parseInt(e, 16));
    const arrayBuffer = new Uint8Array(await unpackedReplayFile.arrayBuffer());
    const result = new Uint8Array(
        arrayBuffer.length +
        Math.ceil(arrayBuffer.length / 8) +
        endMagic.length,
    );
    let resultPos = 0;
    for (let i = 0; i < arrayBuffer.length; i += 1) {
        if (i % 8 === 0) result[resultPos++] = 0xFF;
        result[resultPos++] = arrayBuffer[i];
    }
    for (let i = 0; i < endMagic.length; i += 1) {
        result[resultPos++] = endMagic[i];
    }
    fsTools.saveAs(
        result,
        unpackedReplayFile.name.split("UNPACKED_").join("REPACKED_"),
    );
}

}());