//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterUI/NSCopying-Protocol.h>

@class NSArray, NSPredicate;

@interface GKBasicCollectionViewDataSource <NSCopying>
{
    NSArray *_items;	// 8 = 0x8
    SEL _showAllAction;	// 16 = 0x10
    unsigned long long _pageSize;	// 24 = 0x18
    NSPredicate *_filterPredicate;	// 32 = 0x20
    struct _NSRange _preloadedRange;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000a1640
@property(retain, nonatomic) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
@property(nonatomic) struct _NSRange preloadedRange; // @synthesize preloadedRange=_preloadedRange;
@property(nonatomic) unsigned long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) SEL showAllAction; // @synthesize showAllAction=_showAllAction;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (void)preloadImagesForItems:(id)arg1 startingAtIndex:(unsigned long long)arg2 loadBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a146d
- (void)replaceItemsAtIndexes:(id)arg1 withItems:(id)arg2;	// IMP=0x00000000000a12be
- (void)removeItemsAtIndexes:(id)arg1;	// IMP=0x00000000000a0d31
- (void)insertItems:(id)arg1 atIndexes:(id)arg2;	// IMP=0x00000000000a0b82
- (id)itemsAtIndexes:(id)arg1;	// IMP=0x00000000000a0a1a
- (unsigned long long)countOfItems;	// IMP=0x00000000000a09fd
- (void)setItems:(id)arg1 animated:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x000000000009f622
- (void)setItemsNoNotify:(id)arg1;	// IMP=0x000000000009f57c
- (id)sectionTitle;	// IMP=0x000000000009f45b
- (void)configureCollectionView:(id)arg1;	// IMP=0x000000000009f3e1
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000000009f1ba
- (id)indexPathsForItem:(id)arg1;	// IMP=0x000000000009f0b8
- (id)itemAtIndexPath:(id)arg1;	// IMP=0x000000000009f01b
- (void)removeItemAtIndexPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000009ef84
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000000009ef79
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000009ef53
- (void)collectionViewDidBecomeInactive:(id)arg1;	// IMP=0x000000000009ef3f
- (id)_gkDescriptionWithChildren:(long long)arg1;	// IMP=0x000000000009edd7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009ed40
- (id)init;	// IMP=0x000000000009ecfd

@end

