//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOExploreGuides, GEOPDCollectionSuggestionResult, NSArray;

@interface GEOCollectionSuggestionResult : NSObject
{
    GEOPDCollectionSuggestionResult *_collectionSuggestionResult;	// 8 = 0x8
    NSArray *_collections;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000035e6c6
@property(readonly, nonatomic) NSArray *collections; // @synthesize collections=_collections;
@property(readonly, nonatomic) GEOExploreGuides *exploreGuides;
- (id)initWithCollectionSuggestionResult:(id)arg1 mapsResults:(id)arg2;	// IMP=0x000000000035dee8

@end

