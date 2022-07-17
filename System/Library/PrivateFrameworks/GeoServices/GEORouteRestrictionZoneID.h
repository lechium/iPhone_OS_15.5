//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@interface GEORouteRestrictionZoneID : NSObject <NSSecureCoding>
{
    unsigned long long _identifier;	// 8 = 0x8
    unsigned long long _version;	// 16 = 0x10
    long long _restrictionType;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000111f14c
@property(readonly, nonatomic) long long restrictionType; // @synthesize restrictionType=_restrictionType;
@property(readonly, nonatomic) unsigned long long version; // @synthesize version=_version;
@property(readonly, nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000111f20e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000111f154
- (id)initWithGeoRestrictedZoneId:(id)arg1;	// IMP=0x000000000111f09d
- (id)init;	// IMP=0x000000000111f073

@end
