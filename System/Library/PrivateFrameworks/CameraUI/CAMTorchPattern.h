//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CAAnimationGroup;

@interface CAMTorchPattern : NSObject
{
    float _torchLevel;	// 8 = 0x8
    long long __type;	// 16 = 0x10
    CAAnimationGroup *__animationGroup;	// 24 = 0x18
    double __lastUpdateTime;	// 32 = 0x20
    double _startTime;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000a04df
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) double _lastUpdateTime; // @synthesize _lastUpdateTime=__lastUpdateTime;
@property(readonly, nonatomic) CAAnimationGroup *_animationGroup; // @synthesize _animationGroup=__animationGroup;
@property(readonly, nonatomic) long long _type; // @synthesize _type=__type;
@property(readonly, nonatomic) float torchLevel; // @synthesize torchLevel=_torchLevel;
- (void)updateAtTime:(double)arg1;	// IMP=0x00000000000a048e
- (void)_updateAnimationGroup;	// IMP=0x00000000000a0444
- (id)_doubleBlinkAnimationGroup;	// IMP=0x00000000000a034c
- (id)_blinkAnimationGroup;	// IMP=0x00000000000a0254
- (id)_blinkAnimationWithBeginTime:(double)arg1 duration:(double)arg2 repeatCount:(long long)arg3;	// IMP=0x00000000000a0147
- (id)_longPatternAnimationGroup;	// IMP=0x000000000009ffd7
- (id)_shortPatternAnimationGroup;	// IMP=0x000000000009fedf
- (id)_patternAnimationWithBeginTime:(double)arg1 duration:(double)arg2 repeatCount:(long long)arg3;	// IMP=0x000000000009fdd2
- (id)initWithType:(long long)arg1;	// IMP=0x000000000009fd4c
- (id)init;	// IMP=0x000000000009fd0a

@end

