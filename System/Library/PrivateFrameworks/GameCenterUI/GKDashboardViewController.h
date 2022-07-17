//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKCollectionMultiDataSource, GKDashboardChallengeDataSource, GKDashboardHeaderView, GKGameRecord, NSArray, NSMutableDictionary, NSString;

@interface GKDashboardViewController
{
    _Bool _shouldShowPlayForChallenge;	// 8 = 0x8
    _Bool _shouldShowPlayForTurnBasedMatch;	// 9 = 0x9
    _Bool _shouldShowQuitForTurnBasedMatch;	// 10 = 0xa
    long long _viewState;	// 16 = 0x10
    NSString *_leaderboardIdentifier;	// 24 = 0x18
    GKGameRecord *_gameRecord;	// 32 = 0x20
    GKDashboardHeaderView *_headerView;	// 40 = 0x28
    GKCollectionMultiDataSource *_multiDataSource;	// 48 = 0x30
    NSMutableDictionary *_viewStateIndexes;	// 56 = 0x38
    NSArray *_titles;	// 64 = 0x40
    GKDashboardChallengeDataSource *_challengeDataSource;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000010a48f
@property(retain, nonatomic) GKDashboardChallengeDataSource *challengeDataSource; // @synthesize challengeDataSource=_challengeDataSource;
@property(retain, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(retain, nonatomic) NSMutableDictionary *viewStateIndexes; // @synthesize viewStateIndexes=_viewStateIndexes;
@property(retain, nonatomic) GKCollectionMultiDataSource *multiDataSource; // @synthesize multiDataSource=_multiDataSource;
@property(retain, nonatomic) GKDashboardHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) GKGameRecord *gameRecord; // @synthesize gameRecord=_gameRecord;
@property(nonatomic) _Bool shouldShowQuitForTurnBasedMatch; // @synthesize shouldShowQuitForTurnBasedMatch=_shouldShowQuitForTurnBasedMatch;
@property(nonatomic) _Bool shouldShowPlayForTurnBasedMatch; // @synthesize shouldShowPlayForTurnBasedMatch=_shouldShowPlayForTurnBasedMatch;
@property(nonatomic) _Bool shouldShowPlayForChallenge; // @synthesize shouldShowPlayForChallenge=_shouldShowPlayForChallenge;
@property(retain, nonatomic) NSString *leaderboardIdentifier; // @synthesize leaderboardIdentifier=_leaderboardIdentifier;
@property(nonatomic) long long viewState; // @synthesize viewState=_viewState;
- (void)selectedSegmentChanged:(id)arg1;	// IMP=0x000000000010a0d9
- (void)showLeaderboardVC;	// IMP=0x0000000000109fa9
@property(nonatomic) long long leaderboardTimeScope;
- (void)_gkRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;	// IMP=0x0000000000109d04
- (_Bool)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;	// IMP=0x0000000000109ce9
- (void)setupNoContentView:(id)arg1 withError:(id)arg2;	// IMP=0x0000000000109c3c
- (void)loadData;	// IMP=0x0000000000109bc7
- (void)selectDataSourceAtIndex:(long long)arg1 updateCollectionView:(_Bool)arg2;	// IMP=0x000000000010995e
- (void)addDataSource:(id)arg1 withTitle:(id)arg2 forViewState:(long long)arg3;	// IMP=0x000000000010961b
- (void)setupSegmentedControl;	// IMP=0x00000000001093c8
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000000109257
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000109216
- (void)viewDidLoad;	// IMP=0x0000000000108da0
- (id)initWithGameRecord:(id)arg1;	// IMP=0x0000000000108c11

@end
