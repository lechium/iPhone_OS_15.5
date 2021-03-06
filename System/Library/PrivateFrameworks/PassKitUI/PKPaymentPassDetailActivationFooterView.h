//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class UIButton, UILabel;

@interface PKPaymentPassDetailActivationFooterView : UITableViewHeaderFooterView
{
    UILabel *_footerTextLabel;	// 8 = 0x8
    UIButton *_activationButton;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000423f51
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000423d9c
- (void)layoutSubviews;	// IMP=0x0000000000423a21
- (void)setActivationButtonText:(id)arg1;	// IMP=0x000000000042398f
- (void)setFooterText:(id)arg1;	// IMP=0x0000000000423956
- (void)setupFooter;	// IMP=0x0000000000423804
- (void)setupActivationButtonWithAction:(id)arg1;	// IMP=0x000000000042369d
- (id)initWithFrame:(struct CGRect)arg1 activationAction:(id)arg2;	// IMP=0x000000000042360f

@end

