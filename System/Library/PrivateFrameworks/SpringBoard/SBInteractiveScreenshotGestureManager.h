//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSTransactionObserver-Protocol.h>
#import <SpringBoard/SBInteractiveScreenshotCommitWorkspaceTransactionDelegate-Protocol.h>
#import <SpringBoard/SBInteractiveScreenshotGestureRootViewControllerDelegate-Protocol.h>
#import <SpringBoard/SBMainDisplayWorkspaceAppInteractionEventSourceObserving-Protocol.h>
#import <SpringBoard/SBSystemGestureRecognizerDelegate-Protocol.h>

@class BSMonotonicReferenceTime, FBScene, NSHashTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSUUID, SBAsynchronousRenderingAssertion, SBCornerFingerPanGestureRecognizer, SBCornerPencilPanGestureRecognizer, SBInteractiveScreenshotCommitWorkspaceTransaction, SBInteractiveScreenshotSettings, SBMainDisplayWorkspaceAppInteractionEventSource, SBMainWorkspace, SBSystemGestureManager, UIScreen;
@protocol BSInvalidatable, SBInteractiveScreenshotGestureManagerDelegate;

@interface SBInteractiveScreenshotGestureManager : NSObject <BSTransactionObserver, SBInteractiveScreenshotCommitWorkspaceTransactionDelegate, SBInteractiveScreenshotGestureRootViewControllerDelegate, SBMainDisplayWorkspaceAppInteractionEventSourceObserving, SBSystemGestureRecognizerDelegate>
{
    NSUUID *_activeGestureSessionID;	// 8 = 0x8
    SBMainDisplayWorkspaceAppInteractionEventSource *_appInteractionEventSource;	// 16 = 0x10
    SBAsynchronousRenderingAssertion *_asynchronousRenderingAssertion;	// 24 = 0x18
    SBCornerPencilPanGestureRecognizer *_bottomLeftPencilGestureRecognizer;	// 32 = 0x20
    SBCornerFingerPanGestureRecognizer *_bottomLeftFingerGestureRecognizer;	// 40 = 0x28
    SBCornerPencilPanGestureRecognizer *_bottomRightPencilGestureRecognizer;	// 48 = 0x30
    SBCornerFingerPanGestureRecognizer *_bottomRightFingerGestureRecognizer;	// 56 = 0x38
    SBInteractiveScreenshotCommitWorkspaceTransaction *_commitTransaction;	// 64 = 0x40
    id <BSInvalidatable> _commitTransactionDisableGestureAssertion;	// 72 = 0x48
    NSMutableSet *_disableGestureAssertions;	// 80 = 0x50
    _Bool _hasInitiatedCommit;	// 88 = 0x58
    _Bool _isCapturingScreenshot;	// 89 = 0x59
    BSMonotonicReferenceTime *_lastApplicationTouchReferenceTime;	// 96 = 0x60
    NSMutableArray *_pendingCommitWorkspaceTransactionBlocks;	// 104 = 0x68
    UIScreen *_screen;	// 112 = 0x70
    NSMutableDictionary *_sessionIDToSession;	// 120 = 0x78
    SBInteractiveScreenshotSettings *_settings;	// 128 = 0x80
    FBScene *_sourceScene;	// 136 = 0x88
    SBSystemGestureManager *_systemGestureManager;	// 144 = 0x90
    NSHashTable *_weakReusableGestureRootWindows;	// 152 = 0x98
    SBMainWorkspace *_workspace;	// 160 = 0xa0
    id <SBInteractiveScreenshotGestureManagerDelegate> _delegate;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x00000000005034d7
@property(nonatomic) __weak id <SBInteractiveScreenshotGestureManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_screenshotPresentationOptions;	// IMP=0x0000000000503472
- (void)_performPendingCommitWorkspaceTransactionBlocksWithTransaction:(id)arg1;	// IMP=0x0000000000503325
- (void)_performCommitWorkspaceTransactionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000503277
- (void)_invalidateSessionID:(id)arg1;	// IMP=0x000000000050303d
- (void)_handleInteractiveScreenshotGesture:(id)arg1;	// IMP=0x0000000000502bb4
- (id)acquireDisableGestureAssertionWithReason:(id)arg1;	// IMP=0x00000000005029f6
- (_Bool)handleRemoteTransientOverlayPresentationRequest:(id)arg1 forSession:(id)arg2;	// IMP=0x00000000005028f7
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x00000000005027cd
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000005025ec
- (id)viewForSystemGestureRecognizer:(id)arg1;	// IMP=0x00000000005025e4
- (void)eventSource:(id)arg1 userTouchedApplication:(id)arg2;	// IMP=0x000000000050259f
- (void)interactiveScreenshotGestureRootViewControllerRequestsGestureRecognizerCancellation:(id)arg1;	// IMP=0x000000000050250c
- (void)interactiveScreenshotGestureRootViewController:(id)arg1 gestureDidCompleteWithIntent:(long long)arg2;	// IMP=0x0000000000501b02
- (void)interactiveScreenshotCommitWorkspaceTransactionRequestsGestureWindowInvalidation:(id)arg1;	// IMP=0x0000000000501aa2
- (void)interactiveScreenshotCommitWorkspaceTransactionRequestsPlaceholderChromeRemoval:(id)arg1;	// IMP=0x0000000000501a02
- (void)transactionDidComplete:(id)arg1;	// IMP=0x00000000005019a3
- (void)_springBoardBootCompleted:(id)arg1;	// IMP=0x0000000000501991
- (void)_updateFailureRequirements;	// IMP=0x0000000000501970
- (void)dealloc;	// IMP=0x000000000050190f
- (id)initWithScreen:(id)arg1 sourceScene:(id)arg2 workspace:(id)arg3 systemGestureManager:(id)arg4 appInteractionEventSource:(id)arg5;	// IMP=0x0000000000501507

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
