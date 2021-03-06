//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CTGlyphStorageInterface : NSObject
{
    long long _glyphCount;	// 8 = 0x8
    unsigned short *_glyphs;	// 16 = 0x10
    struct CGSize *_advances;	// 24 = 0x18
    unsigned int *_props;	// 32 = 0x20
    long long *_stringIndexes;	// 40 = 0x28
    long long *_absorbedCounts;	// 48 = 0x30
    struct CGPoint *_origins;	// 56 = 0x38
}

- (void)disposeGlyphStack;	// IMP=0x00000000000f99d6
- (void)popGlyph:(long long)arg1;	// IMP=0x00000000000f99d0
- (void)pushGlyph:(long long)arg1;	// IMP=0x00000000000f99ca
- (void)initGlyphStack:(long long)arg1;	// IMP=0x00000000000f99c4
- (void)insertGlyphs:(CDStruct_912cb5d2)arg1;	// IMP=0x00000000000f99be
- (void)moveGlyphsTo:(long long)arg1 from:(CDStruct_912cb5d2)arg2;	// IMP=0x00000000000f99b8
- (void)swapGlyph:(long long)arg1 withIndex:(long long)arg2;	// IMP=0x00000000000f99b2
- (void)setStringIndex:(long long)arg1 forIndex:(long long)arg2;	// IMP=0x00000000000f99ac
- (void)setAbsorbedCount:(long long)arg1 forIndex:(long long)arg2;	// IMP=0x00000000000f99a6
- (void)setProps:(unsigned int)arg1 forIndex:(long long)arg2;	// IMP=0x00000000000f99a0
- (void)setAdvance:(struct CGSize)arg1 forIndex:(long long)arg2;	// IMP=0x00000000000f999a
- (void)setGlyphID:(unsigned short)arg1 forIndex:(long long)arg2;	// IMP=0x00000000000f9994
- (void)getCustomAdvance:(struct CGSize *)arg1 forIndex:(long long)arg2;	// IMP=0x00000000000f998e
- (struct __CTGlyphStorage *)createCopy:(CDStruct_912cb5d2)arg1;	// IMP=0x00000000000f9986

@end

