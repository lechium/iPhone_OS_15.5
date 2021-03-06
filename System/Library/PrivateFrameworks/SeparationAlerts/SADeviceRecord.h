//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SeparationAlerts/NSSecureCoding-Protocol.h>
#import <SeparationAlerts/SAWithYouDetectorClientProtocol-Protocol.h>

@class NSMutableDictionary;

@interface SADeviceRecord : NSObject <NSSecureCoding, SAWithYouDetectorClientProtocol>
{
    NSMutableDictionary *_deviceRecord;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002d393
- (void).cxx_destruct;	// IMP=0x000000000002d4c3
@property(retain, nonatomic) NSMutableDictionary *deviceRecord; // @synthesize deviceRecord=_deviceRecord;
- (void)didForceUpdateWithYouStatus;	// IMP=0x000000000002d4a2
- (void)updatedWithYouStatusFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 forDeviceWithUUID:(id)arg3;	// IMP=0x000000000002d44f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002d42c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002d39b
- (void)ingestTAEvent:(id)arg1;	// IMP=0x000000000002d2b8
- (_Bool)hasDisconnectedDevices;	// IMP=0x000000000002d128
- (_Bool)hasSurfacedNotificationFor:(id)arg1;	// IMP=0x000000000002d085
- (void)resetAllWithYouStatus;	// IMP=0x000000000002cefa
- (void)updateMonitoringSessionState:(unsigned long long)arg1 forDeviceWithUUID:(id)arg2;	// IMP=0x000000000002cea7
- (void)updateScenario:(unsigned long long)arg1 forDeviceWithUUID:(id)arg2;	// IMP=0x000000000002ce54
- (void)updateLastWithYouDate:(id)arg1 forDeviceWithUUID:(id)arg2;	// IMP=0x000000000002cddb
- (void)_updateLatestAdvertisement:(id)arg1;	// IMP=0x000000000002cd50
- (void)_updateConnectionStateOnConnectionEvent:(id)arg1;	// IMP=0x000000000002cae3
- (void)_updateAllRelatedDevices;	// IMP=0x000000000002c5ce
- (void)_updateDeviceRecordOnDeviceUpdateEvent:(id)arg1;	// IMP=0x000000000002c3bb
- (void)_updateSingleDeviceRecordForDevice:(id)arg1;	// IMP=0x000000000002c2b8
- (void)updateLatestAdvertisement:(id)arg1 forDeviceWithUUID:(id)arg2;	// IMP=0x000000000002c23f
- (id)getRelatedDevices:(id)arg1;	// IMP=0x000000000002c190
- (unsigned long long)getMonitoringSessionState:(id)arg1;	// IMP=0x000000000002c0ed
- (unsigned long long)getScenarioClass:(id)arg1;	// IMP=0x000000000002c04a
- (id)getLastWithYouDate:(id)arg1;	// IMP=0x000000000002bf9b
- (id)getLatestWildAdvertisement:(id)arg1;	// IMP=0x000000000002beec
- (id)getLatestNOAdvertisement:(id)arg1;	// IMP=0x000000000002be3d
- (id)getLatestAdvertisement:(id)arg1;	// IMP=0x000000000002bd8e
- (unsigned long long)getDeviceNotificationState:(id)arg1;	// IMP=0x000000000002bd86
- (unsigned long long)getWithYouStatus:(id)arg1;	// IMP=0x000000000002bce3
- (long long)getConnectionState:(id)arg1;	// IMP=0x000000000002bc40
- (id)getSADevice:(id)arg1;	// IMP=0x000000000002bbec
- (id)getAllUUIDs;	// IMP=0x000000000002bbd6
- (id)init;	// IMP=0x000000000002bb80

@end

