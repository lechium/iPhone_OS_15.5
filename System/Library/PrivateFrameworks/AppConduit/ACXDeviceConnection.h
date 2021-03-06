//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppConduit/ACXDeviceConnectionDelegateProtocol-Protocol.h>

@class NSHashTable, NSString, NSXPCConnection;
@protocol ACXDeviceConnectionDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface ACXDeviceConnection : NSObject <ACXDeviceConnectionDelegateProtocol>
{
    _Bool _observersEnabled;	// 8 = 0x8
    _Bool _monitoringForDeviceChanges;	// 9 = 0x9
    id <ACXDeviceConnectionDelegate> _delegate;	// 16 = 0x10
    NSXPCConnection *_xpcConnection;	// 24 = 0x18
    NSHashTable *_observers;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_internalQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_observerQueue;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_observerReEstablishTimer;	// 56 = 0x38
}

+ (void)_removeFilesAtURL:(id)arg1;	// IMP=0x0000000000010d50
+ (void)performUninstallationCleanup;	// IMP=0x0000000000010c85
+ (id)sharedDeviceConnection;	// IMP=0x0000000000010bec
+ (void)disableTestMode;	// IMP=0x000000000000daf8
+ (void)enableTestMode;	// IMP=0x000000000000daeb
- (void).cxx_destruct;	// IMP=0x000000000001c0ce
@property(nonatomic) _Bool monitoringForDeviceChanges; // @synthesize monitoringForDeviceChanges=_monitoringForDeviceChanges;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *observerReEstablishTimer; // @synthesize observerReEstablishTimer=_observerReEstablishTimer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *observerQueue; // @synthesize observerQueue=_observerQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) _Bool observersEnabled; // @synthesize observersEnabled=_observersEnabled;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(nonatomic) __weak id <ACXDeviceConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)killDaemonForTestingWithError:(id *)arg1;	// IMP=0x000000000001bd8f
- (_Bool)acknowledgeTestFlightInstallBegunForApp:(id)arg1 onDeviceWithPairingID:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001bb93
- (_Bool)installRequestFailedForApp:(id)arg1 onDeviceWithPairingID:(id)arg2 failureReason:(id)arg3 wasUserInitiated:(_Bool)arg4 error:(id *)arg5;	// IMP=0x000000000001b969
- (_Bool)getSystemAppInstallability:(_Bool *)arg1 onDeviceWithPairingID:(id)arg2 withBundleID:(id)arg3 error:(id *)arg4;	// IMP=0x000000000001b6be
- (_Bool)getSystemAppInstallability:(_Bool *)arg1 onPairedDevice:(id)arg2 withBundleID:(id)arg3 error:(id *)arg4;	// IMP=0x000000000001b624
- (void)systemAppIsInstallableOnDeviceWithPairingID:(id)arg1 withBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001b4de
- (void)systemAppIsInstallableOnPairedDevice:(id)arg1 withBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001b43f
- (id)installableSystemAppWithBundleID:(id)arg1 onDeviceWithPairingID:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001b17d
- (id)installableSystemAppWithBundleID:(id)arg1 onPairedDevice:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001b0e2
- (void)fetchInstallableSystemAppWithBundleID:(id)arg1 onDeviceWithPairingID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001af9c
- (void)fetchInstallableSystemAppWithBundleID:(id)arg1 onPairedDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001aefd
- (void)enumerateInstallableSystemAppsOnDeviceWithPairingID:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000001a4ce
- (void)enumerateInstallableSystemAppsOnPairedDevice:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000001a44a
- (id)copyLocalizedValuesFromAllDevicesForInfoPlistKeys:(id)arg1 forAppWithBundleID:(id)arg2 fetchingFirstMatchingLocalizationInList:(id)arg3 error:(id *)arg4;	// IMP=0x000000000001a165
- (_Bool)fetchApplicationDatabaseSyncInformationForDeviceWithPairingID:(id)arg1 returningDatabaseUUID:(id *)arg2 lastSequenceNumber:(unsigned long long *)arg3 error:(id *)arg4;	// IMP=0x0000000000019d9c
- (_Bool)fetchApplicationDatabaseSyncInformationForPairedDevice:(id)arg1 returningDatabaseUUID:(id *)arg2 lastSequenceNumber:(unsigned long long *)arg3 error:(id *)arg4;	// IMP=0x0000000000019d1d
- (_Bool)getApplicationIsInstalled:(_Bool *)arg1 onAnyPairedDeviceWithCompanionBundleID:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000019a8b
- (void)applicationIsInstalledOnAnyPairedDeviceWithCompanionBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001995f
- (_Bool)getApplicationIsInstalled:(_Bool *)arg1 onAnyPairedDeviceWithBundleID:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000196cd
- (void)applicationIsInstalledOnAnyPairedDeviceWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000195a1
- (_Bool)getApplicationIsInstalled:(_Bool *)arg1 onDeviceWithPairingID:(id)arg2 withCompanionBundleID:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000192f6
- (void)applicationIsInstalledOnDeviceWithPairingID:(id)arg1 withCompanionBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000191b0
- (_Bool)getApplicationIsInstalled:(_Bool *)arg1 onPairedDevice:(id)arg2 withCompanionBundleID:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000019116
- (void)applicationIsInstalledOnPairedDevice:(id)arg1 withCompanionBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000019077
- (void)applicationIsInstalledOnDeviceWithPairingID:(id)arg1 withBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000018f31
- (_Bool)getApplicationIsInstalled:(_Bool *)arg1 withBundleID:(id)arg2 onDeviceWithPairingID:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000018c86
- (_Bool)getApplicationIsInstalled:(_Bool *)arg1 withBundleID:(id)arg2 onPairedDevice:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000018bec
- (void)applicationIsInstalledOnPairedDevice:(id)arg1 withBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000018b4d
- (id)locallyAvailableApplicationWithContainingApplicationBundleID:(id)arg1 forDeviceWithPairingID:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001888b
- (void)fetchLocallyAvailableApplicationWithContainingApplicationBundleID:(id)arg1 forDeviceWithPairingID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000018745
- (void)fetchLocallyAvailableApplicationWithContainingApplicationBundleID:(id)arg1 forPairedDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000186a6
- (id)locallyAvailableApplicationWithContainingApplicationBundleID:(id)arg1 forPairedDevice:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001860b
- (id)locallyAvailableApplicationWithBundleID:(id)arg1 forPairedDevice:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001856d
- (id)locallyAvailableApplicationWithBundleID:(id)arg1 forDeviceWithPairingID:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000018555
- (id)_locallyAvailableApplicationWithBundleID:(id)arg1 forDeviceWithPairingID:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0000000000018280
- (void)fetchLocallyAvailableApplicationWithBundleID:(id)arg1 forPairedDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000181de
- (void)fetchLocallyAvailableApplicationWithBundleID:(id)arg1 forDeviceWithPairingID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000181c6
- (void)_fetchLocallyAvailableApplicationWithBundleID:(id)arg1 forDeviceWithPairingID:(id)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000018072
- (id)applicationOnPairedDevice:(id)arg1 withBundleID:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000017fd7
- (void)fetchApplicationOnPairedDevice:(id)arg1 withBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000017f38
- (id)applicationOnDeviceWithPairingID:(id)arg1 withBundleID:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000017c76
- (void)fetchApplicationOnDeviceWithPairingID:(id)arg1 withBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000017b30
- (void)enumerateLocallyAvailableApplicationsForDeviceWithPairingID:(id)arg1 options:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000016faa
- (void)enumerateLocallyAvailableApplicationsForPairedDevice:(id)arg1 options:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000016f20
- (void)enumerateInstalledApplicationsOnDeviceWithPairingID:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000016301
- (void)enumerateInstalledApplicationsOnPairedDevice:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000001627d
- (_Bool)cancelUpdatePendingForCompanionApp:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000016070
- (void)cancelUpdatePendingForCompanionApp:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000015f46
- (_Bool)setUpdatePendingForCompanionApp:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000015d39
- (void)setUpdatePendingForCompanionApp:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000015c0f
- (_Bool)updatePreferencesForApplicationWithIdentifier:(id)arg1 preferences:(id)arg2 writingToPreferencesLocation:(unsigned long long)arg3 forPairedDevice:(id)arg4 options:(unsigned long long)arg5 error:(id *)arg6;	// IMP=0x0000000000015993
- (void)updatePreferencesForApplicationWithIdentifier:(id)arg1 preferences:(id)arg2 writingToPreferencesLocation:(unsigned long long)arg3 forPairedDevice:(id)arg4 options:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000000157f4
- (void)updatePreferencesForApplicationWithIdentifier:(id)arg1 preferences:(id)arg2 forPairedDevice:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000157d1
- (void)updatePreferencesForApplicationWithIdentifier:(id)arg1 preferences:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000157b9
- (id)provisioningProfilesForApplicationWithBundleID:(id)arg1 forPairedDevice:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000154ce
- (void)fetchProvisioningProfilesForApplicationWithBundleID:(id)arg1 forPairedDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000015357
- (void)fetchProvisioningProfilesForApplicationWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000015340
- (id)provisioningProfilesForPairedDevice:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000015070
- (void)fetchProvisioningProfilesForPairedDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014f18
- (void)fetchProvisioningProfilesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000014f01
- (_Bool)removeProvisioningProfileWithID:(id)arg1 fromPairedDevice:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000014bed
- (void)removeProvisioningProfileWithID:(id)arg1 fromPairedDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000149ff
- (void)removeProvisioningProfileWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000149e8
- (_Bool)installProvisioningProfileWithURL:(id)arg1 onPairedDevice:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000014673
- (void)installProvisioningProfileWithURL:(id)arg1 onPairedDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001442e
- (void)installProvisioningProfileWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014417
- (_Bool)getAlwaysInstall:(_Bool *)arg1 forPairedDevice:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000141b2
- (void)getAlwaysInstallForPairedDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001405d
- (void)setAllExistingAppsShouldBeInstalled:(_Bool)arg1 forNewDevice:(id)arg2;	// IMP=0x0000000000013eb0
- (void)getAlwaysInstallWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013e99
- (void)setAlwaysInstall:(id)arg1 forDevice:(id)arg2;	// IMP=0x0000000000013cd5
- (void)setAlwaysInstall:(id)arg1;	// IMP=0x0000000000013c0c
- (_Bool)removeApplication:(id)arg1 fromPairedDevice:(id)arg2 removalStatus:(long long *)arg3 error:(id *)arg4;	// IMP=0x0000000000013938
- (void)removeApplication:(id)arg1 fromPairedDevice:(id)arg2 completionWithError:(CDUnknownBlockType)arg3;	// IMP=0x00000000000137c1
- (void)removeApplication:(id)arg1 fromPairedDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000013717
- (void)removeApplication:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013700
- (_Bool)installApplicationAtURL:(id)arg1 onDeviceWithPairingID:(id)arg2 installOptions:(id)arg3 size:(long long)arg4 installationStatus:(long long *)arg5 error:(id *)arg6;	// IMP=0x0000000000013430
- (_Bool)installApplicationAtURL:(id)arg1 onPairedDevice:(id)arg2 installOptions:(id)arg3 size:(long long)arg4 installationStatus:(long long *)arg5 error:(id *)arg6;	// IMP=0x0000000000013379
- (void)installApplicationAtURL:(id)arg1 onDeviceWithPairingID:(id)arg2 installOptions:(id)arg3 size:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000013207
- (void)installApplicationAtURL:(id)arg1 onPairedDevice:(id)arg2 installOptions:(id)arg3 size:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000013146
- (_Bool)installApplication:(id)arg1 withProvisioningProfiles:(id)arg2 onPairedDevice:(id)arg3 installationStatus:(long long *)arg4 error:(id *)arg5;	// IMP=0x0000000000012dec
- (void)installApplication:(id)arg1 withProvisioningProfiles:(id)arg2 onPairedDevice:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000012bf6
- (id)_validateAndExtractProfiles:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001281b
- (void)installApplication:(id)arg1 withProvisioningProfiles:(id)arg2 completionWithError:(CDUnknownBlockType)arg3;	// IMP=0x0000000000012803
- (_Bool)installApplication:(id)arg1 onPairedDevice:(id)arg2 installationStatus:(long long *)arg3 error:(id *)arg4;	// IMP=0x0000000000012526
- (void)installApplication:(id)arg1 onPairedDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000123b1
- (void)installApplication:(id)arg1 completionWithError:(CDUnknownBlockType)arg2;	// IMP=0x000000000001239a
- (void)retryPendingAppInstallationsForPairedDevice:(id)arg1;	// IMP=0x00000000000122a6
- (void)cancelPendingInstallations;	// IMP=0x000000000001220f
- (void)installAllApplications;	// IMP=0x0000000000012178
- (id)watchAppBundleIDForCompanionAppBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000011ec3
- (void)fetchWatchAppBundleIDForCompanionAppBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000011de4
- (id)watchAppBundleURLWithinCompanionAppWithWatchAppIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000011acc
- (void)fetchWatchAppBundleURLWithinCompanionAppWithWatchAppIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000119ed
- (void)fetchInfoForApplicationWithBundleID:(id)arg1 forPairedDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000118c3
- (void)fetchInfoForApplicationWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000118ac
- (void)fetchApplicationWithContainingApplicationBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000117cd
- (void)fetchInstalledCompatibleApplicationsWithDevice:(id)arg1 withErrorCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000116c2
- (void)activeComplicationsForPairedDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000115b7
- (void)activeComplicationsWithErrorCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000115a0
- (void)fetchInstalledComplicationsForPairedDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000011495
- (void)fetchInstalledComplicationsWithErrorCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001147e
- (void)fetchInstalledApplicationsForPairedDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001135c
- (void)fetchInstalledApplicationsWithErrorCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000011345
- (void)removeObserver:(id)arg1;	// IMP=0x00000000000110eb
- (void)addObserver:(id)arg1;	// IMP=0x0000000000010e91
- (void)observerRegistrationSuccessful;	// IMP=0x0000000000010904
- (void)applicationDatabaseResyncedForDeviceWithPairingID:(id)arg1;	// IMP=0x00000000000105af
- (void)applicationsUninstalled:(id)arg1 onDeviceWithPairingID:(id)arg2;	// IMP=0x00000000000101eb
- (void)applicationsUpdated:(id)arg1 onDeviceWithPairingID:(id)arg2;	// IMP=0x000000000000fe27
- (void)applicationsInstalled:(id)arg1 onDeviceWithPairingID:(id)arg2;	// IMP=0x000000000000fa63
- (void)updateInstallProgressForApplication:(id)arg1 progress:(double)arg2 phase:(unsigned long long)arg3;	// IMP=0x000000000000f6ee
- (void)updatedInstallStateForApplicationsWithInfo:(id)arg1;	// IMP=0x000000000000f1e1
- (id)_synchronousProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000ef6c
- (id)_proxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000ec62
- (void)_invalidateXPCConnection;	// IMP=0x000000000000e981
- (void)_onQueue_reEstablishObserverConnectionIfNeeded;	// IMP=0x000000000000e8bb
- (_Bool)_onQueue_enableObserversIfNeededForAValidXPCConnection;	// IMP=0x000000000000e656
- (id)init;	// IMP=0x000000000000e572
- (_Bool)_onQueue_createXPCConnectionIfNecessary:(id *)arg1;	// IMP=0x000000000000dfcc
- (void)_deviceDidPairNotification:(id)arg1;	// IMP=0x000000000000de6c
- (void)_deviceDidBecomeActiveNotification:(id)arg1;	// IMP=0x000000000000dd0c
- (void)_onQueue_endMonitoringNanoRegistryDeviceState;	// IMP=0x000000000000dc0f
- (void)_onQueue_beginMonitoringNanoRegistryDeviceState;	// IMP=0x000000000000db05

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

