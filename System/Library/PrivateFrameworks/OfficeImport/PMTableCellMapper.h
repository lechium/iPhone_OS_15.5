//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CMStyle, OADTableCell;

__attribute__((visibility("hidden")))
@interface PMTableCellMapper
{
    OADTableCell *mCell;	// 40 = 0x28
    CMStyle *mStyle;	// 48 = 0x30
    int mColIndex;	// 56 = 0x38
    unsigned long long mRowIndex;	// 64 = 0x40
    float mWidth;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000474fa7
- (float)widthWithState:(id)arg1;	// IMP=0x00000000001ffec9
- (void)mapAt:(id)arg1 withState:(id)arg2;	// IMP=0x00000000001fefad
- (id)initWithOadTableCell:(id)arg1 rowIndex:(unsigned long long)arg2 columnIndex:(int)arg3 parent:(id)arg4;	// IMP=0x00000000001feeae
- (void)mapCellPropertiesWithState:(id)arg1 textAnchor:(unsigned char)arg2;	// IMP=0x00000000002000bc
- (void)mapBordersWithState:(id)arg1;	// IMP=0x00000000001ff421
- (id)rowMapper;	// IMP=0x00000000001ffc27
- (id)tableMapper;	// IMP=0x00000000001ffb6e

@end

