//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TrialServer/TRIMetricsProviding-Protocol.h>
#import <TrialServer/TRIRetryableTask-Protocol.h>

@class NSArray, NSDate, NSMutableArray, NSSet, NSString, _PASLock;
@protocol TRITaskAttributing, TRITaskQueueStateProviding;

@interface TRISelectRolloutNotificationListTask <TRIRetryableTask, TRIMetricsProviding>
{
    NSMutableArray *_nextTasks;	// 8 = 0x8
    id <TRITaskAttributing> _taskAttribution;	// 16 = 0x10
    _PASLock *_lock;	// 24 = 0x18
    _Bool wasDeferred;	// 32 = 0x20
    int retryCount;	// 36 = 0x24
    NSSet *_namespaceNames;	// 40 = 0x28
    NSSet *_excludedNamespaceNames;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000e402e
+ (id)parseFromData:(id)arg1;	// IMP=0x00000000000e3cd5
+ (id)taskWithNamespaceNames:(id)arg1 excludingNamespaces:(id)arg2 taskAttribution:(id)arg3;	// IMP=0x00000000000e0c03
+ (id)taskWithNamespaceNames:(id)arg1 taskAttribution:(id)arg2;	// IMP=0x00000000000e0b91
- (void).cxx_destruct;	// IMP=0x00000000000e425c
@property(readonly, nonatomic) NSSet *excludedNamespaceNames; // @synthesize excludedNamespaceNames=_excludedNamespaceNames;
@property(readonly, nonatomic) NSSet *namespaceNames; // @synthesize namespaceNames=_namespaceNames;
@property(nonatomic) _Bool wasDeferred; // @synthesize wasDeferred;
@property(nonatomic) int retryCount; // @synthesize retryCount;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e410a
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e4036
- (unsigned long long)requiredCapabilities:(id)arg1;	// IMP=0x00000000000e3fba
- (id)serialize;	// IMP=0x00000000000e3be7
- (id)_asPersistedTask;	// IMP=0x00000000000e3a12
- (id)trialSystemTelemetry;	// IMP=0x00000000000e39a4
- (id)dimensions;	// IMP=0x00000000000e3890
- (id)metrics;	// IMP=0x00000000000e377c
- (void)_addDimension:(id)arg1;	// IMP=0x00000000000e366b
- (void)_addMetric:(id)arg1;	// IMP=0x00000000000e355a
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e3292
- (id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2;	// IMP=0x00000000000e1df8
- (CDStruct_6b48f683)_processRolloutArtifact:(id)arg1 rolloutsProcessed:(id)arg2 remainingNamespaces:(id)arg3 targeter:(id)arg4 context:(id)arg5 taskQueue:(id)arg6;	// IMP=0x00000000000e0e0d
- (long long)nextTaskCount;	// IMP=0x00000000000e0df0
- (void)_addNextTask:(id)arg1;	// IMP=0x00000000000e0dd3
- (id)initWithNamespaceNames:(id)arg1 excludingNamespaces:(id)arg2 taskAttribution:(id)arg3;	// IMP=0x00000000000e0c98
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

