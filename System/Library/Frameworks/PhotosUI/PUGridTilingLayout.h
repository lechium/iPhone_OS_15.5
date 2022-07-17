//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PUGridTilingLayout
{
    long long _numberOfColumns;	// 8 = 0x8
    struct CGSize _itemSize;	// 16 = 0x10
    struct CGSize _interItemSpacing;	// 32 = 0x20
}

@property(nonatomic) struct CGSize interItemSpacing; // @synthesize interItemSpacing=_interItemSpacing;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
- (long long)_numberOfColumns;	// IMP=0x0000000000186ab8
- (struct CGRect)_frameForItemAtIndexPath:(id)arg1;	// IMP=0x000000000018697c
- (struct CGSize)sizeForSection:(long long)arg1 numberOfItems:(long long)arg2;	// IMP=0x00000000001868c1
- (id)layoutInfoForTileWithIndexPath:(id)arg1 kind:(id)arg2;	// IMP=0x0000000000186735
- (void)addLayoutInfosForTilesInRect:(struct CGRect)arg1 section:(long long)arg2 toSet:(id)arg3;	// IMP=0x0000000000186599
- (struct CGSize)estimatedSectionSize;	// IMP=0x0000000000186531
- (id)preferredScrollInfo;	// IMP=0x0000000000186513
- (void)prepareLayout;	// IMP=0x0000000000186459
- (void)setVisibleRect:(struct CGRect)arg1;	// IMP=0x0000000000186394
- (id)init;	// IMP=0x0000000000186327

@end
