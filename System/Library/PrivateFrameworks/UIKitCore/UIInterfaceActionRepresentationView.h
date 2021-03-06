//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIFocusEnvironment-Protocol.h>
#import <UIKitCore/UIInterfaceActionDisplayPropertyObserver-Protocol.h>
#import <UIKitCore/UISpringLoadedInteractionSupporting-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, UIInterfaceAction, UIInterfaceActionVisualStyle, UISpringLoadedInteraction, UIView;
@protocol UIFocusEnvironment, UIFocusItemContainer, UIInterfaceActionVisualBackgroundDisplaying;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionRepresentationView <UIFocusEnvironment, UISpringLoadedInteractionSupporting, UIInterfaceActionDisplayPropertyObserver>
{
    _Bool _hasLoadedBackgroundView;	// 120 = 0x78
    _Bool _canKeepContentsInHierarchy;	// 121 = 0x79
    _Bool _hasLoadedContentFirstTime;	// 122 = 0x7a
    _Bool _enforcedCanRemoveContentFromHierarchyWhenNotVisible;	// 123 = 0x7b
    _Bool _enforcedCanRemoveContentFromHierarchyWhenNotVisibleValue;	// 124 = 0x7c
    _Bool _contentsInsertedIntoViewHierarchy;	// 125 = 0x7d
    _Bool _ownsActionContent;	// 126 = 0x7e
    _Bool _highlighted;	// 127 = 0x7f
    _Bool _pressed;	// 128 = 0x80
    _Bool _canRemoveContentFromHierarchyWhenNotVisible;	// 129 = 0x81
    UIInterfaceAction *_action;	// 136 = 0x88
    unsigned long long _visualCornerPosition;	// 144 = 0x90
    id _actionViewStateContext;	// 152 = 0x98
    UIView<UIInterfaceActionVisualBackgroundDisplaying> *_backgroundHighlightView;	// 160 = 0xa0
    NSLayoutConstraint *_minimumWidthConstraint;	// 168 = 0xa8
    NSLayoutConstraint *_minimumHeightConstraint;	// 176 = 0xb0
    NSArray *_viewsToDisappearWhenHighlighted;	// 184 = 0xb8
    NSString *_sectionID;	// 192 = 0xc0
    UISpringLoadedInteraction *_interactionForSpringLoading;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x000000000003e0ab
@property(retain, nonatomic) UISpringLoadedInteraction *interactionForSpringLoading; // @synthesize interactionForSpringLoading=_interactionForSpringLoading;
@property(retain, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property(nonatomic) _Bool canRemoveContentFromHierarchyWhenNotVisible; // @synthesize canRemoveContentFromHierarchyWhenNotVisible=_canRemoveContentFromHierarchyWhenNotVisible;
@property(retain, nonatomic) NSArray *viewsToDisappearWhenHighlighted; // @synthesize viewsToDisappearWhenHighlighted=_viewsToDisappearWhenHighlighted;
@property(readonly, nonatomic) NSLayoutConstraint *minimumHeightConstraint; // @synthesize minimumHeightConstraint=_minimumHeightConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *minimumWidthConstraint; // @synthesize minimumWidthConstraint=_minimumWidthConstraint;
@property(readonly, nonatomic) UIView<UIInterfaceActionVisualBackgroundDisplaying> *backgroundHighlightView; // @synthesize backgroundHighlightView=_backgroundHighlightView;
@property(retain, nonatomic) id actionViewStateContext; // @synthesize actionViewStateContext=_actionViewStateContext;
@property(nonatomic, getter=isPressed) _Bool pressed; // @synthesize pressed=_pressed;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) unsigned long long visualCornerPosition; // @synthesize visualCornerPosition=_visualCornerPosition;
@property(nonatomic) _Bool ownsActionContent; // @synthesize ownsActionContent=_ownsActionContent;
@property(readonly, nonatomic) UIInterfaceAction *action; // @synthesize action=_action;
@property(nonatomic, setter=_setContentsInsertedIntoViewHierarchy:) _Bool _contentsInsertedIntoViewHierarchy; // @synthesize _contentsInsertedIntoViewHierarchy;
- (id)_actionViewState;	// IMP=0x000000000003df0e
- (void)_clearBackgroundPressedState;	// IMP=0x000000000003deef
- (id)_viewDisplayingBackground;	// IMP=0x000000000003deda
- (_Bool)_isVisibleWithinContainmentAncestor;	// IMP=0x000000000003ddd3
- (_Bool)_canLoadContentsIntoHierarchy;	// IMP=0x000000000003dd9f
- (void)_removeLoadedContentsFromHierarchyIfNotVisible;	// IMP=0x000000000003dd4c
- (void)_addLoadedContentsToHierarchyIfAllowed;	// IMP=0x000000000003dd03
- (void)_addLoadedContentsToHierarchyFirstTime;	// IMP=0x000000000003dc6d
- (void)_updateLoadedContentsHierarchyByInsertingOrRemovingIfNecessary;	// IMP=0x000000000003dc42
- (void)_loadContentsIntoHierarchyAndPrepareIfNecessary;	// IMP=0x000000000003dbf6
- (void)_updateHighlightAndPressedFeedback;	// IMP=0x000000000003d939
- (_Bool)isFocused;	// IMP=0x000000000003d8c4
- (void)_reloadBackgroundHighlightView;	// IMP=0x000000000003d48e
- (void)_applyVisualStyleToBackgroundViewAndHighlighting;	// IMP=0x000000000003d47c
- (void)_applyVisualStyleToLayoutMargins;	// IMP=0x000000000003d38c
- (void)_initializeHorizontalMarginsForAction;	// IMP=0x000000000003d2c7
- (void)_setHorizontalMargins:(struct UIEdgeInsets)arg1 preservesSuperviewLayoutMargins:(_Bool)arg2;	// IMP=0x000000000003d1de
- (_Bool)_fittingContentViewHasItsOwnActiveMinimumSizeConstraintsWithSize:(struct CGSize)arg1;	// IMP=0x000000000003d15f
- (void)_applyVisualStyleToMinimumSizeConstraints;	// IMP=0x000000000003cfe3
- (void)_applyVisualStyle;	// IMP=0x000000000003cfa8
- (void)_didScroll;	// IMP=0x000000000003cf96
- (void)_showVisualFeedbackForPressed:(_Bool)arg1;	// IMP=0x000000000003cf73
- (_Bool)_shouldShowPressFeedbackForEventWithPresses:(id)arg1;	// IMP=0x000000000003ced2
- (_Bool)_handleVisualFeedbackForPress:(id)arg1 pressed:(_Bool)arg2;	// IMP=0x000000000003ce8e
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000003ce05
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000003cd7c
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000003ccf0
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000003cc64
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000003cb2a
- (_Bool)canBecomeFocused;	// IMP=0x000000000003cae6
- (_Bool)_showsFocusForFocusedView:(id)arg1;	// IMP=0x000000000003ca70
@property(nonatomic, getter=isSpringLoaded) _Bool springLoaded; // @dynamic springLoaded;
- (struct CGRect)_fittingContentSizingViewFrameInBounds:(struct CGRect)arg1;	// IMP=0x000000000003c89f
- (struct CGSize)_fittingContentSizeWithFittingViewSize:(struct CGSize)arg1;	// IMP=0x000000000003c83a
- (struct UIEdgeInsets)_fittingContentSizingViewMargins;	// IMP=0x000000000003c808
- (id)_fittingContentSizingView;	// IMP=0x000000000003c7ff
- (id)__fittingContentSizingViewAllowingSelf;	// IMP=0x000000000003c7ba
- (id)__fittingContentSizingViewIfNotSelf;	// IMP=0x000000000003c776
- (void)_updateFittingContentSizingViewToFitSize;	// IMP=0x000000000003c697
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000003c685
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;	// IMP=0x000000000003c5a7
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000003c4f5
- (void)layoutMarginsDidChange;	// IMP=0x000000000003c4b4
- (void)invalidateIntrinsicContentSize;	// IMP=0x000000000003c447
- (void)layoutSubviews;	// IMP=0x000000000003c346
- (void)updateConstraints;	// IMP=0x000000000003c308
- (void)interfaceAction:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2;	// IMP=0x000000000003c2f6
- (void)interfaceAction:(id)arg1 reloadDisplayedContentActionProperties:(id)arg2;	// IMP=0x000000000003c210
- (void)_enforceActionRepresentationViewsCanRemoveContentFromHierarchyWhenNotVisible:(_Bool)arg1;	// IMP=0x000000000003c1c8
- (_Bool)hasLayoutHeightConstraintsIdenticalToRepresentationView:(id)arg1;	// IMP=0x000000000003c1c0
@property(readonly, nonatomic) UIInterfaceActionVisualStyle *visualStyle;
- (void)invokeInterfaceAction;	// IMP=0x000000000003bff8
- (void)updateContentsInsertedIntoHierarchy;	// IMP=0x000000000003bfcf
- (void)loadContents;	// IMP=0x000000000003bfc9
- (void)dealloc;	// IMP=0x000000000003bf7d
@property(readonly, copy) NSString *description;
- (id)initWithAction:(id)arg1;	// IMP=0x000000000003bd23

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property(readonly, nonatomic) id <UIFocusItemContainer> focusItemContainer;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak id <UIFocusEnvironment> parentFocusEnvironment;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
@property(readonly) Class superclass;

@end

