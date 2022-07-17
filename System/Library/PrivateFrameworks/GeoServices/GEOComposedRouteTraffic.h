//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class NSArray;

@interface GEOComposedRouteTraffic : NSObject <NSSecureCoding>
{
    NSArray *_trafficColors;	// 8 = 0x8
    NSArray *_incidents;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000102d864
- (void).cxx_destruct;	// IMP=0x000000000102db45
@property(readonly, nonatomic) NSArray *routeIncidents; // @synthesize routeIncidents=_incidents;
@property(readonly, nonatomic) NSArray *routeTrafficColors; // @synthesize routeTrafficColors=_trafficColors;
- (id)description;	// IMP=0x000000000102da51
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000102d9e3
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000102d86c
- (id)_incidentsForOldRoute:(id)arg1 etaRoute:(id)arg2;	// IMP=0x000000000102cf1c
- (id)_incidentsForOldRoute:(id)arg1 geoIncidentsFromResponse:(id)arg2;	// IMP=0x000000000102c4fb
- (id)_incidentsForRoute:(id)arg1 etaRoute:(id)arg2;	// IMP=0x000000000102bd9c
- (id)_incidentsForRoute:(id)arg1;	// IMP=0x000000000102b7a8
- (void)_buildIncidentsForRoute:(id)arg1 etaRoute:(id)arg2 initializerData:(id)arg3;	// IMP=0x000000000102b3bc
- (id)_trafficColorInfosFromDebugSettingsForRoute:(id)arg1;	// IMP=0x000000000102ae2e
- (id)_trafficColorInfosFromTrafficBuilder:(id)arg1 route:(id)arg2;	// IMP=0x000000000102ab11
- (id)initWithColorInfos:(id)arg1 incidentInfos:(id)arg2;	// IMP=0x000000000102a99f
- (id)initWithRoute:(id)arg1 etaRoute:(id)arg2;	// IMP=0x000000000102a60f
- (id)initWithRoute:(id)arg1 initializerData:(id)arg2;	// IMP=0x000000000102a4d5
@property(readonly, nonatomic) unsigned long long trafficColorOffsetsCount;
@property(readonly, nonatomic) unsigned int *trafficColorOffsets;
@property(readonly, nonatomic) unsigned long long trafficColorsCount;
@property(readonly, nonatomic) unsigned int *trafficColors;
@property(readonly, nonatomic) NSArray *trafficIncidentOffsets;
@property(readonly, nonatomic) NSArray *trafficIncidents;

@end
