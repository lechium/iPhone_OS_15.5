//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PGSocialGroupOverTimeMemoryGenerator
{
    unsigned long long _numberOfInsufficientlyFacedRejects;	// 8 = 0x8
    unsigned long long _numberOfBuildFailureRejects;	// 16 = 0x10
    long long _socialGroupID;	// 24 = 0x18
}

@property(nonatomic) long long socialGroupID; // @synthesize socialGroupID=_socialGroupID;
- (id)titleGeneratorForTriggeredMemory:(id)arg1 withKeyAsset:(id)arg2 curatedAssets:(id)arg3 extendedCuratedAssets:(id)arg4 titleGenerationContext:(id)arg5 inGraph:(id)arg6;	// IMP=0x00000000003dbd91
- (id)curationOptionsWithRequiredAssetUUIDs:(id)arg1 eligibleAssetUUIDs:(id)arg2 triggeredMemory:(id)arg3;	// IMP=0x00000000003dbd39
- (id)curationOptionsWithRequiredAssetUUIDs:(id)arg1 potentialMemory:(id)arg2;	// IMP=0x00000000003dbce1
- (id)keyAssetCurationOptionsWithTriggeredMemory:(id)arg1 inGraph:(id)arg2;	// IMP=0x00000000003dbb29
- (id)relevantCurationFeederForTriggeredMemory:(id)arg1 relevantFeeder:(id)arg2 inGraph:(id)arg3 allowGuestAsset:(_Bool)arg4 progressReporter:(id)arg5;	// IMP=0x00000000003db659
- (id)relevantFeederForTriggeredMemory:(id)arg1 inGraph:(id)arg2 allowGuestAsset:(_Bool)arg3 progressReporter:(id)arg4;	// IMP=0x00000000003db383
- (id)keyAssetCurationOptionsWithPotentialMemory:(id)arg1 inGraph:(id)arg2;	// IMP=0x00000000003db2c4
- (id)relevantCurationFeederForPotentialMemory:(id)arg1 inGraph:(id)arg2;	// IMP=0x00000000003db20b
- (id)relevantFeederForPotentialMemory:(id)arg1 inGraph:(id)arg2;	// IMP=0x00000000003db152
- (unsigned long long)durationForExtendedCuration;	// IMP=0x00000000003db147
- (id)peopleTitleGeneratorWithMomentNodes:(id)arg1 personNodes:(id)arg2 titleGenerationContext:(id)arg3;	// IMP=0x00000000003db059
- (id)_potentialMemoriesForDryTesting;	// IMP=0x00000000003dafbd
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 andGraph:(id)arg3;	// IMP=0x00000000003dad35
- (void)_enumeratePotentialMemoriesWithGraph:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000003d96e6
- (id)_facedAssetsForMomentNode:(id)arg1 personLocalIdentifiers:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000003d8c5e
- (id)_computeOverTheTimeFacedAssetsForPersonLocalIdentifiers:(id)arg1 inFacedAssets:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000003d7e5e

@end

