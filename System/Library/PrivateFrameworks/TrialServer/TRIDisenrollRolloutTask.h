//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TrialServer/TRIMetricsProviding-Protocol.h>
#import <TrialServer/TRITask-Protocol.h>

@class NSArray, NSDate, NSString, _PASLock;
@protocol TRITaskQueueStateProviding;

@interface TRIDisenrollRolloutTask <TRITask, TRIMetricsProviding>
{
    NSString *_rolloutId;	// 8 = 0x8
    _PASLock *_telemetry;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000094523
+ (id)parseFromData:(id)arg1;	// IMP=0x00000000000942f3
+ (id)taskWithRolloutId:(id)arg1;	// IMP=0x0000000000093505
- (void).cxx_destruct;	// IMP=0x00000000000946ef
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000945ff
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000009452b
@property(readonly, copy) NSString *description;
- (unsigned long long)requiredCapabilities:(id)arg1;	// IMP=0x00000000000944da
- (id)serialize;	// IMP=0x0000000000094205
- (id)_asPersistedTask;	// IMP=0x00000000000941c5
- (id)trialSystemTelemetry;	// IMP=0x00000000000940af
- (id)dimensions;	// IMP=0x00000000000940a7
- (id)metrics;	// IMP=0x000000000009409f
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000093fa7
- (id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2;	// IMP=0x00000000000935c4
@property(readonly, nonatomic) NSArray *tags;
@property(readonly, nonatomic) int taskType;
- (id)initWithRolloutId:(id)arg1;	// IMP=0x0000000000093386
- (id)init;	// IMP=0x0000000000093380

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) NSArray *dependencies;
@property(copy, nonatomic) NSDate *startTime;
@property(nonatomic) __weak id <TRITaskQueueStateProviding> stateProvider;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *taskName;

@end

