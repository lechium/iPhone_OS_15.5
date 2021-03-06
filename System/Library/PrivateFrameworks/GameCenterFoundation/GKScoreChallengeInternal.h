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

+ (id)secureCodedPropertyKeys;	// IMP=0x00000000000fb554
+ (id)internalRepresentation;	// IMP=0x00000000000fb542
- (void).cxx_destruct;	// IMP=0x00000000000fbb74
@property(retain, nonatomic) GKLeaderboardInternal *leaderboard; // @synthesize leaderboard=_leaderboard;
@property(copy, nonatomic) GKScoreInternal *score; // @synthesize score=_score;
- (id)titleText;	// IMP=0x00000000000fb9b4
- (unsigned long long)type;	// IMP=0x00000000000fb9a9
- (id)serverRepresentationForReceivingPlayer:(id)arg1;	// IMP=0x00000000000fb67a

@end

