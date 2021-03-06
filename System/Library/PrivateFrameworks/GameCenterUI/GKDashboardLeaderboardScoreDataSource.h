//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKGameRecord, GKLeaderboard, NSArray, UIFont;

@interface GKDashboardLeaderboardScoreDataSource
{
    _Bool _showingMoreScores;	// 8 = 0x8
    _Bool _forceInitialShowMore;	// 9 = 0x9
    GKLeaderboard *_leaderboard;	// 16 = 0x10
    id _timeScopeTarget;	// 24 = 0x18
    SEL _timeScopeAction;	// 32 = 0x20
    GKGameRecord *_gameRecord;	// 40 = 0x28
    NSArray *_scores;	// 48 = 0x30
    long long _visibleItemCount;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000118f94
@property(nonatomic) _Bool forceInitialShowMore; // @synthesize forceInitialShowMore=_forceInitialShowMore;
@property(nonatomic, getter=isShowingMoreScores) _Bool showingMoreScores; // @synthesize showingMoreScores=_showingMoreScores;
@property(nonatomic) long long visibleItemCount; // @synthesize visibleItemCount=_visibleItemCount;
@property(retain, nonatomic) NSArray *scores; // @synthesize scores=_scores;
@property(retain, nonatomic) GKGameRecord *gameRecord; // @synthesize gameRecord=_gameRecord;
@property(nonatomic) SEL timeScopeAction; // @synthesize timeScopeAction=_timeScopeAction;
@property(nonatomic) __weak id timeScopeTarget; // @synthesize timeScopeTarget=_timeScopeTarget;
@property(retain, nonatomic) GKLeaderboard *leaderboard; // @synthesize leaderboard=_leaderboard;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000118a6b
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000118a20
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000001185ad
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;	// IMP=0x0000000000118570
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x00000000001183ba
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000000118378
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000001180d2
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x00000000001180c7
- (void)sectionHeaderButtonPressed:(id)arg1;	// IMP=0x0000000000117fc7
@property(readonly, nonatomic) UIFont *sectionHeaderFont;
- (id)sectionHeaderText;	// IMP=0x0000000000117e6c
- (id)itemForIndexPath:(id)arg1;	// IMP=0x0000000000117d95
- (double)preferredCollectionHeight;	// IMP=0x0000000000117c5a
- (long long)itemCount;	// IMP=0x0000000000117c49
@property(readonly, nonatomic) _Bool needsShowcaseCell; // @dynamic needsShowcaseCell;
- (_Bool)hasFriendsButton;	// IMP=0x0000000000117b88
- (_Bool)isShowcaseIndexPath:(id)arg1;	// IMP=0x0000000000117b25
- (_Bool)isShowMoreIndexPath:(id)arg1;	// IMP=0x0000000000117ac3
@property(readonly, nonatomic) _Bool needsShowMoreCell; // @dynamic needsShowMoreCell;
- (void)revealMoreItemsInCollectionView:(id)arg1 section:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001175e2
- (void)showMoreInCollectionView:(id)arg1 section:(long long)arg2;	// IMP=0x0000000000116cf3
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000116a1c
- (void)setupCollectionView:(id)arg1;	// IMP=0x000000000011684c
@property(nonatomic) long long timeScope; // @dynamic timeScope;
@property(nonatomic) long long playerScope; // @dynamic playerScope;
- (id)initWithGameRecord:(id)arg1 leaderboard:(id)arg2;	// IMP=0x000000000011671c

@end

