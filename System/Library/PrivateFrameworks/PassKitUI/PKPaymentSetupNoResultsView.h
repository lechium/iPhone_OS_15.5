//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface PKPaymentSetupNoResultsView : UIView
{
    UIImageView *_iconImageView;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_subtitleLabel;	// 24 = 0x18
    UIButton *_actionButton;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000077e35
- (void)setActionButtonTitle:(id)arg1 addTarget:(id)arg2 action:(SEL)arg3;	// IMP=0x0000000000077c1e
- (void)setSubtitle:(id)arg1;	// IMP=0x0000000000077b7d
- (void)setTitle:(id)arg1;	// IMP=0x0000000000077adc
- (void)layoutSubviews;	// IMP=0x00000000000777f5
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000774b7

@end
