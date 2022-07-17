//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIFeedbackContinuousPlayable-Protocol.h>
#import <UIKitCore/_UIFeedbackDiscretePlayable-Protocol.h>

@class NSMutableArray, NSString, NSTimer;

@interface _UIFeedbackPattern <_UIFeedbackDiscretePlayable, _UIFeedbackContinuousPlayable>
{
    _Bool _canReuseCoreHapticsPlayer;	// 112 = 0x70
    _Bool _highPriority;	// 113 = 0x71
    _Bool _isRepeating;	// 114 = 0x72
    double _duration;	// 120 = 0x78
    NSMutableArray *_feedbacks;	// 128 = 0x80
    NSTimer *_repeatTimer;	// 136 = 0x88
}

+ (Class)_parametersClass;	// IMP=0x000000000065a58b
+ (id)feedbackPattern;	// IMP=0x000000000065a579
+ (id)type;	// IMP=0x000000000065a56c
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000065a564
- (void).cxx_destruct;	// IMP=0x000000000065c13d
@property(retain, nonatomic) NSTimer *repeatTimer; // @synthesize repeatTimer=_repeatTimer;
@property(readonly, nonatomic) _Bool isRepeating; // @synthesize isRepeating=_isRepeating;
@property(retain, nonatomic) NSMutableArray *feedbacks; // @synthesize feedbacks=_feedbacks;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic, getter=isHighPriority) _Bool highPriority; // @synthesize highPriority=_highPriority;
- (_Bool)canReuseCoreHapticsPlayer;	// IMP=0x000000000065bf4e
- (void)setCanReuseCoreHapticsPlayer:(_Bool)arg1;	// IMP=0x000000000065bf3e
- (id)_debugDictionary;	// IMP=0x000000000065be9d
- (void)setPosition:(float)arg1;	// IMP=0x000000000065be6e
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
- (void)stop;	// IMP=0x000000000065bac9
- (void)_playPattern;	// IMP=0x000000000065b920
- (void)play;	// IMP=0x000000000065b88d
- (id)_allSystemSoundIDs;	// IMP=0x000000000065b6e1
- (id)_allEventTypes;	// IMP=0x000000000065b535
- (id)_individualFeedbacks;	// IMP=0x000000000065b375
- (unsigned long long)_effectivePlayableFeedbackTypes;	// IMP=0x000000000065b23a
- (void)addFeedback:(id)arg1 atTime:(double)arg2;	// IMP=0x000000000065b07a
- (id)_playableProtocol;	// IMP=0x000000000065ae66
- (id)dictionaryRepresentation;	// IMP=0x000000000065aba0
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x000000000065a7ba
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000065a73f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000065a59c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
