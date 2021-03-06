//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UINavigationBarTitleView.h>

@class UIButton, UILabel;

@interface MFComposeActionCardTitleView : _UINavigationBarTitleView
{
    UILabel *_titleLabel;	// 8 = 0x8
    UIButton *_closeButton;	// 16 = 0x10
}

+ (double)heightForTraitCollection:(id)arg1;	// IMP=0x00000000000251aa
- (void).cxx_destruct;	// IMP=0x0000000000025251
@property(readonly, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)_updateHeightForCurrentTraits;	// IMP=0x0000000000025130
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000250bf
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000024aca

@end

