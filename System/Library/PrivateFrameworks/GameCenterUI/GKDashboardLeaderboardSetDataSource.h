//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKGameRecord, NSArray, NSDictionary;

@interface GKDashboardLeaderboardSetDataSource
{
    NSDictionary *_leaderboardSetAssetNames;	// 8 = 0x8
    NSDictionary *_leaderboardAssetNames;	// 16 = 0x10
    GKGameRecord *_gameRecord;	// 24 = 0x18
    NSArray *_leaderboardSets;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001721e2
@property(retain, nonatomic) NSArray *leaderboardSets; // @synthesize leaderboardSets=_leaderboardSets;
@property(retain, nonatomic) GKGameRecord *gameRecord; // @synthesize gameRecord=_gameRecord;
@property(retain, nonatomic) NSDictionary *leaderboardAssetNames; // @synthesize leaderboardAssetNames=_leaderboardAssetNames;
@property(retain, nonatomic) NSDictionary *leaderboardSetAssetNames; // @synthesize leaderboardSetAssetNames=_leaderboardSetAssetNames;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000171cb2
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000171c67
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000000171c56
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000001719cc
- (id)sectionHeaderText;	// IMP=0x00000000001718d9
- (id)itemForIndexPath:(id)arg1;	// IMP=0x0000000000171836
- (double)preferredCollectionHeight;	// IMP=0x0000000000171828
- (long long)itemCount;	// IMP=0x000000000017180b
- (void)removeLeaderboardSetsWithoutImages;	// IMP=0x00000000001715a9
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000171206
- (void)setupCollectionView:(id)arg1;	// IMP=0x0000000000171133
- (id)initWithGameRecord:(id)arg1;	// IMP=0x00000000001710b1

@end

