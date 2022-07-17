//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SBIcon, SBIconView, UIColor, UIFont, _UILegibilitySettings;
@protocol SBIconListLayoutProvider;

@interface SBIconLabelImageParametersBuilder : NSObject
{
    UIFont *_font;	// 8 = 0x8
    _Bool _hasSetTextInsets;	// 16 = 0x10
    _Bool _accessibilityReduceTransparencyEnabled;	// 17 = 0x11
    SBIcon *_icon;	// 24 = 0x18
    SBIconView *_iconView;	// 32 = 0x20
    Class _iconViewClass;	// 40 = 0x28
    NSString *_iconLocation;	// 48 = 0x30
    id <SBIconListLayoutProvider> _listLayoutProvider;	// 56 = 0x38
    _UILegibilitySettings *_legibilitySettings;	// 64 = 0x40
    NSString *_contentSizeCategory;	// 72 = 0x48
    UIColor *_focusHighlightColor;	// 80 = 0x50
    double _scale;	// 88 = 0x58
    long long _labelAccessoryType;	// 96 = 0x60
    UIColor *_textColor;	// 104 = 0x68
    NSString *_overrideText;	// 112 = 0x70
    NSString *_text;	// 120 = 0x78
    struct UIEdgeInsets _textInsets;	// 128 = 0x80
}

+ (double)_normalFontSizeForSizeParameter:(long long)arg1;	// IMP=0x0000000000254950
+ (long long)_fontSizeParameterForContentSizeCategory:(id)arg1;	// IMP=0x00000000002548af
+ (id)defaultFontForContentSizeCategory:(id)arg1 languageInsets:(struct UIEdgeInsets *)arg2;	// IMP=0x00000000002544c7
+ (struct UIEdgeInsets)insetsForFont:(id)arg1;	// IMP=0x0000000000254303
- (void).cxx_destruct;	// IMP=0x0000000000254f4f
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *overrideText; // @synthesize overrideText=_overrideText;
@property(nonatomic) struct UIEdgeInsets textInsets; // @synthesize textInsets=_textInsets;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) long long labelAccessoryType; // @synthesize labelAccessoryType=_labelAccessoryType;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) UIColor *focusHighlightColor; // @synthesize focusHighlightColor=_focusHighlightColor;
@property(copy, nonatomic) NSString *contentSizeCategory; // @synthesize contentSizeCategory=_contentSizeCategory;
@property(nonatomic, getter=isAccessibilityReduceTransparencyEnabled) _Bool accessibilityReduceTransparencyEnabled; // @synthesize accessibilityReduceTransparencyEnabled=_accessibilityReduceTransparencyEnabled;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(retain, nonatomic) id <SBIconListLayoutProvider> listLayoutProvider; // @synthesize listLayoutProvider=_listLayoutProvider;
@property(readonly, nonatomic) NSString *iconLocation; // @synthesize iconLocation=_iconLocation;
@property(retain, nonatomic) Class iconViewClass; // @synthesize iconViewClass=_iconViewClass;
@property(retain, nonatomic) SBIconView *iconView; // @synthesize iconView=_iconView;
@property(readonly, nonatomic) SBIcon *icon; // @synthesize icon=_icon;
- (_Bool)_hasValidInputs;	// IMP=0x0000000000254887
- (id)_fontWithLanguageInsets:(struct UIEdgeInsets *)arg1;	// IMP=0x0000000000254650
- (struct CGSize)_maxSize;	// IMP=0x00000000002541df
- (_Bool)_canTightenLabel;	// IMP=0x00000000002541a2
- (_Bool)_canTruncateLabel;	// IMP=0x0000000000254163
@property(readonly, nonatomic) struct CGSize iconImageSize;
- (id)listLayout;	// IMP=0x0000000000253fbb
- (void)setIcon:(id)arg1;	// IMP=0x0000000000253dbc
- (void)setIcon:(id)arg1 forLocation:(id)arg2;	// IMP=0x0000000000253da6
- (id)buildParameters;	// IMP=0x0000000000253a15
- (id)init;	// IMP=0x000000000025395c

@end
