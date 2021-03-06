//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CAMRampToVideoZoomFactorCommand
{
    float __rate;	// 8 = 0x8
    double __videoZoomFactor;	// 16 = 0x10
    double __duration;	// 24 = 0x18
}

@property(readonly, nonatomic) double _duration; // @synthesize _duration=__duration;
@property(readonly, nonatomic) float _rate; // @synthesize _rate=__rate;
@property(readonly, nonatomic) double _videoZoomFactor; // @synthesize _videoZoomFactor=__videoZoomFactor;
- (void)executeWithContext:(id)arg1;	// IMP=0x0000000000084616
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000084585
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000844c1
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000843e8
- (id)initWithVideoZoomFactor:(double)arg1 duration:(double)arg2;	// IMP=0x000000000008435e
- (id)initWithVideoZoomFactor:(double)arg1 rate:(float)arg2;	// IMP=0x00000000000842d3

@end

