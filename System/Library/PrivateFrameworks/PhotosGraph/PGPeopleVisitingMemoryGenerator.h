//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PGPeopleVisitingMemoryGenerator
{
}

- (id)_potentialMemoriesForDryTesting;	// IMP=0x000000000059b96b
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 andGraph:(id)arg3;	// IMP=0x000000000059b776
- (void)_enumeratePotentialMemoriesWithGraph:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000059b3c8
- (void)enumeratePeopleNodesAndVisitsInGraph:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000059b017
- (id)consolidatedDateIntervalsFromDateIntervals:(id)arg1;	// IMP=0x000000000059ad36
- (void)enumerateVerifiedPeopleNodesInGraph:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000059ac31

@end

