//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CARIconBadgeController, CARIconImageCache, CARNavigationStateProvider, CARProcessMonitor, CARSessionStatus, CRCarPlayAppPolicyEvaluator, FBSDisplayLayoutPublisher, FBSceneManager, NSMutableDictionary, NSMutableSet, NSString;

@interface CARDisplayManager : NSObject
{
    _Bool _activated;	// 8 = 0x8
    CARIconImageCache *_iconImageCache;	// 16 = 0x10
    FBSceneManager *_manager;	// 24 = 0x18
    NSMutableDictionary *_displayToEnvironmentMap;	// 32 = 0x20
    NSMutableDictionary *_displayToPresentationBinderMap;	// 40 = 0x28
    NSMutableDictionary *_displayToRootSceneMap;	// 48 = 0x30
    NSMutableDictionary *_displayToEndpointInjector;	// 56 = 0x38
    FBSDisplayLayoutPublisher *_dashboardDisplayLayoutPublisher;	// 64 = 0x40
    CARIconBadgeController *_iconBadgeController;	// 72 = 0x48
    CRCarPlayAppPolicyEvaluator *_appPolicyEvaluator;	// 80 = 0x50
    CARSessionStatus *_sessionStatus;	// 88 = 0x58
    NSMutableSet *_pendingDisplays;	// 96 = 0x60
    NSMutableSet *_navigationStateProviderRequesters;	// 104 = 0x68
    CARNavigationStateProvider *_navigationStateProvider;	// 112 = 0x70
    NSMutableSet *_processMonitorRequesters;	// 120 = 0x78
    CARProcessMonitor *_processMonitor;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00200000000b4b96
@property(retain, nonatomic) CARProcessMonitor *processMonitor; // @synthesize processMonitor=_processMonitor;
@property(retain, nonatomic) NSMutableSet *processMonitorRequesters; // @synthesize processMonitorRequesters=_processMonitorRequesters;
@property(retain, nonatomic) CARNavigationStateProvider *navigationStateProvider; // @synthesize navigationStateProvider=_navigationStateProvider;
@property(retain, nonatomic) NSMutableSet *navigationStateProviderRequesters; // @synthesize navigationStateProviderRequesters=_navigationStateProviderRequesters;
@property(retain, nonatomic) NSMutableSet *pendingDisplays; // @synthesize pendingDisplays=_pendingDisplays;
@property(retain, nonatomic) CARSessionStatus *sessionStatus; // @synthesize sessionStatus=_sessionStatus;
@property(retain, nonatomic) CRCarPlayAppPolicyEvaluator *appPolicyEvaluator; // @synthesize appPolicyEvaluator=_appPolicyEvaluator;
@property(retain, nonatomic) CARIconBadgeController *iconBadgeController; // @synthesize iconBadgeController=_iconBadgeController;
@property(retain, nonatomic) FBSDisplayLayoutPublisher *dashboardDisplayLayoutPublisher; // @synthesize dashboardDisplayLayoutPublisher=_dashboardDisplayLayoutPublisher;
@property(retain, nonatomic) NSMutableDictionary *displayToEndpointInjector; // @synthesize displayToEndpointInjector=_displayToEndpointInjector;
@property(retain, nonatomic) NSMutableDictionary *displayToRootSceneMap; // @synthesize displayToRootSceneMap=_displayToRootSceneMap;
@property(retain, nonatomic) NSMutableDictionary *displayToPresentationBinderMap; // @synthesize displayToPresentationBinderMap=_displayToPresentationBinderMap;
@property(retain, nonatomic) NSMutableDictionary *displayToEnvironmentMap; // @synthesize displayToEnvironmentMap=_displayToEnvironmentMap;
@property(retain, nonatomic) FBSceneManager *manager; // @synthesize manager=_manager;
@property(nonatomic) _Bool activated; // @synthesize activated=_activated;
@property(retain, nonatomic) CARIconImageCache *iconImageCache; // @synthesize iconImageCache=_iconImageCache;
- (void)_updateTemplateProcessMonitor;	// IMP=0x00100000000b493e
- (void)_setNeedsTemplateProcessMonitor:(_Bool)arg1 forDisplayIdentity:(id)arg2;	// IMP=0x00100000000b4851
- (_Bool)bundleIdentifierIsCertificationApp:(id)arg1;	// IMP=0x00100000000b47b4
- (_Bool)bundleIdentifierSupportsInstrumentCluster:(id)arg1;	// IMP=0x00100000000b4717
- (_Bool)bundleIdentifierSupportsDashboard:(id)arg1;	// IMP=0x00100000000b467a
- (void)_updateNavigationStateProvider;	// IMP=0x00100000000b45a1
- (void)_setNeedsNavigationStateProvider:(_Bool)arg1 forDisplayIdentity:(id)arg2;	// IMP=0x00100000000b44b4
- (void)_handleConnectedDisplaysIfPossible;	// IMP=0x00100000000b36d7
- (void)_setPrimaryDisplayCornerMaskImageIfNecessary;	// IMP=0x00100000000b3450
- (void)sessionDidDisconnect:(id)arg1;	// IMP=0x00100000000b33a9
- (void)sessionDidConnect:(id)arg1;	// IMP=0x00100000000b324a
- (void)sceneManager:(id)arg1 updateForScene:(id)arg2 completedWithContext:(id)arg3 error:(id)arg4;	// IMP=0x00100000000b30e0
- (void)sceneManager:(id)arg1 updateForScene:(id)arg2 appliedWithContext:(id)arg3;	// IMP=0x00100000000b2f94
- (void)sceneManager:(id)arg1 updateForScene:(id)arg2 preparedWithContext:(id)arg3;	// IMP=0x00100000000b2e48
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;	// IMP=0x00100000000b2aa0
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;	// IMP=0x00100000000b296b
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2;	// IMP=0x00100000000b2315
- (id)sceneManager:(id)arg1 createDefaultTransitionContextForScene:(id)arg2;	// IMP=0x00100000000b21eb
- (void)sceneManager:(id)arg1 scene:(id)arg2 didReceiveActions:(id)arg3;	// IMP=0x00100000000b20de
- (void)sceneManager:(id)arg1 scene:(id)arg2 didUpdateClientSettingsWithDiff:(id)arg3 oldClientSettings:(id)arg4 transitionContext:(id)arg5;	// IMP=0x00100000000b1f8e
- (void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2;	// IMP=0x00100000000b1b93
- (void)displayMonitor:(id)arg1 didUpdateIdentity:(id)arg2 withConfiguration:(id)arg3;	// IMP=0x00100000000b1aec
- (void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3;	// IMP=0x00100000000b18f0
- (void)enumerateEnvironmentsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b181f
- (id)environmentForDisplayIdentity:(id)arg1;	// IMP=0x00100000000b179c
- (void)activate;	// IMP=0x00100000000b1578
- (id)initWithAppPolicyEvaluator:(id)arg1;	// IMP=0x00100000000b1330

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
