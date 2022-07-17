//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PDFKit/NSCopying-Protocol.h>

@class NSArray, NSAttributedString, NSString, PDFSelectionPrivate, UIColor;

@interface PDFSelection : NSObject <NSCopying>
{
    PDFSelectionPrivate *_private;	// 8 = 0x8
}

+ (id)defaultInactiveColor;	// IMP=0x00000000000a8664
+ (id)defaultActiveColor;	// IMP=0x00000000000a862b
- (void).cxx_destruct;	// IMP=0x00000000000a968d
- (struct _NSRange)previewRangeAtIndex:(unsigned long long)arg1 onPage:(id)arg2;	// IMP=0x00000000000a959b
- (id)description;	// IMP=0x00000000000a945f
- (_Bool)isStandaloneGraphic;	// IMP=0x00000000000a93ad
- (void)normalize;	// IMP=0x00000000000a8bae
- (void)drawForPage:(id)arg1 withBox:(int)arg2 active:(_Bool)arg3 inContext:(struct CGContext *)arg4;	// IMP=0x00000000000a86b7
- (void)setForceBreaks:(_Bool)arg1;	// IMP=0x00000000000a86aa
- (_Bool)forceBreaks;	// IMP=0x00000000000a869d
- (id)rtfdData;	// IMP=0x00000000000a8623
- (id)webArchive;	// IMP=0x00000000000a8573
- (id)html;	// IMP=0x00000000000a84c3
- (id)attributedStringScaled:(double)arg1;	// IMP=0x00000000000a834b
- (id)createAttributedStringForCGSelection:(struct CGPDFSelection *)arg1 scaled:(double)arg2;	// IMP=0x00000000000a7fee
- (unsigned long long)pdfKitIndexOfLastCharacterOnPage:(id)arg1;	// IMP=0x00000000000a7f69
- (unsigned long long)pdfKitIndexOfFirstCharacterOnPage:(id)arg1;	// IMP=0x00000000000a7f41
- (unsigned long long)indexOfLastCharacterOnPage:(id)arg1;	// IMP=0x00000000000a7ebc
- (unsigned long long)indexOfFirstCharacterOnPage:(id)arg1;	// IMP=0x00000000000a7e94
- (id)lastPage;	// IMP=0x00000000000a7e4b
- (id)firstPage;	// IMP=0x00000000000a7e00
- (struct CGPoint)rightMostCharCenter;	// IMP=0x00000000000a7d14
- (struct CGPoint)leftMostCharCenter;	// IMP=0x00000000000a7c4f
- (struct CGPoint)firstCharCenter;	// IMP=0x00000000000a7b8a
- (void)addSelectionRange:(struct _NSRange)arg1 page:(id)arg2 normalize:(_Bool)arg3;	// IMP=0x00000000000a7ab3
- (void)addSelectionCore:(id)arg1 normalize:(_Bool)arg2;	// IMP=0x00000000000a7856
- (void)addSelectionNoNormalize:(id)arg1;	// IMP=0x00000000000a7842
- (struct CGPDFSelection *)cgSelectionForPage:(id)arg1;	// IMP=0x00000000000a7771
- (id)cgSelectionPages;	// IMP=0x00000000000a775f
- (const struct __CFArray *)cgSelections;	// IMP=0x00000000000a7751
- (void)addCGSelection:(struct CGPDFSelection *)arg1 forPage:(id)arg2;	// IMP=0x00000000000a766f
- (id)boundsArrayForPage:(id)arg1;	// IMP=0x00000000000a7420
- (long long)compare:(id)arg1;	// IMP=0x00000000000a719f
- (_Bool)isEmpty;	// IMP=0x00000000000a7138
- (id)asDestination;	// IMP=0x00000000000a6f97
- (id)document;	// IMP=0x00000000000a6f7d
- (void)dealloc;	// IMP=0x00000000000a6f3a
- (void)drawForPage:(id)arg1 withBox:(long long)arg2 active:(_Bool)arg3;	// IMP=0x00000000000a6f25
- (void)drawForPage:(id)arg1 active:(_Bool)arg2;	// IMP=0x00000000000a6f0b
- (void)extendSelectionForLineBoundaries;	// IMP=0x00000000000a6cb9
- (void)extendSelectionAtStart:(long long)arg1;	// IMP=0x00000000000a68d9
- (void)extendSelectionAtEnd:(long long)arg1;	// IMP=0x00000000000a6458
- (void)addSelections:(id)arg1;	// IMP=0x00000000000a632d
- (void)addSelection:(id)arg1;	// IMP=0x00000000000a6316
- (id)selectionsByLine;	// IMP=0x00000000000a610b
- (struct _NSRange)rangeAtIndex:(unsigned long long)arg1 onPage:(id)arg2;	// IMP=0x00000000000a6019
- (unsigned long long)numberOfTextRangesOnPage:(id)arg1;	// IMP=0x00000000000a5f5f
- (id)pdfSelectionUUID;	// IMP=0x00000000000a5f4d
- (struct CGRect)lastSpanBoundsForPage:(id)arg1;	// IMP=0x00000000000a5e8c
- (struct CGRect)firstSpanBoundsForPage:(id)arg1;	// IMP=0x00000000000a5dcb
- (struct CGRect)spanBoundsForPage:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x00000000000a5ac0
- (_Bool)containsPoint:(struct CGPoint)arg1 onPage:(id)arg2;	// IMP=0x00000000000a58e2
- (struct CGRect)boundsForPage:(id)arg1;	// IMP=0x00000000000a57a1
@property(readonly, nonatomic) NSAttributedString *attributedString;
@property(readonly, nonatomic) NSString *string;
@property(copy, nonatomic) UIColor *color;
@property(readonly, nonatomic) NSArray *pages;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a51b9
- (id)initWithPage:(id)arg1;	// IMP=0x00000000000a50a3
- (id)initWithDocument:(id)arg1;	// IMP=0x00000000000a4fb1

@end
