//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOExploreGuides, GEOMapServiceTraits;

@protocol SearchHomeDataSourceDelegate
- (void)showGuidesHomeFromExploreGuides:(GEOExploreGuides *)arg1;
- (void)showCitySelector;
- (void)seeAllTappedForRecents;
- (void)seeAllTappedForCollections;
- (double)isTouristHereValue;
- (GEOMapServiceTraits *)newTraits;
@end

