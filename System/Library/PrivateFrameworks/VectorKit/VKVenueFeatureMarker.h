//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOMapItemIdentifier, NSArray;

@interface VKVenueFeatureMarker
{
    _Bool _localize;	// 8 = 0x8
}

- (id)shortName;	// IMP=0x00000000005d1d97
- (id)name;	// IMP=0x00000000005d1ce4
@property(readonly, nonatomic) NSArray *buildings;
@property(readonly, nonatomic) GEOMapItemIdentifier *mapIdentifier;
@property(readonly, nonatomic) unsigned long long businessID;
- (const void *)venueFeatureMarker;	// IMP=0x00000000005d1ad0
- (id)initWithVenue:(const void *)arg1 localize:(_Bool)arg2;	// IMP=0x00000000005d1964

@end

