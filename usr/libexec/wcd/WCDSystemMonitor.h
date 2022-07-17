//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor, NSHashTable, NSMutableDictionary, NSNumber, NSOperationQueue, NSSet, NSString, WCDApplicationWorkspace;
@protocol OS_voucher;

@interface WCDSystemMonitor : NSObject
{
    NSObject<OS_voucher> *_appChangedVoucher;	// 8 = 0x8
    _Bool _initialSetUpComplete;	// 16 = 0x10
    _Bool _activeDeviceConnected;	// 17 = 0x11
    _Bool _isPaired;	// 18 = 0x12
    _Bool _remoteFirstUnlocked;	// 19 = 0x13
    _Bool _initialSetUpFailed;	// 20 = 0x14
    _Bool _notifyingOfInstalledAppsChange;	// 21 = 0x15
    NSString *_pairingID;	// 24 = 0x18
    NSSet *_pairedDevicesPairingIDs;	// 32 = 0x20
    WCDApplicationWorkspace *_applicationWorkspace;	// 40 = 0x28
    NSSet *_iOSApplicationsContainingActiveComplications;	// 48 = 0x30
    NSOperationQueue *_operationQueue;	// 56 = 0x38
    NSOperationQueue *_notifyOperationQueue;	// 64 = 0x40
    NSHashTable *_observers;	// 72 = 0x48
    NSNumber *_altAccountCache;	// 80 = 0x50
    BKSApplicationStateMonitor *_monitor;	// 88 = 0x58
    NSMutableDictionary *_monitoredBundleIDs;	// 96 = 0x60
    NSSet *_standaloneWatchApps;	// 104 = 0x68
    NSSet *_runningIndependentlyWatchApps;	// 112 = 0x70
    NSString *_pairedDeviceInformation;	// 120 = 0x78
    NSString *_deviceInformation;	// 128 = 0x80
}

+ (id)sharedSystemMonitor;	// IMP=0x0020000000021efc
- (void).cxx_destruct;	// IMP=0x0020000000027046
@property(nonatomic) _Bool notifyingOfInstalledAppsChange; // @synthesize notifyingOfInstalledAppsChange=_notifyingOfInstalledAppsChange;
@property(nonatomic) _Bool initialSetUpFailed; // @synthesize initialSetUpFailed=_initialSetUpFailed;
@property(retain, nonatomic) NSString *deviceInformation; // @synthesize deviceInformation=_deviceInformation;
@property(copy, nonatomic) NSString *pairedDeviceInformation; // @synthesize pairedDeviceInformation=_pairedDeviceInformation;
@property(copy, nonatomic) NSSet *runningIndependentlyWatchApps; // @synthesize runningIndependentlyWatchApps=_runningIndependentlyWatchApps;
@property(copy, nonatomic) NSSet *standaloneWatchApps; // @synthesize standaloneWatchApps=_standaloneWatchApps;
@property(retain) NSMutableDictionary *monitoredBundleIDs; // @synthesize monitoredBundleIDs=_monitoredBundleIDs;
@property(retain) BKSApplicationStateMonitor *monitor; // @synthesize monitor=_monitor;
@property(retain) NSNumber *altAccountCache; // @synthesize altAccountCache=_altAccountCache;
@property(retain) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly) NSOperationQueue *notifyOperationQueue; // @synthesize notifyOperationQueue=_notifyOperationQueue;
@property(readonly) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, copy, nonatomic) NSSet *iOSApplicationsContainingActiveComplications; // @synthesize iOSApplicationsContainingActiveComplications=_iOSApplicationsContainingActiveComplications;
- (id);	// IMP=0x0010000000026efe
@property(nonatomic) _Bool remoteFirstUnlocked; // @synthesize remoteFirstUnlocked=_remoteFirstUnlocked;
@property(readonly, nonatomic) NSSet *pairedDevicesPairingIDs; // @synthesize pairedDevicesPairingIDs=_pairedDevicesPairingIDs;
@property(readonly, nonatomic) NSString *pairingID; // @synthesize pairingID=_pairingID;
@property(readonly, nonatomic) _Bool isPaired; // @synthesize isPaired=_isPaired;
@property(nonatomic) _Bool activeDeviceConnected; // @synthesize activeDeviceConnected=_activeDeviceConnected;
@property(readonly, nonatomic) _Bool initialSetUpComplete; // @synthesize initialSetUpComplete=_initialSetUpComplete;
- (id)loadInstalledWatchApps;	// IMP=0x0010000000026e2a
- (void)saveInstalledWatchApps:(id)arg1;	// IMP=0x0010000000026d6f
- (id)pairingIDForBTUUID:(id)arg1;	// IMP=0x0010000000026c84
- (void)releaseVoucher;	// IMP=0x0010000000026bc9
- (void)copyVoucher;	// IMP=0x0010000000026b13
- (void)notifyObservers:(SEL)arg1;	// IMP=0x0010000000026885
- (id)notifyObserversQueued:(SEL)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000026580
- (id)notifyObserversQueued:(SEL)arg1;	// IMP=0x001000000002656c
- (void)removeObserver:(id)arg1;	// IMP=0x00100000000264f8
- (void)addObserver:(id)arg1;	// IMP=0x0010000000026484
- (void)extensionSupportsBackgroundLaunch:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002647e
- (id)dataContainerURLForApplicationInfo:(id)arg1;	// IMP=0x00100000000263d9
- (void)handleWatchAppUIStatesChanged:(id)arg1 error:(id)arg2;	// IMP=0x0010000000026136
- (void)removeWatchAppBundleIDUIStateMonitoring:(id)arg1;	// IMP=0x0010000000026130
- (void)addWatchAppBundleIDUIStateMonitoring:(id)arg1;	// IMP=0x001000000002612a
- (void)startMonitoringWatchAppUIStates;	// IMP=0x0010000000026124
- (id)applicationStateStringForState:(unsigned int)arg1;	// IMP=0x001000000002609b
- (unsigned int)applicationStateForBundleID:(id)arg1;	// IMP=0x0010000000026085
- (void)stopMonitoringBundleID:(id)arg1;	// IMP=0x0010000000025d0c
- (void)startMonitoringBundleID:(id)arg1;	// IMP=0x00100000000259b1
- (void)handleApplicationStateChange:(id)arg1;	// IMP=0x001000000002561a
@property(readonly, nonatomic) _Bool watchConnectivityServiceAvailable;
- (void)setIsPaired:(_Bool)arg1 pairingID:(id)arg2 pairedDeviceInformation:(id)arg3 pairedDevicesPairingIDs:(id)arg4;	// IMP=0x00100000000253a1
- (void)setIOSApplicationsContainingActiveComplications:(id)arg1;	// IMP=0x00100000000251ca
- (void)applicationWorkspace:(id)arg1 didUpdateiOSApplicationsContainingComplications:(id)arg2;	// IMP=0x00100000000250d2
- (void)applicationWorkspace:(id)arg1 didUpdateiOSApplicationsWithWatchAppInstalled:(id)arg2;	// IMP=0x0010000000024f31
- (void)applicationWorkspace:(id)arg1 didUpdateiOSApplicationsContainingWatchApp:(id)arg2;	// IMP=0x0010000000024d50
- (void)applicationWorkspace:(id)arg1 didUpdateRunningIndependentlyWatchApps:(id)arg2;	// IMP=0x0010000000024c58
- (void)applicationWorkspace:(id)arg1 didUpdateStandaloneWatchApps:(id)arg2;	// IMP=0x0010000000024b86
- (void)onqueue_retrievedIOSApplicationsContainingActiveComplications:(id)arg1;	// IMP=0x0010000000024b74
- (void)onqueue_retrievedInstalledAppsList:(id)arg1;	// IMP=0x0010000000024b02
- (void)onqueue_retrievedPairingStateIsPaired:(_Bool)arg1 pairingID:(id)arg2 pairedDeviceInformation:(id)arg3 pairedDevicesPairingIDs:(id)arg4;	// IMP=0x0010000000024af0
- (void)onqueue_handleSwitch;	// IMP=0x0010000000024a27
- (void)onqueue_switchIfReady;	// IMP=0x0010000000024630
- (void)handleSwitchStartedByIDS;	// IMP=0x001000000002453b
- (void)handleDeviceBecameActiveNotification:(id)arg1;	// IMP=0x0010000000024446
- (void)handleDeviceBecameInactiveNotification:(id)arg1;	// IMP=0x00100000000241c4
- (void)handleRemainingComplicationUserInfoTransfersReset;	// IMP=0x001000000002410e
- (void)handleActiveComplicationsChanged;	// IMP=0x0010000000024048
- (void)handleInstalledApplicationsChanged;	// IMP=0x0010000000023eae
- (void)handleCompanionApplicationsChanged:(id)arg1;	// IMP=0x0010000000023e36
- (void)handlePairingChangedNotification:(id)arg1;	// IMP=0x0010000000023a09
- (void)subscribeToAllNotifications;	// IMP=0x00100000000236b9
@property(readonly, nonatomic) _Bool isAltAccount;
@property(readonly) NSString *state;
- (void)setUpApplicationStateMonitor;	// IMP=0x0010000000022933
- (void)resetInitialState;	// IMP=0x00100000000227df
- (void)setUpInitialState;	// IMP=0x001000000002232b
- (_Bool)retrySetupInitialStateIfNeeded;	// IMP=0x0010000000022272
- (void)retryInstalledAppsUpdate;	// IMP=0x00100000000221bc
- (id)newSerialOperationQueue;	// IMP=0x0010000000022173
- (id)init;	// IMP=0x0010000000021f81

// Remaining properties
@property(readonly, nonatomic) WCDApplicationWorkspace *applicationWorkspace; // @synthesize applicationWorkspace=_applicationWorkspace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
