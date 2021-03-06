//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSSharedStoreReview;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VUIAppReviewManager : NSObject
{
    unsigned long long _numberOfAddToUpNexts;	// 8 = 0x8
    unsigned long long _numberOfPlaybacks;	// 16 = 0x10
    unsigned long long _numberOfAddToUpNextsBeforePrompting;	// 24 = 0x18
    unsigned long long _numberOfPlaybacksBeforePrompting;	// 32 = 0x20
    double _completionThreshold;	// 40 = 0x28
    double _highestPlaybackProgress;	// 48 = 0x30
    AMSSharedStoreReview *_sharedStoreReview;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_queue;	// 64 = 0x40
    unsigned long long _lastPlaybackEvent;	// 72 = 0x48
}

+ (id)sharedInstance;	// IMP=0x00000000000c1bee
- (void).cxx_destruct;	// IMP=0x00000000000c2ef0
@property(nonatomic) unsigned long long lastPlaybackEvent; // @synthesize lastPlaybackEvent=_lastPlaybackEvent;
- (_Bool)_shouldAttemptToPrompt;	// IMP=0x00000000000c2bb4
- (void)_attemptToPrompt;	// IMP=0x00000000000c297f
- (_Bool)_isYouthAccount;	// IMP=0x00000000000c28d0
- (void)_resetStates;	// IMP=0x00000000000c28c0
- (void)dealloc;	// IMP=0x00000000000c284b
- (void)reportApplicationDidForegroundtoAMSSharedStoreReview;	// IMP=0x00000000000c2835
- (void)_handleIsPlaybackUIBeingShownDidChange:(id)arg1;	// IMP=0x00000000000c2319
- (void)setMostRecentPlaybackProgressForNonTrailerContent:(double)arg1;	// IMP=0x00000000000c2307
- (void)processAddToUpNext;	// IMP=0x00000000000c208d
- (void)isFeatureEnabled:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c1ee9
- (id)init;	// IMP=0x00000000000c1c43

@end

