//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface PHASEListener
{
    double _gain;	// 8 = 0x8
    double _dopplerFactor;	// 16 = 0x10
    MISSING_TYPE *_velocity;	// 32 = 0x20
}

+ (id)new;	// IMP=0x00000000001c0090
@property(nonatomic) MISSING_TYPE *velocity; // @synthesize velocity=_velocity;
@property(nonatomic) double dopplerFactor; // @synthesize dopplerFactor=_dopplerFactor;
@property(nonatomic) double gain; // @synthesize gain=_gain;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001c0112
- (id)initWithEngine:(id)arg1;	// IMP=0x00000000001c00a8
- (id)init;	// IMP=0x00000000001c0052

@end
