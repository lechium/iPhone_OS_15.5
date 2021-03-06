//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NSLayoutConstraint, UILabel, UILayoutGuide;

@interface CKPinningOnboardingTitleCell : UICollectionViewCell
{
    _Bool _isInCollapsedState;	// 8 = 0x8
    long long _pinnedConversationViewLayoutStyle;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UILabel *_subtitleLabel;	// 32 = 0x20
    UILayoutGuide *_labelMarginGuide;	// 40 = 0x28
    NSLayoutConstraint *_leadingMarginLayoutConstraint;	// 48 = 0x30
    NSLayoutConstraint *_trailingMarginLayoutConstraint;	// 56 = 0x38
    NSLayoutConstraint *_subtitleSpacingConstraint;	// 64 = 0x40
}

+ (id)reuseIdentifier;	// IMP=0x000000000033840a
- (void).cxx_destruct;	// IMP=0x0000000000339647
@property(retain, nonatomic) NSLayoutConstraint *subtitleSpacingConstraint; // @synthesize subtitleSpacingConstraint=_subtitleSpacingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *trailingMarginLayoutConstraint; // @synthesize trailingMarginLayoutConstraint=_trailingMarginLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingMarginLayoutConstraint; // @synthesize leadingMarginLayoutConstraint=_leadingMarginLayoutConstraint;
@property(retain, nonatomic) UILayoutGuide *labelMarginGuide; // @synthesize labelMarginGuide=_labelMarginGuide;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool isInCollapsedState; // @synthesize isInCollapsedState=_isInCollapsedState;
@property(nonatomic) long long pinnedConversationViewLayoutStyle; // @synthesize pinnedConversationViewLayoutStyle=_pinnedConversationViewLayoutStyle;
- (double)pinningOnboardingMarginForPinnedConversationViewLayoutStyle:(long long)arg1;	// IMP=0x0000000000339505
- (double)pinningOnboardingSubtitleSpacingForPinnedConversationViewLayoutStyle:(long long)arg1;	// IMP=0x00000000003394e6
- (id)pinningOnboardingTitleLabelFontForPinnedConversationViewLayoutStyle:(long long)arg1 inCollapsedState:(_Bool)arg2;	// IMP=0x0000000000339423
- (void)setPinnedConversationViewLayoutStyle:(long long)arg1 collapsedState:(_Bool)arg2;	// IMP=0x00000000003393d7
- (void)updateConstraints;	// IMP=0x000000000033923d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000338417

@end

