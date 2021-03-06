//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXGridLayoutMetrics
{
    _Bool _displaysHeaderTile;	// 8 = 0x8
    long long _axis;	// 16 = 0x10
    unsigned long long _additionalTileCount;	// 24 = 0x18
    struct CGSize _itemSize;	// 32 = 0x20
    struct CGSize _interItemSpacing;	// 48 = 0x30
    struct CGSize _headerSize;	// 64 = 0x40
    struct CGSize _headerSpacing;	// 80 = 0x50
    struct CGSize _footerSize;	// 96 = 0x60
    struct UIEdgeInsets _contentInsets;	// 112 = 0x70
}

@property(nonatomic) unsigned long long additionalTileCount; // @synthesize additionalTileCount=_additionalTileCount;
@property(nonatomic) struct CGSize footerSize; // @synthesize footerSize=_footerSize;
@property(nonatomic) struct CGSize headerSpacing; // @synthesize headerSpacing=_headerSpacing;
@property(nonatomic) struct CGSize headerSize; // @synthesize headerSize=_headerSize;
@property(nonatomic) _Bool displaysHeaderTile; // @synthesize displaysHeaderTile=_displaysHeaderTile;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) struct CGSize interItemSpacing; // @synthesize interItemSpacing=_interItemSpacing;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) long long axis; // @synthesize axis=_axis;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004dfc6e

@end

