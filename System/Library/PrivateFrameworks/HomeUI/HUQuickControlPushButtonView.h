//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <HomeUI/HUQuickControlInteractiveView-Protocol.h>

@class HUIconView, HUQuickControlPushButtonViewProfile, HUQuickControlRoundButton, NSString, UIImpactFeedbackGenerator, UILabel, UILongPressGestureRecognizer;
@protocol HUQuickControlViewInteractionDelegate;

@interface HUQuickControlPushButtonView : UIView <HUQuickControlInteractiveView>
{
    _Bool _userInteractionActive;	// 8 = 0x8
    id <HUQuickControlViewInteractionDelegate> _interactionDelegate;	// 16 = 0x10
    unsigned long long _reachabilityState;	// 24 = 0x18
    HUQuickControlPushButtonViewProfile *_profile;	// 32 = 0x20
    NSString *_descriptionText;	// 40 = 0x28
    UILongPressGestureRecognizer *_longPressGestureRecognizer;	// 48 = 0x30
    UIImpactFeedbackGenerator *_feedbackGenerator;	// 56 = 0x38
    HUQuickControlRoundButton *_roundButton;	// 64 = 0x40
    HUIconView *_decorationIconView;	// 72 = 0x48
    UILabel *_buttonLabel;	// 80 = 0x50
    unsigned long long _controlState;	// 88 = 0x58
}

+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x000000000028e79e
- (void).cxx_destruct;	// IMP=0x000000000029006d
@property(nonatomic) unsigned long long controlState; // @synthesize controlState=_controlState;
@property(retain, nonatomic) UILabel *buttonLabel; // @synthesize buttonLabel=_buttonLabel;
@property(retain, nonatomic) HUIconView *decorationIconView; // @synthesize decorationIconView=_decorationIconView;
@property(retain, nonatomic) HUQuickControlRoundButton *roundButton; // @synthesize roundButton=_roundButton;
@property(retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(nonatomic, getter=isUserInteractionActive) _Bool userInteractionActive; // @synthesize userInteractionActive=_userInteractionActive;
@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(copy, nonatomic) HUQuickControlPushButtonViewProfile *profile; // @synthesize profile=_profile;
@property(nonatomic) unsigned long long reachabilityState; // @synthesize reachabilityState=_reachabilityState;
@property(nonatomic) __weak id <HUQuickControlViewInteractionDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;	// IMP=0x000000000028fefb
- (void)_updateUIForReachabilityState:(unsigned long long)arg1;	// IMP=0x000000000028fe19
@property(retain, nonatomic) id value;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;	// IMP=0x000000000028fc84
- (void)_actuateTapticFeedbackWithIntensity:(double)arg1;	// IMP=0x000000000028fbf9
- (void)_prepareForTapticFeedback;	// IMP=0x000000000028fb83
- (void)_animateToShrinkView;	// IMP=0x000000000028fadb
- (void)_animateToEnlargeView;	// IMP=0x000000000028f955
- (void)_updateDecorationIconDescriptorAnimated:(_Bool)arg1;	// IMP=0x000000000028f8b4
- (void)dealloc;	// IMP=0x000000000028f83f
- (void)_contentSizeCategoryDidChange;	// IMP=0x000000000028f7a9
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000028f6ff
- (void)_updateUI;	// IMP=0x000000000028f46c
- (void)layoutSubviews;	// IMP=0x000000000028ede3
- (void)handleTap:(id)arg1;	// IMP=0x000000000028ea88
- (id)initWithProfile:(id)arg1;	// IMP=0x000000000028e7a6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id secondaryValue;
@property(readonly) Class superclass;

@end

