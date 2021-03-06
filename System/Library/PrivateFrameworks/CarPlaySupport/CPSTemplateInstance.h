//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CarPlaySupport/BSInvalidatable-Protocol.h>
#import <CarPlaySupport/CPBannerDelegate-Protocol.h>
#import <CarPlaySupport/CPDashboardProviding-Protocol.h>
#import <CarPlaySupport/CPInstrumentClusterProviding-Protocol.h>
#import <CarPlaySupport/CPSNavigatorObserving-Protocol.h>
#import <CarPlaySupport/CPSSafeAreaDelegate-Protocol.h>
#import <CarPlaySupport/CPSTemplateViewControllerDelegate-Protocol.h>
#import <CarPlaySupport/CPTemplateProviding-Protocol.h>
#import <CarPlaySupport/NSXPCListenerDelegate-Protocol.h>
#import <CarPlaySupport/UINavigationControllerDelegate-Protocol.h>

@class CPSApplicationStateMonitor, CPSBannerSource, CPSDashboardEstimatesViewController, CPSDashboardGuidanceViewController, CPSInstrumentClusterCardViewController, CPSNowPlayingViewController, CPSOverlayViewController, CPSTabBarViewController, CPSTemplateEnvironment, FBScene, NSArray, NSMapTable, NSMutableDictionary, NSString, NSUUID, NSXPCConnection, NSXPCListener, SiriDirectActionSource, UIViewController, UIWindowScene;
@protocol CPDashboardClientInterface, CPTemplateServiceClientInterface;

@interface CPSTemplateInstance : NSObject <NSXPCListenerDelegate, UINavigationControllerDelegate, CPSTemplateViewControllerDelegate, CPSSafeAreaDelegate, CPBannerDelegate, CPDashboardProviding, CPSNavigatorObserving, CPInstrumentClusterProviding, CPTemplateProviding, BSInvalidatable>
{
    _Bool _pendingLaunchToNowPlaying;	// 8 = 0x8
    NSString *_sceneIdentifier;	// 16 = 0x10
    CPSOverlayViewController *_overlayViewController;	// 24 = 0x18
    FBScene *_scene;	// 32 = 0x20
    UIWindowScene *_windowSceneForTemplateApplicationScene;	// 40 = 0x28
    UIWindowScene *_windowSceneForMapWidgetScene;	// 48 = 0x30
    UIWindowScene *_windowSceneForGuidanceWidgetScene;	// 56 = 0x38
    UIWindowScene *_windowSceneForInstrumentClusterMapWidgetScene;	// 64 = 0x40
    FBScene *_mapWidgetScene;	// 72 = 0x48
    FBScene *_instrumentClusterScene;	// 80 = 0x50
    CPSDashboardGuidanceViewController *_dashboardGuidanceViewController;	// 88 = 0x58
    CPSDashboardEstimatesViewController *_dashboardEstimatesViewController;	// 96 = 0x60
    CPSInstrumentClusterCardViewController *_instrumentClusterCardViewController;	// 104 = 0x68
    CPSInstrumentClusterCardViewController *_instrumentClusterMapETAViewController;	// 112 = 0x70
    NSXPCListener *_interfaceControllerListener;	// 120 = 0x78
    NSXPCConnection *_interfaceControllerConnection;	// 128 = 0x80
    id <CPTemplateServiceClientInterface> _interfaceControllerRemoteObjectProxy;	// 136 = 0x88
    NSXPCListener *_dashboardControllerListener;	// 144 = 0x90
    NSXPCConnection *_dashboardControllerConnection;	// 152 = 0x98
    id <CPDashboardClientInterface> _dashboardControllerRemoteObjectProxy;	// 160 = 0xa0
    NSXPCListener *_instrumentClusterControllerListener;	// 168 = 0xa8
    NSXPCConnection *_instrumentClusterControllerConnection;	// 176 = 0xb0
    NSMutableDictionary *_identifierToViewControllerDictionary;	// 184 = 0xb8
    CPSBannerSource *_bannerSource;	// 192 = 0xc0
    UIViewController *_rootViewController;	// 200 = 0xc8
    CPSApplicationStateMonitor *_applicationStateMonitor;	// 208 = 0xd0
    NSUUID *_actionSheetIdentifier;	// 216 = 0xd8
    CPSTabBarViewController *_tabBarViewController;	// 224 = 0xe0
    CPSNowPlayingViewController *_nowPlayingViewController;	// 232 = 0xe8
    CPSTemplateEnvironment *_templateEnvironment;	// 240 = 0xf0
    SiriDirectActionSource *_siriActivationSource;	// 248 = 0xf8
    NSMapTable *_instrumentClusterViewControllerMapTable;	// 256 = 0x100
    NSArray *_clusterInactiveVariants;	// 264 = 0x108
    NSArray *_clusterAttributedInactiveVariants;	// 272 = 0x110
    struct UIEdgeInsets _currentSafeAreaInsets;	// 280 = 0x118
}

- (void).cxx_destruct;	// IMP=0x0000000000025970
@property(copy, nonatomic) NSArray *clusterAttributedInactiveVariants; // @synthesize clusterAttributedInactiveVariants=_clusterAttributedInactiveVariants;
@property(copy, nonatomic) NSArray *clusterInactiveVariants; // @synthesize clusterInactiveVariants=_clusterInactiveVariants;
@property(retain, nonatomic) NSMapTable *instrumentClusterViewControllerMapTable; // @synthesize instrumentClusterViewControllerMapTable=_instrumentClusterViewControllerMapTable;
@property(retain, nonatomic) SiriDirectActionSource *siriActivationSource; // @synthesize siriActivationSource=_siriActivationSource;
@property(retain, nonatomic) CPSTemplateEnvironment *templateEnvironment; // @synthesize templateEnvironment=_templateEnvironment;
@property(retain, nonatomic) CPSNowPlayingViewController *nowPlayingViewController; // @synthesize nowPlayingViewController=_nowPlayingViewController;
@property(retain, nonatomic) CPSTabBarViewController *tabBarViewController; // @synthesize tabBarViewController=_tabBarViewController;
@property(copy, nonatomic) NSUUID *actionSheetIdentifier; // @synthesize actionSheetIdentifier=_actionSheetIdentifier;
@property(retain, nonatomic) CPSApplicationStateMonitor *applicationStateMonitor; // @synthesize applicationStateMonitor=_applicationStateMonitor;
@property(retain, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(retain, nonatomic) CPSBannerSource *bannerSource; // @synthesize bannerSource=_bannerSource;
@property(retain, nonatomic) NSMutableDictionary *identifierToViewControllerDictionary; // @synthesize identifierToViewControllerDictionary=_identifierToViewControllerDictionary;
@property(retain, nonatomic) NSXPCConnection *instrumentClusterControllerConnection; // @synthesize instrumentClusterControllerConnection=_instrumentClusterControllerConnection;
@property(retain, nonatomic) NSXPCListener *instrumentClusterControllerListener; // @synthesize instrumentClusterControllerListener=_instrumentClusterControllerListener;
@property(retain, nonatomic) id <CPDashboardClientInterface> dashboardControllerRemoteObjectProxy; // @synthesize dashboardControllerRemoteObjectProxy=_dashboardControllerRemoteObjectProxy;
@property(retain, nonatomic) NSXPCConnection *dashboardControllerConnection; // @synthesize dashboardControllerConnection=_dashboardControllerConnection;
@property(retain, nonatomic) NSXPCListener *dashboardControllerListener; // @synthesize dashboardControllerListener=_dashboardControllerListener;
@property(retain, nonatomic) id <CPTemplateServiceClientInterface> interfaceControllerRemoteObjectProxy; // @synthesize interfaceControllerRemoteObjectProxy=_interfaceControllerRemoteObjectProxy;
@property(retain, nonatomic) NSXPCConnection *interfaceControllerConnection; // @synthesize interfaceControllerConnection=_interfaceControllerConnection;
@property(retain, nonatomic) NSXPCListener *interfaceControllerListener; // @synthesize interfaceControllerListener=_interfaceControllerListener;
@property(nonatomic) struct UIEdgeInsets currentSafeAreaInsets; // @synthesize currentSafeAreaInsets=_currentSafeAreaInsets;
@property(readonly, nonatomic) CPSInstrumentClusterCardViewController *instrumentClusterMapETAViewController; // @synthesize instrumentClusterMapETAViewController=_instrumentClusterMapETAViewController;
@property(readonly, nonatomic) CPSInstrumentClusterCardViewController *instrumentClusterCardViewController; // @synthesize instrumentClusterCardViewController=_instrumentClusterCardViewController;
@property(readonly, nonatomic) CPSDashboardEstimatesViewController *dashboardEstimatesViewController; // @synthesize dashboardEstimatesViewController=_dashboardEstimatesViewController;
@property(readonly, nonatomic) CPSDashboardGuidanceViewController *dashboardGuidanceViewController; // @synthesize dashboardGuidanceViewController=_dashboardGuidanceViewController;
@property(nonatomic) __weak FBScene *instrumentClusterScene; // @synthesize instrumentClusterScene=_instrumentClusterScene;
@property(nonatomic) __weak FBScene *mapWidgetScene; // @synthesize mapWidgetScene=_mapWidgetScene;
@property(nonatomic) __weak UIWindowScene *windowSceneForInstrumentClusterMapWidgetScene; // @synthesize windowSceneForInstrumentClusterMapWidgetScene=_windowSceneForInstrumentClusterMapWidgetScene;
@property(nonatomic) __weak UIWindowScene *windowSceneForGuidanceWidgetScene; // @synthesize windowSceneForGuidanceWidgetScene=_windowSceneForGuidanceWidgetScene;
@property(nonatomic) __weak UIWindowScene *windowSceneForMapWidgetScene; // @synthesize windowSceneForMapWidgetScene=_windowSceneForMapWidgetScene;
@property(nonatomic) __weak UIWindowScene *windowSceneForTemplateApplicationScene; // @synthesize windowSceneForTemplateApplicationScene=_windowSceneForTemplateApplicationScene;
@property(nonatomic) __weak FBScene *scene; // @synthesize scene=_scene;
@property(retain, nonatomic) CPSOverlayViewController *overlayViewController; // @synthesize overlayViewController=_overlayViewController;
@property(readonly, nonatomic) NSString *sceneIdentifier; // @synthesize sceneIdentifier=_sceneIdentifier;
- (void)hostSetAttributedInactiveVariants:(id)arg1;	// IMP=0x0000000000025412
- (void)hostSetInactiveVariants:(id)arg1;	// IMP=0x0000000000025262
- (void)didCreateNavigator:(id)arg1;	// IMP=0x0000000000024f6c
- (id)instrumentClusterViewControllerForDisplayIdentifier:(id)arg1;	// IMP=0x0000000000024e05
- (void)hostSetShortcutButtons:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000024cdd
- (void)updateInterestingInsets:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000024c87
- (void)viewController:(id)arg1 didUpdateSafeAreaInsets:(struct UIEdgeInsets)arg2;	// IMP=0x000000000002474d
- (void)templateViewController:(id)arg1 shouldActivateSiriWithDirectActionContext:(id)arg2;	// IMP=0x0000000000024540
- (void)templateViewControllerDidDismiss:(id)arg1;	// IMP=0x0000000000024352
- (void)templateViewControllerDidPop:(id)arg1;	// IMP=0x0000000000024112
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000024031
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000023e2e
- (void)_pushNowPlayingIfNeeded;	// IMP=0x0000000000023de0
- (void)whitelistClassesForBaseTemplateProvider:(id)arg1;	// IMP=0x0000000000023c52
- (void)_instrumentClusterConnectionInvalidationHandler;	// IMP=0x0000000000023ab4
- (_Bool)_handleInstrumentClusterConnection:(id)arg1;	// IMP=0x000000000002389a
- (void)_dashboardConnectionInvalidationHandler;	// IMP=0x000000000002370a
- (_Bool)_handleDashboardConnection:(id)arg1;	// IMP=0x0000000000023423
- (void)invalidate;	// IMP=0x0000000000023354
- (void)_appViewConnectionInvalidationHandler;	// IMP=0x000000000002320b
- (_Bool)_handleAppViewConnection:(id)arg1;	// IMP=0x0000000000022ee0
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000000022da5
- (void)getPresentedTemplateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000022c0d
- (void)getTemplatesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000022ac0
- (void)getTopTemplateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000002298b
- (void)dismissTemplateAnimated:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000022618
- (void)clientRequestNowPlayingTemplateAnimated:(_Bool)arg1;	// IMP=0x000000000002242b
- (void)popTemplateAnimated:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000002228a
- (void)popToRootTemplateAnimated:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000220e9
- (void)popToTemplate:(id)arg1 animated:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000021f08
- (void)containsTemplate:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000021d13
- (void)pushEntityTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3 presentationStyle:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0000000000021887
- (void)updateTabBarTemplate:(id)arg1;	// IMP=0x0000000000020d9d
- (void)setTabBarTemplate:(id)arg1 withProxyDelegate:(id)arg2 reply:(CDUnknownBlockType)arg3 animated:(id)arg4;	// IMP=0x0000000000020928
- (void)presentVoiceTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000020572
- (void)pushSearchTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3 presentationStyle:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0000000000020135
- (void)pushNowPlayingTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3 presentationStyle:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000000001fbfd
- (void)pushListTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3 presentationStyle:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000000001f666
- (void)requestNavigationProviderForMapTemplate:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000000001f4c4
- (void)pushMapTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3 presentationStyle:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000000001f0a4
- (void)pushInformationTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3 presentationStyle:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000000001ec10
- (void)pushGridTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3 presentationStyle:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000000001e687
- (void)requestBannerProviderWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000001e581
- (void)presentAlertTemplate:(id)arg1 withProxyDelegate:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000001e34a
- (void)presentActionSheetTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000001e115
- (void)setHostPrefersDarkUserInterfaceStyle:(_Bool)arg1;	// IMP=0x000000000001e02b
- (void)bannerDidDisappearWithIdentifier:(id)arg1;	// IMP=0x000000000001dfb9
- (void)bannerDidAppearWithIdentifier:(id)arg1;	// IMP=0x000000000001df47
- (void)bannerTappedWithIdentifier:(id)arg1;	// IMP=0x000000000001ded5
- (void)_applicationDidThrottleAudioUpdates:(id)arg1;	// IMP=0x000000000001debc
- (_Bool)_templateIsValidForCurrentEntitlement:(id)arg1;	// IMP=0x000000000001dd52
- (id)instrumentClusterEndpoint;	// IMP=0x000000000001d9ad
- (id)dashboardEndpoint;	// IMP=0x000000000001d933
- (id)endpoint;	// IMP=0x000000000001d8b9
- (void)dealloc;	// IMP=0x000000000001d87b
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x000000000001d560

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

