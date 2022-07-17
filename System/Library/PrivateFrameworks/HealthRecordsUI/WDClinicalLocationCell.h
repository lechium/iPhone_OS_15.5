//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UIStackView, WDBrandLogoView, WDClinicalSourcesDataProvider;
@protocol HKClinicalBrandable;

__attribute__((visibility("hidden")))
@interface WDClinicalLocationCell : UITableViewCell
{
    id <HKClinicalBrandable> _brandable;	// 8 = 0x8
    WDClinicalSourcesDataProvider *_dataProvider;	// 16 = 0x10
    WDBrandLogoView *_logoView;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UILabel *_subtitleLabel;	// 40 = 0x28
    UILabel *_detailLabel;	// 48 = 0x30
    UIStackView *_stackView;	// 56 = 0x38
}

+ (id)defaultReuseIdentifier;	// IMP=0x00000000000152cf
- (void).cxx_destruct;	// IMP=0x0000000000016029
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(readonly, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) WDBrandLogoView *logoView; // @synthesize logoView=_logoView;
@property(readonly, nonatomic) WDClinicalSourcesDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(readonly, nonatomic) id <HKClinicalBrandable> brandable; // @synthesize brandable=_brandable;
- (void)willDisplay;	// IMP=0x0000000000015de3
- (void)prepareForReuse;	// IMP=0x0000000000015d9e
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000015ca4
- (void)_updateForContentSizeCategory:(id)arg1;	// IMP=0x0000000000015c9e
- (void)_updateForCurrentSizeCategory;	// IMP=0x0000000000015bdf
- (void)_updateContentWithBrandable:(id)arg1 dataProvider:(id)arg2;	// IMP=0x0000000000015a83
- (void)setBrandable:(id)arg1 dataProvider:(id)arg2;	// IMP=0x00000000000159de
- (void)_configureDistinctIntrinsicLayoutPrioritiesForLabels;	// IMP=0x00000000000157d9
- (void)_setUpConstraints;	// IMP=0x0000000000015774
- (void)_setupSubviews;	// IMP=0x00000000000152d9
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000015226

@end
