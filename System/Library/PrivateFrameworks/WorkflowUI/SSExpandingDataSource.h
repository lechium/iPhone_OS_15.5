//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SSExpandingDataSource
{
    CDUnknownBlockType _collapsedSectionCountBlock;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000014efc2
@property(copy, nonatomic) CDUnknownBlockType collapsedSectionCountBlock; // @synthesize collapsedSectionCountBlock=_collapsedSectionCountBlock;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1;	// IMP=0x000000000014ee77
- (void)removeItemsAtIndexes:(id)arg1 inSection:(long long)arg2;	// IMP=0x000000000014ecd4
- (void)removeItemsInRange:(struct _NSRange)arg1 inSection:(long long)arg2;	// IMP=0x000000000014ec7c
- (void)removeItemAtIndexPath:(id)arg1;	// IMP=0x000000000014ebde
- (void)replaceItemAtIndexPath:(id)arg1 withItem:(id)arg2;	// IMP=0x000000000014ea1f
- (void)insertItems:(id)arg1 atIndexes:(id)arg2 inSection:(long long)arg3;	// IMP=0x000000000014e8c6
- (void)appendItems:(id)arg1 toSection:(long long)arg2;	// IMP=0x000000000014e7f8
- (void)insertItem:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000000014e6de
- (unsigned long long)numberOfItemsInSection:(long long)arg1;	// IMP=0x000000000014e66b
- (void)setSectionAtIndex:(long long)arg1 expanded:(_Bool)arg2;	// IMP=0x000000000014e4f6
- (void)setSection:(id)arg1 expanded:(_Bool)arg2;	// IMP=0x000000000014e44b
- (void)toggleSectionAtIndex:(long long)arg1;	// IMP=0x000000000014e409
- (unsigned long long)numberOfCollapsedRowsInSection:(long long)arg1;	// IMP=0x000000000014e368
- (id)expandedSectionIndexes;	// IMP=0x000000000014e269
- (_Bool)isItemVisibleAtIndexPath:(id)arg1;	// IMP=0x000000000014e1f4
- (_Bool)isSectionExpandedAtIndex:(long long)arg1;	// IMP=0x000000000014e1b0

@end

