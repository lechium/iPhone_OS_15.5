//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <MobileSafariUI/CloudTabTableDelegate-Protocol.h>
#import <MobileSafariUI/ReorderingAutoscrollerDelegate-Protocol.h>
#import <MobileSafariUI/SFCapsuleCollectionViewToolbarContentProviding-Protocol.h>
#import <MobileSafariUI/TabThumbnailCollectionView-Protocol.h>
#import <MobileSafariUI/UIGestureRecognizerDelegate-Protocol.h>
#import <MobileSafariUI/UIKeyInput-Protocol.h>
#import <MobileSafariUI/UIPointerInteractionDelegate-Protocol.h>
#import <MobileSafariUI/UISearchBarDelegate-Protocol.h>
#import <MobileSafariUI/UISearchBarDelegate_Private-Protocol.h>
#import <MobileSafariUI/_UIBasicAnimationFactory-Protocol.h>
#import <MobileSafariUI/_UIScrollToTopView-Protocol.h>

@class BarButton, CADisplayLink, CloudTabItemView, NSArray, NSHashTable, NSIndexSet, NSMutableArray, NSString, NSTimer, ReorderingAutoscroller, SFGradientView, SFScrollingPanGestureRecognizer, TabExplanationView, TabOverviewInterpolatedLocation, TabOverviewItem, TabOverviewItemView, UIButton, UIPointerInteraction, UISearchBar, UITapGestureRecognizer, UITextInputPasswordRules, UIVisualEffectView;
@protocol TabOverviewDelegate, TabOverviewThemeProviding;

@interface TabOverview : UIView <CloudTabTableDelegate, ReorderingAutoscrollerDelegate, _UIBasicAnimationFactory, _UIScrollToTopView, UIGestureRecognizerDelegate, UIPointerInteractionDelegate, UISearchBarDelegate, UISearchBarDelegate_Private, UIKeyInput, SFCapsuleCollectionViewToolbarContentProviding, TabThumbnailCollectionView>
{
    NSHashTable *_presentationObservers;	// 8 = 0x8
    CADisplayLink *_displayLink;	// 16 = 0x10
    TabOverviewInterpolatedLocation *_interpolatedLocation;	// 24 = 0x18
    NSArray *_displayedItems;	// 32 = 0x20
    _Bool _displayedItemsNeedUpdate;	// 40 = 0x28
    SFScrollingPanGestureRecognizer *_panRecognizer;	// 48 = 0x30
    SFScrollingPanGestureRecognizer *_tabCloseRecognizer;	// 56 = 0x38
    UITapGestureRecognizer *_tapRecognizer;	// 64 = 0x40
    UIPointerInteraction *_cursorInteraction;	// 72 = 0x48
    TabOverviewItem *_activeItem;	// 80 = 0x50
    TabOverviewItem *_visiblyCenteredItem;	// 88 = 0x58
    TabOverviewItem *_interactivelyLiftingItem;	// 96 = 0x60
    TabOverviewInterpolatedLocation *_cloudTabsLocation;	// 104 = 0x68
    NSArray *_cloudTabDevices;	// 112 = 0x70
    NSArray *_cloudTabTables;	// 120 = 0x78
    double _cloudTabsHeight;	// 128 = 0x80
    CloudTabItemView *_editedCloudTabItemView;	// 136 = 0x88
    struct CGPoint _lastPanTranslation;	// 144 = 0x90
    struct CGRect _lastLayoutBounds;	// 160 = 0xa0
    struct CGRect _lastScrollBounds;	// 192 = 0xc0
    struct CGSize _lastContentSize;	// 224 = 0xe0
    ReorderingAutoscroller *_reorderingAutoscroller;	// 240 = 0xf0
    double _swipeCloseTranslation;	// 248 = 0xf8
    TabOverviewItem *_swipeClosingItem;	// 256 = 0x100
    NSMutableArray *_deferredClosingItems;	// 264 = 0x108
    _Bool _dragging;	// 272 = 0x110
    _Bool _pinching;	// 273 = 0x111
    _Bool _updatingAlternateItemPosition;	// 274 = 0x112
    _Bool _horizontalBounceEnabled;	// 275 = 0x113
    _Bool _verticalBounceEnabled;	// 276 = 0x114
    _Bool _shouldBounceToConstrainedLocation;	// 277 = 0x115
    _Bool _usesAccessibilityContentSize;	// 278 = 0x116
    _Bool _dismissingWithAddTabAnimation;	// 279 = 0x117
    _Bool _showingContextMenu;	// 280 = 0x118
    UIVisualEffectView *_header;	// 288 = 0x120
    BarButton *_addTabButton;	// 296 = 0x128
    BarButton *_privateBrowsingButton;	// 304 = 0x130
    BarButton *_doneButton;	// 312 = 0x138
    UISearchBar *_searchBar;	// 320 = 0x140
    BarButton *_searchCancelButton;	// 328 = 0x148
    double _searchBarMinimumWidth;	// 336 = 0x150
    _Bool _includeIncomingItemsInSearch;	// 344 = 0x158
    UIView *_inputView;	// 352 = 0x160
    _Bool _needsResizeHeaderItems;	// 360 = 0x168
    UIView *_scrollingContainerView;	// 368 = 0x170
    UIView *_gridVisualizationView;	// 376 = 0x178
    NSIndexSet *_indexesMatchingSearch;	// 384 = 0x180
    _Bool _shouldAnimateDimmingForSearch;	// 392 = 0x188
    _Bool _suppressItemAnimation;	// 393 = 0x189
    double _bottomKeyboardInset;	// 400 = 0x190
    TabOverviewItem *_interactivePresentationStartingItem;	// 408 = 0x198
    struct CGPoint _interactivePresentationLastOffset;	// 416 = 0x1a0
    double _interactivePresentationLastTimestamp;	// 432 = 0x1b0
    double _interactivePresentationLastLogScale;	// 440 = 0x1b8
    struct CGPoint _interactivePresentationVelocity;	// 448 = 0x1c0
    double _interactivePresentationZoomLockStartTime;	// 464 = 0x1d0
    struct CGPoint _interactivePresentationZoomLockOffset;	// 472 = 0x1d8
    double _headerHeight;	// 488 = 0x1e8
    NSTimer *_itemActivationTimer;	// 496 = 0x1f0
    NSMutableArray *_itemViewReuseStack;	// 504 = 0x1f8
    _Bool _shouldShowPrivateBrowsingExplanationView;	// 512 = 0x200
    TabExplanationView *_explanationView;	// 520 = 0x208
    _Bool _explanationViewVisible;	// 528 = 0x210
    _Bool _searchBarBackdropStyleUpdated;	// 529 = 0x211
    unsigned long long _fadingSnapshotCount;	// 536 = 0x218
    double _lastUpdateTime;	// 544 = 0x220
    SFGradientView *_statusBarGradient;	// 552 = 0x228
    double _privateButtonPreferredWidth;	// 560 = 0x230
    long long _lastUsedLayout;	// 568 = 0x238
    double _dismissibleSearchBarHeight;	// 576 = 0x240
    UIVisualEffectView *_dismissibleSearchBarBackground;	// 584 = 0x248
    NSString *_privateBrowsingButtonTitle;	// 592 = 0x250
    _Bool _toolbarDismissed;	// 600 = 0x258
    _Bool _toolbarBorrowed;	// 601 = 0x259
    long long _toolbarAnimationCount;	// 608 = 0x260
    UIView *_toolbarSeparator;	// 616 = 0x268
    TabOverviewItemView *_titleSizingItemView;	// 624 = 0x270
    _Bool _lastDecelerationWasInterrupted;	// 632 = 0x278
    _Bool _synchronizeClosingItems;	// 633 = 0x279
    _Bool _allowsInteractivePresentation;	// 634 = 0x27a
    _Bool _targetItemLiftsFromGrid;	// 635 = 0x27b
    _Bool _defersActivation;	// 636 = 0x27c
    _Bool _inSteadyState;	// 637 = 0x27d
    long long _presentationState;	// 640 = 0x280
    id <TabOverviewThemeProviding> _themeProvider;	// 648 = 0x288
    NSArray *_items;	// 656 = 0x290
    NSArray *_alternateItems;	// 664 = 0x298
    long long _alternateItemPosition;	// 672 = 0x2a0
    TabOverviewItem *_itemToActivate;	// 680 = 0x2a8
    id <TabOverviewDelegate> _delegate;	// 688 = 0x2b0
    long long _barPlacement;	// 696 = 0x2b8
    long long _presentedTabLayout;	// 704 = 0x2c0
    UIButton *_sidebarButton;	// 712 = 0x2c8
    CDUnknownBlockType _stateUpdateHandler;	// 720 = 0x2d0
    CDUnknownBlockType _pptStateUpdateHandler;	// 728 = 0x2d8
}

- (void).cxx_destruct;	// IMP=0x00000000001c3687
@property(copy, nonatomic) CDUnknownBlockType pptStateUpdateHandler; // @synthesize pptStateUpdateHandler=_pptStateUpdateHandler;
@property(copy, nonatomic) CDUnknownBlockType stateUpdateHandler; // @synthesize stateUpdateHandler=_stateUpdateHandler;
@property(readonly, nonatomic, getter=isInSteadyState) _Bool inSteadyState; // @synthesize inSteadyState=_inSteadyState;
@property(retain, nonatomic) UIButton *sidebarButton; // @synthesize sidebarButton=_sidebarButton;
@property(readonly, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(readonly, nonatomic) UIButton *privateBrowsingButton; // @synthesize privateBrowsingButton=_privateBrowsingButton;
@property(readonly, nonatomic) UIButton *addTabButton; // @synthesize addTabButton=_addTabButton;
@property(nonatomic) long long presentedTabLayout; // @synthesize presentedTabLayout=_presentedTabLayout;
@property(nonatomic) long long barPlacement; // @synthesize barPlacement=_barPlacement;
@property(nonatomic) __weak id <TabOverviewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool defersActivation; // @synthesize defersActivation=_defersActivation;
@property(retain, nonatomic) TabOverviewItem *itemToActivate; // @synthesize itemToActivate=_itemToActivate;
@property(nonatomic) _Bool targetItemLiftsFromGrid; // @synthesize targetItemLiftsFromGrid=_targetItemLiftsFromGrid;
@property(readonly, nonatomic) _Bool allowsInteractivePresentation; // @synthesize allowsInteractivePresentation=_allowsInteractivePresentation;
@property(nonatomic) _Bool synchronizeClosingItems; // @synthesize synchronizeClosingItems=_synchronizeClosingItems;
@property(readonly, nonatomic) long long alternateItemPosition; // @synthesize alternateItemPosition=_alternateItemPosition;
@property(readonly, nonatomic) NSArray *alternateItems; // @synthesize alternateItems=_alternateItems;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <TabOverviewThemeProviding> themeProvider; // @synthesize themeProvider=_themeProvider;
@property(readonly, nonatomic) _Bool lastDecelerationWasInterrupted; // @synthesize lastDecelerationWasInterrupted=_lastDecelerationWasInterrupted;
@property(readonly, nonatomic) long long presentationState; // @synthesize presentationState=_presentationState;
@property(readonly, nonatomic) _Bool presentingInteractively; // @synthesize presentingInteractively=_pinching;
- (void)capsuleCollectionView:(id)arg1 relinquishToolbarContentView:(id)arg2;	// IMP=0x00000000001c3428
- (double)capsuleCollectionView:(id)arg1 heightForToolbarContentView:(id)arg2;	// IMP=0x00000000001c33e3
- (id)toolbarContentViewForCapsuleCollectionView:(id)arg1;	// IMP=0x00000000001c33a7
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000001c3283
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000001c2f28
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x00000000001c2d3c
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;	// IMP=0x00000000001c2ae3
- (void)_scrollToTopFromTouchAtScreenLocation:(struct CGPoint)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001c2aaa
- (_Bool)isScrollEnabled;	// IMP=0x00000000001c2aa2
- (unsigned long long)estimatedSnapshotsPerPageForBounds:(struct CGRect)arg1 withTraitCollection:(id)arg2;	// IMP=0x00000000001c28f6
- (void)reorderingAutoscroller:(id)arg1 handleScroll:(struct CGPoint)arg2;	// IMP=0x00000000001c280c
@property(readonly, nonatomic) unsigned long long snapshotBorderOptions;
@property(readonly, nonatomic) double desiredSnapshotScale;
- (struct CGSize)snapshotSizeForSuggestedSize:(struct CGSize)arg1;	// IMP=0x00000000001c2764
- (id)_timingFunctionForAnimation;	// IMP=0x00000000001c272b
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;	// IMP=0x00000000001c2652
- (id)inputView;	// IMP=0x00000000001c263d
- (_Bool)canBecomeFirstResponder;	// IMP=0x00000000001c25e3
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) long long autocorrectionType;
- (void)deleteBackward;	// IMP=0x00000000001c24ca
@property(readonly, nonatomic) _Bool hasText;
- (void)insertText:(id)arg1;	// IMP=0x00000000001c22ef
- (struct CGRect)_searchBar:(id)arg1 proposedSearchFieldFrame:(struct CGRect)arg2;	// IMP=0x00000000001c2240
- (void)searchBarCancelButtonClicked:(id)arg1;	// IMP=0x00000000001c222e
- (void)searchBarSearchButtonClicked:(id)arg1;	// IMP=0x00000000001c21c1
- (void)searchBarTextDidEndEditing:(id)arg1;	// IMP=0x00000000001c216d
- (void)searchBarTextDidBeginEditing:(id)arg1;	// IMP=0x00000000001c2119
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;	// IMP=0x00000000001c203e
- (void)_cancelSearch;	// IMP=0x00000000001c1daf
- (_Bool)cloudTabTable:(id)arg1 shouldDisplayTab:(id)arg2;	// IMP=0x00000000001c1ccf
- (void)cloudTabTable:(id)arg1 didFinishEditingTabItemView:(id)arg2;	// IMP=0x00000000001c1c61
- (void)cloudTabTable:(id)arg1 didStartEditingTabItemView:(id)arg2;	// IMP=0x00000000001c1bea
- (void)cloudTabTable:(id)arg1 closeCloudTab:(id)arg2 onDevice:(id)arg3;	// IMP=0x00000000001c1b2d
- (void)cloudTabTable:(id)arg1 didSelectCloudTab:(id)arg2;	// IMP=0x00000000001c19cf
- (void)setPrivateBrowsingButtonTitle:(id)arg1;	// IMP=0x00000000001c1964
- (void)setShowsPrivateBrowsingExplanationView:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001c1815
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000001c0f47
- (void)_displayLinkFired:(id)arg1;	// IMP=0x00000000001c0e37
- (void)setCloudTabDevices:(id)arg1;	// IMP=0x00000000001c0130
- (void)resetPresentationScrollPosition;	// IMP=0x00000000001c00e2
- (void)removePresentationObserver:(id)arg1;	// IMP=0x00000000001c00c5
- (void)addPresentationObserver:(id)arg1;	// IMP=0x00000000001c00a8
- (void)cancelInteractivePresentation;	// IMP=0x00000000001c0094
- (void)endInteractivePresentationAllowingDismissalToTargetItem:(_Bool)arg1;	// IMP=0x00000000001c0088
- (void)endInteractivePresentation;	// IMP=0x00000000001c0071
- (void)updateInteractivePresentationWithOffset:(struct CGPoint)arg1 scale:(double)arg2 animated:(_Bool)arg3;	// IMP=0x00000000001beb54
- (void)updateInteractivePresentationWithOffset:(struct CGPoint)arg1 scale:(double)arg2;	// IMP=0x00000000001beb40
- (void)beginInteractivePresentationWithOffset:(struct CGPoint)arg1 scale:(double)arg2;	// IMP=0x00000000001bdbdf
- (void)_activateItemToActivate:(id)arg1;	// IMP=0x00000000001bd8fa
- (void)dismissAnimated:(_Bool)arg1;	// IMP=0x00000000001bd649
- (void)presentAnimated:(_Bool)arg1;	// IMP=0x00000000001bd273
- (_Bool)itemHasAttachedView:(id)arg1;	// IMP=0x00000000001bcf16
- (void)attachView:(id)arg1 withReferenceRect:(struct CGRect)arg2 toItem:(id)arg3;	// IMP=0x00000000001bce76
- (void)layoutSubviews;	// IMP=0x00000000001b8fb2
- (void)endSearching;	// IMP=0x00000000001b7ed9
- (void)beginSearching;	// IMP=0x00000000001b7ebc
@property(readonly, nonatomic, getter=isSearching) _Bool searching;
- (void)_tap:(id)arg1;	// IMP=0x00000000001b79cb
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000001b78e7
- (void)_dismissWithItemAtCurrentDecelerationFactor:(id)arg1;	// IMP=0x00000000001b71b3
- (void)_tabClose:(id)arg1;	// IMP=0x00000000001b6775
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000001b6722
- (void)test_scrollToTopWithoutAnimation;	// IMP=0x00000000001b66c5
- (void)test_simulateScrollByOffset:(struct CGPoint)arg1 inTime:(double)arg2;	// IMP=0x00000000001b65fa
- (void)_pan:(id)arg1;	// IMP=0x00000000001b5e06
- (_Bool)_isClosingLastItem;	// IMP=0x00000000001b5de1
- (void)_close:(id)arg1;	// IMP=0x00000000001b59a6
- (void)enumerateItemsOrderedByVisibility:(CDUnknownBlockType)arg1;	// IMP=0x00000000001b557c
- (void)_didReceiveMemoryWarning:(id)arg1;	// IMP=0x00000000001b51c2
- (void)activateItem:(id)arg1;	// IMP=0x00000000001b4e2c
- (id)targetedPreviewForDismissingMenuForItem:(id)arg1;	// IMP=0x00000000001b49dc
- (id)targetedDragPreviewForLiftingItem:(id)arg1;	// IMP=0x00000000001b48b1
- (void)didEndShowingContextMenuForItem:(id)arg1;	// IMP=0x00000000001b48a0
- (void)willBeginShowingContextMenuForItem:(id)arg1;	// IMP=0x00000000001b488f
- (void)willAnimateDropForItem:(id)arg1 withAnimator:(id)arg2;	// IMP=0x00000000001b47cf
- (id)targetedDragPreviewForDroppingItem:(id)arg1;	// IMP=0x00000000001b43f1
@property(readonly, nonatomic) _Bool supportsDropTransitionToItemView;
- (id)viewForItem:(id)arg1;	// IMP=0x00000000001b33ea
@property(readonly, nonatomic) _Bool supportsSystemDrag;
- (id)itemAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000001b31f4
@property(readonly, nonatomic) ReorderingAutoscroller *reorderingAutoscroller;
- (id)targetItemForDropAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000001b2e23
- (void)setInteractiveInsertionProgress:(double)arg1 forItem:(id)arg2;	// IMP=0x00000000001b1818
- (void)endAnimation;	// IMP=0x00000000001b13f3
- (_Bool)isItemAnimating:(id)arg1;	// IMP=0x00000000001b1275
@property(copy, nonatomic) NSString *searchTerm;
@property(readonly, nonatomic) NSArray *itemsFullyInView;
@property(readonly, nonatomic) NSArray *itemsMatchingSearchTerm;
- (void)copyLocationFromItem:(id)arg1 toItem:(id)arg2;	// IMP=0x00000000001b0e74
- (void)setItems:(id)arg1 alternateItems:(id)arg2 atPosition:(long long)arg3;	// IMP=0x00000000001b0198
- (void)_updateDisplayLink;	// IMP=0x00000000001ae719
- (struct CGSize)_contentSize;	// IMP=0x00000000001ae303
- (void)updateSnapshotForItem:(id)arg1;	// IMP=0x00000000001ad583
- (struct CGRect)frameForItem:(id)arg1;	// IMP=0x00000000001aca60
- (double)targetScaleWithTabLayout:(long long)arg1;	// IMP=0x00000000001abf1a
@property(readonly, nonatomic) double scalePercentageForActiveItem;
@property(readonly, nonatomic) _Bool animatingToolbarDismissal;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000001ab108
- (void)dismissWithAddTabAnimation;	// IMP=0x00000000001aab32
- (void)_updateScrollBoundsForKeyboardNotification:(id)arg1;	// IMP=0x00000000001aaaf5
- (id)undoManager;	// IMP=0x00000000001aa61e
- (void)didMoveToWindow;	// IMP=0x00000000001aa5ad
- (void)willMoveToWindow:(id)arg1;	// IMP=0x00000000001aa53c
- (void)dealloc;	// IMP=0x00000000001aa4bb
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001a889c

// Remaining properties
@property(readonly, nonatomic) _Bool canDragOntoActiveTab;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool hidesInactiveTabs;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
@property(readonly, nonatomic) unsigned long long layoutAxes;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(nonatomic) long long returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;

@end

