//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class NSString, UIColor, UILabel;

@interface SUSubtitledButton : UIButton
{
    struct __CFDictionary *_subtitleContentLookup;	// 8 = 0x8
    UILabel *_subtitleView;	// 16 = 0x10
}

- (long long)_subtitleLineBreakMode;	// IMP=0x0000000000059c8c
- (id)_subtitleFont;	// IMP=0x0000000000059c4d
- (id)_subtitledContentForState:(unsigned long long)arg1;	// IMP=0x0000000000059bd0
- (void)_setupSubtitleView;	// IMP=0x0000000000059ab0
- (id)subtitleShadowColorForState:(unsigned long long)arg1;	// IMP=0x0000000000059a42
- (struct CGRect)subtitleRectForContentRect:(struct CGRect)arg1;	// IMP=0x0000000000059796
@property(readonly, retain, nonatomic) UILabel *subtitleLabel;
- (id)subtitleForState:(unsigned long long)arg1;	// IMP=0x00000000000596f0
- (id)subtitleColorForState:(unsigned long long)arg1;	// IMP=0x0000000000059682
- (void)setSubtitleShadowColor:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000059602
- (void)setSubtitleColor:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000059582
- (void)setSubtitle:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000000594de
@property(readonly, retain, nonatomic) UIColor *currentSubtitleShadowColor;
@property(readonly, retain, nonatomic) UIColor *currentSubtitleColor;
@property(readonly, retain, nonatomic) NSString *currentSubtitle;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;	// IMP=0x0000000000059288
- (void)configureFromScriptButton:(id)arg1;	// IMP=0x00000000000591ef
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000590ca
- (void)layoutSubviews;	// IMP=0x0000000000058f34
- (void)dealloc;	// IMP=0x0000000000058ec9

@end

