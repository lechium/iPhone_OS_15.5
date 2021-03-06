//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <HomeUI/HUQuickControlInteractiveView-Protocol.h>

@class HUCircleView, HUIconView, HUQuickControlViewProfile, NSString, UIColor;
@protocol HUQuickControlViewInteractionDelegate;

@interface HUQuickControlValveToggleView : UIView <HUQuickControlInteractiveView>
{
    _Bool _open;	// 8 = 0x8
    _Bool _userInteractionActive;	// 9 = 0x9
    id _value;	// 16 = 0x10
    HUQuickControlViewProfile *_profile;	// 24 = 0x18
    id <HUQuickControlViewInteractionDelegate> _interactionDelegate;	// 32 = 0x20
    unsigned long long _reachabilityState;	// 40 = 0x28
    HUIconView *_iconView;	// 48 = 0x30
    HUCircleView *_circleView;	// 56 = 0x38
}

+ (id)intrinsicSizeDescriptor;	// IMP=0x00000000004260a9
+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x00000000004260a1
- (void).cxx_destruct;	// IMP=0x0000000000426b9f
@property(retain, nonatomic) HUCircleView *circleView; // @synthesize circleView=_circleView;
@property(retain, nonatomic) HUIconView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic, getter=isUserInteractionActive) _Bool userInteractionActive; // @synthesize userInteractionActive=_userInteractionActive;
@property(nonatomic) _Bool open; // @synthesize open=_open;
@property(nonatomic) unsigned long long reachabilityState; // @synthesize reachabilityState=_reachabilityState;
@property(nonatomic) __weak id <HUQuickControlViewInteractionDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
@property(copy, nonatomic) HUQuickControlViewProfile *profile; // @synthesize profile=_profile;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;	// IMP=0x0000000000426ae0
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;	// IMP=0x0000000000426ac6
- (void)_updateUIForReachabilityState:(unsigned long long)arg1;	// IMP=0x0000000000426aa0
@property(retain, nonatomic) id value; // @synthesize value=_value;
- (void)_updateIconDescriptor;	// IMP=0x000000000042691d
- (void)_updateAppearance;	// IMP=0x000000000042687b
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000004267fd
- (void)_handleTap:(id)arg1;	// IMP=0x00000000004265ac
- (void)updateConstraints;	// IMP=0x0000000000426419
- (void)_setupIconView;	// IMP=0x0000000000426327
@property(readonly, nonatomic) UIColor *backgroundOffColor;
@property(readonly, nonatomic) UIColor *backgroundOnColor;
- (id)initWithProfile:(id)arg1;	// IMP=0x00000000004260d2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id secondaryValue;
@property(readonly) Class superclass;

@end

