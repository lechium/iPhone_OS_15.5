//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CALayer, CAReplicatorLayer;

@interface NTKRichComplicationDialView : UIView
{
    CAReplicatorLayer *_largeTicksReplicatorLayer;	// 8 = 0x8
    CALayer *_largeTickLayer;	// 16 = 0x10
    double _largeTickPositionY;	// 24 = 0x18
    CAReplicatorLayer *_smallTicksReplicatorLayer;	// 32 = 0x20
    CALayer *_smallTickLayer;	// 40 = 0x28
    double _smallTickPositionY;	// 48 = 0x30
    long long _largeTickCount;	// 56 = 0x38
    long long _smallTickCountPerLargeTick;	// 64 = 0x40
    double _largeTicksTransformAngle;	// 72 = 0x48
    float _progress;	// 80 = 0x50
    float _progressDirection;	// 84 = 0x54
}

- (void).cxx_destruct;	// IMP=0x000000000008d268
@property(nonatomic) float progressDirection; // @synthesize progressDirection=_progressDirection;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) CALayer *smallTickLayer; // @synthesize smallTickLayer=_smallTickLayer;
@property(readonly, nonatomic) CALayer *largeTickLayer; // @synthesize largeTickLayer=_largeTickLayer;
- (void)layoutSubviews;	// IMP=0x000000000008d0ab
- (void)_updateTicksRotationTransform;	// IMP=0x000000000008cf10
- (void)setLargeTicksTransformAngle:(double)arg1;	// IMP=0x000000000008cee3
- (id)initWithTickCount:(long long)arg1 tickSize:(struct CGSize)arg2 dialRange:(double)arg3 startAngle:(double)arg4;	// IMP=0x000000000008cd27
- (id)initWithLargeTickCount:(long long)arg1 smallTickCountPerLargeTick:(long long)arg2 largeTickSize:(struct CGSize)arg3 smallTickSize:(struct CGSize)arg4 dialRange:(double)arg5 startAngle:(double)arg6;	// IMP=0x000000000008c6f8

@end
