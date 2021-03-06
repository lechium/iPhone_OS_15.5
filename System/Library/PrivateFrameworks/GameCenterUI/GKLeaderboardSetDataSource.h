//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary;

@interface GKLeaderboardSetDataSource
{
    NSDictionary *_leaderboardSetAssetNames;	// 8 = 0x8
    NSDictionary *_leaderboardAssetNames;	// 16 = 0x10
    NSArray *_leaderboardSets;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000ecffd
@property(retain, nonatomic) NSArray *leaderboardSets; // @synthesize leaderboardSets=_leaderboardSets;
@property(retain, nonatomic) NSDictionary *leaderboardAssetNames; // @synthesize leaderboardAssetNames=_leaderboardAssetNames;
@property(retain, nonatomic) NSDictionary *leaderboardSetAssetNames; // @synthesize leaderboardSetAssetNames=_leaderboardSetAssetNames;
- (void)presentLeaderboardsListWithSet:(id)arg1 segueToLeaderboard:(id)arg2;	// IMP=0x00000000000eccf5
- (void)handleSelectionInCollectionView:(id)arg1 forItemAtIndexPath:(id)arg2;	// IMP=0x00000000000ec995
- (void)prepareCell:(id)arg1 forItemAtIndexPath:(id)arg2;	// IMP=0x00000000000ec6ce
- (void)updateHighlightsInSectionHeader:(id)arg1;	// IMP=0x00000000000ec654
- (struct CGSize)standardCellSizeForCollectionView:(id)arg1;	// IMP=0x00000000000ec25c
- (id)itemForIndexPath:(id)arg1;	// IMP=0x00000000000ec189
- (long long)itemCount;	// IMP=0x00000000000ec145
- (void)removeLeaderboardSetsWithoutImages;	// IMP=0x00000000000ebec7
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ebae6
- (id)title;	// IMP=0x00000000000eba9e
- (long long)allowedColumnCount:(long long)arg1;	// IMP=0x00000000000eb9a6

@end

