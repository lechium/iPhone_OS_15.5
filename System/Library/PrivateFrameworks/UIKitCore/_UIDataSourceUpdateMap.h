//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, _UIDataSourceBatchUpdateMapHelper, _UIDataSourceSnapshotter;

__attribute__((visibility("hidden")))
@interface _UIDataSourceUpdateMap : NSObject
{
    _UIDataSourceSnapshotter *_initialSnapshot;	// 8 = 0x8
    _UIDataSourceSnapshotter *_finalSnapshot;	// 16 = 0x10
    NSArray *_originalUpdateItems;	// 24 = 0x18
    NSArray *_updateItems;	// 32 = 0x20
    NSArray *_reverseUpdateItems;	// 40 = 0x28
    _UIDataSourceBatchUpdateMapHelper *_batchUpdateMapHelper;	// 48 = 0x30
}

+ (id)mapForInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 batchUpdateItems:(id)arg3;	// IMP=0x00000000003c1618
+ (id)mapForInitialSnapshot:(id)arg1 orderedUpdateItems:(id)arg2;	// IMP=0x00000000003c15aa
- (void).cxx_destruct;	// IMP=0x00000000003c640e
@property(retain, nonatomic) _UIDataSourceBatchUpdateMapHelper *batchUpdateMapHelper; // @synthesize batchUpdateMapHelper=_batchUpdateMapHelper;
@property(retain, nonatomic) NSArray *reverseUpdateItems; // @synthesize reverseUpdateItems=_reverseUpdateItems;
@property(retain, nonatomic) NSArray *updateItems; // @synthesize updateItems=_updateItems;
@property(copy, nonatomic) NSArray *originalUpdateItems; // @synthesize originalUpdateItems=_originalUpdateItems;
@property(retain, nonatomic) _UIDataSourceSnapshotter *finalSnapshot; // @synthesize finalSnapshot=_finalSnapshot;
@property(retain, nonatomic) _UIDataSourceSnapshotter *initialSnapshot; // @synthesize initialSnapshot=_initialSnapshot;
- (id)updates;	// IMP=0x00000000003c635c
- (void)_updateSnapshot:(id)arg1 forUpdateItem:(id)arg2;	// IMP=0x00000000003c6168
- (long long)_transformSectionIndex:(long long)arg1 applyingUpdateItem:(id)arg2 withSnapshot:(id)arg3;	// IMP=0x00000000003c5f15
- (id)_transformIndexPath:(id)arg1 applyingUpdateItem:(id)arg2 withSnapshot:(id)arg3;	// IMP=0x00000000003c5a4e
- (id)_mapUpdateForCollectionUpdateItem:(id)arg1 snapshot:(id)arg2;	// IMP=0x00000000003c553a
- (void)_computeFinalSnapshotAndReverseUpdateItemsForCollectionViewUpdateItems:(id)arg1;	// IMP=0x00000000003c5248
- (id)_rebasedUpdatesForUpdate:(id)arg1;	// IMP=0x00000000003c4cf4
- (id)_updateMapByRevertingAllUpdatesExceptUpdateWithIdentifier:(id)arg1;	// IMP=0x00000000003c47ee
- (id)submapAfterUpdate:(id)arg1;	// IMP=0x00000000003c4459
- (id)submapBeforeUpdate:(id)arg1;	// IMP=0x00000000003c421a
- (id)_findUpdateForIdentifier:(id)arg1;	// IMP=0x00000000003c402a
- (void)_performAppendingInsertsFixups;	// IMP=0x00000000003c3d97
- (_Bool)_mapIsSimpleInsertMoveSequence;	// IMP=0x00000000003c3c2d
- (_Bool)_isSectionOnlyIndexPath:(id)arg1;	// IMP=0x00000000003c3bd2
- (id)_sectionIndexPathForSection:(long long)arg1;	// IMP=0x00000000003c3bac
- (id)description;	// IMP=0x00000000003c3aba
- (id)initialUpdateForFinalUpdate:(id)arg1;	// IMP=0x00000000003c3950
- (id)finalUpdateForInitialUpdate:(id)arg1;	// IMP=0x00000000003c36bb
- (id)initialIndexPathForIndexPath:(id)arg1 beforeUpdateWithIdentifier:(id)arg2;	// IMP=0x00000000003c34d0
- (id)finalIndexPathForIndexPath:(id)arg1 startingAtUpdateWithIdentifier:(id)arg2;	// IMP=0x00000000003c340c
- (id)initialUpdateForUpdateIdentifier:(id)arg1;	// IMP=0x00000000003c3253
- (id)updateMapByRevertingUpdateWithIdentifier:(id)arg1;	// IMP=0x00000000003c2d05
@property(readonly, nonatomic) _Bool isBatchUpdateMap;
- (id)rebasedMapFromNewBaseMap:(id)arg1;	// IMP=0x00000000003c21e4
- (long long)initialSectionIndexForFinalSectionIndex:(long long)arg1;	// IMP=0x00000000003c1f41
- (long long)finalSectionIndexForInitialSectionIndex:(long long)arg1;	// IMP=0x00000000003c1c9e
- (id)initialIndexPathForFinalIndexPath:(id)arg1;	// IMP=0x00000000003c19a2
- (id)finalIndexPathForInitialIndexPath:(id)arg1;	// IMP=0x00000000003c16a6
- (id)initWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 updateItems:(id)arg3;	// IMP=0x00000000003c1472

@end

