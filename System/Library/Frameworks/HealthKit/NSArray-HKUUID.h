//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

#import <HealthKit/HKCodedObject-Protocol.h>
#import <HealthKit/HKUUIDCollection-Protocol.h>

@class NSString;

@interface NSArray (HKUUID) <HKUUIDCollection, HKCodedObject>
+ (_Bool)_permutationHelperForArray:(id)arg1 number:(long long)arg2 permutationHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000e8058
+ (id)hk_arrayWithCount:(long long)arg1 generator:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e6515
+ (id)indexableKeyPathsWithPrefix:(id)arg1;	// IMP=0x0000000000173442
- (id)hk_dataForAllUUIDs;	// IMP=0x0000000000066a7c
- (_Bool)hk_enumerateUUIDsWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000667f6
- (id)hk_splitWithBucketCount:(long long)arg1;	// IMP=0x00000000000e8704
- (id)hk_mutableSubarrayWithRange:(struct _NSRange)arg1;	// IMP=0x00000000000e8657
- (_Bool)_permutationsWithCount:(long long)arg1 permutation:(id)arg2 depth:(long long)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x00000000000e834c
- (void)hk_enumeratePermutationsOfSubsetsOfLength:(long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e8180
- (id)hk_shuffled;	// IMP=0x00000000000e800b
- (id)hk_reversed;	// IMP=0x00000000000e7fbb
- (void)hk_enumeratePermutationsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e7d9f
- (id)hk_mapToSet:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e7b67
- (id)hk_mapToDictionary:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e78f2
- (id)hk_orPredicateWithPredicateBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e788f
- (void)hk_partitionArrayWithPartitionSetupBlock:(CDUnknownBlockType)arg1 partitionMembershipCheckBlock:(CDUnknownBlockType)arg2 partitionExtendBlock:(CDUnknownBlockType)arg3 partitionFinalizeBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000e75ff
- (_Bool)hk_allElementsEqual;	// IMP=0x00000000000e758e
- (_Bool)hk_allElementsUnique;	// IMP=0x00000000000e7519
- (_Bool)hk_containsObjectsInArray:(id)arg1;	// IMP=0x00000000000e7476
- (id)hk_firstSortedObjectWithComparison:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e72eb
- (id)hk_firstObjectWithMinimumValueUsingEvaluationBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e7138
- (id)hk_firstObjectWithMaximumValueUsingEvaluationBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e6f8d
- (double)hk_sumUsingEvaluationBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e6e27
- (id)hk_averageUsingEvaluationBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e6c4a
- (_Bool)hk_allObjectsPassTest:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e6b11
- (_Bool)hk_containsObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e6ade
- (id)hk_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0000000000018423
- (id)hk_foldRightFrom:(id)arg1 with:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e6938
- (id)hk_filter:(CDUnknownBlockType)arg1;	// IMP=0x000000000001773c
- (id)hk_map:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x00000000000e664b
- (id)hk_map:(CDUnknownBlockType)arg1;	// IMP=0x000000000000f89b
- (_Bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000173a8c
- (id)codingsForKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001734c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
