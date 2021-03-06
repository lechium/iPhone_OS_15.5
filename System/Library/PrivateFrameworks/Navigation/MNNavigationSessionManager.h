//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Navigation/MNNavigationSessionObserver-Protocol.h>
#import <Navigation/MNNavigationTraceManagerDelegate-Protocol.h>
#import <Navigation/MNSessionUpdateManagerDelegate-Protocol.h>
#import <Navigation/MNUserOptionsObserver-Protocol.h>

@class GEOApplicationAuditToken, MNNavigationProxyUpdater, MNNavigationSession, MNNavigationTraceManager, MNRouteManager, MNSessionUpdateManager, MNSimulationLocationProvider, NSMutableDictionary, NSString;
@protocol MNNavigationSessionManagerDelegate;

@interface MNNavigationSessionManager : NSObject <MNSessionUpdateManagerDelegate, MNNavigationSessionObserver, MNUserOptionsObserver, MNNavigationTraceManagerDelegate>
{
    id <MNNavigationSessionManagerDelegate> _delegate;	// 8 = 0x8
    MNSessionUpdateManager *_updateManager;	// 16 = 0x10
    MNNavigationSession *_navigationSession;	// 24 = 0x18
    MNRouteManager *_routeManager;	// 32 = 0x20
    MNNavigationProxyUpdater *_proxyUpdater;	// 40 = 0x28
    MNNavigationTraceManager *_traceManager;	// 48 = 0x30
    MNSimulationLocationProvider *_simulationLocationProvider;	// 56 = 0x38
    NSMutableDictionary *_trafficIncidentAlertCallbacks;	// 64 = 0x40
    GEOApplicationAuditToken *_auditToken;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000f542a
@property(readonly, nonatomic) MNSimulationLocationProvider *simulationLocationProvider; // @synthesize simulationLocationProvider=_simulationLocationProvider;
@property(readonly, nonatomic) MNNavigationTraceManager *traceManager; // @synthesize traceManager=_traceManager;
@property(readonly, nonatomic) GEOApplicationAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(readonly, nonatomic) MNRouteManager *routeManager; // @synthesize routeManager=_routeManager;
@property(readonly, nonatomic) MNNavigationSession *navigationSession; // @synthesize navigationSession=_navigationSession;
@property(readonly, nonatomic) MNSessionUpdateManager *updateManager; // @synthesize updateManager=_updateManager;
@property(nonatomic) __weak id <MNNavigationSessionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)navigationTraceManagerDidFailToRecordTrace:(id)arg1;	// IMP=0x00000000000f53c1
- (void)navigationTraceManager:(id)arg1 didUpdateTracePlaybackDetails:(id)arg2;	// IMP=0x00000000000f5365
- (void)userOptionsEngine:(id)arg1 didChangeFrom:(id)arg2 to:(id)arg3;	// IMP=0x00000000000f5128
- (void)navigationSession:(id)arg1 didReceiveTransitAlert:(id)arg2;	// IMP=0x00000000000f50cc
- (void)navigationSession:(id)arg1 triggerHaptics:(int)arg2;	// IMP=0x00000000000f5087
- (void)navigationSession:(id)arg1 didProcessSpeechEvent:(id)arg2;	// IMP=0x00000000000f502b
- (void)navigationSession:(id)arg1 willProcessSpeechEvent:(id)arg2;	// IMP=0x00000000000f4fcf
- (void)navigationSession:(id)arg1 didStartSpeakingPrompt:(id)arg2;	// IMP=0x00000000000f4f73
- (void)navigationSession:(id)arg1 didActivateAudioSession:(_Bool)arg2;	// IMP=0x00000000000f4f6d
- (void)navigationSession:(id)arg1 didInvalidateTrafficIncidentAlert:(id)arg2;	// IMP=0x00000000000f4f11
- (void)navigationSession:(id)arg1 didUpdateTrafficIncidentAlert:(id)arg2;	// IMP=0x00000000000f4eb5
- (void)navigationSession:(id)arg1 didReceiveTrafficIncidentAlert:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;	// IMP=0x00000000000f4e01
- (void)navigationSession:(id)arg1 updatedGuidanceEventFeedback:(id)arg2;	// IMP=0x00000000000f4da5
- (void)navigationSession:(id)arg1 newGuidanceEventFeedback:(id)arg2;	// IMP=0x00000000000f4d49
- (void)navigationSession:(id)arg1 didEnableGuidancePrompts:(_Bool)arg2;	// IMP=0x00000000000f4d04
- (void)navigationSession:(id)arg1 hideJunctionViewForId:(id)arg2;	// IMP=0x00000000000f4ca8
- (void)navigationSession:(id)arg1 showJunctionView:(id)arg2;	// IMP=0x00000000000f4c4c
- (void)navigationSession:(id)arg1 hideLaneDirectionsForId:(id)arg2;	// IMP=0x00000000000f4bf0
- (void)navigationSession:(id)arg1 showLaneDirections:(id)arg2;	// IMP=0x00000000000f4b94
- (void)navigationSession:(id)arg1 usePersistentDisplay:(_Bool)arg2;	// IMP=0x00000000000f4b4f
- (void)navigationSession:(id)arg1 updateSignsWithARInfo:(id)arg2;	// IMP=0x00000000000f4af3
- (void)navigationSession:(id)arg1 updateSignsWithInfo:(id)arg2;	// IMP=0x00000000000f4a97
- (void)navigationSessionEndGuidanceUpdate:(id)arg1;	// IMP=0x00000000000f4a61
- (void)navigationSessionBeginGuidanceUpdate:(id)arg1;	// IMP=0x00000000000f4a2b
- (void)navigationSessionHideSecondaryStep:(id)arg1;	// IMP=0x00000000000f49f5
- (void)navigationSession:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6;	// IMP=0x00000000000f4943
- (void)navigationSession:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;	// IMP=0x00000000000f48fe
- (void)navigationSession:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(_Bool)arg8;	// IMP=0x00000000000f4836
- (void)navigationSession:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;	// IMP=0x00000000000f47e7
- (void)navigationSession:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilSign:(double)arg3 timeUntilSign:(double)arg4;	// IMP=0x00000000000f478b
- (void)navigationSession:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 closestStepIndex:(unsigned long long)arg4;	// IMP=0x00000000000f4718
- (void)navigationSession:(id)arg1 didUpdateAlternateRoutes:(id)arg2;	// IMP=0x00000000000f46bc
- (void)navigationSession:(id)arg1 didFailRerouteWithError:(id)arg2;	// IMP=0x00000000000f4660
- (void)navigationSession:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;	// IMP=0x00000000000f45f5
- (void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4 rerouteReason:(unsigned long long)arg5;	// IMP=0x00000000000f453a
- (void)navigationSessionDidCancelReroute:(id)arg1;	// IMP=0x00000000000f4504
- (void)navigationSessionWillReroute:(id)arg1;	// IMP=0x00000000000f44ce
- (void)navigationSession:(id)arg1 didUpdateMotionType:(unsigned long long)arg2 confidence:(unsigned long long)arg3;	// IMP=0x00000000000f4484
- (void)navigationSession:(id)arg1 didUpdateHeading:(double)arg2 accuracy:(double)arg3;	// IMP=0x00000000000f4432
- (void)navigationSession:(id)arg1 didUpdateETAResponseForRoute:(id)arg2;	// IMP=0x00000000000f43d6
- (void)navigationSession:(id)arg1 didUpdateDisplayETA:(id)arg2 remainingDistance:(id)arg3;	// IMP=0x00000000000f435a
- (void)navigationSession:(id)arg1 didReachETAUpdatePosition:(id)arg2;	// IMP=0x00000000000f4341
- (void)navigationSession:(id)arg1 didReceiveRouteSignalStrength:(unsigned long long)arg2;	// IMP=0x00000000000f42fc
- (void)navigationSessionWillResumeFromPause:(id)arg1;	// IMP=0x00000000000f42c6
- (void)navigationSessionWillPause:(id)arg1;	// IMP=0x00000000000f4290
- (void)navigationSessionDidArrive:(id)arg1;	// IMP=0x00000000000f425a
- (void)navigationSessionDidEnterPreArrivalState:(id)arg1;	// IMP=0x00000000000f4224
- (void)navigationSession:(id)arg1 didResumeNavigatingFromWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x00000000000f41b9
- (void)navigationSession:(id)arg1 didArriveAtWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x00000000000f414e
- (void)navigationSession:(id)arg1 didEnterPreArrivalStateForWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x00000000000f40e3
- (void)navigationSession:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;	// IMP=0x00000000000f4087
- (void)navigationSession:(id)arg1 matchedToStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;	// IMP=0x00000000000f403d
- (void)navigationSession:(id)arg1 didUpdateMatchedLocation:(id)arg2;	// IMP=0x00000000000f3fe1
- (void)navigationSession:(id)arg1 shouldEndWithReason:(unsigned long long)arg2;	// IMP=0x00000000000f3f9c
- (void)navigationSession:(id)arg1 didStopWithReason:(unsigned long long)arg2;	// IMP=0x00000000000f3f57
- (void)navigationSession:(id)arg1 didChangeNavigationState:(int)arg2;	// IMP=0x00000000000f3f12
- (id)userLocationForUpdateManager:(id)arg1;	// IMP=0x00000000000f3efc
- (id)routeInfoForUpdateManager:(id)arg1;	// IMP=0x00000000000f3ee6
- (_Bool)wantsETAUpdates;	// IMP=0x00000000000f3ed0
- (void)updateManager:(id)arg1 didReceiveETAResponse:(id)arg2;	// IMP=0x00000000000f3eba
- (void)updateManager:(id)arg1 willSendETARequest:(id)arg2;	// IMP=0x00000000000f3ea4
- (void)updateManager:(id)arg1 didReceiveTransitError:(id)arg2;	// IMP=0x00000000000f3e31
- (void)updateManager:(id)arg1 didReceiveTransitUpdates:(id)arg2;	// IMP=0x00000000000f3dd5
- (void)updateManager:(id)arg1 willSendTransitUpdateRequestForRouteIDs:(id)arg2;	// IMP=0x00000000000f3d79
- (void)updateManager:(id)arg1 didReceiveTransitUpdateResponse:(id)arg2;	// IMP=0x00000000000f3d06
- (void)updateManager:(id)arg1 willSendTransitUpdateRequests:(id)arg2;	// IMP=0x00000000000f3b23
- (void)resumeRealtimeUpdatesForSubscriber:(id)arg1;	// IMP=0x00000000000f3b0d
- (void)pauseRealtimeUpdatesForSubscriber:(id)arg1;	// IMP=0x00000000000f3af7
- (void)setIsNavigatingInLowGuidance:(_Bool)arg1;	// IMP=0x00000000000f3ab7
- (id)_traceManager;	// IMP=0x00000000000f3a68
- (id)_proxyUpdater;	// IMP=0x00000000000f3a2d
- (id)_routeManager;	// IMP=0x00000000000f39cd
- (void)recordPedestrianTracePath:(id)arg1;	// IMP=0x00000000000f390a
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;	// IMP=0x00000000000f36a0
- (void)setTracePosition:(double)arg1;	// IMP=0x00000000000f3639
- (void)setTracePlaybackSpeed:(double)arg1;	// IMP=0x00000000000f35e6
- (void)setTraceIsPlaying:(_Bool)arg1;	// IMP=0x00000000000f3588
- (void)acceptReroute:(_Bool)arg1 forTrafficIncidentAlert:(id)arg2;	// IMP=0x00000000000f33a4
- (void)enableNavigationCapability:(unsigned long long)arg1;	// IMP=0x00000000000f338e
- (void)disableNavigationCapability:(unsigned long long)arg1;	// IMP=0x00000000000f3378
- (void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;	// IMP=0x00000000000f3362
- (void)setRideIndex:(unsigned long long)arg1 forSegmentIndex:(unsigned long long)arg2;	// IMP=0x00000000000f31a9
- (void)setDisplayedStepIndex:(unsigned long long)arg1;	// IMP=0x00000000000f3112
- (void)setIsConnectedToCarplay:(_Bool)arg1;	// IMP=0x00000000000f30d2
- (void)setVoiceGuidanceLevel:(unsigned long long)arg1;	// IMP=0x00000000000f304c
- (unsigned long long)voiceGuidanceLevel;	// IMP=0x00000000000f3004
- (void)setGuidancePromptsEnabled:(_Bool)arg1;	// IMP=0x00000000000f2fee
- (void)stopCurrentGuidancePrompt;	// IMP=0x00000000000f2fd8
- (_Bool)vibrateForPrompt:(unsigned long long)arg1;	// IMP=0x00000000000f2e8a
- (_Bool)repeatCurrentTrafficAlert;	// IMP=0x00000000000f2d46
- (_Bool)repeatCurrentGuidance;	// IMP=0x00000000000f2c02
- (void)switchToRoute:(id)arg1;	// IMP=0x00000000000f27d7
- (void)forceReroute;	// IMP=0x00000000000f2693
- (void)resumeOriginalDestination;	// IMP=0x00000000000f254f
- (void)updateDestination:(id)arg1;	// IMP=0x00000000000f23ef
- (void)stopNavigationWithReason:(unsigned long long)arg1;	// IMP=0x00000000000f22f1
- (void)updateWithInitialLocation:(id)arg1;	// IMP=0x00000000000f22db
- (void)startNavigationWithDetails:(id)arg1;	// IMP=0x00000000000f1d41
- (void)updateForStartNavigation:(id)arg1;	// IMP=0x00000000000f18f4
- (void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;	// IMP=0x00000000000f1577
- (void)dealloc;	// IMP=0x00000000000f14e8
- (id)initWithAuditToken:(id)arg1;	// IMP=0x00000000000f140b
- (id)init;	// IMP=0x00000000000f13e1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

