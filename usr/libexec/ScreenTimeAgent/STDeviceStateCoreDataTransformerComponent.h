//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface STDeviceStateCoreDataTransformerComponent : NSObject
{
}

+ (id)observationFiltersByTriggerPredicate;	// IMP=0x002000000002f0a8
+ (id)_validatedDeviceStateChangeTypeFromSecondaryType:(long long)arg1;	// IMP=0x001000000002f072
+ (short)_osPlatformFromDevicePlatform:(long long)arg1;	// IMP=0x001000000002f05a
+ (long long)_devicePlatformFromOSPlatform:(short)arg1;	// IMP=0x001000000002f045
+ (id)_writeDevice:(id)arg1 associatedUser:(id)arg2 inContext:(id)arg3;	// IMP=0x001000000002e507
+ (id)_appTombstoneFromCoreDataChange:(id)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x001000000002e284
+ (id)_appFromCoreDataChange:(id)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x001000000002de5b
+ (id)_allInstalledAppsForUserDeviceState:(id)arg1 inContext:(id)arg2;	// IMP=0x001000000002db87
+ (id)_localDeviceFromPrimitives:(id)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x001000000002d9c8
+ (id)_deviceWithID:(id)arg1 associatedUser:(id)arg2 inContext:(id)arg3;	// IMP=0x001000000002d479
+ (id)handleDeviceStateChange:(id)arg1 deviceInformationPrimitives:(id)arg2 container:(id)arg3;	// IMP=0x001000000002cc5c
+ (id)deviceStateChangeForLocalDeviceUsingDeviceInformationPrimitives:(id)arg1 persistentContainer:(id)arg2;	// IMP=0x001000000002c666
+ (id)deviceStateChangeForCoreDataChanges:(id)arg1 deviceInformationPrimitives:(id)arg2 container:(id)arg3 error:(id *)arg4;	// IMP=0x001000000002ba79

@end

