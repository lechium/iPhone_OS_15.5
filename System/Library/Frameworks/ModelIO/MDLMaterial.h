//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ModelIO/MDLNamed-Protocol.h>
#import <ModelIO/NSFastEnumeration-Protocol.h>

@class MDLScatteringFunction, NSMutableArray, NSString;

@interface MDLMaterial : NSObject <MDLNamed, NSFastEnumeration>
{
    NSMutableArray *_userProperties;	// 8 = 0x8
    NSMutableArray *_builtinProperties;	// 16 = 0x10
    MDLScatteringFunction *_scatteringFunction;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    MDLMaterial *_baseMaterial;	// 40 = 0x28
    unsigned long long _materialFace;	// 48 = 0x30
}

+ (id)decodeMaterialWithCoder:(id)arg1 allocator:(id)arg2;	// IMP=0x00000000002e25e9
- (void).cxx_destruct;	// IMP=0x00000000002e2882
@property(nonatomic) unsigned long long materialFace; // @synthesize materialFace=_materialFace;
@property(retain, nonatomic) MDLMaterial *baseMaterial; // @synthesize baseMaterial=_baseMaterial;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)encodeMaterialWithCoder:(id)arg1 allocator:(id)arg2;	// IMP=0x00000000002e238c
@property(readonly, nonatomic) unsigned long long count;
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x00000000002e22e6
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x00000000002e224a
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000002e20e7
- (struct BidirectionalScatteringDistributionFunction *)bsdf;	// IMP=0x00000000002e20d9
- (void)removeAllProperties;	// IMP=0x00000000002e20b0
- (void)removeProperty:(id)arg1;	// IMP=0x00000000002e2099
- (void)setProperty:(id)arg1;	// IMP=0x00000000002e1fc3
- (id)propertiesWithSemantic:(unsigned long long)arg1;	// IMP=0x00000000002e1c6f
- (id)propertyWithSemantic:(unsigned long long)arg1;	// IMP=0x00000000002e19b1
- (id)propertyNamed:(id)arg1;	// IMP=0x00000000002e15cd
- (void)conformToMatProperties;	// IMP=0x00000000002e1539
- (id)initWithName:(id)arg1 physicallyPlausibleBSDF:(struct PhysicallyPlausibleDistribution *)arg2;	// IMP=0x00000000002e13a5
- (id)initWithName:(id)arg1 scatteringFunction:(id)arg2;	// IMP=0x00000000002e1286
- (id)init;	// IMP=0x00000000002e11a4
- (void)loadTexturesUsingResolver:(id)arg1;	// IMP=0x00000000002e118f
- (void)loadTexturesUsingResolver:(id)arg1 cache:(id)arg2;	// IMP=0x00000000002e0a13
- (void)loadTexturesUsingArchiveAssetResolver:(id)arg1 cache:(id)arg2;	// IMP=0x00000000002e0242
- (void)resolveTexturesWithResolver:(id)arg1;	// IMP=0x00000000002dfc05
- (void)setScatteringFunction:(id)arg1;	// IMP=0x00000000002df915
@property(readonly, retain, nonatomic) MDLScatteringFunction *scatteringFunction;

@end

