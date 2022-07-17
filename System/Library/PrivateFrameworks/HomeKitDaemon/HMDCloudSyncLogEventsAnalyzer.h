//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDAggregationAnalysisEventContributing-Protocol.h>

@class HMDEventCountersManager, HMDEventFlagsManager;
@protocol HMMLogEventSubmitting;

@interface HMDCloudSyncLogEventsAnalyzer <HMDAggregationAnalysisEventContributing>
{
    HMDEventCountersManager *_eventCountersManager;	// 8 = 0x8
    HMDEventFlagsManager *_eventFlagsManager;	// 16 = 0x10
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 24 = 0x18
    unsigned long long _dataSyncState;	// 32 = 0x20
}

+ (id)managedEventCounterRequestGroups;	// IMP=0x00000000008996cf
- (void).cxx_destruct;	// IMP=0x000000000089968d
@property unsigned long long dataSyncState; // @synthesize dataSyncState=_dataSyncState;
@property(readonly, nonatomic) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(retain, nonatomic) HMDEventFlagsManager *eventFlagsManager; // @synthesize eventFlagsManager=_eventFlagsManager;
@property(retain, nonatomic) HMDEventCountersManager *eventCountersManager; // @synthesize eventCountersManager=_eventCountersManager;
- (void)resetAggregationAnalysisContext;	// IMP=0x000000000089960a
- (void)populateAggregationAnalysisLogEvent:(id)arg1;	// IMP=0x0000000000899472
- (void)resetDataSource;	// IMP=0x000000000089929d
- (id)cloudSyncAnalysisResult;	// IMP=0x0000000000898c40
- (void)handleRecordOperationLogEvent:(id)arg1;	// IMP=0x0000000000898a9e
- (void)handleDataSyncStateEvent:(id)arg1;	// IMP=0x0000000000898a6a
- (void)handleDecryptionCompletedEvent:(id)arg1;	// IMP=0x0000000000898986
- (void)handleMaximumDelayLogEvent:(id)arg1;	// IMP=0x000000000089893b
- (void)handleUploadReasonLogEvent:(id)arg1;	// IMP=0x00000000008984c5
- (void)handleUploadLogEvent:(id)arg1;	// IMP=0x0000000000898174
- (void)handleFetchLogEvent:(id)arg1;	// IMP=0x0000000000897fe5
- (void)handleIncomingCloudPushLogEvent:(id)arg1;	// IMP=0x0000000000897f46
- (void)didReceiveEventFromDispatcher:(id)arg1;	// IMP=0x00000000008979b2
- (id)initWithEventCountersManager:(id)arg1 eventFlagsManager:(id)arg2 logEventSubmitter:(id)arg3;	// IMP=0x0000000000897859

@end
