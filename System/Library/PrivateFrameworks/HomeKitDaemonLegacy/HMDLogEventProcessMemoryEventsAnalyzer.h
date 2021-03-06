//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMDAggregationAnalysisEventContributing-Protocol.h>

@class HMDEventCountersManager;

@interface HMDLogEventProcessMemoryEventsAnalyzer <HMDAggregationAnalysisEventContributing>
{
    HMDEventCountersManager *_eventCountersManager;	// 8 = 0x8
}

+ (id)managedEventCounterRequestGroups;	// IMP=0x00000000009209fb
- (void).cxx_destruct;	// IMP=0x00000000009209e8
@property(readonly) HMDEventCountersManager *eventCountersManager; // @synthesize eventCountersManager=_eventCountersManager;
- (void)resetAggregationAnalysisContext;	// IMP=0x000000000092098e
- (void)populateAggregationAnalysisLogEvent:(id)arg1;	// IMP=0x00000000009207ba
- (void)_handleMemorySampleLogEvent:(id)arg1;	// IMP=0x0000000000920617
- (void)_handleMemoryPressureNotificationLogEvent:(id)arg1;	// IMP=0x00000000009204c1
- (void)didReceiveEventFromDispatcher:(id)arg1;	// IMP=0x00000000009203e3
- (id)initWithEventCountersManager:(id)arg1;	// IMP=0x0000000000920375

@end

