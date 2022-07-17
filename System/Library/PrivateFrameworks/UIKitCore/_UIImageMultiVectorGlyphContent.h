//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIImageMultiVectorGlyphContent
{
    NSArray *_glyphs;	// 40 = 0x28
    NSArray *_colors;	// 48 = 0x30
    NSArray *_offsets;	// 56 = 0x38
    NSArray *_scaleFactors;	// 64 = 0x40
    struct CGSize _sizeInPixels;	// 72 = 0x48
    struct CGPoint _anchorPoint;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000636b38
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006369ea
- (id)description;	// IMP=0x000000000063675c
- (_Bool)_drawInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 effect:(id)arg3;	// IMP=0x0000000000635ca7
- (void)_prepareforDrawingInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;	// IMP=0x0000000000635ca1
- (double)vectorScale;	// IMP=0x0000000000635c93
- (struct CGSize)sizeInPixels;	// IMP=0x0000000000635c7b
- (_Bool)isVectorGlyph;	// IMP=0x0000000000635c73
- (_Bool)canScaleImageToTargetResolution;	// IMP=0x0000000000635c6b
- (_Bool)canDrawImage;	// IMP=0x0000000000635c63
- (_Bool)isCGImage;	// IMP=0x0000000000635c5b
- (id)initWithScale:(double)arg1;	// IMP=0x0000000000635bd4
- (id)initWithSize:(struct CGSize)arg1 glyphs:(id)arg2 colors:(id)arg3 offsets:(id)arg4 scaleFactors:(id)arg5 anchorPoint:(struct CGPoint)arg6;	// IMP=0x0000000000635962

@end
