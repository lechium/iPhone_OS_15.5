//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSReading/NSCopying-Protocol.h>

@class NSIndexSet;

@interface TSTCellRegion : NSObject <NSCopying>
{
    unsigned long long mCellRangesCount;	// 8 = 0x8
    CDStruct_5f1f7aa9 *mCellRanges;	// 16 = 0x10
    CDStruct_5f1f7aa9 mBoundingCellRange;	// 24 = 0x18
    unsigned long long mCellCount;	// 32 = 0x20
    NSIndexSet *mIntersectingColumnsIndexSet;	// 40 = 0x28
    NSIndexSet *mIntersectingRowsIndexSet;	// 48 = 0x30
    CDStruct_0441cfb5 mUpperLeftCellID;	// 56 = 0x38
    CDStruct_0441cfb5 mBottomRightCellID;	// 60 = 0x3c
}

+ (id)regionFromColumnIndices:(id)arg1;	// IMP=0x00000000003641ce
+ (id)regionFromRowIndices:(id)arg1;	// IMP=0x000000000036411e
+ (id)regionFillingRowsFromRegion:(id)arg1;	// IMP=0x0000000000363f98
+ (id)regionFillingColumnsFromRegion:(id)arg1;	// IMP=0x0000000000363dfc
+ (id)invalidRegion;	// IMP=0x0000000000363dc5
+ (id)region:(id)arg1 subtractingRegion:(id)arg2;	// IMP=0x0000000000363c94
+ (id)region:(id)arg1 addingRegion:(id)arg2;	// IMP=0x0000000000363b63
+ (id)unionEveryRangeInRegion:(id)arg1 withRange:(CDStruct_5f1f7aa9)arg2;	// IMP=0x0000000000363802
+ (id)region:(id)arg1 intersectingRange:(CDStruct_5f1f7aa9)arg2;	// IMP=0x00000000003635dc
+ (id)region:(id)arg1 subtractingRange:(CDStruct_5f1f7aa9)arg2;	// IMP=0x0000000000363052
+ (id)region:(id)arg1 addingRange:(CDStruct_5f1f7aa9)arg2;	// IMP=0x0000000000362338
+ (id)regionFromCellMap:(id)arg1;	// IMP=0x0000000000361a6f
+ (id)regionFromRange:(CDStruct_5f1f7aa9)arg1;	// IMP=0x00000000003619f7
- (id)description;	// IMP=0x0000000000366e5e
- (void)p_calculateUpperLeftAndBottomRightCellID;	// IMP=0x0000000000366c45
- (void)p_calculateIntersectingRows;	// IMP=0x0000000000366bac
- (void)p_calculateIntersectingColumns;	// IMP=0x0000000000366b12
- (void)p_calculateAncillaryInformation;	// IMP=0x0000000000366ad7
- (void)p_insertRangeIntoRegion:(CDStruct_5f1f7aa9)arg1;	// IMP=0x000000000036679c
- (void)enumerateColumnRangesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000366786
- (void)enumerateRowRangesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000366770
- (void)enumerateInDirection:(int)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000366705
- (void)enumerateRowsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000003666a0
- (void)enumerateColumnsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000036663a
- (void)enumerateCellRangesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000003665dd
- (void)enumerateCellIDsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000366549
- (id)topToBottomIterator;	// IMP=0x0000000000366513
- (id)rightToLeftIterator;	// IMP=0x00000000003664dd
- (id)iterator;	// IMP=0x00000000003664a7
- (CDStruct_0441cfb5)suitableCursor;	// IMP=0x0000000000366464
- (CDStruct_0441cfb5)suitableAnchor;	// IMP=0x0000000000366448
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000366379
- (_Bool)isValid;	// IMP=0x000000000036636b
- (id)intersectingRowsIndexSet;	// IMP=0x0000000000366361
- (id)intersectingColumnsIndexSet;	// IMP=0x0000000000366357
@property(readonly, nonatomic) unsigned short numberOfIntersectingRows;
@property(readonly, nonatomic) unsigned short numberOfIntersectingColumns;
- (_Bool)intersectsRow:(unsigned short)arg1;	// IMP=0x0000000000366300
- (_Bool)intersectsColumn:(unsigned char)arg1;	// IMP=0x00000000003662de
- (_Bool)partiallyIntersectsCellRange:(CDStruct_5f1f7aa9)arg1;	// IMP=0x0000000000365e46
- (_Bool)intersectsCellRange:(CDStruct_5f1f7aa9)arg1;	// IMP=0x0000000000365c02
- (_Bool)equalsCellRange:(CDStruct_5f1f7aa9)arg1;	// IMP=0x0000000000365bc3
- (_Bool)equalsCellRegion:(id)arg1;	// IMP=0x0000000000365b2e
- (_Bool)containsCellRegion:(id)arg1;	// IMP=0x0000000000365a1f
- (_Bool)containsCellRange:(CDStruct_5f1f7aa9)arg1;	// IMP=0x00000000003658b1
- (_Bool)containsCellID:(CDStruct_0441cfb5)arg1;	// IMP=0x0000000000365828
@property(readonly, nonatomic) _Bool isRectangle;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) unsigned long long cellCount;
@property(readonly, nonatomic) CDStruct_5f1f7aa9 boundingCellRange;
@property(readonly, nonatomic) CDStruct_0441cfb5 bottomRightCellID;
@property(readonly, nonatomic) CDStruct_0441cfb5 upperLeftCellID;
- (id)regionByApplyingRowMapping:(id)arg1;	// IMP=0x00000000003656a2
- (id)regionByAddingColumns:(id)arg1;	// IMP=0x0000000000365320
- (id)regionByAddingRows:(id)arg1;	// IMP=0x0000000000364f7f
- (id)regionByIntersectingColumnIndices:(id)arg1;	// IMP=0x0000000000364cd9
- (id)regionByIntersectingRowIndices:(id)arg1;	// IMP=0x0000000000364a49
- (id)regionByRemovingColumns:(id)arg1;	// IMP=0x00000000003647d2
- (id)regionByRemovingRows:(id)arg1;	// IMP=0x0000000000364571
- (id)regionOffsetBy:(CDStruct_79c71658)arg1;	// IMP=0x0000000000364438
- (id)regionBySubtractingRegion:(id)arg1;	// IMP=0x000000000036440c
- (id)regionByAddingRegion:(id)arg1;	// IMP=0x00000000003643e0
- (id)regionByUnioningEveryRangeInRegionWithRange:(CDStruct_5f1f7aa9)arg1;	// IMP=0x00000000003643b4
- (id)regionByIntersectingRange:(CDStruct_5f1f7aa9)arg1;	// IMP=0x00000000003642ec
- (id)regionBySubtractingRange:(CDStruct_5f1f7aa9)arg1;	// IMP=0x00000000003642c0
- (id)regionByAddingRange:(CDStruct_5f1f7aa9)arg1;	// IMP=0x0000000000364294
- (void)dealloc;	// IMP=0x0000000000361979
- (id)init;	// IMP=0x0000000000361933
- (void)fillCellRangeRowMajorSet:(void *)arg1 leftToRight:(_Bool)arg2;	// IMP=0x00000000003bb995
- (void)fillCellRangeColMajorSet:(void *)arg1 leftToRight:(_Bool)arg2;	// IMP=0x00000000003bba73

@end
