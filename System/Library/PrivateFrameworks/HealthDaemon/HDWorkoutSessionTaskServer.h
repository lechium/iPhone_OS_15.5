//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDWorkoutDataDestination-Protocol.h>
#import <HealthDaemon/HDWorkoutDataSource-Protocol.h>
#import <HealthDaemon/HDWorkoutSessionObserver-Protocol.h>
#import <HealthDaemon/HKDataFlowLinkProcessor-Protocol.h>
#import <HealthDaemon/HKWorkoutSessionServerInterface-Protocol.h>

@class HDWorkoutBuilderEntity, HDWorkoutSessionServer, HKDataFlowLink, HKSource, HKWorkoutSessionTaskConfiguration, NSObject, NSString, NSUUID;
@protocol HDWorkoutDataAccumulator, OS_dispatch_queue;

@interface HDWorkoutSessionTaskServer <HKWorkoutSessionServerInterface, HKDataFlowLinkProcessor, HDWorkoutDataSource, HDWorkoutDataDestination, HDWorkoutSessionObserver>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    HKWorkoutSessionTaskConfiguration *_taskConfiguration;	// 16 = 0x10
    HDWorkoutSessionServer *_sessionServer;	// 24 = 0x18
    HKDataFlowLink *_workoutDataFlowLink;	// 32 = 0x20
    HDWorkoutBuilderEntity *_builderEntity;	// 40 = 0x28
    HKSource *_clientSource;	// 48 = 0x30
    id <HDWorkoutDataAccumulator> _accumulator;	// 56 = 0x38
}

+ (id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000196405
+ (_Bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000196160
+ (Class)configurationClass;	// IMP=0x000000000019614f
+ (id)requiredEntitlements;	// IMP=0x0000000000196142
+ (id)taskIdentifier;	// IMP=0x000000000019612e
- (void).cxx_destruct;	// IMP=0x0000000000198048
@property(readonly, copy, nonatomic) HKSource *clientSource; // @synthesize clientSource=_clientSource;
- (void)connectionInvalidated;	// IMP=0x0000000000197ef9
- (id)remoteInterface;	// IMP=0x0000000000197ee0
- (id)exportedInterface;	// IMP=0x0000000000197ec7
- (void)workoutDataDestination:(id)arg1 didUpdateConfiguration:(id)arg2;	// IMP=0x0000000000197dca
- (void)workoutDataDestination:(id)arg1 requestsFinalDataFrom:(id)arg2 to:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000197c63
- (void)workoutDataDestination:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x0000000000197c5d
- (void)workoutDataDestination:(id)arg1 requestsDataFrom:(id)arg2 to:(id)arg3;	// IMP=0x0000000000197c40
@property(readonly, copy) NSUUID *workoutDataProcessorUUID;
@property(readonly) HKDataFlowLink *workoutDataFlowLink;
- (void)updateWorkoutConfiguration:(id)arg1 dataSource:(id)arg2;	// IMP=0x00000000001979b7
- (void)addMetadata:(id)arg1 dataSource:(id)arg2;	// IMP=0x0000000000197880
- (void)addWorkoutEvents:(id)arg1 dataSource:(id)arg2;	// IMP=0x000000000019761e
- (void)addSamples:(id)arg1 dataSource:(id)arg2;	// IMP=0x00000000001974e7
@property(readonly, nonatomic) id <HDWorkoutDataAccumulator> workoutDataAccumulator;
@property(readonly) unsigned long long workoutDataDestinationState;
- (void)workoutSession:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000000197356
- (void)workoutSession:(id)arg1 didGenerateEvent:(id)arg2;	// IMP=0x0000000000197350
- (void)workoutSession:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3 date:(id)arg4;	// IMP=0x000000000019714f
- (void)observeWorkoutSessionServer:(id)arg1;	// IMP=0x0000000000197129
- (void)remote_recoverWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000196dd8
- (void)remote_setTargetState:(long long)arg1 date:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001969ee
- (void)setWorkoutDataAccumulator:(id)arg1;	// IMP=0x0000000000196999
- (void)setAssociatedWorkoutBuilderEntity:(id)arg1;	// IMP=0x00000000001968c2
@property(readonly, nonatomic) _Bool supports3rdPartyAOT;
@property(readonly, nonatomic) _Bool shouldStopPreviousSession;
@property(readonly, nonatomic) _Bool supportsAppRelaunchForRecovery;
@property(readonly, nonatomic) _Bool requiresCoreLocationAssertion;
- (void)connectionConfigured;	// IMP=0x00000000001966e5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

