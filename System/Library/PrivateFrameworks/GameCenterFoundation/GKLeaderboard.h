//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKLeaderboardInternal, GKScore, NSArray, NSDate, NSString;
@protocol GKLeaderboardDelegate;

@interface GKLeaderboard : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    int _loadingCount;	// 12 = 0xc
    NSArray *_players;	// 16 = 0x10
    NSArray *_scores;	// 24 = 0x18
    long long _timeScope;	// 32 = 0x20
    long long _playerScope;	// 40 = 0x28
    GKLeaderboardInternal *_internal;	// 48 = 0x30
    id <GKLeaderboardDelegate> _delegate;	// 56 = 0x38
    GKScore *_localPlayerScore;	// 64 = 0x40
    struct _NSRange _range;	// 72 = 0x48
}

+ (_Bool)instancesRespondToSelector:(SEL)arg1;	// IMP=0x0000000000047eb2
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000000047d2b
+ (void)loadHighlightsWithPlayerScope:(long long)arg1 timeScope:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000046a78
+ (void)submitScore:(long long)arg1 context:(unsigned long long)arg2 player:(id)arg3 leaderboardIDs:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000044e3b
+ (void)loadLeaderboardsWithIDs:(id)arg1 setIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000044541
+ (void)loadLeaderboardsWithIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000044403
+ (void)setDefaultLeaderboard:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000044379
+ (void)loadLeaderboardsForGame:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000442c7
+ (void)loadLeaderboardsForGame:(id)arg1 withPlayer:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000442a6
+ (void)loadLeaderboardWithIdentifier:(id)arg1 forGame:(id)arg2 withPlayer:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000043c4d
+ (void)loadLeaderboardsForGame:(id)arg1 forSet:(id)arg2 withPlayer:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000043439
+ (void)loadLeaderboardsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000432b5
+ (void)loadCategoriesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000042efa
- (void).cxx_destruct;	// IMP=0x00000000000480f9
@property(nonatomic) int loadingCount; // @synthesize loadingCount=_loadingCount;
@property(retain, nonatomic) GKScore *localPlayerScore; // @synthesize localPlayerScore=_localPlayerScore;
@property(nonatomic) __weak id <GKLeaderboardDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) GKLeaderboardInternal *internal; // @synthesize internal=_internal;
@property(nonatomic) long long playerScope; // @synthesize playerScope=_playerScope;
@property(nonatomic) long long timeScope; // @synthesize timeScope=_timeScope;
@property(retain, nonatomic) NSArray *scores; // @synthesize scores=_scores;
@property(nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSArray *players; // @synthesize players=_players;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x0000000000047f8c
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x0000000000047f09
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000047e37
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000000047d9d
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x0000000000047d19
- (void)deleteWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000478f3
- (void)endWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000047604
- (void)startWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000047315
- (id)creator;	// IMP=0x000000000004728b
- (void)loadSummaryWithTimeScope:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000465cd
- (void)loadEntriesForPlayers:(id)arg1 timeScope:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000045ee9
- (void)loadEntriesWithGameDescriptor:(id)arg1 playerScope:(long long)arg2 timeScope:(long long)arg3 range:(struct _NSRange)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000004582c
- (void)loadEntriesForPlayerScope:(long long)arg1 timeScope:(long long)arg2 range:(struct _NSRange)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000456d2
- (void)submitScore:(long long)arg1 context:(unsigned long long)arg2 player:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000045235
- (void)loadPreviousOccurrenceWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000044a13
- (void)decrementLoadingCountAtomically;	// IMP=0x000000000004436b
- (void)incrementLoadingCountAtomically;	// IMP=0x000000000004435d
- (void)loadScoresForGame:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000042787
- (void)loadScoresForRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000426b3
- (id)scoreRequestForGame:(id)arg1;	// IMP=0x000000000004246c
- (void)loadScoresWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000423f0
@property(readonly, nonatomic) double duration;
@property(readonly, getter=isLoading) _Bool loading;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
- (id)description;	// IMP=0x00000000000420c0
- (unsigned long long)hash;	// IMP=0x0000000000042020
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000041dd4
- (id)initWithPlayerIDs:(id)arg1;	// IMP=0x0000000000041d7e
- (id)initWithPlayers:(id)arg1;	// IMP=0x0000000000041cb7
- (id)init;	// IMP=0x0000000000041c5d
- (id)initWithInternalRepresentation:(id)arg1;	// IMP=0x0000000000041bd5

// Remaining properties
@property(readonly, nonatomic) NSString *baseLeaderboardID; // @dynamic baseLeaderboardID;
@property(copy, nonatomic) NSString *category; // @dynamic category;
@property(readonly, nonatomic) long long friendRank; // @dynamic friendRank;
@property(readonly, nonatomic) long long friendRankCount; // @dynamic friendRankCount;
@property(readonly, nonatomic) NSString *groupIdentifier; // @dynamic groupIdentifier;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(readonly, nonatomic) NSString *localizedTitle; // @dynamic localizedTitle;
@property(readonly, nonatomic) unsigned long long maxRange; // @dynamic maxRange;
@property(readonly, nonatomic) NSDate *nextStartDate; // @dynamic nextStartDate;
@property(readonly, nonatomic) long long overallRank; // @dynamic overallRank;
@property(readonly, nonatomic) long long overallRankCount; // @dynamic overallRankCount;
@property(readonly, nonatomic) NSDate *startDate; // @dynamic startDate;
@property(readonly, copy, nonatomic) NSString *title; // @dynamic title;
@property(readonly, nonatomic) long long type; // @dynamic type;

@end

