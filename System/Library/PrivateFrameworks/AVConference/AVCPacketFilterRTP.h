//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AVCPacketFilterRTP
{
    unsigned int _SSRC;	// 12 = 0xc
    unsigned char _type;	// 16 = 0x10
}

@property(readonly) unsigned char type; // @synthesize type=_type;
- (_Bool)isMatchedPacket:(const void *)arg1 size:(int)arg2;	// IMP=0x0000000000078e1c
- (_Bool)isPayloadTypeMatched:(_Bool)arg1;	// IMP=0x0000000000078df2
- (_Bool)isRTCPPayload:(unsigned short)arg1;	// IMP=0x0000000000078dd0
- (id)initWithIncomingSSRC:(unsigned int)arg1 acceptPacketType:(unsigned char)arg2;	// IMP=0x0000000000078bfd

@end
