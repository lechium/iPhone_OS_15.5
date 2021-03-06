//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIFeedback;
@protocol _UIFeedbackDiscretePlayable;

__attribute__((visibility("hidden")))
@interface _UIClickFeedbackGeneratorConfiguration
{
    _UIFeedback<_UIFeedbackDiscretePlayable> *_clickDownFeedback;	// 8 = 0x8
    _UIFeedback<_UIFeedbackDiscretePlayable> *_clickDownAudioFeedback;	// 16 = 0x10
    _UIFeedback<_UIFeedbackDiscretePlayable> *_clickUpFeedback;	// 24 = 0x18
    _UIFeedback<_UIFeedbackDiscretePlayable> *_clickUpAudioFeedback;	// 32 = 0x20
}

+ (id)defaultConfiguration;	// IMP=0x0000000000641e43
- (void).cxx_destruct;	// IMP=0x0000000000642417
@property(retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *clickDownFeedback; // @synthesize clickDownFeedback=_clickDownFeedback;
@property(retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *clickUpAudioFeedback; // @synthesize clickUpAudioFeedback=_clickUpAudioFeedback;
@property(retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *clickUpFeedback; // @synthesize clickUpFeedback=_clickUpFeedback;
@property(retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *clickDownAudioFeedback; // @synthesize clickDownAudioFeedback=_clickDownAudioFeedback;
- (void)setclickDownFeedback:(id)arg1;	// IMP=0x0000000000642257
- (id)feedbackKeyPaths;	// IMP=0x000000000064213d
@property(readonly, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *clickUpPattern;
@property(readonly, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *clickDownPattern;
- (long long)requiredSupportLevel;	// IMP=0x0000000000641c12

@end

