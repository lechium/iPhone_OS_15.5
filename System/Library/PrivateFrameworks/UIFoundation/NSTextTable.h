//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIFoundation/NSSecureCoding-Protocol.h>

@interface NSTextTable <NSSecureCoding>
{
    unsigned long long _numCols;	// 48 = 0x30
    unsigned long long _tableFlags;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000b36bc
+ (void)initialize;	// IMP=0x00000000000b361d
- (void)drawBackgroundForBlock:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3 characterRange:(struct _NSRange)arg4 layoutManager:(id)arg5;	// IMP=0x00000000000b616f
- (_Bool)_missingColumnsForRowRange:(struct _NSRange)arg1 blockIndex:(unsigned long long)arg2 text:(id)arg3;	// IMP=0x00000000000b6067
- (struct CGRect)boundsRectForBlock:(id)arg1 contentRect:(struct CGRect)arg2 inRect:(struct CGRect)arg3 textContainer:(id)arg4 characterRange:(struct _NSRange)arg5;	// IMP=0x00000000000b59ea
- (struct CGRect)_contentRectForCharRange:(struct _NSRange)arg1 textContainer:(id)arg2;	// IMP=0x00000000000b55db
- (struct CGRect)rectForBlock:(id)arg1 layoutAtPoint:(struct CGPoint)arg2 inRect:(struct CGRect)arg3 textContainer:(id)arg4 characterRange:(struct _NSRange)arg5;	// IMP=0x00000000000b4e8e
- (id)_descriptionAtIndex:(unsigned long long)arg1 text:(id)arg2;	// IMP=0x00000000000b4a08
- (id)_rowArrayForBlock:(id)arg1 atIndex:(unsigned long long)arg2 text:(id)arg3 layoutManager:(id)arg4 containerWidth:(double)arg5 withRepetitions:(_Bool)arg6 collapseBorders:(_Bool)arg7 rowCharRange:(struct _NSRange *)arg8 indexInRow:(unsigned long long *)arg9 startingRow:(long long *)arg10 startingColumn:(long long *)arg11 previousRowBlockHelper:(id *)arg12;	// IMP=0x00000000000b3a2c
- (void)_setTableFlags:(unsigned long long)arg1;	// IMP=0x00000000000b3a1b
- (unsigned long long)_tableFlags;	// IMP=0x00000000000b3a0a
- (void)setLayoutAlgorithm:(unsigned long long)arg1;	// IMP=0x00000000000b39e4
- (unsigned long long)layoutAlgorithm;	// IMP=0x00000000000b39ce
- (void)setHidesEmptyCells:(_Bool)arg1;	// IMP=0x00000000000b39af
- (_Bool)hidesEmptyCells;	// IMP=0x00000000000b399b
- (void)setCollapsesBorders:(_Bool)arg1;	// IMP=0x00000000000b397d
- (_Bool)collapsesBorders;	// IMP=0x00000000000b396b
- (unsigned long long)numberOfColumns;	// IMP=0x00000000000b395a
- (void)setNumberOfColumns:(unsigned long long)arg1;	// IMP=0x00000000000b3949
- (void)_takeValuesFromTextBlock:(id)arg1;	// IMP=0x00000000000b38d8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b3798
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b36c4
- (void)dealloc;	// IMP=0x00000000000b368d
- (id)init;	// IMP=0x00000000000b365e

@end

