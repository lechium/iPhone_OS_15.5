//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewDataSource-Protocol.h>
#import <UIKitCore/UICollectionViewDelegate-Protocol.h>

@class NSString, UICollectionView, UITableView, UITableViewIndexOverlaySelectionViewCollectionViewFlowLayout;

__attribute__((visibility("hidden")))
@interface UITableViewIndexOverlaySelectionView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    UICollectionView *_collectionView;	// 8 = 0x8
    UITableViewIndexOverlaySelectionViewCollectionViewFlowLayout *_flowLayout;	// 16 = 0x10
    UITableView *_table;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000f03550
- (void)reloadData;	// IMP=0x0000000000f03533
- (void)_setIndexColor:(id)arg1;	// IMP=0x0000000000f03521
- (void)_doneTapped;	// IMP=0x0000000000f034eb
- (void)_cellTapped:(id)arg1;	// IMP=0x0000000000f033ed
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000000f032e7
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000f03180
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000000f03118
- (void)layoutSubviews;	// IMP=0x0000000000f02cfd
- (id)initWithTable:(id)arg1;	// IMP=0x0000000000f02b1e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
