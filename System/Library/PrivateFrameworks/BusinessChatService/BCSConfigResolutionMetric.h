//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BusinessChatService/BCSConfigItemIdentifying-Protocol.h>
#import <BusinessChatService/BCSCoreAnalyticsEventDescribing-Protocol.h>
#import <BusinessChatService/BCSResolutionMetricProtocol-Protocol.h>

@class BCSFlagMeasurement, BCSTimingMeasurement, NSDictionary, NSString;

@interface BCSConfigResolutionMetric <BCSCoreAnalyticsEventDescribing, BCSConfigItemIdentifying, BCSResolutionMetricProtocol>
{
    BCSFlagMeasurement *cacheHitMeasurement;	// 32 = 0x20
    BCSTimingMeasurement *timingMeasurement;	// 40 = 0x28
    long long errorCode;	// 48 = 0x30
}

+ (id)metricForConfigType:(long long)arg1 postProcessingMetricHandlers:(id)arg2;	// IMP=0x00000000000613d3
- (void).cxx_destruct;	// IMP=0x00000000000614e2
@property(nonatomic) long long errorCode; // @synthesize errorCode;
@property(retain, nonatomic) BCSTimingMeasurement *timingMeasurement; // @synthesize timingMeasurement;
@property(retain, nonatomic) BCSFlagMeasurement *cacheHitMeasurement; // @synthesize cacheHitMeasurement;
@property(readonly, nonatomic) long long type;
@property(readonly, nonatomic) NSDictionary *coreAnalyticsPayload;
@property(readonly, nonatomic) NSString *coreAnalyticsEventName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

