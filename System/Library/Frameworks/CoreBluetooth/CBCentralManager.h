//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable, NSMutableArray;
@protocol CBCentralManagerDelegate;

@interface CBCentralManager
{
    struct {
        unsigned int willRestoreState:1;
        unsigned int didDiscoverPeripheral:1;
        unsigned int didConnectPeripheral:1;
        unsigned int didFailToConnectPeripheral:1;
        unsigned int didDisconnectPeripheral:1;
        unsigned int didUpdatePeripheralConnectionState:1;
        unsigned int didFindPeripheral:1;
        unsigned int didLosePeripheral:1;
        unsigned int didLoseZone:1;
        unsigned int didUpdateConnectionParameters:1;
        unsigned int connectionEventDidOccur:1;
        unsigned int didSendBytesToPeripheralWithError:1;
        unsigned int didReceiveDataFromPeripheral:1;
        unsigned int didDiscoverMultiplePeripherals:1;
        unsigned int didUpdateANCSAuthorizationForPeripheral:1;
        unsigned int canSendDataToPeripheral:1;
        unsigned int didFailToStartScanWithError:1;
        unsigned int didUpdateControllerBTClockForPeripheral:1;
        unsigned int didUpdateMTUForPeripheral:1;
        unsigned int didUpdateRSSIStatisticsDetectionForPeripheral:1;
    } _delegateFlags;	// 8 = 0x8
    _Bool _observingKeyPaths;	// 12 = 0xc
    _Bool _isScanning;	// 13 = 0xd
    id <CBCentralManagerDelegate> _delegate;	// 16 = 0x10
    NSMapTable *_peripherals;	// 24 = 0x18
    NSMutableArray *_discoveredPeripherals;	// 32 = 0x20
}

+ (_Bool)supportsFeatures:(unsigned long long)arg1;	// IMP=0x000000000000f500
- (void).cxx_destruct;	// IMP=0x0000000000013d00
@property(retain) NSMutableArray *discoveredPeripherals; // @synthesize discoveredPeripherals=_discoveredPeripherals;
@property(readonly, retain, nonatomic) NSMapTable *peripherals; // @synthesize peripherals=_peripherals;
@property(nonatomic) _Bool isScanning; // @synthesize isScanning=_isScanning;
@property(nonatomic) __weak id <CBCentralManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleMsg:(unsigned short)arg1 args:(id)arg2;	// IMP=0x0000000000013700
- (_Bool)isMsgAllowedAlways:(unsigned short)arg1;	// IMP=0x00000000000136b0
- (_Bool)isMsgAllowedWhenOff:(unsigned short)arg1;	// IMP=0x00000000000136a0
- (void)handlePeerMTUChanged:(id)arg1;	// IMP=0x0000000000013570
- (void)handleAncsAuthChanged:(id)arg1;	// IMP=0x0000000000013440
- (void)handleDidReceiveDataFromPeripheral:(id)arg1;	// IMP=0x0000000000013260
- (void)handleDidSendBytesToPeripheralwithError:(id)arg1;	// IMP=0x0000000000013120
- (id)createPeripheralWithAddress:(id)arg1 andIdentifier:(id)arg2;	// IMP=0x0000000000012fe0
- (void)deleteDevice:(id)arg1;	// IMP=0x0000000000012f00
- (void)removeIRKwithBTAddress:(id)arg1;	// IMP=0x0000000000012e30
- (void)addIRKwithBTAddress:(id)arg1 irk:(id)arg2;	// IMP=0x0000000000012d20
- (id)retrievePeripheralWithAddress:(id)arg1;	// IMP=0x0000000000012b10
- (void)handleReadyForUpdates:(id)arg1;	// IMP=0x00000000000129b0
- (void)handleConnectionParametersUpdated:(id)arg1;	// IMP=0x0000000000012840
- (void)HandleRssiDetectionUpdateMsg:(id)arg1;	// IMP=0x00000000000126a0
- (void)HandleControllerBTClockUpdateMsg:(id)arg1;	// IMP=0x00000000000124f0
- (void)handleZoneLost:(id)arg1;	// IMP=0x0000000000012410
- (void)handleAdvertisingAddressChanged:(id)arg1;	// IMP=0x00000000000123f0
- (void)handleApplicationActivityEvent:(id)arg1;	// IMP=0x00000000000122c0
- (void)handlePeripheralTrackingUpdated:(id)arg1;	// IMP=0x0000000000012170
- (void)handlePeripheralConnectionStateUpdated:(id)arg1;	// IMP=0x0000000000012070
- (void)handleScanFailedToStartWithError:(id)arg1;	// IMP=0x0000000000011f50
- (void)handleApplicationConnectionEventDidOccur:(id)arg1;	// IMP=0x0000000000011df0
- (void)handlePeripheralDisconnectionCompleted:(id)arg1;	// IMP=0x0000000000011cd0
- (void)handlePeripheralCLReady:(id)arg1;	// IMP=0x0000000000011bc0
- (void)handlePeripheralConnectionCompleted:(id)arg1;	// IMP=0x00000000000119a0
- (void)handlePeripheralDiscovered:(id)arg1;	// IMP=0x0000000000011270
- (void)handleRestoringState:(id)arg1;	// IMP=0x000000000000fcf0
- (void)handleSupportedFeatures:(id)arg1;	// IMP=0x000000000000fc70
- (id)retrieveAddressForPeripheral:(id)arg1;	// IMP=0x000000000000fae0
- (unsigned short)retrieveMaxConnectionForUsecase:(long long)arg1;	// IMP=0x000000000000f9c0
- (id)getLPEMData:(id)arg1;	// IMP=0x000000000000f8f0
- (void)createOfflineLEPairing:(unsigned short)arg1;	// IMP=0x000000000000f820
- (id)isApplicationConnectedToAnyPeripherals:(id)arg1;	// IMP=0x000000000000f740
- (id)stopConnectionEventCounterForPeripheral:(id)arg1;	// IMP=0x000000000000f630
- (id)startConnectionEventCounterForPeripheral:(id)arg1;	// IMP=0x000000000000f520
- (void)setMatchActionRules:(id)arg1;	// IMP=0x000000000000f430
- (void)setConnectionEventOptions:(id)arg1;	// IMP=0x000000000000f360
- (void)sendData:(id)arg1 toPeripheral:(id)arg2;	// IMP=0x000000000000f270
- (void)resumeScans;	// IMP=0x000000000000f250
- (void)pauseScans;	// IMP=0x000000000000f230
- (void)resumeLeConnectionManager;	// IMP=0x000000000000f210
- (void)pauseLeConnectionManager;	// IMP=0x000000000000f1f0
- (void)registerForConnectionEventsWithOptions:(id)arg1;	// IMP=0x000000000000f120
- (void)enablePrivateModeForSessionWithIdentifier:(id)arg1 forDuration:(unsigned short)arg2;	// IMP=0x000000000000f020
- (void)enablePrivateModeForPeripheral:(id)arg1 forDuration:(unsigned short)arg2;	// IMP=0x000000000000ef00
- (void)stopTrackingPeripheral:(id)arg1 options:(id)arg2;	// IMP=0x000000000000ed70
- (void)startTrackingPeripheral:(id)arg1 options:(id)arg2;	// IMP=0x000000000000ebe0
- (void)setDesiredConnectionLatency:(long long)arg1 forPeripheral:(id)arg2;	// IMP=0x000000000000ea50
- (void)cancelPeripheralConnection:(id)arg1 force:(_Bool)arg2;	// IMP=0x000000000000e910
- (void)cancelPeripheralConnection:(id)arg1;	// IMP=0x000000000000e850
- (void)cancelPeripheralConnection:(id)arg1 options:(id)arg2;	// IMP=0x000000000000e680
- (void)setRSSIStatisticsDetection:(id)arg1 options:(id)arg2;	// IMP=0x000000000000e4f0
- (void)setLESetPhy:(id)arg1 options:(id)arg2;	// IMP=0x000000000000e360
- (void)setDataLengthChange:(id)arg1 options:(id)arg2;	// IMP=0x000000000000e1d0
- (unsigned short)getRemainingAdvancedMatchingRule;	// IMP=0x000000000000e140
- (unsigned short)getTotalSupportedAdvancedMatchingRules;	// IMP=0x000000000000e0c0
- (void)removeMultipleEntriesDuplicateFilter:(id)arg1;	// IMP=0x000000000000e000
- (void)removeSingleEntryDuplicateFilter:(id)arg1;	// IMP=0x000000000000df40
- (void)setEnhancedSetScanParamtersMultiCore:(id)arg1;	// IMP=0x000000000000de70
- (void)setEnhancedScanEnable:(id)arg1;	// IMP=0x000000000000dda0
- (void)removeAdvancedMatchingRule:(id)arg1;	// IMP=0x000000000000dcd0
- (void)addAdvancedMatchingRule:(id)arg1;	// IMP=0x000000000000dc00
- (void)wipeDuplicateFilterList:(id)arg1;	// IMP=0x000000000000db30
- (void)setLeAFHMap:(id)arg1;	// IMP=0x000000000000da00
- (void)randomizeAFHMapForPeripheral:(id)arg1;	// IMP=0x000000000000d8b0
- (id)retrieveWhbCBPeripheralWithInfo:(id)arg1;	// IMP=0x000000000000d8a0
- (void)connectPeripheral:(id)arg1 options:(id)arg2;	// IMP=0x000000000000d5d0
- (void)stopScan;	// IMP=0x000000000000d590
- (void)scanForPeripheralsWithServices:(id)arg1 options:(id)arg2;	// IMP=0x000000000000d470
- (id)retrieveConnectingPeripherals;	// IMP=0x000000000000d250
- (void)retrieveConnectedPeripheralsWithServices:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000cec0
- (id)retrieveConnectedPeripheralsWithServices:(id)arg1 allowAll:(_Bool)arg2;	// IMP=0x000000000000cbf0
- (id)retrieveConnectedPeripheralsWithServices:(id)arg1;	// IMP=0x000000000000cb20
- (void)retrieveConnectedPeripherals;	// IMP=0x000000000000c9d0
- (id)retrieveState;	// IMP=0x000000000000c970
- (void)retrievePeripheralsWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c330
- (id)retrievePeripheralsWithIdentifiers:(id)arg1;	// IMP=0x000000000000be90
- (id)retrievePairingInfoForPeripheral:(id)arg1;	// IMP=0x000000000000bd30
- (void)retrievePeripherals:(id)arg1;	// IMP=0x000000000000bb70
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3;	// IMP=0x000000000000b6a0
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x000000000000b5b0
- (id)init;	// IMP=0x000000000000b590
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000000ada0
- (void)dealloc;	// IMP=0x000000000000acc0
- (id)dataArrayToUUIDArray:(id)arg1;	// IMP=0x000000000000aad0
- (void)orphanPeripherals;	// IMP=0x000000000000aa00
- (void)forEachPeripheral:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a930
- (id)peerWithInfo:(id)arg1;	// IMP=0x000000000000a910
- (id)peripheralWithInfo:(id)arg1;	// IMP=0x000000000000a690
- (id)peripheralWithIdentifier:(id)arg1;	// IMP=0x000000000000a670

@end

