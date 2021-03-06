//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameCenterFoundation/NSCoding-Protocol.h>
#import <GameCenterFoundation/NSCopying-Protocol.h>
#import <GameCenterFoundation/NSSecureCoding-Protocol.h>

@class GKAchievementInternal, GKGame, GKPlayer, NSDate, NSString;

@interface GKAchievement : NSObject <NSCopying, NSCoding, NSSecureCoding>
{
    _Bool _showsCompletionBanner;	// 8 = 0x8
    GKAchievementInternal *_internal;	// 16 = 0x10
    GKGame *_game;	// 24 = 0x18
    GKPlayer *_player;	// 32 = 0x20
}

+ (_Bool)instancesRespondToSelector:(SEL)arg1;	// IMP=0x000000000003d52a
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;	// IMP=0x000000000003d3a3
+ (void)reportAchievements:(id)arg1 whileScreeningChallenges:(_Bool)arg2 withEligibleChallenges:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000003c72c
+ (void)reportAchievements:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003c712
+ (void)resetAchievementsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000003c5ac
+ (void)loadAchievementWithID:(id)arg1 forGame:(id)arg2 players:(id)arg3 complete:(CDUnknownBlockType)arg4;	// IMP=0x000000000003be5f
+ (void)loadAchievementsForGameV2:(id)arg1 players:(id)arg2 includeUnreported:(_Bool)arg3 includeHidden:(_Bool)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000003b681
+ (void)loadAchievementsForGameV2:(id)arg1 player:(id)arg2 includeUnreported:(_Bool)arg3 includeHidden:(_Bool)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000003b45c
+ (void)loadAchievementsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000003b2d2
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003af5a
- (void).cxx_destruct;	// IMP=0x000000000003d6da
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
@property(nonatomic) _Bool showsCompletionBanner; // @synthesize showsCompletionBanner=_showsCompletionBanner;
@property(retain) GKAchievementInternal *internal; // @synthesize internal=_internal;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x000000000003d604
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x000000000003d581
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000003d4af
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x000000000003d415
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000003d391
- (void)reportAchievementWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000003d30c
- (id)description;	// IMP=0x000000000003b220
@property(readonly, nonatomic, getter=isCompleted) _Bool completed;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003b184
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003b0e7
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003af62
@property(readonly, nonatomic) GKPlayer *player; // @synthesize player=_player;
@property(copy, nonatomic) NSString *playerID; // @dynamic playerID;
- (id)init;	// IMP=0x000000000003acc7
- (id)initWithIdentifier:(id)arg1 forPlayer:(id)arg2;	// IMP=0x000000000003ab6e
- (id)initWithIdentifier:(id)arg1 player:(id)arg2;	// IMP=0x000000000003aa13
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000000003a951
- (id)initWithInternalRepresentation:(id)arg1 playerID:(id)arg2;	// IMP=0x000000000003a714
- (id)initWithInternalRepresentation:(id)arg1;	// IMP=0x000000000003a700
- (unsigned long long)hash;	// IMP=0x000000000003a6bc
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003a5c9
- (id)_achievementDescription;	// IMP=0x000000000003eca7

// Remaining properties
@property(readonly, copy, nonatomic) NSString *groupIdentifier; // @dynamic groupIdentifier;
@property(nonatomic, getter=isHidden) _Bool hidden; // @dynamic hidden;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSDate *lastReportedDate; // @dynamic lastReportedDate;
@property(nonatomic) double percentComplete; // @dynamic percentComplete;

@end

