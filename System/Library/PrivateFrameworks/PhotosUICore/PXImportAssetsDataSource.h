//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary;

@interface PXImportAssetsDataSource
{
    NSArray *_assetCollections;	// 8 = 0x8
    NSDictionary *_assetCollectionsById;	// 16 = 0x10
    NSDictionary *_assetsMap;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001690d
@property(readonly, nonatomic) NSDictionary *assetsMap; // @synthesize assetsMap=_assetsMap;
@property(readonly, nonatomic) NSDictionary *assetCollectionsById; // @synthesize assetCollectionsById=_assetCollectionsById;
@property(readonly, nonatomic) NSArray *assetCollections; // @synthesize assetCollections=_assetCollections;
- (id)itemForImportAssetUuid:(id)arg1;	// IMP=0x0000000000016857
- (id)alreadyImportedItems;	// IMP=0x0000000000016696
- (id)notYetImportedItems;	// IMP=0x00000000000164d5
- (id)allItemsUnsorted;	// IMP=0x0000000000016332
- (id)allSelectableItems;	// IMP=0x000000000001611d
- (id)allItems;	// IMP=0x0000000000015f5c
- (id)alreadyImportedCollection;	// IMP=0x0000000000015ed5
- (_Bool)hasAlreadyImportedSection;	// IMP=0x0000000000015ea2
- (unsigned long long)numberOfItems;	// IMP=0x0000000000015d62
- (unsigned long long)numberOfSelectableItems;	// IMP=0x0000000000015b88
- (unsigned long long)numberOfAlreadyImportedItems;	// IMP=0x00000000000159ae
- (unsigned long long)numberOfNotYetImportedItems;	// IMP=0x00000000000157d4
- (struct PXSimpleIndexPath)itemIndexPathForItem:(id)arg1;	// IMP=0x0000000000015698
- (long long)sectionForAssetCollection:(id)arg1;	// IMP=0x00000000000155a7
- (id)assetCollectionForIdentifier:(id)arg1;	// IMP=0x0000000000015524
- (id)assetCollectionForSection:(unsigned long long)arg1;	// IMP=0x000000000001547c
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x0000000000015367
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;	// IMP=0x000000000001535f
- (long long)numberOfItemsInSection:(long long)arg1;	// IMP=0x00000000000152e4
- (long long)numberOfSections;	// IMP=0x00000000000152c7
- (id)description;	// IMP=0x0000000000015257
- (id)initWithAssetCollections:(id)arg1 assetsMap:(id)arg2;	// IMP=0x0000000000014f8f
- (id)init;	// IMP=0x0000000000014f15

@end
