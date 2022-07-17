//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HKWorkoutRouteBuilderServerInterface-Protocol.h>

@class HKWorkoutRoute, NSString;

@interface HDWorkoutRouteBuilderServer <HKWorkoutRouteBuilderServerInterface>
{
    HKWorkoutRoute *_route;	// 8 = 0x8
}

+ (id)taskIdentifier;	// IMP=0x000000000030e1d4
- (void).cxx_destruct;	// IMP=0x000000000030fd1f
@property(retain, nonatomic) HKWorkoutRoute *route; // @synthesize route=_route;
- (void)queue_recoverBuilder;	// IMP=0x000000000030fc9f
- (void)createSeriesSampleIfNeeded:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000030f8a2
- (id)seriesSample;	// IMP=0x000000000030f7bd
- (void)server_insertRouteData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000030ea0d
- (void)remote_finishRouteWithWorkout:(id)arg1 metadata:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000030e71a
- (void)remote_insertRouteData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000030e220
- (void)connectionInvalidated;	// IMP=0x000000000030e21a
- (id)remoteInterface;	// IMP=0x000000000030e201
- (id)exportedInterface;	// IMP=0x000000000030e1e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
