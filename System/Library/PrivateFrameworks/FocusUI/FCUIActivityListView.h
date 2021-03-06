//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIScrollView.h>

#import <FocusUI/FCUIContentSizeCategoryAdjusting-Protocol.h>

@class FCUIActivityListContentView, NSArray, NSString, UIView;
@protocol FCUIActivityDisplaying><FCUIExpandingContracting;

@interface FCUIActivityListView : UIScrollView <FCUIContentSizeCategoryAdjusting>
{
    FCUIActivityListContentView *_contentView;	// 8 = 0x8
    UIView<FCUIActivityDisplaying><FCUIExpandingContracting> *_isolatedActivityView;	// 16 = 0x10
    struct CGPoint _initialContentOffset;	// 24 = 0x18
    _Bool _contentSizeValid;	// 40 = 0x28
    _Bool _footerPinnedToBottom;	// 41 = 0x29
}

- (void).cxx_destruct;	// IMP=0x0000000000015873
@property(nonatomic, getter=isFooterPinnedToBottom) _Bool footerPinnedToBottom; // @synthesize footerPinnedToBottom=_footerPinnedToBottom;
- (struct CGRect)_setContractedFrame:(struct CGRect)arg1 viaResizeWithRepresentedActivity:(id)arg2 transitionCoordinator:(id)arg3;	// IMP=0x00000000000154cd
- (struct CGRect)_setContractedFrame:(struct CGRect)arg1 viaScaleWithRepresentedActivity:(id)arg2 transitionCoordinator:(id)arg3;	// IMP=0x0000000000014e4c
- (id)_orderedSubviewsIncludingHeader:(_Bool)arg1 andFooter:(_Bool)arg2;	// IMP=0x0000000000014cf4
- (id)_activityViewForRepresentedActivity:(id)arg1;	// IMP=0x0000000000014b97
- (void)_invalidateContentSize;	// IMP=0x0000000000014b5e
- (void)_recalculateContentSize;	// IMP=0x000000000001493e
- (struct CGRect)_contentViewFrameForContentSize:(struct CGSize)arg1 inBounds:(struct CGRect)arg2;	// IMP=0x00000000000148f0
- (struct CGSize)_contentSizeForBounds:(struct CGRect)arg1;	// IMP=0x00000000000148a0
- (void)_configureContentViewIfNecessary;	// IMP=0x00000000000147ec
- (_Bool)adjustForContentSizeCategoryChange;	// IMP=0x0000000000014799
@property(nonatomic) _Bool adjustsFontForContentSizeCategory;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;	// IMP=0x000000000001469a
- (void)layoutSubviews;	// IMP=0x000000000001464c
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000000145ab
- (void)setNeedsLayout;	// IMP=0x000000000001455f
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000014542
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000014512
- (void)endIsolation;	// IMP=0x0000000000014363
- (void)isolateActivityView:(id)arg1 withInset:(struct UIEdgeInsets)arg2;	// IMP=0x00000000000140be
- (void)setExpandedActivityView:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000013d6d
- (struct CGRect)setContractedFrame:(struct CGRect)arg1 representedActivity:(id)arg2 presentationStyle:(long long)arg3 transitionCoordinator:(id)arg4;	// IMP=0x0000000000013d00
- (struct CGRect)setExpandedFrame:(struct CGRect)arg1 initialFrame:(struct CGRect)arg2 representedActivity:(id)arg3 presentationStyle:(long long)arg4 transitionCoordinator:(id)arg5;	// IMP=0x0000000000013c7e
- (struct CGRect)_setExpandedFrame:(struct CGRect)arg1 initialFrame:(struct CGRect)arg2 viaResizeWithRepresentedActivity:(id)arg3 transitionCoordinator:(id)arg4;	// IMP=0x0000000000013629
- (struct CGRect)_setExpandedFrame:(struct CGRect)arg1 initialFrame:(struct CGRect)arg2 viaScaleWithRepresentedActivity:(id)arg3 transitionCoordinator:(id)arg4;	// IMP=0x0000000000012f38
- (struct CGRect)_setExpandedFrame:(struct CGRect)arg1 initialFrame:(struct CGRect)arg2 representedActivity:(id)arg3 anchorActivityView:(id)arg4 collapsedSizeBlock:(CDUnknownBlockType)arg5 preludeBlock:(CDUnknownBlockType)arg6 activityViewAnimationBlock:(CDUnknownBlockType)arg7 transitionCoordinator:(id)arg8;	// IMP=0x0000000000012186
@property(retain, nonatomic) UIView *footerView;
@property(retain, nonatomic) UIView *headerView;
@property(copy, nonatomic) NSArray *activityViews;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000011e42

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *preferredContentSizeCategory;
@property(readonly) Class superclass;

@end

