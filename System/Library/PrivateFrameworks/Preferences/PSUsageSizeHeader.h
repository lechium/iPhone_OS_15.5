//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewHeaderFooterView.h>

#import <Preferences/PSHeaderFooterView-Protocol.h>

@class NSLayoutConstraint, UILabel, UIStackView;

@interface PSUsageSizeHeader : UITableViewHeaderFooterView <PSHeaderFooterView>
{
    UILabel *_sizeLabel;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UIStackView *__internalStackView;	// 24 = 0x18
    NSLayoutConstraint *_labelLeadingConstraint;	// 32 = 0x20
    NSLayoutConstraint *_labelTrailingConstraint;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000e76df
@property(retain, nonatomic) NSLayoutConstraint *labelTrailingConstraint; // @synthesize labelTrailingConstraint=_labelTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *labelLeadingConstraint; // @synthesize labelLeadingConstraint=_labelLeadingConstraint;
@property(retain, nonatomic) UIStackView *_internalStackView; // @synthesize _internalStackView=__internalStackView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
- (void)updateConstraints;	// IMP=0x00000000000e7432
- (void)setTableView:(id)arg1;	// IMP=0x00000000000e73f1
- (double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2;	// IMP=0x00000000000e7393
- (void)setSizeLabelHidden:(_Bool)arg1;	// IMP=0x00000000000e7376
- (void)setSize:(id)arg1;	// IMP=0x00000000000e7326
- (void)_setupSubviewsAndConstraints;	// IMP=0x00000000000e68ac
- (id)initWithSpecifier:(id)arg1;	// IMP=0x00000000000e66f8

@end

