//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIWindowRotationAnimationController
{
    _Bool _skipCallbacks;	// 24 = 0x18
    _Bool _updateStatusBarIfNecessary;	// 25 = 0x19
    CDUnknownBlockType _animations;	// 32 = 0x20
    double _duration;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000055eb4a
@property(nonatomic) _Bool updateStatusBarIfNecessary; // @synthesize updateStatusBarIfNecessary=_updateStatusBarIfNecessary;
@property(nonatomic) _Bool skipCallbacks; // @synthesize skipCallbacks=_skipCallbacks;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) CDUnknownBlockType animations; // @synthesize animations=_animations;
- (void)animateTransition:(id)arg1;	// IMP=0x000000000055e21d
- (double)transitionDuration:(id)arg1;	// IMP=0x000000000055e20b
- (void)dealloc;	// IMP=0x000000000055e1cb

@end
