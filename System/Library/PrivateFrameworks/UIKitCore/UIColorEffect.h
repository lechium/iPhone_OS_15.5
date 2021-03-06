//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@interface UIColorEffect
{
    NSString *_filterType;	// 8 = 0x8
    NSDictionary *_configurationValues;	// 16 = 0x10
    NSDictionary *_identityValues;	// 24 = 0x18
    NSDictionary *_requestedValues;	// 32 = 0x20
    _Bool _disableInPlaceFiltering;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000e4f58
+ (id)colorEffectCurvesRed:(id)arg1 green:(id)arg2 blue:(id)arg3 alpha:(id)arg4;	// IMP=0x00000000000e4b08
+ (id)colorEffectLuminanceCurveMap:(id)arg1 blendingAmount:(double)arg2;	// IMP=0x00000000000e469b
+ (id)colorEffectLuminanceMap:(id)arg1 blendingAmount:(double)arg2;	// IMP=0x00000000000e41ed
+ (id)colorEffectMonochromeTint:(id)arg1 blendingAmount:(double)arg2 brightnessAdjustment:(double)arg3;	// IMP=0x00000000000e3fd3
+ (id)colorEffectInvert;	// IMP=0x00000000000e3f44
+ (id)colorEffectContrast:(double)arg1;	// IMP=0x00000000000e3e3d
+ (id)colorEffectBrightness:(double)arg1;	// IMP=0x00000000000e3d21
+ (id)colorEffectSaturate:(double)arg1;	// IMP=0x00000000000e3c1a
+ (id)_colorEffectSourceOver:(CDStruct_d2b197d1)arg1;	// IMP=0x00000000000e3b47
+ (id)colorEffectSubtract:(id)arg1;	// IMP=0x00000000000e39c9
+ (id)colorEffectAdd:(id)arg1;	// IMP=0x00000000000e384b
+ (id)colorEffectMultiply:(id)arg1;	// IMP=0x00000000000e36cd
+ (id)colorEffectColor:(id)arg1;	// IMP=0x00000000000e3633
+ (id)_colorEffectCAMatrix:(struct CAColorMatrix)arg1;	// IMP=0x00000000000e3446
+ (id)colorEffectMatrix:(CDStruct_10115da1)arg1;	// IMP=0x00000000000e31a1
- (void).cxx_destruct;	// IMP=0x00000000000e53d4
- (id)description;	// IMP=0x00000000000e5187
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e517c
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;	// IMP=0x00000000000e50c4
- (id)_filterEntry;	// IMP=0x00000000000e5065
- (long long)_expectedUsage;	// IMP=0x00000000000e505a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e4f7d
- (unsigned long long)hash;	// IMP=0x00000000000e4f60
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e30d6
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e2fc3
- (id)init;	// IMP=0x00000000000e2f3b

@end

