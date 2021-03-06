//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BusinessChatService/BCSCoreAnalyticsEventDescribing-Protocol.h>
#import <BusinessChatService/BCSItemIdentifierProviding-Protocol.h>
#import <BusinessChatService/BCSResolutionMetricProtocol-Protocol.h>

@class BCSFlagMeasurement, BCSTimingMeasurement, NSDictionary, NSString;
@protocol BCSItemIdentifying;

@interface BCSItemResolutionMetric <BCSCoreAnalyticsEventDescribing, BCSItemIdentifierProviding, BCSResolutionMetricProtocol>
{
    BCSFlagMeasurement *cacheHitMeasurement;	// 32 = 0x20
    BCSTimingMeasurement *timingMeasurement;	// 40 = 0x28
    long long errorCode;	// 48 = 0x30
}

+ (id)metricForItemIdentifier:(id)arg1 postProcessingMetricHandlers:(id)arg2;	// IMP=0x0000000000061637
- (void).cxx_destruct;	// IMP=0x000000000006172a
@property(nonatomic) long long errorCode; // @synthesize errorCode;
@property(retain, nonatomic) BCSTimingMeasurement *timingMeasurement; // @synthesize timingMeasurement;
@property(retain, nonatomic) BCSFlagMeasurement *cacheHitMeasurement; // @synthesize cacheHitMeasurement;
@property(readonly, nonatomic) id <BCSItemIdentifying> itemIdentifier;
@property(readonly, nonatomic) NSDictionary *coreAnalyticsPayload;
@property(readonly, nonatomic) NSString *coreAnalyticsEventName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

