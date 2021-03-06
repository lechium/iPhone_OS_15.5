//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class UIButton, UILabel, UIScrollView, UIView;

@interface FAExplainAppleIDViewController : UIViewController
{
    UIScrollView *_scrollView;	// 8 = 0x8
    UIView *_contentView;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UILabel *_descriptionLabel;	// 32 = 0x20
    UIButton *_goToSettingsButton;	// 40 = 0x28
    _Bool _shouldShowInviteeInstructions;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000f8fc
@property(nonatomic) _Bool shouldShowInviteeInstructions; // @synthesize shouldShowInviteeInstructions=_shouldShowInviteeInstructions;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000000f7e9
- (void)_updateFonts;	// IMP=0x000000000000f715
- (double)_heightForText:(id)arg1 constrainedToWidth:(double)arg2;	// IMP=0x000000000000f5f5
- (void)viewWillLayoutSubviews;	// IMP=0x000000000000f2bb
- (void)loadView;	// IMP=0x000000000000ee79

@end

