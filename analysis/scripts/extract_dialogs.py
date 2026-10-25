"""Extract Lightspeed encounter text/choices; preserve original record metadata."""
from pathlib import Path
import json
import re
import struct

ROOT = Path(__file__).resolve().parents[2]
SOURCE = ROOT / 'exe' / 'Lightspe'
OUT = ROOT / 'analysis' / 'dialogs'
EXE = (SOURCE / 'LIGHTSPD.EXE').read_bytes()


def save(path, text):
    path.write_bytes(text.replace('\r\n', '\n').replace('\n', '\r\n').encode('utf-8'))


def near_string(pointer):
    start = 0x186c0 + pointer
    return EXE[start:EXE.index(0, start)].decode('ascii')


def extract(path):
    data = path.read_bytes()
    count = struct.unpack_from('<H', data)[0]
    length_at = 2 + count * 22
    text_length = struct.unpack_from('<H', data, length_at)[0]
    text_start = length_at + 2
    # The original loader reads the declared text size, leaving a final file byte.
    assert len(data) == text_start + text_length + 1
    text = data[text_start:text_start + text_length]

    def string_at(offset):
        assert 0 <= offset < len(text), (path.name, offset)
        end = text.index(0, offset)
        return text[offset:end].decode('cp437').replace('\r', '\n')

    records = []
    for index in range(count):
        words = struct.unpack_from('<11h', data, 2 + index * 22)
        choice_count, extra_count = words[9:11]
        assert 0 <= choice_count <= 6
        assert 0 <= extra_count <= 3
        choices = [dict(result=i, text=string_at(words[i]), text_offset=words[i])
                   for i in range(choice_count)]
        extra = [dict(result=choice_count + i, text=string_at(words[6 + i]),
                      text_offset=words[6 + i]) for i in range(min(extra_count, 2))]
        records.append(dict(index=index, record_file_offset=2 + index * 22,
                            speech=string_at(words[8]), speech_text_offset=words[8],
                            choices=choices, extra_choices=extra, raw_words=words))
    return dict(source=path.name, count=count, text_file_offset=text_start,
                declared_text_bytes=text_length, records=records)


def main():
    OUT.mkdir(exist_ok=True)
    catalog = []
    for overlay in range(16, 35):
        code = (ROOT / 'analysis' / 'mapped' / f'ovl_{overlay:02d}.c').read_text()
        bin_pointer = int(re.search(r'FUN_1000_038c\((0x[0-9a-f]+)\)', code)[1], 16)
        pan_pointer = int(re.search(r'dispatch_ovl_13_2558_00d4\((0x[0-9a-f]+)', code)[1], 16)
        dataset = extract(SOURCE / near_string(bin_pointer).upper())
        dataset.update(overlay=f'ovl_{overlay:02d}', animation=near_string(pan_pointer))
        catalog.append(dataset)
        save(OUT / (Path(dataset['source']).stem + '.json'), json.dumps(dataset, indent=2) + '\n')
        lines = [dataset['source'] + ' | ' + dataset['overlay'] + ' | ' + dataset['animation'], '']
        for record in dataset['records']:
            lines.extend([f"RECORD {record['index']} (0x{record['record_file_offset']:04x})",
                          record['speech']])
            for choice in record['choices'] + record['extra_choices']:
                lines.append(f"  [{choice['result']}] {choice['text']}")
            lines.append('')
        save(OUT / (Path(dataset['source']).stem + '.txt'), '\n'.join(lines))
    save(OUT / 'catalog.json', json.dumps(catalog, indent=2) + '\n')
    print(f"Extracted {sum(d['count'] for d in catalog)} dialog records in {len(catalog)} encounter datasets.")
    print(f"Validated {sum(len(r['choices']) + len(r['extra_choices']) for d in catalog for r in d['records'])} choice references.")


if __name__ == '__main__':
    main()
