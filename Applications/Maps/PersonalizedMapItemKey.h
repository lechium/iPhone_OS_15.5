//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol GEOMapItem;

__attribute__((visibility("hidden")))
@interface PersonalizedMapItemKey : NSObject
{
    unsigned long long _hash;	// 8 = 0x8
    _Bool _hasDisambiguationRadiusMeters;	// 16 = 0x10
    float _disambiguationRadiusMeters;	// 20 = 0x14
    id <GEOMapItem> _geoMapItem;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000090509e
@property(readonly, nonatomic) float disambiguationRadiusMeters; // @synthesize disambiguationRadiusMeters=_disambiguationRadiusMeters;
@property(readonly, nonatomic) _Bool hasDisambiguationRadiusMeters; // @synthesize hasDisambiguationRadiusMeters=_hasDisambiguationRadiusMeters;
@property(readonly, nonatomic) id <GEOMapItem> geoMapItem; // @synthesize geoMapItem=_geoMapItem;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000905075
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000904df1
- (id)initWithMapItem:(id)arg1 disambiguationRadiusMeters:(float)arg2;	// IMP=0x0010000000904d91
- (id)initWithMapItem:(id)arg1;	// IMP=0x0010000000904d3b
- (id)initWithGeoMapItem:(id)arg1 disambiguationRadiusMeters:(float)arg2;	// IMP=0x0010000000904d08
- (id)initWithGeoMapItem:(id)arg1;	// IMP=0x0010000000904c8c
- (id)init;	// IMP=0x0010000000904c7e

@end

