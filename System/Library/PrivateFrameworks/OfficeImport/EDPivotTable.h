//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDCollection, EDReference, EDResources, NSString;

__attribute__((visibility("hidden")))
@interface EDPivotTable : NSObject
{
    EDResources *mResources;	// 8 = 0x8
    _Bool mShowLastColumn;	// 16 = 0x10
    _Bool mShowRowHeaders;	// 17 = 0x11
    _Bool mShowColumnHeaders;	// 18 = 0x12
    _Bool mShowRowStripes;	// 19 = 0x13
    _Bool mShowColumnStripes;	// 20 = 0x14
    _Bool mApplyNumberFormats;	// 21 = 0x15
    _Bool mApplyBorderFormats;	// 22 = 0x16
    _Bool mApplyFontFormats;	// 23 = 0x17
    _Bool mApplyPatternFormats;	// 24 = 0x18
    _Bool mApplyAlignmentFormats;	// 25 = 0x19
    _Bool mApplyWidthHeightFormats;	// 26 = 0x1a
    _Bool mUseAutoFormatting;	// 27 = 0x1b
    _Bool mColGrandTotals;	// 28 = 0x1c
    _Bool mRowGrandTotals;	// 29 = 0x1d
    _Bool mCustomListSort;	// 30 = 0x1e
    _Bool mCompactData;	// 31 = 0x1f
    _Bool mCompact;	// 32 = 0x20
    _Bool mDataCaption;	// 33 = 0x21
    _Bool mDataOnRows;	// 34 = 0x22
    _Bool mDisableFieldList;	// 35 = 0x23
    _Bool mMergeItem;	// 36 = 0x24
    _Bool mMultipleFieldFilters;	// 37 = 0x25
    _Bool mOutline;	// 38 = 0x26
    _Bool mOutlineData;	// 39 = 0x27
    _Bool mPageOverThenDown;	// 40 = 0x28
    _Bool mShowCalcMbrs;	// 41 = 0x29
    _Bool mShowDataDropDown;	// 42 = 0x2a
    _Bool mShowDropZones;	// 43 = 0x2b
    _Bool mShowEmptyCol;	// 44 = 0x2c
    _Bool mShowEmptyRow;	// 45 = 0x2d
    _Bool mShowHeaders;	// 46 = 0x2e
    _Bool mShowMemberPropertyTips;	// 47 = 0x2f
    _Bool mShowMissing;	// 48 = 0x30
    _Bool mShowMultipleLabel;	// 49 = 0x31
    _Bool mSubtotalHiddenItems;	// 50 = 0x32
    NSString *mName;	// 56 = 0x38
    NSString *mStyleName;	// 64 = 0x40
    NSString *mColumnHeaderCaption;	// 72 = 0x48
    NSString *mRowHeaderCaption;	// 80 = 0x50
    NSString *mPageStyleName;	// 88 = 0x58
    EDReference *mPivotTableRange;	// 96 = 0x60
    unsigned long long mStyleIndex;	// 104 = 0x68
    long long mFirstHeaderRow;	// 112 = 0x70
    long long mFirstDataRow;	// 120 = 0x78
    long long mFirstDataColumn;	// 128 = 0x80
    unsigned long long mRowPageCount;	// 136 = 0x88
    unsigned long long mColumnPageCount;	// 144 = 0x90
    unsigned long long mPageWrap;	// 152 = 0x98
    unsigned long long mAutoFormatId;	// 160 = 0xa0
    unsigned long long mDataPosition;	// 168 = 0xa8
    EDCollection *mRowFields;	// 176 = 0xb0
    EDCollection *mColumnFields;	// 184 = 0xb8
    EDCollection *mRowItems;	// 192 = 0xc0
    EDCollection *mColumnItems;	// 200 = 0xc8
    EDCollection *mPivotFields;	// 208 = 0xd0
    EDCollection *mDataFields;	// 216 = 0xd8
    EDCollection *mConditionalFields;	// 224 = 0xe0
    EDCollection *mPivotAreas;	// 232 = 0xe8
    EDCollection *mPageFields;	// 240 = 0xf0
}

+ (id)pivotTableWithResources:(id)arg1;	// IMP=0x00000000002388b9
- (void).cxx_destruct;	// IMP=0x00000000003aca0b
- (id)description;	// IMP=0x00000000003ac9cd
- (id)pageFields;	// IMP=0x0000000000239553
- (id)pivotAreas;	// IMP=0x00000000002397c0
- (id)conditionalFormats;	// IMP=0x00000000002397af
- (id)dataFields;	// IMP=0x0000000000239564
- (id)pivotFields;	// IMP=0x0000000000238fd4
- (id)columnItems;	// IMP=0x0000000000239542
- (id)rowItems;	// IMP=0x000000000023946d
- (id)columnFields;	// IMP=0x0000000000239531
- (id)rowFields;	// IMP=0x000000000023945c
- (void)setSubtotalHiddenItems:(_Bool)arg1;	// IMP=0x00000000003ac9c4
- (_Bool)subtotalHiddenItems;	// IMP=0x00000000003ac9bb
- (void)setShowMultipleLabel:(_Bool)arg1;	// IMP=0x00000000003ac9b2
- (_Bool)showMultipleLabel;	// IMP=0x00000000003ac9a9
- (void)setShowMissing:(_Bool)arg1;	// IMP=0x00000000003ac9a0
- (_Bool)showMissing;	// IMP=0x00000000003ac997
- (void)setShowMemberPropertyTips:(_Bool)arg1;	// IMP=0x00000000003ac98e
- (_Bool)showMemberPropertyTips;	// IMP=0x00000000003ac985
- (void)setShowHeaders:(_Bool)arg1;	// IMP=0x00000000003ac97c
- (_Bool)showHeaders;	// IMP=0x00000000003ac973
- (void)setShowEmptyRow:(_Bool)arg1;	// IMP=0x00000000003ac96a
- (_Bool)showEmptyRow;	// IMP=0x00000000003ac961
- (void)setShowEmptyCol:(_Bool)arg1;	// IMP=0x00000000003ac958
- (_Bool)showEmptyCol;	// IMP=0x00000000003ac94f
- (void)setShowDropZones:(_Bool)arg1;	// IMP=0x00000000003ac946
- (_Bool)showDropZones;	// IMP=0x00000000003ac93d
- (void)setShowDataDropDown:(_Bool)arg1;	// IMP=0x00000000003ac934
- (_Bool)showDataDropDown;	// IMP=0x00000000003ac92b
- (void)setShowCalcMbrs:(_Bool)arg1;	// IMP=0x000000000023987f
- (_Bool)showCalcMbrs;	// IMP=0x00000000003ac922
- (void)setPageOverThenDown:(_Bool)arg1;	// IMP=0x00000000003ac919
- (_Bool)pageOverThenDown;	// IMP=0x00000000003ac910
- (void)setOutlineData:(_Bool)arg1;	// IMP=0x0000000000239876
- (_Bool)outlineData;	// IMP=0x00000000003ac907
- (void)setOutline:(_Bool)arg1;	// IMP=0x000000000023986d
- (_Bool)outline;	// IMP=0x00000000003ac8fe
- (void)setMultipleFieldFilters:(_Bool)arg1;	// IMP=0x0000000000239864
- (_Bool)multipleFieldFilters;	// IMP=0x00000000003ac8f5
- (void)setMergeItem:(_Bool)arg1;	// IMP=0x00000000003ac8ec
- (_Bool)mergeItem;	// IMP=0x00000000003ac8e3
- (void)setDisableFieldList:(_Bool)arg1;	// IMP=0x00000000003ac8da
- (_Bool)disableFieldList;	// IMP=0x00000000003ac8d1
- (void)setDataOnRows:(_Bool)arg1;	// IMP=0x00000000003ac8c8
- (_Bool)dataOnRows;	// IMP=0x00000000003ac8bf
- (void)setDataCaption:(_Bool)arg1;	// IMP=0x000000000023985b
- (_Bool)dataCaption;	// IMP=0x00000000003ac8b6
- (void)setCompact:(_Bool)arg1;	// IMP=0x00000000003ac8ad
- (_Bool)compact;	// IMP=0x000000000023a463
- (void)setCompactData:(_Bool)arg1;	// IMP=0x00000000003ac8a4
- (_Bool)compactData;	// IMP=0x00000000003ac89b
- (void)setCustomListSort:(_Bool)arg1;	// IMP=0x00000000003ac892
- (_Bool)customListSort;	// IMP=0x00000000003ac889
- (void)setRowGrandTotals:(_Bool)arg1;	// IMP=0x00000000003ac880
- (_Bool)rowGrandTotals;	// IMP=0x00000000003ac877
- (void)setUseAutoFormatting:(_Bool)arg1;	// IMP=0x0000000000239852
- (_Bool)useAutoFormatting;	// IMP=0x00000000003ac86e
- (void)setColGrandTotals:(_Bool)arg1;	// IMP=0x00000000003ac865
- (_Bool)colGrandTotals;	// IMP=0x00000000003ac85c
- (void)setApplyWidthHeightFormats:(_Bool)arg1;	// IMP=0x0000000000239849
- (_Bool)applyWidthHeightFormats;	// IMP=0x00000000003ac853
- (void)setApplyAlignmentFormats:(_Bool)arg1;	// IMP=0x0000000000239840
- (_Bool)applyAlignmentFormats;	// IMP=0x00000000003ac84a
- (void)setApplyPatternFormats:(_Bool)arg1;	// IMP=0x0000000000239837
- (_Bool)applyPatternFormats;	// IMP=0x00000000003ac841
- (void)setApplyFontFormats:(_Bool)arg1;	// IMP=0x000000000023982e
- (_Bool)applyFontFormats;	// IMP=0x00000000003ac838
- (void)setApplyBorderFormats:(_Bool)arg1;	// IMP=0x0000000000239825
- (_Bool)applyBorderFormats;	// IMP=0x00000000003ac82f
- (void)setApplyNumberFormats:(_Bool)arg1;	// IMP=0x000000000023981c
- (_Bool)applyNumberFormats;	// IMP=0x00000000003ac826
- (void)setShowColumnHeaders:(_Bool)arg1;	// IMP=0x0000000000238fcb
- (_Bool)showColumnHeaders;	// IMP=0x0000000000239c49
- (void)setShowRowHeaders:(_Bool)arg1;	// IMP=0x0000000000238fc2
- (_Bool)showRowHeaders;	// IMP=0x0000000000239c52
- (void)setShowColumnStripes:(_Bool)arg1;	// IMP=0x0000000000238fb9
- (_Bool)showColumnStripes;	// IMP=0x0000000000239c5b
- (void)setShowRowStripes:(_Bool)arg1;	// IMP=0x0000000000238fb0
- (_Bool)showRowStripes;	// IMP=0x000000000023a448
- (void)setShowLastColumn:(_Bool)arg1;	// IMP=0x0000000000238fa7
- (_Bool)showLastColumn;	// IMP=0x00000000003ac81d
- (void)setDataPosition:(unsigned long long)arg1;	// IMP=0x00000000003ac810
- (unsigned long long)dataPosition;	// IMP=0x00000000003ac803
- (void)setAutoFormatId:(unsigned long long)arg1;	// IMP=0x00000000003ac7f6
- (unsigned long long)autoFormatId;	// IMP=0x00000000003ac7e9
- (void)setPageWrap:(unsigned long long)arg1;	// IMP=0x00000000003ac7dc
- (unsigned long long)pageWrap;	// IMP=0x00000000003ac7cf
- (void)setFirstDataColumn:(long long)arg1;	// IMP=0x0000000000238d97
- (long long)firstDataColumn;	// IMP=0x0000000000239c3c
- (void)setFirstDataRow:(long long)arg1;	// IMP=0x0000000000238d8d
- (long long)firstDataRow;	// IMP=0x0000000000239c32
- (void)setFirstHeaderRow:(long long)arg1;	// IMP=0x0000000000238d83
- (long long)firstHeaderRow;	// IMP=0x0000000000239c28
- (void)setColumnPageCount:(unsigned long long)arg1;	// IMP=0x00000000003ac7c2
- (unsigned long long)columnPageCount;	// IMP=0x00000000003ac7b5
- (void)setRowPageCount:(unsigned long long)arg1;	// IMP=0x00000000003ac7a8
- (unsigned long long)rowPageCount;	// IMP=0x00000000003ac79b
- (void)setPivotTableRange:(id)arg1;	// IMP=0x0000000000238d38
- (id)pivotTableRange;	// IMP=0x0000000000239c1a
- (void)setName:(id)arg1;	// IMP=0x00000000002397d1
- (id)name;	// IMP=0x00000000003ac78d
- (void)setStyleName:(id)arg1;	// IMP=0x0000000000238f5c
- (id)styleName;	// IMP=0x00000000003ac77f
- (void)setPageStyleName:(id)arg1;	// IMP=0x00000000003ac734
- (id)pageStyleName;	// IMP=0x00000000003ac726
- (void)setRowHeaderCaption:(id)arg1;	// IMP=0x00000000003ac6db
- (id)rowHeaderCaption;	// IMP=0x00000000003ac6cd
- (void)setColumnHeaderCaption:(id)arg1;	// IMP=0x00000000003ac682
- (id)columnHeaderCaption;	// IMP=0x00000000003ac674
- (void)setStyle:(id)arg1;	// IMP=0x00000000003ac5d1
- (id)style;	// IMP=0x00000000002398ad
- (id)initWithResources:(id)arg1;	// IMP=0x000000000023891e
- (void)setStyleIndex:(unsigned long long)arg1;	// IMP=0x00000000003acaf0
- (unsigned long long)styleIndex;	// IMP=0x00000000003acae6

@end
