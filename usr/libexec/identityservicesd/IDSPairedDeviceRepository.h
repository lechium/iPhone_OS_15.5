//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSMutableDictionary;
@protocol IDSPairedDevicePersister;

@interface IDSPairedDeviceRepository : NSObject
{
    NSMutableDictionary *_pairedDevices;	// 8 = 0x8
    struct os_unfair_lock_s _pairedDevicesLock;	// 16 = 0x10
    id <IDSPairedDevicePersister> _persister;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000674ca0
- (void)_accessPairedDevicesInCriticalSectionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000674c30
- (_Bool)_criticalPersistState;	// IMP=0x0010000000674ba0
- (_Bool)_criticalPerformTransactionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000674af0
- (_Bool)_performTransactionInCriticalSectionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000674920
- (_Bool)shouldUseIPsecLinkForDefaultPairedDevice;	// IMP=0x00100000006748c0
- (_Bool)_criticalUpdatePairedDeviceWithCBUUID:(id)arg1 iCloudURIs:(id)arg2 pushToken:(id)arg3;	// IMP=0x0010000000674270
- (_Bool)updatePairedDeviceWithCBUUID:(id)arg1 iCloudURIs:(id)arg2 pushToken:(id)arg3;	// IMP=0x0010000000673e70
- (_Bool)_criticalUpdatePairedDeviceWithCBUUID:(id)arg1 pairingType:(long long)arg2;	// IMP=0x0010000000673af0
- (_Bool)updatePairedDeviceWithCBUUID:(id)arg1 pairingType:(long long)arg2;	// IMP=0x0010000000673770
- (_Bool)_criticalUpdatePairedDeviceWithCBUUID:(id)arg1 deviceUniqueID:(id)arg2 buildVersion:(id)arg3 productVersion:(id)arg4 productName:(id)arg5 pairingProtocolVersion:(unsigned int)arg6 minCompatibilityVersion:(unsigned int)arg7 maxCompatibilityVersion:(unsigned int)arg8 serviceMinCompatibilityVersion:(unsigned short)arg9;	// IMP=0x0010000000672670
- (_Bool)updatePairedDeviceWithCBUUID:(id)arg1 deviceUniqueID:(id)arg2 buildVersion:(id)arg3 productVersion:(id)arg4 productName:(id)arg5 pairingProtocolVersion:(unsigned int)arg6 minCompatibilityVersion:(unsigned int)arg7 maxCompatibilityVersion:(unsigned int)arg8 serviceMinCompatibilityVersion:(unsigned short)arg9;	// IMP=0x0010000000671fc0
- (_Bool)_criticalUpdatePairedDeviceWithCBUUID:(id)arg1 supportIPsec:(_Bool)arg2;	// IMP=0x0010000000671c10
- (_Bool)updatePairedDeviceWithCBUUID:(id)arg1 supportIPsec:(_Bool)arg2;	// IMP=0x0010000000671880
- (MISSING_TYPE *)_criticalUpdatePairedDeviceWithCBUUID:deviceInfoPayload: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000671640
- (_Bool)updatePairedDeviceWithCBUUID:(id)arg1 deviceInfoPayload:(id)arg2;	// IMP=0x00100000006712a0
- (_Bool)_criticalPurgeSecuredEncryptionKeysForAllPairedDevices;	// IMP=0x0010000000670ff0
- (_Bool)purgeSecuredEncryptionKeysForAllPairedDevices;	// IMP=0x0010000000670e70
- (id)_criticalActivePairedDevice;	// IMP=0x0010000000670be0
- (id)activePairedDevice;	// IMP=0x0010000000670a10
- (void)_criticalUpdatePairedDevice:(id)arg1 isActive:(_Bool)arg2;	// IMP=0x0010000000670960
- (long long)_criticalPerformPairedDeviceActivationWithCBUUID:(id)arg1;	// IMP=0x00100000006707a0
- (void)_criticalPerformPairedDeviceDeactivation;	// IMP=0x0010000000670410
- (long long)_criticalActivatePairedDeviceWithCBUUID:(id)arg1;	// IMP=0x0010000000670330
- (void)deactivatePairedDevices;	// IMP=0x00100000006701a0
- (long long)activatePairedDeviceWithCBUUID:(id)arg1;	// IMP=0x001000000066fe70
- (_Bool)isEmpty;	// IMP=0x001000000066fdf0
- (id)pairedDevicesWithIsPairingValue:(_Bool)arg1;	// IMP=0x001000000066fb20
- (id)_criticalAllPairedDevices;	// IMP=0x001000000066fa80
- (id)allPairedDevicesWithType:(long long)arg1;	// IMP=0x001000000066f720
- (id)allPairedDevices;	// IMP=0x001000000066f550
- (_Bool)_criticalRemovePairedDeviceWithCBUUID:(id)arg1;	// IMP=0x001000000066f350
- (_Bool)removePairedDeviceWithCBUUID:(id)arg1;	// IMP=0x001000000066f010
- (void)_criticalPutPairedDevice:(id)arg1;	// IMP=0x001000000066ed70
- (_Bool)_addPairedDevice:(id)arg1;	// IMP=0x001000000066ea80
- (_Bool)addPairedDeviceWithCBUUID:(id)arg1 pairingType:(long long)arg2;	// IMP=0x001000000066e8e0
- (id)_criticalPairedDeviceWithCBUUID:(id)arg1;	// IMP=0x001000000066e7d0
- (id)pairedDeviceWithCBUUID:(id)arg1;	// IMP=0x001000000066e360
- (_Bool)containsPairedDeviceWithCBUUID:(id)arg1;	// IMP=0x001000000066e2d0
- (void)_criticalLoadPairedDeviceArray:(id)arg1;	// IMP=0x001000000066df50
- (_Bool)loadPairedDevicesFromStorage;	// IMP=0x001000000066de00
- (id)description;	// IMP=0x001000000066db60
- (id)initWithPersister:(id)arg1;	// IMP=0x001000000066da60

@end

