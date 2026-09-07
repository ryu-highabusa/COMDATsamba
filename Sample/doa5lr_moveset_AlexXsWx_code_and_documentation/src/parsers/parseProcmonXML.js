async function parseProcmonXmlEvents(
    file,
    optPathTrim = "Dead or Alive 5 Last Round\\",
) {
    const text = await file.text();
    const parsed = new DOMParser().parseFromString(text, "text/xml");
    let result = Array.from(
        parsed.getElementsByTagName("eventlist")[0].children
    ).map(event => {
        return Array.from(event.children).reduce((acc, e) => {
            acc[e.tagName] = e.innerHTML;
            return acc;
        }, {});
    }).filter(
        e => e.Operation === "ReadFile",
    ).map(e => ({
        ...e,
        Detail: e.Detail.split(", ").reduce((acc, e) => {
            const [name, value] = e.split(": ");
            acc[name] = value;
            return acc;
        }, {}),
    }));
    console.assert(result.every(e => e.Result === "SUCCESS"));
    result.forEach(e => {
        ["Offset", "Length"].forEach(key => {
            e.Detail[key] = Number(e.Detail[key].replaceAll(",", ""));
        });
    });
    result = result.map(e => ({
        path: (optPathTrim && e.Path.split(optPathTrim)[1] || e.Path).replaceAll("\\", "/"),
        offset: e.Detail.Offset,
        length: e.Detail.Length,
    }));
    const empties = result.filter(e => e.length === 0);
    if (empties.length > 0) {
        console.warn("Following entries read 0 bytes: %O", empties);
    }
    return result;
}
