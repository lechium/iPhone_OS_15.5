//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TrialServer/TRIRetryableTask-Protocol.h>

@class NSArray, NSDate, NSString, TRIMetric, TRITaskOptions;
@protocol TRITaskQueueStateProviding;

@interface TRIActivateTreatmentTask <TRIRetryableTask>
{
    TRIMetric *_treatmentMetric;	// 8 = 0x8
    TRITaskOptions *_taskOptions;	// 16 = 0x10
    _Bool wasDeferred;	// 24 = 0x18
    int retryCount;	// 28 = 0x1c
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000545ed
+ (id)parseFromData:(id)arg1;	// IMP=0x0000000000053e0b
+ (id)taskWithExperiment:(id)arg1 treatmentId:(id)arg2 taskAttributing:(id)arg3 requiresTreatmentInstallation:(_Bool)arg4 startTime:(id)arg5 taskOptions:(id)arg6;	// IMP=0x000000000005130b
- (void).cxx_destruct;	// IMP=0x00000000000547f9
@property(nonatomic) _Bool wasDeferred; // @synthesize wasDeferred;
@property(nonatomic) int retryCount; // @synthesize retryCount;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000546c9
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000545f5
@property(readonly, copy) NSString *description;
- (unsigned long long)requiredCapabilities:(id)arg1;	// IMP=0x0000000000054496
- (id)serialize;	// IMP=0x0000000000053d1d
- (id)_asPersistedTask;	// IMP=0x0000000000053a79
- (id)metrics;	// IMP=0x00000000000539ce
- (id)runTaskUsingContext:(id)arg1 experiment:(id)arg2;	// IMP=0x0000000000051b3e
- (_Bool)_notifyUpdatedShadowEvaluationWithExperimentRecord:(id)arg1 context:(id)arg2;	// IMP=0x000000000005177b
- (id)_nextTasksForRunStatus:(int)arg1;	// IMP=0x0000000000051513
@property(readonly, nonatomic) int taskType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) NSArray *dependencies;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSDate *startTime;
@property(nonatomic) __weak id <TRITaskQueueStateProviding> stateProvider;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSArray *tags;
@property(readonly, nonatomic) NSString *taskName;

@end
