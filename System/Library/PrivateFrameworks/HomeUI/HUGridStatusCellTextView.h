//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class HUGridStatusCellLayoutOptions, NSArray, NSAttributedString, UIColor;

@interface HUGridStatusCellTextView : UIView
{
    NSAttributedString *_title;	// 8 = 0x8
    NSAttributedString *_shortTitle;	// 16 = 0x10
    UIColor *_textColor;	// 24 = 0x18
    HUGridStatusCellLayoutOptions *_layoutOptions;	// 32 = 0x20
    NSArray *_textLines;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000473712
@property(retain, nonatomic) NSArray *textLines; // @synthesize textLines=_textLines;
@property(retain, nonatomic) HUGridStatusCellLayoutOptions *layoutOptions; // @synthesize layoutOptions=_layoutOptions;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, nonatomic) NSAttributedString *shortTitle; // @synthesize shortTitle=_shortTitle;
@property(readonly, nonatomic) NSAttributedString *title; // @synthesize title=_title;
- (void)_parseTitleLines;	// IMP=0x00000000004735f4
- (id)_commonTextAttributesWithLineBreakMode:(long long)arg1;	// IMP=0x00000000004734a2
- (id)_effectiveTextColor;	// IMP=0x000000000047345f
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000000004730ca
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000004730a5
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000472f47
- (id)font;	// IMP=0x0000000000472ef7
- (void)setTitle:(id)arg1 shortTitle:(id)arg2;	// IMP=0x0000000000472b88
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000472afb

@end

