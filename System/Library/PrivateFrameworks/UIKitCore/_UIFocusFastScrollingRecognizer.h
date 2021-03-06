//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIFocusEnginePanGestureTouchObserver-Protocol.h>

@class NSMapTable, NSString, NSTimer, UIScrollView, _UIFocusEnginePanGestureRecognizer, _UIFocusFastScrollingTouchSequence;
@protocol _UIFocusFastScrollingRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface _UIFocusFastScrollingRecognizer : NSObject <_UIFocusEnginePanGestureTouchObserver>
{
    _UIFocusEnginePanGestureRecognizer *_panGesture;	// 8 = 0x8
    _UIFocusFastScrollingTouchSequence *_currentTouch;	// 16 = 0x10
    NSMapTable *_swipeSequences;	// 24 = 0x18
    NSTimer *_swipeIntervalTimer;	// 32 = 0x20
    UIScrollView *_previewingScrollView;	// 40 = 0x28
    NSTimer *_previewingTouchTimer;	// 48 = 0x30
    unsigned long long _spatialFocusUpdateCount;	// 56 = 0x38
    _Bool _persistFastScrollingPreviewThroughReset;	// 64 = 0x40
    _Bool _enabled;	// 65 = 0x41
    id <_UIFocusFastScrollingRecognizerDelegate> _delegate;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000006f639b
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak id <_UIFocusFastScrollingRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)focusEnginePanGesture:(id)arg1 touchCancelledAtDigitizerLocation:(struct CGPoint)arg2;	// IMP=0x00000000006f631e
- (void)focusEnginePanGesture:(id)arg1 touchEndedAtDigitizerLocation:(struct CGPoint)arg2;	// IMP=0x00000000006f62d1
- (void)focusEnginePanGesture:(id)arg1 touchMovedToDigitizerLocation:(struct CGPoint)arg2;	// IMP=0x00000000006f6268
- (void)focusEnginePanGesture:(id)arg1 touchBeganAtDigitizerLocation:(struct CGPoint)arg2;	// IMP=0x00000000006f61ff
- (void)_deactivatePreviewingScrollViewIfNecessary;	// IMP=0x00000000006f6197
- (void)_activatePreviewingScrollViewForScrollingStyle:(long long)arg1 emphasisAnimation:(_Bool)arg2 overrideIndexDisplayMode:(_Bool)arg3;	// IMP=0x00000000006f60dc
- (void)_activatePreviewingScrollViewForEdgeGesture;	// IMP=0x00000000006f60c0
- (void)_activatePreviewingScrollViewForEdgeGestureAfterDelay;	// IMP=0x00000000006f605e
- (void)_notifyDelegateWithScrollView:(id)arg1 scrollingStyle:(long long)arg2 heading:(unsigned long long)arg3;	// IMP=0x00000000006f5f4a
- (_Bool)_scrollViewIsEligibleForFastScrolling:(id)arg1 alongHeading:(unsigned long long)arg2 withScrollingStyle:(long long)arg3;	// IMP=0x00000000006f5e0d
- (id)_scrollViewsContainingCurrentlyFocusedItem;	// IMP=0x00000000006f5af1
- (_Bool)_attemptToImmediatelyRecognizeEdgeGesture;	// IMP=0x00000000006f5925
- (id)_deepestEligibleScrollViewContainingFocusedItem:(unsigned long long)arg1 withScrollingStyle:(long long)arg2;	// IMP=0x00000000006f578d
- (_Bool)_canFastScrollWithEdgeSwipe;	// IMP=0x00000000006f5785
- (_Bool)_swipeSequenceCanBeginFastScrolling:(id)arg1;	// IMP=0x00000000006f5735
- (void)_updateActiveSwipeSequencesForScrollViews:(id)arg1;	// IMP=0x00000000006f531f
- (unsigned long long)_bestHeadingForAccumulator:(struct CGVector)arg1;	// IMP=0x00000000006f51be
- (void)_swipeIntervalElapsed:(id)arg1;	// IMP=0x00000000006f51ac
- (void)_stopSwipeIntervalTimer;	// IMP=0x00000000006f517b
- (void)_startSwipeIntervalTimer;	// IMP=0x00000000006f50a5
- (void)_swipeOccuredAlongHeading:(unsigned long long)arg1;	// IMP=0x00000000006f493a
- (void)_touchSequenceDidEnd:(id)arg1;	// IMP=0x00000000006f4783
- (void)reset;	// IMP=0x00000000006f45a4
- (void)_handlePanGesture:(id)arg1;	// IMP=0x00000000006f4187
- (void)joystickMovementWithHeading:(unsigned long long)arg1 didRepeat:(unsigned long long)arg2;	// IMP=0x00000000006f4108
- (void)directionalPressWithHeading:(unsigned long long)arg1 didRepeat:(unsigned long long)arg2;	// IMP=0x00000000006f4089
- (void)_focusDidUpate:(id)arg1;	// IMP=0x00000000006f3d43
- (void)dealloc;	// IMP=0x00000000006f3c93
- (id)initWithPanGesture:(id)arg1;	// IMP=0x00000000006f3b97

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

