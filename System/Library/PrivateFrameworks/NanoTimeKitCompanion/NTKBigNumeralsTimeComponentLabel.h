//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CLKDevice, CLKFont, NSDate, NSDateFormatter, NSString, NTKColoringLabel, UIColor, UIFont;

@interface NTKBigNumeralsTimeComponentLabel : UIView
{
    CLKDevice *_device;	// 8 = 0x8
    _Bool _useLigatures;	// 16 = 0x10
    CLKFont *_filledFont;	// 24 = 0x18
    CLKFont *_outlinedFont;	// 32 = 0x20
    NTKColoringLabel *_label;	// 40 = 0x28
    NTKColoringLabel *_transitioningLabel;	// 48 = 0x30
    NSDateFormatter *_formatter;	// 56 = 0x38
    unsigned long long _timeComponent;	// 64 = 0x40
    unsigned long long _fontVariant;	// 72 = 0x48
    NSString *_filledFontSectName;	// 80 = 0x50
    NSString *_outlinedFontSectName;	// 88 = 0x58
    const struct mach_header_64 *_dsoHandle;	// 96 = 0x60
    NSDate *_date;	// 104 = 0x68
    unsigned long long _typeface;	// 112 = 0x70
    unsigned long long _style;	// 120 = 0x78
    UIColor *_color;	// 128 = 0x80
}

+ (id)localeForTypeface:(unsigned long long)arg1;	// IMP=0x0000000000004902
- (void).cxx_destruct;	// IMP=0x0000000000004c3b
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) unsigned long long typeface; // @synthesize typeface=_typeface;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)_fontForStyle:(unsigned long long)arg1;	// IMP=0x0000000000004bc2
- (void)_updateLabelText;	// IMP=0x0000000000004b40
- (id)_attributedStringForTypeface:(unsigned long long)arg1;	// IMP=0x0000000000004970
- (void)_updateLocale;	// IMP=0x0000000000004854
- (void)cleanupTransition;	// IMP=0x000000000000466a
- (void)applyTransitionFraction:(double)arg1 fromColor:(id)arg2 toColor:(id)arg3;	// IMP=0x00000000000045ff
- (void)applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3;	// IMP=0x00000000000044db
- (void)applyTransitionFraction:(double)arg1 fromTypeface:(unsigned long long)arg2 toTypeface:(unsigned long long)arg3;	// IMP=0x00000000000043b7
- (double)_lastLineBaseline;	// IMP=0x00000000000041d5
@property(nonatomic) long long textAlignment;
@property(nonatomic) double fontSize;
@property(readonly, nonatomic) UIFont *font;
- (void)setupFontsForVariant:(unsigned long long)arg1 fontSize:(double)arg2;	// IMP=0x0000000000003e16
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000003df9
- (void)layoutSubviews;	// IMP=0x0000000000003d2e
- (void)dealloc;	// IMP=0x0000000000003cac
- (id)initWithDevice:(id)arg1 timeComponent:(unsigned long long)arg2 fontVariant:(unsigned long long)arg3 filledFontSectName:(id)arg4 outlineFontSectName:(id)arg5 dsoHandle:(const struct mach_header_64 *)arg6 fontSize:(double)arg7 useLigatures:(_Bool)arg8;	// IMP=0x0000000000003928

@end

