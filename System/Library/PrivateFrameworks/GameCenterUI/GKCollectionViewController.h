//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewController.h>

#import <GameCenterUI/GKCollectionViewDataSourceDelegate-Protocol.h>
#import <GameCenterUI/GKSegmentedSectionDataSourceEventHandler-Protocol.h>
#import <GameCenterUI/UISearchBarDelegate-Protocol.h>
#import <GameCenterUI/UITextFieldDelegate-Protocol.h>
#import <GameCenterUI/_GKStateMachineDelegate-Protocol.h>

@class GKColorPalette, GKLoadableContentStateMachine, GKPlaceholderView, GKSearchBar, GKSwipeToEditStateMachine, NSMapTable, NSObject, NSString, NSUUID, UIActivityIndicatorView, UICollectionViewLayout, UINavigationController;
@protocol OS_dispatch_queue, UICollectionViewDataSource;

@interface GKCollectionViewController : UICollectionViewController <_GKStateMachineDelegate, GKCollectionViewDataSourceDelegate, UISearchBarDelegate, UITextFieldDelegate, GKSegmentedSectionDataSourceEventHandler>
{
    _Bool _skipLoadAfterViewDidLoad;	// 8 = 0x8
    _Bool _shouldSlideInContents;	// 9 = 0x9
    _Bool _showSupplementaryViewsWhileLoading;	// 10 = 0xa
    _Bool _readyToDisplayData;	// 11 = 0xb
    _Bool _active;	// 12 = 0xc
    _Bool _hasViewFactories;	// 13 = 0xd
    _Bool _didSlideIn;	// 14 = 0xe
    GKColorPalette *_colorPalette;	// 16 = 0x10
    id <UICollectionViewDataSource> _dataSource;	// 24 = 0x18
    GKPlaceholderView *_placeholderView;	// 32 = 0x20
    UINavigationController *_placeholderNavigationController;	// 40 = 0x28
    GKSearchBar *_activeSearchBar;	// 48 = 0x30
    NSString *_currentSearchText;	// 56 = 0x38
    GKLoadableContentStateMachine *_loadingMachine;	// 64 = 0x40
    UICollectionViewLayout *_defaultLayout;	// 72 = 0x48
    UIActivityIndicatorView *_loadingIndicatorView;	// 80 = 0x50
    long long _previousOrientation;	// 88 = 0x58
    long long _appearCount;	// 96 = 0x60
    NSMapTable *_reusableViewsIHaveSeen;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_batchUpdateQueue;	// 112 = 0x70
    long long _batchUpdateCount;	// 120 = 0x78
    NSUUID *_currentUpdateID;	// 128 = 0x80
    GKSwipeToEditStateMachine *_swipeStateMachine;	// 136 = 0x88
}

+ (id)_initializeSafeCategoryFromValidationManager;	// IMP=0x00000000000ff64e
+ (_Bool)_shouldForwardViewWillTransitionToSize;	// IMP=0x00000000000ff443
- (void).cxx_destruct;	// IMP=0x0000000000107ff4
@property(retain, nonatomic) GKSwipeToEditStateMachine *swipeStateMachine; // @synthesize swipeStateMachine=_swipeStateMachine;
@property(retain) NSUUID *currentUpdateID; // @synthesize currentUpdateID=_currentUpdateID;
@property long long batchUpdateCount; // @synthesize batchUpdateCount=_batchUpdateCount;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *batchUpdateQueue; // @synthesize batchUpdateQueue=_batchUpdateQueue;
@property(retain, nonatomic) NSMapTable *reusableViewsIHaveSeen; // @synthesize reusableViewsIHaveSeen=_reusableViewsIHaveSeen;
@property long long appearCount; // @synthesize appearCount=_appearCount;
@property _Bool didSlideIn; // @synthesize didSlideIn=_didSlideIn;
@property _Bool hasViewFactories; // @synthesize hasViewFactories=_hasViewFactories;
@property _Bool active; // @synthesize active=_active;
@property(nonatomic) long long previousOrientation; // @synthesize previousOrientation=_previousOrientation;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicatorView; // @synthesize loadingIndicatorView=_loadingIndicatorView;
@property(retain, nonatomic) UICollectionViewLayout *defaultLayout; // @synthesize defaultLayout=_defaultLayout;
@property(retain, nonatomic) GKLoadableContentStateMachine *loadingMachine; // @synthesize loadingMachine=_loadingMachine;
@property(retain, nonatomic) NSString *currentSearchText; // @synthesize currentSearchText=_currentSearchText;
@property(retain, nonatomic) GKSearchBar *activeSearchBar; // @synthesize activeSearchBar=_activeSearchBar;
@property(retain, nonatomic) UINavigationController *placeholderNavigationController; // @synthesize placeholderNavigationController=_placeholderNavigationController;
@property(retain, nonatomic) GKPlaceholderView *placeholderView; // @synthesize placeholderView=_placeholderView;
@property(readonly, nonatomic) _Bool readyToDisplayData; // @synthesize readyToDisplayData=_readyToDisplayData;
@property(nonatomic) _Bool showSupplementaryViewsWhileLoading; // @synthesize showSupplementaryViewsWhileLoading=_showSupplementaryViewsWhileLoading;
@property(retain, nonatomic) id <UICollectionViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool shouldSlideInContents; // @synthesize shouldSlideInContents=_shouldSlideInContents;
- (void)clearSelectionHighlight;	// IMP=0x0000000000107bfc
- (void)segmentedSectionDataSource:(id)arg1 inSection:(unsigned long long)arg2 didSelectDataSourceWithIndex:(long long)arg3;	// IMP=0x0000000000107ace
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x00000000001078a3
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000000107883
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x000000000010782a
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x0000000000107824
- (void)didDisplayData;	// IMP=0x000000000010781e
- (void)hidePlaceholderAnimated:(_Bool)arg1;	// IMP=0x00000000001073fa
- (void)showPlaceholderWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 animated:(_Bool)arg4 block:(CDUnknownBlockType)arg5;	// IMP=0x0000000000106df7
- (void)addPlaceholderViewToView:(id)arg1;	// IMP=0x0000000000106dd4
- (void)slideInContents;	// IMP=0x0000000000106812
- (void)completeWhenReadyToDisplayData:(CDUnknownBlockType)arg1;	// IMP=0x00000000001065c6
- (void)didBecomeReadyToDisplayData;	// IMP=0x00000000001065c0
- (void)setIsReadyToDisplayData:(_Bool)arg1;	// IMP=0x0000000000106551
- (void)stopLoadingIndicator;	// IMP=0x00000000001063df
- (void)stopLoadingIndicatorWithoutAnimation;	// IMP=0x000000000010630f
- (void)startLoadingIndicator;	// IMP=0x0000000000106294
- (_Bool)hasLoaded;	// IMP=0x000000000010620e
- (void)_reallyStartLoadingIndicator;	// IMP=0x0000000000105eca
- (void)didExitLoadedState;	// IMP=0x0000000000105ec4
- (void)didEnterLoadedState;	// IMP=0x0000000000105ead
- (void)didExitErrorState;	// IMP=0x0000000000105ea7
- (void)didEnterErrorState;	// IMP=0x0000000000105de8
- (void)didExitNoContentState;	// IMP=0x0000000000105de2
- (void)didEnterNoContentState;	// IMP=0x0000000000105c2f
- (void)didExitLoadingState;	// IMP=0x0000000000105c1d
- (void)didExitRefreshingState;	// IMP=0x0000000000105c17
- (void)didEnterRefreshingState;	// IMP=0x0000000000105c11
- (void)didEnterLoadingState;	// IMP=0x0000000000105c0b
- (void)stateDidChangeFromNilToLoadingState;	// IMP=0x0000000000105c05
- (void)stateDidChangeFromLoadedStateToLoadingState;	// IMP=0x0000000000105bff
- (void)stateDidChangeFromErrorStateToLoadingState;	// IMP=0x0000000000105bf9
- (void)stateDidChangeFromNoContentStateToLoadingState;	// IMP=0x0000000000105bf3
- (void)stateDidChange;	// IMP=0x0000000000105bda
- (void)stateWillChange;	// IMP=0x0000000000105bc1
@property(readonly, nonatomic) NSString *loadingState;
- (void)applyShowMoreLayoutAttributesForShowMoreView:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000000105b46
- (double)showMoreTextMarginAtIndexPath:(id)arg1;	// IMP=0x000000000010580b
- (id)footerViewAboveShowMoreViewAtIndexPath:(id)arg1;	// IMP=0x000000000010558c
- (void)didTouchShowMore:(id)arg1;	// IMP=0x000000000010544a
- (void)dataSource:(id)arg1 performBatchUpdate:(CDUnknownBlockType)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x0000000000104938
- (void)dataSourceDidMoveSectionsWithItems:(id)arg1;	// IMP=0x00000000001046ed
- (void)dataSourceDidReloadData:(id)arg1;	// IMP=0x00000000001044e4
- (void)dataSource:(id)arg1 didUpdatePlaceholderVisibility:(_Bool)arg2;	// IMP=0x00000000001042e7
- (void)dataSource:(id)arg1 didMoveSection:(long long)arg2 toSection:(long long)arg3;	// IMP=0x0000000000104083
- (void)dataSource:(id)arg1 didRefreshSections:(id)arg2;	// IMP=0x0000000000103e54
- (void)dataSource:(id)arg1 didMoveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;	// IMP=0x00000000001039dc
- (void)dataSource:(id)arg1 didRemoveSections:(id)arg2;	// IMP=0x00000000001036c8
- (void)dataSource:(id)arg1 didInsertSections:(id)arg2;	// IMP=0x0000000000103499
- (void)dataSource:(id)arg1 didRefreshItemsAtIndexPaths:(id)arg2;	// IMP=0x0000000000103266
- (void)dataSource:(id)arg1 didRemoveItemsAtIndexPaths:(id)arg2;	// IMP=0x0000000000102e88
- (void)dataSource:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;	// IMP=0x0000000000102c55
- (_Bool)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;	// IMP=0x0000000000102c24
- (void)_gkRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;	// IMP=0x0000000000102a83
- (void)loadDataWithCompletionHandlerAndError:(CDUnknownBlockType)arg1;	// IMP=0x00000000001029d2
- (void)_loadDataWithCompletionHandlerAndError:(CDUnknownBlockType)arg1;	// IMP=0x000000000010287e
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3;	// IMP=0x0000000000102570
- (void)_applyUpdates:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001022e0
- (void)_finishUpdates:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000102005
- (void)_gkSetContentsNeedUpdateWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000101fc7
- (void)setNeedsReload;	// IMP=0x0000000000101e70
- (void)invalidateSearch;	// IMP=0x0000000000101b6e
- (id)currentSearchTerms;	// IMP=0x0000000000101a8b
- (void)searchBarSearchButtonClicked:(id)arg1;	// IMP=0x0000000000101a0c
- (void)searchBarCancelButtonClicked:(id)arg1;	// IMP=0x0000000000101978
- (void)clearButtonPressed:(id)arg1;	// IMP=0x0000000000101922
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;	// IMP=0x000000000010190d
- (void)searchBarTextDidEndEditing:(id)arg1;	// IMP=0x0000000000101707
- (void)searchBarTextDidBeginEditing:(id)arg1;	// IMP=0x0000000000101495
- (_Bool)searchBarShouldBeginEditing:(id)arg1;	// IMP=0x0000000000101480
@property(retain, nonatomic) GKColorPalette *colorPalette; // @synthesize colorPalette=_colorPalette;
- (id)defaultColorPalette;	// IMP=0x0000000000101416
- (id)gkDataSource;	// IMP=0x00000000001012af
- (void)configureViewFactories;	// IMP=0x0000000000100df6
- (void)configureDataSource;	// IMP=0x0000000000100df0
- (void)updateDynamicColumnCountsForViewSize:(struct CGSize)arg1;	// IMP=0x0000000000100dea
- (void)updateMetrics;	// IMP=0x0000000000100de4
- (void)_systemContentSizeSettingDidChange;	// IMP=0x0000000000100b11
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000100a32
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000010091c
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;	// IMP=0x00000000001008a4
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000010080d
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000100747
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000001006ea
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000100194
- (id)nearestSelectableIndexPath:(id)arg1;	// IMP=0x0000000000100005
- (void)updateSelectionHighlight;	// IMP=0x00000000000ffff3
- (void)updateLayoutGuideOffsets;	// IMP=0x00000000000ffb49
- (void)viewLayoutMarginsDidChange;	// IMP=0x00000000000ffb08
- (void)viewDidLoad;	// IMP=0x00000000000ff88d
- (void)loadView;	// IMP=0x00000000000ff7f8
- (id)collectionView;	// IMP=0x00000000000ff79d
- (id)_gkRecursiveDescription;	// IMP=0x00000000000ff65b
- (void)dealloc;	// IMP=0x00000000000ff5d9
- (id)initWithCollectionViewLayout:(id)arg1;	// IMP=0x00000000000ff44b
- (void)swipeToDeleteCell:(id)arg1;	// IMP=0x000000000010812c
- (void)shutActionPaneAnimated:(_Bool)arg1;	// IMP=0x00000000001080e0
- (void)willDismissActionSheetFromCell:(id)arg1;	// IMP=0x0000000000108719
- (void)showCollectionView;	// IMP=0x0000000000108690
@property(nonatomic) _Bool skipLoadAfterViewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

