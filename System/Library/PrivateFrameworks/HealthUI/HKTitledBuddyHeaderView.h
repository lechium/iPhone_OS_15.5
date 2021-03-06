//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, UIButton, UILabel, UITextView;
@protocol HKTitledBuddyHeaderViewDelegate;

@interface HKTitledBuddyHeaderView : UIView
{
    UITextView *_bodyTextView;	// 8 = 0x8
    UIButton *_optionalLinkButton;	// 16 = 0x10
    NSString *_bodyText;	// 24 = 0x18
    long long _bodyTextAlignment;	// 32 = 0x20
    NSLayoutConstraint *_logoTitleGapConstraint;	// 40 = 0x28
    NSLayoutConstraint *_bodyZeroHeightConstraint;	// 48 = 0x30
    NSLayoutConstraint *_bodyBottomConstraint;	// 56 = 0x38
    NSLayoutConstraint *_titleBottomConstraint;	// 64 = 0x40
    NSLayoutConstraint *_bodyFirstBaselineConstraint;	// 72 = 0x48
    NSLayoutConstraint *_bodyLastBaselineToLinkConstraint;	// 80 = 0x50
    NSLayoutConstraint *_linkButtonLastBaselineToBottomConstraint;	// 88 = 0x58
    NSLayoutConstraint *_titleLabelBaselineConstraint;	// 96 = 0x60
    id <HKTitledBuddyHeaderViewDelegate> _delegate;	// 104 = 0x68
    UILabel *_titleLabel;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000015c01e
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <HKTitledBuddyHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_attributedBodyTextWithString:(id)arg1 alignment:(long long)arg2;	// IMP=0x000000000015bd3e
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000015bc44
- (void)deactivateDefaultTitleLabelBaselineConstraint;	// IMP=0x000000000015bbaf
- (void)_linkButtonTapped:(id)arg1;	// IMP=0x000000000015bb63
- (void)setBodyText:(id)arg1 alignment:(long long)arg2;	// IMP=0x000000000015ba9f
- (id)bodyTextView;	// IMP=0x000000000015ba8a
@property(nonatomic) long long bodyTextAlignment;
@property(retain, nonatomic) NSString *bodyText;
@property(retain, nonatomic) NSString *titleText;
- (double)bottomPadding;	// IMP=0x000000000015b855
- (void)_updateBodyTextViewConstraints;	// IMP=0x000000000015b742
- (void)_updateForCurrentSizeCategory;	// IMP=0x000000000015b4d8
- (id)initWithTopInset:(double)arg1 linkButtonTitle:(id)arg2;	// IMP=0x000000000015aac6

@end

