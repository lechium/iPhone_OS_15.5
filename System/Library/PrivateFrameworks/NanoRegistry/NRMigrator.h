//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NRDevice, NSArray;

@interface NRMigrator : NSObject
{
    _Bool _migrating;	// 8 = 0x8
    NRDevice *_migratingDevice;	// 16 = 0x10
}

+ (void)ingestPostRestoreMigrationDataForConsentedDevices:(id)arg1;	// IMP=0x000000000002ffc9
+ (id)migrationDataPreRestoreForConsentedDevices:(id)arg1;	// IMP=0x000000000002fbb5
+ (id)sharedMigrator;	// IMP=0x000000000002dda5
- (void).cxx_destruct;	// IMP=0x0000000000030b6d
@property(readonly, retain, nonatomic) NRDevice *migratingDevice; // @synthesize migratingDevice=_migratingDevice;
- (void)isPhoneReadyToMigrateDevice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000030ad9
- (void)enterPreMigrationMode;	// IMP=0x0000000000030ad3
- (id)lastMigrationRequestPhoneName;	// IMP=0x0000000000030a7c
- (void)beginMigrationWithDevice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000309f2
- (void)beginMigrationWithDevice:(id)arg1 passcode:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000030951
- (void)setMigrationConsented:(_Bool)arg1 forDeviceID:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000308bf
- (void)setMigrationConsented:(_Bool)arg1 forDevice:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000003080c
@property(readonly, retain, nonatomic) NSArray *migratableDevices;
@property(readonly, retain, nonatomic) NSArray *migratableDevicesRequiringConsent;
@property(readonly, retain, nonatomic) NSArray *devicesExpectedToBeMigratableAfterRestore;
@property(readonly, nonatomic) _Bool migrationIsAvailable;
- (id)migrationConsentRequestData;	// IMP=0x000000000002e872
- (id)devicesFromMigrationConsentRequestData:(id)arg1;	// IMP=0x000000000002dee0

@end

