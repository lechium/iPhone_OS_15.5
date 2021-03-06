//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface PKDisambiguationFooterView : UIView
{
    UILabel *_descriptionLabel;	// 8 = 0x8
    UIButton *_actionButton;	// 16 = 0x10
    UIButton *_secondaryActionButton;	// 24 = 0x18
    double _topPadding;	// 32 = 0x20
    double _secondaryActionTopPadding;	// 40 = 0x28
    double _bottomPadding;	// 48 = 0x30
}

+ (id)descriptionLabel;	// IMP=0x00000000000dd92c
+ (id)buttonWithTitle:(id)arg1 textStyle:(id)arg2 action:(id)arg3;	// IMP=0x00000000000dd84d
- (void).cxx_destruct;	// IMP=0x00000000000dda2c
@property(nonatomic) double bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property(nonatomic) double secondaryActionTopPadding; // @synthesize secondaryActionTopPadding=_secondaryActionTopPadding;
@property(nonatomic) double topPadding; // @synthesize topPadding=_topPadding;
@property(readonly, retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
- (void)sizeToFitForTableView:(id)arg1;	// IMP=0x00000000000dd7d1
- (double)_recommendedSecondaryActionTopPaddingForTableView:(id)arg1;	// IMP=0x00000000000dd4e8
- (void)layoutSubviews;	// IMP=0x00000000000dceef
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000dcb5e
- (id)initWithFrame:(struct CGRect)arg1 action:(id)arg2 secondaryAction:(id)arg3 title:(id)arg4 secondaryTitle:(id)arg5 desscription:(id)arg6;	// IMP=0x00000000000dc930

@end

