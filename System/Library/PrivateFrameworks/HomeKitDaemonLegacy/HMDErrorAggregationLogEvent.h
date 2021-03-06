//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

#import <HomeKitDaemonLegacy/HMMCoreAnalyticsLogging-Protocol.h>

@class NSDictionary, NSString;

@interface HMDErrorAggregationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>
{
    NSDictionary *_coreAnalyticsSerializedEvent;	// 8 = 0x8
}

+ (_Bool)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;	// IMP=0x0000000000ab04b0
+ (id)createErrorEventForRequestGroup:(id)arg1 errorString:(id)arg2 errorCount:(id)arg3;	// IMP=0x0000000000ab041b
+ (id)createSummaryEventForRequestGroup:(id)arg1 totalErrorCount:(id)arg2 totalEventCount:(id)arg3;	// IMP=0x0000000000ab037f
- (void).cxx_destruct;	// IMP=0x0000000000ab036c
@property(readonly, nonatomic) NSDictionary *coreAnalyticsSerializedEvent; // @synthesize coreAnalyticsSerializedEvent=_coreAnalyticsSerializedEvent;
@property(readonly, nonatomic) NSDictionary *serializedEvent;
@property(readonly, nonatomic) NSString *eventName;
- (id)initWithEventGroupName:(id)arg1 errorString:(id)arg2 errorCount:(id)arg3 eventCount:(id)arg4;	// IMP=0x0000000000ab0127

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryIdentifier;

@end

