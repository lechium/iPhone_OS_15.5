//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;
@protocol SBIconWidgetIntroductionDelegate;

@interface SBIconWidgetIntroductionPopoverView : UIView
{
    UIView *_popoverView;	// 8 = 0x8
    UIView *_maskView;	// 16 = 0x10
    UILabel *_textLabel;	// 24 = 0x18
    UIButton *_editButton;	// 32 = 0x20
    UIButton *_okButton;	// 40 = 0x28
    UIView *_verticalDividerLine;	// 48 = 0x30
    id <SBIconWidgetIntroductionDelegate> _delegate;	// 56 = 0x38
}

+ (struct CGSize)contentSize:(_Bool)arg1;	// IMP=0x0000000000089628
- (void).cxx_destruct;	// IMP=0x000000000008b9ce
@property(nonatomic) __weak id <SBIconWidgetIntroductionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *verticalDividerLine; // @synthesize verticalDividerLine=_verticalDividerLine;
@property(retain, nonatomic) UIButton *okButton; // @synthesize okButton=_okButton;
@property(retain, nonatomic) UIButton *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIView *popoverView; // @synthesize popoverView=_popoverView;
- (void)layoutSubviews;	// IMP=0x000000000008b835
- (void)editButtonTapped:(id)arg1;	// IMP=0x000000000008b7f8
- (void)okButtonTapped:(id)arg1;	// IMP=0x000000000008b7bb
- (void)setUpButtonsInPopoverView:(id)arg1 vibrantContentView:(id)arg2 layoutGuide:(id)arg3 vertical:(_Bool)arg4;	// IMP=0x000000000008ab71
- (id)editButtonLabelText;	// IMP=0x000000000008aac0
- (void)setUpViews:(_Bool)arg1;	// IMP=0x000000000008978f
- (id)initWithDelegate:(id)arg1 vertical:(_Bool)arg2;	// IMP=0x00000000000896fa

@end

