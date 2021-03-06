//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SceneKit/NSCopying-Protocol.h>
#import <SceneKit/NSSecureCoding-Protocol.h>
#import <SceneKit/SCNAnimatable-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, SCNOrderedDictionary;

@interface SCNConstraint : NSObject <NSCopying, NSSecureCoding, SCNAnimatable>
{
    struct __C3DConstraint *_constraintRef;	// 8 = 0x8
    SCNOrderedDictionary *_animations;	// 16 = 0x10
    NSMutableDictionary *_bindings;	// 24 = 0x18
    _Bool _enabled;	// 32 = 0x20
    _Bool _incremental;	// 33 = 0x21
    double _influenceFactor;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002cc8af
- (id)copy;	// IMP=0x00000000002cc89b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002cc869
- (id)scene;	// IMP=0x00000000002cc846
- (struct __C3DScene *)sceneRef;	// IMP=0x00000000002cc82c
- (void)removeAllBindings;	// IMP=0x00000000002cc782
- (void)unbindAnimatablePath:(id)arg1;	// IMP=0x00000000002cc69e
- (void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;	// IMP=0x00000000002cc4a2
- (id)_scnBindings;	// IMP=0x00000000002cc498
- (_Bool)isAnimationForKeyPaused:(id)arg1;	// IMP=0x00000000002cc411
- (void)setSpeed:(double)arg1 forAnimationKey:(id)arg2;	// IMP=0x00000000002cc2ff
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;	// IMP=0x00000000002cc2ed
- (void)resumeAnimationForKey:(id)arg1;	// IMP=0x00000000002cc249
- (void)pauseAnimationForKey:(id)arg1;	// IMP=0x00000000002cc1a2
- (void)_pauseAnimation:(_Bool)arg1 forKey:(id)arg2 pausedByNode:(_Bool)arg3;	// IMP=0x00000000002cc121
- (id)animationPlayerForKey:(id)arg1;	// IMP=0x00000000002cc0a6
- (void)_copyAnimationsFrom:(id)arg1;	// IMP=0x00000000002cbefc
- (id)_scnAnimationForKey:(id)arg1;	// IMP=0x00000000002cbe71
- (id)animationForKey:(id)arg1;	// IMP=0x00000000002cbe3f
- (void)_syncObjCAnimations;	// IMP=0x00000000002cbd7d
@property(readonly) NSArray *animationKeys;
- (void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2;	// IMP=0x00000000002cbc1a
- (void)removeAnimationForKey:(id)arg1;	// IMP=0x00000000002cbb3c
- (void)removeAllAnimationsWithBlendOutDuration:(double)arg1;	// IMP=0x00000000002cba64
- (void)removeAllAnimations;	// IMP=0x00000000002cb9a4
- (void)addAnimation:(id)arg1;	// IMP=0x00000000002cb990
- (void)addAnimation:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000002cb89a
- (void)addAnimationPlayer:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000002cb6d4
- (_Bool)__removeAnimation:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000002cb5df
- (struct __C3DAnimationManager *)animationManager;	// IMP=0x00000000002cb5bc
- (const void *)__CFObject;	// IMP=0x00000000002cb5b2
- (_Bool)isPausedOrPausedByInheritance;	// IMP=0x00000000002cb5aa
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;	// IMP=0x00000000002cb59d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002cb528
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002cb4dc
- (void)finalizeDecodeConstraint:(id)arg1;	// IMP=0x00000000002cb431
@property(nonatomic) double influenceFactor;
@property(nonatomic, getter=isIncremental) _Bool incremental;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)setConstraintRef:(struct __C3DConstraint *)arg1;	// IMP=0x00000000002cb1da
- (struct __C3DConstraint *)constraintRef;	// IMP=0x00000000002cb1d0
- (void)setName:(id)arg1;	// IMP=0x00000000002cb19d
- (id)name;	// IMP=0x00000000002cb18f
- (void)copyTo:(id)arg1;	// IMP=0x00000000002cb11b
- (void)dealloc;	// IMP=0x00000000002cb0bb
- (id)init;	// IMP=0x00000000002cb06f
- (void)commonInit;	// IMP=0x00000000002cb043

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

