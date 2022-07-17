//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol AXSpringBoardServerSideAppManagerDelegate;

@interface AXSpringBoardServerSideAppManager : NSObject
{
    id <AXSpringBoardServerSideAppManagerDelegate> _delegate;	// 8 = 0x8
    unsigned long long _dockIconActivationMode;	// 16 = 0x10
}

+ (id)_mainDisplaySceneLayoutViewController;	// IMP=0x0000000000030c5f
+ (id)_mainDisplaySceneManager;	// IMP=0x0000000000030bd0
+ (id)sharedInstance;	// IMP=0x000000000002be20
- (void).cxx_destruct;	// IMP=0x0000000000030e55
@property(nonatomic) unsigned long long dockIconActivationMode; // @synthesize dockIconActivationMode=_dockIconActivationMode;
@property(nonatomic) __weak id <AXSpringBoardServerSideAppManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_mainDisplaySceneLayoutViewController;	// IMP=0x0000000000030c45
- (id)_mainDisplaySceneManager;	// IMP=0x0000000000030bb6
- (id)_firstFloatingAppLayout;	// IMP=0x0000000000030ae3
- (id)_floatingAppRootViewController;	// IMP=0x0000000000030a6e
- (id)sceneLayoutState;	// IMP=0x0000000000030a17
- (long long)_currentSpaceConfiguration;	// IMP=0x00000000000309cc
- (long long)_currentFloatingConfiguration;	// IMP=0x0000000000030981
- (id)_sbWorkspaceMainWorkspace;	// IMP=0x0000000000030929
- (id)_sbSwitcherTransitionRequestClass;	// IMP=0x00000000000308e0
- (id)_sbPreviousWorkspaceEntityClass;	// IMP=0x0000000000030897
- (id)_sbEmptyEntity;	// IMP=0x000000000003083f
- (id)_sbPreviousEntity;	// IMP=0x00000000000307e8
- (id)_activeApplicationBundleIdentifiers;	// IMP=0x00000000000304f4
- (id)_appWithIdentifier:(id)arg1;	// IMP=0x00000000000304e7
- (id)_bundleIdentifierForIconView:(id)arg1;	// IMP=0x0000000000030486
- (_Bool)_isDockIconView:(id)arg1;	// IMP=0x00000000000302ae
- (void)launchFloatingApplication:(id)arg1;	// IMP=0x00000000000300b8
- (void)launchPinnedApplication:(id)arg1 onLeadingSide:(_Bool)arg2;	// IMP=0x000000000002f859
- (void)launchApplicationWithFullConfiguration:(id)arg1;	// IMP=0x000000000002f667
- (void)launchApplication:(id)arg1;	// IMP=0x000000000002f4bf
- (void)_requestFloatingAppSwitcherVisible;	// IMP=0x000000000002f3b8
- (void)_requestTransactionWithPrimaryEntity:(id)arg1 sideEntity:(id)arg2 floatingEntity:(id)arg3 spaceConfiguration:(long long)arg4 floatingConfiguration:(long long)arg5;	// IMP=0x000000000002effe
- (void)_performSwipeOnFloatingAppSwitcher:(unsigned long long)arg1;	// IMP=0x000000000002ebc5
- (void)_performMedusaGesture:(unsigned long long)arg1;	// IMP=0x000000000002e10d
- (void)_addResizeGestureRecognizerGesturesIfAllowed:(id)arg1;	// IMP=0x000000000002dfe0
- (void)_addFloatingApplicationGesturesIfAllowed:(id)arg1;	// IMP=0x000000000002dd28
- (_Bool)_hasPinnedApp;	// IMP=0x000000000002dcfe
- (_Bool)_hasFloatingApp;	// IMP=0x000000000002dce1
- (id)_applicationController;	// IMP=0x000000000002dc85
- (void)_endDockIconActivationModeAfterTimeout;	// IMP=0x000000000002dbaa
- (_Bool)canLaunchAsFloatingApplicationForIconView:(id)arg1;	// IMP=0x000000000002d9d9
- (_Bool)canLaunchAsPinnedApplicationForIconView:(id)arg1;	// IMP=0x000000000002d824
- (_Bool)canActivateMedusaForDock;	// IMP=0x000000000002d7a3
- (_Bool)hasMultipleApps;	// IMP=0x000000000002d563
- (_Bool)performMedusaGesture:(unsigned long long)arg1;	// IMP=0x000000000002d478
- (id)medusaAppBundleIdsToLayoutRoles;	// IMP=0x000000000002d361
- (id)medusaApps;	// IMP=0x000000000002d248
- (_Bool)isDisplayingApp;	// IMP=0x000000000002d176
- (void)_enumerateAppsAndLayoutRoles:(CDUnknownBlockType)arg1;	// IMP=0x000000000002cfc3
- (id)_appForLayoutRole:(long long)arg1 layoutState:(id)arg2;	// IMP=0x000000000002cd75
- (id)appForLayoutRole:(long long)arg1;	// IMP=0x000000000002cd11
- (id)allowedMedusaGestures;	// IMP=0x000000000002c9c9
- (void)_performValidation;	// IMP=0x000000000002bef1
- (id)init;	// IMP=0x000000000002bea5

@end
