//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEODirectionsRequestFeedback, GEOLocation, GEORouteAttributes, NSHashTable, NSMutableDictionary, NSMutableSet, NSString;
@protocol NavdDoomRoutesManager, OS_dispatch_queue;

@interface NavdDoomGEORoutesUpdater : NSObject
{
    id <NavdDoomRoutesManager> _routesManager;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_observerQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_requestQueue;	// 32 = 0x20
    GEODirectionsRequestFeedback *_routeRequestFeedback;	// 40 = 0x28
    GEORouteAttributes *_routeRequestAttributes;	// 48 = 0x30
    GEOLocation *_currentLocationOverride;	// 56 = 0x38
    NSMutableDictionary *_routesPerDestination;	// 64 = 0x40
    NSMutableSet *_allIncidents;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000043df4
- (id)_entryWithTitle:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2;	// IMP=0x0000000000043c01
- (_Bool)updateRoutesForTestDestinationsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000043ae0
- (id)_incidentsFromDirectionsResponse:(id)arg1 destination:(id)arg2;	// IMP=0x0010000000043749
- (_Bool)updateRoutesForDestinations:(id)arg1 withOrigin:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000041b83
- (void)notifyObserversOfRouteRequest;	// IMP=0x0010000000041a6f
- (void)forEachObserver:(CDUnknownBlockType)arg1;	// IMP=0x0010000000041879
- (void)registerObserver:(id)arg1;	// IMP=0x00100000000417fd
@property(readonly, nonatomic) NSString *uniqueName;
- (id)init;	// IMP=0x00100000000417cf
- (id)initWithRoutesManager:(id)arg1;	// IMP=0x0010000000041692

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
