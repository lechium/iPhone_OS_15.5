//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CAKeyframeAnimation.h>

__attribute__((visibility("hidden")))
@interface SCN_CAKeyframeAnimation : CAKeyframeAnimation
{
    struct __C3DKeyframedAnimation *_c3dAnimation;	// 24 = 0x18
    _Bool _caReady;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001a8035
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001a7d07
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001a7a14
- (_Bool)cumulative;	// IMP=0x00000000001a7a02
- (_Bool)isCumulative;	// IMP=0x00000000001a79b6
- (void)setCumulative:(_Bool)arg1;	// IMP=0x00000000001a793e
- (_Bool)additive;	// IMP=0x00000000001a792c
- (_Bool)isAdditive;	// IMP=0x00000000001a78e0
- (void)setAdditive:(_Bool)arg1;	// IMP=0x00000000001a7868
- (id)timingFunction;	// IMP=0x00000000001a780b
- (void)setTimingFunction:(id)arg1;	// IMP=0x00000000001a7778
- (id)animationEvents;	// IMP=0x00000000001a765a
- (void)setAnimationEvents:(id)arg1;	// IMP=0x00000000001a73ec
- (id)fillMode;	// IMP=0x00000000001a7317
- (void)setFillMode:(id)arg1;	// IMP=0x00000000001a7207
- (_Bool)usesSceneTimeBase;	// IMP=0x00000000001a71bb
- (void)setUsesSceneTimeBase:(_Bool)arg1;	// IMP=0x00000000001a7143
- (_Bool)commitsOnCompletion;	// IMP=0x00000000001a70f7
- (void)setCommitsOnCompletion:(_Bool)arg1;	// IMP=0x00000000001a707f
- (_Bool)isRemovedOnCompletion;	// IMP=0x00000000001a7033
- (void)setRemovedOnCompletion:(_Bool)arg1;	// IMP=0x00000000001a6fbb
- (double)fadeOutDuration;	// IMP=0x00000000001a6f6e
- (void)setFadeOutDuration:(double)arg1;	// IMP=0x00000000001a6ef3
- (double)fadeInDuration;	// IMP=0x00000000001a6ea6
- (void)setFadeInDuration:(double)arg1;	// IMP=0x00000000001a6e2b
- (float)speed;	// IMP=0x00000000001a6ddf
- (void)setSpeed:(float)arg1;	// IMP=0x00000000001a6d6b
- (double)timeOffset;	// IMP=0x00000000001a6d1f
- (void)setTimeOffset:(double)arg1;	// IMP=0x00000000001a6cab
- (_Bool)autoreverses;	// IMP=0x00000000001a6c5f
- (void)setAutoreverses:(_Bool)arg1;	// IMP=0x00000000001a6be7
- (double)repeatDuration;	// IMP=0x00000000001a6b99
- (void)setRepeatDuration:(double)arg1;	// IMP=0x00000000001a6b40
- (float)repeatCount;	// IMP=0x00000000001a6af4
- (void)setRepeatCount:(float)arg1;	// IMP=0x00000000001a6a92
- (id)keyPath;	// IMP=0x00000000001a6a31
- (void)setKeyPath:(id)arg1;	// IMP=0x00000000001a69af
- (double)duration;	// IMP=0x00000000001a6962
- (void)setDuration:(double)arg1;	// IMP=0x00000000001a68e7
- (void)setC3dAnimation:(struct __C3DKeyframedAnimation *)arg1;	// IMP=0x00000000001a6895
- (struct __C3DKeyframedAnimation *)c3dAnimation;	// IMP=0x00000000001a6884
- (id)description;	// IMP=0x00000000001a67e3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001a6722
- (void)setBiasValues:(id)arg1;	// IMP=0x00000000001a66c9
- (id)biasValues;	// IMP=0x00000000001a667b
- (void)setContinuityValues:(id)arg1;	// IMP=0x00000000001a6622
- (id)continuityValues;	// IMP=0x00000000001a65d4
- (void)setTensionValues:(id)arg1;	// IMP=0x00000000001a657b
- (id)tensionValues;	// IMP=0x00000000001a652d
- (void)setTimingFunctions:(id)arg1;	// IMP=0x00000000001a64d4
- (id)timingFunctions;	// IMP=0x00000000001a6486
- (void)setKeyTimes:(id)arg1;	// IMP=0x00000000001a642d
- (id)keyTimes;	// IMP=0x00000000001a63df
- (void)setValues:(id)arg1;	// IMP=0x00000000001a6386
- (id)values;	// IMP=0x00000000001a6338
- (void)_clearC3DCache;	// IMP=0x00000000001a62e7
- (void)_convertToCA;	// IMP=0x00000000001a5e8e
- (void)dealloc;	// IMP=0x00000000001a5e3c

@end

