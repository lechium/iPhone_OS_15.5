//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, UIImage, UIImageView;

@interface HKTitledLogoBuddyHeaderView
{
    UIImageView *_logoImageView;	// 8 = 0x8
    NSLayoutConstraint *_titleLabelFirstBaselineAnchor;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000010a094
- (double)bottomPadding;	// IMP=0x000000000010a086
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000109fae
- (id)logoImageView;	// IMP=0x0000000000109f99
@property(retain, nonatomic) UIImage *logoImage;
- (void)_updateForCurrentSizeCategory;	// IMP=0x0000000000109ec6
- (id)initWithTopInset:(double)arg1 linkButtonTitle:(id)arg2;	// IMP=0x0000000000109c7c

@end
