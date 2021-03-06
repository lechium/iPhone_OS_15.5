//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TrialServer/TRIMetricsProviding-Protocol.h>
#import <TrialServer/TRIRetryableTask-Protocol.h>

@class NSArray, NSDate, NSString, TRIRolloutDeployment, TRIRolloutTaskSupport;
@protocol TRITaskAttributing, TRITaskQueueStateProviding;

@interface TRIFetchSingleRolloutNotificationTask <TRIRetryableTask, TRIMetricsProviding>
{
    TRIRolloutDeployment *_deployment;	// 8 = 0x8
    id <TRITaskAttributing> _taskAttributing;	// 16 = 0x10
    TRIRolloutTaskSupport *_support;	// 24 = 0x18
    _Bool wasDeferred;	// 32 = 0x20
    int retryCount;	// 36 = 0x24
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000064244
+ (id)parseFromData:(id)arg1;	// IMP=0x0000000000063d66
+ (id)taskWithDeployment:(id)arg1 taskAttributing:(id)arg2;	// IMP=0x00000000000625c5
- (void).cxx_destruct;	// IMP=0x0000000000064450
@property(nonatomic) _Bool wasDeferred; // @synthesize wasDeferred;
@property(nonatomic) int retryCount; // @synthesize retryCount;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000064320
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006424c
@property(readonly, copy) NSString *description;
- (unsigned long long)requiredCapabilities:(id)arg1;	// IMP=0x0000000000064133
- (id)serialize;	// IMP=0x0000000000063c78
- (id)_asPersistedTask;	// IMP=0x0000000000063b88
- (id)trialSystemTelemetry;	// IMP=0x0000000000063b6b
- (id)metrics;	// IMP=0x0000000000063b4e
- (id)dimensions;	// IMP=0x0000000000063b31
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000639d1
- (id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2;	// IMP=0x00000000000627c2
- (void)runDequeueHandlerUsingContext:(id)arg1;	// IMP=0x00000000000626d3
- (void)runEnqueueHandlerUsingContext:(id)arg1;	// IMP=0x0000000000062631
- (id)initWithDeployment:(id)arg1 taskAttributing:(id)arg2;	// IMP=0x00000000000623b0
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

