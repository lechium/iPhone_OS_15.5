//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIApplication.h>

@class CoreTelephonyClient, EAAccessory, MISSING_TYPE, NSMutableSet, NSRegularExpression, NSString, PSAccountEnumerator, PSSplitViewController, PSUIPrefsRootController, PSURLManager, PreferenceSceneDelegate, UIWindow, UIWindowScene;

@interface PreferencesAppController : UIApplication
{
    PSSplitViewController *_splitViewController;	// 8 = 0x8
    PSUIPrefsRootController *_controller;	// 16 = 0x10
    UIWindow *_window;	// 24 = 0x18
    _Bool _isLocked;	// 32 = 0x20
    _Bool _loadingExternalURL;	// 33 = 0x21
    unsigned long long _backgroundTaskHandle;	// 40 = 0x28
    _Bool _settingsWasResigned;	// 48 = 0x30
    EAAccessory *_speakerAccessory;	// 56 = 0x38
    NSMutableSet *_busyControllers;	// 64 = 0x40
    CoreTelephonyClient *_client;	// 72 = 0x48
    PSURLManager *_urlManager;	// 80 = 0x50
    PreferenceSceneDelegate *_windowSceneClass;	// 88 = 0x58
    UIWindowScene *_scene;	// 96 = 0x60
    PSAccountEnumerator *_accountEnumerator;	// 104 = 0x68
    NSRegularExpression *__uuidRegex;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x002000000000a0a9
@property(retain, nonatomic) NSRegularExpression *_uuidRegex; // @synthesize _uuidRegex=__uuidRegex;
@property(retain, nonatomic) PSAccountEnumerator *accountEnumerator; // @synthesize accountEnumerator=_accountEnumerator;
@property(retain, nonatomic) UIWindowScene *scene; // @synthesize scene=_scene;
@property(retain, nonatomic) PreferenceSceneDelegate *windowSceneClass; // @synthesize windowSceneClass=_windowSceneClass;
@property(retain, nonatomic) PSURLManager *urlManager; // @synthesize urlManager=_urlManager;
@property(retain, nonatomic) CoreTelephonyClient *client; // @synthesize client=_client;
@property(retain, nonatomic) NSMutableSet *busyControllers; // @synthesize busyControllers=_busyControllers;
- (void)carrierBundleChange:(id)arg1;	// IMP=0x0010000000009f59
- (void)splitViewControllerDidPopToRootController:(id)arg1;	// IMP=0x0010000000009ef5
- (_Bool)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3;	// IMP=0x0010000000009e71
- (id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2;	// IMP=0x0010000000009d22
- (void)accessoryDidDisconnect:(id)arg1;	// IMP=0x0010000000009cad
- (void)_accessoryDidConnect:(id)arg1;	// IMP=0x0010000000009b90
- (void)dealloc;	// IMP=0x0010000000009ab4
- (double)defaultImageSnapshotExpiration;	// IMP=0x00100000000099f3
- (void)resetLocale;	// IMP=0x00100000000099e9
- (void)significantTimeChange;	// IMP=0x001000000000999c
- (void)systemDidWake:(id)arg1;	// IMP=0x001000000000997f
- (void)_handleIconChangeForBundleID:(id)arg1;	// IMP=0x0010000000009905
- (void)_handleExternalApplicationChange;	// IMP=0x00100000000098bd
- (void)_suspendControllers;	// IMP=0x0010000000009838
- (void)_handleBusyControllers;	// IMP=0x001000000000968b
- (void)controllerFinished:(id)arg1;	// IMP=0x001000000000958c
- (void)endAndInvalidateBackgroundTask;	// IMP=0x0010000000009522
- (void)addBusyControllersFromRootController:(id)arg1;	// IMP=0x0010000000009308
- (id)oneTimeJumpURL;	// IMP=0x0010000000009300
- (void)_clearSavedPositionURL;	// IMP=0x00100000000092a6
- (void)generateURL;	// IMP=0x0010000000008f2e
- (void)processOtpauthURL:(id)arg1;	// IMP=0x0010000000008e26
- (void)processTVProviderPrefsURL:(id)arg1;	// IMP=0x0010000000008dcc
- (void)processPrebuddyURL:(id)arg1;	// IMP=0x0010000000008d72
- (void)processShorcutsAppPrefsURL:(id)arg1;	// IMP=0x0010000000008cba
- (void)processAppPrefsURL:(id)arg1;	// IMP=0x0010000000008b32
- (void)handleAuthKitURLIfNeededFromResourceDictionary:(id)arg1 overViewController:(id)arg2;	// IMP=0x00100000000087f2
- (void)_rationalizeAccountSettingsURLDictionary:(id)arg1;	// IMP=0x0010000000007d3f
- (void)processURL:(id)arg1 animated:(_Bool)arg2 fromSearch:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000006c50
- (void)processURL:(id)arg1 animated:(_Bool)arg2 fromSearch:(_Bool)arg3;	// IMP=0x0010000000006c3b
- (void)processURL:(id)arg1;	// IMP=0x0010000000006b75
- (void)receivedApplicationOpenURLNotification:(id)arg1;	// IMP=0x0010000000006a6a
- (void)receivedApplicationResumeNotification:(id)arg1;	// IMP=0x00100000000069ed
- (void)receivedApplicationContinueUserActivity:(id)arg1;	// IMP=0x00100000000064d5
- (void)receivedApplicationWillResignActiveNotification:(id)arg1;	// IMP=0x00100000000063c5
- (void)receivedApplicationDidBecomeActive:(id)arg1;	// IMP=0x00100000000062e0
- (void)receivedApplicationWillEnterForegroundNotification:(id)arg1;	// IMP=0x0010000000005a8a
- (void)receivedApplicationDidEnterBackground:(id)arg1;	// IMP=0x00100000000058fd
- (void)receivedApplicationWillTerminateNotification:(id)arg1;	// IMP=0x0010000000005866
- (id)quickActionShortcutItems;	// IMP=0x0010000000005348
- (void)receivedApplicationWillConnectWindowScene:(id)arg1;	// IMP=0x0010000000004e1d
- (id)application:(id)arg1 configurationForConnectingSceneSession:(id)arg2 options:(id)arg3;	// IMP=0x0010000000004dcf
- (void)processStateRestorationURL;	// IMP=0x0010000000004a54
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0010000000003ff0
- (void)_registerForAccessoryNotifications;	// IMP=0x0010000000003b2e
- (void)updateSoftwareUpdateBadgeOnSpecifier:(id)arg1;	// IMP=0x0010000000003b28
- (_Bool)performRecapScrollTest:(id)arg1 withOptions:(id)arg2 scrollView:(id)arg3;	// IMP=0x0010000000003836
- (_Bool)runScrollTest:(id)arg1 withDelay:(unsigned long long)arg2 withOptions:(id)arg3;	// IMP=0x001000000000341a
- (_Bool)runScrollTest:(id)arg1 withOptions:(id)arg2;	// IMP=0x0010000000003400
- (_Bool)runLoadingTest:(id)arg1 withOptions:(id)arg2;	// IMP=0x0010000000002fa1
- (_Bool)runTest:(id)arg1 options:(id)arg2;	// IMP=0x001000000000278f
- (void)popToRootOfSettingsSelectGeneral:(_Bool)arg1 performWithoutDeferringTransitions:(_Bool)arg2;	// IMP=0x0010000000002737
- (void)popToRootOfSettingsSelectGeneral:(_Bool)arg1;	// IMP=0x0010000000002723
- (void)clearControllersForSuspendedState;	// IMP=0x0010000000001f07
- (void)profileConnectionDidReceivePasscodeChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x0010000000001e84
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x0010000000001e01
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x0010000000001d7e
- (void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x0010000000001cfb
- (id)appWindow;	// IMP=0x0010000000001ce6
- (MISSING_TYPE *)rootController;	// IMP=0x0010000000001cd1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

