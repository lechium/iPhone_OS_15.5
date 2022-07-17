//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PGFeaturedTimePeriodMemoryConfiguration, PGMemoryMomentRequirements, PGOverTheYearsMemoryConfiguration;

@interface PGMeaningAggregationMemoryGenerator
{
    _Bool _requireSceneProcessingMeetsThresholdOverTime;	// 8 = 0x8
    _Bool _requireFaceProcessingMeetsThresholdOverTime;	// 9 = 0x9
    PGMemoryMomentRequirements *_momentRequirements;	// 16 = 0x10
    PGOverTheYearsMemoryConfiguration *_overTheYearsConfiguration;	// 24 = 0x18
    PGFeaturedTimePeriodMemoryConfiguration *_featuredYearConfiguration;	// 32 = 0x20
}

+ (id)featureRelationWithMeaningLabel:(id)arg1;	// IMP=0x00000000001ef12e
+ (id)allMeaningAggregationMemoryGeneratorClasses;	// IMP=0x00000000001ef06d
+ (id)requiredFeatureRelation;	// IMP=0x00000000001ef065
+ (id)supportedMeaningLabels;	// IMP=0x00000000001eefd2
- (void).cxx_destruct;	// IMP=0x00000000001eed2c
@property(retain, nonatomic) PGFeaturedTimePeriodMemoryConfiguration *featuredYearConfiguration; // @synthesize featuredYearConfiguration=_featuredYearConfiguration;
@property(retain, nonatomic) PGOverTheYearsMemoryConfiguration *overTheYearsConfiguration; // @synthesize overTheYearsConfiguration=_overTheYearsConfiguration;
@property(retain, nonatomic) PGMemoryMomentRequirements *momentRequirements; // @synthesize momentRequirements=_momentRequirements;
- (_Bool)requireFaceProcessingMeetsThresholdOverTime;	// IMP=0x00000000001eecad
- (_Bool)requireSceneProcessingMeetsThresholdOverTime;	// IMP=0x00000000001eec9d
- (id)titleGeneratorForTriggeredMemory:(id)arg1 withKeyAsset:(id)arg2 curatedAssets:(id)arg3 extendedCuratedAssets:(id)arg4 titleGenerationContext:(id)arg5 inGraph:(id)arg6;	// IMP=0x00000000001ee93f
- (id)relevantFeederForTriggeredMemory:(id)arg1 inGraph:(id)arg2 allowGuestAsset:(_Bool)arg3 progressReporter:(id)arg4;	// IMP=0x00000000001edaa3
- (id)keyAssetCurationOptionsWithTriggeredMemory:(id)arg1 inGraph:(id)arg2;	// IMP=0x00000000001ed8d1
- (id)curationOptionsWithRequiredAssetUUIDs:(id)arg1 eligibleAssetUUIDs:(id)arg2 triggeredMemory:(id)arg3;	// IMP=0x00000000001ed85f
- (unsigned long long)durationForCuration;	// IMP=0x00000000001ed854
- (void)enumerateMomentNodesAndFeatureNodesInGraph:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001ed6e0
- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)arg1;	// IMP=0x00000000001ed5ed
- (unsigned long long)memoryCategory;	// IMP=0x00000000001ed5e2
- (id)initWithMemoryGenerationContext:(id)arg1;	// IMP=0x00000000001ed480

@end
