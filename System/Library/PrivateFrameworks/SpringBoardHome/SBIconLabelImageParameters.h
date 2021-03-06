//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/NSCopying-Protocol.h>
#import <SpringBoardHome/NSMutableCopying-Protocol.h>

@class NSString, UIColor, UIFont;

@interface SBIconLabelImageParameters : NSObject <NSCopying, NSMutableCopying>
{
    UIFont *_font;	// 8 = 0x8
    NSString *_text;	// 16 = 0x10
    _Bool _containsEmoji;	// 24 = 0x18
    _Bool _canTruncate;	// 25 = 0x19
    _Bool _canTighten;	// 26 = 0x1a
    _Bool _recalculateHash;	// 27 = 0x1b
    _Bool _accessibilityReduceTransparencyEnabled;	// 28 = 0x1c
    _Bool _colorspaceGrayscale;	// 29 = 0x1d
    _Bool _colorspaceGrayscaleSet;	// 30 = 0x1e
    NSString *_contentSizeCategory;	// 32 = 0x20
    double _scale;	// 40 = 0x28
    struct CGSize _maxSize;	// 48 = 0x30
    long long _legibilityStyle;	// 64 = 0x40
    UIColor *_textColor;	// 72 = 0x48
    UIColor *_focusHighlightColor;	// 80 = 0x50
    struct UIEdgeInsets _textInsets;	// 88 = 0x58
    struct UIEdgeInsets _fontLanguageInsets;	// 120 = 0x78
    NSString *_iconLocation;	// 152 = 0x98
    unsigned long long _hash;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x000000000027db19
@property(readonly, nonatomic) struct UIEdgeInsets fontLanguageInsets; // @synthesize fontLanguageInsets=_fontLanguageInsets;
@property(readonly, nonatomic) struct UIEdgeInsets textInsets; // @synthesize textInsets=_textInsets;
@property(readonly, nonatomic) UIColor *focusHighlightColor; // @synthesize focusHighlightColor=_focusHighlightColor;
@property(readonly, copy, nonatomic) NSString *contentSizeCategory; // @synthesize contentSizeCategory=_contentSizeCategory;
@property(readonly, nonatomic, getter=isAccessibilityReduceTransparencyEnabled) _Bool accessibilityReduceTransparencyEnabled; // @synthesize accessibilityReduceTransparencyEnabled=_accessibilityReduceTransparencyEnabled;
@property(readonly, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, nonatomic) long long legibilityStyle; // @synthesize legibilityStyle=_legibilityStyle;
@property(readonly, nonatomic) _Bool containsEmoji; // @synthesize containsEmoji=_containsEmoji;
@property(readonly, nonatomic) _Bool canTighten; // @synthesize canTighten=_canTighten;
@property(readonly, nonatomic) _Bool canTruncate; // @synthesize canTruncate=_canTruncate;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) UIFont *font; // @synthesize font=_font;
@property(readonly, nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000027da3d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000027da32
- (id)description;	// IMP=0x000000000027d818
- (unsigned long long)hash;	// IMP=0x000000000027d6fb
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000027d4e2
- (void)_noteNeedsHashRecalculation;	// IMP=0x000000000027d4d8
@property(readonly, nonatomic, getter=isColorspaceGrayscale) _Bool colorspaceGrayscale;
- (id)initWithParameters:(id)arg1;	// IMP=0x000000000027d337
- (id)init;	// IMP=0x000000000027d2b1

@end

