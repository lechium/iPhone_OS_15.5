//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSBundle, NSString;

__attribute__((visibility("hidden")))
@interface _UIBlurEffectCoreMaterialImpl
{
    long long _style;	// 8 = 0x8
    NSString *_lightMaterial;	// 16 = 0x10
    NSString *_darkMaterial;	// 24 = 0x18
    NSBundle *_bundle;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000e29d5
- (void)appendDescriptionTo:(id)arg1;	// IMP=0x00000000000e2915
- (_Bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;	// IMP=0x00000000000e284b
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;	// IMP=0x00000000000e2723
- (id)implementationForUserInterfaceStyle:(long long)arg1;	// IMP=0x00000000000e271a
- (_Bool)canProvideCoreMaterialVibrancyEffect;	// IMP=0x00000000000e26fc
- (_Bool)canProvideVibrancyEffect;	// IMP=0x00000000000e26de
- (_Bool)invertAutomaticStyle;	// IMP=0x00000000000e26d6
- (id)tintColor;	// IMP=0x00000000000e26ce
- (long long)style;	// IMP=0x00000000000e26bd
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e2532
- (unsigned long long)hash;	// IMP=0x00000000000e2521
- (id)initWithLightMaterial:(id)arg1 darkMaterial:(id)arg2 bundle:(id)arg3;	// IMP=0x00000000000e242e
- (id)initWithStyle:(long long)arg1;	// IMP=0x00000000000e23ea
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e2322

@end
