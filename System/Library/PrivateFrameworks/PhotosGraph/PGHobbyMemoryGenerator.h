//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PGHobbyMemoryGenerator
{
    _Bool _onlyOverTheYears;	// 8 = 0x8
    _Bool _keepsOnlyIsInteresting;	// 9 = 0x9
    long long _hobbyType;	// 16 = 0x10
}

@property(nonatomic) _Bool keepsOnlyIsInteresting; // @synthesize keepsOnlyIsInteresting=_keepsOnlyIsInteresting;
@property(nonatomic) _Bool onlyOverTheYears; // @synthesize onlyOverTheYears=_onlyOverTheYears;
@property(nonatomic) long long hobbyType; // @synthesize hobbyType=_hobbyType;
- (id)titleGeneratorForTriggeredMemory:(id)arg1 withKeyAsset:(id)arg2 curatedAssets:(id)arg3 extendedCuratedAssets:(id)arg4 titleGenerationContext:(id)arg5 inGraph:(id)arg6;	// IMP=0x000000000014bb11
- (id)relevantFeederForTriggeredMemory:(id)arg1 inGraph:(id)arg2 allowGuestAsset:(_Bool)arg3 progressReporter:(id)arg4;	// IMP=0x000000000014b8d7
- (id)relevantFeederForPotentialMemory:(id)arg1 inGraph:(id)arg2;	// IMP=0x000000000014b81e
- (id)curationOptionsWithRequiredAssetUUIDs:(id)arg1 eligibleAssetUUIDs:(id)arg2 triggeredMemory:(id)arg3;	// IMP=0x000000000014b7ac
- (id)curationOptionsWithRequiredAssetUUIDs:(id)arg1 potentialMemory:(id)arg2;	// IMP=0x000000000014b73a
- (_Bool)semanticalDedupingEnabledForExtendedCuration;	// IMP=0x000000000014b732
- (unsigned long long)durationForExtendedCuration;	// IMP=0x000000000014b727
- (unsigned long long)durationForCuration;	// IMP=0x000000000014b71c
- (id)_potentialMemoriesForDryTesting;	// IMP=0x000000000014b680
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 andGraph:(id)arg3;	// IMP=0x000000000014b468
- (void)_enumeratePotentialMemoriesWithGraph:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000014b088
- (void)_enumerateBestPotentialMemoriesInLifeTimePotentialMemories:(id)arg1 andYearPotentialMemories:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000014abf5
- (void)_randomEnumerateOverLifeTimePotentialMemories:(id)arg1 andYearPotentialMemories:(id)arg2 rejectedNumbers:(CDStruct_e4f06a70 *)arg3 enumerationBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000014a607
- (void)_potentialHobbyMemoryForHobby:(id)arg1 inGraph:(id)arg2 results:(CDUnknownBlockType)arg3;	// IMP=0x0000000000149c62
- (id)confidenceThresholdByBlockedSceneIdentifier;	// IMP=0x0000000000149bf1
- (id)confidenceThresholdByWhitelistedSceneIdentifier;	// IMP=0x0000000000149b83
- (id)initWithHobbyType:(long long)arg1 controller:(id)arg2;	// IMP=0x0000000000149b3c
- (id)initWithHobbyType:(long long)arg1 memoryCurationSession:(id)arg2 loggingConnection:(id)arg3;	// IMP=0x0000000000149af2

@end
