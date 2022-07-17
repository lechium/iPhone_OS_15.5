//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PGPetMemoryGenerator
{
}

- (id)titleGeneratorForTriggeredMemory:(id)arg1 withKeyAsset:(id)arg2 curatedAssets:(id)arg3 extendedCuratedAssets:(id)arg4 titleGenerationContext:(id)arg5 inGraph:(id)arg6;	// IMP=0x000000000041ccd9
- (id)relevantFeederForTriggeredMemory:(id)arg1 inGraph:(id)arg2 allowGuestAsset:(_Bool)arg3 progressReporter:(id)arg4;	// IMP=0x000000000041ca9f
- (id)relevantFeederForPotentialMemory:(id)arg1 inGraph:(id)arg2;	// IMP=0x000000000041c9e6
- (_Bool)semanticalDedupingEnabledForExtendedCuration;	// IMP=0x000000000041c9de
- (unsigned long long)durationForExtendedCuration;	// IMP=0x000000000041c9d3
- (unsigned long long)durationForCuration;	// IMP=0x000000000041c9c8
- (id)_potentialMemoriesForDryTesting;	// IMP=0x000000000041c92c
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 andGraph:(id)arg3;	// IMP=0x000000000041c733
- (void)_enumeratePotentialMemoriesWithGraph:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000041c360
- (void)_enumerateBestPotentialMemoriesInLifeTimePotentialMemories:(id)arg1 andYearPotentialMemories:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000041bed5
- (void)_randomEnumerateOverLifeTimePotentialMemories:(id)arg1 andYearPotentialMemories:(id)arg2 rejectedNumbers:(CDStruct_e4f06a70 *)arg3 enumerationBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000041b9c9
- (void)_potentialPetMemoryForPet:(id)arg1 inGraph:(id)arg2 results:(CDUnknownBlockType)arg3;	// IMP=0x000000000041b071
- (id)confidenceThresholdByBlockedSceneIdentifier;	// IMP=0x000000000041b009
- (id)confidenceThresholdByWhitelistedSceneIdentifier;	// IMP=0x000000000041afa4

@end
