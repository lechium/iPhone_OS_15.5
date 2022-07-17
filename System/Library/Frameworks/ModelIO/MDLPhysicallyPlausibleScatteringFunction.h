//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MDLMaterialProperty;

@interface MDLPhysicallyPlausibleScatteringFunction
{
    struct PhysicallyPlausibleDistribution *_physicalBSDF;	// 88 = 0x58
    MDLMaterialProperty *_subsurface;	// 96 = 0x60
    MDLMaterialProperty *_metallic;	// 104 = 0x68
    MDLMaterialProperty *_specularAmount;	// 112 = 0x70
    MDLMaterialProperty *_specularTint;	// 120 = 0x78
    MDLMaterialProperty *_roughness;	// 128 = 0x80
    MDLMaterialProperty *_anisotropic;	// 136 = 0x88
    MDLMaterialProperty *_anisotropicRotation;	// 144 = 0x90
    MDLMaterialProperty *_sheen;	// 152 = 0x98
    MDLMaterialProperty *_sheenTint;	// 160 = 0xa0
    MDLMaterialProperty *_clearcoat;	// 168 = 0xa8
    MDLMaterialProperty *_clearcoatGloss;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x00000000002df83d
@property(readonly, retain, nonatomic) MDLMaterialProperty *clearcoatGloss; // @synthesize clearcoatGloss=_clearcoatGloss;
@property(readonly, retain, nonatomic) MDLMaterialProperty *clearcoat; // @synthesize clearcoat=_clearcoat;
@property(readonly, retain, nonatomic) MDLMaterialProperty *sheenTint; // @synthesize sheenTint=_sheenTint;
@property(readonly, retain, nonatomic) MDLMaterialProperty *sheen; // @synthesize sheen=_sheen;
@property(readonly, retain, nonatomic) MDLMaterialProperty *anisotropicRotation; // @synthesize anisotropicRotation=_anisotropicRotation;
@property(readonly, retain, nonatomic) MDLMaterialProperty *anisotropic; // @synthesize anisotropic=_anisotropic;
@property(readonly, retain, nonatomic) MDLMaterialProperty *roughness; // @synthesize roughness=_roughness;
@property(readonly, retain, nonatomic) MDLMaterialProperty *specularTint; // @synthesize specularTint=_specularTint;
@property(readonly, retain, nonatomic) MDLMaterialProperty *specularAmount; // @synthesize specularAmount=_specularAmount;
@property(readonly, retain, nonatomic) MDLMaterialProperty *metallic; // @synthesize metallic=_metallic;
@property(readonly, retain, nonatomic) MDLMaterialProperty *subsurface; // @synthesize subsurface=_subsurface;
- (id)init;	// IMP=0x00000000002df392
@property(readonly, nonatomic) long long version;

@end
