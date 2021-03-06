//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/CBCentralManagerDelegate-Protocol.h>
#import <CoreHAP/HAPAccessoryServerBrowserWiProxBTLEDelegate-Protocol.h>
#import <CoreHAP/HMFLogging-Protocol.h>

@class CBCentralManager, CBConnectionsObserver, HAPAccessoryServerBrowserWiProxBTLE, HMFActivity, NSMapTable, NSMutableArray, NSMutableOrderedSet, NSObject, NSString;
@protocol HAPAccessoryServerBrowserBTLEDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface HAPAccessoryServerBrowserBTLE <CBCentralManagerDelegate, HAPAccessoryServerBrowserWiProxBTLEDelegate, HMFLogging>
{
    _Bool _performingGeneralScan;	// 16 = 0x10
    unsigned long long _qosLimits;	// 24 = 0x18
    id <HAPAccessoryServerBrowserBTLEDelegate> _delegate;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 40 = 0x28
    CBCentralManager *_centralManager;	// 48 = 0x30
    CBConnectionsObserver *_connectionsObserver;	// 56 = 0x38
    HAPAccessoryServerBrowserWiProxBTLE *_hapWiProxBLEBrowser;	// 64 = 0x40
    NSMapTable *_discoveredPeripheralsWithAccessories;	// 72 = 0x48
    NSMapTable *_recentlySeenPairedPeripherals;	// 80 = 0x50
    NSMutableArray *_powerOnCentralManagerCompletions;	// 88 = 0x58
    CDUnknownBlockType _reachabilityCompletion;	// 96 = 0x60
    NSMutableOrderedSet *_peripheralsWithConnectionRequests;	// 104 = 0x68
    NSMutableArray *_peripheralsPendingConnection;	// 112 = 0x70
    NSObject<OS_dispatch_source> *_targetedScanTimer;	// 120 = 0x78
    HMFActivity *_targetedScanActivity;	// 128 = 0x80
    NSMutableArray *_targetedScanAccessoryIdentifiers;	// 136 = 0x88
    NSMapTable *_identifersWithReachabilityScanTuples;	// 144 = 0x90
    long long _peripheralDisconnectionTimeout;	// 152 = 0x98
    NSMapTable *_peripheralDisconnectionMonitorMap;	// 160 = 0xa0
    long long _scanState;	// 168 = 0xa8
}

+ (id)HAPBluetoothRouteModeToString:(unsigned char)arg1;	// IMP=0x00000000000a77c6
+ (id)logCategory;	// IMP=0x00000000000a7796
- (void).cxx_destruct;	// IMP=0x00000000000a3f9f
@property(nonatomic) long long scanState; // @synthesize scanState=_scanState;
@property(retain) NSMapTable *peripheralDisconnectionMonitorMap; // @synthesize peripheralDisconnectionMonitorMap=_peripheralDisconnectionMonitorMap;
@property long long peripheralDisconnectionTimeout; // @synthesize peripheralDisconnectionTimeout=_peripheralDisconnectionTimeout;
@property(retain, nonatomic) NSMapTable *identifersWithReachabilityScanTuples; // @synthesize identifersWithReachabilityScanTuples=_identifersWithReachabilityScanTuples;
@property(retain, nonatomic) NSMutableArray *targetedScanAccessoryIdentifiers; // @synthesize targetedScanAccessoryIdentifiers=_targetedScanAccessoryIdentifiers;
@property(retain, nonatomic) HMFActivity *targetedScanActivity; // @synthesize targetedScanActivity=_targetedScanActivity;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *targetedScanTimer; // @synthesize targetedScanTimer=_targetedScanTimer;
@property(retain, nonatomic) NSMutableArray *peripheralsPendingConnection; // @synthesize peripheralsPendingConnection=_peripheralsPendingConnection;
@property(retain, nonatomic) NSMutableOrderedSet *peripheralsWithConnectionRequests; // @synthesize peripheralsWithConnectionRequests=_peripheralsWithConnectionRequests;
@property(copy, nonatomic) CDUnknownBlockType reachabilityCompletion; // @synthesize reachabilityCompletion=_reachabilityCompletion;
@property(retain, nonatomic) NSMutableArray *powerOnCentralManagerCompletions; // @synthesize powerOnCentralManagerCompletions=_powerOnCentralManagerCompletions;
@property(retain, nonatomic) NSMapTable *recentlySeenPairedPeripherals; // @synthesize recentlySeenPairedPeripherals=_recentlySeenPairedPeripherals;
@property(retain, nonatomic) NSMapTable *discoveredPeripheralsWithAccessories; // @synthesize discoveredPeripheralsWithAccessories=_discoveredPeripheralsWithAccessories;
@property(retain, nonatomic) HAPAccessoryServerBrowserWiProxBTLE *hapWiProxBLEBrowser; // @synthesize hapWiProxBLEBrowser=_hapWiProxBLEBrowser;
@property(retain, nonatomic) CBConnectionsObserver *connectionsObserver; // @synthesize connectionsObserver=_connectionsObserver;
@property(retain, nonatomic) CBCentralManager *centralManager; // @synthesize centralManager=_centralManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <HAPAccessoryServerBrowserBTLEDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long qosLimits; // @synthesize qosLimits=_qosLimits;
- (void)_handleTargetedScanTimeout;	// IMP=0x00000000000a312a
- (void)_invalidTargettedScanActivity;	// IMP=0x00000000000a30a0
- (void)_updateTargetedScanTimer;	// IMP=0x00000000000a2dbf
- (_Bool)_shouldCreateHAPAccessoryServerWithIdentifier:(id)arg1 statusFlags:(id)arg2 stateNumber:(id)arg3 category:(id)arg4 configNumber:(id)arg5 name:(id)arg6 forPeripheral:(id)arg7 advertisementFormat:(unsigned long long)arg8 setupHash:(id)arg9 stateChanged:(_Bool *)arg10 connectReason:(unsigned char *)arg11;	// IMP=0x00000000000a213e
- (void)_reportReachabilityForAccessoryWithIdentifier:(id)arg1;	// IMP=0x00000000000a1e69
- (void)_performTargetedScanForAccessoryWithIdentifier:(id)arg1;	// IMP=0x00000000000a1db2
- (void)_connectPendingConnections;	// IMP=0x00000000000a1808
- (void)_connectHAPPeripheralWhenAllowed:(id)arg1;	// IMP=0x00000000000a101a
- (void)_removeFromPendingConnections:(id)arg1;	// IMP=0x00000000000a0dea
- (void)_addToPendingConnections:(id)arg1;	// IMP=0x00000000000a0c54
- (void)_performTimedConnectionRequestForIdentifier:(id)arg1;	// IMP=0x00000000000a02bf
- (void)_createHAPAccessoryAndNotifyDelegateWithPeripheral:(id)arg1 name:(id)arg2 pairingUsername:(id)arg3 statusFlags:(id)arg4 stateNumber:(id)arg5 stateChanged:(_Bool)arg6 connectReason:(unsigned char)arg7 configNumber:(id)arg8 category:(id)arg9 connectionIdleTime:(unsigned char)arg10 format:(unsigned long long)arg11 setupHash:(id)arg12 encryptedPayload:(id)arg13 whbStableIdentifier:(id)arg14;	// IMP=0x000000000009f486
- (id)hapCharacteristicsForEncryptedPayload:(id)arg1 identifier:(id)arg2 shouldConnect:(_Bool *)arg3;	// IMP=0x000000000009dc80
- (_Bool)_delegateRespondsToSelector:(SEL)arg1;	// IMP=0x000000000009dbd4
- (id)_cachedCharacteristicForInstanceID:(id)arg1 identifier:(id)arg2;	// IMP=0x000000000009d88d
- (id)retrieveCBPeripheralWithUUID:(id)arg1 blePeripheral:(id)arg2;	// IMP=0x000000000009d801
- (void)accessoryServerBrowserBTLE:(id)arg1 didDiscoverHAPPeripheral:(id)arg2;	// IMP=0x000000000009d750
- (id)_discoveredServerForCBPeripheral:(id)arg1;	// IMP=0x000000000009d6c3
- (id)_blePeripheralForAccessoryServerIdentifier:(id)arg1;	// IMP=0x000000000009d4ca
- (id)_blePeripheralForCBPeripheral:(id)arg1;	// IMP=0x000000000009d101
- (id)_cbPeripheralForPeripheralUUID:(id)arg1 stableIdentifier:(id)arg2 routeMode:(unsigned char *)arg3;	// IMP=0x000000000009cff0
- (id)_cbPeripheralForHAPBLEPeripheral:(id)arg1 routeMode:(unsigned char *)arg2;	// IMP=0x000000000009cf1b
- (void)_monitorDisconnectionOfHAPPeripheral:(id)arg1 peripheral:(id)arg2;	// IMP=0x000000000009ccbf
- (void)_stopMonitorDisconnectionOfCBPeripheral:(id)arg1;	// IMP=0x000000000009cbf8
- (void)_disconectFromHAPBLEPeripheral:(id)arg1 cbPeripheral:(id)arg2;	// IMP=0x000000000009c7ba
- (void)disconnectedHAPPeripheral:(id)arg1 error:(id)arg2;	// IMP=0x000000000009c2c9
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;	// IMP=0x000000000009c228
- (void)failedToConnectHAPPeripheral:(id)arg1 error:(id)arg2;	// IMP=0x000000000009bece
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;	// IMP=0x000000000009bd3d
- (void)connectedHAPPeripheral:(id)arg1;	// IMP=0x000000000009b97c
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;	// IMP=0x000000000009b967
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;	// IMP=0x000000000009b5fc
- (void)centralManagerDidUpdateState:(id)arg1;	// IMP=0x000000000009ac68
- (void)_didDiscoverPeripheral:(id)arg1 accessoryName:(id)arg2 pairingIdentifier:(id)arg3 format:(unsigned long long)arg4 statusFlags:(id)arg5 stateNumber:(id)arg6 category:(id)arg7 configNumber:(id)arg8 setupHash:(id)arg9 encryptedPayload:(id)arg10 whbStableIdentifier:(id)arg11;	// IMP=0x0000000000099bf5
- (void)_notifyDelegatesOfRemovedAccessoryServer:(id)arg1 error:(id)arg2;	// IMP=0x00000000000996ee
- (void)_performTimedScanForIdentifiers:(id)arg1 workQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000009908f
- (void)_removeIdentifiersForReachabilityScan;	// IMP=0x0000000000098bb6
- (id)_recentlySeenPairedPeripheralTupleWithPeripheral:(id)arg1;	// IMP=0x0000000000098ab6
- (id)_getDiscoveredPeripheralMatchingIdentifier:(id)arg1;	// IMP=0x000000000009886b
- (void)_forgetPairedAccesoryWithIdentifier:(id)arg1;	// IMP=0x0000000000098585
- (void)resetPairedAccessories;	// IMP=0x0000000000098514
- (void)deRegisterAccessoryWithIdentifier:(id)arg1;	// IMP=0x0000000000098442
- (void)markNotifyingCharacteristicUpdatedForIdentifier:(id)arg1;	// IMP=0x0000000000098391
- (void)configureBTLEQoSLimits:(unsigned long long)arg1;	// IMP=0x0000000000098315
- (void)stopTrackingBTLEAccessoriesWithIdentifiers:(id)arg1;	// IMP=0x0000000000098264
- (void)updateStateForIdentifier:(id)arg1 stateNumber:(id)arg2;	// IMP=0x0000000000098188
- (void)retrieveCurrentStateForIdentifer:(id)arg1 stateNumber:(id *)arg2 isReachable:(_Bool *)arg3 linkQuality:(unsigned long long *)arg4 lastSeen:(id *)arg5;	// IMP=0x00000000000980f8
- (void)configureAccessoryWithIdentifier:(id)arg1 trackState:(_Bool)arg2 connectionPriority:(unsigned long long)arg3;	// IMP=0x0000000000098038
- (void)resetLastSeenForAccessoryServersWithIdentifers:(id)arg1;	// IMP=0x0000000000097f87
- (void)_probeReachabilityForAccessoryServersWithIdentifiers:(id)arg1 onQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000097e9f
- (void)probeReachabilityForAccessoryServersWithIdentifiers:(id)arg1 onQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000097d95
- (void)setReachabilityCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000097ce4
- (void)_discoverAccessoryServerWithIdentifier:(id)arg1;	// IMP=0x0000000000097c52
- (void)discoverAccessoryServerWithIdentifier:(id)arg1;	// IMP=0x0000000000097ba1
- (void)_callPowerOnCompletionsWithError:(id)arg1;	// IMP=0x0000000000097964
- (void)_powerOnCentralManagerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000009721a
- (void)_startScanningForReachability:(id)arg1;	// IMP=0x0000000000096d69
- (_Bool)_hasRecentlySeenAccessoriesWithIdentifiers:(id)arg1;	// IMP=0x0000000000096aa0
- (_Bool)_hasPairedAccessoriesOfType:(unsigned long long)arg1;	// IMP=0x000000000009684a
- (void)_startScanningForPairingPeers;	// IMP=0x0000000000096578
- (void)_stopActiveScanWithForce:(_Bool)arg1;	// IMP=0x0000000000095f41
- (void)pauseScans;	// IMP=0x0000000000095ed0
- (void)_matchAccessoryServerWithSetupID:(id)arg1 serverIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000095b10
- (void)matchAccessoryServerWithSetupID:(id)arg1 serverIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000095a06
- (void)remoteBrowsingEnabledUpdated;	// IMP=0x0000000000095995
- (void)stopDiscoveringAccessoryServers;	// IMP=0x0000000000095924
- (void)_startDiscoveringAccessoryServers;	// IMP=0x0000000000095887
- (void)startDiscoveringAccessoryServers;	// IMP=0x0000000000095816
- (_Bool)_canStartScan;	// IMP=0x00000000000957aa
- (void)setDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x00000000000955a2
- (long long)linkType;	// IMP=0x0000000000095597
- (id)initWithQueue:(id)arg1;	// IMP=0x00000000000953c8
@property(readonly, nonatomic, getter=isPerformingGeneralScan) _Bool performingGeneralScan; // @synthesize performingGeneralScan=_performingGeneralScan;
- (void)setPerformingGeneralScan:(_Bool)arg1;	// IMP=0x000000000009522a
- (void)updateCachedStateForIdentifier:(id)arg1 stateNumber:(id)arg2;	// IMP=0x0000000000094faa
- (void)updateBroadcastKeyForIdentifer:(id)arg1 key:(id)arg2 keyUpdatedStateNumber:(id)arg3 keyUpdatedTime:(double)arg4;	// IMP=0x0000000000094e97
- (void)saveCacheToDisk:(id)arg1;	// IMP=0x0000000000094cec
- (void)removeCachedAccessoryWithIdentifier:(id)arg1;	// IMP=0x0000000000094c77
- (id)cachedAccessoryForIdentifier:(id)arg1;	// IMP=0x0000000000094ac9
- (void)setConnectionLatency:(long long)arg1 forPeripheral:(id)arg2;	// IMP=0x0000000000094a12
- (unsigned long long)_parseAdvertisementData:(id)arg1 forPeripheral:(id)arg2 name:(id *)arg3 pairingUsername:(id *)arg4 statusFlags:(id *)arg5 stateNumber:(id *)arg6 category:(id *)arg7 configNumber:(id *)arg8 setupHash:(id *)arg9;	// IMP=0x0000000000094739
- (void)disconnectFromBTLEAccessoryServer:(id)arg1;	// IMP=0x0000000000094688
- (void)connectToBTLEAccessoryServer:(id)arg1;	// IMP=0x00000000000945d7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

