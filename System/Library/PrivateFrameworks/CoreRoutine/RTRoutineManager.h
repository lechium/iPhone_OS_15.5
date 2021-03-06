//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreRoutine/RTFrameworkProtocol-Protocol.h>

@class NSString, NSXPCConnection, RTEventAgentHelper, RTRoutineManagerRegistrantAction, RTRoutineManagerRegistrantScenarioTrigger, RTTokenBucket;
@protocol OS_dispatch_queue;

@interface RTRoutineManager : NSObject <RTFrameworkProtocol>
{
    _Bool _targetUserSession;	// 8 = 0x8
    NSXPCConnection *_xpcConnection;	// 16 = 0x10
    CDUnknownBlockType _visitHandler;	// 24 = 0x18
    CDUnknownBlockType _leechedVisitHandler;	// 32 = 0x20
    CDUnknownBlockType _leechedLowConfidenceVisitHandler;	// 40 = 0x28
    CDUnknownBlockType _vehicleEventsHandler;	// 48 = 0x30
    NSString *_restorationIdentifier;	// 56 = 0x38
    RTEventAgentHelper *_eventAgentHelper;	// 64 = 0x40
    RTTokenBucket *_clientThrottle;	// 72 = 0x48
    RTRoutineManagerRegistrantAction *_actionRegistrant;	// 80 = 0x50
    RTRoutineManagerRegistrantScenarioTrigger *_scenarioTriggerRegistrant;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_queue;	// 96 = 0x60
}

+ (id)defaultManager;	// IMP=0x0000000000005c78
+ (id)modeOfTransportationToString:(long long)arg1;	// IMP=0x0000000000005c3e
+ (id)routineModeToString:(long long)arg1;	// IMP=0x0000000000005c13
- (void).cxx_destruct;	// IMP=0x000000000001421c
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) RTRoutineManagerRegistrantScenarioTrigger *scenarioTriggerRegistrant; // @synthesize scenarioTriggerRegistrant=_scenarioTriggerRegistrant;
@property(retain, nonatomic) RTRoutineManagerRegistrantAction *actionRegistrant; // @synthesize actionRegistrant=_actionRegistrant;
@property(retain, nonatomic) RTTokenBucket *clientThrottle; // @synthesize clientThrottle=_clientThrottle;
@property(nonatomic) _Bool targetUserSession; // @synthesize targetUserSession=_targetUserSession;
@property(retain, nonatomic) RTEventAgentHelper *eventAgentHelper; // @synthesize eventAgentHelper=_eventAgentHelper;
@property(retain, nonatomic) NSString *restorationIdentifier; // @synthesize restorationIdentifier=_restorationIdentifier;
@property(copy, nonatomic) CDUnknownBlockType vehicleEventsHandler; // @synthesize vehicleEventsHandler=_vehicleEventsHandler;
@property(copy, nonatomic) CDUnknownBlockType leechedLowConfidenceVisitHandler; // @synthesize leechedLowConfidenceVisitHandler=_leechedLowConfidenceVisitHandler;
@property(copy, nonatomic) CDUnknownBlockType leechedVisitHandler; // @synthesize leechedVisitHandler=_leechedVisitHandler;
@property(copy, nonatomic) CDUnknownBlockType visitHandler; // @synthesize visitHandler=_visitHandler;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)stopMonitoringNextPredictedLocationsOfInterest;	// IMP=0x00000000000140e3
- (void)userInteractionWithPredictedLocationOfInterest:(id)arg1 interaction:(unsigned long long)arg2 feedback:(id)arg3 geoMapItem:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000013e1b
- (void)userInteractionWithPredictedLocationOfInterest:(id)arg1 interaction:(unsigned long long)arg2 feedback:(id)arg3;	// IMP=0x0000000000013df5
- (void)fetchAutomaticVehicleEventDetectionSupportedWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013b7c
- (void)stopMonitoringVehicleEvents;	// IMP=0x0000000000013a8e
- (void)startMonitoringVehicleEventsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000138b8
- (void)onVehicleEvents:(id)arg1 error:(id)arg2;	// IMP=0x0000000000013811
- (void)engageInVehicleEventWithIdentifier:(id)arg1;	// IMP=0x00000000000136c6
- (void)updateVehicleEventWithIdentifier:(id)arg1 location:(id)arg2;	// IMP=0x000000000001356b
- (void)updateVehicleEventWithIdentifier:(id)arg1 geoMapItem:(id)arg2;	// IMP=0x00000000000133e7
- (void)updateVehicleEventWithIdentifier:(id)arg1 photo:(id)arg2;	// IMP=0x000000000001328c
- (void)updateVehicleEventWithIdentifier:(id)arg1 notes:(id)arg2;	// IMP=0x0000000000013105
- (void)clearAllVehicleEvents:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012f2e
- (void)clearAllVehicleEventsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012b87
- (void)clearAllVehicleEvents;	// IMP=0x0000000000012b73
- (void)vehicleEventAtLocation:(id)arg1 notes:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000012928
- (void)vehicleEventAtLocation:(id)arg1 notes:(id)arg2;	// IMP=0x0000000000012913
- (void)fetchLastVehicleEventsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001269a
- (void)extendLifetimeOfVisitsWithIdentifiers:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012426
- (void)extendLifetimeOfVisitWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000121bc
- (void)removeVisitWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000011f74
- (void)removeLocationOfInterestWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000011d2c
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(long long)arg2 customLabel:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000011a0c
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 customLabel:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001170a
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000011420
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 mapItem:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000111b3
- (void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(long long)arg2 mapItem:(id)arg3 customLabel:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000010ee5
- (void)addLocationOfInterestOfType:(long long)arg1 mapItem:(id)arg2 customLabel:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000010c5e
- (void)fetchLocationsOfInterestAssociatedToIdentifier:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000109a8
- (void)fetchAllLocationsOfInterestForSettingsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001068e
- (void)fetchLocationsOfInterestVisitedBetweenStartDate:(id)arg1 endDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001031c
- (void)fetchLocationsOfInterestVisitedSinceDate:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000010006
- (void)fetchLocationsOfInterestOfType:(long long)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000fd7f
- (void)fetchLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000faa5
- (void)fetchLocationOfInterestAtLocation:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000f7ef
- (void)fetchLocationOfInterestWithIdentifier:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000f539
- (void)fetchPredictedLocationsOfInterestBetweenStartDate:(id)arg1 endDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000f237
- (void)fetchPredictedExitDatesFromLocation:(id)arg1 onDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000ef35
- (void)fetchMonitoredScenarioTriggerTypesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000ecbc
- (void)onScenarioTrigger:(id)arg1 withError:(id)arg2;	// IMP=0x000000000000ebec
- (void)stopMonitoringScenarioTriggerOfType:(unsigned long long)arg1;	// IMP=0x000000000000e97c
- (void)startMonitoringScenarioTriggerOfType:(unsigned long long)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000e64c
- (void)fetchPathToDiagnosticFilesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e332
- (void)fetchFormattedPostalAddressesFromMeCard:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e154
- (void)fetchPlaceInferencesWithOptions:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000df08
- (void)fetchStoredVisitsWithOptions:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000dcfe
- (void)onLeechedLowConfidenceVisit:(id)arg1 withError:(id)arg2;	// IMP=0x000000000000dc57
- (void)stopLeechingLowConfidenceVisits;	// IMP=0x000000000000d917
- (void)startLeechingLowConfidenceVisitsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000d681
- (void)onLeechedVisit:(id)arg1 withError:(id)arg2;	// IMP=0x000000000000d5da
- (void)stopLeechingVisits;	// IMP=0x000000000000d29a
- (void)startLeechingVisitsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000d004
- (void)onVisit:(id)arg1 withError:(id)arg2;	// IMP=0x000000000000cf5d
- (void)stopMonitoringVisits;	// IMP=0x000000000000cc1d
- (void)startMonitoringVisitsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000c987
- (void)fetchPredictedLocationsOfInterestOnDate:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c6d1
- (void)fetchPredictedLocationsOfInterestAssociatedToTitle:(id)arg1 location:(id)arg2 calendarIdentifier:(id)arg3 withHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000c2fe
- (void)fetchNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 withHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000c049
- (void)fetchNextPredictedLocationsOfInterestWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000bf56
- (void)fetchEstimatedLocationAtDate:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000bbcf
- (void)fetchEstimatedLocationAtDate:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000b888
- (void)fetchRoutineModeFromLocation:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000b560
- (void)enumerateStoredLocationsWithOptions:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000000aa03
- (void)enumerateObjectsWithOptions:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000009ca1
- (void)updateCloudSyncProvisionedForAccount:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000009999
- (void)fetchCloudSyncAuthorizationState:(CDUnknownBlockType)arg1;	// IMP=0x000000000000968c
- (void)clearRoutineWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000943e
- (void)setRoutineEnabled:(_Bool)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000091e4
- (void)setRoutineEnabled:(_Bool)arg1;	// IMP=0x00000000000091d0
- (void)fetchRoutineStateWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008e9d
- (void)fetchRoutineEnabledWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008a67
- (void)fetchTransitionsBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000849d
- (_Bool)selectorIsAllowed:(SEL)arg1;	// IMP=0x0000000000008489
- (id)_proxyForServicingSelector:(SEL)arg1 asynchronous:(_Bool)arg2 withErrorHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000008039
- (id)_proxyForServicingSelector:(SEL)arg1 withErrorHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000801f
- (void)handleDaemonStart;	// IMP=0x000000000000800d
- (void)createConnection;	// IMP=0x0000000000007f86
- (void)_createConnection;	// IMP=0x0000000000006177
- (void)dealloc;	// IMP=0x00000000000060f9
- (id)initWithTargetUserSession:(_Bool)arg1;	// IMP=0x00000000000060e3
- (id)initWithRestorationIdentifier:(id)arg1;	// IMP=0x00000000000060cf
- (id)init;	// IMP=0x00000000000060b9
- (id)initWithRestorationIdentifier:(id)arg1 targertUserSession:(_Bool)arg2;	// IMP=0x0000000000005ccd
- (void)performBluePOIQueryLookingBack:(double)arg1 lookingAhead:(double)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002a950
- (void)fetchCurrentPredictedLocationsOfInterestLookingBack:(double)arg1 lookingAhead:(double)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002a693

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

