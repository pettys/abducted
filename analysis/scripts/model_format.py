"""Lightspeed ZDT unpacking, translated from resident routine 201d:00e9."""
from pathlib import Path
import struct

def unpack_zdt(raw):
    expanded,stored,workspace=struct.unpack_from('<HHH',raw)
    payload=raw[6:]
    assert len(payload)==stored
    if workspace==0:
        assert expanded==stored
        return payload
    at=2;flags=struct.unpack_from('<H',payload)[0];remaining=16;out=bytearray()
    def byte():
        nonlocal at
        value=payload[at];at+=1;return value
    def bit():
        nonlocal at,flags,remaining
        value=flags&1;flags>>=1;remaining-=1
        if remaining==0:
            flags=struct.unpack_from('<H',payload,at)[0];at+=2;remaining=16
        return value
    while True:
        if bit():out.append(byte());continue
        if not bit():
            count=(bit()<<1|bit())+2;distance=byte()-256
        else:
            low=byte();high=byte();distance=((high>>3)<<8|low)-8192
            count=(high&7)+2
            if (high&7)==0:
                count=byte()
                if count==0:break
                if count==1:continue
                count+=1
        assert -len(out)<=distance<0,(at,len(out),distance)
        for i in range(count):out.append(out[distance])
        assert len(out)<=expanded,(len(out),expanded)
    assert len(out)==expanded,(len(out),expanded)
    return bytes(out)

if __name__=='__main__':
    root=Path(__file__).resolve().parents[2];out=root/'analysis'/'models';out.mkdir(exist_ok=True)
    for path in sorted((root/'exe'/'Lightspe').glob('*.ZDT')):
        try:
            data=unpack_zdt(path.read_bytes());(out/(path.stem+'.dat')).write_bytes(data)
            count=struct.unpack_from('<H',data)[0]
            offsets=struct.unpack_from('<'+'H'*(count+1),data,2)
            print(path.name,len(data),'models',count,'offsets',offsets[:5], 'end',offsets[-1])
        except Exception as e:print(path.name,'ERROR',repr(e))