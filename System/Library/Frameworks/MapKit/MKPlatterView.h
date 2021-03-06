//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MKVibrantView, NSString, UIColor, UIFont, UIImageView;

@interface MKPlatterView : UIView
{
    UIImageView *_glyphImageView;	// 8 = 0x8
    MKVibrantView *_platterView;	// 16 = 0x10
    _Bool _highlighted;	// 24 = 0x18
    NSString *_glyph;	// 32 = 0x20
    UIFont *_glyphFont;	// 40 = 0x28
    UIColor *_glyphColor;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000009bde1
@property(retain, nonatomic) UIColor *glyphColor; // @synthesize glyphColor=_glyphColor;
@property(retain, nonatomic) UIFont *glyphFont; // @synthesize glyphFont=_glyphFont;
@property(retain, nonatomic) NSString *glyph; // @synthesize glyph=_glyph;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) _Bool showPlatterBackground;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000009bd18
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000009bcd5
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000009bc8f
- (void)infoCardThemeChanged;	// IMP=0x000000000009bb80
- (void)updateGlyph;	// IMP=0x000000000009b9d3
- (void)layoutSubviews;	// IMP=0x000000000009b8c2
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000009b684

@end

