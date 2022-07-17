//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BKSTouchDeliveryPolicyAssertion, CARApplicationInfo, CARTodayViewSynchronizedAnimationManager, FBApplicationUpdateScenesTransaction, FBSDisplayConfiguration, FBScene, NSArray, NSMutableSet, NSString, NSTimer, NSXPCConnection, NSXPCListener, UITapGestureRecognizer, UIView;
@protocol UIScenePresentation, UIScenePresenter;

@interface CARWidgetSceneViewController
{
    _Bool _enabled;	// 8 = 0x8
    _Bool _foreground;	// 9 = 0x9
    _Bool _invalidated;	// 10 = 0xa
    _Bool _debugSnapshotLabelEnabled;	// 11 = 0xb
    _Bool _proxySceneContentReady;	// 12 = 0xc
    unsigned int _widgetContextId;	// 16 = 0x10
    FBScene *_scene;	// 24 = 0x18
    unsigned long long _widgetStyle;	// 32 = 0x20
    NSString *_targetBundleIdentifier;	// 40 = 0x28
    FBSDisplayConfiguration *_displayConfiguration;	// 48 = 0x30
    id <UIScenePresenter> _scenePresenter;	// 56 = 0x38
    UIView<UIScenePresentation> *_sceneHostView;	// 64 = 0x40
    NSString *_requester;	// 72 = 0x48
    unsigned long long _deactivationReasons;	// 80 = 0x50
    NSTimer *_retryTimer;	// 88 = 0x58
    double _retryDelay;	// 96 = 0x60
    unsigned long long _targetAppCrashTally;	// 104 = 0x68
    unsigned long long _proxyAppCrashTally;	// 112 = 0x70
    FBApplicationUpdateScenesTransaction *_transaction;	// 120 = 0x78
    UITapGestureRecognizer *_selectTapGestureRecognizer;	// 128 = 0x80
    UITapGestureRecognizer *_touchTapGestureRecognizer;	// 136 = 0x88
    NSXPCListener *_listener;	// 144 = 0x90
    BKSTouchDeliveryPolicyAssertion *_touchDeliveryPolicyAssertion;	// 152 = 0x98
    BKSTouchDeliveryPolicyAssertion *_cancelTouchesInIsolatedViewAssertion;	// 160 = 0xa0
    NSArray *_focusableItemViews;	// 168 = 0xa8
    CARTodayViewSynchronizedAnimationManager *_animationManager;	// 176 = 0xb0
    double _initialTouchTimestamp;	// 184 = 0xb8
    UIView *_touchActionView;	// 192 = 0xc0
    NSMutableSet *_touchActionDisabledRequesters;	// 200 = 0xc8
    UIView *_loadingView;	// 208 = 0xd0
    NSXPCConnection *_connection;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x0020000000011da1
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) _Bool proxySceneContentReady; // @synthesize proxySceneContentReady=_proxySceneContentReady;
@property(retain, nonatomic) NSMutableSet *touchActionDisabledRequesters; // @synthesize touchActionDisabledRequesters=_touchActionDisabledRequesters;
@property(retain, nonatomic) UIView *touchActionView; // @synthesize touchActionView=_touchActionView;
@property(nonatomic) _Bool debugSnapshotLabelEnabled; // @synthesize debugSnapshotLabelEnabled=_debugSnapshotLabelEnabled;
@property(nonatomic) double initialTouchTimestamp; // @synthesize initialTouchTimestamp=_initialTouchTimestamp;
@property(retain, nonatomic) CARTodayViewSynchronizedAnimationManager *animationManager; // @synthesize animationManager=_animationManager;
@property(retain, nonatomic) NSArray *focusableItemViews; // @synthesize focusableItemViews=_focusableItemViews;
@property(nonatomic) unsigned int widgetContextId; // @synthesize widgetContextId=_widgetContextId;
@property(retain, nonatomic) BKSTouchDeliveryPolicyAssertion *cancelTouchesInIsolatedViewAssertion; // @synthesize cancelTouchesInIsolatedViewAssertion=_cancelTouchesInIsolatedViewAssertion;
@property(retain, nonatomic) BKSTouchDeliveryPolicyAssertion *touchDeliveryPolicyAssertion; // @synthesize touchDeliveryPolicyAssertion=_touchDeliveryPolicyAssertion;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) UITapGestureRecognizer *touchTapGestureRecognizer; // @synthesize touchTapGestureRecognizer=_touchTapGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *selectTapGestureRecognizer; // @synthesize selectTapGestureRecognizer=_selectTapGestureRecognizer;
@property(retain, nonatomic) FBApplicationUpdateScenesTransaction *transaction; // @synthesize transaction=_transaction;
@property(nonatomic) unsigned long long proxyAppCrashTally; // @synthesize proxyAppCrashTally=_proxyAppCrashTally;
@property(nonatomic) unsigned long long targetAppCrashTally; // @synthesize targetAppCrashTally=_targetAppCrashTally;
@property(nonatomic) double retryDelay; // @synthesize retryDelay=_retryDelay;
@property(retain, nonatomic) NSTimer *retryTimer; // @synthesize retryTimer=_retryTimer;
@property(nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(nonatomic) unsigned long long deactivationReasons; // @synthesize deactivationReasons=_deactivationReasons;
@property(copy, nonatomic) NSString *requester; // @synthesize requester=_requester;
@property(retain, nonatomic) UIView<UIScenePresentation> *sceneHostView; // @synthesize sceneHostView=_sceneHostView;
@property(retain, nonatomic) id <UIScenePresenter> scenePresenter; // @synthesize scenePresenter=_scenePresenter;
@property(retain, nonatomic) FBSDisplayConfiguration *displayConfiguration; // @synthesize displayConfiguration=_displayConfiguration;
@property(copy, nonatomic) NSString *targetBundleIdentifier; // @synthesize targetBundleIdentifier=_targetBundleIdentifier;
@property(nonatomic) _Bool foreground; // @synthesize foreground=_foreground;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) unsigned long long widgetStyle; // @synthesize widgetStyle=_widgetStyle;
@property(retain, nonatomic) FBScene *scene; // @synthesize scene=_scene;
- (void)processMonitor:(id)arg1 didHandleDeathOfBundleIdentifier:(id)arg2;	// IMP=0x00100000000118b8
- (void)processMonitor:(id)arg1 shouldHandleDeathOfBundleIdentifier:(id)arg2 isCrash:(_Bool)arg3;	// IMP=0x00100000000115e3
- (void)connectionReady;	// IMP=0x00100000000115dd
- (void)sceneContentStateDidChange:(id)arg1;	// IMP=0x0010000000011212
- (id)preferredFocusEnvironments;	// IMP=0x001000000001115b
- (id)linearFocusItems;	// IMP=0x001000000001106f
- (void)selectedFocusableItem:(id)arg1;	// IMP=0x0010000000010fdf
- (void)focusableItem:(id)arg1 didChangeFocused:(_Bool)arg2;	// IMP=0x0010000000010f49
- (void)focusableItem:(id)arg1 didChangePressed:(_Bool)arg2;	// IMP=0x0010000000010eb3
- (void)clientSetContentReady;	// IMP=0x0010000000010e1c
- (void)clientSetWantsLargeSize:(_Bool)arg1 fenceHandle:(id)arg2 animationSettings:(id)arg3;	// IMP=0x0010000000010e16
- (void)clientSetFocusableItems:(id)arg1;	// IMP=0x0010000000010a31
- (void)updateContextId:(unsigned int)arg1;	// IMP=0x001000000001092c
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000010604
- (void)_endTouchCancellation;	// IMP=0x00100000000103ad
- (void)_beginTouchCancellation;	// IMP=0x0010000000010239
- (void)_scrollViewDidEndDragging:(id)arg1;	// IMP=0x001000000001013d
- (void)_scrollViewWillBeginDragging:(id)arg1;	// IMP=0x0010000000010041
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x001000000000ffb0
- (void)invalidate;	// IMP=0x001000000000fe50
- (void)_retryTimerFired:(id)arg1;	// IMP=0x001000000000fdae
- (void)_scheduleForegroundRetry;	// IMP=0x001000000000fc7f
- (void)_invalidateRetryTimer;	// IMP=0x001000000000fc15
- (void)sceneDidInvalidate:(id)arg1;	// IMP=0x001000000000f846
- (long long)_mapStyle;	// IMP=0x001000000000f769
- (long long)_uiStyle;	// IMP=0x001000000000f6ac
- (void)_animateLoadingViewRemovalIfNecessary;	// IMP=0x001000000000f3f3
- (void)_updateTouchActionDisabled;	// IMP=0x001000000000f2cd
- (void)_setTouchActionDisabled:(_Bool)arg1 forRequester:(id)arg2;	// IMP=0x001000000000f201
- (void)_setSceneActive:(_Bool)arg1;	// IMP=0x001000000000f111
- (void)_postTransactionUpdateSceneSettingsForScene:(id)arg1;	// IMP=0x001000000000ee46
- (void)_performSceneUpdateForeground:(_Bool)arg1;	// IMP=0x001000000000e1ac
- (void)_handleTapGesture:(id)arg1;	// IMP=0x001000000000dd44
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;	// IMP=0x001000000000dc73
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2;	// IMP=0x001000000000db37
@property(readonly, nonatomic) NSString *sceneID;
@property(readonly, nonatomic) CARApplicationInfo *proxiedApplicationInfo;
@property(readonly, nonatomic) CARApplicationInfo *applicationInfo;
- (void)replaceLoadingViewWithView:(id)arg1;	// IMP=0x001000000000d3f6
- (id)loadingIconImage;	// IMP=0x001000000000c979
- (_Bool)entireWidgetFocusable;	// IMP=0x001000000000c931
- (void)viewDidLayoutSubviews;	// IMP=0x001000000000c606
- (void)prepareLoadingViewAnimated:(_Bool)arg1;	// IMP=0x001000000000c5f1
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000000c501
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000000c411
- (void)viewDidLoad;	// IMP=0x001000000000bc28
- (id)initWithEnvironment:(id)arg1 animationManager:(id)arg2;	// IMP=0x001000000000b963

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
