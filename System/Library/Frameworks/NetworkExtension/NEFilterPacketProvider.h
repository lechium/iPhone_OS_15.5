//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NEFilterPacketProvider
{
    CDUnknownBlockType _packetHandler;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001c2c07
@property(copy) CDUnknownBlockType packetHandler; // @synthesize packetHandler=_packetHandler;
- (void)allowPacket:(id)arg1;	// IMP=0x00000000001c2b52
- (id)delayCurrentPacket:(id)arg1;	// IMP=0x00000000001c2ab0

@end
