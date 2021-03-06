//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _UIDynamicAnimation : NSObject
{
    CDUnknownBlockType _completion;	// 8 = 0x8
    int _state;	// 16 = 0x10
    unsigned int _began:1;	// 20 = 0x14
    unsigned int _running:1;	// 20 = 0x14
    unsigned int _completing:1;	// 20 = 0x14
    unsigned int _yield:1;	// 20 = 0x14
    unsigned int _grouped:1;	// 20 = 0x14
    unsigned int _usesNSTimer:1;	// 20 = 0x14
}

+ (id)dynamicAnimationForView:(id)arg1 withInitialValue:(double)arg2 velocity:(double)arg3 type:(int)arg4 anchorPoint:(struct CGPoint)arg5;	// IMP=0x00000000000a3db3
+ (void)_updateAnimationsWithTimer:(id)arg1;	// IMP=0x00000000000a3d9c
+ (void)_updateAnimations:(id)arg1;	// IMP=0x00000000000a3d88
+ (void)_updateAnimations:(id)arg1 timer:(id)arg2;	// IMP=0x00000000000a39b8
- (id)description;	// IMP=0x00000000000a4ecc
- (void)_appendDescriptionToString:(id)arg1 atLevel:(int)arg2;	// IMP=0x00000000000a4c88
- (void)_appendSubclassDescription:(id)arg1 atLevel:(int)arg2;	// IMP=0x00000000000a4c82
- (_Bool)_isRunning;	// IMP=0x00000000000a4c75
- (void)_setGrouped:(_Bool)arg1;	// IMP=0x00000000000a4c62
- (_Bool)_isGrouped;	// IMP=0x00000000000a4c54
- (void)_setUsesNSTimer:(_Bool)arg1;	// IMP=0x00000000000a4c41
- (_Bool)_usesNSTimer;	// IMP=0x00000000000a4c33
- (void)_setShouldYield:(_Bool)arg1;	// IMP=0x00000000000a4c20
- (_Bool)_shouldYield;	// IMP=0x00000000000a4c12
@property(readonly, nonatomic) int state;
- (void)_cancelWithAppliers:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a4bd0
- (void)_completeWithFinished:(_Bool)arg1;	// IMP=0x00000000000a4851
- (void)stop;	// IMP=0x00000000000a4809
- (void)runWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a47f2
- (void)runWithCompletion:(CDUnknownBlockType)arg1 forScreen:(id)arg2 runLoopMode:(id)arg3;	// IMP=0x00000000000a4478
- (void)_callAppliers:(CDUnknownBlockType)arg1 additionalEndAppliers:(CDUnknownBlockType)arg2 done:(_Bool)arg3;	// IMP=0x00000000000a43e3
- (_Bool)_animateForInterval:(double)arg1;	// IMP=0x00000000000a43db
- (void)_stopAnimation;	// IMP=0x00000000000a43ae
- (void)dealloc;	// IMP=0x00000000000a4373
- (id)init;	// IMP=0x00000000000a42dc

@end

