//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppSupportUI/NUIContentScrollView.h>

#import <SearchUI/NUIContainerViewDelegate-Protocol.h>
#import <SearchUI/UIScrollViewDelegate-Protocol.h>

@class NSArray, NSMapTable, NSMutableSet, NSString, NUIContainerStackView, SearchUIHorizontallyScrollingMoreResultsButtonController, UIViewController;
@protocol SearchUIFeedbackDelegate;

@interface SearchUIHorizontallyScrollingContainerView : NUIContentScrollView <NUIContainerViewDelegate, UIScrollViewDelegate>
{
    id <SearchUIFeedbackDelegate> _feedbackDelegate;	// 8 = 0x8
    NSArray *_scrollableCardSectionRowModels;	// 16 = 0x10
    NUIContainerStackView *_stackViewToScroll;	// 24 = 0x18
    NSArray *_buttonControllers;	// 32 = 0x20
    SearchUIHorizontallyScrollingMoreResultsButtonController *_seeMoreButtonController;	// 40 = 0x28
    NSMutableSet *_visibleResultsAlreadySentBack;	// 48 = 0x30
    NSMapTable *_buttonControllersForViews;	// 56 = 0x38
    UIViewController *_presentedViewController;	// 64 = 0x40
    double _defaultArrangedSubviewWidth;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000645d5
@property double defaultArrangedSubviewWidth; // @synthesize defaultArrangedSubviewWidth=_defaultArrangedSubviewWidth;
@property(retain, nonatomic) UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property(retain, nonatomic) NSMapTable *buttonControllersForViews; // @synthesize buttonControllersForViews=_buttonControllersForViews;
@property(retain, nonatomic) NSMutableSet *visibleResultsAlreadySentBack; // @synthesize visibleResultsAlreadySentBack=_visibleResultsAlreadySentBack;
@property(retain, nonatomic) SearchUIHorizontallyScrollingMoreResultsButtonController *seeMoreButtonController; // @synthesize seeMoreButtonController=_seeMoreButtonController;
@property(retain, nonatomic) NSArray *buttonControllers; // @synthesize buttonControllers=_buttonControllers;
@property(retain, nonatomic) NUIContainerStackView *stackViewToScroll; // @synthesize stackViewToScroll=_stackViewToScroll;
@property(copy, nonatomic) NSArray *scrollableCardSectionRowModels; // @synthesize scrollableCardSectionRowModels=_scrollableCardSectionRowModels;
@property(nonatomic) __weak id <SearchUIFeedbackDelegate> feedbackDelegate; // @synthesize feedbackDelegate=_feedbackDelegate;
- (void)modalViewControllerClosed;	// IMP=0x0000000000064434
- (void)scrollingButtonPressed:(id)arg1;	// IMP=0x0000000000064078
- (void)sendVisibleFeedback;	// IMP=0x0000000000063a67
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000000063a55
- (void)containerViewDidLayoutArrangedSubviews:(id)arg1;	// IMP=0x0000000000063a43
- (double)widthForArrangedSubview:(id)arg1;	// IMP=0x000000000006394e
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x0000000000063666
- (struct CGRect)containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect)arg3;	// IMP=0x0000000000063575
- (struct CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize)arg2 forArrangedSubview:(id)arg3;	// IMP=0x0000000000063402
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000063010
- (id)init;	// IMP=0x0000000000062460

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

