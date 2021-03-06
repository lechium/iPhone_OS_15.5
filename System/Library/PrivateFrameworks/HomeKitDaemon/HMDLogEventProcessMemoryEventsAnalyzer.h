//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDAggregationAnalysisEventContributing-Protocol.h>

@class HMDEventCountersManager;

@interface HMDLogEventProcessMemoryEventsAnalyzer <HMDAggregationAnalysisEventContributing>
{
    HMDEventCountersManager *_eventCountersManager;	// 8 = 0x8
}

+ (id)managedEventCounterRequestGroups;	// IMP=0x00000000009d1159
- (void).cxx_destruct;	// IMP=0x00000000009d1146
@property(readonly) HMDEventCountersManager *eventCountersManager; // @synthesize eventCountersManager=_eventCountersManager;
- (void)resetAggregationAnalysisContext;	// IMP=0x00000000009d10ec
- (void)populateAggregationAnalysisLogEvent:(id)arg1;	// IMP=0x00000000009d0f18
- (void)_handleMemorySampleLogEvent:(id)arg1;	// IMP=0x00000000009d0d75
- (void)_handleMemoryPressureNotificationLogEvent:(id)arg1;	// IMP=0x00000000009d0c1f
- (void)didReceiveEventFromDispatcher:(id)arg1;	// IMP=0x00000000009d0b41
- (id)initWithEventCountersManager:(id)arg1;	// IMP=0x00000000009d0ad3

@end

