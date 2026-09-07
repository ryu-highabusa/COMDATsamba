fsTools.createFilesReceiver(async files => {
    for (const file of files) {
        console.log(
            await getNames({
                gameExeArrayBuffer: await file.arrayBuffer(),
                // FIXME: this shouldn't be hardcoded
                from: 0x55f85,
                to: 0x18be88,
            }),
        );
    }
});

setTimeout(() => {
    // Note: not .exe itself, but the .rdata from unpacked .exe (e.g. with 7zip)
    console.log("Ready to parse game.exe/.rdata (v1.02a steam)");
});

// Returns mapping like "2D1J_A1FN1A1[]91I1A31104N{L1" => "patch_02_catalog"
function getNames({ gameExeArrayBuffer, from, to }) {
    const data = new Uint8Array(gameExeArrayBuffer, from, to - from);
    let pos = 0;
    return main();
    function main() {
        const unencrypredNameRgx = /[a-z]/;
        const names = Object.create(null);
        while (pos < data.length) {
            const encryptedName = readString();
            const fileName = readString();
            if (fileName !== "NO_LINK") {
                // For 1.02a, this pauses here 4 times
                if (unencrypredNameRgx.test(encryptedName)) debugger;
                if (!unencrypredNameRgx.test(fileName)) debugger;
            }
            if (!names[fileName]) names[fileName] = [encryptedName];
            else names[fileName].push(encryptedName);
        }
        return names;
    }
    function readString() {
        let result = '';
        while (pos < data.length) {
            const byte = data[pos++];
            if (byte === 0) break;
            result += String.fromCharCode(byte);
        }
        while (pos < data.length && data[pos] === 0) pos += 1;
        return result;
    }
}
