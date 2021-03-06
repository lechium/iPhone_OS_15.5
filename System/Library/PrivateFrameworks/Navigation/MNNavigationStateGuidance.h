//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MNNavigationSessionManager, MNStartNavigationDetails;

@interface MNNavigationStateGuidance
{
    MNNavigationSessionManager *_navigationSessionManager;	// 8 = 0x8
    MNStartNavigationDetails *_startDetails;	// 16 = 0x10
}

+ (id)guidanceStateForStartDetails:(id)arg1 stateManager:(id)arg2 navigationSessionManager:(id)arg3;	// IMP=0x00000000000a4b8f
- (void).cxx_destruct;	// IMP=0x00000000000a57fa
- (void)resumeRealtimeUpdatesForSubscriber:(id)arg1;	// IMP=0x00000000000a57dd
- (void)pauseRealtimeUpdatesForSubscriber:(id)arg1;	// IMP=0x00000000000a57c0
- (void)recordPedestrianTracePath:(id)arg1;	// IMP=0x00000000000a57a3
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;	// IMP=0x00000000000a5786
- (void)setTracePosition:(double)arg1;	// IMP=0x00000000000a5769
- (void)setTracePlaybackSpeed:(double)arg1;	// IMP=0x00000000000a574c
- (void)setTraceIsPlaying:(_Bool)arg1;	// IMP=0x00000000000a572f
- (void)acceptReroute:(_Bool)arg1 forTrafficIncidentAlert:(id)arg2;	// IMP=0x00000000000a5712
- (void)enableNavigationCapability:(unsigned long long)arg1;	// IMP=0x00000000000a56f5
- (void)disableNavigationCapability:(unsigned long long)arg1;	// IMP=0x00000000000a56d8
- (void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;	// IMP=0x00000000000a56bb
- (void)setRideIndex:(unsigned long long)arg1 forSegmentIndex:(unsigned long long)arg2;	// IMP=0x00000000000a569e
- (void)setDisplayedStepIndex:(unsigned long long)arg1;	// IMP=0x00000000000a5681
- (void)setIsConnectedToCarplay:(_Bool)arg1;	// IMP=0x00000000000a5664
- (void)stopCurrentGuidancePrompt;	// IMP=0x00000000000a5647
- (void)vibrateForPrompt:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a55ef
- (void)repeatCurrentTrafficAlertWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a55a6
- (void)repeatCurrentGuidanceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a555d
- (void)switchToRoute:(id)arg1;	// IMP=0x00000000000a5540
- (void)forceReroute;	// IMP=0x00000000000a5523
- (void)resumeOriginalDestination;	// IMP=0x00000000000a5506
- (void)updateDestination:(id)arg1;	// IMP=0x00000000000a54e9
- (void)stopNavigationWithReason:(unsigned long long)arg1;	// IMP=0x00000000000a5431
- (void)postEnterState;	// IMP=0x00000000000a53d2
- (void)preEnterState;	// IMP=0x00000000000a528a
- (void)leaveState;	// IMP=0x00000000000a5229
- (void)enterState;	// IMP=0x00000000000a5165
- (id)initWithStateManager:(id)arg1 navigationSessionManager:(id)arg2 startDetails:(id)arg3;	// IMP=0x00000000000a50bb
- (id)simulationLocationProvider;	// IMP=0x00000000000a509e
- (id)traceManager;	// IMP=0x00000000000a5081
- (_Bool)shouldClearStoredRoutes;	// IMP=0x00000000000a5079
- (id)clParameters;	// IMP=0x00000000000a4e9b
- (unsigned long long)desiredLocationProviderType;	// IMP=0x00000000000a4dfa
- (_Bool)requiresHighMemoryThreshold;	// IMP=0x00000000000a4df2
- (id)currentDestination;	// IMP=0x00000000000a4d97

@end

