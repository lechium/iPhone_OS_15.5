//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDHSCharacteristicsDelegate-Protocol.h>

@class HDDeviceEntity, HDHealthPeripheral, HDHealthServiceManager, HDProfile, NSMutableArray, NSMutableDictionary, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HDHealthService : NSObject <HDHSCharacteristicsDelegate>
{
    NSObject<OS_dispatch_queue> *_dataQueue;	// 8 = 0x8
    NSMutableArray *_pendingCharacteristicBuffer;	// 16 = 0x10
    HDDeviceEntity *_deviceEntity;	// 24 = 0x18
    _Atomic _Bool _deviceInformationLoaded;	// 32 = 0x20
    _Bool _deliverData;	// 33 = 0x21
    _Bool _characteristicsDiscovered;	// 34 = 0x22
    HDProfile *_profile;	// 40 = 0x28
    HDHealthPeripheral *_healthPeripheral;	// 48 = 0x30
    NSUUID *_peripheralUUID;	// 56 = 0x38
    NSString *_serviceId;	// 64 = 0x40
    HDHealthServiceManager *_serviceManager;	// 72 = 0x48
    NSMutableDictionary *_writableCharacteristics;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_writeQueue;	// 88 = 0x58
    NSMutableArray *_pendingWrites;	// 96 = 0x60
}

+ (id)implementedProperties;	// IMP=0x00000000005cee13
+ (id)serviceUUID;	// IMP=0x00000000005cdf4f
+ (long long)serviceType;	// IMP=0x00000000005cdee2
- (void).cxx_destruct;	// IMP=0x00000000005cf686
@property(readonly, nonatomic) _Bool characteristicsDiscovered; // @synthesize characteristicsDiscovered=_characteristicsDiscovered;
@property(retain, nonatomic) NSString *serviceId; // @synthesize serviceId=_serviceId;
@property _Bool deliverData; // @synthesize deliverData=_deliverData;
@property(readonly, nonatomic) NSUUID *peripheralUUID; // @synthesize peripheralUUID=_peripheralUUID;
@property(readonly, nonatomic) __weak HDHealthPeripheral *healthPeripheral; // @synthesize healthPeripheral=_healthPeripheral;
@property(nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
- (_Bool)processAdvertisementData:(id)arg1;	// IMP=0x00000000005cf5ff
- (void)deviceInformationSetOnPeripheral;	// IMP=0x00000000005cf55b
- (void)mfaSucceededOnPeripheral;	// IMP=0x00000000005cf340
- (id)description;	// IMP=0x00000000005cf27b
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;	// IMP=0x00000000005cf05d
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 updateTime:(id)arg3 error:(id)arg4;	// IMP=0x00000000005cf057
- (void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2;	// IMP=0x00000000005cf051
- (void)peripheral:(id)arg1 didDiscoverCharacteristics:(id)arg2;	// IMP=0x00000000005ceebe
- (void)readProperty:(id)arg1;	// IMP=0x00000000005cee20
- (void)writeCharacteristic:(id)arg1 expectResponse:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000005cebd3
- (_Bool)supportsWritingCharacteristic:(id)arg1;	// IMP=0x00000000005ceb5e
- (void)setWritableCharacteristic:(id)arg1;	// IMP=0x00000000005ce9bf
- (void)performOperation:(id)arg1 onPeripheral:(id)arg2 withParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000005ce444
- (_Bool)supportsOperation:(id)arg1;	// IMP=0x00000000005ce43c
- (void)characteristicDataReceived:(id)arg1;	// IMP=0x00000000005ce081
- (id)servicesInProfile;	// IMP=0x00000000005cdfb7
- (void)deviceDisconnecting;	// IMP=0x00000000005cdc8a
- (id)initWithServiceManager:(id)arg1 peripheral:(id)arg2 advertisementData:(id)arg3 profile:(id)arg4;	// IMP=0x00000000005cda38

@end
