//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface GKCollectionMultiDataSource
{
    NSArray *_dataSources;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000115b1f
@property(retain, nonatomic) NSArray *dataSources; // @synthesize dataSources=_dataSources;
- (void)collectionView:(id)arg1 didUnfocusItemAtIndexPath:(id)arg2;	// IMP=0x0000000000115a6c
- (void)collectionView:(id)arg1 didFocusItemAtIndexPath:(id)arg2;	// IMP=0x00000000001159de
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x000000000011594b
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;	// IMP=0x00000000001158b8
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000001157b6
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000115712
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000000115603
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;	// IMP=0x00000000001153c4
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x0000000000115185
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000001150d2
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000115033
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000011501e
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000000115001
- (id)itemForIndexPath:(id)arg1;	// IMP=0x0000000000114f84
- (double)preferredCollectionHeight;	// IMP=0x0000000000114e05
- (long long)itemCountInSection:(long long)arg1;	// IMP=0x0000000000114c75
- (long long)itemCount;	// IMP=0x0000000000114b3a
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001146f4
- (void)setupCollectionView:(id)arg1;	// IMP=0x000000000011456f
- (id)dataSourceForIndexPath:(id)arg1;	// IMP=0x00000000001143f9

@end

