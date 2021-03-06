//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardHome/SBFOverlayObserving-Protocol.h>
#import <SpringBoardHome/SBFolderControllerDelegate-Protocol.h>
#import <SpringBoardHome/SBHIconLibraryTableViewControllerObserver-Protocol.h>
#import <SpringBoardHome/SBHLibraryCategoryMapProviderObserver-Protocol.h>
#import <SpringBoardHome/SBHLibraryPodFolderControllerDelegate-Protocol.h>
#import <SpringBoardHome/SBHLibraryProvider-Protocol.h>
#import <SpringBoardHome/SBHLibrarySearchControllerDelegate-Protocol.h>
#import <SpringBoardHome/SBHVisibleContentPresenter-Protocol.h>
#import <SpringBoardHome/SBIconViewDelegate-Protocol.h>
#import <SpringBoardHome/SBIconViewProviding-Protocol.h>
#import <SpringBoardHome/SBNestingViewControllerDelegate-Protocol.h>
#import <SpringBoardHome/UISearchBarDelegate-Protocol.h>

@class BSEventQueue, NSArray, NSHashTable, NSMapTable, NSMutableArray, NSSet, NSString, NSTimer, SBFolderController, SBFolderIconImageCache, SBHIconImageCache, SBHIconLibraryTableViewController, SBHIconModel, SBHLibraryCategoriesRootFolder, SBHLibraryCategoryMap, SBHLibraryCategoryMapProvider, SBHLibraryPodFolderController, SBHLibrarySearchController, SBHomeScreenIconTransitionAnimator, SBRootFolder, UIView, UIViewController, _SBHLibraryCollectionOfModelThings, _UILegibilitySettings;
@protocol BSInvalidatable, SBHomeScreenIconTransitionAnimatorDelegate, SBIconListLayoutProvider, SBIconViewDelegate, SBIconViewProviding;

@interface SBHLibraryViewController <UISearchBarDelegate, SBHLibrarySearchControllerDelegate, SBHLibraryCategoryMapProviderObserver, SBHIconLibraryTableViewControllerObserver, SBIconViewProviding, SBIconViewDelegate, SBNestingViewControllerDelegate, SBHLibraryPodFolderControllerDelegate, SBFolderControllerDelegate, SBHLibraryProvider, SBFOverlayObserving, SBHVisibleContentPresenter>
{
    SBHLibraryCategoryMapProvider *_categoryMapProvider;	// 8 = 0x8
    NSArray *_containerViewControllerConstraints;	// 16 = 0x10
    NSMapTable *_iconViewControllerForCategoryIdentifier;	// 24 = 0x18
    SBFolderIconImageCache *_folderIconImageCache;	// 32 = 0x20
    SBHLibraryCategoryMap *_pendingLibraryCategoryMap;	// 40 = 0x28
    _SBHLibraryCollectionOfModelThings *_model;	// 48 = 0x30
    SBHLibraryCategoriesRootFolder *_categoriesFolder;	// 56 = 0x38
    NSTimer *_searchControllerAppLaunchResetTimer;	// 64 = 0x40
    NSTimer *_libraryViewControllerDismissalTimer;	// 72 = 0x48
    NSHashTable *_observers;	// 80 = 0x50
    NSMapTable *_presentedFolderControllers;	// 88 = 0x58
    NSMapTable *_dismissingFolderControllers;	// 96 = 0x60
    id <BSInvalidatable> _libraryPrewarmAssertion;	// 104 = 0x68
    _Bool _allowsBadging;	// 112 = 0x70
    _Bool _suppressesEditingStateForListViews;	// 113 = 0x71
    id <SBIconViewProviding> _iconViewProvider;	// 120 = 0x78
    SBHIconModel *_iconModel;	// 128 = 0x80
    _UILegibilitySettings *_legibilitySettings;	// 136 = 0x88
    SBHIconImageCache *_iconImageCache;	// 144 = 0x90
    id <SBIconListLayoutProvider> _listLayoutProvider;	// 152 = 0x98
    id <SBHomeScreenIconTransitionAnimatorDelegate> _homeScreenIconTransitionAnimatorDelegate;	// 160 = 0xa0
    unsigned long long _contentVisibility;	// 168 = 0xa8
    SBHLibraryCategoryMap *_libraryCategoryMap;	// 176 = 0xb0
    id <SBIconViewDelegate> _iconViewDelegate;	// 184 = 0xb8
    UIViewController *_barSwipeViewController;	// 192 = 0xc0
    UIView *_externalBackgroundView;	// 200 = 0xc8
    BSEventQueue *_transitionEventQueue;	// 208 = 0xd0
    SBHomeScreenIconTransitionAnimator *_currentTransitionAnimator;	// 216 = 0xd8
    NSMutableArray *_currentExpandCompletions;	// 224 = 0xe0
    NSMutableArray *_currentCollapseCompletions;	// 232 = 0xe8
    SBHLibrarySearchController *_containerViewController;	// 240 = 0xf0
    SBHIconLibraryTableViewController *_iconTableViewController;	// 248 = 0xf8
    SBHLibraryPodFolderController *_podFolderViewController;	// 256 = 0x100
}

+ (id)_updateCategoryMap:(id)arg1 withCategoryDataFrom:(id)arg2;	// IMP=0x00000000001e5259
- (void).cxx_destruct;	// IMP=0x00000000001e7f28
@property(readonly, nonatomic) SBHLibraryPodFolderController *podFolderViewController; // @synthesize podFolderViewController=_podFolderViewController;
@property(readonly, nonatomic) SBHIconLibraryTableViewController *iconTableViewController; // @synthesize iconTableViewController=_iconTableViewController;
@property(readonly, nonatomic) SBHLibrarySearchController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(retain, nonatomic) NSMutableArray *currentCollapseCompletions; // @synthesize currentCollapseCompletions=_currentCollapseCompletions;
@property(retain, nonatomic) NSMutableArray *currentExpandCompletions; // @synthesize currentExpandCompletions=_currentExpandCompletions;
@property(retain, nonatomic) SBHomeScreenIconTransitionAnimator *currentTransitionAnimator; // @synthesize currentTransitionAnimator=_currentTransitionAnimator;
@property(readonly, nonatomic) BSEventQueue *transitionEventQueue; // @synthesize transitionEventQueue=_transitionEventQueue;
@property(nonatomic) _Bool suppressesEditingStateForListViews; // @synthesize suppressesEditingStateForListViews=_suppressesEditingStateForListViews;
@property(nonatomic) _Bool allowsBadging; // @synthesize allowsBadging=_allowsBadging;
@property(nonatomic) __weak UIView *externalBackgroundView; // @synthesize externalBackgroundView=_externalBackgroundView;
@property(retain, nonatomic) UIViewController *barSwipeViewController; // @synthesize barSwipeViewController=_barSwipeViewController;
@property(readonly, nonatomic) SBHLibraryCategoryMapProvider *categoryMapProvider; // @synthesize categoryMapProvider=_categoryMapProvider;
@property(nonatomic) __weak id <SBIconViewDelegate> iconViewDelegate; // @synthesize iconViewDelegate=_iconViewDelegate;
@property(readonly, nonatomic) SBHLibraryCategoryMap *libraryCategoryMap; // @synthesize libraryCategoryMap=_libraryCategoryMap;
@property(nonatomic) unsigned long long contentVisibility; // @synthesize contentVisibility=_contentVisibility;
@property(nonatomic) __weak id <SBHomeScreenIconTransitionAnimatorDelegate> homeScreenIconTransitionAnimatorDelegate; // @synthesize homeScreenIconTransitionAnimatorDelegate=_homeScreenIconTransitionAnimatorDelegate;
@property(nonatomic) __weak id <SBIconListLayoutProvider> listLayoutProvider; // @synthesize listLayoutProvider=_listLayoutProvider;
@property(retain, nonatomic) SBHIconImageCache *iconImageCache; // @synthesize iconImageCache=_iconImageCache;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(retain, nonatomic) SBHIconModel *iconModel; // @synthesize iconModel=_iconModel;
@property(nonatomic) __weak id <SBIconViewProviding> iconViewProvider; // @synthesize iconViewProvider=_iconViewProvider;
- (void)_updateDragPreviewIconViewsForDropSession:(id)arg1 inIconListView:(id)arg2;	// IMP=0x00000000001e7aaf
- (_Bool)_canPerformDropForDraggedIcon:(id)arg1;	// IMP=0x00000000001e79ef
- (_Bool)_canPerformDropForAnyItemInSession:(id)arg1;	// IMP=0x00000000001e77e2
- (id)_destinationFolderIconViewForDragItem:(id)arg1 folderRelativeIconIndexPath:(id *)arg2;	// IMP=0x00000000001e7517
- (id)_draggedItemIdentifiersInSession:(id)arg1;	// IMP=0x00000000001e7249
- (id)_iconIdentifierForDragItem:(id)arg1;	// IMP=0x00000000001e71f6
- (id)folderController:(id)arg1 iconListView:(id)arg2 customSpringAnimationBehaviorForDroppingItem:(id)arg3;	// IMP=0x00000000001e71ee
- (void)folderController:(id)arg1 iconListView:(id)arg2 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg3;	// IMP=0x00000000001e71e8
- (_Bool)folderController:(id)arg1 iconListView:(id)arg2 shouldAllowSpringLoadedInteractionForIconDropSession:(id)arg3 onIconView:(id)arg4;	// IMP=0x00000000001e71e0
- (void)folderController:(id)arg1 iconListView:(id)arg2 iconDragItem:(id)arg3 willAnimateDropWithAnimator:(id)arg4;	// IMP=0x00000000001e6df4
- (id)folderController:(id)arg1 iconListView:(id)arg2 previewForDroppingIconDragItem:(id)arg3 proposedPreview:(id)arg4;	// IMP=0x00000000001e6861
- (void)folderController:(id)arg1 iconListView:(id)arg2 willUseIconView:(id)arg3 forDroppingIconDragItem:(id)arg4;	// IMP=0x00000000001e685b
- (void)folderController:(id)arg1 iconListView:(id)arg2 performIconDrop:(id)arg3;	// IMP=0x00000000001e632f
- (void)folderController:(id)arg1 iconListView:(id)arg2 iconDropSessionDidExit:(id)arg3;	// IMP=0x00000000001e631a
- (void)folderController:(id)arg1 iconListView:(id)arg2 iconDropSession:(id)arg3 didPauseAtLocation:(struct CGPoint)arg4;	// IMP=0x00000000001e6314
- (id)folderController:(id)arg1 iconListView:(id)arg2 iconDropSessionDidUpdate:(id)arg3;	// IMP=0x00000000001e6281
- (void)folderController:(id)arg1 iconListView:(id)arg2 iconDropSessionDidEnter:(id)arg3;	// IMP=0x00000000001e626c
- (_Bool)folderController:(id)arg1 iconListView:(id)arg2 canHandleIconDropSession:(id)arg3;	// IMP=0x00000000001e6197
- (void)folderControllerDidEndScrolling:(id)arg1;	// IMP=0x00000000001e6191
- (void)folderControllerWillBeginScrolling:(id)arg1;	// IMP=0x00000000001e618b
- (void)folderControllerShouldEndEditing:(id)arg1;	// IMP=0x00000000001e6185
- (void)folderControllerShouldBeginEditing:(id)arg1 withHaptic:(_Bool)arg2;	// IMP=0x00000000001e617f
- (_Bool)folderControllerShouldClose:(id)arg1 withPinchGesture:(id)arg2;	// IMP=0x00000000001e6177
- (void)folderController:(id)arg1 draggedIconShouldDropFromListView:(id)arg2;	// IMP=0x00000000001e6171
- (_Bool)folderController:(id)arg1 canChangeCurrentPageIndexToIndex:(long long)arg2;	// IMP=0x00000000001e6169
- (Class)controllerClassForFolder:(id)arg1;	// IMP=0x00000000001e6154
- (void)folderController:(id)arg1 willUseIconTransitionAnimator:(id)arg2 forOperation:(long long)arg3 onViewController:(id)arg4 animated:(_Bool)arg5;	// IMP=0x00000000001e613f
- (void)_dismissSearchIfNotInUseForReason:(id)arg1 sessionIdentifier:(id)arg2;	// IMP=0x00000000001e5fb4
- (void)_startAppLaunchResetTimer:(id)arg1;	// IMP=0x00000000001e5ce3
- (void)invalidateSearchControllerAppLaunchResetTimer;	// IMP=0x00000000001e5cab
- (id)acquireLibrarySearchPrewarmAssertionForReason:(id)arg1;	// IMP=0x00000000001e5c8e
- (void)_dismissLibraryViewControllerForReason:(id)arg1 sessionIdentifier:(id)arg2;	// IMP=0x00000000001e5b73
- (void)_startLibraryViewControllerDismissalTimer:(id)arg1;	// IMP=0x00000000001e588d
- (void)_invalidateLibraryViewControllerDismissalTimer;	// IMP=0x00000000001e5855
- (void)libraryTableViewControllerDidLaunchIcon:(id)arg1;	// IMP=0x00000000001e57ac
- (void)libraryTableViewControllerWillDisappear:(id)arg1;	// IMP=0x00000000001e578d
- (void)libraryTableViewControllerDidAppear:(id)arg1;	// IMP=0x00000000001e574f
- (void)_installCategoryMap:(id)arg1;	// IMP=0x00000000001e53cd
- (void)_flushPendingLibraryCategoryMapUpdateIfNeeded;	// IMP=0x00000000001e5303
- (void)_updateLibraryCategoryMap:(id)arg1;	// IMP=0x00000000001e4efb
- (void)libraryCategoryMapProvider:(id)arg1 categoryMapWasRefreshed:(unsigned long long)arg2 libraryCategoryMap:(id)arg3;	// IMP=0x00000000001e4ee6
- (void)_enumerateObservers:(CDUnknownBlockType)arg1;	// IMP=0x00000000001e4da8
- (void)_notifyObserversOfAcceptedDrop:(id)arg1;	// IMP=0x00000000001e4cbe
- (void)_notifyObserversDataSourceDidChange;	// IMP=0x00000000001e4be5
- (void)_notifyObserversOfAppLaunchOfIcon:(id)arg1 fromLocation:(id)arg2;	// IMP=0x00000000001e4acf
- (void)_notifyObserversDidPresent;	// IMP=0x00000000001e4a31
- (void)_notifyObserversWillPresent;	// IMP=0x00000000001e4993
- (void)_notifyObserversDidDismiss;	// IMP=0x00000000001e48f5
- (void)_notifyObserversWillDismiss;	// IMP=0x00000000001e4857
- (void)_notifyObserversDidDismissFolderController:(id)arg1;	// IMP=0x00000000001e47c5
- (void)_notifyObserversWillDismissFolderController:(id)arg1;	// IMP=0x00000000001e4643
- (void)_notifyObserversWillPresentFolderController:(id)arg1;	// IMP=0x00000000001e44bc
- (void)_notifyObserversWillPresentSearchController:(id)arg1;	// IMP=0x00000000001e43d2
- (void)_notifyObserversDidPresentSearchController:(id)arg1;	// IMP=0x00000000001e42e8
- (void)_notifyObserversDidDismissSearchController:(id)arg1;	// IMP=0x00000000001e41fe
- (void)_notifyObserversWillDismissSearchController:(id)arg1;	// IMP=0x00000000001e4114
- (void)_notifyObserversRequestDismissal;	// IMP=0x00000000001e4076
- (void)removeObserver:(id)arg1;	// IMP=0x00000000001e4059
- (void)addObserver:(id)arg1;	// IMP=0x00000000001e3fdf
- (void)didDismissSearchController:(id)arg1;	// IMP=0x00000000001e3f9c
- (void)willDismissSearchController:(id)arg1;	// IMP=0x00000000001e3f59
- (void)didPresentSearchController:(id)arg1;	// IMP=0x00000000001e3efa
- (void)willPresentSearchController:(id)arg1;	// IMP=0x00000000001e3e57
@property(readonly, nonatomic, getter=isPresentingFolder) _Bool presentingFolder;
- (void)_scrollIconViewToVisible:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001e3a74
- (void)_updateEditingStateAnimated:(_Bool)arg1;	// IMP=0x00000000001e39cd
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001e395a
- (void)noteInstalledApplicationsDidChange;	// IMP=0x00000000001e3954
- (void)_enqueueAppLibraryUpdate;	// IMP=0x00000000001e3922
- (void)_setupIconTableViewController:(_Bool)arg1;	// IMP=0x00000000001e2b02
- (void)_rebuildIconCache;	// IMP=0x00000000001e28c9
- (void)_updateViewControllerLegibility:(id)arg1 legibilitySettings:(id)arg2;	// IMP=0x00000000001e285f
- (void)_updateViewControllerLegibility:(id)arg1;	// IMP=0x00000000001e26cf
- (void)enumerateIconViewQueryableChildrenWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001e25a6
- (void)enumerateIconViewQueryableChildrenUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001e258f
- (void)_enumerateAllViewControllersUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001e2521
- (void)enumerateViewControllersUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001e2478
- (CDUnknownBlockType)_wrappedCompletionBlockForNestedTransitionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001e1d0e
- (void)_enqueueTransitionName:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001e1b6e
- (void)overlayController:(id)arg1 didChangePresentationProgress:(double)arg2 newPresentationProgress:(double)arg3 fromLeading:(_Bool)arg4;	// IMP=0x00000000001e1aed
- (void)overlayController:(id)arg1 visibilityDidChange:(_Bool)arg2;	// IMP=0x00000000001e1aac
- (void)overlayControllerDidBeginChangingPresentationProgress:(id)arg1;	// IMP=0x00000000001e1a75
- (_Bool)iconView:(id)arg1 editingModeGestureRecognizerDidFire:(id)arg2;	// IMP=0x00000000001e1939
- (long long)closeBoxTypeForIconView:(id)arg1;	// IMP=0x00000000001e18c2
- (id)_additionalItemsIndicatorIconViewForFolderController:(id)arg1;	// IMP=0x00000000001e1458
- (unsigned long long)focusEffectTypeForIconView:(id)arg1;	// IMP=0x00000000001e144d
- (_Bool)iconViewCanBecomeFocused:(id)arg1;	// IMP=0x00000000001e138f
- (_Bool)iconViewDisplaysAccessories:(id)arg1;	// IMP=0x00000000001e0eca
- (_Bool)iconViewDisplaysCloseBox:(id)arg1;	// IMP=0x00000000001e0e53
- (void)iconCloseBoxTapped:(id)arg1;	// IMP=0x00000000001e0de1
- (_Bool)iconShouldAllowCloseBoxTap:(id)arg1;	// IMP=0x00000000001e0d6a
- (_Bool)iconView:(id)arg1 canAddDragItemsToSession:(id)arg2;	// IMP=0x00000000001e0d62
- (_Bool)iconViewCanBeginDrags:(id)arg1;	// IMP=0x00000000001e0d5a
- (_Bool)iconViewShouldBeginShortcutsPresentation:(id)arg1;	// IMP=0x00000000001e0d52
- (id)shortcutsDelegateForIconView:(id)arg1;	// IMP=0x00000000001e0c77
- (id)draggingDelegateForIconView:(id)arg1;	// IMP=0x00000000001e0bd3
- (void)iconViewWasDiscarded:(id)arg1;	// IMP=0x00000000001e0b61
- (void)iconViewWasRecycled:(id)arg1;	// IMP=0x00000000001e0aef
- (id)_iconLocationForCategoryIdentifier:(id)arg1;	// IMP=0x00000000001e0a59
- (void)_precacheIconViewControllersForCategories:(id)arg1;	// IMP=0x00000000001e07a9
- (id)_createIconViewControllerForCategoryIdentifier:(id)arg1;	// IMP=0x00000000001e0643
- (id)_iconViewControllerForCategoryIdentifier:(id)arg1;	// IMP=0x00000000001e04fc
- (id)_customImageViewControllerForCategoryPodIconView:(id)arg1 usingInternalCache:(_Bool)arg2;	// IMP=0x00000000001e03e0
- (id)customImageViewControllerForIconView:(id)arg1;	// IMP=0x00000000001e03c9
- (void)iconTapped:(id)arg1;	// IMP=0x00000000001e02f3
- (_Bool)iconShouldAllowTap:(id)arg1;	// IMP=0x00000000001e02ad
- (long long)iconViewComponentBackgroundViewTypeForIconView:(id)arg1;	// IMP=0x00000000001e02a2
- (id)iconView:(id)arg1 labelImageWithParameters:(id)arg2;	// IMP=0x00000000001e020b
- (void)nestingViewController:(id)arg1 willPerformOperation:(long long)arg2 onViewController:(id)arg3 withTransitionCoordinator:(id)arg4;	// IMP=0x00000000001dfc8c
- (id)nestingViewController:(id)arg1 animationControllerForOperation:(long long)arg2 onViewController:(id)arg3 animated:(_Bool)arg4;	// IMP=0x00000000001df8c8
- (void)popNestedViewControllerAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001df704
- (void)pushNestedViewController:(id)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001df37f
- (void)libraryPodFolderControllerRequestsDismissal:(id)arg1;	// IMP=0x00000000001df2b6
- (void)libraryPodFolderController:(id)arg1 willLayoutDisplayedCategories:(unsigned long long)arg2;	// IMP=0x00000000001df1dc
- (void)configureIconView:(id)arg1 forIcon:(id)arg2;	// IMP=0x00000000001df128
- (_Bool)isIconViewRecycled:(id)arg1;	// IMP=0x00000000001df0c7
- (void)recycleIconView:(id)arg1;	// IMP=0x00000000001df06a
- (id)dequeueReusableIconViewOfClass:(Class)arg1;	// IMP=0x00000000001df01e
- (_Bool)isDisplayingIconView:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000001dee61
- (_Bool)isDisplayingIcon:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000001deca4
- (id)firstIconViewForIcon:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000001dea91
- (id)firstIconViewForIcon:(id)arg1 excludingLocations:(id)arg2;	// IMP=0x00000000001de8ce
- (void)enumerateDisplayedIconViewsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001de827
- (void)enumerateDisplayedIconViewsForIcon:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001de742
- (_Bool)isDisplayingIconView:(id)arg1 inLocation:(id)arg2;	// IMP=0x00000000001de5cf
- (_Bool)isDisplayingIconView:(id)arg1;	// IMP=0x00000000001de496
- (_Bool)isDisplayingIcon:(id)arg1;	// IMP=0x00000000001de35d
- (_Bool)isDisplayingIcon:(id)arg1 inLocations:(id)arg2;	// IMP=0x00000000001de1ea
- (_Bool)isDisplayingIcon:(id)arg1 inLocation:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x00000000001de072
- (_Bool)isDisplayingIcon:(id)arg1 inLocation:(id)arg2;	// IMP=0x00000000001de05d
- (id)firstNonSuggestionsOrRecentsIconViewForIcon:(id)arg1;	// IMP=0x00000000001ddea9
- (id)firstIconViewForIcon:(id)arg1;	// IMP=0x00000000001ddd36
- (id)firstIconViewForIcon:(id)arg1 inLocations:(id)arg2;	// IMP=0x00000000001ddb8e
- (id)iconViewForIcon:(id)arg1 location:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x00000000001dd9bb
- (id)iconViewForIcon:(id)arg1 location:(id)arg2;	// IMP=0x00000000001dd9a6
@property(readonly, copy, nonatomic) NSSet *presentedIconLocations;
- (_Bool)isPresentingIconLocation:(id)arg1;	// IMP=0x00000000001dd854
@property(readonly, nonatomic) SBRootFolder *categoriesRootFolder;
- (void)forcedSearchTextFieldNoneditable:(_Bool)arg1;	// IMP=0x00000000001dd7a7
- (_Bool)presentPodWithCategoryIdentifier:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001dd5bf
- (_Bool)presentPodWithCategory:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001dd0c8
- (void)_addBarSwipeView;	// IMP=0x00000000001dce6f
- (void)layoutIconListsWithAnimationType:(long long)arg1 forceRelayout:(_Bool)arg2;	// IMP=0x00000000001dcc39
- (void)noteIconViewWillZoomDown:(id)arg1;	// IMP=0x00000000001dcc22
- (void)dismissSearch;	// IMP=0x00000000001dcc05
@property(readonly, nonatomic, getter=isPresentingSearch) _Bool presentingSearch;
@property(readonly, nonatomic) SBFolderIconImageCache *folderIconImageCache;
@property(readonly, nonatomic) SBFolderController *folderController;
@property(retain, nonatomic) UIView *searchDimmingView;
- (void)_expandPodAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001dc349
- (void)_dismissExpandedPods:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001dc2ca
- (id)overrideTraitCollectionForChildViewController:(id)arg1;	// IMP=0x00000000001dc1c2
- (id)contentScrollView;	// IMP=0x00000000001dc0f1
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000001dbf67
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;	// IMP=0x00000000001dbe5c
- (void)viewWillLayoutSubviews;	// IMP=0x00000000001dbdb6
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000001dbcd0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000001dbc59
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000001dbbee
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000001dbaf5
- (void)viewDidLoad;	// IMP=0x00000000001dba49
- (void)loadView;	// IMP=0x00000000001db937
- (void)iconModelDidLayout:(id)arg1;	// IMP=0x00000000001db7cd
- (void)dealloc;	// IMP=0x00000000001db74b
- (id)init;	// IMP=0x00000000001db737
- (id)initWithCategoryMapProvider:(id)arg1;	// IMP=0x00000000001db64a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

