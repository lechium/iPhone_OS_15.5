//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPRandomDistribution, NSMutableArray;
@protocol _MPSSILDelegate;

__attribute__((visibility("hidden")))
@interface _MPSSILImplementation
{
    MPRandomDistribution *_randomDistribution;	// 16 = 0x10
    NSMutableArray *_candidateItems;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000064b91
- (void).cxx_destruct;	// IMP=0x0000000000063a07
@property(retain, nonatomic) NSMutableArray *candidateItems; // @synthesize candidateItems=_candidateItems;
@property(readonly, nonatomic) MPRandomDistribution *randomDistribution; // @synthesize randomDistribution=_randomDistribution;
- (void)_dequeueCandidatesWithQuota:(long long)arg1 withExclusiveAccessToken:(id)arg2;	// IMP=0x0000000000063549
- (id)_createShuffleCloneForItem:(id)arg1 inSection:(id)arg2 withExclusiveAccessToken:(id)arg3;	// IMP=0x0000000000063404
- (void)_appendShuffledItems:(id)arg1 withExclusiveAccessToken:(id)arg2;	// IMP=0x00000000000632c1
- (void)_addShuffleSection:(id)arg1 dataSource:(id)arg2 withExclusiveAccessToken:(id)arg3;	// IMP=0x00000000000631b2
- (void)_reverseEnumeratorWillStartAtEnd:(id)arg1 withExclusiveAccessToken:(id)arg2;	// IMP=0x0000000000063145
- (_Bool)_isSequentialSection:(id)arg1 withExclusiveAccessToken:(id)arg2;	// IMP=0x0000000000063024
- (void)_enumerator:(id)arg1 didEncounterEntry:(id)arg2 withExclusiveAccessToken:(id)arg3;	// IMP=0x0000000000062f5b
- (long long)itemCount;	// IMP=0x0000000000062eb8
- (void)dataSourceReloadItem:(id)arg1 inSection:(id)arg2;	// IMP=0x0000000000062df9
- (void)dataSourceRemoveItem:(id)arg1 fromSection:(id)arg2;	// IMP=0x0000000000062d1a
- (void)dataSourceInsertItemsAtTail:(id)arg1 inSection:(id)arg2;	// IMP=0x0000000000062bb6
- (void)dataSourceInsertItems:(id)arg1 afterItem:(id)arg2 inSection:(id)arg3;	// IMP=0x0000000000062a30
- (void)dataSourceInsertItemsAtHead:(id)arg1 inSection:(id)arg2;	// IMP=0x00000000000628cc
- (void)addDataSourceAtEnd:(id)arg1 section:(id)arg2 sequentially:(_Bool)arg3;	// IMP=0x0000000000062809
- (void)addDataSource:(id)arg1 section:(id)arg2 sequentially:(_Bool)arg3 afterTailOfSection:(id)arg4;	// IMP=0x0000000000062716
- (void)addDataSource:(id)arg1 section:(id)arg2 sequentially:(_Bool)arg3 afterItem:(id)arg4 inSection:(id)arg5;	// IMP=0x00000000000625e7
- (void)addDataSourceAtStart:(id)arg1 section:(id)arg2 sequentially:(_Bool)arg3;	// IMP=0x0000000000062524
- (void)safelyReshuffleAfterItem:(id)arg1 inSection:(id)arg2;	// IMP=0x0000000000062465
- (void)dequeueCandidatesWithQuota:(long long)arg1;	// IMP=0x0000000000062412
- (void)encodeWithCoder:(id)arg1 withExclusiveAccessToken:(id)arg2;	// IMP=0x0000000000062235
- (void)_beforeInitWithCoder:(id)arg1;	// IMP=0x0000000000061f91
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000061be5
- (id)initWithSectionedIdentifierList:(id)arg1 randomSource:(id)arg2 startingItemEntry:(id)arg3 withExclusiveAccessToken:(id)arg4;	// IMP=0x0000000000061577

// Remaining properties
@property(nonatomic) __weak id <_MPSSILDelegate> delegate; // @dynamic delegate;

@end

