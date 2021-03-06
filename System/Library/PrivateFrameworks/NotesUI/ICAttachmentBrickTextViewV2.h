//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class ICAttachmentBrickLabelV2, NSLayoutConstraint, NSString, UILayoutGuide;

@interface ICAttachmentBrickTextViewV2 : UIView
{
    _Bool _titleLight;	// 8 = 0x8
    _Bool _detail1Dark;	// 9 = 0x9
    _Bool _vibrant;	// 10 = 0xa
    _Bool _disableVibrancy;	// 11 = 0xb
    _Bool _selected;	// 12 = 0xc
    NSString *_titleString;	// 16 = 0x10
    NSString *_detail1String;	// 24 = 0x18
    NSString *_detail2String;	// 32 = 0x20
    ICAttachmentBrickLabelV2 *_titleView;	// 40 = 0x28
    ICAttachmentBrickLabelV2 *_detail1View;	// 48 = 0x30
    ICAttachmentBrickLabelV2 *_detail2View;	// 56 = 0x38
    UILayoutGuide *_textBoxLayoutGuide;	// 64 = 0x40
    NSLayoutConstraint *_textBoxTopConstraint;	// 72 = 0x48
    NSLayoutConstraint *_textBoxLeadingConstraint;	// 80 = 0x50
    NSLayoutConstraint *_textBoxTrailingConstraint;	// 88 = 0x58
    NSLayoutConstraint *_textBoxBottomConstraint;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000000fd15a
@property(retain, nonatomic) NSLayoutConstraint *textBoxBottomConstraint; // @synthesize textBoxBottomConstraint=_textBoxBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *textBoxTrailingConstraint; // @synthesize textBoxTrailingConstraint=_textBoxTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *textBoxLeadingConstraint; // @synthesize textBoxLeadingConstraint=_textBoxLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *textBoxTopConstraint; // @synthesize textBoxTopConstraint=_textBoxTopConstraint;
@property(retain, nonatomic) UILayoutGuide *textBoxLayoutGuide; // @synthesize textBoxLayoutGuide=_textBoxLayoutGuide;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) _Bool disableVibrancy; // @synthesize disableVibrancy=_disableVibrancy;
@property(nonatomic) _Bool vibrant; // @synthesize vibrant=_vibrant;
@property(retain, nonatomic) ICAttachmentBrickLabelV2 *detail2View; // @synthesize detail2View=_detail2View;
@property(retain, nonatomic) ICAttachmentBrickLabelV2 *detail1View; // @synthesize detail1View=_detail1View;
@property(retain, nonatomic) ICAttachmentBrickLabelV2 *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) _Bool detail1Dark; // @synthesize detail1Dark=_detail1Dark;
@property(nonatomic) _Bool titleLight; // @synthesize titleLight=_titleLight;
@property(copy, nonatomic) NSString *detail2String; // @synthesize detail2String=_detail2String;
@property(copy, nonatomic) NSString *detail1String; // @synthesize detail1String=_detail1String;
@property(copy, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
- (void)didMoveToWindow;	// IMP=0x00000000000fcf03
- (void)updateMargins;	// IMP=0x00000000000fcd73
- (void)updateTextColors;	// IMP=0x00000000000fcb5a
- (_Bool)allowsVibrancy;	// IMP=0x00000000000fcb23
- (void)updateTextFonts;	// IMP=0x00000000000fc9df
- (void)contentSizeCategoryDidChange;	// IMP=0x00000000000fc9b1
- (void)updateTextLayout;	// IMP=0x00000000000fb76c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000fb182

@end

