//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSPLazyReference, TSTCustomFormatList, TSTMergeRegionMap, TSTTableHeaderStorage, TSTTileIDKeyDict;

@interface TSTTableDataStore
{
    struct TSTTableRBTreeNode_s *mColumnTileIndex;	// 8 = 0x8
    struct TSTTableRBTreeNode_s *mRowTileIndex;	// 16 = 0x10
    TSTTileIDKeyDict *mTileStorage;	// 24 = 0x18
    TSTTableHeaderStorage *mRowHeaderStorage;	// 32 = 0x20
    TSPLazyReference *mColumnHeaderStorageReference;	// 40 = 0x28
    TSPLazyReference *mConditionalStyleSetTableReference;	// 48 = 0x30
    TSPLazyReference *mStringTableReference;	// 56 = 0x38
    TSPLazyReference *mStyleTableReference;	// 64 = 0x40
    TSPLazyReference *mFormulaTableReference;	// 72 = 0x48
    TSPLazyReference *mFormulaErrorTableReference;	// 80 = 0x50
    TSPLazyReference *mRichTextPayloadTableReference;	// 88 = 0x58
    TSPLazyReference *mFormatTableReference;	// 96 = 0x60
    TSPLazyReference *mMultipleChoiceListFormatTableReference;	// 104 = 0x68
    TSPLazyReference *mCommentStorageTableReference;	// 112 = 0x70
    TSTCustomFormatList *mPasteboardCustomFormatList;	// 120 = 0x78
    unsigned short mNextRowStripID;	// 128 = 0x80
    unsigned short mNextColumnStripID;	// 130 = 0x82
    TSTMergeRegionMap *mMergedCellRanges;	// 136 = 0x88
    unsigned int mCellCount;	// 144 = 0x90
    _Bool mCellCountValid;	// 148 = 0x94
    _Bool mDrawableIsBeingCopied;	// 149 = 0x95
    unsigned int mStorageVersion;	// 152 = 0x98
}

- (void)validate;	// IMP=0x0000000000392c24
- (void)debugDump;	// IMP=0x0000000000392c05
- (void)upgradeDataStoreCellStorage;	// IMP=0x0000000000392bda
- (_Bool)needToUpgradeCellStorage;	// IMP=0x0000000000392bc6
- (void)setStorageParentToInfo:(id)arg1;	// IMP=0x0000000000392bc0
- (void)p_updateTileStorageToCurrentVersion;	// IMP=0x0000000000392b99
- (void)setDrawableIsBeingCopied:(_Bool)arg1;	// IMP=0x0000000000392b74
- (void)dealloc;	// IMP=0x0000000000392a11
- (id)initWithOwner:(id)arg1;	// IMP=0x0000000000392551

@end
