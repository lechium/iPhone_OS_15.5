//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPNumberParser.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@interface HMDBitRateSetting : HAPNumberParser <NSSecureCoding>
{
    unsigned long long _bitrateSetting;	// 8 = 0x8
}

+ (id)arrayWithSettings:(id)arg1;	// IMP=0x000000000006fa2c
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006fa24
@property(readonly, nonatomic) unsigned long long bitrateSetting; // @synthesize bitrateSetting=_bitrateSetting;
- (id)initWithBitRateSetting:(unsigned long long)arg1;	// IMP=0x000000000006f9cf
- (id)initWithTLVData:(id)arg1;	// IMP=0x000000000006f978
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x000000000006f8bd
- (id)description;	// IMP=0x000000000006f849
- (unsigned long long)hash;	// IMP=0x000000000006f837
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006f7b4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006f71d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006f660

@end

