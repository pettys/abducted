"""Extract indexed sprite images and bytecode from alien PANI animation packs.

Container layout follows ovl_01. This does not execute the animation program.
"""
from pathlib import Path
import json
import struct
import sys

ROOT = Path(__file__).resolve().parents[2]
sys.path[:0] = [str(ROOT / 'tools' / 'python-libs'), str(ROOT / 'tools' / 'mp_pic_tools')]
from PIL import Image, ImageDraw
import lzw
import rle


def extract(path, output):
    data = path.read_bytes()
    assert data[:6] == b'PANI\x04\x01'
    position = 6
    palette = bytearray(768)
    has_palette = data[position]
    position += 1
    if has_palette:
        blocks = data[position]
        position += 1
        for _ in range(blocks):
            tag, length = struct.unpack_from('<2sH', data, position)
            payload = data[position + 4:position + 4 + length]
            position += 4 + length
            if tag == b'M0':
                first, last = payload[:2]
                assert length in (2 + 3 * (last - first + 1), 3 + 3 * (last - first + 1))
                palette[first * 3:(last + 1) * 3] = bytes((v * 255 + 31) // 63 for v in payload[2:2 + 3 * (last - first + 1)])
    screen = struct.unpack_from('<5H', data, position)
    position += 10
    background = data[position]
    position += 1
    assert background == 0, (path.name, 'background not implemented')
    present = struct.unpack_from('<250H', data, position)
    position += 500
    sprites = []
    for index, flag in enumerate(present):
        if not flag:
            continue
        position += position & 1
        while True:
            tag, length = struct.unpack_from('<2sH', data, position)
            payload = data[position + 4:position + 4 + length]
            position += 4 + length
            assert tag in (b'E0', b'C0', b'X0', b'X1'), (path.name, position, tag)
            if tag in (b'X0', b'X1'):
                width, height, bits = struct.unpack_from('<HHB', payload)
                pixels = bytes(rle.decode(lzw.decompress(payload[5:], bits)))
                if tag == b'X1':
                    assert len(pixels) == ((width + 1) // 2) * height
                    stride = (width + 1) // 2
                    pixels = bytes(value for y in range(height) for x in range(width) for value in [((pixels[y * stride + x // 2] >> (4 if x % 2 == 0 else 0)) & 15)])
                assert len(pixels) == width * height, (path.name, index, tag, width, height, len(pixels), payload[:16].hex())
                image = Image.frombytes('P', (width, height), pixels)
                image.putpalette(palette)
                image.save(output / f'sprite-{index:03d}.png')
                sprites.append((index, image))
                break
    position += position & 1
    paragraphs = struct.unpack_from('<H', data, position)[0]
    position += 2
    program = data[position:position + paragraphs * 16]
    assert len(program) == paragraphs * 16, (path.name, position, paragraphs, len(data), data[position-4:position+8].hex())
    assert position + len(program) == len(data), (path.name, position, len(program), len(data))
    (output / 'animation.bin').write_bytes(program)
    cell_width, cell_height = 190, 214
    sheet = Image.new('RGB', (cell_width * 5, cell_height * ((len(sprites) + 4) // 5)), '#18212b')
    draw = ImageDraw.Draw(sheet)
    for cell, (index, image) in enumerate(sprites):
        x, y = cell % 5 * cell_width, cell // 5 * cell_height
        draw.text((x + 6, y + 5), f'{index}: {image.width} x {image.height}', fill='white')
        rgb = image.convert('RGB')
        rgb.thumbnail((180, 184), Image.Resampling.NEAREST)
        sheet.paste(rgb, (x + 5, y + 24))
    sheet.save(output / 'sprites.png')
    return dict(source=path.name, viewport=list(screen), sprite_count=len(sprites),
                sprites=[dict(index=i, width=im.width, height=im.height) for i, im in sprites],
                animation_file_offset=position, animation_bytes=len(program),
                note='Sprite sheet only; animation bytecode not executed.')


def main():
    catalog = json.loads((ROOT / 'analysis' / 'dialogs' / 'catalog.json').read_text())
    results = []
    for name in sorted({d['animation'].upper() for d in catalog}):
        output = ROOT / 'analysis' / 'aliens' / Path(name).stem
        output.mkdir(parents=True, exist_ok=True)
        result = extract(ROOT / 'exe' / 'Lightspe' / name, output)
        (output / 'metadata.json').write_bytes((json.dumps(result, indent=2) + '\n').replace('\n', '\r\n').encode())
        results.append(result)
        print(name, result['sprite_count'], 'sprites;', result['animation_bytes'], 'bytecode bytes')
    out = ROOT / 'analysis' / 'aliens' / 'catalog.json'
    out.write_bytes((json.dumps(results, indent=2) + '\n').replace('\n', '\r\n').encode())


if __name__ == '__main__':
    main()
