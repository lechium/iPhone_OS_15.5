//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PhotosUI/PUAssetPickerSearchSuggestionsSelectionDelegate-Protocol.h>
#import <PhotosUI/PUAssetPickerSuggestionsViewControllerActionHandler-Protocol.h>
#import <PhotosUI/PXChangeObserver-Protocol.h>
#import <PhotosUI/PXPhotosViewDelegate-Protocol.h>
#import <PhotosUI/PXScrollViewControllerObserver-Protocol.h>
#import <PhotosUI/UISearchBarDelegate-Protocol.h>
#import <PhotosUI/UISearchResultsUpdating-Protocol.h>

@class NSString, PUAlbumsGadgetViewController, PUAssetPickerSearchSuggestionsHeaderView, PUPhotoPickerResizeTaskDescriptorViewModel, PUPickerConfiguration, PUSessionInfo, PXAssetsDataSourceManager, PXGAnchor, PXPhotosUIViewController, PXSearchComposableDataSource, PXSearchQueryController, PXSectionedSelectionManager, PXSelectionCoordinator, UIBarButtonItem, UIButton, UILabel, UISearchController, UISegmentedControl;
@protocol PUAssetPickerContainerControllerActionHandler;

@interface PUAssetPickerContainerController : UIViewController <UISearchResultsUpdating, UISearchBarDelegate, PXPhotosViewDelegate, PXScrollViewControllerObserver, PUAssetPickerSearchSuggestionsSelectionDelegate, PXChangeObserver, PUAssetPickerSuggestionsViewControllerActionHandler>
{
    _Bool _allowSafeAreaChangeAnchor;	// 8 = 0x8
    PUPickerConfiguration *_configuration;	// 16 = 0x10
    PUSessionInfo *_sessionInfo;	// 24 = 0x18
    PUPhotoPickerResizeTaskDescriptorViewModel *_resizeTaskDescriptorViewModel;	// 32 = 0x20
    PXSelectionCoordinator *_selectionCoordinator;	// 40 = 0x28
    id <PUAssetPickerContainerControllerActionHandler> _containerControllerActionHandler;	// 48 = 0x30
    UISegmentedControl *_navigationBarSegmentedControl;	// 56 = 0x38
    long long _previousNavigationBarSegmentedControlSelectedIndex;	// 64 = 0x40
    UIBarButtonItem *_navigationBarAddButton;	// 72 = 0x48
    UIBarButtonItem *_navigationBarDoneButton;	// 80 = 0x50
    UIBarButtonItem *_navigationBarCancelButton;	// 88 = 0x58
    UIBarButtonItem *_navigationBarClearButton;	// 96 = 0x60
    UIButton *_toolbarSelectedItemsButton;	// 104 = 0x68
    UILabel *_toolbarFileSizeLabel;	// 112 = 0x70
    UIBarButtonItem *_toolbarSelectedItemsFileSizeStackView;	// 120 = 0x78
    UIBarButtonItem *_toolbarSelectAllButton;	// 128 = 0x80
    UIBarButtonItem *_toolbarDeselectAllButton;	// 136 = 0x88
    PXPhotosUIViewController *_photosViewController;	// 144 = 0x90
    PXGAnchor *_pinToTopAnchor;	// 152 = 0x98
    PXAssetsDataSourceManager *_photosDataSourceManager;	// 160 = 0xa0
    PXSectionedSelectionManager *_photosSelectionManager;	// 168 = 0xa8
    PUAlbumsGadgetViewController *_allAlbumsGadgetViewController;	// 176 = 0xb0
    UISearchController *_searchController;	// 184 = 0xb8
    PXSearchQueryController *_queryController;	// 192 = 0xc0
    PXSearchComposableDataSource *_searchSuggestionsCollectionViewDataSource;	// 200 = 0xc8
    PUAssetPickerSearchSuggestionsHeaderView *_searchSuggestionsHeaderView;	// 208 = 0xd0
}

+ (id)_setupSearchQueryControllerWithSuggestionsSectionProvider:(id)arg1 photosDataSourceManager:(id)arg2 suggestionsHeaderView:(id)arg3 photosViewController:(id)arg4;	// IMP=0x0000000000365415
+ (_Bool)_hideSearchBarWhenScrolling;	// IMP=0x00000000003653ca
+ (id)photosTabTitleForConfiguration:(id)arg1;	// IMP=0x000000000036525b
- (void).cxx_destruct;	// IMP=0x0000000000364f45
@property(readonly, nonatomic) PUAssetPickerSearchSuggestionsHeaderView *searchSuggestionsHeaderView; // @synthesize searchSuggestionsHeaderView=_searchSuggestionsHeaderView;
@property(readonly, nonatomic) PXSearchComposableDataSource *searchSuggestionsCollectionViewDataSource; // @synthesize searchSuggestionsCollectionViewDataSource=_searchSuggestionsCollectionViewDataSource;
@property(readonly, nonatomic) PXSearchQueryController *queryController; // @synthesize queryController=_queryController;
@property(readonly, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property(readonly, nonatomic) PUAlbumsGadgetViewController *allAlbumsGadgetViewController; // @synthesize allAlbumsGadgetViewController=_allAlbumsGadgetViewController;
@property(nonatomic) _Bool allowSafeAreaChangeAnchor; // @synthesize allowSafeAreaChangeAnchor=_allowSafeAreaChangeAnchor;
@property(readonly, nonatomic) PXSectionedSelectionManager *photosSelectionManager; // @synthesize photosSelectionManager=_photosSelectionManager;
@property(readonly, nonatomic) PXAssetsDataSourceManager *photosDataSourceManager; // @synthesize photosDataSourceManager=_photosDataSourceManager;
@property(retain, nonatomic) PXGAnchor *pinToTopAnchor; // @synthesize pinToTopAnchor=_pinToTopAnchor;
@property(readonly, nonatomic) PXPhotosUIViewController *photosViewController; // @synthesize photosViewController=_photosViewController;
@property(readonly, nonatomic) UIBarButtonItem *toolbarDeselectAllButton; // @synthesize toolbarDeselectAllButton=_toolbarDeselectAllButton;
@property(readonly, nonatomic) UIBarButtonItem *toolbarSelectAllButton; // @synthesize toolbarSelectAllButton=_toolbarSelectAllButton;
@property(readonly, nonatomic) UIBarButtonItem *toolbarSelectedItemsFileSizeStackView; // @synthesize toolbarSelectedItemsFileSizeStackView=_toolbarSelectedItemsFileSizeStackView;
@property(readonly, nonatomic) UILabel *toolbarFileSizeLabel; // @synthesize toolbarFileSizeLabel=_toolbarFileSizeLabel;
@property(readonly, nonatomic) UIButton *toolbarSelectedItemsButton; // @synthesize toolbarSelectedItemsButton=_toolbarSelectedItemsButton;
@property(readonly, nonatomic) UIBarButtonItem *navigationBarClearButton; // @synthesize navigationBarClearButton=_navigationBarClearButton;
@property(readonly, nonatomic) UIBarButtonItem *navigationBarCancelButton; // @synthesize navigationBarCancelButton=_navigationBarCancelButton;
@property(readonly, nonatomic) UIBarButtonItem *navigationBarDoneButton; // @synthesize navigationBarDoneButton=_navigationBarDoneButton;
@property(readonly, nonatomic) UIBarButtonItem *navigationBarAddButton; // @synthesize navigationBarAddButton=_navigationBarAddButton;
@property(nonatomic) long long previousNavigationBarSegmentedControlSelectedIndex; // @synthesize previousNavigationBarSegmentedControlSelectedIndex=_previousNavigationBarSegmentedControlSelectedIndex;
@property(readonly, nonatomic) UISegmentedControl *navigationBarSegmentedControl; // @synthesize navigationBarSegmentedControl=_navigationBarSegmentedControl;
@property(readonly, nonatomic) __weak id <PUAssetPickerContainerControllerActionHandler> containerControllerActionHandler; // @synthesize containerControllerActionHandler=_containerControllerActionHandler;
@property(readonly, nonatomic) PXSelectionCoordinator *selectionCoordinator; // @synthesize selectionCoordinator=_selectionCoordinator;
@property(readonly, nonatomic) PUPhotoPickerResizeTaskDescriptorViewModel *resizeTaskDescriptorViewModel; // @synthesize resizeTaskDescriptorViewModel=_resizeTaskDescriptorViewModel;
@property(readonly, nonatomic) PUSessionInfo *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
@property(readonly, nonatomic) PUPickerConfiguration *configuration; // @synthesize configuration=_configuration;
- (unsigned long long)_searchSuggestionLimit;	// IMP=0x0000000000364c68
- (void)_updateSearchFieldWithSuggestion:(id)arg1;	// IMP=0x0000000000364b37
- (void)didSelectSuggestionAtIndexPath:(id)arg1 collectionView:(id)arg2;	// IMP=0x00000000003646da
- (void)scrollViewControllerDidScroll:(id)arg1;	// IMP=0x000000000036462d
- (void)searchBarSearchButtonClicked:(id)arg1;	// IMP=0x0000000000364444
- (_Bool)searchBarShouldBeginEditing:(id)arg1;	// IMP=0x000000000036438f
- (void)updateSearchResultsForSearchController:(id)arg1;	// IMP=0x0000000000364103
- (id)_sectionLayoutForSection:(long long)arg1 environment:(id)arg2;	// IMP=0x0000000000363ff0
- (id)_setupCollectionViewLayoutWithSectionProviders:(id)arg1;	// IMP=0x0000000000363f1b
- (id)_createSearchController;	// IMP=0x0000000000363e0b
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x0000000000363d1f
- (id)headerViewForPhotosViewController:(id)arg1;	// IMP=0x0000000000363ca3
- (id)photosViewController:(id)arg1 animationForProposedAnimation:(id)arg2;	// IMP=0x0000000000363c2b
- (_Bool)photosViewController:(id)arg1 didPickAssetReference:(id)arg2;	// IMP=0x000000000036397d
- (_Bool)allowsContextMenuInteractionForPhotosViewController:(id)arg1;	// IMP=0x0000000000363939
- (void)suggestionsViewController:(id)arg1 didTapAsset:(id)arg2;	// IMP=0x00000000003638aa
- (void)handleToolbarDeselectAllButton:(id)arg1;	// IMP=0x00000000003637be
- (void)handleToolbarSelectAllButton:(id)arg1;	// IMP=0x00000000003636d2
- (void)handleToolbarSelectedItemsButton:(id)arg1;	// IMP=0x00000000003634f3
- (void)handleNavigationBarAddButton:(id)arg1;	// IMP=0x00000000003633e9
- (void)handleNavigationBarClearButton:(id)arg1;	// IMP=0x00000000003632d7
- (void)handleNavigationBarCancelButton:(id)arg1;	// IMP=0x00000000003631c5
- (void)handleNavigationBarSegmentedControl:(id)arg1;	// IMP=0x0000000000363009
- (void)_updateToolbarBar;	// IMP=0x00000000003628d1
- (void)_updateNavigationBar;	// IMP=0x0000000000361c7d
- (void)updateBars;	// IMP=0x0000000000361c4f
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000361b8e
- (void)viewSafeAreaInsetsDidChange;	// IMP=0x0000000000361a7e
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000003618ee
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000003617cc
- (void)viewDidLoad;	// IMP=0x00000000003614a3
- (void)dealloc;	// IMP=0x000000000036142e
- (id)initWithConfiguration:(id)arg1 loadingStatusManager:(id)arg2 resizeTaskDescriptorViewModel:(id)arg3 selectionCoordinator:(id)arg4 actionHandler:(id)arg5;	// IMP=0x0000000000360533
- (id)px_gridPresentation;	// IMP=0x000000000028a5ce
- (void)ppt_prepareForSearchTest:(CDUnknownBlockType)arg1;	// IMP=0x000000000036597b
- (void)ppt_switchToAlbumsTab;	// IMP=0x000000000036591d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

