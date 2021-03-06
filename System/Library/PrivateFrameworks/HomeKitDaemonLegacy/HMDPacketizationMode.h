//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPNumberParser.h>

#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@interface HMDPacketizationMode : HAPNumberParser <NSSecureCoding>
{
    unsigned long long _packetizationMode;	// 8 = 0x8
}

+ (id)arrayWithModes:(id)arg1;	// IMP=0x000000000006b687
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006b67f
@property(readonly, nonatomic) unsigned long long packetizationMode; // @synthesize packetizationMode=_packetizationMode;
- (id)initWithPacketizationMode:(unsigned long long)arg1;	// IMP=0x000000000006b62a
- (id)initWithTLVData:(id)arg1;	// IMP=0x000000000006b5d3
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x000000000006b518
- (id)description;	// IMP=0x000000000006b4a4
- (unsigned long long)hash;	// IMP=0x000000000006b492
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006b40f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006b378
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006b2bb

@end

