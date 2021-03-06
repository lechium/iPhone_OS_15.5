//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewFloatAnimatableProperty.h>

#import <SharingUI/UIViewSpringAnimationBehaviorDescribing-Protocol.h>

__attribute__((visibility("hidden")))
@interface SFFloatSpringProperty : UIViewFloatAnimatableProperty <UIViewSpringAnimationBehaviorDescribing>
{
    double _dampingRatio;	// 8 = 0x8
    double _response;	// 16 = 0x10
    double _trackingDampingRatio;	// 24 = 0x18
    double _trackingResponse;	// 32 = 0x20
    _Bool _primed;	// 40 = 0x28
    _Bool _tracking;	// 41 = 0x29
}

+ (void)_withoutAnimation:(CDUnknownBlockType)arg1;	// IMP=0x000000000000caa4
@property(nonatomic) _Bool tracking; // @synthesize tracking=_tracking;
@property(nonatomic) _Bool primed; // @synthesize primed=_primed;
- (double)projectForTime:(double)arg1;	// IMP=0x000000000000ca5b
- (double)projectForDeceleration:(double)arg1;	// IMP=0x000000000000c9f6
- (CDStruct_aa45ca86)parametersForTransitionFromState:(int)arg1 toState:(int)arg2;	// IMP=0x000000000000c99f
- (void)setTrackingDampingRatio:(double)arg1 response:(double)arg2;	// IMP=0x000000000000c981
- (void)setDampingRatio:(double)arg1 response:(double)arg2;	// IMP=0x000000000000c963
@property(nonatomic) double output;
@property(nonatomic) double input;
- (id)init;	// IMP=0x000000000000c637

@end

