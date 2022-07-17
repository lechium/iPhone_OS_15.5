//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PGFeaturedTimePeriodMemoryConfiguration, PGGraphMeNodeCollection, PGMemoryMomentRequirements, PGOverTheYearsMemoryConfiguration;

@interface PGSocialGroupMemoryGenerator
{
    PGGraphMeNodeCollection *_meNodeAsCollection;	// 8 = 0x8
    _Bool _requireSceneProcessingMeetsThresholdOverTime;	// 16 = 0x10
    _Bool _requireFaceProcessingMeetsThresholdOverTime;	// 17 = 0x11
    PGMemoryMomentRequirements *_momentRequirements;	// 24 = 0x18
    PGOverTheYearsMemoryConfiguration *_overTheYearsConfiguration;	// 32 = 0x20
    PGFeaturedTimePeriodMemoryConfiguration *_featuredYearConfiguration;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000002e8b3e
- (id)featuredYearConfiguration;	// IMP=0x00000000002e8b2d
- (id)overTheYearsConfiguration;	// IMP=0x00000000002e8b1c
- (id)momentRequirements;	// IMP=0x00000000002e8b0b
- (_Bool)requireFaceProcessingMeetsThresholdOverTime;	// IMP=0x00000000002e8afb
- (_Bool)requireSceneProcessingMeetsThresholdOverTime;	// IMP=0x00000000002e8aeb
- (id)titleGeneratorForTriggeredMemory:(id)arg1 withKeyAsset:(id)arg2 curatedAssets:(id)arg3 extendedCuratedAssets:(id)arg4 titleGenerationContext:(id)arg5 inGraph:(id)arg6;	// IMP=0x00000000002e8896
- (id)curationOptionsWithRequiredAssetUUIDs:(id)arg1 eligibleAssetUUIDs:(id)arg2 triggeredMemory:(id)arg3;	// IMP=0x00000000002e8771
- (id)curationOptionsWithRequiredAssetUUIDs:(id)arg1 potentialMemory:(id)arg2;	// IMP=0x00000000002e869e
- (id)keyAssetCurationOptionsWithTriggeredMemory:(id)arg1 inGraph:(id)arg2;	// IMP=0x00000000002e84e3
- (id)relevantFeederForTriggeredMemory:(id)arg1 inGraph:(id)arg2 allowGuestAsset:(_Bool)arg3 progressReporter:(id)arg4;	// IMP=0x00000000002e8341
- (_Bool)semanticalDedupingEnabledForExtendedCuration;	// IMP=0x00000000002e8339
- (unsigned long long)durationForExtendedCuration;	// IMP=0x00000000002e832e
- (unsigned long long)durationForCuration;	// IMP=0x00000000002e8323
- (id)_meNodeAsCollectionInGraph:(id)arg1;	// IMP=0x00000000002e82d6
- (id)allFeatureNodesForMemoryNodeWithFeatureNodes:(id)arg1;	// IMP=0x00000000002e8198
- (void)enumerateMomentNodesAndFeatureNodesInGraph:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000002e807b
- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)arg1;	// IMP=0x00000000002e7f88
- (unsigned long long)memoryCategory;	// IMP=0x00000000002e7f7d
- (id)initWithMemoryGenerationContext:(id)arg1;	// IMP=0x00000000002e7e0a

@end
