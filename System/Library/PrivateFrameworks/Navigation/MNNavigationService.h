//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Navigation/MNNavigationServiceClientInterface-Protocol.h>

@class GEOComposedRoute, GEOComposedWaypoint, GEODirectionsRequest, GEODirectionsResponse, MNDisplayETAInfo, MNGuidanceLaneInfo, MNLocation, MNNavigationClientProxy, MNNavigationDetails, MNNavigationServiceRemoteProxy, MNObserverHashTable, MNRouteDistanceInfo, MNUserOptions, NSArray, NSMutableDictionary, NSSet, NSString, NSUUID;
@protocol MNNavigationServiceProxy;

@interface MNNavigationService : NSObject <MNNavigationServiceClientInterface>
{
    MNObserverHashTable *_navigationObservers;	// 8 = 0x8
    id <MNNavigationServiceProxy> _proxy;	// 16 = 0x10
    MNNavigationServiceRemoteProxy *_remoteProxy;	// 24 = 0x18
    MNNavigationClientProxy *_clientProxy;	// 32 = 0x20
    NSSet *_realtimeUpdates;	// 40 = 0x28
    NSUUID *_uuid;	// 48 = 0x30
    NSMutableDictionary *_disabledCapabilities;	// 56 = 0x38
    MNNavigationDetails *_details;	// 64 = 0x40
    MNUserOptions *_cachedUserOptions;	// 72 = 0x48
}

+ (id)sharedService;	// IMP=0x000000000003dc70
+ (unsigned long long)_hashForProtocol:(id)arg1;	// IMP=0x0000000000048a66
+ (unsigned long long)daemonInterfaceHash;	// IMP=0x00000000000489e2
+ (unsigned long long)clientInterfaceHash;	// IMP=0x0000000000048952
- (void).cxx_destruct;	// IMP=0x00000000000488dd
@property(retain) MNUserOptions *cachedUserOptions; // @synthesize cachedUserOptions=_cachedUserOptions;
@property(retain) MNNavigationDetails *details; // @synthesize details=_details;
- (void)navigationServiceProxy:(id)arg1 didReceiveTransitAlert:(id)arg2;	// IMP=0x00000000000487a1
- (void)navigationServiceProxy:(id)arg1 didReceiveRealtimeUpdates:(id)arg2;	// IMP=0x0000000000048758
- (void)navigationServiceProxy:(id)arg1 willRequestRealtimeUpdatesForRouteIDs:(id)arg2;	// IMP=0x000000000004873f
- (void)navigationServiceProxy:(id)arg1 triggerHaptics:(int)arg2;	// IMP=0x000000000004865c
- (void)navigationServiceProxy:(id)arg1 didProcessSpeechEvent:(id)arg2;	// IMP=0x00000000000484f5
- (void)navigationServiceProxy:(id)arg1 willProcessSpeechEvent:(id)arg2;	// IMP=0x00000000000483ff
- (void)navigationServiceProxy:(id)arg1 didChangeVoiceGuidanceLevel:(unsigned long long)arg2;	// IMP=0x000000000004828e
- (void)navigationServiceProxy:(id)arg1 didStartUsingVoiceLanguage:(id)arg2;	// IMP=0x0000000000048176
- (void)navigationServiceProxy:(id)arg1 didStartSpeakingPrompt:(id)arg2;	// IMP=0x0000000000048080
- (void)navigationServiceProxy:(id)arg1 didActivateAudioSession:(_Bool)arg2;	// IMP=0x0000000000047f9c
- (void)navigationServiceProxy:(id)arg1 didUpdateTracePlaybackDetails:(id)arg2;	// IMP=0x0000000000047a02
- (void)navigationServiceProxy:(id)arg1 didInvalidateTrafficIncidentAlert:(id)arg2;	// IMP=0x0000000000047794
- (void)navigationServiceProxy:(id)arg1 didUpdateTrafficIncidentAlert:(id)arg2;	// IMP=0x0000000000047501
- (void)navigationServiceProxy:(id)arg1 didReceiveTrafficIncidentAlert:(id)arg2;	// IMP=0x0000000000047181
- (void)navigationServiceProxy:(id)arg1 didUpdateAlternateRoutes:(id)arg2;	// IMP=0x0000000000046be9
- (void)navigationServiceProxy:(id)arg1 didFailRerouteWithError:(id)arg2;	// IMP=0x0000000000046ad0
- (void)navigationServiceProxy:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;	// IMP=0x0000000000046874
- (void)navigationServiceProxy:(id)arg1 didUpdateRouteWithNewRideSelection:(id)arg2;	// IMP=0x0000000000046638
- (void)navigationServiceProxyDidCancelReroute:(id)arg1;	// IMP=0x000000000004655f
- (void)navigationServiceProxy:(id)arg1 didRerouteWithRoute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4;	// IMP=0x000000000004616b
- (void)navigationServiceProxyWillReroute:(id)arg1;	// IMP=0x0000000000046092
- (void)navigationServiceProxy:(id)arg1 didUpdatePreviewRoutes:(id)arg2 withSelectedRouteIndex:(unsigned long long)arg3;	// IMP=0x0000000000045f13
- (void)navigationServiceProxy:(id)arg1 didUpdateMotionType:(unsigned long long)arg2 confidence:(unsigned long long)arg3;	// IMP=0x0000000000045efa
- (void)navigationServiceProxy:(id)arg1 didUpdateHeading:(double)arg2 accuracy:(double)arg3;	// IMP=0x0000000000045ee1
- (void)navigationServiceProxy:(id)arg1 didUpdateETAResponseForRoute:(id)arg2;	// IMP=0x0000000000045b95
- (void)navigationServiceProxy:(id)arg1 didUpdateDisplayETA:(id)arg2 remainingDistance:(id)arg3;	// IMP=0x00000000000457c6
- (void)navigationServiceProxy:(id)arg1 didReceiveRouteSignalStrength:(unsigned long long)arg2;	// IMP=0x00000000000457ad
- (void)navigationServiceProxy:(id)arg1 updatedGuidanceEventFeedback:(id)arg2;	// IMP=0x0000000000045794
- (void)navigationServiceProxy:(id)arg1 newGuidanceEventFeedback:(id)arg2;	// IMP=0x000000000004577b
- (void)navigationServiceProxy:(id)arg1 didEnableGuidancePrompts:(_Bool)arg2;	// IMP=0x000000000004565a
- (void)navigationServiceProxy:(id)arg1 hideJunctionViewForId:(id)arg2;	// IMP=0x0000000000045564
- (void)navigationServiceProxy:(id)arg1 showJunctionView:(id)arg2;	// IMP=0x000000000004546e
- (void)navigationServiceProxy:(id)arg1 hideLaneDirectionsForId:(id)arg2;	// IMP=0x0000000000045228
- (void)navigationServiceProxy:(id)arg1 showLaneDirections:(id)arg2;	// IMP=0x00000000000450d5
- (void)navigationServiceProxy:(id)arg1 usePersistentDisplay:(_Bool)arg2;	// IMP=0x0000000000044ff1
- (void)navigationServiceProxy:(id)arg1 updateSignsWithARInfo:(id)arg2;	// IMP=0x0000000000044f1a
- (void)navigationServiceProxy:(id)arg1 updateSignsWithInfo:(id)arg2;	// IMP=0x0000000000044d5d
- (void)navigationServiceProxyEndGuidanceUpdate:(id)arg1;	// IMP=0x0000000000044c84
- (void)navigationServiceProxyBeginGuidanceUpdate:(id)arg1;	// IMP=0x0000000000044bab
- (void)navigationServiceProxyHideSecondaryStep:(id)arg1;	// IMP=0x0000000000044ad2
- (void)navigationServiceProxy:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6;	// IMP=0x0000000000044995
- (void)navigationServiceProxy:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;	// IMP=0x00000000000448b2
- (void)navigationServiceProxy:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(_Bool)arg8;	// IMP=0x000000000004476d
- (void)navigationServiceProxy:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;	// IMP=0x0000000000044680
- (void)navigationServiceProxy:(id)arg1 didUpdateDistanceUntilSign:(double)arg2 timeUntilSign:(double)arg3 forStepIndex:(unsigned long long)arg4;	// IMP=0x000000000004451c
- (void)navigationServiceProxy:(id)arg1 didUpdateProceedToRouteDistance:(double)arg2 displayString:(id)arg3 closestStepIndex:(unsigned long long)arg4;	// IMP=0x0000000000044373
- (void)navigationServiceProxyDidArrive:(id)arg1;	// IMP=0x000000000004429a
- (void)navigationServiceProxyDidEnterPreArrivalState:(id)arg1;	// IMP=0x0000000000044185
- (void)navigationServiceProxy:(id)arg1 didResumeNavigatingFromWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x000000000004403b
- (void)navigationServiceProxy:(id)arg1 didArriveAtWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x0000000000043ef1
- (void)navigationServiceProxy:(id)arg1 didEnterPreArrivalStateForWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x0000000000043da7
- (void)navigationServiceProxy:(id)arg1 didUpdateDistanceUntilManeuver:(double)arg2 timeUntilManeuver:(double)arg3 forStepIndex:(unsigned long long)arg4;	// IMP=0x0000000000043c1f
- (void)navigationServiceProxy:(id)arg1 didUpdateDisplayedStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;	// IMP=0x0000000000043af9
- (void)navigationServiceProxy:(id)arg1 didUpdateStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;	// IMP=0x0000000000043a0b
- (void)navigationServiceProxy:(id)arg1 didUpdateMatchedLocation:(id)arg2;	// IMP=0x000000000004383c
- (void)navigationServiceProxy:(id)arg1 didChangeNavigationState:(int)arg2;	// IMP=0x0000000000043516
- (void)navigationServiceProxy:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000000004340b
- (void)navigationServiceProxyWillResumeFromPauseNavigation:(id)arg1;	// IMP=0x0000000000043332
- (void)navigationServiceProxyWillPauseNavigation:(id)arg1;	// IMP=0x0000000000043259
- (void)navigationServiceProxy:(id)arg1 didUpdateNavigationDetails:(id)arg2;	// IMP=0x0000000000042d04
- (void)navigationServiceProxy:(id)arg1 didEndWithReason:(unsigned long long)arg2;	// IMP=0x0000000000042b9c
- (void)navigationServiceProxy:(id)arg1 willStartNavigationWithRoute:(id)arg2 navigationType:(int)arg3 request:(id)arg4 response:(id)arg5;	// IMP=0x000000000004263c
- (void)navigationServiceProxy:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x000000000004231c
- (void)navigationServiceProxy:(id)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x000000000004213d
- (void)_resetDetails;	// IMP=0x0000000000042087
- (id)_clientProxy;	// IMP=0x000000000004204c
- (void)recordPedestrianTracePath:(id)arg1;	// IMP=0x0000000000041f59
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;	// IMP=0x0000000000041e66
- (void)setTracePlaybackSpeed:(double)arg1;	// IMP=0x0000000000041d86
@property(nonatomic) double tracePosition;
@property(nonatomic) _Bool traceIsPlaying;
@property(readonly, nonatomic, getter=isNavigatingFromTrace) _Bool navigatingFromTrace;
@property(readonly, nonatomic) NSArray *traceBookmarks;
@property(readonly, nonatomic) double traceDuration;
@property(readonly, nonatomic) NSString *tracePath;
@property(readonly, nonatomic) MNGuidanceLaneInfo *activeLaneInfo;
@property(readonly, nonatomic) _Bool isDetour;
@property(readonly, nonatomic) NSString *originalDestinationName;
@property(readonly, nonatomic) GEOComposedWaypoint *originalDestination;
@property(readonly, nonatomic) NSString *destinationName;
@property(readonly, nonatomic) GEOComposedWaypoint *destination;
@property(readonly, nonatomic) GEOComposedWaypoint *originalOrigin;
@property(readonly, nonatomic) GEOComposedWaypoint *origin;
@property(readonly, nonatomic) double timeUntilManeuver;
@property(readonly, nonatomic) double distanceUntilManeuver;
@property(readonly, nonatomic) double timeUntilSign;
@property(readonly, nonatomic) double distanceUntilSign;
@property(readonly, nonatomic) MNRouteDistanceInfo *remainingDistanceInfo;
@property(readonly, nonatomic) MNDisplayETAInfo *displayEtaInfo;
@property(readonly, nonatomic) MNLocation *lastLocation;
@property(readonly, nonatomic) unsigned long long displayedStepIndex;
@property(readonly, nonatomic) unsigned long long stepIndex;
- (void)resumeRealtimeUpdates;	// IMP=0x000000000004139a
- (void)pauseRealtimeUpdates;	// IMP=0x00000000000412c0
- (id)realtimeUpdatesForAllRoutes;	// IMP=0x00000000000412b2
- (id)realtimeUpdatesForRoutes:(id)arg1;	// IMP=0x0000000000040efd
- (id)etaRouteForRoute:(id)arg1;	// IMP=0x0000000000040e5c
- (unsigned long long)alternateRouteIndexForRoute:(id)arg1;	// IMP=0x0000000000040db0
- (id)remainingDistanceInfoForRoute:(id)arg1;	// IMP=0x0000000000040d0f
- (id)displayETAInfoForRoute:(id)arg1;	// IMP=0x0000000000040c6e
@property(readonly, nonatomic) NSArray *alternateRoutes;
@property(readonly, nonatomic) unsigned long long reconnectionRouteIndex;
@property(readonly, nonatomic) unsigned long long routeIndex;
@property(readonly, nonatomic) GEODirectionsResponse *currentResponse;
@property(readonly, nonatomic) GEODirectionsRequest *currentRequest;
@property(readonly, nonatomic) GEOComposedRoute *route;
@property(readonly, nonatomic) int desiredTransportType;
@property(readonly, nonatomic) int desiredNavigationType;
@property(readonly, nonatomic) NSString *currentVoiceLanguage;
@property(readonly, nonatomic) _Bool isInPreArrivalState;
@property(readonly, nonatomic) _Bool isTrackingCurrentLocation;
@property(readonly, nonatomic) int navigationTransportType;
@property(readonly, nonatomic) int navigationState;
@property(readonly, nonatomic) int navigationType;
@property(readonly, nonatomic) _Bool isInNavigatingState;
@property(readonly, nonatomic) unsigned long long state;
- (void)enableNavigationCapability:(unsigned long long)arg1 reason:(unsigned long long)arg2;	// IMP=0x000000000004028c
- (void)disableNavigationCapability:(unsigned long long)arg1 reason:(unsigned long long)arg2;	// IMP=0x000000000003fff5
- (void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;	// IMP=0x000000000003fee7
- (void)setRideIndex:(unsigned long long)arg1 forSegmentIndex:(unsigned long long)arg2;	// IMP=0x000000000003fdfc
- (void)setDisplayedStepIndex:(unsigned long long)arg1;	// IMP=0x000000000003fd1c
- (void)setIsConnectedToCarplay:(_Bool)arg1;	// IMP=0x000000000003fc5b
@property(nonatomic) _Bool guidancePromptsEnabled;
@property(nonatomic) int headingOrientation;
- (void)stopCurrentGuidancePrompt;	// IMP=0x000000000003f8c4
- (void)vibrateForPrompt:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003f761
- (void)repeatCurrentTrafficAlert:(CDUnknownBlockType)arg1;	// IMP=0x000000000003f606
- (void)repeatCurrentGuidance:(CDUnknownBlockType)arg1;	// IMP=0x000000000003f4ab
- (void)changeUserOptions:(id)arg1;	// IMP=0x000000000003f3a6
- (id)userOptions;	// IMP=0x000000000003f394
- (void)setGuidanceType:(unsigned long long)arg1;	// IMP=0x000000000003f2b4
- (void)switchToRoute:(id)arg1;	// IMP=0x000000000003f13d
- (void)forceReroute;	// IMP=0x000000000003f0b8
- (void)resumeOriginalDestination;	// IMP=0x000000000003eff0
- (void)updateDestination:(id)arg1;	// IMP=0x000000000003eec0
- (void)stopNavigationWithReason:(unsigned long long)arg1;	// IMP=0x000000000003ed88
- (_Bool)startNavigationWithDetails:(id)arg1 error:(out id *)arg2;	// IMP=0x000000000003e5f3
- (void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;	// IMP=0x000000000003e32c
- (id)ticketForDirectionsRequest:(id)arg1;	// IMP=0x000000000003e29f
- (void)unregisterObserver:(id)arg1;	// IMP=0x000000000003e289
- (void)registerObserver:(id)arg1;	// IMP=0x000000000003e273
- (_Bool)isOpenForClient:(id)arg1;	// IMP=0x000000000003e25d
- (void)closeForClient:(id)arg1;	// IMP=0x000000000003e0db
- (void)openForClient:(id)arg1;	// IMP=0x000000000003dfda
- (id)initPrivate;	// IMP=0x000000000003dcd5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

