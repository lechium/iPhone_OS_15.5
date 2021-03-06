//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString;

@interface PGPeopleMemoryGenerator
{
    NSString *_peopleUUID;	// 8 = 0x8
    NSSet *_personNodes;	// 16 = 0x10
    NSSet *_birthdayPersonUUIDs;	// 24 = 0x18
    long long _year;	// 32 = 0x20
    NSSet *_extraFeatures;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000002d3c64
@property(nonatomic) NSSet *extraFeatures; // @synthesize extraFeatures=_extraFeatures;
@property(nonatomic) long long year; // @synthesize year=_year;
@property(retain, nonatomic) NSSet *birthdayPersonUUIDs; // @synthesize birthdayPersonUUIDs=_birthdayPersonUUIDs;
@property(retain, nonatomic) NSSet *personNodes; // @synthesize personNodes=_personNodes;
@property(retain, nonatomic) NSString *peopleUUID; // @synthesize peopleUUID=_peopleUUID;
- (id)titleGeneratorForTriggeredMemory:(id)arg1 withKeyAsset:(id)arg2 curatedAssets:(id)arg3 extendedCuratedAssets:(id)arg4 titleGenerationContext:(id)arg5 inGraph:(id)arg6;	// IMP=0x00000000002d399e
- (id)keyAssetCurationOptionsWithTriggeredMemory:(id)arg1 inGraph:(id)arg2;	// IMP=0x00000000002d388e
- (id)keyAssetCurationOptionsWithPotentialMemory:(id)arg1 inGraph:(id)arg2;	// IMP=0x00000000002d37cf
- (id)relevantFeederForTriggeredMemory:(id)arg1 inGraph:(id)arg2 allowGuestAsset:(_Bool)arg3 progressReporter:(id)arg4;	// IMP=0x00000000002d362d
- (id)relevantFeederForPotentialMemory:(id)arg1 inGraph:(id)arg2;	// IMP=0x00000000002d3574
- (_Bool)semanticalDedupingEnabledForExtendedCuration;	// IMP=0x00000000002d356c
- (unsigned long long)durationForExtendedCuration;	// IMP=0x00000000002d3561
- (unsigned long long)durationForCuration;	// IMP=0x00000000002d3556
- (_Bool)_upcomingBirthdayWillCollideWithPotentialMemory:(id)arg1;	// IMP=0x00000000002d33a9
- (id)_potentialMemoriesForDryTesting;	// IMP=0x00000000002d330d
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 andGraph:(id)arg3;	// IMP=0x00000000002d306e
- (void)_enumeratePotentialMemoriesWithGraph:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000002d1177
- (void)_potentialMemoriesWithPeopleNode:(id)arg1 inYear:(long long)arg2 result:(CDUnknownBlockType)arg3;	// IMP=0x00000000002d0bd6

@end

