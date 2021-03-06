//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/SBSwitcherContextProviding-Protocol.h>
#import <SpringBoard/SBSwitcherMultitaskingQueryProviding-Protocol.h>

@class NSString;

@interface SBSwitcherModifier <SBSwitcherMultitaskingQueryProviding, SBSwitcherContextProviding>
{
    _Bool _verifyModifierStackCoherencyCheckAfterHandlingEvent;	// 24 = 0x18
}

+ (id)newEventResponse;	// IMP=0x00000000005e7648
+ (id)queryProtocol;	// IMP=0x00000000005e73f7
+ (id)contextProtocol;	// IMP=0x00000000005e73e6
- (id)handleShelfFocusedDisplayItemsChangedEvent:(id)arg1;	// IMP=0x00000000005e7be8
- (id)handleAnimatablePropertyChangedEvent:(id)arg1;	// IMP=0x00000000005e7be0
- (id)handleHideMorphToPIPAppLayoutEvent:(id)arg1;	// IMP=0x00000000005e7bd8
- (id)handleSlideOverEdgeProtectTongueEvent:(id)arg1;	// IMP=0x00000000005e7bd0
- (id)handleSwitcherDropEvent:(id)arg1;	// IMP=0x00000000005e7bc8
- (id)handleSceneReadyEvent:(id)arg1;	// IMP=0x00000000005e7bc0
- (id)handleBlurProgressEvent:(id)arg1;	// IMP=0x00000000005e7bb8
- (id)handleResizeProgressEvent:(id)arg1;	// IMP=0x00000000005e7bb0
- (id)handleUpdateFocusedAppLayoutEvent:(id)arg1;	// IMP=0x00000000005e7ba8
- (id)handleScrollEvent:(id)arg1;	// IMP=0x00000000005e7ba0
- (id)handleTapSlideOverTongueEvent:(id)arg1;	// IMP=0x00000000005e7b98
- (id)handleTapAppLayoutEvent:(id)arg1;	// IMP=0x00000000005e7b90
- (id)handleTapOutsideToDismissEvent:(id)arg1;	// IMP=0x00000000005e7b88
- (id)handleTimerEvent:(id)arg1;	// IMP=0x00000000005e7b80
- (id)handleRemovalEvent:(id)arg1;	// IMP=0x00000000005e7b78
- (id)handleInsertionEvent:(id)arg1;	// IMP=0x00000000005e7b70
- (id)handleHighlightEvent:(id)arg1;	// IMP=0x00000000005e7b68
- (id)handleSwipeToKillEvent:(id)arg1;	// IMP=0x00000000005e7b60
- (id)handleHomeGrabberSettingsChangedEvent:(id)arg1;	// IMP=0x00000000005e7b58
- (id)handleMedusaSettingsChangedEvent:(id)arg1;	// IMP=0x00000000005e7b50
- (id)handleHomeGestureSettingsChangedEvent:(id)arg1;	// IMP=0x00000000005e7b48
- (id)handleSwitcherSettingsChangedEvent:(id)arg1;	// IMP=0x00000000005e7b40
- (id)handleReduceMotionChangedEvent:(id)arg1;	// IMP=0x00000000005e7b38
- (id)handleGestureEvent:(id)arg1;	// IMP=0x00000000005e7b30
- (id)handleTransitionEvent:(id)arg1;	// IMP=0x00000000005e7b28
- (id)handleInitialSetupEvent:(id)arg1;	// IMP=0x00000000005e7b20
- (id)displayName;	// IMP=0x00000000005e785f
- (id)stackDescriptionWithPrefix:(id)arg1;	// IMP=0x00000000005e767c
- (id)stackDescription;	// IMP=0x00000000005e7663
- (id)loggingCategory;	// IMP=0x00000000005e7659
- (_Bool)runsInternalVerificationAfterEventDispatch;	// IMP=0x00000000005e7638
- (id)_handleEvent:(id)arg1;	// IMP=0x00000000005e7408
- (id)init;	// IMP=0x00000000005e735f
- (void)performWithTemporarilyInsertedAppLayout:(id)arg1 atIndex:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000003e8c67
- (unsigned long long)indexOfFirstFloatingAppFromAppLayouts:(id)arg1;	// IMP=0x00000000003e8b57
- (unsigned long long)indexOfFirstMainAppLayoutFromAppLayouts:(id)arg1;	// IMP=0x00000000003e8a49
- (id)defaultAppLayoutsToCacheSnapshots;	// IMP=0x00000000003e8970
- (id)appLayoutsToCacheSnapshotsWithVisibleRange:(struct _NSRange)arg1 numberOfSnapshotsToCache:(unsigned long long)arg2 biasForward:(_Bool)arg3;	// IMP=0x00000000003e826c
- (struct CGRect)scaledFrameForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000003e7f6c
- (struct CGRect)scaledFrameForIndex:(unsigned long long)arg1;	// IMP=0x00000000003e7ef4
- (double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(unsigned long long)arg1 numberOfRows:(unsigned long long)arg2 padding:(double)arg3 layoutDirection:(unsigned long long)arg4;	// IMP=0x00000000003e7b53

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

