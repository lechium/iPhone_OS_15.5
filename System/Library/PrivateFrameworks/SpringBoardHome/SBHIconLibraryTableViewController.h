//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardHome/PTSettingsKeyObserver-Protocol.h>
#import <SpringBoardHome/SBHLibraryChildViewController-Protocol.h>
#import <SpringBoardHome/SBHScrollableIconViewContaining-Protocol.h>
#import <SpringBoardHome/SBHSearchResultsUpdating-Protocol.h>
#import <SpringBoardHome/SBHTableViewIconLibraryObserver-Protocol.h>
#import <SpringBoardHome/SBIconObserver-Protocol.h>
#import <SpringBoardHome/SBIconViewObserver-Protocol.h>
#import <SpringBoardHome/UIGestureRecognizerDelegate-Protocol.h>
#import <SpringBoardHome/UITableViewDelegatePrivate-Protocol.h>
#import <SpringBoardHome/UITableViewDragDelegate-Protocol.h>

@class NSCountedSet, NSHashTable, NSMapTable, NSSet, NSString, SBFolderIconImageCache, SBHAppLibrarySettings, SBHIconImageCache, SBHIconLibraryQuery, SBHIconModel, SBHIconTableViewDiffableDataSource, SBHLibraryCategoryMap, SBHLibrarySearchController, SBHScrollableIconViewInteraction, SBHTableViewIconLibrary, SBRootFolder, UIView, _UILegibilitySettings;
@protocol BSInvalidatable, SBHIconLibraryTableViewControllerLayoutDelegate, SBHIconLibraryTableViewControllerObserver, SBIconListLayoutProvider, SBIconViewProviding;

@interface SBHIconLibraryTableViewController <SBIconObserver, SBIconViewObserver, PTSettingsKeyObserver, UITableViewDelegatePrivate, UITableViewDragDelegate, UIGestureRecognizerDelegate, SBHTableViewIconLibraryObserver, SBHScrollableIconViewContaining, SBHLibraryChildViewController, SBHSearchResultsUpdating>
{
    _Bool _showHeaders;	// 8 = 0x8
    _Bool _needsLowQualityAlphaFade;	// 9 = 0x9
    SBHScrollableIconViewInteraction *_scrollingInteraction;	// 16 = 0x10
    NSHashTable *_grabbedIconViews;	// 24 = 0x18
    NSHashTable *_observedIcons;	// 32 = 0x20
    NSMapTable *_dragSessionsForIconView;	// 40 = 0x28
    SBHAppLibrarySettings *_settings;	// 48 = 0x30
    _Bool _usesPlatterAppearance;	// 56 = 0x38
    _Bool _hasAppeared;	// 57 = 0x39
    id <BSInvalidatable> _isVisibleLibrarySearchPrewarmAssertion;	// 64 = 0x40
    NSCountedSet *_libraryPrewarmAssertions;	// 72 = 0x48
    _Bool _disablesNullQueryExecution;	// 80 = 0x50
    _UILegibilitySettings *_legibilitySettings;	// 88 = 0x58
    SBHIconTableViewDiffableDataSource *_dataSource;	// 96 = 0x60
    SBHIconImageCache *_iconImageCache;	// 104 = 0x68
    id <SBIconListLayoutProvider> _listLayoutProvider;	// 112 = 0x70
    SBHLibrarySearchController *_searchController;	// 120 = 0x78
    id <SBIconViewProviding> _iconViewProvider;	// 128 = 0x80
    id <SBHIconLibraryTableViewControllerObserver> _observer;	// 136 = 0x88
    id <SBHIconLibraryTableViewControllerLayoutDelegate> _layoutDelegate;	// 144 = 0x90
    SBHIconModel *_iconModel;	// 152 = 0x98
    SBRootFolder *_rootFolder;	// 160 = 0xa0
    SBHLibraryCategoryMap *_libraryCategoryMap;	// 168 = 0xa8
    UIView *_headerBlurView;	// 176 = 0xb0
    SBHTableViewIconLibrary *_library;	// 184 = 0xb8
    SBHIconLibraryQuery *_currentQuery;	// 192 = 0xc0
}

+ (Class)tableViewClass;	// IMP=0x00000000001f2ab5
- (void).cxx_destruct;	// IMP=0x00000000001f8a04
@property(readonly, nonatomic) SBHIconLibraryQuery *currentQuery; // @synthesize currentQuery=_currentQuery;
@property(readonly, nonatomic) SBHTableViewIconLibrary *library; // @synthesize library=_library;
@property(nonatomic) _Bool disablesNullQueryExecution; // @synthesize disablesNullQueryExecution=_disablesNullQueryExecution;
@property(retain, nonatomic) UIView *headerBlurView; // @synthesize headerBlurView=_headerBlurView;
@property(retain, nonatomic) SBHLibraryCategoryMap *libraryCategoryMap; // @synthesize libraryCategoryMap=_libraryCategoryMap;
@property(retain, nonatomic) SBRootFolder *rootFolder; // @synthesize rootFolder=_rootFolder;
@property(retain, nonatomic) SBHIconModel *iconModel; // @synthesize iconModel=_iconModel;
@property(nonatomic) __weak id <SBHIconLibraryTableViewControllerLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(nonatomic) __weak id <SBHIconLibraryTableViewControllerObserver> observer; // @synthesize observer=_observer;
@property(retain, nonatomic) id <SBIconViewProviding> iconViewProvider; // @synthesize iconViewProvider=_iconViewProvider;
@property(nonatomic) __weak SBHLibrarySearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) id <SBIconListLayoutProvider> listLayoutProvider; // @synthesize listLayoutProvider=_listLayoutProvider;
@property(retain, nonatomic) SBHIconImageCache *iconImageCache; // @synthesize iconImageCache=_iconImageCache;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
- (id)acquireLibrarySearchPrewarmAssertionForReason:(id)arg1;	// IMP=0x00000000001f87dd
- (void)_invalidatePrewarmAssertion:(id)arg1;	// IMP=0x00000000001f877c
- (id)_createIconView;	// IMP=0x00000000001f8739
- (id)_iconViewAtIndexPath:(id)arg1;	// IMP=0x00000000001f867d
- (id)_iconViewForIcon:(id)arg1;	// IMP=0x00000000001f85a6
- (id)_nullQuery;	// IMP=0x00000000001f8576
- (id)_queryForCurrentSearchTextField;	// IMP=0x00000000001f815a
- (id)_indexPathForDefaultSearchResult;	// IMP=0x00000000001f80e0
- (void)_notifyDelegatesOfAppLaunchFromSearchController:(id)arg1;	// IMP=0x00000000001f8083
- (void)_handleDidTapEmptyResultsArea:(id)arg1;	// IMP=0x00000000001f8044
- (void)_logLaunchOfIcon:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000001f8032
- (_Bool)_shouldShowNoResultsViewForQueryResult:(id)arg1;	// IMP=0x00000000001f7f02
- (void)_configureCell:(id)arg1 forIcon:(id)arg2;	// IMP=0x00000000001f7c96
- (_Bool)_isIndexPathVisible:(id)arg1;	// IMP=0x00000000001f7c1f
- (_Bool)_isViewControllerVisible;	// IMP=0x00000000001f7c04
- (id)_visibleIndexPaths;	// IMP=0x00000000001f7b80
- (id)_visibleSectionIndicies;	// IMP=0x00000000001f79fb
- (id)_visibleIcons;	// IMP=0x00000000001f783e
- (void)_reloadRowsAtIndexPaths:(id)arg1;	// IMP=0x00000000001f7724
- (void)_reloadVisibleCells;	// IMP=0x00000000001f7699
- (void)_updateSectionHeaderHeight;	// IMP=0x00000000001f7635
- (void)_updateShowHeadersFromQueryResult:(id)arg1;	// IMP=0x00000000001f74fa
- (void)iconLibrary:(id)arg1 hasUpdatedQueryResult:(id)arg2;	// IMP=0x00000000001f72d0
- (void)_refreshIconCache;	// IMP=0x00000000001f713c
- (void)_reloadAppIcons;	// IMP=0x00000000001f70a3
- (_Bool)_executeQuery:(id)arg1;	// IMP=0x00000000001f6f70
- (CDUnknownBlockType)_iconFilter;	// IMP=0x00000000001f6f13
- (void)_resetDragSession:(id)arg1;	// IMP=0x00000000001f6cea
- (void)_mapIconView:(id)arg1 forDragSession:(id)arg2;	// IMP=0x00000000001f6c53
- (id)_dragSessionForIconView:(id)arg1;	// IMP=0x00000000001f6c36
- (id)_iconViewForDragSession:(id)arg1;	// IMP=0x00000000001f6a6e
- (id)_processDragItemsForIconView:(id)arg1 session:(id)arg2;	// IMP=0x00000000001f67a3
- (_Bool)tableView:(id)arg1 dragSessionAllowsMoveOperation:(id)arg2;	// IMP=0x00000000001f679b
- (id)tableView:(id)arg1 dragPreviewParametersForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001f6734
- (void)tableView:(id)arg1 dragSessionDidEnd:(id)arg2;	// IMP=0x00000000001f669e
- (void)tableView:(id)arg1 dragSessionWillBegin:(id)arg2;	// IMP=0x00000000001f6632
- (id)tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000001f65a6
- (void)_setupObservedIcons;	// IMP=0x00000000001f634b
- (void)_teardownObservedIcons;	// IMP=0x00000000001f61fc
- (void)_stopObservingIcon:(id)arg1;	// IMP=0x00000000001f61e1
- (_Bool)_startObservingIcon:(id)arg1;	// IMP=0x00000000001f6189
- (void)_unobserveIcon:(id)arg1;	// IMP=0x00000000001f610c
- (_Bool)_observeIcon:(id)arg1;	// IMP=0x00000000001f6051
- (void)iconAccessoriesDidUpdate:(id)arg1;	// IMP=0x00000000001f603f
- (void)iconViewDidEndDrag:(id)arg1;	// IMP=0x00000000001f5fa0
- (void)iconViewWillBeginDrag:(id)arg1;	// IMP=0x00000000001f5dbb
- (id)firstIconViewForIcon:(id)arg1 excludingLocations:(id)arg2;	// IMP=0x00000000001f5cce
- (void)enumerateDisplayedIconViewsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001f5a07
- (void)enumerateDisplayedIconViewsForIcon:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001f58f3
- (_Bool)isDisplayingIconView:(id)arg1 inLocation:(id)arg2;	// IMP=0x00000000001f588a
- (_Bool)isDisplayingIconView:(id)arg1;	// IMP=0x00000000001f577f
- (_Bool)isDisplayingIcon:(id)arg1 inLocations:(id)arg2;	// IMP=0x00000000001f5603
- (_Bool)isDisplayingIcon:(id)arg1 inLocation:(id)arg2;	// IMP=0x00000000001f559a
- (_Bool)isDisplayingIcon:(id)arg1;	// IMP=0x00000000001f54b1
- (id)firstIconViewForIcon:(id)arg1;	// IMP=0x00000000001f53aa
- (id)firstIconViewForIcon:(id)arg1 inLocations:(id)arg2;	// IMP=0x00000000001f531f
- (id)iconViewForIcon:(id)arg1 location:(id)arg2;	// IMP=0x00000000001f51f7
@property(readonly, copy, nonatomic) NSSet *presentedIconLocations;
- (_Bool)isPresentingIconLocation:(id)arg1;	// IMP=0x00000000001f51b5
- (_Bool)searchControllerShouldReturn:(id)arg1;	// IMP=0x00000000001f50e3
- (void)updateSearchResultsForSearchController:(id)arg1;	// IMP=0x00000000001f5097
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000001f4fea
- (void)_handleAlphaFadeForCell:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000001f4dc7
- (void)_handleLowQualityAlphaFade;	// IMP=0x00000000001f4c4e
- (void)enumerateScrollableIconViewsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001f4c3c
- (struct UIEdgeInsets)visibleContainerInsets;	// IMP=0x00000000001f4bad
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x00000000001f4b8e
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x00000000001f4b6f
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x00000000001f4b4a
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00000000001f4b06
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000001f4acd
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x00000000001f4ac5
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000000001f4a45
- (_Bool)tableView:(id)arg1 shouldHaveFullLengthBottomSeparatorForSection:(long long)arg2;	// IMP=0x00000000001f4a3d
- (_Bool)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;	// IMP=0x00000000001f4a14
- (struct CGRect)tableView:(id)arg1 frameForSectionIndexGivenProposedFrame:(struct CGRect)arg2;	// IMP=0x00000000001f4898
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000001f4849
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000001f4790
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x00000000001f4650
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000001f4595
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;	// IMP=0x00000000001f44db
- (void)_refreshIconIfVisible:(id)arg1;	// IMP=0x00000000001f4353
- (void)_refreshLibrary:(id)arg1;	// IMP=0x00000000001f4341
- (void)_iconModelWillReload:(id)arg1;	// IMP=0x00000000001f4299
@property(readonly, nonatomic) SBHIconTableViewDiffableDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)_setupLibrary;	// IMP=0x00000000001f3be0
- (void)_teardownLibrary;	// IMP=0x00000000001f3b59
- (double)headerTopOccludingInset;	// IMP=0x00000000001f38a7
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000001f3842
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000001f3746
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000001f36ca
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000001f363a
- (void)viewDidLoad;	// IMP=0x00000000001f2eb4
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000001f2dff
- (id)initWithStyle:(long long)arg1;	// IMP=0x00000000001f2d4a
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001f2c95
- (id)init;	// IMP=0x00000000001f2ac6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) SBFolderIconImageCache *folderIconImageCache;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
