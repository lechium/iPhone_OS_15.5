//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PGRecurrentTripMemoryGenerator
{
}

- (id)titleGeneratorForTriggeredMemory:(id)arg1 withKeyAsset:(id)arg2 curatedAssets:(id)arg3 extendedCuratedAssets:(id)arg4 titleGenerationContext:(id)arg5 inGraph:(id)arg6;	// IMP=0x000000000040b199
- (id)relevantFeederForTriggeredMemory:(id)arg1 inGraph:(id)arg2 allowGuestAsset:(_Bool)arg3 progressReporter:(id)arg4;	// IMP=0x000000000040aef5
- (id)relevantKeyCurationFeederForTriggeredMemory:(id)arg1 inGraph:(id)arg2 allowGuestAsset:(_Bool)arg3 progressReporter:(id)arg4;	// IMP=0x000000000040ac24
- (id)_potentialMemoriesForDryTesting;	// IMP=0x000000000040ab88
- (id)generateAllPotentialMemoriesWithGraph:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000040a2ac
- (void)_enumeratePotentialMemoriesWithGraph:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000040a2a6

@end

