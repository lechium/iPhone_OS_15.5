//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TrialServer/TRIMetricsProviding-Protocol.h>
#import <TrialServer/TRIRetryableTask-Protocol.h>

@class NSArray, NSDate, NSMutableArray, NSSet, NSString;
@protocol TRITaskAttributing, TRITaskQueueStateProviding;

@interface TRIFetchRolloutNotificationListTask <TRIRetryableTask, TRIMetricsProviding>
{
    NSMutableArray *_metrics;	// 8 = 0x8
    NSMutableArray *_dimensions;	// 16 = 0x10
    NSMutableArray *_nextTasks;	// 24 = 0x18
    NSDate *_startingFetchDateOverride;	// 32 = 0x20
    NSSet *_namespaceNames;	// 40 = 0x28
    id <TRITaskAttributing> _taskAttribution;	// 48 = 0x30
    _Bool wasDeferred;	// 56 = 0x38
    int retryCount;	// 60 = 0x3c
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000ac891
+ (id)parseFromData:(id)arg1;	// IMP=0x00000000000ac54d
+ (id)taskWithStartingFetchDateOverride:(id)arg1 namespaceNames:(id)arg2 taskAttribution:(id)arg3;	// IMP=0x00000000000aabae
- (void).cxx_destruct;	// IMP=0x00000000000aca9d
@property(nonatomic) _Bool wasDeferred; // @synthesize wasDeferred;
@property(nonatomic) int retryCount; // @synthesize retryCount;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ac96d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ac899
- (unsigned long long)requiredCapabilities:(id)arg1;	// IMP=0x00000000000ac81d
- (id)serialize;	// IMP=0x00000000000ac45f
- (id)_asPersistedTask;	// IMP=0x00000000000ac316
- (id)trialSystemTelemetry;	// IMP=0x00000000000ac2ef
- (id)dimensions;	// IMP=0x00000000000ac28c
- (id)metrics;	// IMP=0x00000000000ac229
- (void)_addDimension:(id)arg1;	// IMP=0x00000000000ac183
- (void)_addMetric:(id)arg1;	// IMP=0x00000000000ac0dd
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000abdfd
- (id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2;	// IMP=0x00000000000ab0b0
- (void)_processRolloutArtifact:(id)arg1 context:(id)arg2 taskQueue:(id)arg3;	// IMP=0x00000000000aad67
- (long long)nextTaskCount;	// IMP=0x00000000000aad4a
- (void)_addNextTask:(id)arg1;	// IMP=0x00000000000aad2d
- (id)initWithStartingFetchDateOverride:(id)arg1 namespaceNames:(id)arg2 taskAttribution:(id)arg3;	// IMP=0x00000000000aac43
@property(readonly, nonatomic) NSArray *tags;
@property(readonly, nonatomic) int taskType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) NSArray *dependencies;
@property(copy, nonatomic) NSDate *startTime;
@property(nonatomic) __weak id <TRITaskQueueStateProviding> stateProvider;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *taskName;

@end
