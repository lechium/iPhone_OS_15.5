//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, GEOComposedRouteStep, GEOLocation, GEORouteMatch, GEORouteMatcher;

@interface MNRouteProximitySensor : NSObject
{
    double _proximityThreshold;	// 8 = 0x8
    GEOLocation *_location;	// 16 = 0x10
    GEORouteMatch *_routeMatch;	// 24 = 0x18
    GEORouteMatcher *_routeMatcher;	// 32 = 0x20
    unsigned long long _proximity;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000068f8d
@property(readonly, nonatomic) unsigned long long proximity; // @synthesize proximity=_proximity;
- (void)_updateRouteMatch;	// IMP=0x0000000000068f0d
- (void)_updateProximity;	// IMP=0x0000000000068e30
@property(nonatomic) double proximityThreshold;
@property(readonly, nonatomic) double remainingTimeOnRoute;
@property(readonly, nonatomic) double distanceFromDestination;
@property(readonly, nonatomic) double distanceFromRoute;
@property(readonly, nonatomic) double distanceFromOrigin;
@property(readonly, nonatomic) double courseOnRoute;
@property(readonly, nonatomic) GEOComposedRouteStep *closestStepOnRoute;
@property(readonly, nonatomic) GEOLocation *closestPointOnRoute;
@property(readonly, nonatomic) GEOLocation *location;
@property(readonly, nonatomic) GEOComposedRoute *route;
- (void)updateForLocation:(id)arg1;	// IMP=0x00000000000687fc
- (id)initWithRoute:(id)arg1;	// IMP=0x0000000000068764
- (id)init;	// IMP=0x000000000006873a

@end

