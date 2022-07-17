//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class NSString, PXNumberAnimator, PXPointAnimator, PXStoryItemPlacement, PXStoryViewControllerTransition, PXStoryViewModel, PXSwipeDownTracker, PXUpdater, UIView;

@interface PXStoryViewDismissalController : NSObject <PXChangeObserver>
{
    _Bool _targetCancelled;	// 8 = 0x8
    PXStoryViewModel *_viewModel;	// 16 = 0x10
    PXUpdater *_updater;	// 24 = 0x18
    long long _state;	// 32 = 0x20
    PXStoryViewControllerTransition *_viewControllerTransition;	// 40 = 0x28
    UIView *_referenceView;	// 48 = 0x30
    PXStoryItemPlacement *_initialItemPlacement;	// 56 = 0x38
    PXSwipeDownTracker *_swipeDownTracker;	// 64 = 0x40
    PXNumberAnimator *_releaseAnimationProgressAnimator;	// 72 = 0x48
    PXNumberAnimator *_releaseAnimationDismissalProgressAnimator;	// 80 = 0x50
    PXPointAnimator *_centerOffsetAnimator;	// 88 = 0x58
    struct CGPoint _initialGestureLocation;	// 96 = 0x60
    struct CGPoint _currentGestureLocation;	// 112 = 0x70
    struct CGPoint _currentGestureVelocity;	// 128 = 0x80
    struct CGPoint _targetCenter;	// 144 = 0x90
    struct CGSize _sourceSize;	// 160 = 0xa0
    struct CGSize _targetSize;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x00000000002add58
@property(nonatomic) _Bool targetCancelled; // @synthesize targetCancelled=_targetCancelled;
@property(nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property(nonatomic) struct CGSize sourceSize; // @synthesize sourceSize=_sourceSize;
@property(nonatomic) struct CGPoint targetCenter; // @synthesize targetCenter=_targetCenter;
@property(retain, nonatomic) PXPointAnimator *centerOffsetAnimator; // @synthesize centerOffsetAnimator=_centerOffsetAnimator;
@property(retain, nonatomic) PXNumberAnimator *releaseAnimationDismissalProgressAnimator; // @synthesize releaseAnimationDismissalProgressAnimator=_releaseAnimationDismissalProgressAnimator;
@property(retain, nonatomic) PXNumberAnimator *releaseAnimationProgressAnimator; // @synthesize releaseAnimationProgressAnimator=_releaseAnimationProgressAnimator;
@property(retain, nonatomic) PXSwipeDownTracker *swipeDownTracker; // @synthesize swipeDownTracker=_swipeDownTracker;
@property(retain, nonatomic) PXStoryItemPlacement *initialItemPlacement; // @synthesize initialItemPlacement=_initialItemPlacement;
@property(nonatomic) struct CGPoint currentGestureVelocity; // @synthesize currentGestureVelocity=_currentGestureVelocity;
@property(nonatomic) struct CGPoint currentGestureLocation; // @synthesize currentGestureLocation=_currentGestureLocation;
@property(nonatomic) struct CGPoint initialGestureLocation; // @synthesize initialGestureLocation=_initialGestureLocation;
@property(retain, nonatomic) UIView *referenceView; // @synthesize referenceView=_referenceView;
@property(retain, nonatomic) PXStoryViewControllerTransition *viewControllerTransition; // @synthesize viewControllerTransition=_viewControllerTransition;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) PXUpdater *updater; // @synthesize updater=_updater;
@property(readonly, nonatomic) PXStoryViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000002adaf5
- (void)_updateCurrentPlacement;	// IMP=0x00000000002ad74e
- (void)_invalidateCurrentPlacement;	// IMP=0x00000000002ad70a
- (void)_updateSwipeDownTracker;	// IMP=0x00000000002acaad
- (void)_invalidateSwipeDownTracker;	// IMP=0x00000000002aca69
- (void)_updateInitialItemPlacement;	// IMP=0x00000000002ac9fa
- (void)_invalidateInitialItemPlacement;	// IMP=0x00000000002ac9b6
- (void)_setNeedsUpdate;	// IMP=0x00000000002ac92b
- (void)handlePanDownGestureRecognizer:(id)arg1;	// IMP=0x00000000002ac3d5
- (id)initWithViewModel:(id)arg1;	// IMP=0x00000000002ac2e5
- (id)init;	// IMP=0x00000000002ac26b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
