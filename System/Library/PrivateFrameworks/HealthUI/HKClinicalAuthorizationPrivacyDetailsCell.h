//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class HKSource, NSLayoutConstraint, UITextView, _HKClinicalBulletedListLayoutManager;

@interface HKClinicalAuthorizationPrivacyDetailsCell : UITableViewCell
{
    HKSource *_source;	// 8 = 0x8
    NSLayoutConstraint *_superviewTopToContentsTextViewFirstBaselineConstraint;	// 16 = 0x10
    NSLayoutConstraint *_contentsTextViewLastBaselineToSuperviewBottomConstraint;	// 24 = 0x18
    UITextView *_contentsTextView;	// 32 = 0x20
    _HKClinicalBulletedListLayoutManager *_bulletLayoutManager;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000009d423
@property(readonly, nonatomic) _HKClinicalBulletedListLayoutManager *bulletLayoutManager; // @synthesize bulletLayoutManager=_bulletLayoutManager;
@property(readonly, nonatomic) UITextView *contentsTextView; // @synthesize contentsTextView=_contentsTextView;
@property(readonly, nonatomic) NSLayoutConstraint *contentsTextViewLastBaselineToSuperviewBottomConstraint; // @synthesize contentsTextViewLastBaselineToSuperviewBottomConstraint=_contentsTextViewLastBaselineToSuperviewBottomConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *superviewTopToContentsTextViewFirstBaselineConstraint; // @synthesize superviewTopToContentsTextViewFirstBaselineConstraint=_superviewTopToContentsTextViewFirstBaselineConstraint;
@property(nonatomic) __weak HKSource *source; // @synthesize source=_source;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000009d2cc
- (void)_updateForCurrentContentSizeCategory;	// IMP=0x000000000009d127
- (id)_bulletContentFont;	// IMP=0x000000000009d104
- (id)_bulletFont;	// IMP=0x000000000009d0dc
- (id)_bodyEmph;	// IMP=0x000000000009d0b4
- (id)_attributedStringForBullet;	// IMP=0x000000000009cfa1
- (id)_bulletContentParagraphStyle;	// IMP=0x000000000009cea6
- (id)_attributedStringForBulletAtIndex:(long long)arg1;	// IMP=0x000000000009cd1c
- (id)_localizedBulletContentStringForBulletAtIndex:(long long)arg1;	// IMP=0x000000000009cbe4
- (id)_titleParagraphStyle;	// IMP=0x000000000009cb72
- (id)_attributedTitleString;	// IMP=0x000000000009ca00
- (id)_localizedTitleString;	// IMP=0x000000000009c97d
- (id)_attributedContentsTextViewStringForCurrentContentSizeCategory;	// IMP=0x000000000009c8be
- (id)_createContentsTextViewWithLayoutManager:(id)arg1;	// IMP=0x000000000009c6e3
- (void)_setUpConstraints;	// IMP=0x000000000009c426
- (void)_setUpSubviews;	// IMP=0x000000000009c351
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000009c23a

@end
