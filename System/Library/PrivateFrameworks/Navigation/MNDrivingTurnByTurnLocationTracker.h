//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Navigation/MNTrafficIncidentAlertUpdaterDelegate-Protocol.h>
#import <Navigation/MNTunnelLocationProjectorDelegate-Protocol.h>

@class MNAlternateRoutesUpdater, MNTrafficIncidentAlertUpdater, MNTunnelLocationProjector, NSMutableArray, NSString;

@interface MNDrivingTurnByTurnLocationTracker <MNTrafficIncidentAlertUpdaterDelegate, MNTunnelLocationProjectorDelegate>
{
    MNTunnelLocationProjector *_tunnelLocationProjector;	// 8 = 0x8
    MNAlternateRoutesUpdater *_alternateRoutesUpdater;	// 16 = 0x10
    MNTrafficIncidentAlertUpdater *_trafficIncidentAlertUpdater;	// 24 = 0x18
    int _detectedTransportType;	// 32 = 0x20
    _Bool _exitedVehicle;	// 36 = 0x24
    unsigned long long _vehicleExitConfidence;	// 40 = 0x28
    CDStruct_2c43369c _vehicleExitCoordinate;	// 48 = 0x30
    NSMutableArray *_etauPositions;	// 64 = 0x40
    double _lastKnownCourse;	// 72 = 0x48
    double _consecutiveValidCourseCount;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000011de1
- (void)tunnelLocationProjector:(id)arg1 didUpdateLocation:(id)arg2;	// IMP=0x0000000000011d66
- (_Bool)trafficIncidentAlertUpdaterIsCurrentlySpeaking:(id)arg1;	// IMP=0x0000000000011d22
- (double)trafficIncidentAlertUpdaterTimeUntilNextAnnouncement:(id)arg1;	// IMP=0x0000000000011cd2
- (double)trafficIncidentAlertUpdaterTimeSinceLastAnnouncement:(id)arg1;	// IMP=0x0000000000011c82
- (void)trafficIncidentAlertUpdater:(id)arg1 didSwitchToNewRoute:(id)arg2 forAlert:(id)arg3;	// IMP=0x0000000000011914
- (void)trafficIncidentAlertUpdater:(id)arg1 updatedAlert:(id)arg2;	// IMP=0x000000000001189f
- (void)trafficIncidentAlertUpdater:(id)arg1 didDismissAlert:(id)arg2 withReroute:(_Bool)arg3;	// IMP=0x00000000000115c4
- (void)trafficIncidentAlertUpdater:(id)arg1 invalidatedAlert:(id)arg2;	// IMP=0x000000000001154f
- (void)trafficIncidentAlertUpdater:(id)arg1 receivedAlert:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;	// IMP=0x00000000000114c6
- (void)_updateForAlternateRoutes:(id)arg1;	// IMP=0x00000000000110b9
- (id)_alternateRouteForOffRouteLocation:(id)arg1;	// IMP=0x000000000001109c
- (_Bool)_allowSwitchToTransportType:(int)arg1 forLocation:(id)arg2;	// IMP=0x0000000000010e3f
- (int)_detectedMotionForLocation:(id)arg1;	// IMP=0x0000000000010bdb
- (void)_updateForArrivalAtLegIndex:(unsigned long long)arg1;	// IMP=0x0000000000010b6c
- (void)_updateForReroute:(id)arg1 rerouteReason:(unsigned long long)arg2 request:(id)arg3 response:(id)arg4;	// IMP=0x0000000000010975
- (void)_updateForLocation:(id)arg1;	// IMP=0x00000000000107ac
- (id)_overrideLocationForLocation:(id)arg1;	// IMP=0x00000000000105d2
- (id)_newMapMatcherForRoute:(id)arg1;	// IMP=0x000000000001055a
- (id)_matchedLocationForLocation:(id)arg1;	// IMP=0x0000000000010225
- (void)updateForETAUResponse:(id)arg1;	// IMP=0x000000000000f978
- (void)updateRequestForETAUpdate:(id)arg1;	// IMP=0x000000000000f822
- (void)stopTracking;	// IMP=0x000000000000f75e
- (void)startTracking;	// IMP=0x000000000000f41d
- (_Bool)shouldProjectAlongRoute;	// IMP=0x000000000000f415
- (int)transportType;	// IMP=0x000000000000f40d
- (id)initWithNavigationSession:(id)arg1;	// IMP=0x000000000000f39c
- (void)tracePaused;	// IMP=0x0000000000011e34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

