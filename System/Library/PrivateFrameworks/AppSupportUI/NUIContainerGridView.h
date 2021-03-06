//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppSupportUI/_NUIGridArrangementContainer-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface NUIContainerGridView <_NUIGridArrangementContainer>
{
    NSMutableArray *_viewRows;	// 16 = 0x10
    struct _NUIGridArrangement _arrangement;	// 24 = 0x18
    CDStruct_0d6b4eb6 _visibleCount;	// 136 = 0x88
    struct map<UIView *, const std::pair<_NSRange, _NSRange>, std::less<UIView *>, std::allocator<std::pair<UIView *const, const std::pair<_NSRange, _NSRange>>>> _viewRanges;	// 144 = 0x90
    struct CGSize _spacing;	// 168 = 0xa8
    NSMutableArray *_rows;	// 184 = 0xb8
    NSMutableArray *_columns;	// 192 = 0xc0
    struct {
        unsigned int horzAlign:8;
        unsigned int vertAlign:8;
        unsigned int inInsertOrRemove:1;
        unsigned int hasMutations:1;
    } _gridViewFlags;	// 200 = 0xc8
    double _rowHeight;	// 208 = 0xd0
    double _columnWidth;	// 216 = 0xd8
}

+ (id)containerGridViewWithArrangedSubviewRows:(id)arg1;	// IMP=0x00000000000125b2
- (id).cxx_construct;	// IMP=0x0000000000018da5
- (void).cxx_destruct;	// IMP=0x0000000000018d27
@property(nonatomic) double columnWidth; // @synthesize columnWidth=_columnWidth;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
- (void)populateGridArrangementDimension:(void *)arg1 withCells:(const void *)arg2 axis:(long long)arg3;	// IMP=0x0000000000018241
- (void)populateGridArrangementCells:(void *)arg1;	// IMP=0x000000000001781e
- (void)didRemoveArrangedSubview:(id)arg1 atIndex:(long long)arg2;	// IMP=0x0000000000017309
- (void)didInsertArrangedSubview:(id)arg1 atIndex:(long long)arg2;	// IMP=0x0000000000017240
- (_Bool)setNeedsInvalidation:(long long)arg1;	// IMP=0x00000000000171c0
- (id)debugDictionary;	// IMP=0x00000000000170ea
- (id)debugDictionaryForVisibleArrangedSubview:(id)arg1;	// IMP=0x0000000000016c5a
- (id)arrangedDebugDescription;	// IMP=0x000000000001687e
- (void)layoutArrangedSubviewsInBounds:(struct CGRect)arg1;	// IMP=0x0000000000016830
- (struct CGSize)calculateArrangedSizeFittingSize:(struct CGSize)arg1;	// IMP=0x0000000000016824
- (id)viewForLastBaselineLayoutInRowAtIndex:(long long)arg1;	// IMP=0x000000000001672d
- (id)viewForFirstBaselineLayoutInRowAtIndex:(long long)arg1;	// IMP=0x00000000000166cc
- (id)calculateViewForLastBaselineLayout;	// IMP=0x0000000000016653
- (id)calculateViewForFirstBaselineLayout;	// IMP=0x00000000000165c0
@property(nonatomic) double columnSpacing;
@property(nonatomic) double rowSpacing;
@property(nonatomic) long long verticalDistribution;
@property(nonatomic) long long horizontalDistribution;
@property(nonatomic) long long verticalAlignment;
@property(nonatomic) long long horizontalAlignment;
- (void)replaceArrangedSubviewAtIndex:(unsigned long long)arg1 withView:(id)arg2;	// IMP=0x0000000000015f24
- (void)replaceArrangedSubview:(id)arg1 inColumnAtIndex:(long long)arg2 rowAtIndex:(long long)arg3;	// IMP=0x0000000000015c8f
- (void)removeColumnAtIndex:(long long)arg1;	// IMP=0x0000000000015917
- (void)moveColumnAtIndex:(long long)arg1 toIndex:(long long)arg2;	// IMP=0x0000000000015544
- (id)insertColumnAtIndex:(long long)arg1 withArrangedSubviews:(id)arg2;	// IMP=0x0000000000014ef5
- (id)addColumnWithArrangedSubviews:(id)arg1;	// IMP=0x0000000000014eb5
- (id)columnAtIndex:(long long)arg1;	// IMP=0x0000000000014dc9
- (void)removeRowAtIndex:(long long)arg1;	// IMP=0x0000000000014b07
- (void)moveRowAtIndex:(long long)arg1 toIndex:(long long)arg2;	// IMP=0x000000000001487f
- (id)insertRowAtIndex:(long long)arg1 withArrangedSubviews:(id)arg2;	// IMP=0x00000000000143fc
- (id)addRowWithArrangedSubviews:(id)arg1;	// IMP=0x00000000000143bc
- (id)rowAtIndex:(long long)arg1;	// IMP=0x00000000000142d0
- (long long)columnIndexForArrangedSubview:(id)arg1;	// IMP=0x00000000000142a2
- (long long)rowIndexForArrangedSubview:(id)arg1;	// IMP=0x0000000000014274
- (void)getColumnRange:(struct _NSRange *)arg1 rowRange:(struct _NSRange *)arg2 forArrangedSubview:(id)arg3;	// IMP=0x0000000000013f14
- (id)arrangedSubviewInColumnAtIndex:(long long)arg1 rowAtIndex:(long long)arg2;	// IMP=0x0000000000013d69
@property(readonly, nonatomic) long long numberOfColumns;
@property(readonly, nonatomic) long long numberOfRows;
@property(copy, nonatomic) NSArray *arrangedSubviewRows;
- (void)ensureArrangedSubviewsAreValid;	// IMP=0x0000000000012f1e
- (void)dealloc;	// IMP=0x0000000000012bf5
- (id)initWithArrangedSubviewRows:(id)arg1;	// IMP=0x0000000000012a47
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000012946
- (id)initWithArrangedSubviews:(id)arg1;	// IMP=0x0000000000012854
- (void)setBaselineRelativeArrangement:(_Bool)arg1;	// IMP=0x0000000000012810
- (_Bool)needsBaselineDebugBoundingBoxesForArrangedSubview:(id)arg1;	// IMP=0x00000000000126c7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

