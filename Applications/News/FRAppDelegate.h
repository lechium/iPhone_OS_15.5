//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

@class FCAMSPushHandler, FCAccountActionQueue, FCCloudContext, FCFeedManager, FRAppActivityMonitor, FRApplicationUpdateNotifier, FRBackgroundFetchManager, FRFlintDataProviderFactory, FRFlintEmbedConfigurationManager, FRNotificationManager, FRPrivateDataUpdateCoordinator, FRTodayAgent, NSArray, NSString, NSTimer, TFBridgedContainer, TSAppDelegate, TSLocalDraftsDeviceManager, TUKeyboardInputMonitor, UIAlertController, UIWindow;
@protocol FRActivityErrorHandler, FRFeldsparContext, FRURLRouterManagerType, TFResolver, TSBackgroundFetchScheduler;

@interface FRAppDelegate : UIResponder
{
    int lockStateToken;	// 8 = 0x8
    _Bool _inPreviewMode;	// 12 = 0xc
    _Bool _appOpenedByUserActivity;	// 13 = 0xd
    _Bool;	// 14 = 0xe
    id <TFResolver> _resolver;	// 16 = 0x10
    id <FRFeldsparContext> _feldsparContext;	// 24 = 0x18
    FRPrivateDataUpdateCoordinator *_privateDataUpdateCoordinator;	// 32 = 0x20
    FRAppActivityMonitor *_activityMonitor;	// 40 = 0x28
    FRNotificationManager *_notificationManager;	// 48 = 0x30
    NSArray *_bundleAssemblies;	// 56 = 0x38
    NSArray *_assemblies;	// 64 = 0x40
    TFBridgedContainer *_bridgedContainer;	// 72 = 0x48
    NSTimer *_handoffStreamsTimer;	// 80 = 0x50
    FCAccountActionQueue *_accountActionQueue;	// 88 = 0x58
    TUKeyboardInputMonitor *_keyboardInputMonitor;	// 96 = 0x60
    TSAppDelegate *_bridgedAppDelegate;	// 104 = 0x68
    FCCloudContext *_cloudContext;	// 112 = 0x70
    FRFlintDataProviderFactory *_dataProviderFactory;	// 120 = 0x78
    FRFlintEmbedConfigurationManager *_embedConfigurationManager;	// 128 = 0x80
    id <FRURLRouterManagerType> _urlRouterManager;	// 136 = 0x88
    id <TSBackgroundFetchScheduler> _backgroundFetchScheduler;	// 144 = 0x90
    UIAlertController *_pinAlertController;	// 152 = 0x98
    FRTodayAgent *_todayAgent;	// 160 = 0xa0
    FCFeedManager *_feedManager;	// 168 = 0xa8
    FRBackgroundFetchManager *_backgroundFetchManager;	// 176 = 0xb0
    FCAMSPushHandler *_amsPushHandler;	// 184 = 0xb8
    FRApplicationUpdateNotifier *_applicationUpdateNotifier;	// 192 = 0xc0
    id <FRActivityErrorHandler> _activityErrorHandler;	// 200 = 0xc8
    TSLocalDraftsDeviceManager *_deviceManager;	// 208 = 0xd0
}

+ (_Bool)shouldHideHeadline:(id)arg1;	// IMP=0x00200000000c41ad
+ (id)sharedDelegate;	// IMP=0x00100000000c3114
+ (id)stateRestorationURL;	// IMP=0x00100000000c30c1
+ (void)registerDefaults;	// IMP=0x0010000000071d28
- (void).cxx_destruct;	// IMP=0x00100000000c7810
@property(retain, nonatomic) TSLocalDraftsDeviceManager *deviceManager; // @synthesize deviceManager=_deviceManager;
@property(retain, nonatomic) id <FRActivityErrorHandler> activityErrorHandler; // @synthesize activityErrorHandler=_activityErrorHandler;
@property(retain, nonatomic) FRApplicationUpdateNotifier *applicationUpdateNotifier; // @synthesize applicationUpdateNotifier=_applicationUpdateNotifier;
@property(retain, nonatomic) FCAMSPushHandler *amsPushHandler; // @synthesize amsPushHandler=_amsPushHandler;
@property(nonatomic) _Bool isDeviceLocked; // @synthesize isDeviceLocked=_isDeviceLocked;
@property(retain, nonatomic) FRBackgroundFetchManager *backgroundFetchManager; // @synthesize backgroundFetchManager=_backgroundFetchManager;
@property(retain, nonatomic) FCFeedManager *feedManager; // @synthesize feedManager=_feedManager;
@property(retain, nonatomic) FRTodayAgent *todayAgent; // @synthesize todayAgent=_todayAgent;
@property(retain, nonatomic) UIAlertController *pinAlertController; // @synthesize pinAlertController=_pinAlertController;
@property(retain, nonatomic) id <TSBackgroundFetchScheduler> backgroundFetchScheduler; // @synthesize backgroundFetchScheduler=_backgroundFetchScheduler;
@property(retain, nonatomic) id <FRURLRouterManagerType> urlRouterManager; // @synthesize urlRouterManager=_urlRouterManager;
@property(retain, nonatomic) FRFlintEmbedConfigurationManager *embedConfigurationManager; // @synthesize embedConfigurationManager=_embedConfigurationManager;
@property(retain, nonatomic) FRFlintDataProviderFactory *dataProviderFactory; // @synthesize dataProviderFactory=_dataProviderFactory;
@property(retain, nonatomic) FCCloudContext *cloudContext; // @synthesize cloudContext=_cloudContext;
@property(retain, nonatomic) TSAppDelegate *bridgedAppDelegate; // @synthesize bridgedAppDelegate=_bridgedAppDelegate;
@property(retain, nonatomic) TUKeyboardInputMonitor *keyboardInputMonitor; // @synthesize keyboardInputMonitor=_keyboardInputMonitor;
@property(retain, nonatomic) FCAccountActionQueue *accountActionQueue; // @synthesize accountActionQueue=_accountActionQueue;
@property(retain, nonatomic) NSTimer *handoffStreamsTimer; // @synthesize handoffStreamsTimer=_handoffStreamsTimer;
@property(retain, nonatomic) TFBridgedContainer *bridgedContainer; // @synthesize bridgedContainer=_bridgedContainer;
@property(retain, nonatomic) NSArray *assemblies; // @synthesize assemblies=_assemblies;
@property(retain, nonatomic) NSArray *bundleAssemblies; // @synthesize bundleAssemblies=_bundleAssemblies;
@property(retain, nonatomic) FRNotificationManager *notificationManager; // @synthesize notificationManager=_notificationManager;
@property(nonatomic) _Bool appOpenedByUserActivity; // @synthesize appOpenedByUserActivity=_appOpenedByUserActivity;
@property(nonatomic) _Bool inPreviewMode; // @synthesize inPreviewMode=_inPreviewMode;
@property(retain, nonatomic) FRAppActivityMonitor *activityMonitor; // @synthesize activityMonitor=_activityMonitor;
@property(retain, nonatomic) FRPrivateDataUpdateCoordinator *privateDataUpdateCoordinator; // @synthesize privateDataUpdateCoordinator=_privateDataUpdateCoordinator;
@property(retain, nonatomic) id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
@property(retain, nonatomic) id <TFResolver> resolver; // @synthesize resolver=_resolver;
- (void)_disableLoggingForUnsupportedControls;	// IMP=0x00100000000c741e
- (double)_timeSinceLastActivation;	// IMP=0x00100000000c7362
- (_Bool)safeIsAppRunningInBackground;	// IMP=0x00100000000c7171
- (void)configurationManager:(id)arg1 appConfigurationDidChange:(id)arg2;	// IMP=0x00100000000c715c
- (void)_configureBackgroundFetch;	// IMP=0x00100000000c6f7d
- (void)_updateBackgroundFetchSettingsWithAppConfiguration:(id)arg1;	// IMP=0x00100000000c6e86
- (void)application:(id)arg1 performFetchWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c68a4
- (id)gizmoSyncManager:(id)arg1 fetchOperationForArticleIDs:(id)arg2;	// IMP=0x00100000000c67da
- (void)activityObservingApplicationWindowDidBecomeBackground;	// IMP=0x00100000000c67d4
- (void)activityObservingApplicationWindowDidBecomeForeground;	// IMP=0x00000000000c67ce
- (void)notificationManagerFailedToHandleRemoteNotification:(id)arg1 reason:(id)arg2;	// IMP=0x00100000000c67c8
- (void)notificationManagerDidHandleNotificationResponse:(id)arg1 withAnalyticsReferral:(id)arg2;	// IMP=0x00100000000c6756
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c54c9
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;	// IMP=0x00100000000c5357
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;	// IMP=0x00100000000c50f7
- (int)fcDigestModeFromScheduledDeliverySetting:(long long)arg1;	// IMP=0x00100000000c50dc
- (void)setupNotificationManagerWithFeldsparContext:(id *)arg1 state:(long long)arg2 launchOptions:(id)arg3;	// IMP=0x00100000000c4f78
- (void)unregisterForDeviceLockNotifications;	// IMP=0x00100000000c4f33
- (void)registerForDeviceLockNotifications;	// IMP=0x00100000000c4d21
- (void)sceneDidBecomeActive;	// IMP=0x00100000000c48a7
- (void)sceneWillEnterForeground;	// IMP=0x00100000000c45a8
- (void)sceneDidEnterBackground;	// IMP=0x00100000000c4507
- (void)_application:(id)arg1 openURL:(id)arg2 options:(id)arg3;	// IMP=0x00100000000c4264
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;	// IMP=0x00100000000c3dcd
- (void)application:(id)arg1 didSendEvent:(id)arg2;	// IMP=0x00100000000c3d5b
- (void)_didCommitFirstFrame;	// IMP=0x00100000000c373d
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x00100000000c36c0
- (void)validateCommand:(id)arg1;	// IMP=0x00100000000c364e
- (void)buildMenuWithBuilder:(id)arg1;	// IMP=0x00100000000c35dc
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00100000000c357d
- (void)application:(id)arg1 handleIntent:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c34e3
- (void)showAppUnsupportedAlert;	// IMP=0x00100000000c3300
- (void)hideAlert:(id)arg1;	// IMP=0x00100000000c32fa
- (void)showAlertWithPin:(id)arg1 pin:(id)arg2;	// IMP=0x00100000000c32f4
- (void)localDraftsDeviceOnPreview:(id)arg1 articleIdentifier:(id)arg2 channelIdentifier:(id)arg3;	// IMP=0x00100000000c32ee
- (_Bool)application:(id)arg1 runTest:(id)arg2 options:(id)arg3;	// IMP=0x00100000000c323b
- (void)dealloc;	// IMP=0x00100000000c31fd
- (id)init;	// IMP=0x00100000000c31a0
- (void)removeTopStoriesAndEditorPicksIfNeeded;	// IMP=0x0010000000073d38
- (id)_extractWidgetEngagementFromReferralURL:(id)arg1;	// IMP=0x0010000000073c1c
- (id)setupAnalyticsReferralWithOptions:(id)arg1;	// IMP=0x0010000000073859
- (void)setupAnalyticsControllerWithFeldpsarContext:(id *)arg1 personalizationDataSource:(id)arg2 versionHelpers:(id)arg3 referral:(id)arg4;	// IMP=0x00100000000734f3
- (id)configurationManager;	// IMP=0x0010000000073442
- (void)setupCloudContextWithPersonalizationDataSource:(id)arg1 state:(long long)arg2 launchOptions:(id)arg3 versionHelpers:(id)arg4 referral:(id)arg5;	// IMP=0x0010000000072f24
- (void)setupCloudContextWithDataActionProvider:(id)arg1 versionHelpers:(id)arg2 configurationManager:(id)arg3;	// IMP=0x001000000007282c
- (void)clearOldCacheItems;	// IMP=0x0010000000071f40
- (void)prepareAppCacheSnapShot;	// IMP=0x0010000000071ee0
- (void)prewarmAd;	// IMP=0x0010000000071eda
- (id)setupDestructiveDataAction;	// IMP=0x0010000000071a7c
- (void)setupLanguages;	// IMP=0x00100000000718a3
- (void)setupUserDefaultsForPPT;	// IMP=0x00100000000717ba
- (void)setRunningPPTWithApplication:(id)arg1;	// IMP=0x00100000000715df
- (void)scheduleTasksWithOptions:(id)arg1;	// IMP=0x0010000000071541
- (double)_timeSinceLastActivation;	// IMP=0x0010000000071482
- (void)resolveAppSingletons;	// IMP=0x0010000000070c37
- (id)createCarPlaySceneResolver;	// IMP=0x00100000000703b9
- (id)createSceneResolver;	// IMP=0x0010000000070369
- (_Bool)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;	// IMP=0x001000000006f541
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x001000000006f2b5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

