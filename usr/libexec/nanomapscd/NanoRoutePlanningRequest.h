//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOApplicationAuditToken, GEOAutomobileOptions, GEOCompanionRouteContext, GEOCyclingOptions, GEOMapServiceTraits, GEOTransitOptions, GEOWalkingOptions, NSDate, NanoDirectionWaypoint;

__attribute__((visibility("hidden")))
@interface NanoRoutePlanningRequest : NSObject
{
    _Bool _startNavigationAutomatically;	// 8 = 0x8
    int _transportType;	// 12 = 0xc
    GEOApplicationAuditToken *_auditToken;	// 16 = 0x10
    GEOCompanionRouteContext *_companionRouteContext;	// 24 = 0x18
    unsigned long long _preferredMode;	// 32 = 0x20
    NanoDirectionWaypoint *_originWaypoint;	// 40 = 0x28
    NanoDirectionWaypoint *_destinationWaypoint;	// 48 = 0x30
    unsigned long long _maximumNumberOfRoutes;	// 56 = 0x38
    GEOMapServiceTraits *_traits;	// 64 = 0x40
    NSDate *_departureDate;	// 72 = 0x48
    NSDate *_arrivalDate;	// 80 = 0x50
    GEOAutomobileOptions *_automobileOptions;	// 88 = 0x58
    GEOTransitOptions *_transitOptions;	// 96 = 0x60
    GEOWalkingOptions *_walkingOptions;	// 104 = 0x68
    GEOCyclingOptions *_cyclingOptions;	// 112 = 0x70
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000002e8ee
+ (id)requestForPlaceholderDirections;	// IMP=0x001000000002e64c
+ (id)requestForDirectionsWithCompanionRouteDetails:(id)arg1 companionRouteContext:(id)arg2;	// IMP=0x001000000002e3c0
+ (id)requestForDirectionsFromOrigin:(id)arg1 toDestination:(id)arg2 viaTransportType:(unsigned long long)arg3 traits:(id)arg4 companionRouteContext:(id)arg5;	// IMP=0x001000000002e23d
- (void).cxx_destruct;	// IMP=0x002000000002f03b
@property(retain, nonatomic) GEOCyclingOptions *cyclingOptions; // @synthesize cyclingOptions=_cyclingOptions;
@property(retain, nonatomic) GEOWalkingOptions *walkingOptions; // @synthesize walkingOptions=_walkingOptions;
@property(retain, nonatomic) GEOTransitOptions *transitOptions; // @synthesize transitOptions=_transitOptions;
@property(retain, nonatomic) GEOAutomobileOptions *automobileOptions; // @synthesize automobileOptions=_automobileOptions;
@property(retain, nonatomic) NSDate *arrivalDate; // @synthesize arrivalDate=_arrivalDate;
@property(retain, nonatomic) NSDate *departureDate; // @synthesize departureDate=_departureDate;
@property(nonatomic) _Bool startNavigationAutomatically; // @synthesize startNavigationAutomatically=_startNavigationAutomatically;
@property(copy, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;
@property(nonatomic) unsigned long long maximumNumberOfRoutes; // @synthesize maximumNumberOfRoutes=_maximumNumberOfRoutes;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(retain, nonatomic) NanoDirectionWaypoint *destinationWaypoint; // @synthesize destinationWaypoint=_destinationWaypoint;
@property(retain, nonatomic) NanoDirectionWaypoint *originWaypoint; // @synthesize originWaypoint=_originWaypoint;
@property(nonatomic) unsigned long long preferredMode; // @synthesize preferredMode=_preferredMode;
@property(retain, nonatomic) GEOCompanionRouteContext *companionRouteContext; // @synthesize companionRouteContext=_companionRouteContext;
@property(readonly, nonatomic) GEOApplicationAuditToken *auditToken; // @synthesize auditToken=_auditToken;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000002ecc1
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000002e8f6
- (void)_populateCopy:(id)arg1;	// IMP=0x001000000002e81b
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000002e7e7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000002e7b3
@property(readonly, nonatomic) int resolvedTransportType;
- (id)requestedCompanionRouteDetails;	// IMP=0x001000000002e69d
- (id)init;	// IMP=0x001000000002e134

@end
