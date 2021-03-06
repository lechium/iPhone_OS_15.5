//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface AppUsageBaseManager : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
}

+ (id)appPlatformForAppPlatformType:(unsigned long long)arg1;	// IMP=0x004000000010fdd6
- (void).cxx_destruct;	// IMP=0x0020000000115c3f
- (_Bool)_isCandidateAppMetadata:(id)arg1 context:(id)arg2;	// IMP=0x0010000000115c24
- (id)_getCurrentAppsWithContext:(id)arg1;	// IMP=0x0010000000115ae2
- (id)getAppMetadataForBundleID:(id)arg1 connection:(id)arg2 context:(id)arg3;	// IMP=0x00100000001158e2
- (_Bool)writeAppMetadata:(id)arg1 context:(id)arg2;	// IMP=0x001000000011557c
- (_Bool)writeAppMetadataForBundleIDs:(id)arg1 context:(id)arg2;	// IMP=0x0010000000115245
- (_Bool)writeCurrentAppMetadata:(id)arg1;	// IMP=0x001000000011522e
- (_Bool)shouldEnableAppUsageMetricsForSession:(id)arg1 override:(id)arg2;	// IMP=0x0010000000115226
- (void)removeAppUsageSessiondForBundleID:(id)arg1 context:(id)arg2;	// IMP=0x0010000000114f4b
- (id)readCurrentApps:(id)arg1;	// IMP=0x0010000000114cd5
- (id)os;	// IMP=0x0010000000114ccd
- (_Bool)isCandidateAppProxy:(id)arg1 isMetadataLookup:(_Bool)arg2;	// IMP=0x0010000000114cc5
- (_Bool)isCandidateAppMetadata:(id)arg1;	// IMP=0x0010000000114cbd
- (id)hardwarePlatform;	// IMP=0x0010000000114cb5
- (id)hardwareModel;	// IMP=0x0010000000114ca8
- (id)hardwareFamily;	// IMP=0x0010000000114bbf
- (id)getAppUsageSessionForBundleID:(id)arg1 context:(id)arg2;	// IMP=0x001000000011450b
- (id)getLaunchAppEventsWithContext:(id)arg1;	// IMP=0x00100000001139f7
- (id)getDeletedAppsEventsWithContext:(id)arg1;	// IMP=0x0010000000112dbe
- (id)getPriorAppMetadataWithContext:(id)arg1;	// IMP=0x0010000000112b31
- (id)getAppEventsForType:(unsigned char)arg1 context:(id)arg2 orderingProperties:(id)arg3;	// IMP=0x00100000001126e9
- (id)getAppEventsForType:(unsigned char)arg1 context:(id)arg2;	// IMP=0x00100000001126d4
- (id)getAggregatedEventMap:(id)arg1 eventType:(unsigned char)arg2 context:(id)arg3;	// IMP=0x0010000000112066
- (void)decorateMetricsEvent:(id)arg1 context:(id)arg2;	// IMP=0x0010000000112060
- (id)createMetricsEventsForEventType:(unsigned char)arg1 events:(id)arg2 context:(id)arg3;	// IMP=0x0010000000111d41
- (id)createMetricsEventsForEventType:(unsigned char)arg1 context:(id)arg2;	// IMP=0x0010000000111d39
- (id)createMetricsEventFromAppMetadata:(id)arg1 eventType:(unsigned char)arg2 context:(id)arg3;	// IMP=0x00100000001118c7
- (id)createMetricsEventForAppEvent:(id)arg1 eventType:(unsigned char)arg2 context:(id)arg3;	// IMP=0x0010000000110ce5
- (id)createAppEventFromAppMetadata:(id)arg1;	// IMP=0x0010000000110cdd
- (id)createAppEventsForBundleIDs:(id)arg1 eventType:(unsigned char)arg2 installType:(unsigned char)arg3 connection:(id)arg4 context:(id)arg5;	// IMP=0x001000000011021d
- (id)createAggregateMetricsEventsForEventType:(unsigned char)arg1 events:(id)arg2 context:(id)arg3;	// IMP=0x001000000010fe48
- (id)init;	// IMP=0x001000000010fd54

@end

