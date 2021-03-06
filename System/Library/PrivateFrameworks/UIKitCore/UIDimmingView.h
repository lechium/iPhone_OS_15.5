//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/_UIEventObserver-Protocol.h>

@class NSArray, NSMutableSet, NSString, UIBarButtonItem, UIColor, UIEvent, UIImageView, UITapGestureRecognizer;
@protocol UIDimmingViewDelegate;

__attribute__((visibility("hidden")))
@interface UIDimmingView <_UIEventObserver, UIGestureRecognizerDelegate>
{
    UIBarButtonItem *_highlightedBarButtonItem;	// 120 = 0x78
    UIImageView *_highlightedImageView;	// 128 = 0x80
    UIImageView *_backgroundGlow;	// 136 = 0x88
    NSArray *_passthroughViews;	// 144 = 0x90
    _Bool _ignoresTouches;	// 152 = 0x98
    _Bool _inPassthroughHitTest;	// 153 = 0x99
    UIColor *_dimmingColor;	// 160 = 0xa0
    UITapGestureRecognizer *_singleFingerTapRecognizer;	// 168 = 0xa8
    UIEvent *_observedEventForAdditionalGestures;	// 176 = 0xb0
    NSMutableSet *_additionalEventGestureRecognizers;	// 184 = 0xb8
    _Bool _suppressesBackdrops;	// 192 = 0xc0
    id <UIDimmingViewDelegate> _delegate;	// 200 = 0xc8
    double _percentDisplayed;	// 208 = 0xd0
    double _percentLightened;	// 216 = 0xd8
    NSArray *_lowerWindowDismissalGestureViews;	// 224 = 0xe0
}

+ (id)defaultDimmingColor;	// IMP=0x0000000001245eae
- (void).cxx_destruct;	// IMP=0x0000000001248175
@property(copy, nonatomic) NSArray *lowerWindowDismissalGestureViews; // @synthesize lowerWindowDismissalGestureViews=_lowerWindowDismissalGestureViews;
@property(nonatomic) double percentLightened; // @synthesize percentLightened=_percentLightened;
@property(nonatomic) double percentDisplayed; // @synthesize percentDisplayed=_percentDisplayed;
@property(nonatomic) _Bool suppressesBackdrops; // @synthesize suppressesBackdrops=_suppressesBackdrops;
@property(retain, nonatomic) UIColor *dimmingColor; // @synthesize dimmingColor=_dimmingColor;
@property(nonatomic) _Bool ignoresTouches; // @synthesize ignoresTouches=_ignoresTouches;
@property(copy, nonatomic) NSArray *passthroughViews; // @synthesize passthroughViews=_passthroughViews;
@property(nonatomic) __weak id <UIDimmingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isTransparentFocusItem;	// IMP=0x0000000001247fda
- (id)_gestureRecognizersForEvent:(id)arg1;	// IMP=0x0000000001247f79
- (void)_clearAdditionalEventGestures;	// IMP=0x0000000001247f29
- (void)_queueAdditionalEventGesturesFromView:(id)arg1;	// IMP=0x0000000001247d89
- (void)_sendDelegateDimmingViewWasTapped;	// IMP=0x0000000001247cff
- (void)_simulateTap;	// IMP=0x0000000001247cde
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000001247ca5
- (void)handleSingleTap:(id)arg1;	// IMP=0x0000000001247c69
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000001247be0
- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;	// IMP=0x000000000124780c
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000001246ff6
- (void)mouseUp:(struct __GSEvent *)arg1;	// IMP=0x0000000001246fe4
- (void)updateBackgroundColor;	// IMP=0x0000000001246ca3
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000001246c0c
- (void)display:(_Bool)arg1 withAnimationDuration:(double)arg2 afterDelay:(double)arg3;	// IMP=0x0000000001246996
- (void)display:(_Bool)arg1;	// IMP=0x00000000012467ad
@property(readonly, nonatomic) _Bool displayed;
- (id)_backdropViewsToAnimate;	// IMP=0x000000000124653b
@property(retain, nonatomic) UIBarButtonItem *highlightedBarButtonItem;
- (void)dimmingRemovalAnimationDidStop;	// IMP=0x00000000012460fc
- (int)textEffectsVisibilityLevel;	// IMP=0x00000000012460f1
- (void)willMoveToWindow:(id)arg1;	// IMP=0x00000000012460b0
- (void)dealloc;	// IMP=0x0000000001246065
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000001245ec7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

