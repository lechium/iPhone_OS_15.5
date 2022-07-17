//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXCollectionTileLayoutTemplate, PXIndexPathSet, PXMemoriesFeedDataSource, PXMemoriesSpec, PXSectionedLayoutSnapshot;
@protocol PXMemoriesFeedTilingLayoutDelegate;

@interface PXMemoriesFeedTilingLayout
{
    struct {
        _Bool contentsRectForItemAtIndexPathForAspectRatio;
        _Bool titleFontNameForItemAtIndexPath;
    } _delegateRespondsTo;	// 8 = 0x8
    PXMemoriesSpec *_spec;	// 16 = 0x10
    PXIndexPathSet *_selectedMemoryIndexPaths;	// 24 = 0x18
    id <PXMemoriesFeedTilingLayoutDelegate> _delegate;	// 32 = 0x20
    PXSectionedLayoutSnapshot *_layoutSnapshot;	// 40 = 0x28
    PXCollectionTileLayoutTemplate *__tileLayoutTemplate;	// 48 = 0x30
    struct PXSimpleIndexPath _highlightedMemoryIndexPath;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000231b93
@property(readonly, nonatomic) PXCollectionTileLayoutTemplate *_tileLayoutTemplate; // @synthesize _tileLayoutTemplate=__tileLayoutTemplate;
@property(readonly, nonatomic) PXSectionedLayoutSnapshot *layoutSnapshot; // @synthesize layoutSnapshot=_layoutSnapshot;
@property(nonatomic) __weak id <PXMemoriesFeedTilingLayoutDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PXIndexPathSet *selectedMemoryIndexPaths; // @synthesize selectedMemoryIndexPaths=_selectedMemoryIndexPaths;
@property(nonatomic) struct PXSimpleIndexPath highlightedMemoryIndexPath; // @synthesize highlightedMemoryIndexPath=_highlightedMemoryIndexPath;
@property(retain, nonatomic) PXMemoriesSpec *spec; // @synthesize spec=_spec;
- (void)_invalidateSelectionTilesWithTag:(id)arg1;	// IMP=0x0000000000231a1f
- (struct CGRect)_contentsRectForItemAtIndexPath:(struct PXSimpleIndexPath)arg1 forAspectRatio:(double)arg2;	// IMP=0x0000000000231963
- (long long)_itemKindForTileKind:(long long)arg1;	// IMP=0x00000000002318c5
- (unsigned long long)_zPositionForTileWithIdentifier:(struct PXTileIdentifier)arg1;	// IMP=0x00000000002317aa
- (id)_titleFontNameForMemoryAtIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x000000000023171c
- (id)_viewSpecForTileWithIdentifier:(struct PXTileIdentifier)arg1 boundingSize:(struct CGSize)arg2;	// IMP=0x00000000002313c9
- (void)_addTileWithKind:(long long)arg1 entryIndex:(unsigned long long)arg2 memoryIndex:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000231172
- (void)_enumerateTilesInLayoutItem:(id)arg1 withOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000023116c
- (void)setLayoutSnapshot:(id)arg1;	// IMP=0x000000000023110b
- (struct PXTileIdentifier)tileIdentifierAtIndexPath:(struct PXSimpleIndexPath)arg1 withTileKind:(long long)arg2;	// IMP=0x0000000000230e81
- (long long)tileKindForTileIdentifier:(struct PXTileIdentifier)arg1;	// IMP=0x0000000000230e77
- (long long)dataSourceIdentifierForTileIdentifier:(struct PXTileIdentifier)arg1;	// IMP=0x0000000000230e6d
- (struct PXSimpleIndexPath)indexPathForTileIdentifier:(struct PXTileIdentifier)arg1;	// IMP=0x0000000000230d81
- (id)indexPathsForMemoriesInRect:(struct CGRect)arg1;	// IMP=0x0000000000230c3e
- (struct PXSimpleIndexPath)indexPathForMemoryAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000230b04
@property(readonly, nonatomic) PXMemoriesFeedDataSource *dataSource;
- (_Bool)getGeometry:(struct PXTileGeometry *)arg1 group:(unsigned long long *)arg2 userData:(id *)arg3 forTileWithIdentifier:(struct PXTileIdentifier)arg4;	// IMP=0x00000000002300f7
- (void)enumerateTilesInRect:(struct CGRect)arg1 withOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000023002a
- (void)prepareLayout;	// IMP=0x0000000000230024
- (void)setReferenceSize:(struct CGSize)arg1;	// IMP=0x000000000022ff9c
- (struct CGRect)contentBounds;	// IMP=0x000000000022feab
- (id)init;	// IMP=0x000000000022fe95
- (id)initWithSpec:(id)arg1 layoutSnapshot:(id)arg2;	// IMP=0x000000000022fd9a

@end
