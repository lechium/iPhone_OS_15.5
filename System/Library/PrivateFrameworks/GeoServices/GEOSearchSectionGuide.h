//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface GEOSearchSectionGuide : NSObject
{
    NSArray *_placeCollections;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000618bd5
@property(readonly, nonatomic) NSArray *placeCollections; // @synthesize placeCollections=_placeCollections;
- (id)initWithSearchSectionGuide:(id)arg1 mapsResults:(id)arg2;	// IMP=0x0000000000618335
- (id)initWithPlaceCollections:(id)arg1;	// IMP=0x0000000000618287
- (id)init;	// IMP=0x000000000061825d

@end
