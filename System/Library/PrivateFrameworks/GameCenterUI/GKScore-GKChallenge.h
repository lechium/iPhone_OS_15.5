//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterFoundation/GKScore.h>

@class _TtC12GameCenterUI15SharingScoreURL;

@interface GKScore (GKChallenge)
+ (void)reportLeaderboardScores:(id)arg1 withEligibleChallenges:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000016ccd8
+ (void)reportScores:(id)arg1 withEligibleChallenges:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000016ccbb
- (void)issueChallengeToPlayers:(id)arg1 message:(id)arg2;	// IMP=0x000000000016cd7c
- (id)challengeComposeControllerWithPlayers:(id)arg1 message:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000016cb33
- (id)challengeComposeControllerWithMessage:(id)arg1 players:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000016c831
@property(nonatomic, readonly) _TtC12GameCenterUI15SharingScoreURL *sharingScoreURL;
- (id)sharingScoreMessageFromLeaderboard:(id)arg1;	// IMP=0x0000000000309860
@end
