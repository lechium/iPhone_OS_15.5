//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIFoundation/NSLayoutManager.h>

@class EMKGlyphRippler, EMKTextEnumerator, NSArray, NSMutableAttributedString, NSMutableData, UIColor;

@interface EMKLayoutManager : NSLayoutManager
{
    NSMutableAttributedString *_attributes;	// 8 = 0x8
    EMKGlyphRippler *_rippler;	// 16 = 0x10
    UIColor *_currentColor;	// 24 = 0x18
    double _currentScale;	// 32 = 0x20
    struct CGSize _currentOffset;	// 40 = 0x28
    UIColor *_currentShadowColor;	// 56 = 0x38
    NSArray *_emojiConversionLanguages;	// 64 = 0x40
    EMKTextEnumerator *_enumerator;	// 72 = 0x48
    NSMutableData *_glyphIndexTable;	// 80 = 0x50
    _Bool _emojiConversionEnabled;	// 88 = 0x58
    _Bool _emojiConversionActive;	// 89 = 0x59
    _Bool _darkModeEnabled;	// 90 = 0x5a
}

- (void).cxx_destruct;	// IMP=0x0000000000005644
- (void)setDelayFrames:(unsigned long long)arg1;	// IMP=0x0000000000005627
- (void)setPostFrames:(unsigned long long)arg1;	// IMP=0x000000000000560a
- (void)setPreFrames:(unsigned long long)arg1;	// IMP=0x00000000000055ed
- (void)processEditingForTextStorage:(id)arg1 edited:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4 invalidatedRange:(struct _NSRange)arg5;	// IMP=0x0000000000004f18
- (void)showCGGlyphs:(const unsigned short *)arg1 positions:(const struct CGPoint *)arg2 count:(unsigned long long)arg3 font:(id)arg4 matrix:(struct CGAffineTransform)arg5 attributes:(id)arg6 inContext:(struct CGContext *)arg7;	// IMP=0x0000000000004c45
- (void)drawGlyphsForGlyphRange:(struct _NSRange)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x0000000000004bea
- (void)drawAttributedGlyphsForGlyphRange:(struct _NSRange)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x000000000000472a
- (id)attributes;	// IMP=0x0000000000004715
- (void)setEmojiConversionLanguages:(id)arg1;	// IMP=0x00000000000046e1
- (id)emojiConversionLanguages;	// IMP=0x00000000000046cc
- (void)setDarkModeEnabled:(_Bool)arg1;	// IMP=0x00000000000046bc
- (_Bool)isDarkModeEnabled;	// IMP=0x00000000000046ac
- (void)setEmojiConversionActive:(_Bool)arg1;	// IMP=0x0000000000004690
- (_Bool)isEmojiConversionActive;	// IMP=0x0000000000004680
@property(getter=isEmojiConversionEnabled) _Bool emojiConversionEnabled;
- (_Bool)isEmojiAnimationActive;	// IMP=0x00000000000044ed
- (void)startOrStopTimer;	// IMP=0x00000000000043ed
- (_Bool)convertGlyphIndex:(unsigned long long)arg1 toAttributeRelativeGlyphIndex:(unsigned long long *)arg2 numberOfAttributedGlyphs:(unsigned long long *)arg3;	// IMP=0x00000000000041d3
- (void)flushGlyphIndexTable;	// IMP=0x00000000000041b2
- (id)init;	// IMP=0x0000000000003fc0

@end

