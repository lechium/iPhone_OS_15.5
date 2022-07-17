//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBAppLayout;

@interface SBGestureInitiatedIconZoomAnimationAttributesSwitcherModifier
{
    SBAppLayout *_appLayout;	// 24 = 0x18
    unsigned long long _gestureEdge;	// 32 = 0x20
    struct CGPoint _liftOffVelocity;	// 40 = 0x28
    unsigned long long _iconGridSizeClass;	// 56 = 0x38
    _Bool _overshootScaleForWidgetZoomDown;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000005f9897
- (double)_normalizedHomeScreenIconZoomPercentBetweenTopAndBottom;	// IMP=0x00000000005f969a
- (id)_settingsByInterpolatingBetween:(id)arg1 and:(id)arg2 progress:(double)arg3;	// IMP=0x00000000005f9530
- (id)_scaleSettings;	// IMP=0x00000000005f9402
- (id)_positionSettings;	// IMP=0x00000000005f91e9
- (id)_layoutSettings;	// IMP=0x00000000005f8ff9
- (id)animationAttributesForLayoutElement:(id)arg1;	// IMP=0x00000000005f8eaa
- (double)scaleForIndex:(unsigned long long)arg1;	// IMP=0x00000000005f8d05
- (id)handleTimerEvent:(id)arg1;	// IMP=0x00000000005f8be1
- (id)handleTransitionEvent:(id)arg1;	// IMP=0x00000000005f8a5f
- (id)initWithAppLayout:(id)arg1 gestureEdge:(unsigned long long)arg2 liftOffVelocity:(struct CGPoint)arg3;	// IMP=0x00000000005f89b9

@end
