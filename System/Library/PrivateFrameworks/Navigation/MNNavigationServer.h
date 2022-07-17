//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Navigation/MNNavigationServiceClientInterface-Protocol.h>
#import <Navigation/NSXPCListenerDelegate-Protocol.h>

@class MNNavigationDetails, MNNavigationServiceLocalProxy, NSMutableSet, NSString, NSXPCListener;

@interface MNNavigationServer : NSObject <NSXPCListenerDelegate, MNNavigationServiceClientInterface>
{
    NSXPCListener *_listener;	// 8 = 0x8
    NSMutableSet *_peers;	// 16 = 0x10
    NSMutableSet *_unEntitledPeers;	// 24 = 0x18
    MNNavigationDetails *_details;	// 32 = 0x20
    MNNavigationServiceLocalProxy *_localProxy;	// 40 = 0x28
}

+ (id)sharedServer;	// IMP=0x000000000000981d
- (void).cxx_destruct;	// IMP=0x000000000000d31a
- (void)navigationServiceProxy:(id)arg1 didReceiveTransitAlert:(id)arg2;	// IMP=0x000000000000d26e
- (void)navigationServiceProxy:(id)arg1 didReceiveRealtimeUpdates:(id)arg2;	// IMP=0x000000000000d1c2
- (void)navigationServiceProxy:(id)arg1 willRequestRealtimeUpdatesForRouteIDs:(id)arg2;	// IMP=0x000000000000d116
- (void)navigationServiceProxy:(id)arg1 triggerHaptics:(int)arg2;	// IMP=0x000000000000d0ae
- (void)navigationServiceProxy:(id)arg1 didProcessSpeechEvent:(id)arg2;	// IMP=0x000000000000d002
- (void)navigationServiceProxy:(id)arg1 willProcessSpeechEvent:(id)arg2;	// IMP=0x000000000000cf56
- (void)navigationServiceProxy:(id)arg1 didChangeVoiceGuidanceLevel:(unsigned long long)arg2;	// IMP=0x000000000000ceec
- (void)navigationServiceProxy:(id)arg1 didStartUsingVoiceLanguage:(id)arg2;	// IMP=0x000000000000ce25
- (void)navigationServiceProxy:(id)arg1 didStartSpeakingPrompt:(id)arg2;	// IMP=0x000000000000cd79
- (void)navigationServiceProxy:(id)arg1 didActivateAudioSession:(_Bool)arg2;	// IMP=0x000000000000cd10
- (void)navigationServiceProxy:(id)arg1 didUpdateTracePlaybackDetails:(id)arg2;	// IMP=0x000000000000cc64
- (void)navigationServiceProxy:(id)arg1 didInvalidateTrafficIncidentAlert:(id)arg2;	// IMP=0x000000000000cb95
- (void)navigationServiceProxy:(id)arg1 didUpdateTrafficIncidentAlert:(id)arg2;	// IMP=0x000000000000cac6
- (void)navigationServiceProxy:(id)arg1 didReceiveTrafficIncidentAlert:(id)arg2;	// IMP=0x000000000000ca1a
- (void)navigationServiceProxy:(id)arg1 didUpdateAlternateRoutes:(id)arg2;	// IMP=0x000000000000c953
- (void)navigationServiceProxy:(id)arg1 didFailRerouteWithError:(id)arg2;	// IMP=0x000000000000c8a7
- (void)navigationServiceProxy:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;	// IMP=0x000000000000c7d4
- (void)navigationServiceProxy:(id)arg1 didUpdateRouteWithNewRideSelection:(id)arg2;	// IMP=0x000000000000c728
- (void)navigationServiceProxyDidCancelReroute:(id)arg1;	// IMP=0x000000000000c6f8
- (void)navigationServiceProxy:(id)arg1 didRerouteWithRoute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4;	// IMP=0x000000000000c5c2
- (void)navigationServiceProxyWillReroute:(id)arg1;	// IMP=0x000000000000c592
- (void)navigationServiceProxy:(id)arg1 didUpdatePreviewRoutes:(id)arg2 withSelectedRouteIndex:(unsigned long long)arg3;	// IMP=0x000000000000c4bd
- (void)navigationServiceProxy:(id)arg1 didUpdateMotionType:(unsigned long long)arg2 confidence:(unsigned long long)arg3;	// IMP=0x000000000000c44b
- (void)navigationServiceProxy:(id)arg1 didUpdateHeading:(double)arg2 accuracy:(double)arg3;	// IMP=0x000000000000c3d5
- (void)navigationServiceProxy:(id)arg1 didUpdateETAResponseForRoute:(id)arg2;	// IMP=0x000000000000c30e
- (void)navigationServiceProxy:(id)arg1 didUpdateDisplayETA:(id)arg2 remainingDistance:(id)arg3;	// IMP=0x000000000000c230
- (void)navigationServiceProxy:(id)arg1 didReceiveRouteSignalStrength:(unsigned long long)arg2;	// IMP=0x000000000000c1c6
- (void)navigationServiceProxy:(id)arg1 updatedGuidanceEventFeedback:(id)arg2;	// IMP=0x000000000000c11a
- (void)navigationServiceProxy:(id)arg1 newGuidanceEventFeedback:(id)arg2;	// IMP=0x000000000000c06e
- (void)navigationServiceProxy:(id)arg1 didEnableGuidancePrompts:(_Bool)arg2;	// IMP=0x000000000000bfdf
- (void)navigationServiceProxy:(id)arg1 hideJunctionViewForId:(id)arg2;	// IMP=0x000000000000bf33
- (void)navigationServiceProxy:(id)arg1 showJunctionView:(id)arg2;	// IMP=0x000000000000be87
- (void)navigationServiceProxy:(id)arg1 hideLaneDirectionsForId:(id)arg2;	// IMP=0x000000000000bddb
- (void)navigationServiceProxy:(id)arg1 showLaneDirections:(id)arg2;	// IMP=0x000000000000bd2f
- (void)navigationServiceProxy:(id)arg1 usePersistentDisplay:(_Bool)arg2;	// IMP=0x000000000000bcc6
- (void)navigationServiceProxy:(id)arg1 updateSignsWithARInfo:(id)arg2;	// IMP=0x000000000000bc1a
- (void)navigationServiceProxy:(id)arg1 updateSignsWithInfo:(id)arg2;	// IMP=0x000000000000bb6e
- (void)navigationServiceProxyEndGuidanceUpdate:(id)arg1;	// IMP=0x000000000000bb3e
- (void)navigationServiceProxyBeginGuidanceUpdate:(id)arg1;	// IMP=0x000000000000bb0e
- (void)navigationServiceProxyHideSecondaryStep:(id)arg1;	// IMP=0x000000000000bade
- (void)navigationServiceProxy:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6;	// IMP=0x000000000000b9bd
- (void)navigationServiceProxy:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;	// IMP=0x000000000000b953
- (void)navigationServiceProxy:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(_Bool)arg8;	// IMP=0x000000000000b81a
- (void)navigationServiceProxy:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;	// IMP=0x000000000000b7a6
- (void)navigationServiceProxy:(id)arg1 didUpdateDistanceUntilSign:(double)arg2 timeUntilSign:(double)arg3 forStepIndex:(unsigned long long)arg4;	// IMP=0x000000000000b6dc
- (void)navigationServiceProxy:(id)arg1 didUpdateProceedToRouteDistance:(double)arg2 displayString:(id)arg3 closestStepIndex:(unsigned long long)arg4;	// IMP=0x000000000000b5cf
- (void)navigationServiceProxyDidArrive:(id)arg1;	// IMP=0x000000000000b59f
- (void)navigationServiceProxyDidEnterPreArrivalState:(id)arg1;	// IMP=0x000000000000b56f
- (void)navigationServiceProxy:(id)arg1 didResumeNavigatingFromWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x000000000000b4b8
- (void)navigationServiceProxy:(id)arg1 didArriveAtWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x000000000000b401
- (void)navigationServiceProxy:(id)arg1 didEnterPreArrivalStateForWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x000000000000b34a
- (void)navigationServiceProxy:(id)arg1 didUpdateDistanceUntilManeuver:(double)arg2 timeUntilManeuver:(double)arg3 forStepIndex:(unsigned long long)arg4;	// IMP=0x000000000000b280
- (void)navigationServiceProxy:(id)arg1 didUpdateDisplayedStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;	// IMP=0x000000000000b1df
- (void)navigationServiceProxy:(id)arg1 didUpdateStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;	// IMP=0x000000000000b16d
- (void)navigationServiceProxy:(id)arg1 didUpdateMatchedLocation:(id)arg2;	// IMP=0x000000000000b0a6
- (void)navigationServiceProxy:(id)arg1 didChangeNavigationState:(int)arg2;	// IMP=0x000000000000b018
- (void)navigationServiceProxy:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000000000af6c
- (void)navigationServiceProxyWillResumeFromPauseNavigation:(id)arg1;	// IMP=0x000000000000af3c
- (void)navigationServiceProxyWillPauseNavigation:(id)arg1;	// IMP=0x000000000000af0c
- (void)navigationServiceProxy:(id)arg1 didUpdateNavigationDetails:(id)arg2;	// IMP=0x000000000000ae49
- (void)navigationServiceProxy:(id)arg1 didEndWithReason:(unsigned long long)arg2;	// IMP=0x000000000000addf
- (void)navigationServiceProxy:(id)arg1 willStartNavigationWithRoute:(id)arg2 navigationType:(int)arg3 request:(id)arg4 response:(id)arg5;	// IMP=0x000000000000ac0c
- (void)navigationServiceProxy:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x000000000000ab56
- (void)navigationServiceProxy:(id)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x000000000000aae4
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000000a1c8
- (void)_peerDidDisconnect:(id)arg1;	// IMP=0x000000000000a029
- (void)_enumerateRemoteObjectsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000009c9d
- (void)_defaultsDidChange;	// IMP=0x0000000000009c2d
- (void)_resetDetails;	// IMP=0x0000000000009b27
- (void)dealloc;	// IMP=0x0000000000009a70
- (id)init;	// IMP=0x0000000000009872

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
