//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIViewDeferredKeyframeAnimation
{
    NSMutableArray *_animationFrames;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000126f241
- (void)_enumerateAnimationFramesForKeyframes:(CDUnknownBlockType)arg1;	// IMP=0x000000000126ef72
- (void)_finalize;	// IMP=0x000000000126ee50
- (void)animateFrameAtIndex:(long long)arg1 animations:(CDUnknownBlockType)arg2;	// IMP=0x000000000126ec78
- (void)addAnimationFrameForValue:(id)arg1;	// IMP=0x000000000126eb96
- (id)_animationFrames;	// IMP=0x000000000126eaf3
- (_Bool)isEmpty;	// IMP=0x000000000126eacf

@end
