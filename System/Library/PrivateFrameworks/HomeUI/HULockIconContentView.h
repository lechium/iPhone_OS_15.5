//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/CAAnimationDelegate-Protocol.h>

@class HULockIconStateTransition, HUShapeLayerView, HUVisualEffectContainerView, NSString, UIVisualEffectView;

@interface HULockIconContentView <CAAnimationDelegate>
{
    HUShapeLayerView *_lockBodyView;	// 8 = 0x8
    HUVisualEffectContainerView *_lockBodyContainerView;	// 16 = 0x10
    HUShapeLayerView *_lockKeyholeFillView;	// 24 = 0x18
    HUVisualEffectContainerView *_lockKeyholeContainerView;	// 32 = 0x20
    HUShapeLayerView *_lockShackleView;	// 40 = 0x28
    UIVisualEffectView *_lockShackleContainerView;	// 48 = 0x30
    HULockIconStateTransition *_activeTransition;	// 56 = 0x38
    unsigned long long _lockState;	// 64 = 0x40
    struct CGSize _lastLayoutSize;	// 72 = 0x48
}

+ (id)_lockShacklePathForBounds:(struct CGRect)arg1;	// IMP=0x00000000000494f8
+ (id)_lockKeyholePathForBounds:(struct CGRect)arg1;	// IMP=0x000000000004922e
- (void).cxx_destruct;	// IMP=0x0000000000049942
@property(nonatomic) struct CGSize lastLayoutSize; // @synthesize lastLayoutSize=_lastLayoutSize;
@property(nonatomic) unsigned long long lockState; // @synthesize lockState=_lockState;
@property(retain, nonatomic) HULockIconStateTransition *activeTransition; // @synthesize activeTransition=_activeTransition;
@property(retain, nonatomic) UIVisualEffectView *lockShackleContainerView; // @synthesize lockShackleContainerView=_lockShackleContainerView;
@property(retain, nonatomic) HUShapeLayerView *lockShackleView; // @synthesize lockShackleView=_lockShackleView;
@property(retain, nonatomic) HUVisualEffectContainerView *lockKeyholeContainerView; // @synthesize lockKeyholeContainerView=_lockKeyholeContainerView;
@property(retain, nonatomic) HUShapeLayerView *lockKeyholeFillView; // @synthesize lockKeyholeFillView=_lockKeyholeFillView;
@property(retain, nonatomic) HUVisualEffectContainerView *lockBodyContainerView; // @synthesize lockBodyContainerView=_lockBodyContainerView;
@property(retain, nonatomic) HUShapeLayerView *lockBodyView; // @synthesize lockBodyView=_lockBodyView;
- (id)_viewForTransitionAnimationType:(unsigned long long)arg1;	// IMP=0x00000000000491d3
- (id)_viewsAnimatedForStateTransition;	// IMP=0x0000000000049110
- (void)_removeAllTransitionAnimations;	// IMP=0x0000000000048f98
- (void)_removePendingBounceAnimations;	// IMP=0x0000000000048c80
- (void)_applyAnimation:(id)arg1 ofType:(unsigned long long)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000048ba4
- (void)_translateShackleForLockState:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000048404
- (void)_rotateShackleForLockState:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000480b0
- (void)_performTransitionToLockState:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000004806e
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x0000000000047e18
- (void)updateColorsForDisplayStyle:(unsigned long long)arg1;	// IMP=0x0000000000047b8d
- (void)updateIconFromState:(long long)arg1 toState:(long long)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000047a8f
- (id)managedVisualEffectViews;	// IMP=0x00000000000479aa
- (_Bool)wantsManagedVibrancyEffect;	// IMP=0x00000000000479a2
- (void)layoutSubviews;	// IMP=0x0000000000047629
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000004702b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
