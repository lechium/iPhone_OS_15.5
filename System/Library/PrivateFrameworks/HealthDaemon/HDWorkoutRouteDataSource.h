//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDLocationEventDelegate-Protocol.h>
#import <HealthDaemon/HDWorkoutDataSource-Protocol.h>
#import <HealthDaemon/HDWorkoutSessionObserver-Protocol.h>
#import <HealthDaemon/HKDataFlowLinkProcessor-Protocol.h>
#import <HealthDaemon/HKWorkoutRouteDataSourceServerInterface-Protocol.h>

@class HDLocationDataCollector, HDWorkoutSessionServer, HKDataFlowLink, HKQuantity, HKUnit, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HDWorkoutRouteDataSource <HDWorkoutSessionObserver, HDLocationEventDelegate, HKDataFlowLinkProcessor, HKWorkoutRouteDataSourceServerInterface, HDWorkoutDataSource>
{
    HDWorkoutSessionServer *_sessionServer;	// 8 = 0x8
    HDLocationDataCollector *_locationDataCollector;	// 16 = 0x10
    HKDataFlowLink *_workoutDataFlowLink;	// 24 = 0x18
    HKUnit *_elevationUnit;	// 32 = 0x20
    HKQuantity *_currentElevation;	// 40 = 0x28
    HKQuantity *_latestAltitude;	// 48 = 0x30
    NSUUID *_workoutUUID;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_queue;	// 64 = 0x40
}

+ (id)requiredEntitlements;	// IMP=0x000000000008e5ba
+ (id)taskIdentifier;	// IMP=0x000000000008e5a6
- (void).cxx_destruct;	// IMP=0x00000000000900a4
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)_unitTest_locationDataCollector;	// IMP=0x000000000008ff89
- (void)workoutDataDestination:(id)arg1 didUpdateConfiguration:(id)arg2;	// IMP=0x000000000008feff
- (void)workoutDataDestination:(id)arg1 requestsFinalDataFrom:(id)arg2 to:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000008fe5f
- (void)workoutDataDestination:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x000000000008fe59
- (void)workoutDataDestination:(id)arg1 requestsDataFrom:(id)arg2 to:(id)arg3;	// IMP=0x000000000008fb35
@property(readonly, copy) NSUUID *workoutDataProcessorUUID;
@property(readonly) HKDataFlowLink *workoutDataFlowLink;
- (void)connectionInvalidated;	// IMP=0x000000000008fa58
- (id)remoteInterface;	// IMP=0x000000000008fa3f
- (id)exportedInterface;	// IMP=0x000000000008fa26
- (id)_queue_createLocationDataCollectorWithActivityType:(unsigned long long)arg1 workoutUUID:(id)arg2;	// IMP=0x000000000008f938
- (void)_queue_setupLocationDataCollector;	// IMP=0x000000000008f64b
- (void)altitudeUpdated:(double)arg1;	// IMP=0x000000000008f259
- (void)workoutRouteUpdated:(id)arg1;	// IMP=0x000000000008ef20
- (void)elevationUpdated:(unsigned long long)arg1;	// IMP=0x000000000008eb2c
- (void)workoutSession:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000000008eb26
- (void)workoutSession:(id)arg1 didGenerateEvent:(id)arg2;	// IMP=0x000000000008eb20
- (void)workoutSession:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3 date:(id)arg4;	// IMP=0x000000000008ea5f
- (void)remote_setupWithSessionIdentifier:(id)arg1;	// IMP=0x000000000008e6ac
@property(readonly, copy) NSString *description;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;	// IMP=0x000000000008e4ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

