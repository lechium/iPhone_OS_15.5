//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDMetricsDateProvider;
@protocol HMDHouseholdDataLogEventProviding, HMDHouseholdMetricsDataSource, HMDHouseholdMetricsMessaging, HMMLogEventSubmitting, OS_dispatch_queue;

@interface HMDHouseholdMetricsServer : NSObject
{
    id <HMDHouseholdMetricsDataSource> _dataSource;	// 8 = 0x8
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 16 = 0x10
    id <HMDHouseholdDataLogEventProviding> _householdDataProvider;	// 24 = 0x18
    id <HMDHouseholdMetricsMessaging> _remoteMessageDispatcher;	// 32 = 0x20
    HMDMetricsDateProvider *_dateProvider;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x000000000009a9dd
- (void).cxx_destruct;	// IMP=0x000000000009a5a2
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) HMDMetricsDateProvider *dateProvider; // @synthesize dateProvider=_dateProvider;
@property(readonly, nonatomic) __weak id <HMDHouseholdMetricsMessaging> remoteMessageDispatcher; // @synthesize remoteMessageDispatcher=_remoteMessageDispatcher;
@property(readonly, nonatomic) __weak id <HMDHouseholdDataLogEventProviding> householdDataProvider; // @synthesize householdDataProvider=_householdDataProvider;
@property(readonly, nonatomic) __weak id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly, nonatomic) __weak id <HMDHouseholdMetricsDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)runHouseholdMetricsDataCollection;	// IMP=0x0000000000099dfc
- (void)sendHouseholdMetricsCollectionRequestToDevices:(id)arg1 forHomeWithUUID:(id)arg2 associatedToDate:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000099819
- (_Bool)evaluateMetricResponsesForSubmission:(id)arg1;	// IMP=0x00000000000996bf
- (_Bool)evaluateHouseholdDataLogEventForSubmission:(id)arg1;	// IMP=0x00000000000996a2
- (id)initWithDataSource:(id)arg1 logEventSubmitter:(id)arg2 dateProvider:(id)arg3 householdDataProvider:(id)arg4 remoteMessageDispatcher:(id)arg5 workQueue:(id)arg6;	// IMP=0x0000000000099581

@end
