//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MXMInstrument, MXMSampleTag;

@interface MXMClockMetric
{
    MXMSampleTag *_tag;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000a914
+ (id)continuousTime;	// IMP=0x000000000000a3f5
+ (id)absoluteTime;	// IMP=0x000000000000a392
+ (id)allTime;	// IMP=0x000000000000a32f
- (void).cxx_destruct;	// IMP=0x000000000000a91c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000a879
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000a7fc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000a78a
- (id)copy;	// IMP=0x000000000000a776
- (_Bool)harvestData:(id *)arg1 error:(id *)arg2;	// IMP=0x000000000000a4d5
- (_Bool)_shouldConstructProbe;	// IMP=0x000000000000a4cd
- (id)initWithTag:(id)arg1;	// IMP=0x000000000000a458
- (id)_unitWithTag:(id)arg1;	// IMP=0x000000000000a316
- (id)_unit;	// IMP=0x000000000000a2f9

// Remaining properties
@property(readonly, nonatomic) MXMInstrument *instrument; // @dynamic instrument;

@end

