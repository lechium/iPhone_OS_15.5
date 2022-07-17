//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/NSXPCListenerDelegate-Protocol.h>
#import <SpringBoard/SBAppStatusBarAssertionManagerObserver-Protocol.h>
#import <SpringBoard/SBStatusBarStyleOverridesAssertionServer-Protocol.h>

@class FBWorkspaceEventQueue, NSMapTable, NSMutableArray, NSString, NSXPCListener, SBAppStatusBarAssertionManager, SBStatusBarTapManager;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SBStatusBarStyleOverridesAssertionManager : NSObject <NSXPCListenerDelegate, SBAppStatusBarAssertionManagerObserver, SBStatusBarStyleOverridesAssertionServer, BSDescriptionProviding>
{
    NSMutableArray *_runningUpdateTransactions;	// 8 = 0x8
    SBAppStatusBarAssertionManager *_appStatusBarAssertionManager;	// 16 = 0x10
    NSXPCListener *_xpcListener;	// 24 = 0x18
    NSMapTable *_assertionsByIdentifierByClientConnection;	// 32 = 0x20
    NSMapTable *_assertionsByStyleOverride;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_internalQueue;	// 48 = 0x30
    unsigned long long _statusBarStyleOverrides;	// 56 = 0x38
    unsigned long long _exclusiveStatusBarStyleOverrides;	// 64 = 0x40
    NSMutableArray *_coordinatorConnectionsByStyleOverride;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_assertionTimerSource;	// 80 = 0x50
    FBWorkspaceEventQueue *_eventQueue;	// 88 = 0x58
    SBStatusBarTapManager *_statusBarTapManager;	// 96 = 0x60
}

+ (id)sharedInstance;	// IMP=0x000000000006b833
- (void).cxx_destruct;	// IMP=0x0000000000229340
@property(readonly, nonatomic) SBStatusBarTapManager *statusBarTapManager; // @synthesize statusBarTapManager=_statusBarTapManager;
@property(retain, nonatomic) FBWorkspaceEventQueue *eventQueue; // @synthesize eventQueue=_eventQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *assertionTimerSource; // @synthesize assertionTimerSource=_assertionTimerSource;
@property(retain, nonatomic) NSMutableArray *coordinatorConnectionsByStyleOverride; // @synthesize coordinatorConnectionsByStyleOverride=_coordinatorConnectionsByStyleOverride;
@property(nonatomic) unsigned long long exclusiveStatusBarStyleOverrides; // @synthesize exclusiveStatusBarStyleOverrides=_exclusiveStatusBarStyleOverrides;
@property(nonatomic) unsigned long long statusBarStyleOverrides; // @synthesize statusBarStyleOverrides=_statusBarStyleOverrides;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain, nonatomic) NSMapTable *assertionsByStyleOverride; // @synthesize assertionsByStyleOverride=_assertionsByStyleOverride;
@property(retain, nonatomic) NSMapTable *assertionsByIdentifierByClientConnection; // @synthesize assertionsByIdentifierByClientConnection=_assertionsByIdentifierByClientConnection;
@property(retain, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
@property(retain, nonatomic) SBAppStatusBarAssertionManager *appStatusBarAssertionManager; // @synthesize appStatusBarAssertionManager=_appStatusBarAssertionManager;
- (void)_postStatusStringsByStyle:(id)arg1;	// IMP=0x000000000006f678
- (id)_statusStringsByStyleForActiveAssertionsByStyleOverride:(id)arg1 inactiveAssertionsByStyleOverride:(id)arg2;	// IMP=0x00000000002287e8
- (void)_updateAppSceneSettingsForForegroundAppsAndPostAddedStyleOverrides:(unsigned long long)arg1 removedStyleOverrides:(unsigned long long)arg2;	// IMP=0x00000000002283a9
- (void)_invalidateAssertionsWithIdentifiers:(id)arg1 forClientConnection:(id)arg2;	// IMP=0x00000000002281b2
- (unsigned long long)_internalQueue_removeAssertionByStyleOverrides:(id)arg1;	// IMP=0x0000000000228014
- (unsigned long long)_internalQueue_addAssertionByStyleOverrides:(id)arg1;	// IMP=0x0000000000227e7c
- (void)_mainQueue_getStatusBarStyleOverridesToSuppressAndStatusStringsByStyleForForegroundApplicationSceneHandles:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000227424
- (void)_internalQueue_deactivateStatusBarStyleOverridesAssertionsWithIdentifiers:(id)arg1 forClientConnection:(id)arg2;	// IMP=0x0000000000226ed9
- (void)unregisterCoordinatorRegistrationForStyleOverrides:(id)arg1;	// IMP=0x0000000000226de5
- (void)setRegisteredOverrides:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000022687b
- (_Bool)handleTapForStatusBarStyleOverride:(unsigned long long)arg1;	// IMP=0x0000000000226573
- (id)_internalQueue_coordinatorClientForConnection:(id)arg1;	// IMP=0x00000000002263d7
- (id)_internalQueue_coordinatorClientForStyleOverrides:(unsigned long long)arg1;	// IMP=0x0000000000226276
- (_Bool)_verifyCoordinatorEntitlementForStyleOverride:(id)arg1 onConnection:(id)arg2;	// IMP=0x00000000002261d2
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000225f62
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000225f12
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000225ef6
- (id)succinctDescription;	// IMP=0x0000000000225ea6
@property(readonly, copy) NSString *description;
- (void)setStatusString:(id)arg1 forAssertionWithIdentifier:(id)arg2;	// IMP=0x0000000000225c26
- (void)deactivateStatusBarStyleOverridesAssertionsWithIdentifiers:(id)arg1;	// IMP=0x0000000000225b3a
- (void)activateStatusBarStyleOverridesAssertions:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000224f7f
- (void)statusBarAssertionManager:(id)arg1 statusBarSettingsDidChange:(id)arg2;	// IMP=0x0000000000224f3d
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000000224836
- (void)updateForegroundApplicationSceneHandles:(id)arg1 withOptions:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006b863
- (void)invalidateStatusBarStyleOverridesAssertions:(id)arg1;	// IMP=0x0000000000223c4a
- (id)init;	// IMP=0x00000000002239a5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
