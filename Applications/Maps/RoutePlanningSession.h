//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CyclePreferences, DrivePreferences, GEOObserverHashTable, NSDate, NSMutableDictionary, NSString, NavigationStateMonitoringTask, PlatformController, RAPGraphDirectionsRecorder, Result, RouteCollection, RouteLoadingController, RoutePlanningSessionConfiguration, RoutePlanningTiming, SearchResult, TransitPreferences, WaypointController, WaypointSet;
@protocol OS_dispatch_queue, OS_os_activity;

__attribute__((visibility("hidden")))
@interface RoutePlanningSession : NSObject
{
    _Bool _waitingForAccurateLocationUpdate;	// 8 = 0x8
    _Bool _ignoreMapType;	// 9 = 0x9
    unsigned long long _sessionInitiator;	// 16 = 0x10
    PlatformController *_platformController;	// 24 = 0x18
    RoutePlanningSessionConfiguration *_configuration;	// 32 = 0x20
    RAPGraphDirectionsRecorder *_reportAProblemRecorder;	// 40 = 0x28
    NavigationStateMonitoringTask *_navigationStateMonitoringTask;	// 48 = 0x30
    NSDate *_startDate;	// 56 = 0x38
    long long _currentTransportType;	// 64 = 0x40
    unsigned long long _sessionState;	// 72 = 0x48
    GEOObserverHashTable *_observers;	// 80 = 0x50
    WaypointController *_waypointController;	// 88 = 0x58
    RouteLoadingController *_routeLoadingController;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_isolationQueue;	// 104 = 0x68
    NSMutableDictionary *_transportTypeToRouteCollectionResultsMap;	// 112 = 0x70
    NSObject<OS_os_activity> *_activity;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0010000000a7b367
@property(nonatomic) _Bool ignoreMapType; // @synthesize ignoreMapType=_ignoreMapType;
@property(retain, nonatomic) NSObject<OS_os_activity> *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) NSMutableDictionary *transportTypeToRouteCollectionResultsMap; // @synthesize transportTypeToRouteCollectionResultsMap=_transportTypeToRouteCollectionResultsMap;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *isolationQueue; // @synthesize isolationQueue=_isolationQueue;
@property(retain, nonatomic) RouteLoadingController *routeLoadingController; // @synthesize routeLoadingController=_routeLoadingController;
@property(retain, nonatomic) WaypointController *waypointController; // @synthesize waypointController=_waypointController;
@property(retain, nonatomic) GEOObserverHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) unsigned long long sessionState; // @synthesize sessionState=_sessionState;
@property(readonly, nonatomic, getter=isWaitingForAccurateLocationUpdate) _Bool waitingForAccurateLocationUpdate; // @synthesize waitingForAccurateLocationUpdate=_waitingForAccurateLocationUpdate;
@property(readonly, nonatomic) long long currentTransportType; // @synthesize currentTransportType=_currentTransportType;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) NavigationStateMonitoringTask *navigationStateMonitoringTask; // @synthesize navigationStateMonitoringTask=_navigationStateMonitoringTask;
@property(readonly, nonatomic) RAPGraphDirectionsRecorder *reportAProblemRecorder; // @synthesize reportAProblemRecorder=_reportAProblemRecorder;
@property(readonly, nonatomic) RoutePlanningSessionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak PlatformController *platformController; // @synthesize platformController=_platformController;
@property(readonly, nonatomic) unsigned long long sessionInitiator; // @synthesize sessionInitiator=_sessionInitiator;
- (void)routeLoadingController:(id)arg1 didReceiveUpdates:(id)arg2 forRoutesResult:(id)arg3;	// IMP=0x0010000000a7aff9
- (void)routeLoadingController:(id)arg1 didReceiveRoutesResult:(id)arg2 forTransportType:(long long)arg3;	// IMP=0x0010000000a7ac94
- (void)waypointController:(id)arg1 didResolveWaypointSet:(id)arg2;	// IMP=0x0010000000a79d3d
- (void)_handleReceivedWaypointSetResult;	// IMP=0x0010000000a7991c
- (void)cleanupStateReplay;	// IMP=0x0010000000a798df
- (void)replayCurrentState;	// IMP=0x0010000000a79824
- (void)prepareToReplayCurrentState;	// IMP=0x0010000000a797e7
- (void)suspend;	// IMP=0x0010000000a79601
- (void)resume;	// IMP=0x0010000000a79055
- (void)removeObserver:(id)arg1;	// IMP=0x0010000000a78f35
- (void)addObserver:(id)arg1;	// IMP=0x0010000000a78e15
- (void)requestUpdatedRouteWithRefreshedOrigin:(_Bool)arg1;	// IMP=0x0010000000a78c5c
- (void)setSelectedRouteIndex:(unsigned long long)arg1 forTransportType:(long long)arg2;	// IMP=0x0010000000a7861d
- (void)setCurrentTransportType:(long long)arg1;	// IMP=0x0010000000a77e92
- (void)safelySetCurrentTransportType:(long long)arg1;	// IMP=0x0010000000a77ded
- (void)_notifyObserversDidUpdateRouteCollectionResult:(id)arg1 forTransportType:(long long)arg2;	// IMP=0x0010000000a77cf1
- (void)updateRouteCollectionResult:(id)arg1 forTransportType:(long long)arg2;	// IMP=0x0010000000a77985
@property(readonly, nonatomic) int navigationTypeForCurrentRoute;
@property(readonly, nonatomic) RouteCollection *currentRouteCollection;
@property(readonly, nonatomic) Result *currentRouteCollectionResult;
@property(readonly, nonatomic) WaypointSet *resolvedWaypoints;
@property(readonly, nonatomic) Result *resolvedWaypointsResult;
- (void)purgeRouteCollectionForTransportType:(long long)arg1;	// IMP=0x0010000000a774b8
- (id)routeCollectionForTransportType:(long long)arg1;	// IMP=0x0010000000a77399
- (id)routeCollectionResultForTransportType:(long long)arg1;	// IMP=0x0010000000a7708f
- (void)setNavigationStateMonitoringTask:(id)arg1;	// IMP=0x0010000000a7707e
@property(readonly, nonatomic) NSString *destinationName;
@property(readonly, nonatomic) NSString *originName;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0010000000a76cd4
- (id)initWithInitiator:(unsigned long long)arg1 configuration:(id)arg2;	// IMP=0x0010000000a767c4
- (void)selectRoute:(id)arg1;	// IMP=0x00100000001bb4e1
@property(readonly, nonatomic) RoutePlanningTiming *timing;
@property(readonly, nonatomic) CyclePreferences *cyclePreferences;
@property(readonly, nonatomic) TransitPreferences *transitPreferences;
@property(readonly, nonatomic) DrivePreferences *drivePreferences;
@property(readonly, nonatomic) long long requestState;
- (id)_searchResultFromWaypointRequest:(id)arg1 resolvedWaypoint:(id)arg2;	// IMP=0x001000000097380a
@property(readonly, nonatomic) SearchResult *destinationDisplayableMarker;
@property(readonly, nonatomic) SearchResult *originDisplayableMarker;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
