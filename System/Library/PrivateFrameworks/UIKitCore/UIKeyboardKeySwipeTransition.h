//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/CAAnimationDelegate-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface UIKeyboardKeySwipeTransition <CAAnimationDelegate>
{
    _Bool _disableMeshOptimization;	// 113 = 0x71
    NSArray *_startKeysOrdered;	// 120 = 0x78
    NSArray *_endKeysOrdered;	// 128 = 0x80
    NSArray *_startGeometries;	// 136 = 0x88
    NSArray *_transitionKeys;	// 144 = 0x90
    NSArray *_keyInfos;	// 152 = 0x98
    double _previousProgress;	// 160 = 0xa0
}

@property(nonatomic) double previousProgress; // @synthesize previousProgress=_previousProgress;
@property(retain, nonatomic) NSArray *keyInfos; // @synthesize keyInfos=_keyInfos;
@property(retain, nonatomic) NSArray *transitionKeys; // @synthesize transitionKeys=_transitionKeys;
@property(retain, nonatomic) NSArray *startGeometries; // @synthesize startGeometries=_startGeometries;
@property(retain, nonatomic) NSArray *endKeysOrdered; // @synthesize endKeysOrdered=_endKeysOrdered;
@property(retain, nonatomic) NSArray *startKeysOrdered; // @synthesize startKeysOrdered=_startKeysOrdered;
@property(nonatomic) _Bool disableMeshOptimization; // @synthesize disableMeshOptimization=_disableMeshOptimization;
- (id)meshTransformForKeyplane:(id)arg1 forward:(_Bool)arg2 initial:(_Bool)arg3;	// IMP=0x0000000000b43694
- (struct CGRect)keyRectForFrame:(struct CGRect)arg1 normalizedSubRect:(struct CGRect)arg2;	// IMP=0x0000000000b4366a
- (void)gatherTransitionKeys;	// IMP=0x0000000000b43280
- (void)updateWithProgress:(double)arg1;	// IMP=0x0000000000b43205
- (void)removeAllAnimations;	// IMP=0x0000000000b43118
- (void)_runOpacityAnimation;	// IMP=0x0000000000b43025
- (void)_runTransformAnimation;	// IMP=0x0000000000b42e1c
- (void)runNonInteractivelyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000b42de1
- (double)nonInteractiveDuration;	// IMP=0x0000000000b42dd3
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x0000000000b42d3f
- (void)commitTransitionRebuild;	// IMP=0x0000000000b42ce7
- (void)rebuildWithStartKeyplane:(id)arg1 startView:(id)arg2 endKeyplane:(id)arg3 endView:(id)arg4;	// IMP=0x0000000000b42a26
- (void)dealloc;	// IMP=0x0000000000b429a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
