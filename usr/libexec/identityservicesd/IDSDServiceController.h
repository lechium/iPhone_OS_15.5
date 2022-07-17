//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSServiceProperties, NSArray, NSMapTable, NSMutableDictionary, NSSet;
@protocol OS_dispatch_queue;

@interface IDSDServiceController : NSObject
{
    NSMapTable *_services;	// 8 = 0x8
    NSMapTable *_servicesToNameMap;	// 16 = 0x10
    NSMapTable *_servicesToTopicMap;	// 24 = 0x18
    NSMutableDictionary *_deviceIDToSubServicesMap;	// 32 = 0x20
    NSSet *_allAdHocServices;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
}

+ (_Bool)shouldLoadService:(id)arg1;	// IMP=0x00400000006675b0
+ (id)sharedInstance;	// IMP=0x00100000006674f0
- (void).cxx_destruct;	// IMP=0x002000000066d9e0
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSSet *allAdHocServices; // @synthesize allAdHocServices=_allAdHocServices;
- (id)adHocServicesForIdentifier:(id)arg1;	// IMP=0x001000000066d320
- (id)primaryServiceForAdhocServiceType:(unsigned int)arg1;	// IMP=0x001000000066d190
- (id)linkedServicesForService:(id)arg1;	// IMP=0x001000000066cdd0
- (id)serviceWithPushTopic:(id)arg1;	// IMP=0x001000000066ccc0
- (id)serviceWithName:(id)arg1;	// IMP=0x001000000066cbb0
- (id)serviceWithIdentifier:(id)arg1;	// IMP=0x001000000066cb10
@property(readonly, nonatomic) __weak NSArray *allServicesStrings;
@property(readonly, nonatomic) __weak NSArray *allFamilyServices;
@property(readonly, nonatomic) __weak NSArray *allTinkerServices;
@property(readonly, nonatomic) __weak NSArray *allServices;
@property(readonly, nonatomic) NSSet *allPrimaryServices;
- (id)allServicesWithAdHocServiceType:(unsigned int)arg1;	// IMP=0x001000000066c620
- (id)_currentSubServicesForDevice:(id)arg1 superService:(id)arg2;	// IMP=0x001000000066c530
- (void)_updateSubServicesForDevice:(id)arg1 superService:(id)arg2 newSubservices:(id)arg3;	// IMP=0x001000000066c2d0
- (_Bool)_anyDeviceUsingSubService:(id)arg1 superService:(id)arg2;	// IMP=0x001000000066bd40
- (id)_combinedServicesForAllDevices;	// IMP=0x001000000066b7b0
- (void)_loadSubServices;	// IMP=0x001000000066a3f0
- (void)_saveSubServices;	// IMP=0x001000000066a170
- (void)updateSubServices:(id)arg1 forService:(id)arg2 deviceUniqueID:(id)arg3;	// IMP=0x0010000000668b90
- (void)_loadSubServiceWithName:(id)arg1 usingService:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000006687a0
- (void)_unloadServiceWithName:(id)arg1;	// IMP=0x0010000000668610
- (void)_loadService:(id)arg1;	// IMP=0x00100000006682c0
- (void)_loadServices;	// IMP=0x00100000006678c0
@property(readonly, nonatomic) IDSServiceProperties *iCloudService;
@property(readonly, nonatomic) IDSServiceProperties *iTunesService;
- (id)userDefaults;	// IMP=0x0010000000667460
- (id)serviceLoader;	// IMP=0x0010000000667430
- (id)init;	// IMP=0x00100000006672d0

@end
