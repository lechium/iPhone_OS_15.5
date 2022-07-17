//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, OADTableGrid;

__attribute__((visibility("hidden")))
@interface OADTable
{
    OADTableGrid *mGrid;	// 40 = 0x28
    NSMutableArray *mRows;	// 48 = 0x30
}

+ (void)applyTextStyle:(id)arg1 toParagraphProperties:(id)arg2;	// IMP=0x000000000032bce2
- (void).cxx_destruct;	// IMP=0x00000000003276c3
- (id)description;	// IMP=0x0000000000327685
- (void)setParentTextListStyle:(id)arg1;	// IMP=0x00000000001fddd6
- (id)addRow;	// IMP=0x00000000001fd076
- (id)rowAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001fdf89
- (unsigned long long)rowCount;	// IMP=0x00000000001fdf6c
- (id)grid;	// IMP=0x00000000001fcea7
- (id)tableProperties;	// IMP=0x00000000001fc9b7
- (id)init;	// IMP=0x0000000000161b51
- (void)flipTableRTL;	// IMP=0x0000000000309630
- (id)masterCellOfPos:(struct OADTMatrixPos)arg1;	// IMP=0x0000000000327898
- (struct OADTMatrixPos)masterPosOfPos:(struct OADTMatrixPos)arg1;	// IMP=0x000000000032776e
- (id)cellAtPos:(struct OADTMatrixPos)arg1;	// IMP=0x00000000003276f4
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1;	// IMP=0x000000000032bfb1
- (void)flattenStyle;	// IMP=0x000000000032bc84

@end
