//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/_HKFactor-Protocol.h>

@class HKBaseUnit, HKUnit, NSString;

__attribute__((visibility("hidden")))
@interface _HKBaseDimension <_HKFactor>
{
    NSString *_name;	// 24 = 0x18
    HKBaseUnit *_reducibleBaseUnit;	// 32 = 0x20
    HKUnit *_reducedUnit;	// 40 = 0x28
    double _reductionCoefficient;	// 48 = 0x30
}

+ (id)_uniquedDefinedDimensionWithName:(id)arg1;	// IMP=0x000000000001aecb
+ (id)_uniquedDimensionWithName:(id)arg1 configuration:(CDUnknownBlockType)arg2;	// IMP=0x000000000001af6e
+ (id)nullDimension;	// IMP=0x000000000001b138
+ (id)electricPotentialDifference;	// IMP=0x00000000000d9453
+ (id)titer;	// IMP=0x00000000000d943a
+ (id)soundPressureLevel;	// IMP=0x00000000000d9421
+ (id)hearingSensitivity;	// IMP=0x00000000000d9408
+ (id)equivalents;	// IMP=0x00000000000d93ef
+ (id)nonConvertibleIU;	// IMP=0x00000000000d93d6
+ (id)nonConvertibleMole;	// IMP=0x00000000000d93bd
+ (id)frequency;	// IMP=0x00000000000d93a4
+ (id)conductance;	// IMP=0x00000000000d938b
+ (id)temperature;	// IMP=0x00000000000d9372
+ (id)time;	// IMP=0x000000000001aeb2
+ (id)energy;	// IMP=0x00000000000d9359
+ (id)pressure;	// IMP=0x00000000000d9340
+ (id)volume;	// IMP=0x00000000000d9327
+ (id)length;	// IMP=0x000000000001dd82
+ (id)mass;	// IMP=0x00000000000d930e
- (void).cxx_destruct;	// IMP=0x00000000000d9665
@property(nonatomic) double reductionCoefficient; // @synthesize reductionCoefficient=_reductionCoefficient;
@property(retain, nonatomic) HKUnit *reducedUnit; // @synthesize reducedUnit=_reducedUnit;
@property(retain, nonatomic) HKBaseUnit *reducibleBaseUnit; // @synthesize reducibleBaseUnit=_reducibleBaseUnit;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)_baseDimensions;	// IMP=0x00000000000d9632
- (id)_initWithName:(id)arg1;	// IMP=0x000000000001b158
- (id)dimension;	// IMP=0x00000000000d9490
- (id)unitString;	// IMP=0x00000000000d947e
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000e7e4
- (_Bool)canBeReduced;	// IMP=0x000000000001b067

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

