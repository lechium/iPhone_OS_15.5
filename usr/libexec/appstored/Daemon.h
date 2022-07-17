//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AppMetricsMonitor, JobManagerListener, LaunchServicesObserver, NSCountedSet, NSMutableDictionary, NSString, NSXPCListener, ODRAppReviewListener, ODRDevtoolsListener, ODRDiagnosticsListener, ODRLaunchServicesListener, ODRServiceDelegate, OctaneListener, RequestBroker, SoftwareUpdateListener, SpotlightIndexMonitor, StoreQueueListener, XPCServiceBroker;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface Daemon : NSObject
{
    int _defaultsToken;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_jetsamSource;	// 24 = 0x18
    JobManagerListener *_jobManagerDelegate;	// 32 = 0x20
    NSXPCListener *_jobManagerListener;	// 40 = 0x28
    LaunchServicesObserver *_launchServicesObserver;	// 48 = 0x30
    OctaneListener *_octaneDelegate;	// 56 = 0x38
    NSXPCListener *_octaneListener;	// 64 = 0x40
    ODRAppReviewListener *_odrAppReviewDelegate;	// 72 = 0x48
    NSXPCListener *_odrAppReviewListener;	// 80 = 0x50
    ODRDiagnosticsListener *_odrCtlDelegate;	// 88 = 0x58
    NSXPCListener *_odrCtlListener;	// 96 = 0x60
    ODRDevtoolsListener *_odrDevtoolsDelegate;	// 104 = 0x68
    NSXPCListener *_odrDevtoolsListener;	// 112 = 0x70
    ODRServiceDelegate *_odrFoundationDelegate;	// 120 = 0x78
    NSXPCListener *_odrFoundationListener;	// 128 = 0x80
    ODRLaunchServicesListener *_odrLaunchServicesDelegate;	// 136 = 0x88
    NSXPCListener *_odrLaunchServicesListener;	// 144 = 0x90
    NSXPCListener *_personalizationStoreService;	// 152 = 0x98
    RequestBroker *_requestBroker;	// 160 = 0xa0
    NSXPCListener *_requestListener;	// 168 = 0xa8
    NSObject<OS_dispatch_source> *_signalSource;	// 176 = 0xb0
    NSXPCListener *_softwareUpdateListener;	// 184 = 0xb8
    SoftwareUpdateListener *_softwareUpdateDelegate;	// 192 = 0xc0
    NSXPCListener *_storeQueueListener;	// 200 = 0xc8
    StoreQueueListener *_storeQueueDelegate;	// 208 = 0xd0
    NSCountedSet *_transactionCount;	// 216 = 0xd8
    NSMutableDictionary *_transactionStore;	// 224 = 0xe0
    XPCServiceBroker *_serviceBroker;	// 232 = 0xe8
    SpotlightIndexMonitor *_spotlightIndexMonitor;	// 240 = 0xf0
    AppMetricsMonitor *_appMetricsMonitor;	// 248 = 0xf8
}

+ (void)_performODRSoftwareUpdateHousekeeping:(_Bool)arg1;	// IMP=0x002000000020bbf5
+ (_Bool)isPasscodeDisabled;	// IMP=0x0010000000209e0b
+ (_Bool)isDeviceUnlocked;	// IMP=0x0010000000209e03
+ (id)daemon;	// IMP=0x0010000000209c9d
- (void).cxx_destruct;	// IMP=0x002000000020c430
@property(readonly, nonatomic) AppMetricsMonitor *appMetricsMonitor; // @synthesize appMetricsMonitor=_appMetricsMonitor;
- (void)_setAMSProperties;	// IMP=0x001000000020c3a9
- (void)_startODRXPCListeners;	// IMP=0x001000000020c2b5
- (void)_startODRXPCEssentialListeners;	// IMP=0x001000000020c1ea
- (void)_setupODRXPCMaintenanceTask;	// IMP=0x001000000020bf25
- (void)_setupODRDataMigrationTask;	// IMP=0x001000000020bec1
- (void)_setupCacheDeleteCoordinator;	// IMP=0x001000000020be80
- (void)_handleMigrationDidFinishNotification:(id)arg1;	// IMP=0x001000000020bbd5
- (void)_updateDAAPDatabasesIfNeeded;	// IMP=0x001000000020bb0f
- (void)_startXPCModernListeners;	// IMP=0x001000000020b063
- (void)_startXPCListeners;	// IMP=0x001000000020af03
- (void)_startMidChangedNotifier;	// IMP=0x001000000020ad76
- (void)_startAppInstallQueue;	// IMP=0x001000000020acf1
- (void)_setupSignalHandler;	// IMP=0x001000000020ac17
- (void)_startODR;	// IMP=0x001000000020a9ef
- (void)_startLaunchServicesObserver;	// IMP=0x001000000020a9c6
- (void)_setupLogging;	// IMP=0x001000000020a879
- (id)_createListenerForMachServiceName:(id)arg1 withDelegate:(id)arg2;	// IMP=0x001000000020a77e
- (void)takeKeepAliveTransaction:(id)arg1;	// IMP=0x001000000020a64a
- (void)releaseKeepAliveTransaction:(id)arg1;	// IMP=0x001000000020a533
- (void)performKeepAliveTransaction:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000020a4b3
- (void)start;	// IMP=0x0010000000209ebf
- (_Bool)isMultiUser;	// IMP=0x0010000000209eb7
- (void)endShowingDialog;	// IMP=0x0010000000209e65
- (void)beginShowingDialog;	// IMP=0x0010000000209e13
- (void)dealloc;	// IMP=0x0010000000209dc4
- (id)init;	// IMP=0x0010000000209d2a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
