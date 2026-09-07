fsTools.createFilesReceiver(async files => {
  for (const file of files) {
      console.log(
          await exportBookmarks(file),
      );
  }
});

setTimeout(() => {
    console.log("Ready to parse Hexworkshop bookmarks (*.hbk)");
});

async function exportBookmarks(file) {

    const manager = createStructureManager();
    manager.declare("char", manager.createIntReader(1));
    manager.declare("BYTE", manager.createIntReader(1));
    manager.declare("WORD", manager.createIntReader(2));
    manager.declare("DWORD", manager.createIntReader(4));
    manager.declare("UQUAD", manager.createIntReader(8));
    manager.declare("HEADERFLAGS", [["DWORD", "bitField"]]);
    manager.declare("ENTRYFLAGS", [["DWORD", "bitField"]]);
    manager.declare("DATATYPE", manager.createIntReader(4));
    manager.declare("HEADER", [
        ["DWORD",       "dwMagicID"],
        ["WORD",        "dwMajorVersion"],
        ["WORD",        "dwMinorVersion"],
        ["char",        "szDescription", 80],
        ["char",        "szAuthor", 80],
        ["HEADERFLAGS", "flags"],
        ["DWORD",       "dwEntries"],
        ["char",        "szStructureCollection", 256],
        ["char",        "cReserved", 12],
        ["DWORD",       "dwChecksum"],
    ]);
    manager.declare("ENTRY", [
        ["char",       "szDescription", 80],
        ["char",       "szAddressRule", 128],
        ["char",       "szLengthRule", 128],
        ["char",       "szCountRule", 128] ,
        ["DATATYPE",   "dataType"],
        ["BYTE",       "bSign"],
        ["BYTE",       "bByteOrdering"],
        ["BYTE",       "bBase"],
        ["char",       "szStructure", 128],
        ["UQUAD",      "findPos"],
        ["UQUAD",      "findLength"],
        ["char",       "cReserved", 37],
        ["ENTRYFLAGS", "flags"],
    ]);

    const uint8Array = new Uint8Array(await file.arrayBuffer());

    const { size, value: header } = manager.read(uint8Array, 0, "HEADER");
    let pos = size;

    const entries = [];
    for (let i = 0; i < header.dwEntries; i += 1) {
        const { size, value } = manager.read(uint8Array, pos, "ENTRY");
        entries.push(value);
        pos += size;
    }

    return {
        header,
        entries,
    };

    function createStructureManager() {
        const db = Object.create(null);
        return {
            declare,
            read,
            createIntReader: bytes => {
                return (uint8Array, pos) => {
                    let value = 0;
                    for (let i = 0; i < bytes; i += 1) {
                        value |= (uint8Array[pos + i] << (8 * i));
                    }
                    return {
                        value,
                        size: bytes,
                    };
                };
            },
        };
        function declare(type, stuctureOrFn) {
            if (db[type]) console.warn(`Overwriting ${type}`);
            db[type] = stuctureOrFn;
        }
        function read(uint8Array, pos, type) {
            const data = db[type];
            if (!data) throw new Error(`Unknown type "${type}"`);
            if (typeof data === "function") return data(uint8Array, pos);
            return parseStructure(uint8Array, pos, data);
        }
        function parseStructure(uint8Array, posStart, structureData) {
            const result = {};
            let pos = posStart;
            for (const entry of structureData) {
                const [type, name, elementsCount] = entry;
                const { size, value } = readType(uint8Array, pos, type, elementsCount);
                result[name] = value;
                pos += size;
            }
            return {
                size: pos - posStart,
                value: result,
            };
        }
        function readType(uint8Array, posStart, type, elementsCount) {
            if (elementsCount === undefined) {
                return read(uint8Array, posStart, type);
            }
            const result = [];
            let pos = posStart;
            for (let i = 0; i < elementsCount; i += 1) {
                const { size, value } = read(uint8Array, pos, type);
                result.push(value);
                pos += size;
            }
            return {
                size: pos - posStart,
                value: type === "char" ? tryConvertToZString(result) : result,
            };
            function tryConvertToZString(array) {
                let result = "";
                for (let i = 0; i < array.length; i += 1) {
                    if (array[i] === 0) {
                        for (let j = i + 1; j < array.length; j += 1) {
                            if (array[j] !== 0) return array;
                        }
                        break;
                    }
                    result += String.fromCharCode(array[i]);
                }
                return result;
            }
        }
    }
}
