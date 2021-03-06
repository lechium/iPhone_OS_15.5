//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/FBSceneManagerObserver-Protocol.h>
#import <SpringBoard/SBApplicationHosting-Protocol.h>
#import <SpringBoard/SBInCallPresentationRequestServerDelegate-Protocol.h>
#import <SpringBoard/SBInCallPresentationSessionDelegate-Protocol.h>
#import <SpringBoard/SBMainDisplaySceneManagerObserver-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, SBApplicationController, SBExpanseBannerAuthority, SBHideSharePlayContentFromSharedScreenController, SBInCallBannerAuthority, SBInCallPresentationRequestServer, SBInCallPresentationSession, SBMainDisplaySceneManager;
@protocol SBInCallPresentationManagerDelegate;

@interface SBInCallPresentationManager : NSObject <SBInCallPresentationSessionDelegate, SBInCallPresentationRequestServerDelegate, FBSceneManagerObserver, SBMainDisplaySceneManagerObserver, SBApplicationHosting>
{
    SBApplicationController *_applicationController;	// 8 = 0x8
    SBInCallPresentationRequestServer *_presentationRequestServer;	// 16 = 0x10
    SBInCallBannerAuthority *_inCallBannerAuthority;	// 24 = 0x18
    SBExpanseBannerAuthority *_expanseBannerAuthority;	// 32 = 0x20
    NSMutableDictionary *_clientIdentifierToPresentationSession;	// 40 = 0x28
    NSMutableArray *_pendingInvalidationSessions;	// 48 = 0x30
    NSMutableSet *_bundleIdentifiersOfObservedApplications;	// 56 = 0x38
    _Bool _supportsHandlingUILockForWindowedAccessoryAttach;	// 64 = 0x40
    SBHideSharePlayContentFromSharedScreenController *_lazy_hideSharePlayContentFromSharedScreenController;	// 72 = 0x48
    id <SBInCallPresentationManagerDelegate> _delegate;	// 80 = 0x50
    SBMainDisplaySceneManager *_sceneManager;	// 88 = 0x58
}

+ (_Bool)isSpecializedAPISupported;	// IMP=0x00000000003fb59c
- (void).cxx_destruct;	// IMP=0x00000000003fe1c4
@property(readonly, nonatomic) _Bool supportsHandlingUILockForWindowedAccessoryAttach; // @synthesize supportsHandlingUILockForWindowedAccessoryAttach=_supportsHandlingUILockForWindowedAccessoryAttach;
@property(readonly, nonatomic) SBMainDisplaySceneManager *sceneManager; // @synthesize sceneManager=_sceneManager;
@property(nonatomic) __weak id <SBInCallPresentationManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_hasPendingDismissalOfSceneHandleWithPersistenceIdentifier:(id)arg1;	// IMP=0x00000000003fe077
- (_Bool)_isManagingSceneOrSceneHandleWithPersistenceIdentifier:(id)arg1;	// IMP=0x00000000003fdf40
- (void)_runZombieChecksForSceneHandle:(id)arg1;	// IMP=0x00000000003fddb8
- (void)_runZombieChecksForScene:(id)arg1;	// IMP=0x00000000003fdd15
- (void)_applicationDidExit:(id)arg1;	// IMP=0x00000000003fdcc6
- (id)_newClientPresentationSessionWithSceneHandle:(id)arg1;	// IMP=0x00000000003fdc5d
- (id)_hostedPresentationSessions;	// IMP=0x00000000003fdbd8
- (void)_dismissClientWithIdentifier:(id)arg1 animated:(_Bool)arg2 analyticsSource:(id)arg3 reason:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000003fd71f
- (id)_sessionForSceneWithIdentifier:(id)arg1;	// IMP=0x00000000003fd50b
@property(readonly, nonatomic) SBInCallPresentationSession *_lastPresentationSession;
- (void)_dismissAllPresentations;	// IMP=0x00000000003fd32c
- (void)_dismissAllPresentationsForApplication:(id)arg1;	// IMP=0x00000000003fd0e2
@property(readonly, nonatomic) SBHideSharePlayContentFromSharedScreenController *hideSharePlayContentFromSharedScreenController; // @synthesize hideSharePlayContentFromSharedScreenController=_lazy_hideSharePlayContentFromSharedScreenController;
@property(readonly, nonatomic) _Bool hasFullscreenActiveCallInSwitcher;
- (void)ensureSwitcherInclusionForRestoringFromPIPForSceneWithPersistenceIdentifer:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003fcc70
- (void)handleOpenApplicationRequest:(id)arg1 clientWorkspace:(id)arg2 actions:(id)arg3 origin:(id)arg4 withResult:(CDUnknownBlockType)arg5;	// IMP=0x00000000003fc639
- (_Bool)canHandleOpenApplicationRequestForApplication:(id)arg1;	// IMP=0x00000000003fc58c
- (void)reactivateInCallForReason:(long long)arg1;	// IMP=0x00000000003fc453
- (void)handleDeviceLockFromSource:(int)arg1;	// IMP=0x00000000003fbe6b
- (_Bool)handleHeadsetButtonPress:(_Bool)arg1;	// IMP=0x00000000003fbd1d
- (void)handlePresentationForActivityContinuationIdentifier:(id)arg1;	// IMP=0x00000000003fbc99
- (void)handleAccessoryAttachWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000003fbb2a
- (_Bool)supportsBecomingVisibleWhenUnlockingFromSource:(int)arg1 wakingDisplay:(_Bool)arg2;	// IMP=0x00000000003fb9d0
@property(readonly, nonatomic) _Bool disallowsLockHardwareButtonDoublePress;
@property(readonly, nonatomic) _Bool supportsHandlingDeviceLock;
- (id)overrideAppSceneEntityForLaunchingApplication:(id)arg1;	// IMP=0x00000000003fb5d7
- (_Bool)hasOverrideAppSceneEntityForLaunchingApplication:(id)arg1;	// IMP=0x00000000003fb5a4
- (void)sceneManager:(id)arg1 didAddScene:(id)arg2;	// IMP=0x00000000003fb587
- (void)sceneManager:(id)arg1 didAddExternalForegroundApplicationSceneHandle:(id)arg2;	// IMP=0x00000000003fb572
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1;	// IMP=0x00000000003fb438
- (id)hostedAppSceneHandles;	// IMP=0x00000000003fb3a2
- (id)hostedAppSceneHandle;	// IMP=0x00000000003fb304
- (_Bool)isHostingAnApp;	// IMP=0x00000000003fb2a4
- (_Bool)canHostAnApp;	// IMP=0x00000000003fb29c
- (void)conformsToSBApplicationHosting;	// IMP=0x00000000003fb296
- (struct UIEdgeInsets)inCallClientPresentationSessionResolvedPIPDodgingInsets:(id)arg1;	// IMP=0x00000000003fb0cb
- (void)inCallPresentationRequestServer:(id)arg1 clientWithIdentifierDidInvalidate:(id)arg2;	// IMP=0x00000000003fb0c5
- (void)inCallPresentationRequestServer:(id)arg1 clientWithIdentifier:(id)arg2 requestsPresentationWithConfiguration:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000003fa3a3
- (_Bool)inCallClientPresentationSession:(id)arg1 canRestoreToPreviousEntity:(id)arg2;	// IMP=0x00000000003fa10c
- (id)inCallClientPresentationSession:(id)arg1 acquireHideSharePlayContentFromClonedDisplaysAssertionForReason:(id)arg2;	// IMP=0x00000000003fa089
- (void)inCallClientPresentationSession:(id)arg1 callConnectedStatusChangedForPresentableViewController:(id)arg2;	// IMP=0x00000000003fa070
- (long long)inCallClientPresentationSessionInterfaceOrientationForTransientOverlayPresentation:(id)arg1;	// IMP=0x00000000003fa033
- (long long)inCallClientPresentationSessionInterfaceOrientationForBannerPresentation:(id)arg1;	// IMP=0x00000000003f9ff6
- (void)inCallClientPresentationSessionSceneWasDestroyed:(id)arg1;	// IMP=0x00000000003f9cdf
- (void)inCallClientPresentationSession:(id)arg1 handleDestroySceneActionWithReason:(long long)arg2 analyticsSource:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000003f98cb
- (id)initWithSceneManager:(id)arg1 applicationController:(id)arg2 bannerManager:(id)arg3;	// IMP=0x00000000003f96ca

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

