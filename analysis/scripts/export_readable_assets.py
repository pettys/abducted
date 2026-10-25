"""Export all PIC images and one Markdown dialog reference per race.

Run extract_dialogs.py first when rebuilding from original game files.
"""
from pathlib import Path
import json
from decode_pic import decode

ROOT = Path(__file__).resolve().parents[2]
SOURCE = ROOT / 'exe' / 'Lightspe'


def save(path, text):
    path.write_bytes(text.replace('\r\n', '\n').replace('\n', '\r\n').encode('utf-8'))


def export_images():
    output = ROOT / 'analysis' / 'images'
    output.mkdir(exist_ok=True)
    base = decode(SOURCE / 'COCKSP2.PIC')[0].getpalette()
    catalog = []
    for path in sorted(SOURCE.glob('*.PIC')):
        image, metadata, pixels = decode(path, base)
        metadata['inherited_palette_source'] = 'COCKSP2.PIC'
        metadata['palette_caveat'] = 'Missing palette entries use COCKSP2.PIC as a fallback; palette-less assets can require a different active game-scene palette.'
        if any(block['tag'] == 'X1' for block in metadata['blocks']):
            metadata['packing_caveat'] = 'Four-bit nibble order inferred; not compared against a running DOS capture.'
        image.save(output / (path.stem + '.png'))
        (output / (path.stem + '.indices')).write_bytes(pixels)
        save(output / (path.stem + '.json'), json.dumps(metadata, indent=2) + '\n')
        catalog.append(metadata)
    save(output / 'catalog.json', json.dumps(catalog, indent=2) + '\n')
    return len(catalog)


def export_dialogs():
    output = ROOT / 'analysis' / 'dialogs' / 'races'
    output.mkdir(exist_ok=True)
    catalog = json.loads((output.parent / 'catalog.json').read_text())
    races = [
        'Broodmasters', 'Cicisbeo', 'Didinium', 'Stentor', 'Fel', 'Lutin',
        'Acari', 'Athdalde', 'Automata', 'Balathide', 'Broodmasters', 'Cicisbeo',
        'Dacians', 'Dignee', 'Halicot', 'Jot', 'Monad', 'Venge', 'Vorticella'
    ]
    grouped = {}
    for dataset in catalog:
        overlay = int(dataset['overlay'].split('_')[1])
        grouped.setdefault(races[overlay - 16], []).append(dataset)
    for race, datasets in grouped.items():
        lines = [f'# {race}', '',
                 'Recovered original speech and choices. Records include conditional variants; their order is not a conversation flow. Numeric choices are return values used by the encounter code. `%s` and similar placeholders are filled at runtime.', '',
                 'For known outcomes and relationship fields, see [interaction map](../interaction-map.json). Full branching still lives in the recovered pseudocode.', '']
        for dataset in datasets:
            stem = Path(dataset['source']).stem
            cluster = 1 if int(dataset['overlay'].split('_')[1]) <= 21 else 2
            lines.extend([f'## Cluster {cluster}: {dataset["source"]}', '',
                          f'Animation: `{dataset["animation"]}`. [Raw records](../{stem}.json); [encounter pseudocode](../../mapped/{dataset["overlay"]}.c).', ''])
            for record in dataset['records']:
                lines.extend([f'### Record {record["index"]}', '',
                              '\n'.join('> ' + line for line in record['speech'].split('\n')), ''])
                for choice in record['choices'] + record['extra_choices']:
                    lines.append(f'- `{choice["result"]}`: {choice["text"]}')
                lines.append('')
        save(output / (race + '.md'), '\n'.join(lines))
    return len(grouped), sum(dataset['count'] for dataset in catalog)


def main():
    images = export_images()
    races, records = export_dialogs()
    print(f'Exported {images} PIC images; {races} race Markdown files containing {records} dialog records.')


if __name__ == '__main__':
    main()
