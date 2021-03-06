//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SceneKit/NSCopying-Protocol.h>
#import <SceneKit/NSSecureCoding-Protocol.h>
#import <SceneKit/SCNAnimatable-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString, SCNOrderedDictionary;
@protocol MTLLibrary;

@interface SCNTechnique : NSObject <SCNAnimatable, NSCopying, NSSecureCoding>
{
    unsigned int _isPresentationInstance:1;	// 8 = 0x8
    struct __C3DFXTechnique *_technique;	// 16 = 0x10
    NSMutableDictionary *_valueForSymbol;	// 24 = 0x18
    SCNOrderedDictionary *_animations;	// 32 = 0x20
    NSMutableDictionary *_bindings;	// 40 = 0x28
    id <MTLLibrary> _library;	// 48 = 0x30
    NSArray *_passes;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000960e1
+ (id)techniqueWithTechniqueRef:(struct __C3DFXTechnique *)arg1;	// IMP=0x0000000000095c98
+ (id)techniqueBySequencingTechniques:(id)arg1;	// IMP=0x0000000000094072
+ (id)techniqueWithDictionary:(id)arg1;	// IMP=0x0000000000093ff2
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000096032
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000096009
- (void)_customDecodingOfSCNTechnique:(id)arg1;	// IMP=0x0000000000095e49
- (void)_customEncodingOfSCNTechnique:(id)arg1;	// IMP=0x0000000000095def
- (void)_didInstallInEngineContext:(struct __C3DEngineContext *)arg1;	// IMP=0x0000000000095de9
- (id)passAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000095d8e
- (void)_setupPasses;	// IMP=0x0000000000095cde
- (id)presentationInstance;	// IMP=0x0000000000095c51
- (_Bool)isPausedOrPausedByInheritance;	// IMP=0x0000000000095c49
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;	// IMP=0x0000000000095c3c
- (void)removeAllBindings;	// IMP=0x0000000000095b92
- (void)unbindAnimatablePath:(id)arg1;	// IMP=0x0000000000095aae
- (void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;	// IMP=0x00000000000958b2
- (id)_scnBindings;	// IMP=0x00000000000958a8
- (_Bool)isAnimationForKeyPaused:(id)arg1;	// IMP=0x0000000000095821
- (void)setSpeed:(double)arg1 forAnimationKey:(id)arg2;	// IMP=0x000000000009570f
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;	// IMP=0x00000000000956fd
- (void)resumeAnimationForKey:(id)arg1;	// IMP=0x0000000000095659
- (void)pauseAnimationForKey:(id)arg1;	// IMP=0x00000000000955b2
- (void)_pauseAnimation:(_Bool)arg1 forKey:(id)arg2 pausedByNode:(_Bool)arg3;	// IMP=0x0000000000095531
- (id)animationPlayerForKey:(id)arg1;	// IMP=0x00000000000954b6
- (void)_copyAnimationsFrom:(id)arg1;	// IMP=0x000000000009530c
- (id)_scnAnimationForKey:(id)arg1;	// IMP=0x0000000000095281
- (id)animationForKey:(id)arg1;	// IMP=0x000000000009524f
- (void)_syncObjCAnimations;	// IMP=0x000000000009518d
@property(readonly) NSArray *animationKeys;
- (void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2;	// IMP=0x000000000009502a
- (void)removeAnimationForKey:(id)arg1;	// IMP=0x0000000000094f4c
- (void)removeAllAnimationsWithBlendOutDuration:(double)arg1;	// IMP=0x0000000000094e74
- (void)removeAllAnimations;	// IMP=0x0000000000094db4
- (void)addAnimation:(id)arg1;	// IMP=0x0000000000094da0
- (void)addAnimation:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000094caa
- (void)addAnimationPlayer:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000094ae4
- (_Bool)__removeAnimation:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000949ef
- (struct __C3DAnimationManager *)animationManager;	// IMP=0x00000000000949cc
- (const void *)__CFObject;	// IMP=0x00000000000949c2
- (id)scene;	// IMP=0x000000000009499f
- (struct __C3DScene *)sceneRef;	// IMP=0x0000000000094985
@property(retain, nonatomic) id <MTLLibrary> library;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x00000000000948b2
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x00000000000948a0
- (id)valueForSymbolNamed:(id)arg1;	// IMP=0x000000000009488e
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x00000000000947f2
- (void)setValue:(id)arg1 forSymbolNamed:(id)arg2;	// IMP=0x0000000000094508
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x00000000000944f6
- (struct __C3DFXTechnique *)techniqueRef;	// IMP=0x00000000000944ec
- (id)copy;	// IMP=0x00000000000944d8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009449c
@property(readonly) NSDictionary *dictionaryRepresentation;
- (void)handleBindingOfSymbol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000009447a
- (id)_symbolsAssignedValues;	// IMP=0x0000000000093fe8
- (void)dealloc;	// IMP=0x0000000000093e46
- (id)initWithTechniqueRef:(struct __C3DFXTechnique *)arg1;	// IMP=0x0000000000093de7
- (id)initPresentationTechniqueWithTechniqueRef:(struct __C3DFXTechnique *)arg1;	// IMP=0x0000000000093d94

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

