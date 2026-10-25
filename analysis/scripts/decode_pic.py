"""Decode MicroProse PICv3 images using the MIT mp_pic_tools LZW/RLE helpers."""
from pathlib import Path
import sys,struct,json,hashlib,argparse
ROOT=Path(__file__).resolve().parents[2]
sys.path[:0]=[str(ROOT/'tools'/'python-libs'),str(ROOT/'tools'/'mp_pic_tools')]
from PIL import Image
import lzw,rle

def decode(path,base_palette=None):
    data=path.read_bytes();position=0;palette=bytearray(base_palette or bytes(768));defined=set(range(256)) if base_palette else set();images=[];blocks=[];embedded=set()
    while position<len(data):
        start=position
        if len(data)-position<4:raise ValueError('Truncated block header')
        tag,size=struct.unpack_from('<2sH',data,position);position+=4
        payload=data[position:position+size]
        if len(payload)!=size:raise ValueError('Truncated block payload')
        blocks.append(dict(tag=tag.decode('ascii'),offset=start,length=size))
        if tag in (b'M0',b'M1'):
            first,last=payload[:2]
            assert size==2+(last-first+1)*3
            colors=payload[2:]
            assert max(colors)<=63,'Expected a six-bit VGA palette'
            for index,value in enumerate(colors):palette[first*3+index]=(value*255+31)//63
            defined.update(range(first,last+1));embedded.update(range(first,last+1))
        elif tag in (b'X0',b'X1'):
            width,height,bits=struct.unpack_from('<HHB',payload)
            expanded=lzw.decompress(payload[5:],bits)
            pixels=bytes(rle.decode(expanded))
            if tag == b'X1':
                stride=(width+1)//2
                assert len(pixels)==stride*height
                pixels=bytes((pixels[y*stride+x//2] >> (4 if x%2==0 else 0))&15 for y in range(height) for x in range(width))
            assert len(pixels)==width*height,(len(pixels),width*height)
            images.append((width,height,pixels))
        elif tag in (b'C0',b'E0'):
            pass  # Dither mappings for lower-color display modes; VGA uses the original pixels.
        else:raise ValueError(f'Unsupported block {tag!r}')
        position+=size
    assert len(images)==1,'Expected one image'
    width,height,pixels=images[0]
    missing=sorted(set(pixels)-defined)
    if missing:raise ValueError(f'Image uses undefined palette indices: {missing}')
    image=Image.frombytes('P',(width,height),pixels);image.putpalette(palette)
    return image,dict(source=path.name,source_sha256=hashlib.sha256(data).hexdigest(),width=width,height=height,pixels=len(pixels),palette_entries=len(defined),embedded_palette_entries=len(embedded),used_colors=len(set(pixels)),blocks=blocks,compression='MicroProse LZW then 0x90 run-length expansion; X1 packs two pixels per byte',palette='6-bit VGA RGB scaled to 8-bit RGB'),pixels

def main():
    parser=argparse.ArgumentParser(description=__doc__);parser.add_argument('file',type=Path);parser.add_argument('--base-palette',type=Path,help='PIC supplying inherited colors missing from this image');args=parser.parse_args()
    base=decode(args.base_palette)[0].getpalette() if args.base_palette else None
    image,metadata,pixels=decode(args.file,base)
    if args.base_palette:metadata['inherited_palette_source']=args.base_palette.name
    out=ROOT/'analysis'/'images';out.mkdir(exist_ok=True)
    name=args.file.stem
    image.save(out/(name+'.png'))
    image.resize((image.width*3,image.height*3),Image.Resampling.NEAREST).save(out/(name+'-3x.png'))
    (out/(name+'.indices')).write_bytes(pixels)
    (out/(name+'.json')).write_bytes((json.dumps(metadata,indent=2)+'\n').replace('\n','\r\n').encode())
    print(json.dumps(metadata,indent=2))
if __name__=='__main__':main()
