//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

#import <HomeKitDaemon/HMDMetricsSerializable-Protocol.h>
#import <HomeKitDaemon/HMMCoreAnalyticsLogging-Protocol.h>

@class NSDictionary, NSString;

@interface HMDHouseholdDataLogEvent : HMMLogEvent <HMDMetricsSerializable, HMMCoreAnalyticsLogging>
{
    unsigned long long _requestCount;	// 8 = 0x8
    unsigned long long _activeDeviceCount;	// 16 = 0x10
}

+ (id)coalescedEventFromHouseholdDataLogEvents:(id)arg1;	// IMP=0x00000000001988eb
@property unsigned long long activeDeviceCount; // @synthesize activeDeviceCount=_activeDeviceCount;
@property unsigned long long requestCount; // @synthesize requestCount=_requestCount;
@property(readonly, nonatomic) NSDictionary *serializedEvent;
@property(readonly, nonatomic) NSString *eventName;
- (id)serializedMetric;	// IMP=0x0000000000198789
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000198632

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

