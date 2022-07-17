//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SASCloudKitClient;
@protocol OS_dispatch_queue;

@interface SASExpressCloudSettings : NSObject
{
    SASCloudKitClient *_cloudKitClient;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)_zoneForSettings;	// IMP=0x0000000000005620
+ (id)_predicateForRecordsModifiedInPastMonth;	// IMP=0x000000000000552d
+ (id)_queryForSettingsFromPastMonth;	// IMP=0x0000000000005421
+ (id)_queryForSettingsFromPastMonthForDeviceClass:(id)arg1;	// IMP=0x0000000000005285
+ (id)_queryForSettingsFromPastMonthForPlatform:(unsigned long long)arg1;	// IMP=0x00000000000050e9
+ (id)_queryForSettingsForDeviceID:(id)arg1;	// IMP=0x0000000000005078
+ (_Bool)_isCloudKitError:(id)arg1;	// IMP=0x0000000000005027
- (void).cxx_destruct;	// IMP=0x0000000000005686
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) SASCloudKitClient *cloudKitClient; // @synthesize cloudKitClient=_cloudKitClient;
- (void)_fetchAppropriateSettingsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000473b
- (id)_createSettingsRecordInZoneID:(id)arg1 forDeviceID:(id)arg2;	// IMP=0x0000000000004651
- (void)_setupRecordZoneWithName:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004384
- (void)fetchSettingsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000401a
- (void)updateSettings:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003659
- (void)setXpcActivity:(id)arg1;	// IMP=0x00000000000035e7
- (id)initWithContainerIdentifier:(id)arg1;	// IMP=0x0000000000003540
- (id)init;	// IMP=0x0000000000003527

@end
