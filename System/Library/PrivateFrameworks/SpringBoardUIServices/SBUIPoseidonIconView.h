//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <SpringBoardUIServices/CAAnimationDelegate-Protocol.h>

@class CAGradientLayer, NSString, NSTimer, SBUILegibilityLabel, _UILegibilitySettings, _UILegibilityView;
@protocol SBUIPoseidonIconViewDelegate;

@interface SBUIPoseidonIconView : UIView <CAAnimationDelegate>
{
    _UILegibilityView *_coachingButton;	// 8 = 0x8
    SBUILegibilityLabel *_coachingLabel;	// 16 = 0x10
    SBUILegibilityLabel *_restToOpenLabel;	// 24 = 0x18
    UIView *_coachingLabelRotationView;	// 32 = 0x20
    UIView *_restToOpenLabelRotationView;	// 40 = 0x28
    NSTimer *_restToOpenIdleTimer;	// 48 = 0x30
    CAGradientLayer *_progressFillGradient;	// 56 = 0x38
    double _fullProgressFillDuration;	// 64 = 0x40
    double _startProgressFillTime;	// 72 = 0x48
    _Bool _isFilling;	// 80 = 0x50
    CAGradientLayer *_shimmerGradient;	// 88 = 0x58
    NSTimer *_idleUntilShimmerTimer;	// 96 = 0x60
    NSTimer *_reduceMotionShimmerTimer;	// 104 = 0x68
    id <SBUIPoseidonIconViewDelegate> _delegate;	// 112 = 0x70
    _UILegibilitySettings *_legibilitySettings;	// 120 = 0x78
    long long _state;	// 128 = 0x80
    struct CGAffineTransform _localTransform;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000000067768
@property(nonatomic) struct CGAffineTransform localTransform; // @synthesize localTransform=_localTransform;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic) __weak id <SBUIPoseidonIconViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x0000000000067636
- (void)_cancelRestToOpenIdleTimer;	// IMP=0x00000000000675f4
- (void)_startRestToOpenIdleTimer;	// IMP=0x0000000000067543
- (void)_stopShimmer;	// IMP=0x0000000000067414
- (void)_startReduceMotionShimmer;	// IMP=0x000000000006724c
- (void)_startShimmer;	// IMP=0x0000000000066e80
- (void)_cancelRestToOpenProgress;	// IMP=0x0000000000066c41
- (void)_contentSizeCategoryDidChange;	// IMP=0x0000000000066b59
- (struct CGRect)_physicalButtonNormalizedFrame;	// IMP=0x0000000000066ab2
- (double)_fontSize;	// IMP=0x00000000000668d1
- (void)layoutSubviews;	// IMP=0x00000000000660d6
- (void)resetRestToOpen;	// IMP=0x000000000006609b
- (void)fillRestToOpenWithDuration:(double)arg1;	// IMP=0x0000000000065e06
- (void)setState:(long long)arg1 forIdleTimeout:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000657a6
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000064ef9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
