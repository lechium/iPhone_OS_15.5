//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKGameRecord, GKLeaderboardSet, NSArray, NSDictionary;

@interface GKDashboardLeaderboardListDataSource
{
    NSDictionary *_assetNames;	// 8 = 0x8
    GKGameRecord *_gameRecord;	// 16 = 0x10
    GKLeaderboardSet *_leaderboardSet;	// 24 = 0x18
    NSArray *_leaderboards;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000078eb7
@property(retain, nonatomic) NSArray *leaderboards; // @synthesize leaderboards=_leaderboards;
@property(retain, nonatomic) GKLeaderboardSet *leaderboardSet; // @synthesize leaderboardSet=_leaderboardSet;
@property(retain, nonatomic) GKGameRecord *gameRecord; // @synthesize gameRecord=_gameRecord;
@property(retain, nonatomic) NSDictionary *assetNames; // @synthesize assetNames=_assetNames;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000078bed
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000078ba2
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000000078b91
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000078907
- (id)sectionHeaderText;	// IMP=0x0000000000078814
- (id)itemForIndexPath:(id)arg1;	// IMP=0x0000000000078771
- (double)preferredCollectionHeight;	// IMP=0x0000000000078763
- (long long)itemCount;	// IMP=0x0000000000078746
- (void)removeLeaderboardsWithoutImages;	// IMP=0x00000000000784e4
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000780bd
- (void)setupCollectionView:(id)arg1;	// IMP=0x0000000000077fea
- (id)initWithGameRecord:(id)arg1 leaderboardSet:(id)arg2;	// IMP=0x0000000000077f3a

@end

