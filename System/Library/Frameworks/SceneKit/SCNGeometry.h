//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SceneKit/NSCopying-Protocol.h>
#import <SceneKit/NSSecureCoding-Protocol.h>
#import <SceneKit/SCNAnimatable-Protocol.h>
#import <SceneKit/SCNBoundingVolume-Protocol.h>
#import <SceneKit/SCNShadable-Protocol.h>

@class MISSING_TYPE, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSString, SCNGeometryElement, SCNGeometrySource, SCNGeometryTessellator, SCNMaterial, SCNOrderedDictionary, SCNProgram, SCNShadableHelper;

@interface SCNGeometry : NSObject <SCNAnimatable, SCNBoundingVolume, SCNShadable, NSCopying, NSSecureCoding>
{
    struct __C3DGeometry *_geometry;	// 8 = 0x8
    unsigned int _isPresentationInstance:1;	// 16 = 0x10
    NSMutableArray *_sources;	// 24 = 0x18
    NSMutableArray *_elements;	// 32 = 0x20
    NSArray *_sourceChannels;	// 40 = 0x28
    NSMutableArray *_materials;	// 48 = 0x30
    SCNOrderedDictionary *_animations;	// 56 = 0x38
    NSMutableDictionary *_bindings;	// 64 = 0x40
    NSArray *_levelsOfDetail;	// 72 = 0x48
    unsigned long long _subdivisionLevel;	// 80 = 0x50
    _Bool _subdivisionIsAdaptive;	// 88 = 0x58
    CDStruct_4c02ed10 _subdivisionSettings;	// 89 = 0x59
    SCNGeometrySource *_edgeCreasesSource;	// 96 = 0x60
    SCNGeometryElement *_edgeCreasesElement;	// 104 = 0x68
    SCNShadableHelper *_shadableHelper;	// 112 = 0x70
    struct SCNVector3 *_fixedBoundingBoxExtrema;	// 120 = 0x78
    NSString *_name;	// 128 = 0x80
    NSMutableDictionary *_valuesForUndefinedKeys;	// 136 = 0x88
    SCNGeometryTessellator *_tessellator;	// 144 = 0x90
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001dcab2
+ (_Bool)resolveInstanceMethod:(SEL)arg1;	// IMP=0x00000000001da7ea
+ (id)geometryWithSources:(id)arg1 elements:(id)arg2 sourceChannels:(id)arg3;	// IMP=0x00000000001d6a42
+ (id)geometryWithSources:(id)arg1 elements:(id)arg2;	// IMP=0x00000000001d6a2d
+ (id)geometry;	// IMP=0x00000000001d62f6
+ (id)geometryWithGeometryRef:(struct __C3DGeometry *)arg1;	// IMP=0x00000000001d62b0
+ (id)morpherWithMDLMesh:(id)arg1;	// IMP=0x00000000000215f8
+ (id)geometryWithMDLMesh:(id)arg1;	// IMP=0x0000000000020e24
+ (id)geometryWithMDLMesh:(id)arg1 submesh:(id)arg2;	// IMP=0x0000000000020282
+ (id)floorWithOptions:(id)arg1;	// IMP=0x00000000001c1789
+ (id)torusWithRingRadius:(double)arg1 pipeRadius:(double)arg2 options:(id)arg3;	// IMP=0x00000000001c1719
+ (id)capsuleWithRadius:(double)arg1 height:(double)arg2 options:(id)arg3;	// IMP=0x00000000001c16a9
+ (id)tubeWithInnerRadius:(double)arg1 outerRadius:(double)arg2 height:(double)arg3 options:(id)arg4;	// IMP=0x00000000001c1639
+ (id)coneWithHeight:(double)arg1 topRadius:(double)arg2 bottomRadius:(double)arg3 options:(id)arg4;	// IMP=0x00000000001c15bd
+ (id)cylinderWithRadius:(double)arg1 height:(double)arg2 options:(id)arg3;	// IMP=0x00000000001c154d
+ (id)sphereWithRadius:(double)arg1 options:(id)arg2;	// IMP=0x00000000001c14bc
+ (id)pyramidWithWidth:(double)arg1 height:(double)arg2 length:(double)arg3 options:(id)arg4;	// IMP=0x00000000001c1432
+ (id)boxWithWidth:(double)arg1 height:(double)arg2 length:(double)arg3 cornerRadius:(double)arg4 options:(id)arg5;	// IMP=0x00000000001c138e
+ (id)planeWithWidth:(double)arg1 height:(double)arg2 options:(id)arg3;	// IMP=0x00000000001c131e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001dc791
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001dc601
- (struct __C3DGeometry *)__createCFObject;	// IMP=0x00000000001dc5f7
- (void)_customDecodingOfSCNGeometry:(id)arg1;	// IMP=0x00000000001dc05c
- (void)_customEncodingOfSCNGeometry:(id)arg1;	// IMP=0x00000000001dbdc1
- (void)removeAllBindings;	// IMP=0x00000000001dbd17
- (void)unbindAnimatablePath:(id)arg1;	// IMP=0x00000000001dbc33
- (void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;	// IMP=0x00000000001dba37
- (id)_scnBindings;	// IMP=0x00000000001dba2d
- (_Bool)isAnimationForKeyPaused:(id)arg1;	// IMP=0x00000000001db9a6
- (void)setSpeed:(double)arg1 forAnimationKey:(id)arg2;	// IMP=0x00000000001db894
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;	// IMP=0x00000000001db882
- (void)resumeAnimationForKey:(id)arg1;	// IMP=0x00000000001db7de
- (void)pauseAnimationForKey:(id)arg1;	// IMP=0x00000000001db737
- (void)_pauseAnimation:(_Bool)arg1 forKey:(id)arg2 pausedByNode:(_Bool)arg3;	// IMP=0x00000000001db6b6
- (id)animationPlayerForKey:(id)arg1;	// IMP=0x00000000001db63b
- (void)_copyAnimationsFrom:(id)arg1;	// IMP=0x00000000001db491
- (id)_scnAnimationForKey:(id)arg1;	// IMP=0x00000000001db406
- (id)animationForKey:(id)arg1;	// IMP=0x00000000001db3d4
- (void)_syncObjCAnimations;	// IMP=0x00000000001db312
@property(readonly) NSArray *animationKeys;
- (void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2;	// IMP=0x00000000001db1af
- (void)removeAnimationForKey:(id)arg1;	// IMP=0x00000000001db0d1
- (void)removeAllAnimationsWithBlendOutDuration:(double)arg1;	// IMP=0x00000000001daff9
- (void)removeAllAnimations;	// IMP=0x00000000001daf39
- (void)addAnimation:(id)arg1;	// IMP=0x00000000001daf25
- (void)addAnimation:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000001dae2f
- (void)addAnimationPlayer:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000001dac69
- (_Bool)__removeAnimation:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000001dab74
- (struct __C3DAnimationManager *)animationManager;	// IMP=0x00000000001dab51
- (const void *)__CFObject;	// IMP=0x00000000001dab47
@property(retain, nonatomic) SCNProgram *program;
- (void)handleUnbindingOfSymbol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001daa6a
- (void)handleBindingOfSymbol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001daa27
- (id)shaderModifiersArgumentsNames;	// IMP=0x00000000001daa11
@property(retain, nonatomic) NSNumber *minimumLanguageVersion;
@property(copy, nonatomic) NSDictionary *shaderModifiers;
- (void)copyShaderModifiersAndLanguageVersionFrom:(id)arg1;	// IMP=0x00000000001da8bc
- (id)__shadableHelper;	// IMP=0x00000000001da831
- (void)_setupShadableHelperIfNeeded;	// IMP=0x00000000001da7f7
- (id)customMaterialAttributes;	// IMP=0x00000000001da739
- (id)customMaterialAttributeNames;	// IMP=0x00000000001da5a8
- (id)customMaterialProperties;	// IMP=0x00000000001da4e8
- (id)customMaterialPropertyNames;	// IMP=0x00000000001da416
- (void)_shadableSetValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x00000000001d9f96
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x00000000001d9e32
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x00000000001d9d7e
- (void)_unifyNormals;	// IMP=0x00000000001d9d4b
- (struct __C3DMaterial *)materialRef;	// IMP=0x00000000001d9d31
- (struct __C3DMaterial *)materialRefCreateIfNeeded;	// IMP=0x00000000001d9cc9
@property(retain, nonatomic) SCNGeometrySource *edgeCreasesSource;
@property(retain, nonatomic) SCNGeometryElement *edgeCreasesElement;
@property(nonatomic) _Bool wantsAdaptiveSubdivision;
@property(nonatomic) unsigned long long subdivisionLevel;
- (void)set_subdivisionSettings:(CDStruct_4c02ed10)arg1;	// IMP=0x00000000001d97ae
- (CDStruct_4c02ed10)_subdivisionSettings;	// IMP=0x00000000001d97a5
@property(retain, nonatomic) SCNGeometryTessellator *tessellator;
@property(copy, nonatomic) NSArray *levelsOfDetail;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;	// IMP=0x00000000001d91b2
- (_Bool)parseSpecialKey:(id)arg1 withPath:(id)arg2 intoDestination:(id *)arg3 remainingPath:(id *)arg4;	// IMP=0x00000000001d9040
- (void)setPrimitiveType:(long long)arg1;	// IMP=0x00000000001d8f82
- (long long)primitiveType;	// IMP=0x00000000001d8ef3
- (void)setMaterial:(id)arg1;	// IMP=0x00000000001d8ee1
- (id)material;	// IMP=0x00000000001d8ecf
@property(copy, nonatomic) NSArray *materials;
- (void)removeAllMaterials;	// IMP=0x00000000001d8d7d
- (void)replaceMaterial:(id)arg1 with:(id)arg2;	// IMP=0x00000000001d8d12
- (void)replaceMaterialAtIndex:(unsigned long long)arg1 withMaterial:(id)arg2;	// IMP=0x00000000001d8d00
- (void)removeMaterialAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001d8cee
- (void)removeMaterial:(id)arg1;	// IMP=0x00000000001d8c86
- (void)insertMaterial:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000001d8c74
@property(retain, nonatomic) SCNMaterial *firstMaterial;
- (id)_firstMaterial;	// IMP=0x00000000001d8b63
- (id)mutableMaterials;	// IMP=0x00000000001d8b39
- (void)replaceObjectInMaterialsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x00000000001d88f0
- (void)removeObjectFromMaterialsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001d87eb
- (void)insertObject:(id)arg1 inMaterialsAtIndex:(unsigned long long)arg2;	// IMP=0x00000000001d86c9
- (id)objectInMaterialsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001d868b
- (unsigned long long)countOfMaterials;	// IMP=0x00000000001d8652
- (id)materialWithName:(id)arg1;	// IMP=0x00000000001d8619
- (id)_materialWithName:(id)arg1;	// IMP=0x00000000001d84ac
- (void)_expand;	// IMP=0x00000000001d8363
- (id)keyForNodeAttributes;	// IMP=0x00000000001d8353
- (id)scene;	// IMP=0x00000000001d8330
- (struct __C3DScene *)sceneRef;	// IMP=0x00000000001d8316
- (id)_renderableCopy;	// IMP=0x00000000001d8277
- (id)interleavedCopy;	// IMP=0x00000000001d81d8
- (id)mutableCopy;	// IMP=0x00000000001d8135
- (id)copy;	// IMP=0x00000000001d8121
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001d809b
- (void)_copyAttributesTo:(id)arg1;	// IMP=0x00000000001d803f
- (void)_setupObjCModelFrom:(id)arg1;	// IMP=0x00000000001d7dc8
- (void)_setAttributes:(id)arg1;	// IMP=0x00000000001d7c51
- (id)getBoundingBox;	// IMP=0x00000000001d7bc4
- (id)getBoundingSphere;	// IMP=0x00000000001d7b3b
- (_Bool)simdGetBoundingSphereCenter:(MISSING_TYPE **)arg1 radius:(float *)arg2;	// IMP=0x00000000001d7a94
- (_Bool)getBoundingSphereCenter:(struct SCNVector3 *)arg1 radius:(double *)arg2;	// IMP=0x00000000001d79dd
- (void)setBoundingBoxMin:(struct SCNVector3 *)arg1 max:(struct SCNVector3 *)arg2;	// IMP=0x00000000001d7770
- (_Bool)getBoundingBoxMin:(struct SCNVector3 *)arg1 max:(struct SCNVector3 *)arg2;	// IMP=0x00000000001d7644
- (_Bool)_hasFixedBoundingBoxExtrema;	// IMP=0x00000000001d7636
- (id)geometryElementAtIndex:(long long)arg1;	// IMP=0x00000000001d75d9
@property(readonly, nonatomic) long long geometryElementCount;
@property(readonly, nonatomic) NSArray *geometryElements;
- (id)geometrySourceForSemantic:(id)arg1;	// IMP=0x00000000001d7511
- (id)geometrySourcesForSemantic:(id)arg1;	// IMP=0x00000000001d732e
- (id)geometrySourceChannels;	// IMP=0x00000000001d7324
@property(readonly, nonatomic) NSArray *geometrySources;
- (void)_setupGeometryElements;	// IMP=0x00000000001d7204
- (void)_setupGeometrySources;	// IMP=0x00000000001d703f
- (void)_releaseCachedSourcesAndElements;	// IMP=0x00000000001d6a02
- (_Bool)isPausedOrPausedByInheritance;	// IMP=0x00000000001d69fa
- (id)presentationInstance;	// IMP=0x00000000001d69e8
- (id)presentationGeometry;	// IMP=0x00000000001d699d
- (void)setGeometryRef:(struct __C3DGeometry *)arg1;	// IMP=0x00000000001d6929
- (void)_setGeometryRef:(struct __C3DGeometry *)arg1;	// IMP=0x00000000001d68bb
- (struct __C3DGeometry *)geometryRef;	// IMP=0x00000000001d68b1
@property(readonly, copy) NSString *description;
- (id)geometryDescription;	// IMP=0x00000000001d6776
- (void)_syncObjCModel;	// IMP=0x00000000001d6686
- (void)_syncEntityObjCModel;	// IMP=0x00000000001d6642
- (id)identifier;	// IMP=0x00000000001d6628
- (void)setIdentifier:(id)arg1;	// IMP=0x00000000001d6601
@property(copy, nonatomic) NSString *name;
- (_Bool)isPresentationInstance;	// IMP=0x00000000001d6452
- (void)dealloc;	// IMP=0x00000000001d6308
- (id)initPresentationGeometryWithGeometryRef:(struct __C3DGeometry *)arg1;	// IMP=0x00000000001d625d
- (id)initWithGeometryRef:(struct __C3DGeometry *)arg1;	// IMP=0x00000000001d61dd
- (id)init;	// IMP=0x00000000001d6178
- (void)setValueForKey:(id)arg1 optionKey:(id)arg2 options:(id)arg3;	// IMP=0x00000000001c12da
- (id)_geometryByWeldingVerticesWithThreshold:(double)arg1 normalThreshold:(double)arg2;	// IMP=0x0000000000220088
- (void)_discardOriginalTopology;	// IMP=0x000000000021fe3b
- (id)_geometryByRemovingSkinnerSources;	// IMP=0x000000000021fd79
- (id)_geometryByAddingSourcesOfSkinner:(id)arg1;	// IMP=0x000000000021fc61
- (id)_geometryByUnifyingNormalsWithCreaseThreshold:(double)arg1;	// IMP=0x000000000021f8ee
- (id)debugQuickLookData;	// IMP=0x00000000002ac9dd
- (id)debugQuickLookObject;	// IMP=0x00000000002ac9a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
