//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedWaypoint, GEOPlannedDestination, GEORouteHypothesisRequest, NSDictionary, NSError, NSMutableDictionary, NSOperationQueue, NSString;
@protocol NavdTTLCachePrivate;

@interface NavdPendingTTLCacheEntry : NSObject
{
    NSOperationQueue *_cacheOperationQueue;	// 8 = 0x8
    id <NavdTTLCachePrivate> _cache;	// 16 = 0x10
    NSMutableDictionary *_clientInfoStates;	// 24 = 0x18
    GEORouteHypothesisRequest *_request;	// 32 = 0x20
    GEOComposedWaypoint *_originWaypoint;	// 40 = 0x28
    GEOComposedWaypoint *_destinationWaypoint;	// 48 = 0x30
    NSError *_originWaypointError;	// 56 = 0x38
    NSError *_destinationWaypointError;	// 64 = 0x40
    CDUnknownBlockType _findWaypointsHandler;	// 72 = 0x48
    GEOPlannedDestination *_plannedDestination;	// 80 = 0x50
    NSString *_traceName;	// 88 = 0x58
    long long _state;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0020000000013304
@property(readonly, nonatomic) NSDictionary *clientInfoStates; // @synthesize clientInfoStates=_clientInfoStates;
@property(readonly, nonatomic) GEORouteHypothesisRequest *request; // @synthesize request=_request;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *traceName; // @synthesize traceName=_traceName;
@property(readonly, nonatomic) GEOPlannedDestination *plannedDestination; // @synthesize plannedDestination=_plannedDestination;
- (void)resolveMapItem:(CDUnknownBlockType)arg1;	// IMP=0x0010000000012fce
- (void)_finishedResolvingWaypointsForKey:(id)arg1;	// IMP=0x0010000000012f5d
- (void)_receivedErrorWhileResolvingDestinationWaypoint:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000012ed7
- (void);	// IMP=0x0010000000012e51
- (void)_receivedErrorWhileResolvingOriginWaypoint:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000012dcb
- (void)_receivedOriginWaypoint:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000012d45
- (_Bool)_isFinishedResolvingWaypoints;	// IMP=0x0010000000012d1c
- (void)_findWaypointsForKey:(id)arg1 currentLocation:(id)arg2;	// IMP=0x0010000000012435
- (void)findWaypointsForKey:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000120ad
- (void)subsumePendingCacheEntry:(id)arg1;	// IMP=0x001000000001205d
- (void)removePendingStops:(id)arg1;	// IMP=0x0010000000011f28
- (void)setLocalUpdatesOnlyForClientInfo:(id)arg1;	// IMP=0x0010000000011edd
- (void)setDestinationLocation:(id)arg1;	// IMP=0x0010000000011ec7
- (void)_setState:(long long)arg1;	// IMP=0x0010000000011ced
- (id)initWithDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3 handler:(CDUnknownBlockType)arg4 cacheOperationQueue:(id)arg5 navdCache:(id)arg6;	// IMP=0x001000000001195e

@end

