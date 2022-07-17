//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXOneUpPresentationDelegate-Protocol.h>
#import <PhotosUICore/PXSearchTapToRadarSectionProviderDelegate-Protocol.h>
#import <PhotosUICore/UICollectionViewDelegate-Protocol.h>
#import <PhotosUICore/UIScrollViewDelegate-Protocol.h>
#import <PhotosUICore/UISearchBarDelegate-Protocol.h>
#import <PhotosUICore/UISearchResultsUpdating-Protocol.h>

@class NSString, PXSearchAnalyticsSession, PXSearchComposableDataSource, PXSearchIndexManager, PXSearchQuery, PXSearchQueryController, PXSearchResultsOneUpViewModel, UICollectionView, UIScrollView, UISearchController;

@interface PXUISearchResultsViewController : UIViewController <PXOneUpPresentationDelegate, PXSearchTapToRadarSectionProviderDelegate, UICollectionViewDelegate, UIScrollViewDelegate, UISearchBarDelegate, UISearchResultsUpdating>
{
    _Bool _searchBarWantsFirstResponder;	// 8 = 0x8
    UICollectionView *_collectionView;	// 16 = 0x10
    PXSearchComposableDataSource *_dataSource;	// 24 = 0x18
    unsigned long long _nextAnalyticsSessionBeginType;	// 32 = 0x20
    PXSearchQueryController *_queryController;	// 40 = 0x28
    PXSearchIndexManager *_searchIndexManager;	// 48 = 0x30
    PXSearchQuery *_currentSearchQuery;	// 56 = 0x38
    PXSearchAnalyticsSession *_analyticsSession;	// 64 = 0x40
    PXSearchResultsOneUpViewModel *_oneUpViewModel;	// 72 = 0x48
}

+ (unsigned long long)_analyticsSessionResultTypeForCollectionType:(unsigned long long)arg1;	// IMP=0x00000000007f6113
- (void).cxx_destruct;	// IMP=0x00000000007f57a6
@property(retain, nonatomic) PXSearchResultsOneUpViewModel *oneUpViewModel; // @synthesize oneUpViewModel=_oneUpViewModel;
@property(retain, nonatomic) PXSearchAnalyticsSession *analyticsSession; // @synthesize analyticsSession=_analyticsSession;
@property(copy, nonatomic) PXSearchQuery *currentSearchQuery; // @synthesize currentSearchQuery=_currentSearchQuery;
@property(retain, nonatomic) PXSearchIndexManager *searchIndexManager; // @synthesize searchIndexManager=_searchIndexManager;
@property(retain, nonatomic) PXSearchQueryController *queryController; // @synthesize queryController=_queryController;
@property(nonatomic) unsigned long long nextAnalyticsSessionBeginType; // @synthesize nextAnalyticsSessionBeginType=_nextAnalyticsSessionBeginType;
@property(nonatomic) _Bool searchBarWantsFirstResponder; // @synthesize searchBarWantsFirstResponder=_searchBarWantsFirstResponder;
@property(retain, nonatomic) PXSearchComposableDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (unsigned long long)_searchAnalyticsSessionResultTypeForSearchResultType:(unsigned long long)arg1 subtype:(unsigned long long)arg2;	// IMP=0x00000000007f5603
- (unsigned long long)_searchAnalyticsSessionResultTypeForSearchResult:(id)arg1;	// IMP=0x00000000007f5579
- (void)_shouldEndAnalyticsSession:(id)arg1;	// IMP=0x00000000007f54ea
- (void)_endAnalyticsSession;	// IMP=0x00000000007f5439
- (void)_notifyAnalyticsSearchResultSelected:(id)arg1;	// IMP=0x00000000007f53dd
- (void)_notifyAnalyticsSeeAllSelectedWithResultType:(unsigned long long)arg1;	// IMP=0x00000000007f537f
- (void)_notifyAnalyticsNoResultsForSearch;	// IMP=0x00000000007f5342
- (void)_notifyAnalyticsWordEmbeddingPresented;	// IMP=0x00000000007f5305
- (void)_notifyAnalyticsSuggestionSelectedWithType:(unsigned long long)arg1;	// IMP=0x00000000007f5263
- (void)_notifyAnalyticsOneUpTopAssets;	// IMP=0x00000000007f5226
- (void)_notifyAnalyticsInteractedWithCurrentSearch;	// IMP=0x00000000007f5196
- (void)_notifyAnalyticsSearchChanged;	// IMP=0x00000000007f50a1
- (void)_unregisterNotificationsForAnalytics;	// IMP=0x00000000007f500d
- (void)_registerNotificationsForAnalytics;	// IMP=0x00000000007f4f60
- (void)didSelectTapToRadar;	// IMP=0x00000000007f4f14
- (void)_didSelectItemIdentifier:(id)arg1 inResultsSectionProvider:(id)arg2;	// IMP=0x00000000007f450f
- (unsigned long long)_searchSuggestionLimit;	// IMP=0x00000000007f442e
- (void)_didSelectItemIdentifier:(id)arg1 inSuggestionsSectionProvider:(id)arg2;	// IMP=0x00000000007f4004
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x00000000007f3ffc
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000007f3d29
- (void)searchBarCancelButtonClicked:(id)arg1;	// IMP=0x00000000007f3d17
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;	// IMP=0x00000000007f3c05
- (void)searchBarSearchButtonClicked:(id)arg1;	// IMP=0x00000000007f396e
- (void)_didSelectCollectionsSeeAllButtonForSection:(id)arg1 sectionProvider:(id)arg2 searchResultsHeaderView:(id)arg3;	// IMP=0x00000000007f389f
- (void)_didSelectAssetsSeeAllButtonForSection:(id)arg1 allAssetResultUUIDs:(id)arg2 title:(id)arg3;	// IMP=0x00000000007f37a9
- (void)updateSearchResultsForSearchController:(id)arg1;	// IMP=0x00000000007f357d
@property(readonly, nonatomic) UISearchController *searchController;
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000007f33ff
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000007f3129
- (long long)_contentInsetsReferenceForTraitCollection:(id)arg1;	// IMP=0x00000000007f3103
- (id)_collectionViewLayoutWithProviders:(id)arg1;	// IMP=0x00000000007f2fc4
- (void)_configureDataSourceForCollectionView:(id)arg1 sectionProviders:(id)arg2;	// IMP=0x00000000007f2f32
- (void)_configureCollectionViewWithSectionProviders:(id)arg1;	// IMP=0x00000000007f2d87
- (void)_configureQueryControllerWithResultsSectionProvider:(id)arg1 suggestionsSectionProvider:(id)arg2 queryStatusSectionProvider:(id)arg3 tapToRadarSectionProvider:(id)arg4;	// IMP=0x00000000007f2bb1
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000007f2b36
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000007f2a28
- (void)viewDidLoad;	// IMP=0x00000000007f298d
- (id)init;	// IMP=0x00000000007f2667
- (id)_ppt_resultsSectionProvider;	// IMP=0x00000000001b0304
- (void)ppt_expandAllSections;	// IMP=0x00000000001afd4d
@property(readonly, nonatomic) UIScrollView *ppt_scrollView;
- (id)_emptyPhotosViewControllerForSearchResult:(id)arg1;	// IMP=0x00000000002030e4
- (void)didSelectPersonSearchResult:(id)arg1;	// IMP=0x0000000000202ea0
- (void)_didSelectMemoryCollectionSearchResult:(id)arg1;	// IMP=0x0000000000202c66
- (void)_didSelectDetailCollectionSearchResult:(id)arg1;	// IMP=0x0000000000202a5b
- (void)_didSelectAlbumSearchResult:(id)arg1;	// IMP=0x00000000002027e0
- (void)didSelectCollectionSearchResult:(id)arg1;	// IMP=0x0000000000202596
- (void)didSelectAssetAggregationSearchResult:(id)arg1;	// IMP=0x0000000000202346
- (void)didSelectAssetSearchResult:(id)arg1;	// IMP=0x00000000002021fc
- (void)didSelectSeeAllForAssetUUIDs:(id)arg1 title:(id)arg2;	// IMP=0x0000000000201f64
- (void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2;	// IMP=0x00000000007ca5db
- (void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;	// IMP=0x00000000007ca050
- (id)oneUpPresentationInitialAssetReference:(id)arg1;	// IMP=0x00000000007ca000
- (id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2;	// IMP=0x00000000007c99a8
- (id)oneUpPresentationMediaProvider:(id)arg1;	// IMP=0x00000000007c97d7
- (id)oneUpPresentationDataSourceManager:(id)arg1;	// IMP=0x00000000007c9787
- (long long)oneUpPresentationActionContext:(id)arg1;	// IMP=0x00000000007c977c
- (long long)oneUpPresentationOrigin:(id)arg1;	// IMP=0x00000000007c9771
- (id)_searchResultsSectionProvider;	// IMP=0x00000000007c95f2
- (void)showOneUpForAssetSearchResult:(id)arg1;	// IMP=0x00000000007c9248
- (id)_radarInfoForRadarRoute:(id)arg1 searchQuery:(id)arg2;	// IMP=0x00000000009fd37e
- (id)_templateForRadarRoute:(id)arg1;	// IMP=0x00000000009fd34a
- (id)_keywordForRadarRoute:(id)arg1;	// IMP=0x00000000009fd31a
- (id)_titleForRadarRoute:(id)arg1 searchQuery:(id)arg2;	// IMP=0x00000000009fd26e
- (id)_radarRoutesDescription;	// IMP=0x00000000009fd245
- (id)_radarRoutes;	// IMP=0x00000000009fd1d3
- (void)_didSelectTapToRadar:(id)arg1;	// IMP=0x00000000009fd000

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
