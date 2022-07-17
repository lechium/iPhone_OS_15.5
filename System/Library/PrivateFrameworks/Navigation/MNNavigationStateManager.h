//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Navigation/MNNavigationStateInterface-Protocol.h>

@class GEOApplicationAuditToken, MNNavigationState, MNObserverHashTable, NSString, geo_isolater;
@protocol MNNavigationSessionManagerDelegate;

@interface MNNavigationStateManager : NSObject <MNNavigationStateInterface>
{
    _Bool _isStarted;	// 8 = 0x8
    MNNavigationState *_currentState;	// 16 = 0x10
    MNObserverHashTable *_navigationStateObservers;	// 24 = 0x18
    GEOApplicationAuditToken *_auditToken;	// 32 = 0x20
    geo_isolater *_isolater;	// 40 = 0x28
    id <MNNavigationSessionManagerDelegate> _navigationDelegate;	// 48 = 0x30
}

+ (id)sharedManager;	// IMP=0x00000000000ea868
- (void).cxx_destruct;	// IMP=0x00000000000ebcf8
@property(nonatomic) __weak id <MNNavigationSessionManagerDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(readonly, nonatomic) GEOApplicationAuditToken *auditToken; // @synthesize auditToken=_auditToken;
- (void)resumeRealtimeUpdatesForSubscriber:(id)arg1;	// IMP=0x00000000000ebc55
- (void)pauseRealtimeUpdatesForSubscriber:(id)arg1;	// IMP=0x00000000000ebbe3
- (void)checkinForNavigationService:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ebbdd
- (void)interfaceHashesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ebbd7
- (void)recordPedestrianTracePath:(id)arg1;	// IMP=0x00000000000ebb65
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;	// IMP=0x00000000000ebaf3
- (void)setTracePosition:(double)arg1;	// IMP=0x00000000000ebaa4
- (void)setTracePlaybackSpeed:(double)arg1;	// IMP=0x00000000000eba55
- (void)setTraceIsPlaying:(_Bool)arg1;	// IMP=0x00000000000eba09
- (void)acceptReroute:(_Bool)arg1 forTrafficIncidentAlert:(id)arg2;	// IMP=0x00000000000eb991
- (void)enableNavigationCapability:(unsigned long long)arg1;	// IMP=0x00000000000eb945
- (void)disableNavigationCapability:(unsigned long long)arg1;	// IMP=0x00000000000eb8f9
- (void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;	// IMP=0x00000000000eb8a0
- (void)setRideIndex:(unsigned long long)arg1 forSegmentIndex:(unsigned long long)arg2;	// IMP=0x00000000000eb84f
- (void)setDisplayedStepIndex:(unsigned long long)arg1;	// IMP=0x00000000000eb803
- (void)setIsConnectedToCarplay:(_Bool)arg1;	// IMP=0x00000000000eb7b7
- (void)setGuidancePromptsEnabled:(_Bool)arg1;	// IMP=0x00000000000eb76b
- (void)setHeadingOrientation:(int)arg1;	// IMP=0x00000000000eb765
- (void)stopCurrentGuidancePrompt;	// IMP=0x00000000000eb728
- (void)vibrateForPrompt:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000eb6b0
- (void)repeatCurrentTrafficAlertWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000eb63e
- (void)repeatCurrentGuidanceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000eb5cc
- (void)changeUserOptions:(id)arg1;	// IMP=0x00000000000eb55a
- (void)setGuidanceType:(unsigned long long)arg1;	// IMP=0x00000000000eb50e
- (void)switchToRoute:(id)arg1;	// IMP=0x00000000000eb49c
- (void)forceReroute;	// IMP=0x00000000000eb45f
- (void)resumeOriginalDestination;	// IMP=0x00000000000eb422
- (void)updateDestination:(id)arg1;	// IMP=0x00000000000eb3b0
- (void)stopNavigationWithReason:(unsigned long long)arg1;	// IMP=0x00000000000eb220
- (void)startNavigationWithDetails:(id)arg1 activeBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000eb19a
- (void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;	// IMP=0x00000000000eafe5
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;	// IMP=0x00000000000eafdf
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;	// IMP=0x00000000000eafd9
- (id)_initialState;	// IMP=0x00000000000eafa3
- (void)_replayStateForNewObserver:(id)arg1;	// IMP=0x00000000000eaee3
@property(readonly, nonatomic) unsigned long long currentStateType;
@property(readonly, nonatomic) MNNavigationState *currentState;
@property(readonly, nonatomic) _Bool isStarted;
- (void)removeObserver:(id)arg1;	// IMP=0x00000000000eacad
- (void)addObserver:(id)arg1;	// IMP=0x00000000000eac21
- (void)reset;	// IMP=0x00000000000eabd5
- (void)start;	// IMP=0x00000000000eaa1f
- (void)dealloc;	// IMP=0x00000000000ea9a0
- (id)init;	// IMP=0x00000000000ea8bd
- (id)navSessionDestination;	// IMP=0x00000000000ebd3f
- (unsigned long long)_stateTypeForState:(id)arg1;	// IMP=0x00000000000ec674
- (void)_changeToDesiredLocationProviderTypeForState:(id)arg1;	// IMP=0x00000000000ec519
- (void)transitionToState:(id)arg1;	// IMP=0x00000000000ebdae
- (void)setCurrentState:(id)arg1;	// IMP=0x00000000000ec692

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
