//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPNumberParser.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@interface HMDSRTPCryptoSuite : HAPNumberParser <NSSecureCoding>
{
    unsigned long long _srtpCryptoSuite;	// 8 = 0x8
}

+ (id)arrayWithSuites:(id)arg1;	// IMP=0x0000000000072a2a
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000072a22
@property(readonly, nonatomic) unsigned long long srtpCryptoSuite; // @synthesize srtpCryptoSuite=_srtpCryptoSuite;
- (id)initWithTLVData:(id)arg1;	// IMP=0x00000000000729ba
- (id)initWithCryptoSuite:(unsigned long long)arg1;	// IMP=0x0000000000072976
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x00000000000728bb
- (id)description;	// IMP=0x0000000000072847
- (unsigned long long)hash;	// IMP=0x0000000000072835
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000727b2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007271b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007265e

@end

