//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIGestureRecognizerDelegatePrivate-Protocol.h>

@class NSMutableArray, NSString, UIGestureRecognizer, UIView, UIViewController, _UIAccessibilityHUDGateGestureRecognizer, _UIAccessibilityHUDLongPressGestureRecognizer;
@protocol UIAccessibilityHUDGestureDelegate;

@interface UIAccessibilityHUDGestureManager : NSObject <UIGestureRecognizerDelegatePrivate>
{
    UIView *_view;	// 8 = 0x8
    id <UIAccessibilityHUDGestureDelegate> _delegate;	// 16 = 0x10
    UIViewController *_viewControllerDisplayingHUD;	// 24 = 0x18
    _UIAccessibilityHUDLongPressGestureRecognizer *_recognizer;	// 32 = 0x20
    _UIAccessibilityHUDGateGestureRecognizer *_gateRecognizer;	// 40 = 0x28
    NSMutableArray *_subscribedConcurrentGestureRecognizers;	// 48 = 0x30
    _Bool _delegateDirectlyShowsHUD;	// 56 = 0x38
    _Bool _isInvalidated;	// 57 = 0x39
}

- (void).cxx_destruct;	// IMP=0x0000000000014967
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void)_gestureRecognizerChanged:(id)arg1;	// IMP=0x0000000000014789
- (void)_openGate;	// IMP=0x0000000000014773
- (id)_bestViewControllerForView;	// IMP=0x000000000001450b
- (void)_didToggleLargeContentViewer:(id)arg1;	// IMP=0x00000000000144d3
- (void)_dismissAccessibilityHUD;	// IMP=0x0000000000014461
- (void)_showAccessibilityHUDItem:(id)arg1;	// IMP=0x0000000000014366
- (void)_backOff;	// IMP=0x0000000000014306
- (void)_concurrentGestureRecognizerFired:(id)arg1;	// IMP=0x00000000000142f4
- (_Bool)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000014199
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000000140d0
- (void)_clearButtonItemGestureSubscriptions;	// IMP=0x0000000000013f49
- (id)_subscribedConcurrentGestureRecognizers;	// IMP=0x0000000000013efe
- (void)_invalidate;	// IMP=0x0000000000013e14
- (void)_setRecognizersEnabled:(_Bool)arg1;	// IMP=0x0000000000013dd4
@property(readonly, nonatomic) UIGestureRecognizer *_recognizer;
- (void)dealloc;	// IMP=0x0000000000013d88
- (id)initWithView:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000000013acd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

