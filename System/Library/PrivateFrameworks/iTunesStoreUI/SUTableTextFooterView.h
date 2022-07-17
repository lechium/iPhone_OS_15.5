//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, UIColor, UIFont;

@interface SUTableTextFooterView : UIView
{
    UIFont *_font;	// 8 = 0x8
    UIColor *_shadowColor;	// 16 = 0x10
    long long _textAlignment;	// 24 = 0x18
    UIColor *_textColor;	// 32 = 0x20
    NSArray *_textLines;	// 40 = 0x28
}

@property(retain, nonatomic) NSArray *textLines; // @synthesize textLines=_textLines;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (void)sizeToFit;	// IMP=0x0000000000102b1b
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000000001027fc
- (void)dealloc;	// IMP=0x000000000010276d

@end
