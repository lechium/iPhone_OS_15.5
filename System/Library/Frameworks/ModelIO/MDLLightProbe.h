//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MDLTexture, MISSING_TYPE, NSData, NSMutableData;
@protocol MDLTransformComponent;

@interface MDLLightProbe
{
    MDLTexture *_reflectiveTexture;	// 8 = 0x8
    MDLTexture *_irradianceTexture;	// 16 = 0x10
    NSMutableData *_sphericalHarmonicsCoefficients;	// 24 = 0x18
    id <MDLTransformComponent> _transform;	// 32 = 0x20
    unsigned long long _sphericalHarmonicsLevel;	// 40 = 0x28
}

+ (struct CGColor *)sampleSHAt:(id)arg1 usingCoefficients:(unsigned long long)arg2 withLevel: /* Error: Ran out of types for this method. */;	// IMP=0x0000000000374aaa
+ (MISSING_TYPE *)calculateIrradianceGradientUsingSamples:(MISSING_TYPE **)arg1 ofSize:(unsigned long long)arg2 fromSH:(id)arg3 withLevel:(unsigned long long)arg4;	// IMP=0x00000000003749b4
+ (id)lightProbeWithTextureSize:(long long)arg1 forLocation:(id)arg2 lightsToConsider:(id)arg3 objectsToConsider:(id)arg4 reflectiveCubemap:(id)arg5 irradianceCubemap:(id)arg6;	// IMP=0x0000000000374ebb
- (void).cxx_destruct;	// IMP=0x0000000000374e68
@property(readonly, nonatomic) unsigned long long sphericalHarmonicsLevel; // @synthesize sphericalHarmonicsLevel=_sphericalHarmonicsLevel;
@property(readonly, retain, nonatomic) MDLTexture *irradianceTexture; // @synthesize irradianceTexture=_irradianceTexture;
@property(readonly, retain, nonatomic) MDLTexture *reflectiveTexture; // @synthesize reflectiveTexture=_reflectiveTexture;
- (void)setTransform:(id)arg1;	// IMP=0x0000000000374e21
- (id)transform;	// IMP=0x0000000000374e10
- (void)generateSphericalHarmonicsFromIrradiance:(unsigned long long)arg1;	// IMP=0x0000000000374521
- (void)generateIrradianceTextureFromReflective;	// IMP=0x000000000037451b
- (id)initWithReflectiveTexture:(id)arg1 irradianceTexture:(id)arg2;	// IMP=0x000000000037442e
- (void)setSphericalHarmonicsCoefficients:(id)arg1;	// IMP=0x00000000003743c1
@property(readonly, copy, nonatomic) NSData *sphericalHarmonicsCoefficients;

@end

