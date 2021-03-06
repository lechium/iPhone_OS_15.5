//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBSceneLayoutSlaveTransactionProviding-Protocol.h>

@class FBSDisplayConfiguration, FBSDisplayIdentity, NSMutableArray, NSString, SBExternalDisplayPresenter, SBMainDisplaySceneManager, SBMainWorkspace;
@protocol SBFAuthenticationStatusProvider;

@interface SBExternalDisplayController : NSObject <SBSceneLayoutSlaveTransactionProviding>
{
    SBMainWorkspace *_mainWorkspace;	// 8 = 0x8
    id <SBFAuthenticationStatusProvider> _userAuthenticationProvider;	// 16 = 0x10
    SBMainDisplaySceneManager *_mainDisplaySceneManager;	// 24 = 0x18
    FBSDisplayIdentity *_identity;	// 32 = 0x20
    SBExternalDisplayPresenter *_presenter;	// 40 = 0x28
    FBSDisplayConfiguration *_currentConfiguration;	// 48 = 0x30
    _Bool _observingAppState;	// 56 = 0x38
    _Bool _hasConnectTransactionRun;	// 57 = 0x39
    _Bool _disconnected;	// 58 = 0x3a
    _Bool _tornDown;	// 59 = 0x3b
    NSMutableArray *_pendingWork;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000032aa33
@property(readonly, nonatomic) FBSDisplayIdentity *displayIdentity; // @synthesize displayIdentity=_identity;
- (void)_handleDisplayConnectIfPossible;	// IMP=0x000000000032a7bb
- (void)_appProcessStateDidChange:(id)arg1;	// IMP=0x000000000032a58f
- (void)_authenicationStateDidChange:(id)arg1;	// IMP=0x000000000032a57d
- (void)_runRootUpdateTransactionWithLabel:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000032a4f1
- (id)_createUpdateTransactionWithLabel:(id)arg1;	// IMP=0x000000000032a37e
- (void)_runRootTransaction:(id)arg1 withLabel:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000329fd5
- (_Bool)_displayConnectShouldWaitForAppRunning:(id)arg1;	// IMP=0x0000000000329ef0
- (_Bool)_shouldConnectDisplayNow:(id)arg1;	// IMP=0x0000000000329d2e
- (_Bool)_application:(id)arg1 canAccessDisplay:(id)arg2;	// IMP=0x0000000000329bf9
- (id)_expectedForegroundApp;	// IMP=0x0000000000329a80
- (id)slaveTransactionsForTransitionRequest:(id)arg1;	// IMP=0x0000000000329a16
- (void)disconnectWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000003294be
@property(readonly, nonatomic, getter=isDisconnecting) _Bool disconnecting;
- (void)updateWithConfiguration:(id)arg1;	// IMP=0x0000000000329094
- (_Bool)isConnected;	// IMP=0x0000000000329087
- (void)dealloc;	// IMP=0x0000000000328f7b
- (id)initWithMainWorkspace:(id)arg1 userAuthenticationProvider:(id)arg2 mainDisplaySceneManager:(id)arg3 layoutPublisher:(id)arg4 displayConfiguration:(id)arg5;	// IMP=0x00000000003289ad
- (id)init;	// IMP=0x0000000000328980

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

