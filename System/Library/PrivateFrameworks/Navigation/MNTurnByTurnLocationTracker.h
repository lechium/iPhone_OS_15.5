//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Navigation/MNArrivalUpdaterDelegate-Protocol.h>
#import <Navigation/MNEVChargingStateMonitorDelegate-Protocol.h>

@class GEODirectionsRequest, GEONavigationMapMatcher, GEOPathMatcher, MNArrivalUpdater, MNEVChargingStateMonitor, MNLocation, NSData, NSDate, NSMutableArray, NSString, NSTimer;
@protocol GEODirectionServiceTicket;

@interface MNTurnByTurnLocationTracker <MNArrivalUpdaterDelegate, MNEVChargingStateMonitorDelegate>
{
    GEONavigationMapMatcher *_mapMatcher;	// 8 = 0x8
    MNArrivalUpdater *_arrivalUpdater;	// 16 = 0x10
    unsigned long long _lastArrivalLegIndex;	// 24 = 0x18
    NSDate *_startDate;	// 32 = 0x20
    CDStruct_2c43369c _originCoordinate;	// 40 = 0x28
    id <GEODirectionServiceTicket> _rerouteTicket;	// 56 = 0x38
    GEODirectionsRequest *_request;	// 64 = 0x40
    NSData *_serverSessionState;	// 72 = 0x48
    unsigned long long _rerouteReason;	// 80 = 0x50
    long long _responseErrorCode;	// 88 = 0x58
    unsigned long long _responseErrorCount;	// 96 = 0x60
    unsigned long long _recalculationNetworkUnreachableCount;	// 104 = 0x68
    NSTimer *_recalculationRetryTimer;	// 112 = 0x70
    MNLocation *_previousRerouteLocation;	// 120 = 0x78
    NSMutableArray *_rerouteDates;	// 128 = 0x80
    unsigned long long _consecutiveOffRouteCount;	// 136 = 0x88
    MNLocation *_lastKnownGoodLocationOnRoute;	// 144 = 0x90
    _Bool _isNavigatingInLowGuidance;	// 152 = 0x98
    MNEVChargingStateMonitor *_evChargingStateMonitor;	// 160 = 0xa0
    GEOPathMatcher *_pathMatcher;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x000000000007f29f
@property(copy, nonatomic) NSData *serverSessionState; // @synthesize serverSessionState=_serverSessionState;
- (void)evChargingStateMonitor:(id)arg1 didChangeChargingState:(_Bool)arg2;	// IMP=0x000000000007f210
- (void)evChargingStateMonitor:(id)arg1 didReachTargetBatteryCharge:(id)arg2;	// IMP=0x000000000007f1bf
- (void)evChargingStateMonitorShouldShowChargingInfo:(id)arg1;	// IMP=0x000000000007f034
- (void)arrivalUpdaterDidTimeoutInArrivalRegion:(id)arg1;	// IMP=0x000000000007ef73
- (void)arrivalUpdater:(id)arg1 didEnterPreArrivalStateForLegIndex:(unsigned long long)arg2;	// IMP=0x000000000007ecbe
- (void)arrivalUpdater:(id)arg1 didArriveAtEndOfLegAtIndex:(unsigned long long)arg2;	// IMP=0x000000000007eae2
- (void)arrivalUpdater:(id)arg1 isApproachingEndOfLegAtIndex:(unsigned long long)arg2;	// IMP=0x000000000007e972
- (void)forceOnRoute:(id)arg1 atLocation:(id)arg2;	// IMP=0x000000000007e895
- (void)_setIsNavigatingInLowGuidance:(_Bool)arg1;	// IMP=0x000000000007e885
- (id)_alternateRouteForOffRouteLocation:(id)arg1;	// IMP=0x000000000007e87d
- (_Bool)_allowSwitchToTransportType:(int)arg1 forLocation:(id)arg2;	// IMP=0x000000000007e875
- (int)_detectedMotionForLocation:(id)arg1;	// IMP=0x000000000007e86a
- (void)_startMonitoringBatteryChargeForLegIndex:(unsigned long long)arg1;	// IMP=0x000000000007e5a7
- (void)_updateForDepartureAtLegIndex:(unsigned long long)arg1;	// IMP=0x000000000007e249
- (void)_updateForArrivalAtLegIndex:(unsigned long long)arg1;	// IMP=0x000000000007df87
- (void)_updateForReroute:(id)arg1 rerouteReason:(unsigned long long)arg2 request:(id)arg3 response:(id)arg4;	// IMP=0x000000000007dea2
- (void)_updateForLocation:(id)arg1;	// IMP=0x000000000007de9c
- (id)_overrideLocationForLocation:(id)arg1;	// IMP=0x000000000007de8f
- (id)_newMapMatcherForRoute:(id)arg1;	// IMP=0x000000000007dd48
- (void)traceJumpedInTime;	// IMP=0x000000000007dcbc
- (id)_matchedLocationForLocation:(id)arg1;	// IMP=0x000000000007d6a5
- (void)updateLocation:(id)arg1;	// IMP=0x000000000007d469
- (void)stopTracking;	// IMP=0x000000000007d37b
- (void)startTracking;	// IMP=0x000000000007d19b
- (_Bool)isRerouting;	// IMP=0x000000000007d186
- (_Bool)_allowRerouteForLocation:(id)arg1 outError:(out id *)arg2;	// IMP=0x000000000007ca7e
- (void)_failedToRecalculateRouteWithError:(id)arg1;	// IMP=0x000000000007c858
- (void)_recalculationRetryTimerFired:(id)arg1;	// IMP=0x000000000007c79a
- (void)_retryLastRouteRecalculation;	// IMP=0x000000000007c57c
- (void)_reroute:(id)arg1 rerouteReason:(unsigned long long)arg2 request:(id)arg3 response:(id)arg4;	// IMP=0x000000000007bf00
- (void)_requestDirectionsForLocation:(id)arg1 destination:(id)arg2 transportType:(int)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000000007bc79
- (void)_handleOffRouteForLocation:(id)arg1;	// IMP=0x000000000007adac
- (void)_submitRerouteTicketWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000007a9d2
- (id)_ticketForNewDestination:(id)arg1 fromLocation:(id)arg2 transportType:(int)arg3;	// IMP=0x0000000000079c72
- (id)_rerouteTicketForLocation:(id)arg1 transportType:(int)arg2;	// IMP=0x0000000000078cf5
- (void)_sendRouteHintForLocation:(id)arg1;	// IMP=0x00000000000781c9
- (int)_routeHintTypeForTransportType:(int)arg1;	// IMP=0x00000000000781aa
- (_Bool)_isCameraTestMode;	// IMP=0x00000000000780d8
- (_Bool)_isRoadFeatureInOppositeDirection:(id)arg1 ofCoordinate:(CDStruct_c3b9c2ee)arg2 course:(double)arg3;	// IMP=0x0000000000077c96
- (_Bool)_hasArrivedAtFinalDestination;	// IMP=0x0000000000077b56
- (id)_matchedLocationForMatchResult:(id)arg1 originalLocation:(id)arg2;	// IMP=0x0000000000076e9d
- (_Bool)_shouldAdvanceGuidanceToRouteMatch:(id)arg1;	// IMP=0x0000000000076d94
- (void)_updateSwitchTransportTypeForLocation:(id)arg1;	// IMP=0x0000000000076648
- (void)_updateStateForLocation:(id)arg1;	// IMP=0x00000000000762fe
- (void)reroute:(id)arg1 reason:(unsigned long long)arg2;	// IMP=0x00000000000762e6
- (void)forceReroute;	// IMP=0x0000000000075c34
- (void)updateDestination:(id)arg1 finishedHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000007564b
- (void)dealloc;	// IMP=0x00000000000755bb
- (id)initWithNavigationSession:(id)arg1;	// IMP=0x000000000007531d
- (id)initForTestingWithRoute:(id)arg1;	// IMP=0x0000000000075240

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
