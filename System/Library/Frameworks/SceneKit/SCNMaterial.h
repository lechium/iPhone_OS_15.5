//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SceneKit/NSCopying-Protocol.h>
#import <SceneKit/NSSecureCoding-Protocol.h>
#import <SceneKit/SCNAnimatable-Protocol.h>
#import <SceneKit/SCNShadable-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSString, SCNMaterialProperty, SCNOrderedDictionary, SCNProgram, SCNShadableHelper;

@interface SCNMaterial : NSObject <SCNAnimatable, SCNShadable, NSCopying, NSSecureCoding>
{
    struct __C3DMaterial *_material;	// 8 = 0x8
    SCNMaterialProperty *_ambient;	// 16 = 0x10
    SCNMaterialProperty *_diffuse;	// 24 = 0x18
    SCNMaterialProperty *_specular;	// 32 = 0x20
    SCNMaterialProperty *_emission;	// 40 = 0x28
    SCNMaterialProperty *_reflective;	// 48 = 0x30
    SCNMaterialProperty *_transparent;	// 56 = 0x38
    SCNMaterialProperty *_multiply;	// 64 = 0x40
    SCNMaterialProperty *_normal;	// 72 = 0x48
    SCNMaterialProperty *_ambientOcclusion;	// 80 = 0x50
    SCNMaterialProperty *_selfIllumination;	// 88 = 0x58
    SCNMaterialProperty *_metalness;	// 96 = 0x60
    SCNMaterialProperty *_roughness;	// 104 = 0x68
    SCNMaterialProperty *_displacement;	// 112 = 0x70
    SCNMaterialProperty *_clearCoat;	// 120 = 0x78
    SCNMaterialProperty *_clearCoatRoughness;	// 128 = 0x80
    SCNMaterialProperty *_clearCoatNormal;	// 136 = 0x88
    SCNOrderedDictionary *_animations;	// 144 = 0x90
    NSMutableDictionary *_bindings;	// 152 = 0x98
    NSString *_name;	// 160 = 0xa0
    NSMutableDictionary *_valuesForUndefinedKeys;	// 168 = 0xa8
    float _shininess;	// 176 = 0xb0
    float _transparency;	// 180 = 0xb4
    float _indexOfRefraction;	// 184 = 0xb8
    float _fresnelExponent;	// 188 = 0xbc
    float _selfIlluminationOcclusion;	// 192 = 0xc0
    long long _transparencyMode;	// 200 = 0xc8
    NSString *_lightingModelName;	// 208 = 0xd0
    long long _cullMode;	// 216 = 0xd8
    SCNShadableHelper *_shadableHelper;	// 224 = 0xe0
    _Bool _isPresentationInstance;	// 232 = 0xe8
    _Bool _litPerPixel;	// 233 = 0xe9
    _Bool _doubleSided;	// 234 = 0xea
    _Bool _locksAmbientWithDiffuse;	// 235 = 0xeb
    _Bool _avoidsOverLighting;	// 236 = 0xec
    _Bool _writesToDepthBuffer;	// 237 = 0xed
    _Bool _readsFromDepthBuffer;	// 238 = 0xee
    unsigned long long _fillMode;	// 240 = 0xf0
    long long _blendMode;	// 248 = 0xf8
    long long _colorBufferWriteMask;	// 256 = 0x100
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000017149a
+ (id)materialNamed:(id)arg1;	// IMP=0x00000000001704e9
+ (_Bool)resolveInstanceMethod:(SEL)arg1;	// IMP=0x000000000017013a
+ (_Bool)accessInstanceVariablesDirectly;	// IMP=0x000000000016f83f
+ (id)materialWithContents:(id)arg1;	// IMP=0x000000000016b05c
+ (id)materialWithColor:(id)arg1;	// IMP=0x000000000016b027
+ (id)material;	// IMP=0x000000000016b015
+ (id)materialWithMaterialRef:(struct __C3DMaterial *)arg1;	// IMP=0x000000000016afcf
+ (id)materialWithMDLMaterial:(id)arg1;	// IMP=0x0000000000023269
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000170d44
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001708cd
- (void)_customEncodingOfSCNMaterial:(id)arg1;	// IMP=0x00000000001705b0
- (void)_customDecodingOfSCNMaterial:(id)arg1;	// IMP=0x0000000000170520
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x00000000001704d7
@property(retain, nonatomic) SCNProgram *program;
- (void)handleUnbindingOfSymbol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001703ee
- (void)handleBindingOfSymbol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001703a8
- (id)shaderModifiersArgumentsNames;	// IMP=0x000000000017038f
@property(retain, nonatomic) NSNumber *minimumLanguageVersion;
@property(copy, nonatomic) NSDictionary *shaderModifiers;
- (void)copyShaderModifiersAndLanguageVersionFrom:(id)arg1;	// IMP=0x000000000017021e
- (id)__shadableHelper;	// IMP=0x0000000000170187
- (void)_setupShadableHelperIfNeeded;	// IMP=0x0000000000170147
- (id)customMaterialAttributes;	// IMP=0x0000000000170089
- (id)customMaterialAttributeNames;	// IMP=0x000000000016fef8
- (id)customMaterialProperties;	// IMP=0x000000000016fe38
- (id)customMaterialPropertyNames;	// IMP=0x000000000016fd66
- (void)_shadableSetValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x000000000016f8e3
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x000000000016f847
- (struct __C3DMaterial *)materialRefCreateIfNeeded;	// IMP=0x000000000016f835
- (id)copy;	// IMP=0x000000000016f821
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000016f2eb
- (void)_copyAttributes:(id)arg1;	// IMP=0x000000000016f141
- (void)_setAttributes:(id)arg1;	// IMP=0x000000000016efca
- (void)removeAllBindings;	// IMP=0x000000000016ef1a
- (void)unbindAnimatablePath:(id)arg1;	// IMP=0x000000000016ee2a
- (void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;	// IMP=0x000000000016ec25
- (id)_scnBindings;	// IMP=0x000000000016ec18
- (_Bool)isAnimationForKeyPaused:(id)arg1;	// IMP=0x000000000016eb91
- (void)setSpeed:(double)arg1 forAnimationKey:(id)arg2;	// IMP=0x000000000016ea7f
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;	// IMP=0x000000000016ea6d
- (void)resumeAnimationForKey:(id)arg1;	// IMP=0x000000000016e9c9
- (void)pauseAnimationForKey:(id)arg1;	// IMP=0x000000000016e922
- (void)_pauseAnimation:(_Bool)arg1 forKey:(id)arg2 pausedByNode:(_Bool)arg3;	// IMP=0x000000000016e8a1
- (id)animationPlayerForKey:(id)arg1;	// IMP=0x000000000016e820
- (void)_copyAnimationsFrom:(id)arg1;	// IMP=0x000000000016e676
- (id)_scnAnimationForKey:(id)arg1;	// IMP=0x000000000016e5e5
- (id)animationForKey:(id)arg1;	// IMP=0x000000000016e5b3
- (void)_syncObjCAnimations;	// IMP=0x000000000016e4e8
@property(readonly) NSArray *animationKeys;
- (void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2;	// IMP=0x000000000016e37c
- (void)removeAnimationForKey:(id)arg1;	// IMP=0x000000000016e298
- (void)removeAllAnimationsWithBlendOutDuration:(double)arg1;	// IMP=0x000000000016e1ba
- (void)removeAllAnimations;	// IMP=0x000000000016e0f4
- (void)addAnimation:(id)arg1;	// IMP=0x000000000016e0e0
- (void)addAnimation:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000016dfea
- (void)addAnimationPlayer:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000016de12
- (_Bool)__removeAnimation:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000016dd14
- (struct __C3DAnimationManager *)animationManager;	// IMP=0x000000000016dcf1
- (const void *)__CFObject;	// IMP=0x000000000016dce7
- (id)scene;	// IMP=0x000000000016dcc4
- (struct __C3DScene *)sceneRef;	// IMP=0x000000000016dcaa
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;	// IMP=0x000000000016daf4
- (id)copyAnimationChannelForKeyPath:(id)arg1 property:(id)arg2;	// IMP=0x000000000016da03
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long fillMode;
@property(nonatomic) long long cullMode;
- (_Bool)doubleSided;	// IMP=0x000000000016d562
@property(nonatomic, getter=isDoubleSided) _Bool doubleSided;
- (void)setContent:(id)arg1;	// IMP=0x000000000016d426
- (id)content;	// IMP=0x000000000016d414
- (void)setContents:(id)arg1;	// IMP=0x000000000016d3bc
- (id)contents;	// IMP=0x000000000016d34d
@property(nonatomic) _Bool readsFromDepthBuffer;
@property(nonatomic) long long colorBufferWriteMask;
@property(nonatomic) _Bool writesToDepthBuffer;
- (_Bool)avoidsOverLighting;	// IMP=0x000000000016cf90
- (void)setAvoidsOverLighting:(_Bool)arg1;	// IMP=0x000000000016ceca
@property(nonatomic) _Bool locksAmbientWithDiffuse;
- (_Bool)litPerPixel;	// IMP=0x000000000016cd76
@property(nonatomic, getter=isLitPerPixel) _Bool litPerPixel;
@property(copy, nonatomic) NSString *lightingModelName;
@property(nonatomic) long long blendMode;
- (double)selfIlluminationOcclusion;	// IMP=0x000000000016c7af
- (void)setSelfIlluminationOcclusion:(double)arg1;	// IMP=0x000000000016c6c6
@property(nonatomic) double fresnelExponent;
- (double)indexOfRefraction;	// IMP=0x000000000016c4c0
- (void)setIndexOfRefraction:(double)arg1;	// IMP=0x000000000016c3d2
@property(nonatomic) double transparency;
@property(nonatomic) double shininess;
@property(nonatomic) long long transparencyMode;
@property(readonly, nonatomic) SCNMaterialProperty *clearCoatNormal;
@property(readonly, nonatomic) SCNMaterialProperty *clearCoatRoughness;
@property(readonly, nonatomic) SCNMaterialProperty *clearCoat;
@property(readonly, nonatomic) SCNMaterialProperty *displacement;
@property(readonly, nonatomic) SCNMaterialProperty *roughness;
@property(readonly, nonatomic) SCNMaterialProperty *metalness;
@property(readonly, nonatomic) SCNMaterialProperty *selfIllumination;
@property(readonly, nonatomic) SCNMaterialProperty *ambientOcclusion;
@property(readonly, nonatomic) SCNMaterialProperty *normal;
@property(readonly, nonatomic) SCNMaterialProperty *multiply;
@property(readonly, nonatomic) SCNMaterialProperty *transparent;
@property(readonly, nonatomic) SCNMaterialProperty *reflective;
@property(readonly, nonatomic) SCNMaterialProperty *emission;
@property(readonly, nonatomic) SCNMaterialProperty *specular;
@property(readonly, nonatomic) SCNMaterialProperty *diffuse;
@property(readonly, nonatomic) SCNMaterialProperty *ambient;
- (id)_property:(id *)arg1;	// IMP=0x000000000016bdf7
- (id)properties;	// IMP=0x000000000016bd89
- (id)builtinProperties;	// IMP=0x000000000016bc12
- (id)color;	// IMP=0x000000000016bbe7
- (void)setColor:(id)arg1;	// IMP=0x000000000016bb8f
- (void)_setupMaterialProperty:(id *)arg1;	// IMP=0x000000000016b911
- (Class)_materialPropertyClass;	// IMP=0x000000000016b900
- (struct __C3DEffectCommonProfile *)commonProfile;	// IMP=0x000000000016b8e6
- (struct __C3DMaterial *)materialRef;	// IMP=0x000000000016b8dc
- (_Bool)isPausedOrPausedByInheritance;	// IMP=0x000000000016b8d4
- (id)presentationInstance;	// IMP=0x000000000016b8c2
- (id)presentationMaterial;	// IMP=0x000000000016b878
- (void)_syncObjCModel;	// IMP=0x000000000016b584
- (void)_syncEntityObjCModel;	// IMP=0x000000000016b540
- (id)identifier;	// IMP=0x000000000016b526
- (void)setIdentifier:(id)arg1;	// IMP=0x000000000016b4ff
@property(copy, nonatomic) NSString *name;
- (void)dealloc;	// IMP=0x000000000016b091
- (id)initPresentationMaterialWithMaterialRef:(struct __C3DMaterial *)arg1;	// IMP=0x000000000016af79
- (id)initWithMaterialRef:(struct __C3DMaterial *)arg1;	// IMP=0x000000000016aef9
- (id)init;	// IMP=0x000000000016ae94
- (id)_integrateModelKitComputedMaps:(id)arg1 withGeometry:(id)arg2 node:(id)arg3 texturePathProvider:(CDUnknownBlockType)arg4 vertexAttributeNamed:(id)arg5 materialPropertyNamed:(id)arg6 filePath:(id)arg7;	// IMP=0x0000000000022fcc
- (id)debugQuickLookData;	// IMP=0x00000000002aca50
- (id)debugQuickLookObject;	// IMP=0x00000000002ac9f7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

