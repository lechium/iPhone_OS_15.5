//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SeparationAlerts/SABluetoothScanRequestProtocol-Protocol.h>
#import <SeparationAlerts/SAFenceManagerClientProtocol-Protocol.h>
#import <SeparationAlerts/SAGeoFenceRequestProtocol-Protocol.h>
#import <SeparationAlerts/SALocationRequestProtocol-Protocol.h>
#import <SeparationAlerts/SAMonitoringSessionManagerClientProtocol-Protocol.h>
#import <SeparationAlerts/SAPowerLogClientProtocol-Protocol.h>
#import <SeparationAlerts/SAServiceServiceProtocol-Protocol.h>
#import <SeparationAlerts/SATimeEventRequestProtocol-Protocol.h>

@class NSHashTable, NSString, SADeviceRecord, SAFenceManager, SAMonitoringSessionManager, SAPersistenceManager, SAPowerLog, SATime, SATravelTypeClassifier, SAWithYouDetector;

@interface SAService : NSObject <SAMonitoringSessionManagerClientProtocol, SAFenceManagerClientProtocol, SAPowerLogClientProtocol, SAServiceServiceProtocol, SAGeoFenceRequestProtocol, SABluetoothScanRequestProtocol, SALocationRequestProtocol, SATimeEventRequestProtocol>
{
    NSHashTable *_clients;	// 8 = 0x8
    SATime *_clock;	// 16 = 0x10
    SADeviceRecord *_deviceRecord;	// 24 = 0x18
    SAWithYouDetector *_withYouDetector;	// 32 = 0x20
    SAMonitoringSessionManager *_monitoringSessionManager;	// 40 = 0x28
    SAFenceManager *_fenceManager;	// 48 = 0x30
    SATravelTypeClassifier *_travelTypeClassifier;	// 56 = 0x38
    SAPowerLog *_powerLogger;	// 64 = 0x40
    SAPersistenceManager *_persistenceManager;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000002f1f6
@property(retain, nonatomic) SAPersistenceManager *persistenceManager; // @synthesize persistenceManager=_persistenceManager;
@property(retain, nonatomic) SAPowerLog *powerLogger; // @synthesize powerLogger=_powerLogger;
@property(retain, nonatomic) SATravelTypeClassifier *travelTypeClassifier; // @synthesize travelTypeClassifier=_travelTypeClassifier;
@property(retain, nonatomic) SAFenceManager *fenceManager; // @synthesize fenceManager=_fenceManager;
@property(retain, nonatomic) SAMonitoringSessionManager *monitoringSessionManager; // @synthesize monitoringSessionManager=_monitoringSessionManager;
@property(retain, nonatomic) SAWithYouDetector *withYouDetector; // @synthesize withYouDetector=_withYouDetector;
@property(retain, nonatomic) SADeviceRecord *deviceRecord; // @synthesize deviceRecord=_deviceRecord;
@property(retain, nonatomic) SATime *clock; // @synthesize clock=_clock;
@property(retain, nonatomic) NSHashTable *clients; // @synthesize clients=_clients;
- (void)updatedMonitoringState:(unsigned long long)arg1 forDeviceUUID:(id)arg2;	// IMP=0x000000000002f08f
- (void)ingestTAEvent:(id)arg1;	// IMP=0x000000000002ee43
- (void)fetchLastVisit;	// IMP=0x000000000002ec92
- (void)stopLongAggressiveScan;	// IMP=0x000000000002eae1
- (void)stopBackgroundScanning;	// IMP=0x000000000002e930
- (void)startBackgroundScanning;	// IMP=0x000000000002e77f
- (void)cancelSATimeEventForAlarm:(id)arg1;	// IMP=0x000000000002e59a
- (void)scheduleSATimeEvent:(double)arg1 forAlarm:(id)arg2;	// IMP=0x000000000002e3bb
- (void)removeGeofence:(id)arg1;	// IMP=0x000000000002e1ee
- (void)addGeofence:(id)arg1;	// IMP=0x000000000002df8a
- (void)requestLocationForType:(unsigned long long)arg1;	// IMP=0x000000000002dd67
- (void)requestBluetoothScanForTypes:(unsigned long long)arg1;	// IMP=0x000000000002db80
- (void)notifySeparationsForDevices:(id)arg1 withLocation:(id)arg2 withContext:(id)arg3;	// IMP=0x000000000002d8eb
- (void)enableMonitoringForSeparations:(_Bool)arg1;	// IMP=0x000000000002d730
- (void)removeClient:(id)arg1;	// IMP=0x000000000002d71a
- (void)addClient:(id)arg1;	// IMP=0x000000000002d704
- (id)initWithAnalytics:(id)arg1;	// IMP=0x000000000002d4d3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

