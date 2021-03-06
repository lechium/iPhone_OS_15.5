//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;
@protocol PXDisplayAssetCollection;

@interface PXForYouSuggestionsAssetsDataSource
{
    id <PXDisplayAssetCollection> _collection;	// 8 = 0x8
    NSArray *_assets;	// 16 = 0x10
}

+ (id)new;	// IMP=0x00000000003f87db
- (void).cxx_destruct;	// IMP=0x00000000003f855b
@property(copy, nonatomic) NSArray *assets; // @synthesize assets=_assets;
- (struct PXSimpleIndexPath)indexPathForAssetReference:(id)arg1;	// IMP=0x00000000003f832d
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x00000000003f8123
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;	// IMP=0x00000000003f811b
- (long long)numberOfItemsInSection:(long long)arg1;	// IMP=0x00000000003f807c
- (long long)numberOfSections;	// IMP=0x00000000003f8071
- (id)initWithDisplayAssets:(id)arg1 collection:(id)arg2;	// IMP=0x00000000003f7fc3
- (id)init;	// IMP=0x00000000003f7f49

@end

