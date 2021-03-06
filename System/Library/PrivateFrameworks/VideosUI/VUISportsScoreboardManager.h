//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSTimer;

__attribute__((visibility("hidden")))
@interface VUISportsScoreboardManager : NSObject
{
    _Bool _updateInProgress;	// 8 = 0x8
    NSMutableDictionary *_sportsEventsById;	// 16 = 0x10
    NSTimer *_scoreboardUpdateTimer;	// 24 = 0x18
    long long _scoreboardUpdateInterval;	// 32 = 0x20
}

+ (void)unregisterDelegate:(id)arg1 canonicalId:(id)arg2;	// IMP=0x000000000027f7c0
+ (void)registerDelegate:(id)arg1 canonicalId:(id)arg2;	// IMP=0x000000000027f610
+ (id)sharedInstance;	// IMP=0x000000000027f2e1
- (void).cxx_destruct;	// IMP=0x0000000000280c3c
@property(nonatomic) _Bool updateInProgress; // @synthesize updateInProgress=_updateInProgress;
@property(nonatomic) long long scoreboardUpdateInterval; // @synthesize scoreboardUpdateInterval=_scoreboardUpdateInterval;
@property(retain, nonatomic) NSTimer *scoreboardUpdateTimer; // @synthesize scoreboardUpdateTimer=_scoreboardUpdateTimer;
@property(retain, nonatomic) NSMutableDictionary *sportsEventsById; // @synthesize sportsEventsById=_sportsEventsById;
- (void)_invalidateTimer;	// IMP=0x0000000000280b58
- (void)_resetTimer;	// IMP=0x0000000000280967
- (void)_updateTimer;	// IMP=0x00000000002808ff
- (void)_registerToPlaybackNotifications;	// IMP=0x0000000000280898
- (void)_registerToApplicationNotifications;	// IMP=0x00000000002807de
- (void)_playbackUIBeingShownDidChange:(id)arg1;	// IMP=0x00000000002805ad
- (void)_updateScores:(id)arg1;	// IMP=0x0000000000280247
- (id)_prepareJSContextDictionaryArgument;	// IMP=0x000000000027ff40
- (void)_getScoreboardUpdates;	// IMP=0x000000000027f8f6
- (id)init;	// IMP=0x000000000027f336

@end

