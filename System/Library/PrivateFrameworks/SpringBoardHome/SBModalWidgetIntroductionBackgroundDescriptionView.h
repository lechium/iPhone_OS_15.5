//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel, UIViewController;

@interface SBModalWidgetIntroductionBackgroundDescriptionView : UIView
{
    UIViewController *_owner;	// 8 = 0x8
    UIView *_backgroundView;	// 16 = 0x10
    UIView *_labelContainerView;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UILabel *_introductionTextLabel;	// 40 = 0x28
    UIImageView *_homescreenPreview;	// 48 = 0x30
    UIButton *_continueButton;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000a5dfc
@property(retain, nonatomic) UIButton *continueButton; // @synthesize continueButton=_continueButton;
@property(retain, nonatomic) UIImageView *homescreenPreview; // @synthesize homescreenPreview=_homescreenPreview;
@property(retain, nonatomic) UILabel *introductionTextLabel; // @synthesize introductionTextLabel=_introductionTextLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *labelContainerView; // @synthesize labelContainerView=_labelContainerView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak UIViewController *owner; // @synthesize owner=_owner;
- (id)initWithFrame:(struct CGRect)arg1 withOwner:(id)arg2;	// IMP=0x00000000000a5147

@end

