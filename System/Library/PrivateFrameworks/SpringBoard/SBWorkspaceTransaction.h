//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FBSDisplayConfiguration, FBSDisplayIdentity, SBLayoutStateTransitionCoordinator, SBSceneLayoutViewController, SBSceneManager, SBUIAnimationController, SBWorkspaceTransitionRequest;

@interface SBWorkspaceTransaction
{
    SBUIAnimationController *_suggestedAnimationController;	// 8 = 0x8
    SBWorkspaceTransitionRequest *_transitionRequestForPendingInterruption;	// 16 = 0x10
    SBSceneManager *_sceneManager;	// 24 = 0x18
    _Bool _clearsCompletionAsynchronously;	// 32 = 0x20
    SBWorkspaceTransitionRequest *_transitionRequest;	// 40 = 0x28
    SBSceneLayoutViewController *_layoutController;	// 48 = 0x30
    SBLayoutStateTransitionCoordinator *_layoutStateTransitionCoordinator;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000004c899
@property(readonly, nonatomic) SBSceneManager *sceneManager; // @synthesize sceneManager=_sceneManager;
@property(readonly, nonatomic) SBLayoutStateTransitionCoordinator *layoutStateTransitionCoordinator; // @synthesize layoutStateTransitionCoordinator=_layoutStateTransitionCoordinator;
@property(nonatomic) _Bool clearsCompletionAsynchronously; // @synthesize clearsCompletionAsynchronously=_clearsCompletionAsynchronously;
@property(retain, nonatomic) SBUIAnimationController *suggestedAnimationController; // @synthesize suggestedAnimationController=_suggestedAnimationController;
@property(readonly, nonatomic) SBSceneLayoutViewController *layoutController; // @synthesize layoutController=_layoutController;
@property(readonly, nonatomic) SBWorkspaceTransitionRequest *transitionRequest; // @synthesize transitionRequest=_transitionRequest;
- (void)_didInterruptForTransitionRequest:(id)arg1;	// IMP=0x000000000057cc90
- (void)_willInterruptForTransitionRequest:(id)arg1;	// IMP=0x000000000057caee
- (id)_transitionRequestForInterruption;	// IMP=0x000000000057cad9
- (_Bool)_isInterruptingForTransitionRequest;	// IMP=0x0000000000063545
- (id)_childWorkspaceTransactions;	// IMP=0x000000000057ca7a
- (void)_performDeviceCoherencyCheck;	// IMP=0x000000000004b376
- (id)_customizedDescriptionProperties;	// IMP=0x0000000000063476
- (void)_didComplete;	// IMP=0x000000000004b338
- (void)interruptForTransitionRequest:(id)arg1;	// IMP=0x00000000000749b7
- (_Bool)canInterruptForTransitionRequest:(id)arg1;	// IMP=0x000000000057ca72
- (void)keepAliveForAsyncBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000057c979
@property(readonly, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property(readonly, nonatomic) FBSDisplayIdentity *displayIdentity;
- (id)initWithTransitionRequest:(id)arg1;	// IMP=0x000000000000c1bd
- (id)init;	// IMP=0x000000000057c8d5

@end
