//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBSceneManagerObserver-Protocol.h>
#import <SpringBoard/_UIEventDeferringSystemShellBehaviorDelegate-Protocol.h>
#import <SpringBoard/_UIKeyboardArbiterOmniscientDelegate-Protocol.h>

@class BKSHIDEventDeferringTarget, BSCompoundAssertion, FBSSceneIdentityToken, FBScene, FBSceneManager, NSString, SBMainWorkspace, SBSceneManager, SBSceneManagerCoordinator, UIWindow, _SBKeyboardFocusPolicy, _SBRecentlyUsedSceneIdentityCache;
@protocol BSInvalidatable, _UIKeyboardArbiterAdvisor;

@interface SBWorkspaceKeyboardFocusController : NSObject <_UIKeyboardArbiterOmniscientDelegate, SBSceneManagerObserver, _UIEventDeferringSystemShellBehaviorDelegate>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _SBKeyboardFocusPolicy *_lock_effectivePolicy;	// 16 = 0x10
    FBSSceneIdentityToken *_lock_springBoardLayoutSceneIdentityToken;	// 24 = 0x18
    struct os_unfair_lock_s _arbiterLock;	// 32 = 0x20
    id <_UIKeyboardArbiterAdvisor> _arbiterLock_keyboardArbiterAdvisor;	// 40 = 0x28
    unsigned long long _userFocusRequestGeneration;	// 48 = 0x30
    FBScene *_externalSceneWithFocus;	// 56 = 0x38
    SBMainWorkspace *_workspace;	// 64 = 0x40
    SBSceneManagerCoordinator *_sceneCoordinator;	// 72 = 0x48
    SBSceneManager *_mainDisplaySceneManager;	// 80 = 0x50
    FBSceneManager *_frontBoardSceneManager;	// 88 = 0x58
    BSCompoundAssertion *_observers;	// 96 = 0x60
    BSCompoundAssertion *_appFocusRedirections;	// 104 = 0x68
    BSCompoundAssertion *_springBoardFocusRedirections;	// 112 = 0x70
    BSCompoundAssertion *_springBoardFocusLockAssertions;	// 120 = 0x78
    BSCompoundAssertion *_preventFocusForSceneAssertion;	// 128 = 0x80
    id <BSInvalidatable> _rootSceneKeyboardFocusRule;	// 136 = 0x88
    id <BSInvalidatable> _localToRemoteKeyboardFocusRule;	// 144 = 0x90
    BKSHIDEventDeferringTarget *_keyboardFocusTarget;	// 152 = 0x98
    BKSHIDEventDeferringTarget *_sentKeyboardFocusTarget;	// 160 = 0xa0
    FBScene *_targetSceneForKeyboardFocusDeferring;	// 168 = 0xa8
    UIWindow *_sentKeyboardFocusPredicateWindow;	// 176 = 0xb0
    _SBRecentlyUsedSceneIdentityCache *_recentlyUsedScenes;	// 184 = 0xb8
}

+ (id)new;	// IMP=0x000000000052bb90
- (void).cxx_destruct;	// IMP=0x0000000000530dcc
@property(readonly, nonatomic) FBScene *externalSceneWithFocus; // @synthesize externalSceneWithFocus=_externalSceneWithFocus;
@property(nonatomic) unsigned long long userFocusRequestGeneration; // @synthesize userFocusRequestGeneration=_userFocusRequestGeneration;
- (void)_reevaluatePolicyAndUpdateRulesFromKeyWindowNotification;	// IMP=0x0000000000530da4
- (_Bool)_setKeyboardFocusPolicy:(id)arg1;	// IMP=0x000000000052e7e1
- (id)keyboardArbiterAdvisor:(id)arg1 requestedSceneFocusDeliberationForFocusedPid:(int)arg2;	// IMP=0x000000000052e2e9
- (id)_filterFocusedSceneIdentityToken:(id)arg1 focusedPID:(int)arg2 resultBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000052da70
- (void)sceneManager:(id)arg1 didRemoveExternalForegroundApplicationSceneHandle:(id)arg2;	// IMP=0x000000000052d709
- (void)sceneManager:(id)arg1 didAddExternalForegroundApplicationSceneHandle:(id)arg2;	// IMP=0x000000000052d508
- (_Bool)eventDeferringManagerSystemShellBehavior:(id)arg1 shouldSuppressRemoteRuleForOwningElement:(id)arg2 inEnvironment:(id)arg3;	// IMP=0x000000000052d3c6
- (_Bool)eventDeferringManagerSystemShellBehaviorWantsLocalCompatibilityRules;	// IMP=0x000000000052d3be
- (void)_updateAccessibilityDeferringRulesUnderstandingSpringBoardIsForeground:(_Bool)arg1;	// IMP=0x000000000052d3b8
- (int)presentingKeyboardProcessIdentifier;	// IMP=0x000000000052d380
- (void)userFocusRequestForScene:(id)arg1 reason:(id)arg2;	// IMP=0x000000000052cf89
- (id)preventFocusForSceneWithIdentityToken:(id)arg1 reason:(id)arg2;	// IMP=0x000000000052cda5
- (id)redirectFocusForReason:(id)arg1 fromProcessIdentifier:(int)arg2 fromDeferringToken:(id)arg3 toProcessidentifier:(int)arg4 toDeferringToken:(id)arg5;	// IMP=0x000000000052cb50
- (id)redirectSpringBoardLockFocusForReason:(id)arg1 toProcessidentifier:(int)arg2 toDeferringToken:(id)arg3;	// IMP=0x000000000052c906
- (id)lockFocusToSpringBoardForReason:(id)arg1;	// IMP=0x000000000052c793
- (id)addKeyboardFocusObserver:(id)arg1;	// IMP=0x000000000052c6fa
- (void)updateKeyboardFocusDeferringRules;	// IMP=0x000000000052c67d
@property(readonly, copy) NSString *description;
- (id)initWithWorkspace:(id)arg1;	// IMP=0x000000000052c18e
- (id)_initWithWorkspace:(id)arg1 sceneCoordinator:(id)arg2 mainDisplaySceneManager:(id)arg3 frontBoardSceneManager:(id)arg4 installUIKitDependencies:(_Bool)arg5 initializeKeyboardArbiter:(_Bool)arg6 defaultSpringBoardLayoutSceneIdentityToken:(id)arg7;	// IMP=0x000000000052bc9a
- (id)init;	// IMP=0x000000000052bc10

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

