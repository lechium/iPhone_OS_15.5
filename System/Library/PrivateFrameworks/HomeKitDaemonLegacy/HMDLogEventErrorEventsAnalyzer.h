//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMDLogEventDailyProvider-Protocol.h>

@class HMDEventCountersManager, NSArray, NSString;
@protocol HMMLogEventSubmitting;

@interface HMDLogEventErrorEventsAnalyzer <HMDLogEventDailyProvider>
{
    HMDEventCountersManager *_eventCountersManager;	// 8 = 0x8
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 16 = 0x10
}

+ (id)managedEventCounterRequestGroups;	// IMP=0x0000000000ab21b7
+ (id)errorEventsRequestGroupKeys;	// IMP=0x0000000000ab2187
- (void).cxx_destruct;	// IMP=0x0000000000ab2140
@property(readonly, nonatomic) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly, nonatomic) HMDEventCountersManager *eventCountersManager; // @synthesize eventCountersManager=_eventCountersManager;
@property(readonly, nonatomic) NSArray *logEventProviderDailySubmissionBlocks;
- (void)resetEventCountersForAllErrorEventRequestGroups;	// IMP=0x0000000000ab1e44
- (void)submitErrorAggregationLogEventsForErrorEventGroup:(id)arg1;	// IMP=0x0000000000ab1b98
- (void)submitAllFormattedErrorAggregationLogEvents;	// IMP=0x0000000000ab17f2
- (id)currentErrorEventsAnalyzedSummary;	// IMP=0x0000000000ab1488
- (void)_handleCloudShareTrustManagerFailureLogEvent:(id)arg1;	// IMP=0x0000000000ab1334
- (void)_handleAccessoryPairingLogEvent:(id)arg1;	// IMP=0x0000000000ab109b
- (void)_handleReadWriteLogEvent:(id)arg1;	// IMP=0x0000000000ab0f2a
- (id)eventCounterRequestGroupNameForLogEvent:(id)arg1 underlyingError:(_Bool)arg2;	// IMP=0x0000000000ab0a27
- (id)eventCounterRequestGroupNameForLogEvent:(id)arg1;	// IMP=0x0000000000ab0a13
- (id)eventCounterNameForError:(id)arg1;	// IMP=0x0000000000ab0930
- (void)didReceiveEventFromDispatcher:(id)arg1;	// IMP=0x0000000000ab0596
- (id)initWithEventCountersManager:(id)arg1 logEventSubmitter:(id)arg2;	// IMP=0x0000000000ab04b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
