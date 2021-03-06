//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActivityAchievementsDaemon/NSObject-Protocol.h>

@class ACHAchievementStore, NSSet;

@protocol ACHAchievementStoreObserving <NSObject>
- (void)achievementStore:(ACHAchievementStore *)arg1 didRemoveAchievements:(NSSet *)arg2;
- (void)achievementStore:(ACHAchievementStore *)arg1 didUpdateAchievements:(NSSet *)arg2;
- (void)achievementStore:(ACHAchievementStore *)arg1 didAddAchievements:(NSSet *)arg2;

@optional
- (void)achievementStoreDidFinishInitialFetch:(ACHAchievementStore *)arg1;
@end

