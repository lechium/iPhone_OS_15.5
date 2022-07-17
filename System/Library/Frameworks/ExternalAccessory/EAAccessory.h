//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EAAccessoryInternal, NSArray, NSString;
@protocol EAAccessoryDelegate;

@interface EAAccessory : NSObject
{
    EAAccessoryInternal *_internal;	// 8 = 0x8
}

- (_Bool)supportsDestinationSharing;	// IMP=0x000000000000d244
- (_Bool)supportsPointOfInterest;	// IMP=0x000000000000d22a
- (void)updateItemProperty:(int)arg1 withValue:(id)arg2;	// IMP=0x000000000000d18a
- (void)updateSystemProperty:(int)arg1 withValue:(id)arg2;	// IMP=0x000000000000d0ea
- (_Bool)supportsAccessibility;	// IMP=0x000000000000d0ce
- (int)captureStillImage:(unsigned int)arg1 forCameraIds:(id)arg2;	// IMP=0x000000000000d0ba
- (int)stopLivePreview:(unsigned int)arg1 forCameraIds:(id)arg2;	// IMP=0x000000000000d0a6
- (int)startLivePreview:(unsigned int)arg1 forCameraIds:(id)arg2;	// IMP=0x000000000000d095
- (int)setCameraProperties:(unsigned int)arg1 forCameraId:(unsigned short)arg2 withProperties:(id)arg3;	// IMP=0x000000000000d084
- (int)stopCameraUpdates:(unsigned int)arg1 forCameraIds:(id)arg2;	// IMP=0x000000000000d070
- (int)startCameraUpdates:(unsigned int)arg1 forCameraIds:(id)arg2 withProperties:(id)arg3 withCapabilities:(id)arg4;	// IMP=0x000000000000d05b
- (int)stopCameraInfo:(unsigned int)arg1 forCameraIds:(id)arg2;	// IMP=0x000000000000d01f
- (int)startCameraInfo:(unsigned int)arg1 forCameraIds:(id)arg2;	// IMP=0x000000000000ce43
- (void)setCameraComponents:(id)arg1;	// IMP=0x000000000000ce2d
- (id)cameraComponents;	// IMP=0x000000000000ce17
- (id)getVehicleInfoData;	// IMP=0x000000000000cdc6
- (void)setVehicleInfovehicleInfoInitialData:(id)arg1;	// IMP=0x000000000000cdb0
- (id)vehicleInfoInitialData;	// IMP=0x000000000000cd9a
- (void)setVehicleInfoSupportedTypes:(id)arg1;	// IMP=0x000000000000cd84
- (id)vehicleInfoSupportedTypes;	// IMP=0x000000000000cd6e
- (void)sendWiredCarPlayAvailable:(id)arg1 usbIdentifier:(id)arg2 wirelessCarPlayAvailable:(id)arg3 bluetoothIdentifier:(id)arg4;	// IMP=0x000000000000ccf6
- (void)sendDeviceIdentifierNotification:(id)arg1 usbIdentifier:(id)arg2;	// IMP=0x000000000000cc2c
- (void)requestIAPAccessoryWiFiCredentials;	// IMP=0x000000000000cba4
- (void)_OOBBTPairingCompletedWithStatus:(unsigned char)arg1 forAccessoryWithMACAddress:(id)arg2;	// IMP=0x000000000000cb22
- (void)beginOOBBTPairingWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000caea
- (_Bool)sendDestinationInformation:(id)arg1 identifier:(id)arg2;	// IMP=0x000000000000ca0e
- (_Bool)sendPointOfInterestInformation:(id)arg1 identifier:(unsigned short)arg2;	// IMP=0x000000000000c9f8
- (_Bool)sendGPRMCDataStatusValueA:(_Bool)arg1 ValueV:(_Bool)arg2 ValueX:(_Bool)arg3;	// IMP=0x000000000000c949
- (_Bool)sendEphemeris:(id)arg1;	// IMP=0x000000000000c902
- (_Bool)sendEphemerisPointDataGpsWeek:(unsigned long long)arg1 gpsTOW:(double)arg2 latitude:(double)arg3 longitude:(double)arg4 accuracy:(unsigned short)arg5;	// IMP=0x000000000000c88a
- (_Bool)sendGpsWeek:(unsigned long long)arg1 gpsTOW:(double)arg2;	// IMP=0x000000000000c831
- (_Bool)getEphemerisExpirationInterval:(double *)arg1;	// IMP=0x000000000000c7ba
- (_Bool)getEphemerisRecommendRefreshInterval:(double *)arg1;	// IMP=0x000000000000c743
- (_Bool)getEphemerisURL:(id *)arg1;	// IMP=0x000000000000c6df
- (void)resetIAPTimeSyncKalmanFilter;	// IMP=0x000000000000c6c2
- (void)getIAPTimeSyncInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c693
- (void)setIAPTimeSyncParams:(id)arg1;	// IMP=0x000000000000c602
- (_Bool)setNMEASentencesToFilter:(id)arg1;	// IMP=0x000000000000c55c
- (void)addNMEASentence:(id)arg1;	// IMP=0x000000000000c4e0
- (_Bool)getNMEASentence:(id *)arg1;	// IMP=0x000000000000c3d9
- (_Bool)accessoryHasNMEASentencesAvailable;	// IMP=0x000000000000c345
- (_Bool)supportsCamera;	// IMP=0x000000000000c328
- (_Bool)supportsLocation;	// IMP=0x000000000000c30b
- (void)setLocationSentenceTypesMask:(int)arg1;	// IMP=0x000000000000c2f5
- (int)locationSentenceTypesMask;	// IMP=0x000000000000c2df
- (unsigned long long)destinationSharingOptions;	// IMP=0x000000000000c2c9
- (void)setDestinationSharingOptions:(unsigned long long)arg1;	// IMP=0x000000000000c2b3
- (_Bool)pointOfInterestHandoffEnabled;	// IMP=0x000000000000c29d
- (void)setPointOfInterestHandoffEnabled:(_Bool)arg1;	// IMP=0x000000000000c287
- (unsigned int)eqIndex;	// IMP=0x000000000000c271
- (void)setEqIndex:(unsigned int)arg1;	// IMP=0x000000000000c22a
- (id)eqNames;	// IMP=0x000000000000c214
- (void)setEqNames:(id)arg1;	// IMP=0x000000000000c1fe
- (_Bool)containsSameProtocolsAsiAPAccessoryProtocols:(id)arg1;	// IMP=0x000000000000c1a5
- (id)dictionaryWithLowercaseKeys:(id)arg1;	// IMP=0x000000000000bfef
- (id)allPublicProtocolStrings;	// IMP=0x000000000000bcf7
- (id)audioPorts;	// IMP=0x000000000000bce1
- (int)classType;	// IMP=0x000000000000bccb
- (id)preferredApp;	// IMP=0x000000000000bcb5
- (_Bool)shouldBeHiddenFromUI;	// IMP=0x000000000000bc98
- (_Bool)supportsPublicIap;	// IMP=0x000000000000bc10
- (id)protocolDetails;	// IMP=0x000000000000bbfa
- (id)regionCode;	// IMP=0x000000000000bbe4
- (id)ppid;	// IMP=0x000000000000bbce
- (id)certData;	// IMP=0x000000000000bbb8
- (id)certSerial;	// IMP=0x000000000000bba2
- (id)macAddress;	// IMP=0x000000000000bb8c
- (_Bool)_internalNotPresentInIAPAccessoriesArray;	// IMP=0x000000000000bb76
- (unsigned int)_internalConnectionID;	// IMP=0x000000000000bb60
- (id)_createWakeToken;	// IMP=0x000000000000bb02
- (void)_endSession:(unsigned int)arg1;	// IMP=0x000000000000b992
- (void)_openCompleteForSession:(unsigned int)arg1;	// IMP=0x000000000000b84b
- (void)_removeSession:(id)arg1;	// IMP=0x000000000000b835
- (void)_addSession:(id)arg1;	// IMP=0x000000000000b81f
- (id)_protocolIDForProtocolString:(id)arg1;	// IMP=0x000000000000b6d7
- (void)_setNotPresentInIAPAccessoriesArray:(_Bool)arg1;	// IMP=0x000000000000b6c1
- (void)_setConnected:(_Bool)arg1;	// IMP=0x000000000000b6ab
- (id)_shortDescription;	// IMP=0x000000000000b67c
- (void)_updateAccessoryInfo:(id)arg1;	// IMP=0x000000000000b332
- (id)_initWithAccessory:(id)arg1;	// IMP=0x000000000000b2e2
- (unsigned int)accessoryCapabilities;	// IMP=0x000000000000b274
- (id)coreAccessoriesPrimaryUUID;	// IMP=0x000000000000b26c
- (_Bool)createdByCoreAccessories;	// IMP=0x000000000000b264
- (_Bool)supportsCarPlayConnectionRequest;	// IMP=0x000000000000b247
- (_Bool)supportsCarPlayAppLinks;	// IMP=0x000000000000b22a
- (_Bool)supportsWirelessCarPlay;	// IMP=0x000000000000b20d
- (_Bool)supportsUSBCarPlay;	// IMP=0x000000000000b1f0
- (_Bool)supportsOOBBTPairing2;	// IMP=0x000000000000b1d3
- (_Bool)supportsOOBBTPairing;	// IMP=0x000000000000b1b6
- (_Bool)supportsCarPlay;	// IMP=0x000000000000b199
- (_Bool)isAvailableOverBonjour;	// IMP=0x000000000000b191
- (_Bool)hasIPConnection;	// IMP=0x000000000000b189
- (id)bonjourName;	// IMP=0x000000000000b181
@property(nonatomic) id <EAAccessoryDelegate> delegate;
@property(readonly, nonatomic) NSArray *protocolStrings;
- (id)wakeToken;	// IMP=0x000000000000af87
@property(readonly, nonatomic) NSString *dockType;
- (long long)transportType;	// IMP=0x000000000000af5b
@property(readonly, nonatomic) NSString *hardwareRevision;
- (id)firmwareRevisionPending;	// IMP=0x000000000000af2f
- (id)firmwareRevisionActive;	// IMP=0x000000000000af19
@property(readonly, nonatomic) NSString *firmwareRevision;
@property(readonly, nonatomic) NSString *serialNumber;
@property(readonly, nonatomic) NSString *modelNumber;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *manufacturer;
@property(readonly, nonatomic) unsigned long long connectionID;
@property(readonly, nonatomic, getter=isConnected) _Bool connected;
- (id)description;	// IMP=0x000000000000ac8d
- (void)dealloc;	// IMP=0x000000000000ac52
- (id)init;	// IMP=0x000000000000ac26

@end
