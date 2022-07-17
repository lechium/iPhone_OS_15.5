//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXRelatedDataSource, PXRelatedSpec;
@protocol PXRelatedTilingLayoutDelegate;

@interface PXRelatedTilingLayout
{
    long long _dataSourceIdentifier;	// 8 = 0x8
    long long _numberOfEntries;	// 16 = 0x10
    long long _numberOfColumns;	// 24 = 0x18
    long long _numberOfRows;	// 32 = 0x20
    struct UIEdgeInsets _margins;	// 40 = 0x28
    struct CGSize _itemSize;	// 72 = 0x48
    struct CGSize _interItemSpacing;	// 88 = 0x58
    struct CGRect _contentBounds;	// 104 = 0x68
    _Bool _isDataSourceTransient;	// 136 = 0x88
    struct {
        _Bool isPlaceholderEntryAtIndexPath;
        _Bool fontNameForEntryAtIndexPath;
        _Bool contentsRectForItemAtIndexPathForAspectRatio;
    } _delegateRespondsTo;	// 137 = 0x89
    id <PXRelatedTilingLayoutDelegate> _delegate;	// 144 = 0x90
    PXRelatedDataSource *_dataSource;	// 152 = 0x98
    PXRelatedSpec *_spec;	// 160 = 0xa0
    long long _maximumNumberOfRows;	// 168 = 0xa8
    struct PXSimpleIndexPath _highlightedIndexPath;	// 176 = 0xb0
    struct PXSimpleIndexPath _focusedIndexPath;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x0000000000265087
@property(nonatomic) struct PXSimpleIndexPath focusedIndexPath; // @synthesize focusedIndexPath=_focusedIndexPath;
@property(nonatomic) struct PXSimpleIndexPath highlightedIndexPath; // @synthesize highlightedIndexPath=_highlightedIndexPath;
@property(nonatomic) long long maximumNumberOfRows; // @synthesize maximumNumberOfRows=_maximumNumberOfRows;
@property(retain, nonatomic) PXRelatedSpec *spec; // @synthesize spec=_spec;
@property(retain, nonatomic) PXRelatedDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <PXRelatedTilingLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGRect)_rectForEmptyPlaceholder;	// IMP=0x0000000000264f83
- (_Bool)_shouldShowEmptyPlaceholder;	// IMP=0x0000000000264f5d
- (struct CGRect)_rectForActivityIndicator;	// IMP=0x0000000000264ee5
- (_Bool)_shouldShowActivityIndicator;	// IMP=0x0000000000264ebf
- (struct CGRect)_rectForEntryAtIndex:(long long)arg1;	// IMP=0x0000000000264e0b
- (void)_enumerateEntryIndexesInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000264cbd
- (struct PXTileIdentifier)_tileIdentifierForTileKind:(long long)arg1 entryIndex:(long long)arg2;	// IMP=0x0000000000264c78
- (struct CGRect)rectOfInterestForEntryAtIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x0000000000264b80
- (struct PXSimpleIndexPath)indexPathForEntryAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000264a5d
- (struct PXTileIdentifier)tileIdentifierForTileKind:(long long)arg1 entryIndexPath:(struct PXSimpleIndexPath)arg2;	// IMP=0x0000000000264a26
- (struct PXSimpleIndexPath)indexPathForTileIdentifier:(struct PXTileIdentifier)arg1;	// IMP=0x0000000000264a0e
- (long long)tileKindForTileIdentifier:(struct PXTileIdentifier)arg1;	// IMP=0x0000000000264a04
- (_Bool)getGeometry:(out struct PXTileGeometry *)arg1 group:(out unsigned long long *)arg2 userData:(out id *)arg3 forTileWithIdentifier:(struct PXTileIdentifier)arg4;	// IMP=0x000000000026403f
- (void)enumerateTilesInRect:(struct CGRect)arg1 withOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000263e5e
- (struct CGRect)contentBounds;	// IMP=0x0000000000263e3e
- (void)prepareLayout;	// IMP=0x0000000000263b0f
- (void)setReferenceSize:(struct CGSize)arg1;	// IMP=0x00000000002636c7
- (id)init;	// IMP=0x00000000002633db

@end
