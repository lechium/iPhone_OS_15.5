//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EDCollection, EDColumnInfoCollection, EDMergedCellCollection, EDPane, EDReference, EDRowBlocks, EDWarnings, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface EDWorksheet
{
    EDRowBlocks *mRowBlocks;	// 112 = 0x70
    EDColumnInfoCollection *mColumnInfos;	// 120 = 0x78
    EDCollection *mConditionalFormattings;	// 128 = 0x80
    EDCollection *mHyperlinks;	// 136 = 0x88
    EDCollection *mTables;	// 144 = 0x90
    EDCollection *mPivotTables;	// 152 = 0x98
    EDMergedCellCollection *mMergedCells;	// 160 = 0xa0
    EDPane *mPane;	// 168 = 0xa8
    EDWarnings *mWorksheetWarnings;	// 176 = 0xb0
    double mDefaultColumnWidth;	// 184 = 0xb8
    unsigned short mDefaultRowHeight;	// 192 = 0xc0
    unsigned long long mMaxRowOutlineLevel;	// 200 = 0xc8
    unsigned long long mMaxColumnOutlineLevel;	// 208 = 0xd0
    _Bool mFitToPage;	// 216 = 0xd8
    EDReference *mMaxCellReferencedInFormulas;	// 224 = 0xe0
    NSMutableDictionary *mMergedRows;	// 232 = 0xe8
    NSMutableDictionary *mMergedCols;	// 240 = 0xf0
    EDReference *mImplicitCellArea;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x00000000003b2254
- (id)description;	// IMP=0x00000000003b2216
- (_Bool)hasMergedCells;	// IMP=0x00000000003b21e9
- (id)worksheetWarnings;	// IMP=0x0000000000191b35
- (void)setPane:(id)arg1;	// IMP=0x000000000014e177
- (id)pane;	// IMP=0x00000000003b21d4
- (id)mergedCells;	// IMP=0x000000000012fd52
- (id)pivotTables;	// IMP=0x00000000001c3e7a
- (id)tables;	// IMP=0x00000000001c26ab
- (id)hyperlinks;	// IMP=0x00000000001d268e
- (id)conditionalFormattings;	// IMP=0x000000000014ee58
- (id)columnInfos;	// IMP=0x0000000000125514
- (id)rowBlocks;	// IMP=0x0000000000126064
- (void)setFitToPage:(_Bool)arg1;	// IMP=0x0000000000124594
- (_Bool)fitToPage;	// IMP=0x00000000003b21c4
- (void)setDefaultRowHeight:(unsigned short)arg1;	// IMP=0x0000000000124583
- (unsigned short)defaultRowHeight;	// IMP=0x0000000000130336
- (void)setDefaultColumnWidth:(double)arg1;	// IMP=0x0000000000124571
- (double)defaultColumnWidth;	// IMP=0x0000000000130347
- (void)reduceMemoryIfPossible;	// IMP=0x00000000003b2340
- (id)mergedColRef:(unsigned int)arg1;	// IMP=0x00000000003b2718
- (_Bool)isColMerged:(unsigned int)arg1;	// IMP=0x00000000003b268c
- (_Bool)hasMergedCol;	// IMP=0x00000000003b2668
- (id)mergedRowRef:(unsigned int)arg1;	// IMP=0x00000000003b25e6
- (_Bool)isRowMerged:(unsigned int)arg1;	// IMP=0x00000000003b255a
- (_Bool)hasMergedRow;	// IMP=0x00000000003b2536
- (void)setMergedColsRef:(id)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3;	// IMP=0x00000000003b2466
- (void)setMergedRowsRef:(id)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3;	// IMP=0x00000000003b2396
- (void)updateMaxColumnOutlineLevelIfNeeded:(unsigned long long)arg1;	// IMP=0x00000000001e22c4
- (void)setMaxColumnOutlineLevel:(unsigned long long)arg1;	// IMP=0x00000000001245b5
- (unsigned long long)maxColumnOutlineLevel;	// IMP=0x00000000003b2385
- (void)updateMaxRowOutlineLevelIfNeeded:(unsigned long long)arg1;	// IMP=0x00000000003b236e
- (void)setMaxRowOutlineLevel:(unsigned long long)arg1;	// IMP=0x00000000001245a4
- (unsigned long long)maxRowOutlineLevel;	// IMP=0x00000000003b235d
- (void)teardown;	// IMP=0x0000000000136fa0
- (void)setup;	// IMP=0x000000000011f9bd
- (id)maxCellReferencedInFormulas;	// IMP=0x000000000014cea4
- (void)setImplicitCellArea:(id)arg1;	// IMP=0x00000000003b27af
- (id)implicitCellArea;	// IMP=0x00000000003b279a

@end

