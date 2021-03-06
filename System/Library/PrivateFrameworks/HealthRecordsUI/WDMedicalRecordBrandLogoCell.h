//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImageView, WDBrandLogoView, WDClinicalSourcesDataProvider, WDMedicalRecordBrandView;
@protocol HKClinicalBrandable;

__attribute__((visibility("hidden")))
@interface WDMedicalRecordBrandLogoCell
{
    _Bool _showDisclosureChevron;	// 8 = 0x8
    UIImageView *_disclosureChevronView;	// 16 = 0x10
    WDBrandLogoView *_logoView;	// 24 = 0x18
    WDMedicalRecordBrandView *_brandView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001b193
@property(readonly, nonatomic) WDMedicalRecordBrandView *brandView; // @synthesize brandView=_brandView;
@property(readonly, nonatomic) WDBrandLogoView *logoView; // @synthesize logoView=_logoView;
@property(readonly, nonatomic) UIImageView *disclosureChevronView; // @synthesize disclosureChevronView=_disclosureChevronView;
@property(nonatomic, getter=showsDisclosureChevron) _Bool showDisclosureChevron; // @synthesize showDisclosureChevron=_showDisclosureChevron;
@property(nonatomic) double logoSize;
@property(readonly, nonatomic) WDClinicalSourcesDataProvider *dataProvider;
@property(readonly, nonatomic) id <HKClinicalBrandable> brandable;
- (void)setBrandable:(id)arg1 dataProvider:(id)arg2;	// IMP=0x000000000001af8b
- (void)_updateBasedOnAccessibilityCategory:(_Bool)arg1;	// IMP=0x000000000001af14
- (void)_updateContentWithBrandable:(id)arg1 dataProvider:(id)arg2;	// IMP=0x000000000001ae8e
- (id)_contentViewMarginsGuide;	// IMP=0x000000000001ae3e
- (void)updateConstraints;	// IMP=0x000000000001ab2f
- (void)prepareForReuse;	// IMP=0x000000000001aac1
- (void)setUpConstraints;	// IMP=0x000000000001a7df
- (void)setupSubviews;	// IMP=0x000000000001a62e
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000001a5e0

@end

