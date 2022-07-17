//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TSTWidthHeightCache : NSObject
{
    struct vector<TSTWidthHeightCache_Private::WHCCol, std::allocator<TSTWidthHeightCache_Private::WHCCol>> mFittingColumnWidth;	// 8 = 0x8
    struct vector<TSTWidthHeightCache_Private::WHCRow, std::allocator<TSTWidthHeightCache_Private::WHCRow>> mFittingRowHeight;	// 32 = 0x20
    vector_0e047154 mModelColumnWidth;	// 56 = 0x38
    vector_0e047154 mModelRowHeight;	// 80 = 0x50
    unsigned short mMaxRow;	// 104 = 0x68
    unsigned char mMaxCol;	// 106 = 0x6a
    struct _opaque_pthread_rwlock_t mLock;	// 112 = 0x70
}

- (id).cxx_construct;	// IMP=0x0000000000380bbb
- (void).cxx_destruct;	// IMP=0x0000000000380b55
- (id)description;	// IMP=0x00000000003809d5
- (void)_increaseRowCapacity:(unsigned int)arg1;	// IMP=0x000000000038091a
- (void)_increaseColCapacity:(unsigned int)arg1;	// IMP=0x00000000003808e3
- (id)validateChangeDescriptors:(id)arg1 tableModel:(id)arg2;	// IMP=0x00000000003802a1
- (void)logInternalState;	// IMP=0x000000000038015a
- (_Bool)verifyDims:(struct CGSize)arg1 forCellID:(CDStruct_0441cfb5)arg2;	// IMP=0x0000000000380152
- (void)setNumsRows:(unsigned short)arg1 andNumCols:(unsigned char)arg2;	// IMP=0x0000000000380083
- (void)resetFitHeightForCellID:(CDStruct_0441cfb5)arg1;	// IMP=0x0000000000380011
- (void)resetRowHeightForCell:(CDStruct_0441cfb5)arg1;	// IMP=0x000000000037ffc3
- (void)resetWidthsHeightsForRange:(CDStruct_5f1f7aa9)arg1;	// IMP=0x000000000037fe77
- (void)resetAllCol;	// IMP=0x000000000037fe37
- (void)resetAllRow;	// IMP=0x000000000037fd87
- (void)resetColWidthsStartingWith:(unsigned char)arg1 andEndingWith:(unsigned char)arg2;	// IMP=0x000000000037fce8
- (void)resetRowHeightsStartingWith:(unsigned short)arg1 andEndingWith:(unsigned short)arg2;	// IMP=0x000000000037fbd2
- (unsigned long long)resetAllInvalidColsInRow:(unsigned short)arg1;	// IMP=0x000000000037fb64
- (id)getListOfInvalidColsInRow:(unsigned short)arg1;	// IMP=0x000000000037fa00
- (double)getModelWidthForColumn:(unsigned char)arg1;	// IMP=0x000000000037f9a8
- (double)getModelHeightForRow:(unsigned short)arg1;	// IMP=0x000000000037f950
- (double)getFitWidthForCol:(unsigned char)arg1;	// IMP=0x000000000037f8d9
- (double)getFitHeightForRow:(unsigned short)arg1;	// IMP=0x000000000037f844
- (_Bool)moveColsFrom:(CDStruct_5f1f7aa9)arg1 toCol:(unsigned char)arg2;	// IMP=0x000000000037f3df
- (_Bool)moveRowsFrom:(CDStruct_5f1f7aa9)arg1 toRow:(unsigned short)arg2;	// IMP=0x000000000037ec35
- (_Bool)insertRows:(unsigned short)arg1 atRow:(unsigned short)arg2;	// IMP=0x000000000037e60b
- (_Bool)insertCols:(unsigned short)arg1 atColumn:(unsigned char)arg2;	// IMP=0x000000000037e05f
- (_Bool)deleteRowsStartingWith:(unsigned short)arg1 andEndingWith:(unsigned short)arg2;	// IMP=0x000000000037de34
- (_Bool)deleteColsStartingWith:(unsigned char)arg1 andEndingWith:(unsigned char)arg2;	// IMP=0x000000000037dca3
- (_Bool)resetModelCacheRange:(CDStruct_5f1f7aa9)arg1;	// IMP=0x000000000037dba5
- (unsigned long long)numModelRowHeights;	// IMP=0x000000000037db6a
- (unsigned long long)numModelColumnWidths;	// IMP=0x000000000037db2f
- (_Bool)resetModelCache;	// IMP=0x000000000037daa6
- (_Bool)setModelHeight:(double)arg1 forRow:(unsigned short)arg2;	// IMP=0x000000000037da49
- (_Bool)setModelWidth:(double)arg1 forColumn:(unsigned char)arg2;	// IMP=0x000000000037d9ec
- (_Bool)setFitHeight:(double)arg1 forCellID:(CDStruct_0441cfb5)arg2;	// IMP=0x000000000037d934
- (_Bool)setFitWidth:(double)arg1 forCellID:(CDStruct_0441cfb5)arg2;	// IMP=0x000000000037d88f
- (_Bool)setFitDims:(struct CGSize)arg1 forCellID:(CDStruct_0441cfb5)arg2;	// IMP=0x000000000037d678
- (void)dealloc;	// IMP=0x000000000037d63e
- (id)initWithNumRows:(unsigned short)arg1 andNumCols:(unsigned short)arg2;	// IMP=0x000000000037d565
- (id)init;	// IMP=0x000000000037d48e

@end
