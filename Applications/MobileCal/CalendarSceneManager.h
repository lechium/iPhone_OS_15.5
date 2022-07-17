//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CalendarDebugViewController, CalendarModel, EKEvent, MainWindowRootViewController, MobileCalWindow, NSArray, NSString, RootNavigationController, UIApplicationShortcutItem;

@interface CalendarSceneManager : NSObject
{
    CalendarModel *_model;	// 8 = 0x8
    MobileCalWindow *_mobileCalWindow;	// 16 = 0x10
    RootNavigationController *_rootNavigationController;	// 24 = 0x18
    MainWindowRootViewController *_rootViewController;	// 32 = 0x20
    _Bool _launchedFromURLOrActivity;	// 40 = 0x28
    _Bool _sceneHasCompletedExtendedLaunch;	// 41 = 0x29
    _Bool _finishedSetup;	// 42 = 0x2a
    _Bool _showingSplashScreen;	// 43 = 0x2b
    _Bool _maintainToday;	// 44 = 0x2c
    NSArray *_userActivitiesToContinueAfterConnection;	// 48 = 0x30
    UIApplicationShortcutItem *_shortcutItemToRunAfterConnection;	// 56 = 0x38
    EKEvent *_selectedOccurrenceToRestoreAfterConnection;	// 64 = 0x40
    CDUnknownBlockType _splashScreenCompletionAction;	// 72 = 0x48
    CalendarDebugViewController *_debugViewController;	// 80 = 0x50
}

+ (id)_encodeIdentifier:(id)arg1;	// IMP=0x0020000000111811
+ (id)_applicationLastActiveTime;	// IMP=0x001000000010bb64
+ (id)_sharedState;	// IMP=0x001000000010bb0f
+ (void)setApplicationLastActiveTimeProvider:(id)arg1;	// IMP=0x001000000010a66d
+ (_Bool)isSceneCalendarAppScene:(id)arg1;	// IMP=0x001000000010a61f
- (void).cxx_destruct;	// IMP=0x0020000000112fb2
@property(retain, nonatomic) CalendarDebugViewController *debugViewController; // @synthesize debugViewController=_debugViewController;
@property(copy, nonatomic) CDUnknownBlockType splashScreenCompletionAction; // @synthesize splashScreenCompletionAction=_splashScreenCompletionAction;
- (void)_collectStats:(id)arg1;	// IMP=0x0010000000112db5
- (void)_receivedSplashScreenCompletedNotification;	// IMP=0x0010000000112c4c
- (void)_splashScreenDidDismissShouldNotify:(_Bool)arg1;	// IMP=0x0010000000112b35
- (void)_constructAndPresentSplashScreenFromViewController:(id)arg1 window:(id)arg2;	// IMP=0x00100000001124bd
- (void)windowScene:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000111ffd
- (void)scene:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3;	// IMP=0x0010000000111f3f
- (void)scene:(id)arg1 continueUserActivity:(id)arg2;	// IMP=0x0010000000111f1c
- (void)_selectedIdentityDidUpdate:(id)arg1;	// IMP=0x0010000000111eb8
- (void)_updateSceneActivationConditions;	// IMP=0x001000000011190a
- (id)_eventURLFromLaunchURL:(id)arg1 isTravel:(_Bool *)arg2;	// IMP=0x0010000000111571
- (void)_openURL:(id)arg1;	// IMP=0x0010000000110e36
- (void)scene:(id)arg1 openURLContexts:(id)arg2;	// IMP=0x0010000000110aa7
- (void)_mainViewControllerDidRequestSceneTitleUpdate:(id)arg1;	// IMP=0x0010000000110a5a
- (_Bool)_isAnyWindowShowingDelegateCalendar;	// IMP=0x001000000011080c
- (void)_updateSceneTitle;	// IMP=0x0010000000110669
- (_Bool)_continueUserActivity:(id)arg1 restoreSelectedOccurrence:(_Bool)arg2 restoreSelectedDate:(_Bool)arg3 restorationHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000010f1e2
- (void)_restoreStateFromUserActivity:(id)arg1;	// IMP=0x001000000010e64d
- (void)_restoreModelPersistedStateFromUserActivity:(id)arg1;	// IMP=0x001000000010e41a
- (id)_extractNumberFromUserActivity:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000010e35f
- (_Bool)_isUserActivityForStateRestoration:(id)arg1;	// IMP=0x001000000010e2c4
- (void)_addPersistedStateFromCalendarModelToDictionary:(id)arg1;	// IMP=0x001000000010e070
- (id)stateRestorationActivityForScene:(id)arg1;	// IMP=0x001000000010db65
- (void)sceneWillEnterForeground:(id)arg1;	// IMP=0x001000000010db2a
- (void)sceneDidEnterBackground:(id)arg1;	// IMP=0x001000000010dae5
- (void)sceneWillResignActive:(id)arg1;	// IMP=0x001000000010dac1
- (void)sceneDidBecomeActive:(id)arg1;	// IMP=0x001000000010d6f2
- (void)sceneDidDisconnect:(id)arg1;	// IMP=0x001000000010d15d
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;	// IMP=0x001000000010c405
- (_Bool)_shouldMaintainToday;	// IMP=0x001000000010c263
- (_Bool)_shouldResumeToTodayOnBecomeActive;	// IMP=0x001000000010bfc1
- (_Bool)_areMultipleScenesOpen;	// IMP=0x001000000010bdc6
- (void)_refreshAccountListAndViewContentsIfNeededForModel:(id)arg1;	// IMP=0x001000000010bcdc
- (id)_setUpModel;	// IMP=0x001000000010bc3d
- (double)_resumeToTodayTimeout;	// IMP=0x001000000010bbde
- (void)_extendedLaunchDidComplete;	// IMP=0x001000000010baa6
- (void)_topMainViewControllerCompletedExtendedLaunch:(id)arg1;	// IMP=0x001000000010b9ae
- (void)_displayedOccurrencesChangedForTheFirstTime:(id)arg1;	// IMP=0x001000000010b71f
- (void)_stateRestoreSelectedCalendarsFromUserActivity:(id)arg1;	// IMP=0x001000000010b114
- (void)__buildCalendarSyncHashesForCalendars:(id)arg1;	// IMP=0x001000000010b09e
- (void)__restoreSelectedCalendarsFromPreferences;	// IMP=0x001000000010ab1b
- (void)_restoreSelectedCalendarsFromPreferenceIfNeeded;	// IMP=0x001000000010aaf4
- (void)showDebugMenu;	// IMP=0x001000000010aa3b
- (void)_setupDebugMenu:(id)arg1;	// IMP=0x001000000010a992
- (void)debugViewControllerDidDismiss;	// IMP=0x001000000010a936
- (void)_showEvent:(id)arg1 inView:(unsigned long long)arg2;	// IMP=0x001000000010a918
- (void)_showDate:(id)arg1 inView:(unsigned long long)arg2;	// IMP=0x001000000010a736
- (void)setLaunchedFromURLOrActivity;	// IMP=0x001000000010a72c
- (void)handleURL:(id)arg1 context:(id)arg2;	// IMP=0x001000000010a712
@property(readonly, nonatomic) _Bool showingSplashScreen;
@property(readonly, nonatomic) MobileCalWindow *mobileCalWindow;
@property(readonly, nonatomic) RootNavigationController *rootNavigationController;
@property(readonly, nonatomic) CalendarModel *model;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
