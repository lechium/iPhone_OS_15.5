//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/NSCopying-Protocol.h>
#import <TSReading/TSDTextSelection-Protocol.h>

@class NSString, TSTCellRegion;

@interface TSTTableSelection <NSCopying, TSDTextSelection>
{
    int mSelectionType;	// 8 = 0x8
    CDStruct_0441cfb5 mAnchorCellID;	// 12 = 0xc
    TSTCellRegion *mCellRegion;	// 16 = 0x10
    TSTCellRegion *mBaseRegion;	// 24 = 0x18
    CDStruct_0441cfb5 mCursorCellID;	// 32 = 0x20
    struct _NSRange mSearchReferenceRange;	// 40 = 0x28
}

@property(nonatomic) struct _NSRange searchReferenceRange; // @synthesize searchReferenceRange=mSearchReferenceRange;
@property(readonly, nonatomic) CDStruct_0441cfb5 cursorCellID; // @synthesize cursorCellID=mCursorCellID;
@property(readonly, nonatomic) TSTCellRegion *baseRegion; // @synthesize baseRegion=mBaseRegion;
@property(readonly, nonatomic) CDStruct_0441cfb5 anchorCellID; // @synthesize anchorCellID=mAnchorCellID;
@property(readonly, nonatomic) int selectionType; // @synthesize selectionType=mSelectionType;
@property(readonly, nonatomic) TSTCellRegion *cellRegion; // @synthesize cellRegion=mCellRegion;
@property(readonly, nonatomic) _Bool isAtEndOfLine;
@property(readonly, nonatomic) struct _NSRange range;
- (_Bool)intersectsPartialMergeRangeInTable:(id)arg1;	// IMP=0x0000000000360f3c
@property(readonly, copy) NSString *description;
- (_Bool)containsCell:(CDStruct_0441cfb5)arg1;	// IMP=0x0000000000360d77
- (_Bool)containsSelection:(id)arg1;	// IMP=0x0000000000360d03
- (_Bool)areCellsInTheSameRegionInTable:(id)arg1;	// IMP=0x0000000000360c54
- (_Bool)isEqualToSelection:(id)arg1;	// IMP=0x0000000000360b47
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000360b00
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000360a40
- (void)remove:(int)arg1 atIndex:(unsigned short)arg2 count:(unsigned short)arg3;	// IMP=0x0000000000360871
- (void)insert:(int)arg1 atIndex:(unsigned short)arg2 count:(unsigned short)arg3;	// IMP=0x0000000000360718
- (void)enumerateSelectedCellsInTable:(id)arg1 withFlags:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000036066f
- (void)enumerateSelectedCellsInTable:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000360658
- (id)selectionByMovingInTableInfo:(id)arg1 inDirection:(int)arg2 withModifierKeys:(int)arg3 forReferenceMove:(_Bool)arg4 suppressWrap:(_Bool)arg5;	// IMP=0x000000000035f614
- (id)selectionByMovingInTableInfo:(id)arg1 inDirection:(int)arg2 withModifierKeys:(int)arg3 forReferenceMove:(_Bool)arg4;	// IMP=0x000000000035f5f2
- (id)selectionByRemovingCellRange:(CDStruct_5f1f7aa9)arg1 inTable:(id)arg2 withAnchor:(CDStruct_0441cfb5)arg3 cursor:(CDStruct_0441cfb5)arg4 selectionType:(int)arg5;	// IMP=0x000000000035f4a5
- (id)selectionByAddingCellRange:(CDStruct_5f1f7aa9)arg1 inTable:(id)arg2 withAnchor:(CDStruct_0441cfb5)arg3 cursor:(CDStruct_0441cfb5)arg4 selectionType:(int)arg5;	// IMP=0x000000000035f358
- (id)selectionByExtendingWithCellRange:(CDStruct_5f1f7aa9)arg1 inTable:(id)arg2 selectionType:(int)arg3 cursorCell:(CDStruct_0441cfb5)arg4;	// IMP=0x000000000035f1d1
- (void)dealloc;	// IMP=0x000000000035ef4a
- (id)initWithTableModel:(id)arg1 cellRegion:(id)arg2;	// IMP=0x000000000035eecc
- (id)initWithTableModel:(id)arg1 andPreviousSelection:(id)arg2 offsetBy:(CDStruct_79c71658)arg3;	// IMP=0x000000000035ed81
- (id)initWithTableModel:(id)arg1 rowOrColumn:(int)arg2 index:(unsigned int)arg3 count:(unsigned int)arg4;	// IMP=0x000000000035ecbb
- (id)initWithTableModel:(id)arg1 startingColumnIndex:(unsigned short)arg2 numberOfColumns:(unsigned short)arg3;	// IMP=0x000000000035ebde
- (id)initWithTableModel:(id)arg1 startingRowIndex:(unsigned short)arg2 numberOfRows:(unsigned short)arg3;	// IMP=0x000000000035eb20
- (id)initWithTableModel:(id)arg1 andCellID:(CDStruct_0441cfb5)arg2;	// IMP=0x000000000035eaec
- (id)initWithTableModel:(id)arg1 cellID:(CDStruct_0441cfb5)arg2 selectionType:(int)arg3;	// IMP=0x000000000035eabb
- (id)initWithTableModel:(id)arg1 andCellRange:(CDStruct_5f1f7aa9)arg2;	// IMP=0x000000000035ea97
- (id)initWithTableModel:(id)arg1 selectionType:(int)arg2;	// IMP=0x000000000035e926
- (id)initWithTableModel:(id)arg1 cellRange:(CDStruct_5f1f7aa9)arg2 type:(int)arg3 anchorCellID:(CDStruct_0441cfb5)arg4 cursorCellID:(CDStruct_0441cfb5)arg5;	// IMP=0x000000000035e88a
- (id)initWithTableModel:(id)arg1 cellRegion:(id)arg2 anchorCellID:(CDStruct_0441cfb5)arg3 cursorCellID:(CDStruct_0441cfb5)arg4;	// IMP=0x000000000035e822
- (id)initWithTableModel:(id)arg1 cellRegion:(id)arg2 anchorCellID:(CDStruct_0441cfb5)arg3 cursorCellID:(CDStruct_0441cfb5)arg4 selectionType:(int)arg5;	// IMP=0x000000000035e7bc
- (id)initWithTableModel:(id)arg1 cellRegion:(id)arg2 anchorCellID:(CDStruct_0441cfb5)arg3 cursorCellID:(CDStruct_0441cfb5)arg4 baseRegion:(id)arg5;	// IMP=0x000000000035e7a0
- (id)initWithTableModel:(id)arg1 cellRegion:(id)arg2 anchorCellID:(CDStruct_0441cfb5)arg3 cursorCellID:(CDStruct_0441cfb5)arg4 baseRegion:(id)arg5 selectionType:(int)arg6;	// IMP=0x000000000035e668

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

