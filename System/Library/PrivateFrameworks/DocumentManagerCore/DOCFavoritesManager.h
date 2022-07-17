//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface DOCFavoritesManager
{
}

+ (id)favoritesCollection;	// IMP=0x0000000000006a85
+ (id)sharedManager;	// IMP=0x00000000000069a7
- (void)runInMainThread:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008c0e
- (void)favoriteItems:(id)arg1 ranks:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000089e5
- (id)_newlyComputedRanksForItems:(id)arg1;	// IMP=0x000000000000879c
- (void)redistributeRanksCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008616
- (void)insertFavorite:(id)arg1 atIndex:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000830a
- (void)removeFavorite:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008099
- (void)moveFavorite:(id)arg1 toTargetIndex:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000007cf8
- (void)updateFavoritesRanksToMatchOrderedFavorites:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000748f
- (void)_reverseInsertAll:(id)arg1 atIndex:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000007092
- (void)insertFavorites:(id)arg1 atIndex:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000006fc0
- (void)addFavorite:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006fa9
@property(readonly) _Bool isGathering;
@property(readonly) NSArray *favoritedLocations;

@end
