//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class FCMapTable, FROnboardingAnimationEngine, FROnboardingLayout, FROnboardingSubscribableItemImageCache, FRSpinnerView, NSDate, NSHashTable, NSMutableArray, NSString, UIActivityIndicatorView, UIColor, UIScrollView, UIView;
@protocol FROnboardingCardViewControllerDelegate;

@interface FROnboardingCardViewController : UIViewController
{
    struct multimap<float, FROnboardingSubscribableItem *, std::less<float>, std::allocator<std::pair<const float, FROnboardingSubscribableItem *>>> yToSubscribableItems;	// 8 = 0x8
    _Bool _eventRecordingDisabled;	// 32 = 0x20
    _Bool _initialLayoutMode;	// 33 = 0x21
    long long _currentState;	// 40 = 0x28
    id <FROnboardingCardViewControllerDelegate> _delegate;	// 48 = 0x30
    UIScrollView *_scrollView;	// 56 = 0x38
    double _topMargin;	// 64 = 0x40
    double _distanceOfLastScrollMoment;	// 72 = 0x48
    FROnboardingAnimationEngine *_animationEngine;	// 80 = 0x50
    FROnboardingLayout *_currentLayout;	// 88 = 0x58
    NSMutableArray *_subscribableItems;	// 96 = 0x60
    NSHashTable *_selectedItems;	// 104 = 0x68
    UIColor *_currentSystemBackgroundColor;	// 112 = 0x70
    FCMapTable *_subscribableItemsToOnScreenCells;	// 120 = 0x78
    NSMutableArray *_cellReuseQueue;	// 128 = 0x80
    FROnboardingSubscribableItemImageCache *_imageCache;	// 136 = 0x88
    NSDate *_lastTimeBumpedIntoBottomOfScrollView;	// 144 = 0x90
    UIActivityIndicatorView *_spinner;	// 152 = 0x98
    UIView *_spinnerBackground;	// 160 = 0xa0
    FRSpinnerView *_spinnerView;	// 168 = 0xa8
    struct CGPoint _lastContentOffsetOnScroll;	// 176 = 0xb0
}

- (id).cxx_construct;	// IMP=0x00200000000d5365
- (void).cxx_destruct;	// IMP=0x00100000000d5255
@property(retain, nonatomic) FRSpinnerView *spinnerView; // @synthesize spinnerView=_spinnerView;
@property(retain, nonatomic) UIView *spinnerBackground; // @synthesize spinnerBackground=_spinnerBackground;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(nonatomic) _Bool initialLayoutMode; // @synthesize initialLayoutMode=_initialLayoutMode;
@property(retain, nonatomic) NSDate *lastTimeBumpedIntoBottomOfScrollView; // @synthesize lastTimeBumpedIntoBottomOfScrollView=_lastTimeBumpedIntoBottomOfScrollView;
@property(retain, nonatomic) FROnboardingSubscribableItemImageCache *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) NSMutableArray *cellReuseQueue; // @synthesize cellReuseQueue=_cellReuseQueue;
@property(retain, nonatomic) FCMapTable *subscribableItemsToOnScreenCells; // @synthesize subscribableItemsToOnScreenCells=_subscribableItemsToOnScreenCells;
@property(retain, nonatomic) UIColor *currentSystemBackgroundColor; // @synthesize currentSystemBackgroundColor=_currentSystemBackgroundColor;
@property(retain, nonatomic) NSHashTable *selectedItems; // @synthesize selectedItems=_selectedItems;
@property(retain, nonatomic) NSMutableArray *subscribableItems; // @synthesize subscribableItems=_subscribableItems;
@property(retain, nonatomic) FROnboardingLayout *currentLayout; // @synthesize currentLayout=_currentLayout;
@property(retain, nonatomic) FROnboardingAnimationEngine *animationEngine; // @synthesize animationEngine=_animationEngine;
@property(nonatomic) double distanceOfLastScrollMoment; // @synthesize distanceOfLastScrollMoment=_distanceOfLastScrollMoment;
@property(nonatomic) struct CGPoint lastContentOffsetOnScroll; // @synthesize lastContentOffsetOnScroll=_lastContentOffsetOnScroll;
@property(nonatomic) _Bool eventRecordingDisabled; // @synthesize eventRecordingDisabled=_eventRecordingDisabled;
@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <FROnboardingCardViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long currentState; // @synthesize currentState=_currentState;
- (struct CGPoint)_contentOffsetForNewFrame:(struct CGRect)arg1 oldFrame:(struct CGRect)arg2 newContentSize:(struct CGSize)arg3 andOldContentSize:(struct CGSize)arg4;	// IMP=0x00100000000d4a0c
- (void)_setBlurred:(_Bool)arg1 animated:(_Bool)arg2 duration:(double)arg3;	// IMP=0x00100000000d3b0b
- (void)_updateScrollViewContentSizeWithWidth:(double)arg1;	// IMP=0x00100000000d3a67
- (void)_updateScrollViewContentSize;	// IMP=0x00100000000d39d0
- (void)_enqueueCell:(id)arg1;	// IMP=0x00100000000d390d
- (id)_dequeueCell;	// IMP=0x00100000000d353b
- (void)_sendFeedCellExposureEventWithCell:(id)arg1 subscribableItem:(id)arg2;	// IMP=0x00100000000d3149
- (void)_setUpCell:(id)arg1 forItem:(id)arg2;	// IMP=0x00100000000d2d17
- (void)cancelCacheOperations;	// IMP=0x00100000000d2cc6
- (void)prewarmCacheForItems:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d2be2
- (void)_clearOnScreenCells;	// IMP=0x00100000000d29b8
- (void)_updateVisibleCellsInRect:(struct CGRect)arg1;	// IMP=0x00100000000d1bd5
- (void)_updateVisibleCellsForSize:(struct CGSize)arg1;	// IMP=0x00100000000d1a9d
- (void)_updateVisibleCells;	// IMP=0x00100000000d1983
- (id)_cellContainingPoint:(struct CGPoint)arg1;	// IMP=0x00100000000d175a
- (id)_itemContainingPoint:(struct CGPoint)arg1;	// IMP=0x00100000000d153c
- (void)enumerateItemsInRect:(struct CGRect)arg1 enumerator:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d130f
- (unsigned long long)accessibilityIndexOfSubscribableCardCell:(id)arg1;	// IMP=0x00100000000d124b
- (unsigned long long)accessibilityTotalNumberOfSubscribableCardCells;	// IMP=0x00100000000d11f3
- (CDStruct_c3b9c2ee)scrollDriftAnimatorDataForItem:(id)arg1;	// IMP=0x00100000000d11d8
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x00100000000d1125
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x00100000000d1055
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00100000000d0fa2
- (void)checkIfCloseToBottomRespectingTimer:(_Bool)arg1;	// IMP=0x00100000000d0d2b
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00100000000d0c62
- (void)animationEngineDidFinishAnimationSession:(id)arg1;	// IMP=0x00100000000d0c4d
- (void)animationEngineDidTick:(id)arg1;	// IMP=0x00100000000d09f5
- (void)_beginZoomingOutCardsMode;	// IMP=0x00100000000d0658
- (void)_showNewCellsWithAnimationIfNeeded;	// IMP=0x00100000000d0030
- (void)_showResultsForFirstSelection;	// IMP=0x00100000000cfe4e
- (void)_readyForFirstSelectionState;	// IMP=0x00100000000cfde1
- (void)_isRunningFirstAppearAnimationState;	// IMP=0x00000000000cfdc8
- (void)sendFeedCellExposureAnlayticsEventForAlreadySetUpCells;	// IMP=0x00100000000cfb8c
- (struct CGPoint)exitAnimatorWantsAnchorPoint:(id)arg1;	// IMP=0x00100000000cfa7d
- (struct CGPoint)firstAppearanceAnimatorWantsAnchorPoint:(id)arg1;	// IMP=0x00100000000cfa6a
- (struct CGPoint)firstAppearanceAnchorPointForCurrentLayout;	// IMP=0x00100000000cf8b8
- (void)transitionToState:(long long)arg1;	// IMP=0x00100000000cf817
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00100000000cf80f
- (void)_selectItem:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000cf5e1
- (_Bool)_cellAlreadyHasSelectionAnimatorRunning:(id)arg1;	// IMP=0x00100000000cf5ae
- (id)_selectionAnimatorForCell:(id)arg1;	// IMP=0x00100000000cf387
- (void)_undimpleCell:(id)arg1;	// IMP=0x00100000000cf331
- (void)_dimpleCell:(id)arg1 quickPress:(_Bool)arg2;	// IMP=0x00100000000cf1b7
- (void)_dimpleCell:(id)arg1;	// IMP=0x00100000000cf0ff
- (void)selectionGestureFired:(id)arg1;	// IMP=0x00100000000cedc1
- (void)_setLayout:(id)arg1 clearCells:(_Bool)arg2;	// IMP=0x00100000000cea67
- (id)_layoutForGivenSize:(struct CGSize)arg1;	// IMP=0x00100000000ce93d
@property(readonly, nonatomic) long long numberOfRowsForInitialLayout;
@property(readonly, nonatomic) long long numberOfColumnsPermitted;
@property(readonly, nonatomic) struct CGSize cardSize;
- (long long)selectionCount;	// IMP=0x00100000000ce387
- (_Bool)itemIsSelected:(id)arg1;	// IMP=0x00100000000ce2fb
- (void)setItem:(id)arg1 selected:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x00100000000ce109
- (void)_addItems:(id)arg1 withPreselectedItems:(id)arg2;	// IMP=0x00100000000cdbbf
- (void)unlockAdditonalCards;	// IMP=0x00100000000cdb81
- (void)addItems:(id)arg1 withPreselectedItems:(id)arg2;	// IMP=0x00100000000cdaa2
- (id)itemVisibleAtPoint:(struct CGPoint)arg1;	// IMP=0x00100000000cda3e
- (void)setBlurred:(_Bool)arg1 animated:(_Bool)arg2 duration:(double)arg3;	// IMP=0x00100000000cda2c
- (void)setBlurred:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000cda12
- (void)setBlurred:(_Bool)arg1;	// IMP=0x00100000000cd9fe
- (void)setBottomSpinnerHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000cd6cc
- (void)setSpinnerHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000cce3d
- (_Bool)shouldAutorotate;	// IMP=0x00100000000ccdd1
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00100000000cc57e
- (void)recordExposureEventWithStartDate:(id)arg1;	// IMP=0x00100000000cc4bc
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000000cc43a
- (void)viewWillLayoutSubviews;	// IMP=0x00100000000cc052
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000000cbff6
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000000cbfae
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000000cbe1b
- (void)dealloc;	// IMP=0x00100000000cbd21
- (void)viewDidLoad;	// IMP=0x00100000000cb7c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
