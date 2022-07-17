//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIFeedbackPlayer_Internal-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIFeedbackDummyEngine <_UIFeedbackPlayer_Internal>
{
    CDUnknownBlockType _invalidationBlock;	// 80 = 0x50
}

+ (_Bool)_supportsPlayingIndividualFeedback:(id)arg1;	// IMP=0x000000000066dccd
+ (id)sharedEngine;	// IMP=0x000000000066dc48
- (void).cxx_destruct;	// IMP=0x000000000066e157
@property(copy, nonatomic) CDUnknownBlockType invalidationBlock; // @synthesize invalidationBlock=_invalidationBlock;
- (id)_stats_key;	// IMP=0x000000000066e128
- (void)_internal_stopFeedbackData:(id)arg1 forFeedback:(id)arg2;	// IMP=0x000000000066e0bd
- (void)_stopFeedback:(id)arg1;	// IMP=0x000000000066dfac
- (_Bool)_internal_playFeedbackData:(id)arg1 forFeedback:(id)arg2 atTime:(double)arg3;	// IMP=0x000000000066df2e
- (void)_playFeedback:(id)arg1 atTime:(double)arg2;	// IMP=0x000000000066de09
- (void)_updateValueForParameters:(id)arg1 withKey:(id)arg2;	// IMP=0x000000000066de03
- (void)_internal_dequeueReusableFeedbackPlayerWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000066ddf2
- (void)_internal_activateUnderlyingPlayerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000066dcd7

@end
