// requires related *.lnk and *.bin files already processed by fs parser

async function parseTxt(file) {

const txt = await file.text();

const myTemp = txt.trim().split(/\n\s*\n/).map(e => e.split("\n")).map(e => {
    const data = e.slice(2).map(d => {
        const entries = d.split(", ");
        const result = {};
        for (const entry of entries) {
            const chunks2 = entry.split(": ");
            const propName = chunks2[0].toLowerCase();
            const value = Number(chunks2[1].replaceAll(",", ""));
            result[propName] = value;
        }
        return result;
    });
    console.assert(isDataValid(data));
    return {
        character: e[0].trim(),
        path: e[1].trim(),
        offset: data[0].offset,
        length: data.reduce((acc, e) => acc + e.length, 0),
    };
    function isDataValid(data) {
        let offset = data[0].offset;
        for (let i = 0; i < data.length; i += 1) {
          if (data[i].offset !== offset) return false;
          offset += data[i].length;
        }
        return true;
    }
});

return {
    requiredFiles: myTemp.map(e => e.path).filterUnique().sortAscending().flatMap(
        path => [path, fsTools.replaceExtension(path, "bin")],
    ),
    // Just as reminder that this object has getters
    // Since chrome doesn't show getters in quick preview of an object
    "getters": "result",
    get result() {
        return myTemp.map((t, i) => {
            const match = getDbEntry(t.path)?.parsed.find(e => e.lnkOffset === t.offset);
            if (t.length !== match.size) {
                throw new Error("something went wrong");
            }

            return {
                character: t.character,
                t,
                get saveBinFile() {
                    let baseName = t.path.split(".");
                    baseName.pop();
                    baseName = baseName.join(".");

                    let binName = `${baseName}.bin`;

                    const lnkEntry = getDbEntry(t.path).parsed.find(e => e.lnkOffset === t.offset);
                    const index = getDbEntry(t.path).parsed.indexOf(lnkEntry);
                    const encryptedName = getDbEntry(binName).parsed.encryptedNames[index];

                    const saveFileName = [
                        i.toString().padStart(2, "0"),
                        t.character,
                        baseName,
                        index,
                        `${encryptedName}.bin`,
                    ].join("_");

                    const reader = fsTools.createFileReader(getDbEntry(t.path).file);

                    reader.readUint8Array(t.offset, t.length).then(uint8Array => {
                        console.assert(uint8Array.length === t.length);
                        reader.destroy();
                        fsTools.saveAs(uint8Array, saveFileName);
                    });
                },
            };
        });
    },
};

}
