//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSBagConsumer-Protocol.h>

@class AMSMetricsDatabaseDataSource, NSDate, NSString;
@protocol AMSBagProtocol, AMSMetricsBagContract, AMSMetricsFlushStrategy, OS_dispatch_queue;

@interface AMSMetrics : NSObject <AMSBagConsumer>
{
    _Bool _flushTimerEnabled;	// 8 = 0x8
    _Bool _flushingDisabled;	// 9 = 0x9
    _Bool _monitorsLifecycleEvents;	// 10 = 0xa
    _Bool _flushOnForeground;	// 11 = 0xb
    id <AMSBagProtocol> _bag;	// 16 = 0x10
    NSString *_containerId;	// 24 = 0x18
    long long _maxBatchSize;	// 32 = 0x20
    long long _maxRequestCount;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_completionQueue;	// 48 = 0x30
    id <AMSMetricsFlushStrategy> _currentFlushStrategy;	// 56 = 0x38
    AMSMetricsDatabaseDataSource *_databaseSource;	// 64 = 0x40
    long long _destination;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_engagementQueue;	// 80 = 0x50
    CDUnknownBlockType _flushIntervalBlock;	// 88 = 0x58
    NSDate *_flushIntervalStartTime;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_flushQueue;	// 104 = 0x68
}

+ (id)bagKeySet;	// IMP=0x0000000000194ceb
+ (id)sharedTimerQueue;	// IMP=0x0000000000194b6a
+ (id)createBagForSubProfile;	// IMP=0x0000000000192023
+ (id)bagSubProfileVersion;	// IMP=0x0000000000191fd3
+ (id)bagSubProfile;	// IMP=0x0000000000191f83
+ (double)timeIntervalFromServerTime:(id)arg1;	// IMP=0x0000000000191f65
+ (id)serverTimeFromTimeInterval:(double)arg1;	// IMP=0x0000000000191f3f
+ (id)serverTimeFromDate:(id)arg1;	// IMP=0x0000000000191f0e
+ (_Bool)recordAppAnalyticsForEvent:(id)arg1 bugType:(id)arg2;	// IMP=0x0000000000191f06
+ (void)setFlushTimerEnabled:(_Bool)arg1;	// IMP=0x000000000019184f
+ (void)setFlushDelayEnabled:(_Bool)arg1;	// IMP=0x0000000000191662
+ (void)setDisableBackgroundMetrics:(_Bool)arg1;	// IMP=0x0000000000191614
+ (_Bool)flushTimerEnabled;	// IMP=0x00000000001914c1
+ (_Bool)flushDelayEnabled;	// IMP=0x00000000001912e5
+ (_Bool)disableBackgroundMetrics;	// IMP=0x0000000000191179
+ (_Bool)diagnosticsSubmissionAllowed;	// IMP=0x0000000000191171
+ (_Bool)appAnalyticsAllowed;	// IMP=0x000000000019115b
+ (id)internalInstanceUsingBag:(id)arg1;	// IMP=0x0000000000190ee9
- (void).cxx_destruct;	// IMP=0x0000000000194ea2
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *flushQueue; // @synthesize flushQueue=_flushQueue;
@property(retain, nonatomic) NSDate *flushIntervalStartTime; // @synthesize flushIntervalStartTime=_flushIntervalStartTime;
@property(copy, nonatomic) CDUnknownBlockType flushIntervalBlock; // @synthesize flushIntervalBlock=_flushIntervalBlock;
@property(nonatomic) _Bool flushOnForeground; // @synthesize flushOnForeground=_flushOnForeground;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *engagementQueue; // @synthesize engagementQueue=_engagementQueue;
@property(nonatomic) long long destination; // @synthesize destination=_destination;
@property(retain, nonatomic) AMSMetricsDatabaseDataSource *databaseSource; // @synthesize databaseSource=_databaseSource;
@property(retain, nonatomic) id <AMSMetricsFlushStrategy> currentFlushStrategy; // @synthesize currentFlushStrategy=_currentFlushStrategy;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(nonatomic) _Bool monitorsLifecycleEvents; // @synthesize monitorsLifecycleEvents=_monitorsLifecycleEvents;
@property(nonatomic) long long maxRequestCount; // @synthesize maxRequestCount=_maxRequestCount;
@property(nonatomic) long long maxBatchSize; // @synthesize maxBatchSize=_maxBatchSize;
@property(readonly, nonatomic) NSString *containerId; // @synthesize containerId=_containerId;
@property(retain, nonatomic) id <AMSMetricsBagContract> bagContract;
- (id)initWithContainerId:(id)arg1 bagContract:(id)arg2;	// IMP=0x0000000000194beb
- (_Bool)_scheduledFlushAllowedForStyle:(long long)arg1;	// IMP=0x0000000000194ade
- (void)_handleFlushIntervalWithStyle:(long long)arg1;	// IMP=0x0000000000194264
- (void)_flushTimerEnabledChanged;	// IMP=0x000000000019424b
- (void)_flushIntervalInvalidate;	// IMP=0x0000000000194182
- (double)_flushIntervalForEvents:(id)arg1;	// IMP=0x0000000000193e5e
- (void)_beginFlushIntervalWithStyle:(long long)arg1 events:(id)arg2;	// IMP=0x0000000000193779
- (id)_flushDataSource:(id)arg1 topic:(id)arg2;	// IMP=0x0000000000192a6d
- (id)_enqueueFigaroEvents:(id)arg1;	// IMP=0x00000000001921cf
- (id)_determineFlushStrategyWithDataSource:(id)arg1 topic:(id)arg2;	// IMP=0x00000000001920bd
- (id)flushEvents:(id)arg1;	// IMP=0x0000000000191e7a
- (id)flushTopic:(id)arg1;	// IMP=0x0000000000191dfd
- (id)flush;	// IMP=0x0000000000191d9c
- (id)enqueueAsyncEvents:(id)arg1;	// IMP=0x0000000000191b3e
- (void)enqueueEvents:(id)arg1;	// IMP=0x0000000000191b23
- (void)enqueueEvent:(id)arg1;	// IMP=0x0000000000191a79
- (void)dropEvents;	// IMP=0x00000000001919c7
- (void)cancel;	// IMP=0x000000000019191d
@property(nonatomic) _Bool flushTimerEnabled; // @synthesize flushTimerEnabled=_flushTimerEnabled;
@property(nonatomic) _Bool flushingDisabled; // @synthesize flushingDisabled=_flushingDisabled;
@property(retain, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(readonly, nonatomic) long long eventCount;
- (void)dealloc;	// IMP=0x000000000019105d
- (id)initWithContainerID:(id)arg1 bag:(id)arg2;	// IMP=0x0000000000190baf
- (void)_applicationWillEnterForeground;	// IMP=0x0000000000194f17

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

