//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class UIColor, UIView;

@interface HUQuickControlCircleButton : UIButton
{
    UIColor *_selectedColor;	// 8 = 0x8
    UIView *_backgroundView;	// 16 = 0x10
    UIColor *_standardBackgroundColor;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000003caf9d
@property(retain, nonatomic) UIColor *standardBackgroundColor; // @synthesize standardBackgroundColor=_standardBackgroundColor;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
- (void)layoutSubviews;	// IMP=0x00000000003cadbe
- (void)_controlStateChanged;	// IMP=0x00000000003cac41
- (void)_adjustTitleColor;	// IMP=0x00000000003cab37
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000003caa29
- (void)setEnabled:(_Bool)arg1;	// IMP=0x00000000003ca9e8
@property(nonatomic) double fontSize;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000003ca704

@end
