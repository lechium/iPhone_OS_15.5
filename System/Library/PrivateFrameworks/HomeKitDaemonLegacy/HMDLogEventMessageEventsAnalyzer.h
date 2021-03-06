//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMDAggregationAnalysisEventContributing-Protocol.h>

@class HMDEventCountersManager, HMDEventFlagsManager, NSUserDefaults;
@protocol HMMLogEventSubmitting;

@interface HMDLogEventMessageEventsAnalyzer <HMDAggregationAnalysisEventContributing>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    double _lastRemoteMessageEventsPeriodicSubmissionTime;	// 16 = 0x10
    double _lastXPCMessageEventsPeriodicSubmissionTime;	// 24 = 0x18
    HMDEventFlagsManager *_eventFlagsManager;	// 32 = 0x20
    HMDEventCountersManager *_eventCountersManager;	// 40 = 0x28
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 48 = 0x30
    unsigned long long _periodicLoggingInterval;	// 56 = 0x38
    CDUnknownBlockType _dateFactory;	// 64 = 0x40
    NSUserDefaults *_userDefaults;	// 72 = 0x48
}

+ (id)managedEventCounterRequestGroups;	// IMP=0x0000000000209c39
- (void).cxx_destruct;	// IMP=0x0000000000209bbc
@property(retain) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(copy) CDUnknownBlockType dateFactory; // @synthesize dateFactory=_dateFactory;
@property(readonly) unsigned long long periodicLoggingInterval; // @synthesize periodicLoggingInterval=_periodicLoggingInterval;
@property(readonly, nonatomic) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly, nonatomic) HMDEventCountersManager *eventCountersManager; // @synthesize eventCountersManager=_eventCountersManager;
@property(readonly, nonatomic) HMDEventFlagsManager *eventFlagsManager; // @synthesize eventFlagsManager=_eventFlagsManager;
- (void)resetAggregationAnalysisContext;	// IMP=0x00000000002099e8
- (void)populateAggregationAnalysisLogEvent:(id)arg1;	// IMP=0x000000000020951c
@property double lastRemoteMessageEventsPeriodicSubmissionTime; // @synthesize lastRemoteMessageEventsPeriodicSubmissionTime=_lastRemoteMessageEventsPeriodicSubmissionTime;
@property double lastXPCMessageEventsPeriodicSubmissionTime; // @synthesize lastXPCMessageEventsPeriodicSubmissionTime=_lastXPCMessageEventsPeriodicSubmissionTime;
- (void)_handleXPCMessageCounterLogEvent:(id)arg1;	// IMP=0x0000000000209130
- (void)_updatePeriodicSubmissionGroupRemoteMessageEventCountersForMessageName:(id)arg1 peerInformation:(id)arg2 transportType:(int)arg3 messageDirectionSending:(_Bool)arg4 identifier:(id)arg5;	// IMP=0x0000000000208e8c
- (void)_updateDailySubmissionGroupRemoteMessageEventCountersForTransportType:(int)arg1 messageDirectionSending:(_Bool)arg2;	// IMP=0x0000000000208d9f
- (void)_handleRemoteMessageLogEvent:(id)arg1;	// IMP=0x0000000000208c74
- (id)periodicRemoteMessageCounterEventNameWithMessageName:(id)arg1 peerInformation:(id)arg2;	// IMP=0x0000000000208bdd
- (void)didReceiveEventFromDispatcher:(id)arg1;	// IMP=0x0000000000208aff
- (void)submitPeriodicRemoteMessageCountersLogEventIfNeeded;	// IMP=0x0000000000208846
- (void)submitPeriodicXPCMessageCountersLogEventIfNeeded;	// IMP=0x00000000002085ed
- (void)submitPeriodicAggregateCountersForRemoteMessageCounterRequestGroup:(id)arg1;	// IMP=0x00000000002081d3
- (id)messageDirectionStringForRemoteMessageCounterRequestGroup:(id)arg1;	// IMP=0x0000000000208096
- (id)transportTypeStringForRemoteMessageCounterRequestGroup:(id)arg1;	// IMP=0x0000000000207f40
- (void)submitPeriodicAggregateCountersForXPCMessageCounterRequestGroup:(id)arg1;	// IMP=0x0000000000207ace
- (id)initWithEventCountersManager:(id)arg1 eventFlagsManager:(id)arg2 logEventSubmitter:(id)arg3 userDefaults:(id)arg4;	// IMP=0x000000000020792b
- (id)initWithEventCountersManager:(id)arg1 eventFlagsManager:(id)arg2 logEventSubmitter:(id)arg3;	// IMP=0x0000000000207873

@end

