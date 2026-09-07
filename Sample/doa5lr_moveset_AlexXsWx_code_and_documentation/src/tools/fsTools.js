fsTools = (function(){

const cleanups = [];
function createFilesReceiver(optProcessFiles) {
    for (const cleanup of cleanups.splice(0, cleanups.length)) cleanup();
    const droppedFiles = [];
    const onDragOver = event => {
        event.preventDefault();
        event.stopPropagation();
    };
    window.addEventListener("dragover", onDragOver);
    cleanups.push(() => window.removeEventListener("dragover", onDragOver));
    const onDrop = event => {
        event.preventDefault();
        event.stopPropagation();
        const files = Array.from(event.dataTransfer.items).map(e => e.getAsFile());
        droppedFiles.push(files);
        console.debug("== Dropped files ==");
        console.debug(files);
        console.debug("===================");
        optProcessFiles?.(files);
    };
    window.addEventListener("drop", onDrop);
    cleanups.push(() => window.removeEventListener("drop", onDrop));
    return { get droppedFiles() { return input.droppedFiles; } };
}

// TODO: stream out
function createFileReader(file) {
    let stream = null;
    let reader = null;
    let nextReadOffset = NaN;
    let lastReadOffset = NaN;
    let chunk = null;

    let working = false;

    return {
        readUint8Array,
        readHexStr,
        readUint,
        readInt32,
        readString,
        destroy,
    };
    async function readHexStr(offset, amount) {
        return (await readUint8Array(offset, amount)).asAobStr;
    }
    async function readUint(offset, amount) {
        return (await readUint8Array(offset, amount)).asAobStr.dehexUint;
    }
    async function readInt32(offset) {
        const chunk = await readUint8Array(offset, 4);
        return new Int32Array(chunk.buffer)[0];
    }
    async function readString(offset) {
        let result = "";
        let pos = offset;
        const succeed = await readChunks(offset, processChunk);
        if (!succeed) console.warn("something went wrong");
        return result;
        function processChunk(chunk, chunkStart) {
            if (pos >= chunkStart) {
                while (pos < chunkStart + chunk.length) {
                    const byte = chunk[pos - chunkStart];
                    if (byte === 0) return true;
                    result += String.fromCharCode(byte);
                    pos += 1;
                }
            }
            return false;
        }
    }
    async function readUint8Array(offset, amount) {
        const result = new Uint8Array(amount);
        let resultPos = 0;
        let pos = offset;
        const succeed = await readChunks(offset, processChunk);
        if (!succeed) console.warn("something went wrong");
        return result.subarray(0, resultPos);
        function processChunk(chunk, chunkStart) {
            if (pos >= chunkStart) {
                while (
                    pos < chunkStart + chunk.length &&
                    resultPos < amount
                ) {
                    result[resultPos++] = chunk[pos - chunkStart];
                    pos += 1;
                }
            }
            return resultPos >= amount;
        }
    }
    async function readChunks(offset, processChunk) {

        if (working) {
            console.warn("another read already in process");
            return;
        }

        working = true;

        let succeed = false;

        if (!isNaN(lastReadOffset) && offset >= lastReadOffset) {
            succeed = processChunk(chunk, lastReadOffset);
        } else {
            await destroy();
            stream = file.stream();
            reader = stream.getReader();
            nextReadOffset = 0;
        }
        while (!succeed) {
            const { done, value } = await reader.read();
            if (done) {
                await destroy(); // FIXME
                break;
            }
            lastReadOffset = nextReadOffset;
            chunk = value;
            nextReadOffset += chunk.length;

            succeed = processChunk(chunk, lastReadOffset);
        }

        working = false;

        return succeed;
    }
    async function destroy() {
        nextReadOffset = NaN;
        lastReadOffset = NaN;
        chunk = null;
        if (reader) {
            await reader.cancel().catch(error => console.error(error));
            try {
                // If chrome stops here (for each file), ignore it, it's a bug
                // Just resume execution (F8), and get back to the Console tab
                // Or right click on the line and set "never pause here"
                await reader.releaseLock();
            } catch (error) { console.error(error); }
            reader = null;
        }
        if (stream) {
            await stream.cancel().catch(error => console.error(error));
            stream = null;
        }
    }
}

function saveAs(data, fileName) {

    const blob = new Blob(
        [ data ],
        { 
            type: (
                typeof data === "string"
                    ? "text/plain"
                    : "application/octet-stream"
            ),
        },
    );

    const url = window.URL.createObjectURL(blob);

    const anchorElem = document.createElement("a");
    anchorElem.style = "display: none";
    anchorElem.href = url;
    anchorElem.download = fileName;

    document.body.appendChild(anchorElem);
    anchorElem.click();

    document.body.removeChild(anchorElem);

    // On Edge, revokeObjectURL should be called only after
    // a.click() has completed, atleast on EdgeHTML 15.15048
    setTimeout(() => {
        window.URL.revokeObjectURL(url);
    }, 1000);
}

function replaceExtension(fname, newExt) {
    const parts = fname.split(".");
    if (parts.length > 1) parts.pop();
    parts.push(newExt);
    return parts.join(".");
}

function getFileExtension(file) {
    return file.name.split(".").pop().trim().toLowerCase();
}

return {
    createFilesReceiver,
    createFileReader,
    saveAs,
    replaceExtension,
    getFileExtension,
};

}());
