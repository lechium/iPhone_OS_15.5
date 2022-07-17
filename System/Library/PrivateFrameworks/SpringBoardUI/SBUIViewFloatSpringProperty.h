//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewFloatAnimatableProperty.h>

#import <SpringBoardUI/UIViewSpringAnimationBehaviorDescribing-Protocol.h>

@interface SBUIViewFloatSpringProperty : UIViewFloatAnimatableProperty <UIViewSpringAnimationBehaviorDescribing>
{
    double _dampingRatio;	// 8 = 0x8
    double _response;	// 16 = 0x10
    double _impulse;	// 24 = 0x18
    double _trackingDampingRatio;	// 32 = 0x20
    double _trackingResponse;	// 40 = 0x28
    double _trackingImpulse;	// 48 = 0x30
    _Bool _tracking;	// 56 = 0x38
}

+ (void)_withoutAnimation:(CDUnknownBlockType)arg1;	// IMP=0x000000000001123b
@property(nonatomic) _Bool tracking; // @synthesize tracking=_tracking;
- (double)projectForTime:(double)arg1;	// IMP=0x00000000000111f2
- (double)projectForDeceleration:(double)arg1;	// IMP=0x000000000001118d
- (CDStruct_aa45ca86)parametersForTransitionFromState:(int)arg1 toState:(int)arg2;	// IMP=0x000000000001111e
- (void)setTrackingDampingRatio:(double)arg1 response:(double)arg2 impulse:(double)arg3;	// IMP=0x00000000000110f4
- (void)setTrackingDampingRatio:(double)arg1 response:(double)arg2;	// IMP=0x00000000000110d6
- (void)setDampingRatio:(double)arg1 response:(double)arg2 impulse:(double)arg3;	// IMP=0x00000000000110ac
- (void)setDampingRatio:(double)arg1 response:(double)arg2;	// IMP=0x000000000001108e
@property(nonatomic) double output;
@property(nonatomic) double input;
- (id)init;	// IMP=0x0000000000010de6

@end
