//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CARDashboardStateProvider, CAREnvironmentConfiguration, CARFocusController, CARFocusMovementManager, CARLockOutController, CARNotificationViewController, CARNotificationWindow, CARNowPlayingObserver, CARRootStatusBarViewController, CARScreenshotManager, CARSplashScreenAlert, CARStatusBarHomeButtonStateManager, CARStatusBarStateProvider, CARStatusBarWindow, CARUserAlertServer, CARWallpaperViewController, CARWorkspace, FBSDisplayConfiguration, FBSDisplayIdentity, FBScene, NSHashTable, NSMutableDictionary, NSString, RBSProcessMonitor, SiriActivityAssertion, SiriDirectActionSource, SiriLongPressButtonSource, UIScreen, UIView, UIViewController, UIWindow, UIWindowScene, _CARDashboardRootViewController, _CARDashboardWorkspaceOwner, _CARSiriViewController;
@protocol BSInvalidatable, CRSIconLayoutVehicleDataProviding, SiriAssertion, UIScenePresenter;

@interface CARDashboard : NSObject
{
    id <BSInvalidatable> _dispatchingAssertion;	// 8 = 0x8
    id <BSInvalidatable> _dispatchingAssertionACBack;	// 16 = 0x10
    id <BSInvalidatable> _dispatchingAssertionACHome;	// 24 = 0x18
    id <BSInvalidatable> _dispatchingAssertionACSelect;	// 32 = 0x20
    id <BSInvalidatable> _dispatchingAssertionTelephonyDrop;	// 40 = 0x28
    struct os_unfair_lock_s _lock;	// 48 = 0x30
    _Bool _lock_hasHandledConnect;	// 52 = 0x34
    _Bool _lock_hasPendingRequestUITake;	// 53 = 0x35
    _Bool _lock_invalidated;	// 54 = 0x36
    _Bool _screenAvailable;	// 55 = 0x37
    _Bool _showingApp;	// 56 = 0x38
    _Bool _pendingInCallServiceActivation;	// 57 = 0x39
    int _connectedNotifyToken;	// 60 = 0x3c
    CARDashboardStateProvider *_dashboardStateProvider;	// 64 = 0x40
    UIScreen *_screen;	// 72 = 0x48
    UIWindowScene *_windowScene;	// 80 = 0x50
    NSHashTable *_sceneObservers;	// 88 = 0x58
    NSMutableDictionary *_identifierToAppScenesMap;	// 96 = 0x60
    NSMutableDictionary *_identifierToForegroundAppScenesMap;	// 104 = 0x68
    NSMutableDictionary *_identifierToAppInfoMap;	// 112 = 0x70
    CAREnvironmentConfiguration *_environmentConfiguration;	// 120 = 0x78
    UIWindow *_mainWindow;	// 128 = 0x80
    CARWallpaperViewController *_wallpaperViewController;	// 136 = 0x88
    _CARDashboardRootViewController *_rootViewController;	// 144 = 0x90
    CARWorkspace *_workspace;	// 152 = 0x98
    _CARDashboardWorkspaceOwner *_workspaceOwner;	// 160 = 0xa0
    CARStatusBarWindow *_statusBarWindow;	// 168 = 0xa8
    CARRootStatusBarViewController *_statusBarViewController;	// 176 = 0xb0
    CARStatusBarStateProvider *_statusBarStateProvider;	// 184 = 0xb8
    UIWindow *_statusBarHostWindow;	// 192 = 0xc0
    id <UIScenePresenter> _statusBarScenePresenter;	// 200 = 0xc8
    FBScene *_statusBarHostScene;	// 208 = 0xd0
    CARLockOutController *_lockOutController;	// 216 = 0xd8
    id <BSInvalidatable> _preventPasscodeLockToken;	// 224 = 0xe0
    id <BSInvalidatable> _preventSpuriousScreenUndimToken;	// 232 = 0xe8
    CARNotificationWindow *_notificationWindow;	// 240 = 0xf0
    CARNotificationViewController *_notificationViewController;	// 248 = 0xf8
    UIViewController *_alertViewController;	// 256 = 0x100
    _CARSiriViewController *_siriViewController;	// 264 = 0x108
    CARFocusController *_focusController;	// 272 = 0x110
    CARFocusMovementManager *_focusMovementManager;	// 280 = 0x118
    SiriLongPressButtonSource *_siriButtonSource;	// 288 = 0x120
    id <SiriAssertion> _siriPrewarmAssertion;	// 296 = 0x128
    SiriActivityAssertion *_siriButtonAssertion;	// 304 = 0x130
    SiriDirectActionSource *_siriDirectActionSource;	// 312 = 0x138
    double _siriPrewarmTimestamp;	// 320 = 0x140
    CARNowPlayingObserver *_nowPlayingObserver;	// 328 = 0x148
    id _activeCallScreenBorrowToken;	// 336 = 0x150
    CARStatusBarHomeButtonStateManager *_homeButtonStateManager;	// 344 = 0x158
    CARScreenshotManager *_screenshotManager;	// 352 = 0x160
    UIWindow *_resizeWindow;	// 360 = 0x168
    double _currentCornerRadius;	// 368 = 0x170
    CARSplashScreenAlert *_splashScreenAlert;	// 376 = 0x178
    id <BSInvalidatable> _oemScreenLayoutElementAssertion;	// 384 = 0x180
    UIWindow *_interestingWindow;	// 392 = 0x188
    UIView *_interestingView;	// 400 = 0x190
    UIWindow *_cornerRadiusWindow;	// 408 = 0x198
    UIView *_cornerRadiusView;	// 416 = 0x1a0
    RBSProcessMonitor *_templateAppProcessMonitor;	// 424 = 0x1a8
    CARUserAlertServer *_userAlertServer;	// 432 = 0x1b0
}

- (void).cxx_destruct;	// IMP=0x002000000006be4c
@property(retain, nonatomic) CARUserAlertServer *userAlertServer; // @synthesize userAlertServer=_userAlertServer;
@property(retain, nonatomic) RBSProcessMonitor *templateAppProcessMonitor; // @synthesize templateAppProcessMonitor=_templateAppProcessMonitor;
@property(nonatomic) int connectedNotifyToken; // @synthesize connectedNotifyToken=_connectedNotifyToken;
@property(retain, nonatomic) UIView *cornerRadiusView; // @synthesize cornerRadiusView=_cornerRadiusView;
@property(retain, nonatomic) UIWindow *cornerRadiusWindow; // @synthesize cornerRadiusWindow=_cornerRadiusWindow;
@property(retain, nonatomic) UIView *interestingView; // @synthesize interestingView=_interestingView;
@property(retain, nonatomic) UIWindow *interestingWindow; // @synthesize interestingWindow=_interestingWindow;
@property(retain, nonatomic) id <BSInvalidatable> oemScreenLayoutElementAssertion; // @synthesize oemScreenLayoutElementAssertion=_oemScreenLayoutElementAssertion;
@property(retain, nonatomic) CARSplashScreenAlert *splashScreenAlert; // @synthesize splashScreenAlert=_splashScreenAlert;
@property(nonatomic) double currentCornerRadius; // @synthesize currentCornerRadius=_currentCornerRadius;
@property(retain, nonatomic) UIWindow *resizeWindow; // @synthesize resizeWindow=_resizeWindow;
@property(retain, nonatomic) CARScreenshotManager *screenshotManager; // @synthesize screenshotManager=_screenshotManager;
@property(retain, nonatomic) CARStatusBarHomeButtonStateManager *homeButtonStateManager; // @synthesize homeButtonStateManager=_homeButtonStateManager;
@property(nonatomic) _Bool pendingInCallServiceActivation; // @synthesize pendingInCallServiceActivation=_pendingInCallServiceActivation;
@property(retain, nonatomic) id activeCallScreenBorrowToken; // @synthesize activeCallScreenBorrowToken=_activeCallScreenBorrowToken;
@property(nonatomic) _Bool showingApp; // @synthesize showingApp=_showingApp;
@property(nonatomic, getter=isScreenAvailable) _Bool screenAvailable; // @synthesize screenAvailable=_screenAvailable;
@property(retain, nonatomic) CARNowPlayingObserver *nowPlayingObserver; // @synthesize nowPlayingObserver=_nowPlayingObserver;
@property(nonatomic) double siriPrewarmTimestamp; // @synthesize siriPrewarmTimestamp=_siriPrewarmTimestamp;
@property(retain, nonatomic) SiriDirectActionSource *siriDirectActionSource; // @synthesize siriDirectActionSource=_siriDirectActionSource;
@property(retain, nonatomic) SiriActivityAssertion *siriButtonAssertion; // @synthesize siriButtonAssertion=_siriButtonAssertion;
@property(retain, nonatomic) id <SiriAssertion> siriPrewarmAssertion; // @synthesize siriPrewarmAssertion=_siriPrewarmAssertion;
@property(retain, nonatomic) SiriLongPressButtonSource *siriButtonSource; // @synthesize siriButtonSource=_siriButtonSource;
@property(retain, nonatomic) CARFocusMovementManager *focusMovementManager; // @synthesize focusMovementManager=_focusMovementManager;
- (void);	// IMP=0x001000000006bb73
@property(retain, nonatomic) CARFocusController *focusController; // @synthesize focusController=_focusController;
@property(retain, nonatomic) _CARSiriViewController *siriViewController; // @synthesize siriViewController=_siriViewController;
@property(retain, nonatomic) UIViewController *alertViewController; // @synthesize alertViewController=_alertViewController;
@property(retain, nonatomic) CARNotificationViewController *notificationViewController; // @synthesize notificationViewController=_notificationViewController;
@property(retain, nonatomic) CARNotificationWindow *notificationWindow; // @synthesize notificationWindow=_notificationWindow;
@property(retain, nonatomic) id <BSInvalidatable> preventSpuriousScreenUndimToken; // @synthesize preventSpuriousScreenUndimToken=_preventSpuriousScreenUndimToken;
@property(retain, nonatomic) id <BSInvalidatable> preventPasscodeLockToken; // @synthesize preventPasscodeLockToken=_preventPasscodeLockToken;
@property(retain, nonatomic) CARLockOutController *lockOutController; // @synthesize lockOutController=_lockOutController;
@property(retain, nonatomic) FBScene *statusBarHostScene; // @synthesize statusBarHostScene=_statusBarHostScene;
@property(retain, nonatomic) id <UIScenePresenter> statusBarScenePresenter; // @synthesize statusBarScenePresenter=_statusBarScenePresenter;
@property(retain, nonatomic) UIWindow *statusBarHostWindow; // @synthesize statusBarHostWindow=_statusBarHostWindow;
@property(retain, nonatomic) CARStatusBarStateProvider *statusBarStateProvider; // @synthesize statusBarStateProvider=_statusBarStateProvider;
@property(retain, nonatomic) CARRootStatusBarViewController *statusBarViewController; // @synthesize statusBarViewController=_statusBarViewController;
@property(retain, nonatomic) CARStatusBarWindow *statusBarWindow; // @synthesize statusBarWindow=_statusBarWindow;
@property(retain, nonatomic) _CARDashboardWorkspaceOwner *workspaceOwner; // @synthesize workspaceOwner=_workspaceOwner;
@property(retain, nonatomic) CARWorkspace *workspace; // @synthesize workspace=_workspace;
@property(retain, nonatomic) _CARDashboardRootViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(retain, nonatomic) CARWallpaperViewController *wallpaperViewController; // @synthesize wallpaperViewController=_wallpaperViewController;
@property(retain, nonatomic) UIWindow *mainWindow; // @synthesize mainWindow=_mainWindow;
@property(retain, nonatomic) CAREnvironmentConfiguration *environmentConfiguration; // @synthesize environmentConfiguration=_environmentConfiguration;
@property(retain, nonatomic) NSMutableDictionary *identifierToAppInfoMap; // @synthesize identifierToAppInfoMap=_identifierToAppInfoMap;
@property(retain, nonatomic) NSMutableDictionary *identifierToForegroundAppScenesMap; // @synthesize identifierToForegroundAppScenesMap=_identifierToForegroundAppScenesMap;
@property(retain, nonatomic) NSMutableDictionary *identifierToAppScenesMap; // @synthesize identifierToAppScenesMap=_identifierToAppScenesMap;
@property(retain, nonatomic) NSHashTable *sceneObservers; // @synthesize sceneObservers=_sceneObservers;
@property(retain, nonatomic) UIWindowScene *windowScene; // @synthesize windowScene=_windowScene;
@property(retain, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
@property(retain, nonatomic) CARDashboardStateProvider *dashboardStateProvider; // @synthesize dashboardStateProvider=_dashboardStateProvider;
- (void)goToPageContainingBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000006b69d
- (void)workspace:(id)arg1 stateDidChangeFromState:(id)arg2 toState:(id)arg3;	// IMP=0x001000000006b344
- (void)processMonitor:(id)arg1 didHandleDeathOfBundleIdentifier:(id)arg2;	// IMP=0x001000000006b07c
- (void)processMonitor:(id)arg1 shouldHandleDeathOfBundleIdentifier:(id)arg2 isCrash:(_Bool)arg3;	// IMP=0x001000000006aade
- (void)_createBackgroundSceneForTemplateAppBundleID:(id)arg1;	// IMP=0x001000000006a91c
- (void)_templateAppStateUpdated:(id)arg1;	// IMP=0x001000000006a7fa
- (id)_applicationSceneForBundleID:(id)arg1;	// IMP=0x001000000006a49e
- (void)_handleCarPlayUIReady;	// IMP=0x0010000000069f7f
- (void)_animateStartupFromScaledMainWindow;	// IMP=0x0010000000069868
- (void)_animateStartupToIcons;	// IMP=0x0010000000068bb9
- (void)_animateStartupToHomeScreen;	// IMP=0x00100000000689f4
- (void)_updatePasscodeLockToken;	// IMP=0x00100000000687dd
- (void)_updateWindowFrames;	// IMP=0x0010000000068336
- (void)_updateAppScenesViewArea;	// IMP=0x0010000000067f32
- (void)environmentConfigurationPairedVehiclesDidChange:(id)arg1;	// IMP=0x0010000000067f20
- (void)environmentConfiguration:(id)arg1 viewAreaDidChangeFromViewAreaFrame:(struct CGRect)arg2 safeAreaInsets:(struct UIEdgeInsets)arg3 toViewAreaFrame:(struct CGRect)arg4 safeAreaInsets:(struct UIEdgeInsets)arg5 duration:(double)arg6 transitionControlType:(unsigned long long)arg7;	// IMP=0x00100000000669a1
- (void)environmentConfiguration:(id)arg1 mapsAppearanceStyleDidChange:(long long)arg2;	// IMP=0x0010000000066375
- (void)environmentConfiguration:(id)arg1 nightModeDidChange:(_Bool)arg2;	// IMP=0x00100000000662c5
- (void)environmentConfiguration:(id)arg1 appearanceStyleDidChange:(long long)arg2;	// IMP=0x001000000006624a
- (void)didDismissNotificationForNotificationViewController:(id)arg1;	// IMP=0x0010000000066061
- (void)willDisplayNotificationForNotificationViewController:(id)arg1;	// IMP=0x0010000000065d67
- (void)alertServer:(id)arg1 wantsSystemDismissalForViewController:(id)arg2;	// IMP=0x0010000000065d24
- (void)alertServer:(id)arg1 wantsSystemPresentationForViewController:(id)arg2;	// IMP=0x0010000000065ce1
- (struct CGRect)_rectForFocusedRectDictionary:(id)arg1;	// IMP=0x0010000000065b58
- (void)session:(id)arg1 receivedUnhandledRemoteEvent:(id)arg2 withPayload:(id)arg3;	// IMP=0x00100000000652d5
- (void)_handleSessionURL:(id)arg1;	// IMP=0x001000000006405f
- (void)_launchAppWithInfo:(id)arg1 forURL:(id)arg2;	// IMP=0x0010000000063bb1
- (void)session:(id)arg1 openURL:(id)arg2;	// IMP=0x001000000006392d
- (void)session:(id)arg1 handleSiriRequestEvent:(long long)arg2 withPayload:(id)arg3;	// IMP=0x0010000000063898
- (void)_handleSiriButtonUpWithTimestamp:(double)arg1;	// IMP=0x001000000006364b
- (void)_handleSiriButtonDownWithTimestamp:(double)arg1;	// IMP=0x001000000006320e
- (void)_handleSiriPrewarmWithTimestamp:(double)arg1;	// IMP=0x0010000000063003
- (void)lockOutController:(id)arg1 didChangeFromLockoutMode:(long long)arg2 toLockOutMode:(long long)arg3 animated:(_Bool)arg4 takeScreen:(_Bool)arg5;	// IMP=0x0010000000061c82
- (void)inCallAssertionService:(id)arg1 didSetBannersEnabled:(_Bool)arg2;	// IMP=0x0010000000061b89
- (void)inCallAssertionServiceDidDismiss:(id)arg1;	// IMP=0x0010000000061a43
- (void)inCallAssertionServiceDidPresent:(id)arg1;	// IMP=0x0010000000061791
- (void)handleEvent:(id)arg1;	// IMP=0x0010000000061375
- (_Bool)shouldDisableFiveRowKeyboards;	// IMP=0x00100000000611f1
- (void)invalidate;	// IMP=0x001000000006082d
- (id)systemGestureWindow;	// IMP=0x00100000000607a6
- (id)focusWindow;	// IMP=0x001000000006078d
- (id)applicationInfoForScene:(id)arg1;	// IMP=0x00100000000606da
- (struct UIEdgeInsets)statusBarInsets;	// IMP=0x00100000000605ad
- (long long)sceneMapInterfaceStyleForAppInfo:(id)arg1 proxyAppInfo:(id)arg2;	// IMP=0x0010000000060569
- (long long)sceneInterfaceStyleForAppInfo:(id)arg1 proxyAppInfo:(id)arg2;	// IMP=0x0010000000060202
- (struct UIEdgeInsets)safeAreaInsetsForAppInfo:(id)arg1;	// IMP=0x0010000000060163
- (struct UIEdgeInsets)safeAreaInsetsForAppInfo:(id)arg1 proxyAppInfo:(id)arg2;	// IMP=0x001000000006009a
- (struct CGRect)sceneFrameForAppInfo:(id)arg1 viewAreaFrame:(struct CGRect)arg2;	// IMP=0x001000000005ff73
- (struct CGRect)sceneFrameForAppInfo:(id)arg1;	// IMP=0x001000000005fde8
- (struct CGRect)sceneFrameForAppInfo:(id)arg1 proxyAppInfo:(id)arg2;	// IMP=0x001000000005fd19
- (id)sceneForAppInfo:(id)arg1;	// IMP=0x001000000005fc75
- (id)sceneIdentifierForAppInfo:(id)arg1;	// IMP=0x001000000005fa50
- (void)removeObserver:(id)arg1;	// IMP=0x001000000005f9de
- (void)addObserver:(id)arg1;	// IMP=0x001000000005f96c
@property(readonly, nonatomic) id <CRSIconLayoutVehicleDataProviding> iconLayoutDataProvider;
@property(readonly, copy, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property(readonly, copy, nonatomic) FBSDisplayIdentity *displayIdentity;
- (void)sceneManager:(id)arg1 updateForScene:(id)arg2 completedWithContext:(id)arg3 error:(id)arg4;	// IMP=0x001000000005f5bb
- (void)sceneManager:(id)arg1 updateForScene:(id)arg2 appliedWithContext:(id)arg3;	// IMP=0x001000000005f31c
- (void)sceneManager:(id)arg1 updateForScene:(id)arg2 preparedWithContext:(id)arg3;	// IMP=0x001000000005eff3
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;	// IMP=0x001000000005ece0
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;	// IMP=0x001000000005ea74
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2;	// IMP=0x001000000005e422
- (void)sceneManager:(id)arg1 scene:(id)arg2 didReceiveActions:(id)arg3;	// IMP=0x001000000005d9f9
- (void)sceneManager:(id)arg1 scene:(id)arg2 didUpdateClientSettingsWithDiff:(id)arg3 oldClientSettings:(id)arg4 transitionContext:(id)arg5;	// IMP=0x001000000005d9f3
- (void)handleFocusMovementAction:(id)arg1 fromScene:(id)arg2;	// IMP=0x001000000005cc35
- (_Bool)_isStatusBarScene:(id)arg1;	// IMP=0x001000000005cb74
- (_Bool)_isPreYukonNavAppForAppInfo:(id)arg1 proxiedAppInfo:(id)arg2;	// IMP=0x001000000005caee
- (void)_setInitialFocusOwner;	// IMP=0x001000000005c8cf
- (void)_drawCorners;	// IMP=0x001000000005baa4
- (id)_dashboardScene;	// IMP=0x001000000005b9a9
- (long long)_sceneInterfaceStyleForScene:(id)arg1;	// IMP=0x001000000005b788
- (void)_updateUserInterfaceStyle;	// IMP=0x001000000005b513
- (void)_updateWallpaper;	// IMP=0x001000000005b0bc
- (void)_screenDidBecomeAvailable:(id)arg1;	// IMP=0x001000000005ae3e
- (void)_screenDidBecomeUnavailable:(id)arg1;	// IMP=0x001000000005ac62
- (void)_notifyAccessoryIfNeededWithUIContext:(id)arg1;	// IMP=0x001000000005a80b
- (void)_displayRecordingAlert;	// IMP=0x001000000005a2ee
- (void)_backLongPressed:(id)arg1;	// IMP=0x001000000005a234
- (void)_pointerSelectionPressed:(id)arg1;	// IMP=0x001000000005a006
- (void)_homeTapped:(id)arg1;	// IMP=0x0010000000059f89
- (id)_takeSnapshotOfFrame:(struct CGRect)arg1;	// IMP=0x0010000000059cee
- (id)_newResizeAnimationWindow;	// IMP=0x0010000000059bb7
- (struct CGRect)_notificationWindowFrameForViewAreaFrame:(struct CGRect)arg1;	// IMP=0x00100000000598c7
- (struct CGRect)_statusBarWindowFrameForSafeAreaFrame:(struct CGRect)arg1;	// IMP=0x00100000000596a5
- (_Bool)hasActiveCall;	// IMP=0x0010000000059661
- (id)_activeBundleIdentifierForScene:(id)arg1;	// IMP=0x001000000005944a
- (void)_updateDeferrals;	// IMP=0x0010000000059315
- (id)_foregroundActiveScene;	// IMP=0x00100000000590e8
- (void)_handleTapToRadarEvent;	// IMP=0x0010000000058bec
- (void)_handleBackgroundURLDeliveryForLaunchInfo:(id)arg1;	// IMP=0x0010000000057e52
- (void)_handleOpenApplicationEvent:(id)arg1;	// IMP=0x00100000000576b2
- (void)_handleHomeEvent:(id)arg1;	// IMP=0x0010000000057610
@property(readonly, nonatomic) NSString *activeBundleIdentifier;
- (void)handleLongBackPress;	// IMP=0x0010000000057479
- (_Bool)handleACHomeUp:(unsigned long long)arg1;	// IMP=0x00100000000573ea
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000000572bf
- (void)dealloc;	// IMP=0x0010000000057015
- (struct UIEdgeInsets)_rootViewControllerInsets;	// IMP=0x0010000000056ea1
- (void)handleConnect;	// IMP=0x0010000000054f8e
- (id)initWithWindowScene:(id)arg1 environmentConfiguration:(id)arg2;	// IMP=0x0010000000054101

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

