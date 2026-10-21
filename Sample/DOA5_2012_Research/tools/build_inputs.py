"""Index Ghidra XML/bytes exports without interpreting input files as executables."""
from pathlib import Path
import argparse, hashlib, json, re, xml.etree.ElementTree as ET

def index(folder, target, include_doa1=False):
    result = {}
    paths = sorted(folder.glob('2012-*doa5*.xml'))
    if include_doa1:
        paths += sorted(folder.glob('1996*.xml'))
    if not paths:
        raise ValueError('No 2012-*doa5*.xml files found in input directory')
    for path in paths:
        root = ET.parse(path).getroot()
        key = path.name[:10]
        candidates = sorted(folder.glob(key + '*.bytes'))
        if len(candidates) != 1:
            raise ValueError('Expected exactly one matching .bytes file for ' + path.name)
        binary = candidates[0].resolve()
        raw = binary.read_bytes()
        sections = []
        for item in root.find('MEMORY_MAP'):
            contents = item.find('MEMORY_CONTENTS')
            if contents is None:
                raise ValueError('Unbacked memory section; this tool needs exported bytes')
            section = dict(name=item.get('NAME'), va=int(item.get('START_ADDR'), 16),
                           size=int(item.get('LENGTH'), 16), offset=int(contents.get('FILE_OFFSET'), 16))
            if section['offset'] + section['size'] > len(raw):
                raise ValueError('Section exceeds payload: ' + path.name)
            sections.append(section)
        strings = []
        for section in sections:
            if section['name'] not in ('.rdata', '.data', 'ram'):
                continue
            block = raw[section['offset']:section['offset'] + section['size']]
            for found in re.finditer(rb'[\x20-\x7e]{4,}', block):
                strings.append(dict(va=section['va'] + found.start(), text=found.group().decode('ascii')))
        functions = [dict(va=int(item.get('ENTRY_POINT'), 16), name=item.get('NAME'),
                          ranges=[(int(x.get('START'), 16), int(x.get('END'), 16))
                                  for x in item.findall('ADDRESS_RANGE')])
                     for item in root.find('FUNCTIONS')]
        result[key] = dict(path=str(path.resolve()), binary=str(binary),
                           sha256=hashlib.sha256(raw).hexdigest(), size=len(raw),
                           sections=sections, strings=strings, functions=functions,
                           symbols=[dict(x.attrib) for x in root.find('SYMBOL_TABLE')],
                           comments=[dict(va=int(x.get('ADDRESS'), 16), type=x.get('TYPE'), text=x.text)
                                     for x in root.find('COMMENTS')])
        print(key, 'indexed:', len(functions), 'XML definitions,', len(strings), 'ASCII runs', flush=True)
    expected = {'2012-02-19', '2012-06-02', '2012-08-19'}
    if not expected.issubset(result):
        raise ValueError('This comparison expects all three supplied DOA5 dates')
    target.parent.mkdir(parents=True, exist_ok=True)
    target.write_text(json.dumps(result), encoding='utf-8')

if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('input_dir', type=Path)
    parser.add_argument('index_path', type=Path)
    parser.add_argument('--include-doa1', action='store_true')
    args = parser.parse_args()
    index(args.input_dir.resolve(), args.index_path.resolve(), args.include_doa1)
