//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Navigation/MNNavigationServiceProxy-Protocol.h>
#import <Navigation/MNNavigationSessionManagerDelegate-Protocol.h>
#import <Navigation/MNNavigationStateObserver-Protocol.h>

@class NSString;
@protocol MNNavigationServiceClientInterface;

__attribute__((visibility("hidden")))
@interface MNNavigationServiceLocalProxy : NSObject <MNNavigationStateObserver, MNNavigationSessionManagerDelegate, MNNavigationServiceProxy>
{
    id <MNNavigationServiceClientInterface> _delegate;	// 8 = 0x8
    unsigned long long _navigationServiceState;	// 16 = 0x10
    CDUnknownBlockType _navigationServiceActiveBlock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002553d
@property(nonatomic) __weak id <MNNavigationServiceClientInterface> delegate; // @synthesize delegate=_delegate;
- (void)navigationSessionManager:(id)arg1 didReceiveTransitAlert:(id)arg2;	// IMP=0x00000000000254ba
- (void)navigationSessionManager:(id)arg1 didReceiveTransitUpdates:(id)arg2;	// IMP=0x000000000002545e
- (void)navigationSessionManager:(id)arg1 willSendTransitUpdateRequestForRouteIDs:(id)arg2;	// IMP=0x0000000000025402
- (void)navigationSessionManager:(id)arg1 didUpdateTracePlaybackDetails:(id)arg2;	// IMP=0x00000000000253a6
- (void)navigationSessionManager:(id)arg1 triggerHaptics:(int)arg2;	// IMP=0x0000000000025361
- (void)navigationSessionManager:(id)arg1 didProcessSpeechEvent:(id)arg2;	// IMP=0x0000000000025305
- (void)navigationSessionManager:(id)arg1 willProcessSpeechEvent:(id)arg2;	// IMP=0x00000000000252a9
- (void)navigationSessionManager:(id)arg1 didChangeVoiceGuidanceLevel:(unsigned long long)arg2;	// IMP=0x0000000000025264
- (void)navigationSessionManager:(id)arg1 didStartUsingVoiceLanguage:(id)arg2;	// IMP=0x0000000000025208
- (void)navigationSessionManager:(id)arg1 didStartSpeakingPrompt:(id)arg2;	// IMP=0x00000000000251ac
- (void)navigationSessionManager:(id)arg1 didInvalidateTrafficIncidentAlert:(id)arg2;	// IMP=0x0000000000025150
- (void)navigationSessionManager:(id)arg1 didUpdateTrafficIncidentAlert:(id)arg2;	// IMP=0x00000000000250f4
- (void)navigationSessionManager:(id)arg1 didReceiveTrafficIncidentAlert:(id)arg2;	// IMP=0x0000000000025098
- (void)navigationSessionManager:(id)arg1 updatedGuidanceEventFeedback:(id)arg2;	// IMP=0x000000000002503c
- (void)navigationSessionManager:(id)arg1 newGuidanceEventFeedback:(id)arg2;	// IMP=0x0000000000024fe0
- (void)navigationSessionManager:(id)arg1 didEnableGuidancePrompts:(_Bool)arg2;	// IMP=0x0000000000024f9b
- (void)navigationSessionManager:(id)arg1 hideJunctionViewForId:(id)arg2;	// IMP=0x0000000000024f3f
- (void)navigationSessionManager:(id)arg1 showJunctionView:(id)arg2;	// IMP=0x0000000000024ee3
- (void)navigationSessionManager:(id)arg1 hideLaneDirectionsForId:(id)arg2;	// IMP=0x0000000000024e87
- (void)navigationSessionManager:(id)arg1 showLaneDirections:(id)arg2;	// IMP=0x0000000000024e2b
- (void)navigationSessionManager:(id)arg1 usePersistentDisplay:(_Bool)arg2;	// IMP=0x0000000000024de6
- (void)navigationSessionManager:(id)arg1 updateSignsWithARInfo:(id)arg2;	// IMP=0x0000000000024d8a
- (void)navigationSessionManager:(id)arg1 updateSignsWithInfo:(id)arg2;	// IMP=0x0000000000024d2e
- (void)navigationSessionManagerEndGuidanceUpdate:(id)arg1;	// IMP=0x0000000000024cf8
- (void)navigationSessionManagerBeginGuidanceUpdate:(id)arg1;	// IMP=0x0000000000024cc2
- (void)navigationSessionManagerHideSecondaryStep:(id)arg1;	// IMP=0x0000000000024c8c
- (void)navigationSessionManager:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6;	// IMP=0x0000000000024bda
- (void)navigationSessionManager:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;	// IMP=0x0000000000024b95
- (void)navigationSessionManager:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(_Bool)arg8;	// IMP=0x0000000000024acd
- (void)navigationSessionManager:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;	// IMP=0x0000000000024a7e
- (void)navigationSessionManager:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilSign:(double)arg3 timeUntilSign:(double)arg4;	// IMP=0x0000000000024a22
- (void)navigationSessionManager:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 closestStepIndex:(unsigned long long)arg4;	// IMP=0x00000000000249af
- (void)navigationSessionManager:(id)arg1 didUpdateAlternateRoutes:(id)arg2;	// IMP=0x0000000000024953
- (void)navigationSessionManager:(id)arg1 didFailRerouteWithError:(id)arg2;	// IMP=0x00000000000248f7
- (void)navigationSessionManager:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;	// IMP=0x000000000002488c
- (void)navigationSessionManager:(id)arg1 didUpdateRouteWithNewRideSelection:(id)arg2;	// IMP=0x0000000000024830
- (void)navigationSessionManagerDidCancelReroute:(id)arg1;	// IMP=0x00000000000247fa
- (void)navigationSessionManager:(id)arg1 didRerouteWithRoute:(id)arg2 location:(id)arg3 withAlternateRoutes:(id)arg4;	// IMP=0x000000000002475d
- (void)navigationSessionManagerWillReroute:(id)arg1;	// IMP=0x0000000000024727
- (void)navigationSessionManager:(id)arg1 didUpdatePreviewRoutes:(id)arg2 withSelectedRouteIndex:(unsigned long long)arg3;	// IMP=0x00000000000246bc
- (void)navigationSessionManager:(id)arg1 didUpdateMotionType:(unsigned long long)arg2 confidence:(unsigned long long)arg3;	// IMP=0x0000000000024672
- (void)navigationSessionManager:(id)arg1 didUpdateHeading:(double)arg2 accuracy:(double)arg3;	// IMP=0x0000000000024620
- (void)navigationSessionManager:(id)arg1 didUpdateETAResponseForRoute:(id)arg2;	// IMP=0x00000000000245c4
- (void)navigationSessionManager:(id)arg1 didUpdateDisplayETA:(id)arg2 remainingDistance:(id)arg3;	// IMP=0x0000000000024548
- (void)navigationSessionManager:(id)arg1 didReceiveRouteSignalStrength:(unsigned long long)arg2;	// IMP=0x0000000000024503
- (void)navigationSessionManagerWillResumeFromPause:(id)arg1;	// IMP=0x00000000000244cd
- (void)navigationSessionManagerWillPause:(id)arg1;	// IMP=0x0000000000024497
- (void)navigationSessionManagerDidArrive:(id)arg1;	// IMP=0x0000000000024461
- (void)navigationSessionManagerDidEnterPreArrivalState:(id)arg1;	// IMP=0x000000000002442b
- (void)navigationSessionManager:(id)arg1 didResumeNavigatingFromWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x00000000000243c0
- (void)navigationSessionManager:(id)arg1 didArriveAtWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x0000000000024355
- (void)navigationSessionManager:(id)arg1 didEnterPreArrivalStateForWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x00000000000242ea
- (void)navigationSessionManager:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;	// IMP=0x000000000002428e
- (void)navigationSessionManager:(id)arg1 didUpdateDisplayedStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;	// IMP=0x0000000000024244
- (void)navigationSessionManager:(id)arg1 didUpdateStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;	// IMP=0x00000000000241fa
- (void)navigationSessionManager:(id)arg1 didUpdateLocation:(id)arg2;	// IMP=0x000000000002419e
- (void)navigationSessionManager:(id)arg1 didChangeNavigationState:(int)arg2;	// IMP=0x0000000000024159
- (void)navigationSessionManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000000023ee8
- (void)navigationSessionManager:(id)arg1 shouldEndWithReason:(unsigned long long)arg2;	// IMP=0x0000000000023ed3
- (void)navigationSessionManager:(id)arg1 didStopWithReason:(unsigned long long)arg2;	// IMP=0x0000000000023e8e
- (void)navigationSessionManager:(id)arg1 willStartNavigationWithRoute:(id)arg2 navigationType:(int)arg3 request:(id)arg4 response:(id)arg5;	// IMP=0x0000000000023de7
- (unsigned long long)_serviceStateForStateType:(unsigned long long)arg1;	// IMP=0x0000000000023dc6
- (void)stateManager:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x0000000000023d39
- (void)stateManager:(id)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x0000000000023cac
- (void)resumeRealtimeUpdatesForSubscriber:(id)arg1;	// IMP=0x0000000000023be3
- (void)pauseRealtimeUpdatesForSubscriber:(id)arg1;	// IMP=0x0000000000023b1a
- (void)checkinForNavigationService:(CDUnknownBlockType)arg1;	// IMP=0x00000000000239de
- (void)interfaceHashesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000023958
- (void)recordPedestrianTracePath:(id)arg1;	// IMP=0x000000000002388f
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;	// IMP=0x00000000000237c6
- (void)setTracePosition:(double)arg1;	// IMP=0x000000000002372b
- (void)setTracePlaybackSpeed:(double)arg1;	// IMP=0x0000000000023690
- (void)setTraceIsPlaying:(_Bool)arg1;	// IMP=0x00000000000235f8
- (void)acceptReroute:(_Bool)arg1 forTrafficIncidentAlert:(id)arg2;	// IMP=0x0000000000023520
- (void)enableNavigationCapability:(unsigned long long)arg1;	// IMP=0x0000000000023488
- (void)disableNavigationCapability:(unsigned long long)arg1;	// IMP=0x00000000000233f0
- (void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;	// IMP=0x000000000002334c
- (void)setRideIndex:(unsigned long long)arg1 forSegmentIndex:(unsigned long long)arg2;	// IMP=0x00000000000232ac
- (void)setDisplayedStepIndex:(unsigned long long)arg1;	// IMP=0x0000000000023214
- (void)setIsConnectedToCarplay:(_Bool)arg1;	// IMP=0x000000000002317c
- (void)setGuidancePromptsEnabled:(_Bool)arg1;	// IMP=0x00000000000230e4
- (void)setHeadingOrientation:(int)arg1;	// IMP=0x000000000002304d
- (void)stopCurrentGuidancePrompt;	// IMP=0x0000000000022ff8
- (void)vibrateForPrompt:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000022f20
- (void)repeatCurrentTrafficAlertWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000022e57
- (void)repeatCurrentGuidanceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000022d8e
- (void)changeUserOptions:(id)arg1;	// IMP=0x0000000000022c8d
- (void)setGuidanceType:(unsigned long long)arg1;	// IMP=0x0000000000022bf5
- (void)switchToRoute:(id)arg1;	// IMP=0x0000000000022b2c
- (void)forceReroute;	// IMP=0x0000000000022ad7
- (void)resumeOriginalDestination;	// IMP=0x0000000000022a82
- (void)updateDestination:(id)arg1;	// IMP=0x00000000000229b9
- (void)stopNavigationWithReason:(unsigned long long)arg1;	// IMP=0x00000000000227be
- (void)startNavigationWithDetails:(id)arg1 activeBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000225b5
- (void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;	// IMP=0x0000000000022475
- (void)reset;	// IMP=0x0000000000022344
- (void)start;	// IMP=0x000000000002223c
- (void)dealloc;	// IMP=0x0000000000022192
- (id)init;	// IMP=0x000000000002213c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

