//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TSWPColumns : NSObject
{
    unsigned long long _columnCount;	// 8 = 0x8
    _Bool _equalWidth;	// 16 = 0x10
    double _widthArray[10];	// 24 = 0x18
    double _gapArray[9];	// 104 = 0x68
}

+ (id)columns;	// IMP=0x0000000000312450
@property(nonatomic) _Bool equalWidth; // @synthesize equalWidth=_equalWidth;
@property(nonatomic) unsigned long long columnCount; // @synthesize columnCount=_columnCount;
- (id)description;	// IMP=0x0000000000312f81
- (void)setGap:(double)arg1 forColumnIndex:(unsigned long long)arg2 bodyWidth:(double)arg3;	// IMP=0x0000000000312db4
- (double)p_maxEqualGapForBodyWidth:(double)arg1;	// IMP=0x0000000000312d34
- (void)setWidth:(double)arg1 forColumnIndex:(unsigned long long)arg2 bodyWidth:(double)arg3;	// IMP=0x0000000000312b48
- (double)p_equalWidthForEqualGap:(double)arg1;	// IMP=0x0000000000312a26
- (double)p_equalGapForEqualWidth:(double)arg1;	// IMP=0x0000000000312907
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 outWidth:(double *)arg3 outGap:(double *)arg4;	// IMP=0x0000000000312895
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;	// IMP=0x0000000000312889
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;	// IMP=0x000000000031287d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003127a9
- (void)p_setColumnCount:(unsigned long long)arg1 gapFraction:(double)arg2;	// IMP=0x000000000031268b
- (void)p_setEqualWidth:(double)arg1 equalGap:(double)arg2;	// IMP=0x0000000000312657
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000312612
- (id)initWithEqualColumnCount:(unsigned long long)arg1 gapFraction:(double)arg2;	// IMP=0x00000000003125ae
- (id)initWithColumnCount:(unsigned long long)arg1 equalWidth:(_Bool)arg2 widthArray:(double *)arg3 gapArray:(double *)arg4;	// IMP=0x00000000003124ec
- (id)init;	// IMP=0x00000000003124d5
- (id)initWithColumnCount:(unsigned long long)arg1;	// IMP=0x0000000000312477

@end
