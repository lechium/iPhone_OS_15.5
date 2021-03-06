//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CorePDF/CPDisposable-Protocol.h>

__attribute__((visibility("hidden")))
@interface CPShape <CPDisposable>
{
    long long mcid;	// 168 = 0xa8
    unsigned int pdfObjectID;	// 176 = 0xb0
    struct CGPath *path;	// 184 = 0xb8
    _Bool isUprightRectangle;	// 192 = 0xc0
    int windingRule;	// 196 = 0xc4
    double lineWidth;	// 200 = 0xc8
    double miterLimit;	// 208 = 0xd0
    int lineCap;	// 216 = 0xd8
    int lineJoin;	// 220 = 0xdc
    struct CGColor *fillColor;	// 224 = 0xe0
    struct CGColor *strokeColor;	// 232 = 0xe8
    struct CGPDFObject *fillObject;	// 240 = 0xf0
    struct CGPDFObject *strokeObject;	// 248 = 0xf8
    struct CGAffineTransform paintTransform;	// 256 = 0x100
    _Bool boundsComputed;	// 304 = 0x130
    _Bool renderedBoundsComputed;	// 305 = 0x131
}

- (unsigned int)pathElementCount;	// IMP=0x000000000000d306
- (void)makeLineFromVertex:(struct CGPoint)arg1 toVertex:(struct CGPoint)arg2;	// IMP=0x000000000000d27e
- (id)string;	// IMP=0x000000000000d24e
- (void)addShape:(id)arg1;	// IMP=0x000000000000cde1
- (_Bool)canCombineWith:(id)arg1;	// IMP=0x000000000000cc63
- (_Bool)isVisible;	// IMP=0x000000000000cbf2
- (_Bool)isStrokeFor:(id)arg1;	// IMP=0x000000000000cba2
- (_Bool)hasSamePathAs:(id)arg1;	// IMP=0x000000000000cad2
- (void)setPaintTransform:(struct CGAffineTransform)arg1;	// IMP=0x000000000000caab
- (struct CGAffineTransform)paintTransform;	// IMP=0x000000000000ca82
- (void)setLineJoin:(int)arg1;	// IMP=0x000000000000ca72
- (int)lineJoin;	// IMP=0x000000000000ca62
- (void)setLineCap:(int)arg1;	// IMP=0x000000000000ca52
- (int)lineCap;	// IMP=0x000000000000ca42
- (void)setMiterLimit:(double)arg1;	// IMP=0x000000000000ca30
- (double)miterLimit;	// IMP=0x000000000000ca1e
- (void)setLineWidth:(double)arg1;	// IMP=0x000000000000c9cf
- (double)lineWidth;	// IMP=0x000000000000c9bd
- (_Bool)hasStroke;	// IMP=0x000000000000c998
- (void)setStrokeObject:(struct CGPDFObject *)arg1;	// IMP=0x000000000000c987
- (struct CGPDFObject *)strokeObject;	// IMP=0x000000000000c976
- (void)setStrokeColor:(struct CGColor *)arg1;	// IMP=0x000000000000c930
- (struct CGColor *)strokeColor;	// IMP=0x000000000000c91f
- (_Bool)hasFill;	// IMP=0x000000000000c8fa
- (void)setFillObject:(struct CGPDFObject *)arg1;	// IMP=0x000000000000c8e9
- (struct CGPDFObject *)fillObject;	// IMP=0x000000000000c8d8
- (void)setFillColor:(struct CGColor *)arg1;	// IMP=0x000000000000c88d
- (struct CGColor *)fillColor;	// IMP=0x000000000000c87c
- (void)setWindingRule:(int)arg1;	// IMP=0x000000000000c86c
- (int)windingRule;	// IMP=0x000000000000c85c
- (long long)zOrder;	// IMP=0x000000000000c84a
- (void)accept:(id)arg1;	// IMP=0x000000000000c82f
- (id)attributes;	// IMP=0x000000000000c81d
- (_Bool)isUprightRectangle;	// IMP=0x000000000000c7ed
- (struct CGRect)innerBounds;	// IMP=0x000000000000c73d
- (void)recomputeRenderedBounds;	// IMP=0x000000000000c3f0
- (struct CGRect)renderedBounds;	// IMP=0x000000000000c344
- (void)setPath:(struct CGPath *)arg1;	// IMP=0x000000000000c2b4
- (struct CGPath *)path;	// IMP=0x000000000000c2a3
- (void)setPdfObjectID:(unsigned int)arg1;	// IMP=0x000000000000c293
- (unsigned int)pdfObjectID;	// IMP=0x000000000000c283
- (long long)mcid;	// IMP=0x000000000000c272
- (void)recomputeBounds;	// IMP=0x000000000000c200
- (struct CGRect)bounds;	// IMP=0x000000000000c179
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000c0ef
- (void)dealloc;	// IMP=0x000000000000c0b1
- (void)finalize;	// IMP=0x000000000000c073
- (void)dispose;	// IMP=0x000000000000c025
- (id)init;	// IMP=0x000000000000bf7e
- (id)initWithPDFShape:(struct CPPDFShape *)arg1;	// IMP=0x000000000000d31b

@end

