//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterFoundation/GKGameStatService-Protocol.h>

@class FriendsPlayedGameList, GKGameDescriptor, GKLeaderboardScoreRequest, NSArray, NSManagedObjectContext, NSSet, NSString;

@protocol GKGameStatServicePrivate <GKGameStatService>
+ (FriendsPlayedGameList *)currentFriendsPlayedList:(NSManagedObjectContext *)arg1;
- (oneway void)getReengagementAchievements:(void (^)(GKAchievementInternal *, GKGameInternal *, NSError *))arg1;
- (oneway void)getReengagementAchievement:(void (^)(GKAchievementInternal *, GKGameInternal *, NSError *))arg1;
- (oneway void)getGamesFriendsPlayed:(long long)arg1 type:(NSString *)arg2 withinSecs:(long long)arg3 matchingBundleIDs:(NSSet *)arg4 handler:(void (^)(NSArray *, NSError *))arg5;
- (oneway void)expireGamesFriendsPlayed;
- (oneway void)getHypotheticalLeaderboardRanksForScores:(NSArray *)arg1 forGameDescriptor:(GKGameDescriptor *)arg2 handler:(void (^)(NSArray *, NSError *))arg3;
- (oneway void)getAchievementLeaderboardForRequest:(GKLeaderboardScoreRequest *)arg1 handler:(void (^)(GKLeaderboardInternal *, NSError *))arg2;
@end

