//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSHIDEventDeliveryPolicyObserver, CARSessionStatus, CarChromeViewController, CarClusterSuggestionController, CarDisplayWindow, CarMapsSuggestionsController, CarRouteGeniusManager, GEOCarInfo, GuidanceObserver, MISSING_TYPE, MapsSuggestionsDonater, MapsSuggestionsMutableSignalPack, NSDate, NSDictionary, NSOperation, NSString, NSTimer, NSUUID, PlatformController, SearchSession, UIAlertController, UILongPressGestureRecognizer, UIScreen, UITraitCollection, UIWindowScene;
@protocol CarDisplayDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CarDisplayController : NSObject
{
    BKSHIDEventDeliveryPolicyObserver *_HIDEventObserver;	// 8 = 0x8
    NSTimer *_idleTimeoutTimer;	// 16 = 0x10
    MISSING_TYPE *_screenOwnershipSuppressionTimer;	// 24 = 0x18
    NSOperation *_screenUpdateOperation;	// 32 = 0x20
    _Bool _updatingScreen;	// 40 = 0x28
    _Bool _willEnterForeground;	// 41 = 0x29
    NSDate *_dateOfLastScreenUpdate;	// 48 = 0x30
    _Bool _hasRunNewScreenRefreshTasks;	// 56 = 0x38
    struct CGSize _screenSize;	// 64 = 0x40
    _Bool _isPreparingNavigation;	// 80 = 0x50
    UIAlertController *_simulationAlertController;	// 88 = 0x58
    _Bool _hasArrived;	// 96 = 0x60
    NSTimer *_arrivalResetTimer;	// 104 = 0x68
    _Bool _observingMapsAppState;	// 112 = 0x70
    SearchSession *_searchSession;	// 120 = 0x78
    UILongPressGestureRecognizer *_nightModeToggleGesture;	// 128 = 0x80
    long long _queuedInterruptionKind;	// 136 = 0x88
    NSDictionary *_queuedInterruptionUserInfo;	// 144 = 0x90
    CDUnknownBlockType _queuedInterruptionHandler;	// 152 = 0x98
    CDUnknownBlockType _queuedInterruptionDismissalBlock;	// 160 = 0xa0
    NSUUID *_queuedInterruptionKey;	// 168 = 0xa8
    _Bool _shouldOverrideMapTypeToStandard;	// 176 = 0xb0
    int _lastMapTypeFromiOSChrome;	// 180 = 0xb4
    MapsSuggestionsDonater *_donater;	// 184 = 0xb8
    MapsSuggestionsMutableSignalPack *_signalPack;	// 192 = 0xc0
    NSObject<OS_dispatch_queue> *_signalPackQueue;	// 200 = 0xc8
    PlatformController *_platformController;	// 208 = 0xd0
    CarMapsSuggestionsController *_mapsSuggestionsController;	// 216 = 0xd8
    id <CarDisplayDelegate> _delegate;	// 224 = 0xe0
    unsigned long long _state;	// 232 = 0xe8
    UIScreen *_screen;	// 240 = 0xf0
    CarDisplayWindow *_window;	// 248 = 0xf8
    CarChromeViewController *_chromeViewController;	// 256 = 0x100
    CarClusterSuggestionController *_clusterSuggestionController;	// 264 = 0x108
    GuidanceObserver *_guidanceObserver;	// 272 = 0x110
    CarRouteGeniusManager *_routeGeniusManager;	// 280 = 0x118
    CARSessionStatus *_carSessionStatus;	// 288 = 0x120
    UIWindowScene *_windowScene;	// 296 = 0x128
    NSDate *_backgroundAutoHideStateTrackingDate;	// 304 = 0x130
}

+ (double)debugLaunchPerformanceDelay;	// IMP=0x0020000000aacbdf
+ (_Bool)debugLaunchPerformance;	// IMP=0x0010000000aacbbf
+ (void)launchPerformanceSetup;	// IMP=0x0010000000aac9a8
+ (unsigned long long)maximumListLength;	// IMP=0x0010000000aa93c8
+ (long long)enablingState;	// IMP=0x0010000000aa3901
+ (void)_updateCarIntegrationState;	// IMP=0x0010000000aa38b3
+ (_Bool)_isCarIntegrationSupported;	// IMP=0x0010000000aa3885
+ (_Bool)isCarPlayAvailable;	// IMP=0x0010000000aa3780
+ (id)sharedInstance;	// IMP=0x0010000000aa36d8
+ (void)initialize;	// IMP=0x0010000000aa3674
- (void).cxx_destruct;	// IMP=0x0020000000aacfa4
@property(retain, nonatomic) NSDate *backgroundAutoHideStateTrackingDate; // @synthesize backgroundAutoHideStateTrackingDate=_backgroundAutoHideStateTrackingDate;
@property(retain, nonatomic) UIWindowScene *windowScene; // @synthesize windowScene=_windowScene;
@property(retain, nonatomic) CARSessionStatus *carSessionStatus; // @synthesize carSessionStatus=_carSessionStatus;
@property(retain, nonatomic) CarRouteGeniusManager *routeGeniusManager; // @synthesize routeGeniusManager=_routeGeniusManager;
@property(retain, nonatomic) GuidanceObserver *guidanceObserver; // @synthesize guidanceObserver=_guidanceObserver;
@property(retain, nonatomic) CarClusterSuggestionController *clusterSuggestionController; // @synthesize clusterSuggestionController=_clusterSuggestionController;
@property(retain, nonatomic) CarChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
@property(readonly, nonatomic) SearchSession *searchSession; // @synthesize searchSession=_searchSession;
@property(readonly, nonatomic) struct CGSize screenSize; // @synthesize screenSize=_screenSize;
@property(retain, nonatomic) CarDisplayWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <CarDisplayDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CarMapsSuggestionsController *mapsSuggestionsController; // @synthesize mapsSuggestionsController=_mapsSuggestionsController;
@property(retain, nonatomic) PlatformController *platformController; // @synthesize platformController=_platformController;
- (void)_registerCarInfoForGEOLogging;	// IMP=0x0010000000aacd27
- (void)_setOverrideShouldSuppressChrome:(_Bool)arg1 refreshScreenConnection:(_Bool)arg2;	// IMP=0x0010000000aacc24
@property(nonatomic) _Bool overrideShouldSuppressChrome;
- (void)didFinishLaunchingSuspendedWithOptions:(id)arg1;	// IMP=0x0010000000aac83b
- (void)_removeQueuedInterruptionWithKey:(id)arg1;	// IMP=0x0010000000aac634
- (void)_presentQueuedInterruptionIfNeeded;	// IMP=0x0010000000aac1bc
- (CDUnknownBlockType)presentInterruptionOfKind:(long long)arg1 userInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000aabe06
- (void)_prepareNearby;	// IMP=0x0010000000aabd59
- (void)_stopObservingSharedAppState;	// IMP=0x0010000000aabc2c
- (void)_startObservingSharedAppState;	// IMP=0x0010000000aabb03
@property(readonly, nonatomic, getter=isAnyCarSceneHostingDrivingNavigation) _Bool anyCarSceneHostingDrivingNavigation;
@property(readonly, nonatomic, getter=isAnyCarSceneHostingNavigation) _Bool anyCarSceneHostingNavigation;
@property(readonly, nonatomic, getter=isCarAppSceneHostingNavigation) _Bool carAppSceneHostingNavigation;
- (void)detourToMapItem:(id)arg1;	// IMP=0x0010000000aab42b
- (void)searchSessionDidInvalidate:(id)arg1 reason:(unsigned long long)arg2;	// IMP=0x0010000000aab193
- (void)searchSessionDidFail:(id)arg1;	// IMP=0x0010000000aaa511
- (void)searchSessionDidChangeSearchResults:(id)arg1;	// IMP=0x0010000000aaa2ea
- (void)searchSessionWillPerformSearch:(id)arg1;	// IMP=0x0010000000aaa16a
- (void)searchSessionDidChangeSearchFieldItem:(id)arg1;	// IMP=0x0010000000aa9fea
- (void)_searchSessionWillStart:(id)arg1;	// IMP=0x0010000000aa9e4c
- (id)processSearchFieldItem:(id)arg1 searchInfo:(id)arg2 userInfo:(id)arg3;	// IMP=0x0010000000aa9ac2
- (void)observerDeliveryPolicyDidChange:(id)arg1;	// IMP=0x0010000000aa9748
- (_Bool)_shouldSendEvent:(id)arg1 toCarDisplayWindow:(id)arg2;	// IMP=0x0010000000aa946e
@property(readonly, nonatomic) long long connectionType;
@property(readonly, nonatomic) long long touchscreenFidelity;
@property(readonly, nonatomic) _Bool supportsFocusInteractionModel;
@property(readonly, nonatomic) _Bool supportsTouchInteractionModel;
@property(readonly, nonatomic) unsigned long long supportedInteractionModels;
@property(readonly, nonatomic) unsigned long long primaryInteractionModel;
@property(readonly, nonatomic) long long interactionModel;
- (_Bool)supportsInteractionModels:(unsigned long long)arg1;	// IMP=0x0010000000aa9150
- (void)sceneDidDisconnect:(id)arg1;	// IMP=0x0010000000aa90cf
- (void)sceneDidEnterBackground:(id)arg1;	// IMP=0x0010000000aa904c
- (void)sceneWillEnterForeground:(id)arg1;	// IMP=0x0010000000aa8fc9
- (void)_mapsCar_scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;	// IMP=0x0010000000aa8f2a
- (void)_carSessionController_updateNavigationHostingState;	// IMP=0x0010000000aa8e10
@property(readonly, nonatomic, getter=isCurrentlyConnectedToCarAppScene) _Bool currentlyConnectedToCarAppScene;
@property(readonly, nonatomic, getter=isCurrentlyConnectedToAnyCarScene) _Bool currentlyConnectedToAnyCarScene;
- (void)_updateForCurrentScreen;	// IMP=0x0010000000aa8443
- (void)_setNeedsScreenUpdate;	// IMP=0x0010000000aa80e9
- (_Bool)hasMapsSuggestionsController;	// IMP=0x0010000000aa80d8
- (_Bool)_activelyOnScreen;	// IMP=0x0010000000aa7f22
- (void)_screenDidDisconnect:(id)arg1;	// IMP=0x0010000000aa7a5e
- (void)_screenDidConnect:(id)arg1;	// IMP=0x0010000000aa798f
- (id)availableCarPlayScreen;	// IMP=0x0010000000aa78ac
@property(readonly, nonatomic) GEOCarInfo *connectedCarAnalyticsInfo;
@property(readonly, nonatomic) UITraitCollection *screenTraitCollection;
- (void)_popIfTopModeIsInvalidAfterReconnection:(_Bool)arg1;	// IMP=0x0010000000aa73f2
- (void)_idleTimeoutFired:(id)arg1;	// IMP=0x0010000000aa71e2
- (void)_stopTimingIdleTimout;	// IMP=0x0010000000aa7140
- (void)_startTimingIdleTimeout;	// IMP=0x0010000000aa6ffc
- (void)_stopScreenOwnershipSuppressionTimer;	// IMP=0x0010000000aa6f4f
- (void)_startScreenOwnershipSuppressionTimer;	// IMP=0x0010000000aa6c69
- (void)runNewScreenRefreshTasksIfNeeded;	// IMP=0x0010000000aa6a2c
- (void)_updateLowFuelSuggestionState;	// IMP=0x0010000000aa6920
- (void)_externalAccessoryUpdated;	// IMP=0x0010000000aa68a1
- (void)_willEnterForeground;	// IMP=0x0010000000aa66dd
- (void)_didEnterBackground;	// IMP=0x0010000000aa6456
- (void)_carDisplayDidFinishLaunching:(id)arg1;	// IMP=0x0010000000aa6418
- (void)_tearDownClusterSuggestionController;	// IMP=0x0010000000aa6381
- (void)_setupClusterSuggestionControllerIfNeeded;	// IMP=0x0010000000aa6208
- (void)_tearDownMapsSuggestionsController;	// IMP=0x0010000000aa61f4
- (void)_setChromeInactive:(_Bool)arg1 afterDelay:(double)arg2;	// IMP=0x0010000000aa5eaa
- (void)_setChromeSuppressed:(_Bool)arg1;	// IMP=0x0010000000aa5c1d
- (void)_destroyChrome;	// IMP=0x0010000000aa5ae3
- (id)contextsForCurrentAppState;	// IMP=0x0010000000aa5544
- (void)_prepareChromeForFirstUse;	// IMP=0x0010000000aa4cff
- (double)_activationDelay;	// IMP=0x0010000000aa4c1d
- (void)_tearDownCarPlayIfNeeded;	// IMP=0x0010000000aa4b54
- (void)_setupCarPlayIfNeeded;	// IMP=0x0010000000aa4a27
- (void)prepareCarPlay;	// IMP=0x0010000000aa48e3
- (_Bool)_validateTransitionFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;	// IMP=0x0010000000aa4612
@property(readonly, nonatomic, getter=isChromeAvailable) _Bool chromeAvailable;
- (void)session:(id)arg1 didUpdateConfiguration:(id)arg2;	// IMP=0x0010000000aa44ca
- (void)sessionDidDisconnect:(id)arg1;	// IMP=0x0010000000aa4218
- (void)sessionDidConnect:(id)arg1;	// IMP=0x0010000000aa3f7b
- (void)updateMapsSuggestionsSignalForMapType:(int)arg1;	// IMP=0x0010000000aa3dd8
- (void)_sendMapsSuggestionsSignals;	// IMP=0x0010000000aa3ba5
- (void)updateForCurrentEnablingState;	// IMP=0x0010000000aa3a39
- (void)_externalNavigationOwnershipUpdated:(id)arg1;	// IMP=0x0010000000aa348e
- (void)_geoServiceDidUpdateCountryConfiguration:(id)arg1;	// IMP=0x0010000000aa3474
- (void)_carDisplayDidUpdateEnablingState:(id)arg1;	// IMP=0x0010000000aa3462
- (id)init;	// IMP=0x0010000000aa32a9
- (void)dealloc;	// IMP=0x0010000000aa322a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

