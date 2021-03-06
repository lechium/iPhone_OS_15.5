//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/SBFolderObserver-Protocol.h>
#import <SpringBoardHome/SBHScrollableIconViewContaining-Protocol.h>
#import <SpringBoardHome/SBHVisibleContentPresenter-Protocol.h>
#import <SpringBoardHome/SBIconListLayoutDelegate-Protocol.h>
#import <SpringBoardHome/SBIconListPageControlDelegate-Protocol.h>
#import <SpringBoardHome/SBIconListViewDragDelegate-Protocol.h>
#import <SpringBoardHome/SBIconScrollViewDelegate-Protocol.h>
#import <SpringBoardHome/UITextFieldDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSMutableSet, NSString, SBFolder, SBFolderIconImageCache, SBFolderTitleTextField, SBHIconImageCache, SBHScrollableZoomingIconViewInteraction, SBIconListModel, SBIconListPageControl, SBIconListView, SBIconPageIndicatorImageSetCache, SBIconScrollView, UIPanGestureRecognizer, UIScrollView, _UILegibilitySettings;
@protocol SBFolderViewDelegate, SBIconListLayoutProvider, SBIconViewProviding;

@interface SBFolderView : UIView <SBIconListPageControlDelegate, UITextFieldDelegate, SBIconListLayoutDelegate, SBHScrollableIconViewContaining, SBIconScrollViewDelegate, SBFolderObserver, BSDescriptionProviding, SBIconListViewDragDelegate, SBHVisibleContentPresenter>
{
    NSMutableArray *_iconListViews;	// 8 = 0x8
    NSMutableSet *_scrollingDisabledReasons;	// 16 = 0x10
    NSMutableSet *_pageControlDisabledReasons;	// 24 = 0x18
    SBIconListPageControl *_pageControl;	// 32 = 0x20
    SBIconScrollView *_scrollView;	// 40 = 0x28
    SBFolderTitleTextField *_titleTextField;	// 48 = 0x30
    NSMutableSet *_scrollViewIsScrollingOverrides;	// 56 = 0x38
    NSMutableSet *_parallaxDisabledReasons;	// 64 = 0x40
    UIView *_scalingView;	// 72 = 0x48
    struct SBVisibleColumnRange _visibleColumnRange;	// 80 = 0x50
    struct SBFolderPredictedVisibleColumn _predictedVisibleColumn;	// 112 = 0x70
    _Bool _isScalingViewBorrowed;	// 136 = 0x88
    _Bool _wasScrolling;	// 137 = 0x89
    NSMutableArray *_scrollFrames;	// 144 = 0x90
    unsigned long long _scrollFrameCount;	// 152 = 0x98
    double _scrollStartContentOffset;	// 160 = 0xa0
    long long _scrollMinimumVisiblePageIndex;	// 168 = 0xa8
    long long _scrollMaximumVisiblePageIndex;	// 176 = 0xb0
    SBHScrollableZoomingIconViewInteraction *_scrollingInteraction;	// 184 = 0xb8
    unsigned long long _ignoreScrollingDidEndNotificationsCount;	// 192 = 0xc0
    NSMutableArray *_scrollCompletionBlocks;	// 200 = 0xc8
    NSMutableArray *_rotationCompletionBlocks;	// 208 = 0xd0
    double _headerHeight;	// 216 = 0xd8
    _Bool _isEditing;	// 224 = 0xe0
    _Bool _rotating;	// 225 = 0xe1
    _Bool _snapsToPageBoundariesAfterScrolling;	// 226 = 0xe2
    _Bool _hasEverBeenInAWindow;	// 227 = 0xe3
    _Bool _addsFocusGuidesForWrapping;	// 228 = 0xe4
    _Bool _suppressesEditingStateForListViews;	// 229 = 0xe5
    _Bool _automaticallyCreatesIconListViews;	// 230 = 0xe6
    _Bool _includesHiddenIconListPages;	// 231 = 0xe7
    long long _currentPageIndex;	// 232 = 0xe8
    unsigned long long _contentVisibility;	// 240 = 0xf0
    id <SBFolderViewDelegate> _delegate;	// 248 = 0xf8
    SBFolder *_folder;	// 256 = 0x100
    id <SBIconListLayoutProvider> _listLayoutProvider;	// 264 = 0x108
    long long _orientation;	// 272 = 0x110
    unsigned long long _allowedOrientations;	// 280 = 0x118
    id <SBIconViewProviding> _iconViewProvider;	// 288 = 0x120
    unsigned long long _userInterfaceLayoutDirectionHandling;	// 296 = 0x128
    UIView *_headerView;	// 304 = 0x130
    _UILegibilitySettings *_legibilitySettings;	// 312 = 0x138
    SBFolderIconImageCache *_folderIconImageCache;	// 320 = 0x140
    SBHIconImageCache *_iconImageCache;	// 328 = 0x148
    SBIconPageIndicatorImageSetCache *_iconPageIndicatorImageSetCache;	// 336 = 0x150
    UIPanGestureRecognizer *_scrollingDisabledGestureRecognizer;	// 344 = 0x158
}

+ (unsigned long long)countOfAdditionalPagesToKeepVisibleInOneDirection;	// IMP=0x000000000015e09a
+ (unsigned long long)_pageOffsetForOffset:(double)arg1 behavior:(long long)arg2 pageWidth:(double)arg3 pageSpacing:(double)arg4 pageCount:(unsigned long long)arg5 userInterfaceLayoutDirection:(long long)arg6 fractionOfDistanceThroughPage:(double *)arg7;	// IMP=0x000000000015c778
+ (long long)_pageIndexForOffset:(double)arg1 minimumPage:(long long)arg2 maximumPage:(long long)arg3 pageCount:(unsigned long long)arg4 pageWidth:(double)arg5 pageSpacing:(double)arg6 userInterfaceLayoutDirection:(long long)arg7 behavior:(long long)arg8 fractionOfDistanceThroughPage:(double *)arg9;	// IMP=0x000000000015c6f7
+ (id)defaultIconLocation;	// IMP=0x000000000015b3ad
+ (Class)defaultIconListViewClass;	// IMP=0x000000000015b2cf
+ (Class)_scrollViewClass;	// IMP=0x0000000000157828
- (void).cxx_destruct;	// IMP=0x0000000000162d81
@property(nonatomic) _Bool includesHiddenIconListPages; // @synthesize includesHiddenIconListPages=_includesHiddenIconListPages;
@property(nonatomic) _Bool automaticallyCreatesIconListViews; // @synthesize automaticallyCreatesIconListViews=_automaticallyCreatesIconListViews;
@property(nonatomic) _Bool suppressesEditingStateForListViews; // @synthesize suppressesEditingStateForListViews=_suppressesEditingStateForListViews;
@property(retain, nonatomic) SBIconListPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIPanGestureRecognizer *scrollingDisabledGestureRecognizer; // @synthesize scrollingDisabledGestureRecognizer=_scrollingDisabledGestureRecognizer;
@property(nonatomic) _Bool addsFocusGuidesForWrapping; // @synthesize addsFocusGuidesForWrapping=_addsFocusGuidesForWrapping;
@property(nonatomic) _Bool hasEverBeenInAWindow; // @synthesize hasEverBeenInAWindow=_hasEverBeenInAWindow;
@property(readonly, nonatomic) _Bool snapsToPageBoundariesAfterScrolling; // @synthesize snapsToPageBoundariesAfterScrolling=_snapsToPageBoundariesAfterScrolling;
@property(retain, nonatomic) SBIconPageIndicatorImageSetCache *iconPageIndicatorImageSetCache; // @synthesize iconPageIndicatorImageSetCache=_iconPageIndicatorImageSetCache;
@property(retain, nonatomic) SBHIconImageCache *iconImageCache; // @synthesize iconImageCache=_iconImageCache;
@property(retain, nonatomic) SBFolderIconImageCache *folderIconImageCache; // @synthesize folderIconImageCache=_folderIconImageCache;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(readonly, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) unsigned long long userInterfaceLayoutDirectionHandling; // @synthesize userInterfaceLayoutDirectionHandling=_userInterfaceLayoutDirectionHandling;
@property(readonly, nonatomic) __weak id <SBIconViewProviding> iconViewProvider; // @synthesize iconViewProvider=_iconViewProvider;
@property(nonatomic, getter=isRotating) _Bool rotating; // @synthesize rotating=_rotating;
@property(readonly, nonatomic) unsigned long long allowedOrientations; // @synthesize allowedOrientations=_allowedOrientations;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) id <SBIconListLayoutProvider> listLayoutProvider; // @synthesize listLayoutProvider=_listLayoutProvider;
@property(retain, nonatomic) SBFolder *folder; // @synthesize folder=_folder;
@property(nonatomic) __weak id <SBFolderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long contentVisibility; // @synthesize contentVisibility=_contentVisibility;
@property(readonly, nonatomic, getter=isScalingViewBorrowed) _Bool scalingViewBorrowed; // @synthesize scalingViewBorrowed=_isScalingViewBorrowed;
@property(readonly, nonatomic) long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(readonly, nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_isEditing;
- (void)_updateScrollingIfNeeded;	// IMP=0x0000000000162b4e
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000016284b
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000001627fb
- (id)succinctDescriptionBuilder;	// IMP=0x00000000001627df
- (id)succinctDescription;	// IMP=0x000000000016278f
@property(readonly, copy) NSString *description;
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000000162664
- (void)_backgroundContrastDidChange:(id)arg1;	// IMP=0x0000000000162652
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettingsForIconListViews;
- (id)accessibilityLegibilitySettingsForRect:(struct CGRect)arg1 tintStyle:(unsigned long long)arg2;	// IMP=0x000000000016258e
- (id)accessibilityTintColorForRect:(struct CGRect)arg1 tintStyle:(unsigned long long)arg2;	// IMP=0x00000000001624dc
- (void)_updateIconListLegibilitySettings;	// IMP=0x00000000001622d8
- (void)_updateTitleLegibilitySettings;	// IMP=0x00000000001621ec
- (id)_legibilitySettingsWithPrimaryColor:(id)arg1;	// IMP=0x0000000000162101
- (void)folder:(id)arg1 listHiddenDidChange:(id)arg2;	// IMP=0x00000000001620ef
- (void)folder:(id)arg1 listHiddenWillChange:(id)arg2;	// IMP=0x0000000000162064
- (void)folder:(id)arg1 didMoveList:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;	// IMP=0x0000000000162052
- (void)folder:(id)arg1 didRemoveLists:(id)arg2 atIndexes:(id)arg3;	// IMP=0x0000000000161f36
- (void)folder:(id)arg1 willRemoveLists:(id)arg2 atIndexes:(id)arg3;	// IMP=0x0000000000161bcc
- (void)folder:(id)arg1 didAddList:(id)arg2;	// IMP=0x0000000000161a4e
- (void)_noteFolderListsDidChange:(unsigned long long)arg1;	// IMP=0x0000000000161a3c
- (id)iconListView:(id)arg1 customSpringAnimationBehaviorForDroppingItem:(id)arg2;	// IMP=0x00000000001619a2
- (void)iconListView:(id)arg1 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg2;	// IMP=0x0000000000161919
- (_Bool)iconListView:(id)arg1 shouldAllowSpringLoadedInteractionForIconDropSession:(id)arg2 onIconView:(id)arg3;	// IMP=0x0000000000161870
- (void)iconListView:(id)arg1 iconDragItem:(id)arg2 willAnimateDropWithAnimator:(id)arg3;	// IMP=0x00000000001617bc
- (id)iconListView:(id)arg1 previewForDroppingIconDragItem:(id)arg2 proposedPreview:(id)arg3;	// IMP=0x00000000001616de
- (void)iconListView:(id)arg1 willUseIconView:(id)arg2 forDroppingIconDragItem:(id)arg3;	// IMP=0x000000000016162a
- (id)iconListView:(id)arg1 iconViewForDroppingIconDragItem:(id)arg2 proposedIconView:(id)arg3;	// IMP=0x000000000016154c
- (void)iconListView:(id)arg1 performIconDrop:(id)arg2;	// IMP=0x00000000001614c3
- (void)iconListView:(id)arg1 iconDropSessionDidExit:(id)arg2;	// IMP=0x000000000016143a
- (void)iconListView:(id)arg1 iconDropSession:(id)arg2 didPauseAtLocation:(struct CGPoint)arg3;	// IMP=0x000000000016139a
- (id)iconListView:(id)arg1 iconDropSessionDidUpdate:(id)arg2;	// IMP=0x0000000000161300
- (void)iconListView:(id)arg1 iconDropSessionDidEnter:(id)arg2;	// IMP=0x0000000000161277
- (_Bool)iconListView:(id)arg1 canHandleIconDropSession:(id)arg2;	// IMP=0x00000000001611e9
- (id)iconListView:(id)arg1 animatorForRemovingIcons:(id)arg2 proposedAnimator:(id)arg3;	// IMP=0x0000000000160edf
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x0000000000160e30
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x0000000000160e18
- (void)textFieldDidBeginEditing:(id)arg1;	// IMP=0x0000000000160d9e
- (_Bool)textFieldShouldBeginEditing:(id)arg1;	// IMP=0x0000000000160d3f
- (void)_setFolderName:(id)arg1;	// IMP=0x0000000000160bdb
- (void)pageControlDidReceiveButtonTap:(id)arg1;	// IMP=0x0000000000160bd5
- (void)pageControl:(id)arg1 didMoveCurrentPageToPage:(long long)arg2 withScrubbing:(_Bool)arg3;	// IMP=0x00000000001609d8
- (_Bool)iconScrollView:(id)arg1 shouldSetAutoscrollContentOffset:(struct CGPoint)arg2;	// IMP=0x00000000001609d0
- (_Bool)iconScrollView:(id)arg1 shouldSetContentOffset:(struct CGPoint *)arg2 animated:(_Bool)arg3;	// IMP=0x00000000001609c8
- (void)iconScrollViewDidCancelTouchTracking:(id)arg1;	// IMP=0x00000000001609c2
- (void)iconScrollViewWillCancelTouchTracking:(id)arg1;	// IMP=0x00000000001609bc
- (struct CGSize)scrollView:(id)arg1 contentSizeForZoomScale:(double)arg2 withProposedSize:(struct CGSize)arg3;	// IMP=0x0000000000160993
- (void)scrollViewDidEndScrolling:(id)arg1;	// IMP=0x0000000000160972
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x0000000000160887
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x00000000001607b0
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x00000000001606ba
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x000000000016062e
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000000016047a
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x000000000016035e
- (_Bool)_animatesRotationForAllVisibleIconListViews;	// IMP=0x0000000000160356
- (void)transitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000015fba6
- (_Bool)_isEligibleForFocusInteraction;	// IMP=0x000000000015fb52
- (id)preferredFocusEnvironments;	// IMP=0x000000000015faa3
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000015f9a9
- (void)cleanUpAfterTransition;	// IMP=0x000000000015f997
- (void)prepareForTransition;	// IMP=0x000000000015f985
- (void)prepareToOpen;	// IMP=0x000000000015f8ec
- (void)enumerateScrollableIconViewsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000015f8da
- (struct UIEdgeInsets)visibleContainerInsets;	// IMP=0x000000000015f8bb
- (void)_enumerateScrollableIconViewsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000015f6ed
- (void)_scrollingInteractionScrollViewDidScroll:(id)arg1;	// IMP=0x000000000015f6d0
- (void)_updateScrollingInteractionIsScrolling:(_Bool)arg1;	// IMP=0x000000000015f6b3
- (struct UIEdgeInsets)_scrollingInteractionVisibleInsets;	// IMP=0x000000000015f675
- (_Bool)_shouldUseScrollableIconViewInteraction;	// IMP=0x000000000015f66d
- (unsigned int)userInterfaceLayoutDirectionAwareScrollingDirection;	// IMP=0x000000000015f47b
- (unsigned int)scrollingDirection;	// IMP=0x000000000015f40b
- (void)_updateScrollingState:(_Bool)arg1;	// IMP=0x000000000015efb0
- (void)_checkIfScrollStateChanged;	// IMP=0x000000000015ef64
- (void)removeScrollViewIsScrollingOverrideReason:(id)arg1;	// IMP=0x000000000015ee93
- (void)addScrollViewIsScrollingOverrideReason:(id)arg1;	// IMP=0x000000000015ed9f
- (_Bool)_shouldIgnoreScrollingDidEndNotifications;	// IMP=0x000000000015ed8a
- (void)_unignoreScrollingDidEndNotifications;	// IMP=0x000000000015ecf1
- (void)_ignoreScrollingDidEndNotifications;	// IMP=0x000000000015ece0
- (void)_markListViewsAsPurged;	// IMP=0x000000000015ebab
- (void)noteUserIsInteractingWithIcons;	// IMP=0x000000000015eb89
- (void)getLeadingVisiblePageIndex:(long long *)arg1 trailingVisiblePageIndex:(long long *)arg2;	// IMP=0x000000000015ea99
- (void)validateVisibleColumnRange;	// IMP=0x000000000015ea0f
- (_Bool)isVisibleColumnRangeValid:(struct SBVisibleColumnRange)arg1;	// IMP=0x000000000015e993
- (void)clearVisibleColumnRange;	// IMP=0x000000000015e978
- (id)iconVisibilityDescription;	// IMP=0x000000000015e889
@property(readonly, nonatomic) struct SBVisibleColumnRange visibleColumnRangeExcludingAdditionalWidthKeptVisible;
- (void)updateVisibleColumnRange;	// IMP=0x000000000015e7be
- (void)updateVisibleColumnRangeWithTotalLists:(unsigned long long)arg1 iconVisibilityHandling:(long long)arg2;	// IMP=0x000000000015e28b
@property(readonly, nonatomic) _Bool updatesPredictedVisibleColumnWhileScrolling;
@property(readonly, nonatomic) long long iconVisibilityHandling;
- (void)updateIconListIndexAndVisibility:(_Bool)arg1;	// IMP=0x000000000015e0d9
- (void)updateIconListIndexAndVisibility;	// IMP=0x000000000015e0c5
@property(readonly, nonatomic) double additionalScrollWidthToKeepVisibleInOneDirection;
@property(readonly, nonatomic) unsigned long long countOfAdditionalPagesToKeepVisibleInOneDirection;
- (struct SBVisibleColumnRange)visibleColumnRangeWithTotalLists:(unsigned long long)arg1 iconVisibilityHandling:(long long)arg2 predictedVisibleColumn:(struct SBFolderPredictedVisibleColumn *)arg3 includingAdditionalColumnsKeptVisible:(_Bool)arg4;	// IMP=0x000000000015d8d1
@property(readonly, nonatomic) double maximumVisibleScrollOffset;
@property(readonly, nonatomic) double minimumVisibleScrollOffset;
- (double)currentScrollOffset;	// IMP=0x000000000015d844
@property(readonly, nonatomic) double scrollableWidthForVisibleColumnRange;
- (void)_updateEditingStateAnimated:(_Bool)arg1;	// IMP=0x000000000015d41d
- (void)layoutIconListsWithAnimationType:(long long)arg1 forceRelayout:(_Bool)arg2;	// IMP=0x000000000015d1f8
- (void)resetIconListViews;	// IMP=0x000000000015d1e6
- (void)tearDownListViews;	// IMP=0x000000000015d069
- (id)allIconListViews;	// IMP=0x000000000015d002
- (id)additionalIconListViews;	// IMP=0x000000000015cff5
@property(readonly, nonatomic) SBIconListModel *currentIconListModel;
@property(readonly, nonatomic) SBIconListView *currentIconListView;
- (id)iconListViewAtScrollPoint:(struct CGPoint)arg1;	// IMP=0x000000000015cd4a
- (id)iconListViewForDrag:(id)arg1;	// IMP=0x000000000015cd16
- (id)iconListViewForTouch:(id)arg1;	// IMP=0x000000000015cce2
- (id)iconListViewAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000015ca27
- (id)lastIconListView;	// IMP=0x000000000015ca0a
- (id)firstIconListView;	// IMP=0x000000000015c9ed
- (id)iconListViewForIconListModelIndex:(unsigned long long)arg1;	// IMP=0x000000000015c99a
- (id)iconListViewForPageIndex:(long long)arg1;	// IMP=0x000000000015c947
- (id)iconListViewAtIndex:(unsigned long long)arg1;	// IMP=0x000000000015c92a
- (long long)_pageIndexForOffset:(double)arg1 behavior:(long long)arg2 fractionOfDistanceThroughPage:(double *)arg3;	// IMP=0x000000000015c627
- (long long)_pageIndexForOffset:(double)arg1;	// IMP=0x000000000015c611
- (struct CGRect)_iconListFrameForPageRect:(struct CGRect)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000015c5f9
- (struct CGSize)_scrollViewContentSize;	// IMP=0x000000000015c4e0
- (struct CGRect)_frameForIconListAtIndex:(unsigned long long)arg1;	// IMP=0x000000000015c3b9
- (void)_updateIconListFrames;	// IMP=0x000000000015c14a
- (struct CGSize)_iconListViewSize;	// IMP=0x000000000015c0fa
- (void)_updateIconListContainment:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000015c07e
- (void)_updateIconListViewsWithCurrentPageIndex:(long long)arg1 currentIconListModel:(id)arg2;	// IMP=0x000000000015b9b9
- (void)_updateIconListViewsWithCurrentIconListModel:(id)arg1;	// IMP=0x000000000015b961
- (void)_updateIconListViews:(long long)arg1;	// IMP=0x000000000015b910
- (void)updateIconListViews;	// IMP=0x000000000015b8df
- (void)_resetIconListViews;	// IMP=0x000000000015b861
- (void)_addIconListViewsForModels:(id)arg1;	// IMP=0x000000000015b651
- (id)_createIconListViewForList:(id)arg1;	// IMP=0x000000000015b3d3
- (id)iconLocationForList:(id)arg1;	// IMP=0x000000000015b3c1
@property(readonly, copy, nonatomic) NSString *iconLocation;
- (Class)listViewClass;	// IMP=0x000000000015b25f
- (id)_interactionTintColor;	// IMP=0x000000000015b257
- (void)enumerateScrollViewPageViewsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000015b23d
- (void)enumerateIconListViewsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000015b14f
- (void)enumerateIconListViewsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000015affd
- (unsigned long long)indexOfIconListView:(id)arg1;	// IMP=0x000000000015afe0
- (id)iconListViewDisplayingIconView:(id)arg1;	// IMP=0x000000000015ae44
- (id)iconListViewWithList:(id)arg1;	// IMP=0x000000000015acaa
- (void)_didRemoveIconListView:(id)arg1;	// IMP=0x000000000015aca4
- (void)_removeIconListView:(id)arg1 purge:(_Bool)arg2;	// IMP=0x000000000015ab67
- (void)_removeIconListView:(id)arg1;	// IMP=0x000000000015ab50
- (void)_didAddIconListView:(id)arg1;	// IMP=0x000000000015ab4a
- (void)_configureIconListView:(id)arg1;	// IMP=0x000000000015ab44
- (void)_addIconListView:(id)arg1 atEnd:(_Bool)arg2;	// IMP=0x000000000015a97c
- (void)_addIconListView:(id)arg1;	// IMP=0x000000000015a965
- (void)_enableUserInteractionAfterSignificantAnimation;	// IMP=0x000000000015a95f
- (void)_disableUserInteractionBeforeSignificantAnimation;	// IMP=0x000000000015a959
- (double)_titleFontSize;	// IMP=0x000000000015a950
- (_Bool)_showsTitle;	// IMP=0x000000000015a948
- (void)_precacheIconImages;	// IMP=0x000000000015a527
- (_Bool)_isValidIconListViewIndex:(long long)arg1;	// IMP=0x000000000015a504
- (_Bool)_isValidPageIndex:(long long)arg1;	// IMP=0x000000000015a4c6
- (struct SBHFloatRange)_scrollRangeForContentAtPageIndex:(long long)arg1 pageWidth:(double)arg2;	// IMP=0x000000000015a46b
- (struct SBHFloatRange)_scrollRangeForPageAtIndex:(long long)arg1 pageWidth:(double)arg2;	// IMP=0x000000000015a446
- (struct SBHFloatRange)_scrollRangeForPageAtIndex:(long long)arg1;	// IMP=0x000000000015a409
- (struct CGPoint)_scrollOffsetForContentAtPageIndex:(long long)arg1;	// IMP=0x000000000015a3cc
- (struct CGPoint)_scrollOffsetForPageAtIndex:(long long)arg1 pageWidth:(double)arg2;	// IMP=0x000000000015a2f6
- (struct CGPoint)_scrollOffsetForPageAtIndex:(long long)arg1;	// IMP=0x000000000015a2b9
- (struct CGPoint)_scrollOffsetForFirstListView;	// IMP=0x000000000015a288
- (double)_pageSpacing;	// IMP=0x000000000015a27f
- (double)_pageWidth;	// IMP=0x000000000015a200
- (_Bool)isPageTypeIcon:(long long)arg1;	// IMP=0x000000000015a1e6
- (unsigned long long)typeForPage:(long long)arg1;	// IMP=0x000000000015a158
@property(readonly, nonatomic) unsigned long long pageCount;
@property(readonly, nonatomic) long long maximumPageIndex;
@property(readonly, nonatomic) long long minimumPageIndex;
- (_Bool)_hasTrailingCustomPages;	// IMP=0x000000000015a0a0
- (unsigned long long)_trailingCustomPageCount;	// IMP=0x000000000015a098
- (_Bool)_hasLeadingCustomPages;	// IMP=0x000000000015a07f
- (unsigned long long)_leadingCustomPageCount;	// IMP=0x000000000015a077
- (_Bool)hasIconPages;	// IMP=0x000000000015a025
- (unsigned long long)iconPageCount;	// IMP=0x0000000000159fdf
@property(readonly, nonatomic) long long lastIconPageIndex;
@property(readonly, nonatomic) long long firstIconPageIndex;
@property(readonly, nonatomic) long long defaultPageIndex;
@property(readonly, nonatomic) double pageControlAreaHeight;
- (void)_updatePageControlNumberOfPages;	// IMP=0x0000000000159ec9
- (long long)_pageCountForPageControl;	// IMP=0x0000000000159eb7
- (double)_offsetToCenterPageControlInSpaceForPageControl;	// IMP=0x0000000000159e5c
- (_Bool)_useParallaxOnPageControl;	// IMP=0x0000000000159e54
- (id)_newPageControl;	// IMP=0x0000000000159e13
@property(readonly, nonatomic) double headerHeight;
- (void)_updateScalingViewFrame;	// IMP=0x0000000000159d09
- (struct CGRect)_frameForScalingView;	// IMP=0x0000000000159cea
- (void)_layoutSubviews;	// IMP=0x0000000000159c30
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000159b75
- (void)layoutSubviews;	// IMP=0x000000000015985c
- (void)setNeedsLayout;	// IMP=0x00000000001596fd
- (void)minimumHomeScreenScaleDidChange;	// IMP=0x00000000001596f7
- (void)_updateParallaxSettings;	// IMP=0x000000000015967f
@property(readonly, nonatomic, getter=isParallaxEnabled) _Bool parallaxEnabled;
- (void)_setParallaxDisabled:(_Bool)arg1 forReason:(id)arg2;	// IMP=0x0000000000159598
@property(readonly, nonatomic, getter=isRTL) _Bool RTL;
@property(readonly, nonatomic) long long userInterfaceLayoutDirection;
- (void)updateAccessibilityTintColors;	// IMP=0x0000000000159539
- (void)didAddSubview:(id)arg1;	// IMP=0x0000000000159379
- (void)didMoveToWindow;	// IMP=0x00000000001591e1
- (void)didMoveToSuperview;	// IMP=0x00000000001591a0
@property(readonly, nonatomic, getter=_titleTextField) SBFolderTitleTextField *titleTextField;
- (void)setContentAlpha:(double)arg1;	// IMP=0x0000000000159124
- (void)fadeContentForMinificationFraction:(double)arg1;	// IMP=0x000000000015911e
- (void)fadeContentForMagnificationFraction:(double)arg1;	// IMP=0x0000000000159118
- (void)didTransitionAnimated:(_Bool)arg1;	// IMP=0x0000000000159106
- (void)willTransitionAnimated:(_Bool)arg1 withSettings:(id)arg2;	// IMP=0x00000000001590f4
- (_Bool)locationCountsAsInsideFolder:(struct CGPoint)arg1;	// IMP=0x00000000001590a5
- (void)returnScalingView;	// IMP=0x000000000015905f
- (id)borrowScalingView;	// IMP=0x000000000015903f
- (struct CGRect)scalingViewFrame;	// IMP=0x0000000000159020
- (void)_willScrollToPageIndex:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000158fc2
- (void)_setScrollViewContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000158ea7
- (void)scrollUsingDecelerationAnimationToPageIndex:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000158c5a
- (void)resetContentOffsetToCurrentPageAnimated:(_Bool)arg1;	// IMP=0x0000000000158ac4
- (_Bool)setCurrentPageIndex:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001586f7
- (_Bool)setCurrentPageIndex:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001586e2
- (_Bool)canChangeCurrentPageIndexToIndex:(unsigned long long)arg1;	// IMP=0x0000000000158680
- (_Bool)doesPageContainIconListView:(long long)arg1;	// IMP=0x0000000000158644
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001585f6
- (long long)closestIconPageIndexForPageIndex:(long long)arg1;	// IMP=0x0000000000158590
- (unsigned long long)iconListViewIndexForIconListModelIndex:(unsigned long long)arg1;	// IMP=0x000000000015854b
- (long long)pageIndexForIconListModel:(id)arg1;	// IMP=0x00000000001584b0
- (long long)pageIndexForIconListModelIndex:(unsigned long long)arg1;	// IMP=0x0000000000158424
- (long long)pageIndexForIconListViewIndex:(unsigned long long)arg1;	// IMP=0x0000000000158404
- (unsigned long long)iconListModelIndexForPageIndex:(long long)arg1;	// IMP=0x000000000015832f
- (unsigned long long)iconListViewIndexForPageIndex:(long long)arg1;	// IMP=0x00000000001582d3
@property(readonly, nonatomic) unsigned long long iconListViewCount;
@property(readonly, copy, nonatomic) NSArray *iconListViews;
- (void)_orientationDidChange:(long long)arg1;	// IMP=0x00000000001580c5
@property(nonatomic) double pageControlAlpha;
@property(nonatomic, getter=isPageControlHidden) _Bool pageControlHidden;
- (void)_updatePageControlCurrentPage;	// IMP=0x0000000000157fc0
- (void)_updatePageControlToIndex:(long long)arg1;	// IMP=0x0000000000157f5c
- (void)_currentPageIndexDidChangeFromPageIndex:(long long)arg1;	// IMP=0x0000000000157f56
- (void)_currentPageIndexDidChange;	// IMP=0x0000000000157f50
- (void)_setCurrentPageIndex:(long long)arg1 deferringPageControlUpdate:(_Bool)arg2;	// IMP=0x0000000000157e5f
- (void)_setCurrentPageIndex:(long long)arg1;	// IMP=0x0000000000157e4b
- (void)scrollingDisabledGestureDidUpdate:(id)arg1;	// IMP=0x0000000000157d18
- (void)_setScrollingDisabled:(_Bool)arg1 forReason:(id)arg2;	// IMP=0x0000000000157a72
- (void)_setPageControlDisabled:(_Bool)arg1 forReason:(id)arg2;	// IMP=0x00000000001579be
- (void)_addScrollingCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000157918
- (void)cancelScrolling;	// IMP=0x00000000001578c0
@property(readonly, nonatomic, getter=isScrolling) _Bool scrolling;
@property(readonly, nonatomic) UIView *scalingView;
- (void)folderDidChange;	// IMP=0x00000000001574a5
- (void)folderWillChange:(id)arg1;	// IMP=0x00000000001573cf
- (void)_configureScrollingInteraction:(id)arg1;	// IMP=0x00000000001573c9
- (void)dealloc;	// IMP=0x000000000015733a
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000000156c38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

