//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CorePDF/CPDisposable-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CPFont : NSObject <CPDisposable>
{
    struct CGPDFFont *cgPDFFont;	// 8 = 0x8
    struct CGFont *cgFont;	// 16 = 0x10
    NSString *fontName;	// 24 = 0x18
    _Bool exactMatch;	// 32 = 0x20
    CDStruct_05724ab2 descriptor;	// 40 = 0x28
    struct __CFDictionary *kernDictionary;	// 208 = 0xd0
    double kernUnitsPerEm;	// 216 = 0xd8
    _Bool isHorizontal;	// 224 = 0xe0
    double defaultWidth;	// 232 = 0xe8
    _Bool disposed;	// 240 = 0xf0
}

- (void)uniCharsFor:(unsigned long long)arg1 count:(unsigned long long *)arg2 toArray:(unsigned short *)arg3 maxChars:(unsigned int)arg4;	// IMP=0x0000000000035447
- (_Bool)getGlyphs:(unsigned short *)arg1 forCodes:(const unsigned short *)arg2 count:(unsigned int)arg3;	// IMP=0x0000000000035305
- (double)kernBetweenUnicode:(unsigned short)arg1 andUnicode:(unsigned short)arg2;	// IMP=0x0000000000035285
- (_Bool)isHorizontal;	// IMP=0x0000000000035279
- (double)underlineThickness;	// IMP=0x000000000003526b
- (double)underlinePosition;	// IMP=0x000000000003525d
- (double)spaceWidth;	// IMP=0x000000000003524f
- (double)missingWidth;	// IMP=0x0000000000035241
- (double)maxWidth;	// IMP=0x0000000000035233
- (double)avgWidth;	// IMP=0x0000000000035225
- (double)stemH;	// IMP=0x0000000000035217
- (double)stemV;	// IMP=0x0000000000035209
- (double)xHeight;	// IMP=0x00000000000351fb
- (double)capHeight;	// IMP=0x00000000000351ed
- (double)leading;	// IMP=0x00000000000351e2
- (double)descent;	// IMP=0x00000000000351bc
- (double)ascent;	// IMP=0x0000000000035196
- (double)italicAngle;	// IMP=0x000000000003518b
- (struct CGRect)fontBBox;	// IMP=0x0000000000035173
- (unsigned int)flags;	// IMP=0x000000000003516a
- (double)fontWeight;	// IMP=0x000000000003515f
- (double)fontStretch;	// IMP=0x0000000000035154
- (_Bool)isSameFontAs:(id)arg1;	// IMP=0x0000000000035131
- (id)fontName;	// IMP=0x0000000000035127
- (struct CGFont *)cgFont;	// IMP=0x00000000000350f8
- (struct CGPDFFont *)cgPDFFont;	// IMP=0x00000000000350ee
- (void)dealloc;	// IMP=0x00000000000350a6
- (void)finalize;	// IMP=0x0000000000035068
- (void)dispose;	// IMP=0x0000000000035029
- (id)initWith:(struct CGPDFDictionary *)arg1;	// IMP=0x0000000000034fa8
- (void)loadEmbeddedFontInfo;	// IMP=0x000000000003498c
- (void)loadExternalFontInfoFor:(id)arg1;	// IMP=0x0000000000034872
- (void)getFontName;	// IMP=0x0000000000034770
- (id)matchingFontName;	// IMP=0x00000000000344fd

@end
