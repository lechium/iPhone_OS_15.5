//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, NSString, NSTimer, NavigationSession, PlatformController, RouteGeniusSession, RoutePlanningSession;

__attribute__((visibility("hidden")))
@interface CarSessionController : NSObject
{
    _Bool _hasArrived;	// 8 = 0x8
    _Bool _active;	// 9 = 0x9
    NavigationSession *_navigationSession;	// 16 = 0x10
    RoutePlanningSession *_routePlanningSession;	// 24 = 0x18
    RouteGeniusSession *_routeGeniusSession;	// 32 = 0x20
    CDUnknownBlockType _navigationEndedHandler;	// 40 = 0x28
    NSTimer *_arrivalResetTimer;	// 48 = 0x30
    NSMutableSet *_observers;	// 56 = 0x38
}

+ (id)sharedInstance;	// IMP=0x0020000000565cf0
- (void).cxx_destruct;	// IMP=0x0020000000568cca
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) NSMutableSet *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSTimer *arrivalResetTimer; // @synthesize arrivalResetTimer=_arrivalResetTimer;
@property(nonatomic) _Bool hasArrived; // @synthesize hasArrived=_hasArrived;
@property(copy, nonatomic) CDUnknownBlockType navigationEndedHandler; // @synthesize navigationEndedHandler=_navigationEndedHandler;
@property(retain, nonatomic) RouteGeniusSession *routeGeniusSession; // @synthesize routeGeniusSession=_routeGeniusSession;
@property(retain, nonatomic) RoutePlanningSession *routePlanningSession; // @synthesize routePlanningSession=_routePlanningSession;
@property(retain, nonatomic) NavigationSession *navigationSession; // @synthesize navigationSession=_navigationSession;
- (void)didUpdateRouteGenius:(id)arg1;	// IMP=0x0010000000568acd
- (void)_routeGeniusSessionDidChangeState:(unsigned long long)arg1;	// IMP=0x001000000056890e
- (void)routePlanningSession:(id)arg1 didReceiveUpdates:(id)arg2 forRoutesResult:(id)arg3;	// IMP=0x0010000000568908
- (void)routePlanningSession:(id)arg1 didUpdateRouteCollectionResult:(id)arg2 forTransportType:(long long)arg3;	// IMP=0x0010000000568902
- (void)routePlanningSession:(id)arg1 didFinishResolvingWaypointSet:(id)arg2;	// IMP=0x00100000005688fc
- (void)routePlanningSession:(id)arg1 didChangeCurrentTransportType:(long long)arg2;	// IMP=0x00100000005687ec
- (void)_routePlanningSessionDidChangeState:(unsigned long long)arg1;	// IMP=0x0010000000568664
- (void)navigationService:(id)arg1 didArriveAtWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x001000000056854c
- (void)navigationServicePredictingDidArrive:(id)arg1;	// IMP=0x0010000000568500
- (void)navigationSession:(id)arg1 didChangeCurrentTransportType:(long long)arg2;	// IMP=0x00100000005684fa
- (void)navigationSession:(id)arg1 didUpdateRouteCollection:(id)arg2;	// IMP=0x00100000005683f4
- (void)_arrivalResetTimerFired:(id)arg1;	// IMP=0x0010000000568301
- (void)_stopArrivalTimer;	// IMP=0x001000000056821e
- (void)_startArrivalTimer;	// IMP=0x001000000056805a
- (void)_promptToEndNavigationAccepted:(CDUnknownBlockType)arg1;	// IMP=0x0010000000567f7e
- (void)promptToEndNavigation:(CDUnknownBlockType)arg1;	// IMP=0x0010000000567c0e
- (void)_stopNavigation;	// IMP=0x0010000000567951
- (void)_startNavigatingAnimated:(_Bool)arg1;	// IMP=0x00100000005675c5
- (void)_navigationSessionDidChangeState:(unsigned long long)arg1;	// IMP=0x0010000000567592
- (void)mapsSession:(id)arg1 didChangeState:(unsigned long long)arg2;	// IMP=0x0010000000567264
- (void)_handleTransportType:(long long)arg1;	// IMP=0x0010000000566f65
- (void)_handleIncomingSession:(id)arg1;	// IMP=0x0010000000566e0c
- (void)platformController:(id)arg1 didChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;	// IMP=0x00100000005669ad
- (void)platformController:(id)arg1 willChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;	// IMP=0x00100000005666b1
@property(readonly, nonatomic) PlatformController *platformController;
- (void)removeObserver:(id)arg1;	// IMP=0x001000000056610c
- (void)addObserver:(id)arg1;	// IMP=0x0010000000565e7c
@property(readonly, nonatomic) NSSet *sessionObservers;
- (void)dealloc;	// IMP=0x0010000000565db4
- (id)init;	// IMP=0x0010000000565d45

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
