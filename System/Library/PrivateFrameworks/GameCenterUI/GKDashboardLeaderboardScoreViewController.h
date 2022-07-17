//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKDashboardLeaderboardScoreDataSource, GKDashboardLeaderboardScoreHeaderView, GKLeaderboard;

@interface GKDashboardLeaderboardScoreViewController
{
    GKDashboardLeaderboardScoreHeaderView *_headerView;	// 8 = 0x8
    GKLeaderboard *_leaderboard;	// 16 = 0x10
    GKDashboardLeaderboardScoreDataSource *_friendDataSource;	// 24 = 0x18
    GKDashboardLeaderboardScoreDataSource *_globalDataSource;	// 32 = 0x20
    long long _timeScope;	// 40 = 0x28
}

+ (void)setInitialTimeScope:(long long)arg1;	// IMP=0x00000000001773ce
+ (long long)initialTimeScope;	// IMP=0x00000000001773c1
- (void).cxx_destruct;	// IMP=0x00000000001787e4
@property(nonatomic) long long timeScope; // @synthesize timeScope=_timeScope;
@property(retain, nonatomic) GKDashboardLeaderboardScoreDataSource *globalDataSource; // @synthesize globalDataSource=_globalDataSource;
@property(retain, nonatomic) GKDashboardLeaderboardScoreDataSource *friendDataSource; // @synthesize friendDataSource=_friendDataSource;
@property(retain, nonatomic) GKLeaderboard *leaderboard; // @synthesize leaderboard=_leaderboard;
@property(retain, nonatomic) GKDashboardLeaderboardScoreHeaderView *headerView; // @synthesize headerView=_headerView;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000001785a1
- (void)donePressed:(id)arg1;	// IMP=0x0000000000178587
- (void)timeScopePressed:(id)arg1;	// IMP=0x0000000000177ef5
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000177e6f
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000177ce7
- (void)updateColumnLayoutForSize:(struct CGSize)arg1;	// IMP=0x0000000000177bd2
- (_Bool)shouldUseTwoColumnLayoutForSize:(struct CGSize)arg1;	// IMP=0x0000000000177b24
- (void)setupNoContentView:(id)arg1 withError:(id)arg2;	// IMP=0x0000000000177782
- (void)dataUpdated:(_Bool)arg1 withError:(id)arg2;	// IMP=0x00000000001775e0
- (void)viewDidLoad;	// IMP=0x00000000001773db
- (id)initWithGameRecord:(id)arg1 leaderboard:(id)arg2;	// IMP=0x0000000000177031

@end
