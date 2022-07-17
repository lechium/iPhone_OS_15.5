//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CAShapeLayer.h>

@interface TKVibrationRecorderRippleRingLayer : CAShapeLayer
{
    double _creationTimestamp;	// 8 = 0x8
    double _ringSpeed;	// 16 = 0x10
    struct CGPoint _normalizedRingLocation;	// 24 = 0x18
}

@property(readonly, nonatomic) double ringSpeed; // @synthesize ringSpeed=_ringSpeed;
@property(readonly, nonatomic) struct CGPoint normalizedRingLocation; // @synthesize normalizedRingLocation=_normalizedRingLocation;
- (void)reset;	// IMP=0x00000000000261cc
- (void)configureWithTimeIntervalSinceCreation:(double)arg1 normalizedRingLocation:(struct CGPoint)arg2 ringSpeed:(double)arg3;	// IMP=0x0000000000026153
- (double)timeIntervalSinceCreation;	// IMP=0x0000000000026123
- (id)init;	// IMP=0x00000000000260c0

@end
