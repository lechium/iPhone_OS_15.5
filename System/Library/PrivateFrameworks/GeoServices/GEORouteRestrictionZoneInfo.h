//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class NSArray;

@interface GEORouteRestrictionZoneInfo : NSObject <NSSecureCoding>
{
    NSArray *_zoneIDs;	// 8 = 0x8
    int _restrictionZoneImpact;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000111f83f
- (void).cxx_destruct;	// IMP=0x000000000111f9de
@property(readonly, nonatomic) int restrictionZoneImpact; // @synthesize restrictionZoneImpact=_restrictionZoneImpact;
@property(readonly, nonatomic) NSArray *zoneIDs; // @synthesize zoneIDs=_zoneIDs;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000111f959
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000111f847
- (id)initWithGeoRoute:(id)arg1;	// IMP=0x000000000111f5b9
- (id)initWithGeoWaypointRoute:(id)arg1;	// IMP=0x000000000111f2d9
- (id)init;	// IMP=0x000000000111f2af

@end

