//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, NSString, UILayoutGuide, _MKSmallCalloutPassthroughButton, _MKUILabel;
@protocol _MKCalloutAccessoryView;

__attribute__((visibility("hidden")))
@interface MKSmallCalloutView : UIView
{
    _MKUILabel *_titleLabel;	// 8 = 0x8
    _MKUILabel *_subtitleLabel;	// 16 = 0x10
    UIView<_MKCalloutAccessoryView> *_leftView;	// 24 = 0x18
    UIView<_MKCalloutAccessoryView> *_rightView;	// 32 = 0x20
    UIView<_MKCalloutAccessoryView> *_externalLeftView;	// 40 = 0x28
    UIView<_MKCalloutAccessoryView> *_externalRightView;	// 48 = 0x30
    UIView<_MKCalloutAccessoryView> *_externalDetailView;	// 56 = 0x38
    UIView<_MKCalloutAccessoryView> *_detailView;	// 64 = 0x40
    struct CGSize _preferredContentSize;	// 72 = 0x48
    _Bool _shouldPositionTitleForMapsTransitionMovingSideways;	// 88 = 0x58
    _MKSmallCalloutPassthroughButton *_maskedContainerView;	// 96 = 0x60
    UIView *_unmaskedContainerView;	// 104 = 0x68
    CDStruct_f381021a _metrics;	// 112 = 0x70
    _Bool _needsPreferredContentSizeUpdate;	// 208 = 0xd0
    NSLayoutConstraint *_minWidthConstraint;	// 216 = 0xd8
    NSLayoutConstraint *_maxWidthConstraint;	// 224 = 0xe0
    NSLayoutConstraint *_unmaskedContainerLeadingConstraint;	// 232 = 0xe8
    NSLayoutConstraint *_unmaskedContainerTrailingConstraint;	// 240 = 0xf0
    NSArray *_titleLabelConstraints;	// 248 = 0xf8
    NSLayoutConstraint *_titleBaselineFromTopMinimumConstraint;	// 256 = 0x100
    NSLayoutConstraint *_titleBaselineFromTopConstraint;	// 264 = 0x108
    NSLayoutConstraint *_titleMinimumBaselineToBottomConstraint;	// 272 = 0x110
    UILayoutGuide *_centerContentLeadingGuide;	// 280 = 0x118
    UILayoutGuide *_centerContentTrailingGuide;	// 288 = 0x120
    NSLayoutConstraint *_leftViewMinCalloutWidthConstraint;	// 296 = 0x128
    NSLayoutConstraint *_leftViewHorizontalPositionConstraint;	// 304 = 0x130
    NSLayoutConstraint *_leftViewTopSpacerBottomConstraint;	// 312 = 0x138
    NSLayoutConstraint *_leftViewCenterContentMarginConstraint;	// 320 = 0x140
    UILayoutGuide *_leftViewTopSpacer;	// 328 = 0x148
    UILayoutGuide *_leftViewLeftSpacer;	// 336 = 0x150
    NSLayoutConstraint *_rightViewHorizontalPositionConstraint;	// 344 = 0x158
    NSLayoutConstraint *_rightViewTopSpacerBottomConstraint;	// 352 = 0x160
    NSLayoutConstraint *_rightViewCenterContentMarginConstraint;	// 360 = 0x168
    UILayoutGuide *_rightViewTopSpacer;	// 368 = 0x170
    UILayoutGuide *_rightViewRightSpacer;	// 376 = 0x178
    NSLayoutConstraint *_detailViewMinTopConstraint;	// 384 = 0x180
    NSLayoutConstraint *_detailViewBottomConstraint;	// 392 = 0x188
    NSLayoutConstraint *_detailViewTrailingConstraint;	// 400 = 0x190
    _Bool _parallaxEnabled;	// 408 = 0x198
    UIView *_titlesContainerView;	// 416 = 0x1a0
}

- (void).cxx_destruct;	// IMP=0x00000000002a6434
@property(nonatomic) _Bool parallaxEnabled; // @synthesize parallaxEnabled=_parallaxEnabled;
@property(readonly, nonatomic) UIView *titlesContainerView; // @synthesize titlesContainerView=_titlesContainerView;
- (_Bool)canDisplayCompleteTitleWhenExpanded;	// IMP=0x00000000002a63fb
- (void)setDetailView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000002a59a8
@property(retain, nonatomic) UIView *detailView;
- (void)setRightView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000002a4ca0
- (void)setLeftView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000002a3e3b
@property(retain, nonatomic) UIView *rightView;
@property(retain, nonatomic) UIView *leftView;
@property(copy, nonatomic) NSString *calloutSubtitle;
- (void)setCalloutSubtitle:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000002a3b05
@property(copy, nonatomic) NSString *calloutTitle;
- (id)_maskedContainerView;	// IMP=0x00000000002a3909
@property(readonly, nonatomic) struct CGSize preferredContentSize; // @synthesize preferredContentSize=_preferredContentSize;
- (void)_updatePreferredContentSize;	// IMP=0x00000000002a386a
- (void)_updatePreferredContentSizeIfNeeded;	// IMP=0x00000000002a3849
- (void)_setNeedsUpdatePreferredContentSize;	// IMP=0x00000000002a3838
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000002a3809
- (void)beginMapsTransitionMovingSideways;	// IMP=0x00000000002a3774
- (void)reset;	// IMP=0x00000000002a3710
- (void)dealloc;	// IMP=0x00000000002a369b
@property(nonatomic) double maximumWidth;
@property(nonatomic) double minimumWidth;
- (void)_contentSizeCategoryDidChange:(id)arg1;	// IMP=0x00000000002a33ed
- (id)initWithFrame:(struct CGRect)arg1 metrics:(CDStruct_f381021a)arg2;	// IMP=0x00000000002a208e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002a1fec

@end
