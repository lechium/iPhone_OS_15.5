//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TrialServer/TRIMetricsProviding-Protocol.h>
#import <TrialServer/TRIRetryableTask-Protocol.h>

@class NSArray, NSDate, NSString, TRIExperimentDeployment, TRIExperimentTaskSupport;
@protocol TRITaskAttributing, TRITaskQueueStateProviding;

@interface TRITargetingTask <TRIMetricsProviding, TRIRetryableTask>
{
    TRIExperimentTaskSupport *_support;	// 8 = 0x8
    _Bool _includeDependencies;	// 16 = 0x10
    id <TRITaskAttributing> _taskAttributing;	// 24 = 0x18
    _Bool wasDeferred;	// 32 = 0x20
    int retryCount;	// 36 = 0x24
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002e175
+ (id)parseFromData:(id)arg1;	// IMP=0x000000000002da68
+ (id)taskWithExperiment:(id)arg1 includeDependencies:(_Bool)arg2 taskAttribution:(id)arg3;	// IMP=0x00000000000289f2
+ (id)taskWithExperiment:(id)arg1 taskAttribution:(id)arg2;	// IMP=0x00000000000289d8
- (void).cxx_destruct;	// IMP=0x000000000002e381
@property(nonatomic) _Bool wasDeferred; // @synthesize wasDeferred;
@property(nonatomic) int retryCount; // @synthesize retryCount;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002e251
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002e17d
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002de67
- (id)serialize;	// IMP=0x000000000002d97a
- (id)_asPersistedTask;	// IMP=0x000000000002d835
- (id)trialSystemTelemetry;	// IMP=0x000000000002d818
- (id)dimensions;	// IMP=0x000000000002d7fb
- (id)metrics;	// IMP=0x000000000002d7de
- (id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2;	// IMP=0x000000000002d5ce
- (id)runTaskUsingContext:(id)arg1 withTaskQueue:(id)arg2 systemCovariates:(id)arg3 userCovariates:(id)arg4 error:(id *)arg5;	// IMP=0x000000000002a880
- (_Bool)_isRolloutV1For1PWithExperimentRecord:(id)arg1 context:(id)arg2;	// IMP=0x000000000002a626
- (_Bool)getTreatment:(id *)arg1 forExperiment:(id)arg2 isServerSideExperiment:(_Bool)arg3 systemCovariates:(id)arg4 userCovariates:(id)arg5 error:(id *)arg6;	// IMP=0x0000000000029873
- (_Bool)getTreatment:(id *)arg1 forExperiment:(id)arg2 isServerSideExperiment:(_Bool)arg3 paths:(id)arg4 error:(id *)arg5;	// IMP=0x00000000000296cd
- (_Bool)validateSystemCovariates:(id)arg1 experiment:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002944f
- (id)_targetingErrorWithExperiment:(id)arg1 errorType:(id)arg2;	// IMP=0x000000000002943a
- (id)_targetingErrorWithExperiment:(id)arg1 errorType:(id)arg2 details:(id)arg3;	// IMP=0x0000000000028fc1
- (id)systemCovariatesWithPaths:(id)arg1;	// IMP=0x0000000000028f74
- (void)runDequeueHandlerUsingContext:(id)arg1;	// IMP=0x0000000000028e67
- (void)runEnqueueHandlerUsingContext:(id)arg1;	// IMP=0x0000000000028daf
@property(readonly, nonatomic) NSArray *dependencies;
@property(readonly, nonatomic) NSArray *tags;
@property(readonly, nonatomic) TRIExperimentDeployment *experiment;
- (id)initWithExperiment:(id)arg1 includeDependencies:(_Bool)arg2 taskAttribution:(id)arg3;	// IMP=0x0000000000028a71
@property(readonly, nonatomic) int taskType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(copy, nonatomic) NSDate *startTime;
@property(nonatomic) __weak id <TRITaskQueueStateProviding> stateProvider;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *taskName;

@end

