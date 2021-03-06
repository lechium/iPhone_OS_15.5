//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

@class CLInUseAssertion, CLLocationManager, NSDate, NSMutableArray, NSObject, NSString, PKPassGroupsViewController, PKUserNotificationAuthorizationExplanationViewController, SBSAssertion, UIWindow;
@protocol BSInvalidatable, OS_dispatch_queue, PKPassLibraryDataProvider;

@interface PBKAppDelegate : UIResponder
{
    UIWindow *_window;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_backgroundQueue;	// 16 = 0x10
    _Bool _foregroundActive;	// 24 = 0x18
    _Bool _foregroundActiveResourcesCreated;	// 25 = 0x19
    _Bool _didBecomeActiveOnce;	// 26 = 0x1a
    _Bool _fetchingAsynchronousForegroundActiveResources;	// 27 = 0x1b
    _Bool _needsOnScreenPresentation;	// 28 = 0x1c
    _Bool _needsRegionSupportUpdate;	// 29 = 0x1d
    NSMutableArray *_blocksQueuedForForegroundExecution;	// 32 = 0x20
    CLLocationManager *_requestManager;	// 40 = 0x28
    id _staticGlyphResources;	// 48 = 0x30
    CLInUseAssertion *_inUseAssertion;	// 56 = 0x38
    id <BSInvalidatable> _lockButtonObserver;	// 64 = 0x40
    SBSAssertion *_lockButtonAssertion;	// 72 = 0x48
    _Bool _brightnessRampingAllowed;	// 80 = 0x50
    id <PKPassLibraryDataProvider> _dataProvider;	// 88 = 0x58
    _Bool _locationAuthorizationNotNeeded;	// 96 = 0x60
    NSDate *_lastTimeAppWasDismissed;	// 104 = 0x68
    unsigned long long _shouldShowLaunchPrompts;	// 112 = 0x70
    PKUserNotificationAuthorizationExplanationViewController *_userNotificationAuthorizationViewController;	// 120 = 0x78
    PKPassGroupsViewController *_cardsViewController;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x002000000000b59f
@property(readonly, nonatomic) PKPassGroupsViewController *cardsViewController; // @synthesize cardsViewController=_cardsViewController;
- (void)_executeWhenApplicationForegroundActive:(CDUnknownBlockType)arg1;	// IMP=0x001000000000b4ff
- (void)_executeForegroundActiveBlocksIfPossible;	// IMP=0x001000000000b385
- (id)applicationDocumentsDirectory;	// IMP=0x001000000000b2fa
- (void)consumeDoublePressUpForButtonKind:(long long)arg1;	// IMP=0x001000000000b18b
- (_Bool)_shouldEndSubjectReportingWallet;	// IMP=0x001000000000b16b
- (_Bool)_shouldBeginSubjectReportingWallet;	// IMP=0x001000000000b14b
- (void)_destroyForegroundActiveResources;	// IMP=0x001000000000af16
- (void)_createForegroundActiveResources;	// IMP=0x001000000000a5a9
- (void)_setForegroundActive:(_Bool)arg1;	// IMP=0x001000000000a4df
- (void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(CDStruct_3d581f42)arg2;	// IMP=0x001000000000a4c5
- (_Bool)application:(id)arg1 shouldSaveSecureApplicationState:(id)arg2;	// IMP=0x001000000000a408
- (_Bool)application:(id)arg1 shouldRestoreSecureApplicationState:(id)arg2;	// IMP=0x001000000000a386
- (void)locationManagerDidChangeAuthorization:(id)arg1;	// IMP=0x001000000000a32e
- (void)_resetLaunchPromptsForNextSession;	// IMP=0x001000000000a2f9
- (void)_disableLaunchPromptsForSession;	// IMP=0x001000000000a2c4
- (void)_enableLaunchPromptsForSession;	// IMP=0x001000000000a288
- (void)_presentLaunchPromptsIfNeeded;	// IMP=0x00100000000097c2
@property(retain, nonatomic) UIWindow *window;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000009260
- (void)_handleUniversalLinkWithUserActivity:(id)arg1;	// IMP=0x0010000000008cc9
- (void)openSettingsForNotification:(id)arg1;	// IMP=0x0010000000008b3b
- (void)willPresentNotification:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000008b22
- (_Bool);	// IMP=0x00100000000060a4
- (id)_parseReferrerIdentifier:(id)arg1;	// IMP=0x0010000000005e35
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;	// IMP=0x0010000000002c66
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000002a71
- (void)application:(id)arg1 performFetchWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000028b2
- (void)applicationWillTerminate:(id)arg1;	// IMP=0x0010000000002853
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x00100000000025fe
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x00100000000021d8
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x0010000000002133
- (void)applicationWillResignActive:(id)arg1;	// IMP=0x00100000000020ef
- (_Bool)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0010000000001d9c
- (void)dealloc;	// IMP=0x0010000000001cea
- (id)init;	// IMP=0x0010000000001b83

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

