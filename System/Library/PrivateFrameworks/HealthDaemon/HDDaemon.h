//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDApplicationStateMonitorProvider-Protocol.h>
#import <HealthDaemon/HDDiagnosticObject-Protocol.h>
#import <HealthDaemon/HDHealthDaemon-Protocol.h>
#import <HealthDaemon/HDTaskServerClassProvider-Protocol.h>
#import <HealthDaemon/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class HDAnalyticsSubmissionCoordinator, HDAutoBugCaptureReporter, HDBackgroundObservationServerExtensionManager, HDBackgroundTaskScheduler, HDCacheDeleteCoordinator, HDCloudSyncCoordinator, HDContentProtectionManager, HDDaemonConnectionManager, HDDatabasePruningCoordinator, HDDevicePowerMonitor, HDMaintenanceWorkCoordinator, HDOntologyBackingStore, HDOntologyConfigurationProvider, HDPeriodicActivity, HDPluginManager, HDPostInstallUpdateManager, HDPrimaryProfile, HDProcessStateManager, HDProfileManager, HDQueryManager, HDRemoteFeatureAvailabilityAssetManager, HDTaskServerRegistry, HDWorkoutPluginDaemonExtension, HDXPCAlarmScheduler, HDXPCEventManager, HKWristDetectionSettingManager, NSDictionary, NSHashTable, NSMutableArray, NSString, NSURL, _HKBehavior;
@protocol HDDaemonTester, HDNanoAlertSuppressionService, HDOntologyAssetProvider, OS_dispatch_queue;

@interface HDDaemon : NSObject <HDTaskServerClassProvider, HDApplicationStateMonitorProvider, HDDiagnosticObject, LSApplicationWorkspaceObserverProtocol, HDHealthDaemon>
{
    _HKBehavior *_behavior;	// 8 = 0x8
    NSString *_healthDirectoryPath;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    int _languageChangeNotifyToken;	// 32 = 0x20
    HDBackgroundObservationServerExtensionManager *_extensionManager;	// 40 = 0x28
    HDBackgroundTaskScheduler *_backgroundTaskScheduler;	// 48 = 0x30
    HDContentProtectionManager *_contentProtectionManager;	// 56 = 0x38
    HDCloudSyncCoordinator *_cloudSyncCoordinator;	// 64 = 0x40
    HDOntologyConfigurationProvider *_ontologyConfigurationProvider;	// 72 = 0x48
    HDPeriodicActivity *_periodicActivity;	// 80 = 0x50
    HDPluginManager *_pluginManager;	// 88 = 0x58
    HDProcessStateManager *_processStateManager;	// 96 = 0x60
    HDProfileManager *_profileManager;	// 104 = 0x68
    HDPostInstallUpdateManager *_postInstallUpdateManager;	// 112 = 0x70
    HDPrimaryProfile *_primaryProfile;	// 120 = 0x78
    struct MGNotificationTokenStruct *_deviceNameChangesToken;	// 128 = 0x80
    struct os_unfair_lock_s _daemonReadyLock;	// 136 = 0x88
    NSMutableArray *_daemonReadyBlocks;	// 144 = 0x90
    long long _numberOfDaemonReadyObserversBeforeReady;	// 152 = 0x98
    long long _numberOfDaemonReadyObserversAfterReady;	// 160 = 0xa0
    _Bool _daemonReady;	// 168 = 0xa8
    struct atomic_flag _didStart;	// 169 = 0xa9
    NSMutableArray *_daemonActivatedBlocks;	// 176 = 0xb0
    struct os_unfair_lock_s _protectedResourceStoreProvidersLock;	// 184 = 0xb8
    NSHashTable *_protectedResourceStoreProviders;	// 192 = 0xc0
    NSDictionary *_daemonExtensionsByIdentifier;	// 200 = 0xc8
    unsigned long long _healthdStateHandler;	// 208 = 0xd0
    _Bool _shouldEnqueueMaintenanceWork;	// 216 = 0xd8
    NSString *_medicalIDDirectoryPath;	// 224 = 0xe0
    HDAnalyticsSubmissionCoordinator *_analyticsSubmissionCoordinator;	// 232 = 0xe8
    HDAutoBugCaptureReporter *_autoBugCaptureReporter;	// 240 = 0xf0
    id <HDNanoAlertSuppressionService> _alertSuppressionService;	// 248 = 0xf8
    HDCacheDeleteCoordinator *_cacheDeleteCoordinator;	// 256 = 0x100
    HDDatabasePruningCoordinator *_databasePruningCoordinator;	// 264 = 0x108
    HDMaintenanceWorkCoordinator *_maintenanceWorkCoordinator;	// 272 = 0x110
    HDQueryManager *_queryManager;	// 280 = 0x118
    HDRemoteFeatureAvailabilityAssetManager *_remoteFeatureAvailabilityAssetManager;	// 288 = 0x120
    HKWristDetectionSettingManager *_wristDetectionSettingManager;	// 296 = 0x128
    id <HDDaemonTester> _daemonTester;	// 304 = 0x130
    HDDaemonConnectionManager *_connectionManager;	// 312 = 0x138
    HDTaskServerRegistry *_taskServerRegistry;	// 320 = 0x140
    HDDevicePowerMonitor *_devicePowerMonitor;	// 328 = 0x148
    HDXPCAlarmScheduler *_alarmScheduler;	// 336 = 0x150
    HDXPCEventManager *_xpcEventManager;	// 344 = 0x158
    id <HDOntologyAssetProvider> _ontologyAssetProvider;	// 352 = 0x160
    HDOntologyBackingStore *_ontologyBackingStore;	// 360 = 0x168
}

- (void).cxx_destruct;	// IMP=0x00000000001e69f0
@property(readonly, nonatomic) HDOntologyBackingStore *ontologyBackingStore; // @synthesize ontologyBackingStore=_ontologyBackingStore;
@property(readonly, nonatomic) id <HDOntologyAssetProvider> ontologyAssetProvider; // @synthesize ontologyAssetProvider=_ontologyAssetProvider;
@property(readonly, nonatomic) HDXPCEventManager *xpcEventManager; // @synthesize xpcEventManager=_xpcEventManager;
@property(readonly, nonatomic) HDXPCAlarmScheduler *alarmScheduler; // @synthesize alarmScheduler=_alarmScheduler;
@property(readonly, nonatomic) HDDevicePowerMonitor *devicePowerMonitor; // @synthesize devicePowerMonitor=_devicePowerMonitor;
@property(readonly, nonatomic) HDTaskServerRegistry *taskServerRegistry; // @synthesize taskServerRegistry=_taskServerRegistry;
@property(readonly, nonatomic) HDDaemonConnectionManager *connectionManager; // @synthesize connectionManager=_connectionManager;
@property(nonatomic) _Bool shouldEnqueueMaintenanceWork; // @synthesize shouldEnqueueMaintenanceWork=_shouldEnqueueMaintenanceWork;
@property(nonatomic) __weak id <HDDaemonTester> daemonTester; // @synthesize daemonTester=_daemonTester;
@property(readonly, nonatomic) HKWristDetectionSettingManager *wristDetectionSettingManager; // @synthesize wristDetectionSettingManager=_wristDetectionSettingManager;
@property(readonly, nonatomic) HDRemoteFeatureAvailabilityAssetManager *remoteFeatureAvailabilityAssetManager; // @synthesize remoteFeatureAvailabilityAssetManager=_remoteFeatureAvailabilityAssetManager;
@property(readonly, nonatomic) HDQueryManager *queryManager; // @synthesize queryManager=_queryManager;
@property(readonly, nonatomic) HDPrimaryProfile *primaryProfile; // @synthesize primaryProfile=_primaryProfile;
@property(readonly, nonatomic) HDOntologyConfigurationProvider *ontologyConfigurationProvider; // @synthesize ontologyConfigurationProvider=_ontologyConfigurationProvider;
@property(readonly, nonatomic) HDMaintenanceWorkCoordinator *maintenanceWorkCoordinator; // @synthesize maintenanceWorkCoordinator=_maintenanceWorkCoordinator;
@property(readonly, nonatomic) HDDatabasePruningCoordinator *databasePruningCoordinator; // @synthesize databasePruningCoordinator=_databasePruningCoordinator;
@property(readonly, nonatomic) HDCloudSyncCoordinator *cloudSyncCoordinator; // @synthesize cloudSyncCoordinator=_cloudSyncCoordinator;
@property(readonly, nonatomic) HDCacheDeleteCoordinator *cacheDeleteCoordinator; // @synthesize cacheDeleteCoordinator=_cacheDeleteCoordinator;
@property(retain, nonatomic) id <HDNanoAlertSuppressionService> alertSuppressionService; // @synthesize alertSuppressionService=_alertSuppressionService;
@property(readonly, nonatomic) HDAutoBugCaptureReporter *autoBugCaptureReporter; // @synthesize autoBugCaptureReporter=_autoBugCaptureReporter;
@property(readonly, nonatomic) HDAnalyticsSubmissionCoordinator *analyticsSubmissionCoordinator; // @synthesize analyticsSubmissionCoordinator=_analyticsSubmissionCoordinator;
@property(readonly, copy) NSString *medicalIDDirectoryPath; // @synthesize medicalIDDirectoryPath=_medicalIDDirectoryPath;
- (void)unitTest_taskServerDidInit:(id)arg1;	// IMP=0x00000000001e68f4
- (void)unitTest_queryServerDidInit:(id)arg1;	// IMP=0x0000000000003147
- (void)unitTest_didReadyProfile:(id)arg1;	// IMP=0x00000000001e68ee
- (void)unitTest_didCreateProfile:(id)arg1;	// IMP=0x00000000001e68e8
- (void)applicationStateDidChange:(id)arg1;	// IMP=0x00000000001e65b0
- (id)_newReferenceOntologyAsset;	// IMP=0x00000000001e65a8
- (id)_newTaskServerRegistry;	// IMP=0x00000000001e657a
- (id)_newMaintenanceWorkCoordinator;	// IMP=0x00000000001e6569
- (id)_newProfileManager;	// IMP=0x00000000001e653b
- (id)_newPluginManager;	// IMP=0x00000000001e650d
- (id)_newBackgroundTaskScheduler;	// IMP=0x00000000001e64fc
- (id)_newProcessStateManager;	// IMP=0x00000000001e64ce
- (id)_newPrimaryProfile;	// IMP=0x00000000001e641b
- (id)_newOntologyAssetProvider;	// IMP=0x00000000001e63ed
- (id)_newAutoBugCaptureReporter;	// IMP=0x00000000001e63bf
- (id)_newAnalyticsSubmissionCoordinator;	// IMP=0x00000000001e6391
- (id)_newCloudSyncCoordinator;	// IMP=0x00000000001e6363
- (id)_newDatabasePruningCoordinator;	// IMP=0x00000000001e6335
- (id)_newContentProtectionManager;	// IMP=0x00000000001e6324
- (id)_newConnectionManager;	// IMP=0x00000000001e62ec
- (id)_newCacheDeleteCoordinator;	// IMP=0x00000000001e62db
- (id)diagnosticDescription;	// IMP=0x00000000001e6274
- (id)createApplicationStateMonitorWithBundleIDs:(id)arg1 states:(unsigned int)arg2 elevatedPriority:(_Bool)arg3;	// IMP=0x00000000001e6213
- (id)createApplicationStateMonitor;	// IMP=0x00000000001e61fa
@property(readonly, nonatomic) HDWorkoutPluginDaemonExtension *workoutPluginExtension;
@property(readonly, nonatomic) HDProfileManager *profileManager;
@property(readonly, nonatomic) HDPostInstallUpdateManager *postInstallUpdateManager;
@property(readonly) HDPluginManager *pluginManager;
@property(readonly, nonatomic) HDProcessStateManager *processStateManager;
@property(readonly, nonatomic) HDBackgroundObservationServerExtensionManager *extensionManager;
@property(readonly) HDBackgroundTaskScheduler *backgroundTaskScheduler;
@property(readonly, nonatomic) HDContentProtectionManager *contentProtectionManager;
@property(readonly, copy) NSURL *healthDirectoryURL;
@property(readonly, copy) NSString *healthDirectoryPath;
@property(readonly) _HKBehavior *behavior;
- (void)_resetPrivacySettings;	// IMP=0x00000000001e5e33
- (id)healthDirectorySizeInBytes;	// IMP=0x00000000001e59dc
- (void)registerForLaunchNotification:(const char *)arg1;	// IMP=0x000000000006d8ef
- (void)unregisterForLaunchNotification:(const char *)arg1;	// IMP=0x00000000001e59bf
- (void)performBlockWithPowerAssertionIdentifier:(id)arg1 transactionName:(id)arg2 powerAssertionInterval:(double)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x000000000001e66c
- (id)protectedResourceStoreProviders;	// IMP=0x00000000001e58ec
- (void)unregisterProtectedResourceStoreProvider:(id)arg1;	// IMP=0x00000000001e5892
- (void)registerProtectedResourceStoreProvider:(id)arg1;	// IMP=0x00000000001e57fc
- (void)registerDaemonActivatedObserver:(id)arg1 queue:(id)arg2;	// IMP=0x00000000001e552d
- (void)_postDaemonLaunchDarwinNotification;	// IMP=0x00000000001e5519
- (void)registerDaemonReadyObserver:(id)arg1 queue:(id)arg2;	// IMP=0x00000000001e523c
- (void)registerForDaemonReady:(id)arg1;	// IMP=0x000000000006b2f1
- (void)exitClean:(_Bool)arg1 reason:(id)arg2;	// IMP=0x00000000001e45a3
- (void)_localeOrLanguageChanged:(id)arg1;	// IMP=0x00000000001e4585
- (void)terminateClean:(_Bool)arg1 reason:(id)arg2;	// IMP=0x00000000001e4474
- (void)obliterateAndTerminateProfiles:(id)arg1 options:(unsigned long long)arg2 reason:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001e3590
- (void)obliterateAndTerminateWithOptions:(unsigned long long)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001e34da
- (void)invalidateAllServersForProfile:(id)arg1;	// IMP=0x00000000001e34c1
- (void)invalidateAndWaitWithReason:(id)arg1;	// IMP=0x00000000001e33a6
- (id)daemonExtensionsConformingToProtocol:(id)arg1;	// IMP=0x00000000001e32bf
- (id)daemonExtensionWithIdentifier:(id)arg1;	// IMP=0x00000000001e32a6
- (void)dealloc;	// IMP=0x00000000001e31c0
- (void)start;	// IMP=0x00000000001e1ce5
- (id)initWithHealthDirectoryPath:(id)arg1 medicalIDDirectoryPath:(id)arg2;	// IMP=0x00000000001e1b56
- (id)initWithContainerDirectoryPath:(id)arg1;	// IMP=0x00000000001e1ab2
- (id)init;	// IMP=0x00000000001e1a38
- (id)taskServerClasses;	// IMP=0x0000000000083b76
- (id)healthDomainAccessorWithPairedDevice:(id)arg1;	// IMP=0x000000000010a101
- (id)IDSServiceWithIdentifier:(id)arg1;	// IMP=0x0000000000070217
- (id)pairedSyncCoordinatorWithServiceName:(id)arg1;	// IMP=0x000000000010a0e8
- (id)nanoPairedDeviceRegistry;	// IMP=0x000000000006bdd1
- (id)healthLiteUserDefaultsDomain;	// IMP=0x00000000001303da

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
