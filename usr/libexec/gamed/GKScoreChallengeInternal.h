//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKLeaderboardInternal, GKScoreInternal;

@interface GKScoreChallengeInternal
{
    GKScoreInternal *_score;	// 88 = 0x58
    GKLeaderboardInternal *_leaderboard;	// 96 = 0x60
}

+ (id)secureCodedPropertyKeys;	// IMP=0x00400000001694fe
+ (id)internalRepresentation;	// IMP=0x00100000001694ec
- (void).cxx_destruct;	// IMP=0x0020000000169b1e
@property(retain, nonatomic) GKLeaderboardInternal *leaderboard; // @synthesize leaderboard=_leaderboard;
@property(copy, nonatomic) GKScoreInternal *score; // @synthesize score=_score;
- (id)titleText;	// IMP=0x001000000016995e
- (unsigned long long)type;	// IMP=0x0010000000169953
- (id)serverRepresentationForReceivingPlayer:(id)arg1;	// IMP=0x0010000000169624

@end

