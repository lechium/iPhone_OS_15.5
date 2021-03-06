//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOSearchCategory, NSArray, NSCache, NSDictionary, NSIndexPath, NSObject, NSString, SearchResultsCuratedCollectionsAnalyticsManager, SearchResultsDataSourceContent, _TtC4Maps20PlaceSummaryMetadata;
@protocol MKCollectionCarouselRoutingDelegate, MKMapServiceTicket, OS_dispatch_queue, SARSearchResultTableViewCellDelegate, ShareDelegate;

__attribute__((visibility("hidden")))
@interface SearchResultsDataSource
{
    _Bool _displaysAsChainResult;	// 8 = 0x8
    _Bool _prefersAddressOverCategory;	// 9 = 0x9
    _Bool _usePlaceSummary;	// 10 = 0xa
    _Bool _isPresentingSearchAlongTheRouteResults;	// 11 = 0xb
    _Bool _displayDistance;	// 12 = 0xc
    _Bool _isPresentingVenueClusterResults;	// 13 = 0xd
    _Bool _isSimpleSearchResults;	// 14 = 0xe
    SearchResultsDataSourceContent *_content;	// 16 = 0x10
    id <ShareDelegate> _shareDelegate;	// 24 = 0x18
    GEOSearchCategory *_searchCategory;	// 32 = 0x20
    id <SARSearchResultTableViewCellDelegate> _searchAlongTheRouteCellDelegate;	// 40 = 0x28
    id <MKCollectionCarouselRoutingDelegate> _collectionCarouselRoutingDelegate;	// 48 = 0x30
    NSArray *_sectionIndexTitles;	// 56 = 0x38
    _TtC4Maps20PlaceSummaryMetadata *_placeSummaryMetadata;	// 64 = 0x40
    SearchResultsCuratedCollectionsAnalyticsManager *_curatedCollectionsAnalyticsManager;	// 72 = 0x48
    NSIndexPath *_indexPathForRelatedCollectionSection;	// 80 = 0x50
    NSCache *_placeSummaryTemplateViewModels;	// 88 = 0x58
    id <MKMapServiceTicket> _mapServiceTicket;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_placeSummaryTemplatesQueue;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00200000004833dd
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *placeSummaryTemplatesQueue; // @synthesize placeSummaryTemplatesQueue=_placeSummaryTemplatesQueue;
@property(retain, nonatomic) id <MKMapServiceTicket> mapServiceTicket; // @synthesize mapServiceTicket=_mapServiceTicket;
@property(retain, nonatomic) NSCache *placeSummaryTemplateViewModels; // @synthesize placeSummaryTemplateViewModels=_placeSummaryTemplateViewModels;
@property(retain, nonatomic) NSIndexPath *indexPathForRelatedCollectionSection; // @synthesize indexPathForRelatedCollectionSection=_indexPathForRelatedCollectionSection;
@property(retain, nonatomic) SearchResultsCuratedCollectionsAnalyticsManager *curatedCollectionsAnalyticsManager; // @synthesize curatedCollectionsAnalyticsManager=_curatedCollectionsAnalyticsManager;
@property(retain, nonatomic) _TtC4Maps20PlaceSummaryMetadata *placeSummaryMetadata; // @synthesize placeSummaryMetadata=_placeSummaryMetadata;
@property(nonatomic) _Bool isSimpleSearchResults; // @synthesize isSimpleSearchResults=_isSimpleSearchResults;
@property(retain, nonatomic) NSArray *sectionIndexTitles; // @synthesize sectionIndexTitles=_sectionIndexTitles;
@property(nonatomic) _Bool isPresentingVenueClusterResults; // @synthesize isPresentingVenueClusterResults=_isPresentingVenueClusterResults;
@property(nonatomic) _Bool displayDistance; // @synthesize displayDistance=_displayDistance;
@property(nonatomic) __weak id <MKCollectionCarouselRoutingDelegate> collectionCarouselRoutingDelegate; // @synthesize collectionCarouselRoutingDelegate=_collectionCarouselRoutingDelegate;
@property(nonatomic) __weak id <SARSearchResultTableViewCellDelegate> searchAlongTheRouteCellDelegate; // @synthesize searchAlongTheRouteCellDelegate=_searchAlongTheRouteCellDelegate;
@property(nonatomic) _Bool isPresentingSearchAlongTheRouteResults; // @synthesize isPresentingSearchAlongTheRouteResults=_isPresentingSearchAlongTheRouteResults;
@property(retain, nonatomic) GEOSearchCategory *searchCategory; // @synthesize searchCategory=_searchCategory;
@property(nonatomic) __weak id <ShareDelegate> shareDelegate; // @synthesize shareDelegate=_shareDelegate;
@property(copy, nonatomic) SearchResultsDataSourceContent *content; // @synthesize content=_content;
@property(nonatomic) _Bool usePlaceSummary; // @synthesize usePlaceSummary=_usePlaceSummary;
@property(nonatomic) _Bool prefersAddressOverCategory; // @synthesize prefersAddressOverCategory=_prefersAddressOverCategory;
@property(nonatomic) _Bool displaysAsChainResult; // @synthesize displaysAsChainResult=_displaysAsChainResult;
- (void)relatedSectionRouteToCuratedCollection:(id)arg1;	// IMP=0x0010000000482e84
- (void)relatedSectionTappedOnCollectionId:(id)arg1 atIndex:(long long)arg2 isSaved:(_Bool)arg3;	// IMP=0x0010000000482dbe
- (void)relatedSectionTableViewCellDidScrollBackward;	// IMP=0x0010000000482d41
- (void)relatedSectionTableViewCellDidScrollForward;	// IMP=0x0010000000482cc4
- (void)resetMapServiceTicket;	// IMP=0x0010000000482c6a
- (id)personalizedItemForQuickActionMenuWithCell:(id)arg1;	// IMP=0x0010000000482b7c
- (void)didTapOnTappableEntryWithMapItemIdentifier:(id)arg1 cell:(id)arg2;	// IMP=0x001000000048289e
- (void)didTapOnResultRefinement:(id)arg1 cell:(id)arg2;	// IMP=0x0010000000482898
- (void)didTapOnContainmentParentMapItem:(id)arg1 cell:(id)arg2;	// IMP=0x00100000004827f1
- (void)didTapOnAccessoryEntityFlyoverWithCell:(id)arg1;	// IMP=0x00100000004826b2
- (void)didTapOnAccessoryEntityQueryAcceleratorWithCell:(id)arg1;	// IMP=0x00100000004826ac
- (void)didTapOnAccessoryEntityWebsiteWithCell:(id)arg1;	// IMP=0x001000000048256d
- (void)didTapOnAccessoryEntityCallWithCell:(id)arg1;	// IMP=0x001000000048242e
- (void)didTapOnAccessoryEntityLookAroundWithCell:(id)arg1;	// IMP=0x00100000004822ef
- (void)didTapOnAccessoryEntityDirectionsWithCell:(id)arg1;	// IMP=0x00100000004821b0
- (void)didTapOnItemInChildItems:(id)arg1 cell:(id)arg2 buttonIndex:(long long)arg3;	// IMP=0x00100000004821aa
- (void)didTapOnCuratedGuides:(id)arg1 cell:(id)arg2;	// IMP=0x0010000000481e23
- (void)didTapOnCuratedGuide:(id)arg1 cell:(id)arg2;	// IMP=0x0010000000481c53
- (void)didTapOnUserGeneratedGuide:(id)arg1 cell:(id)arg2;	// IMP=0x0010000000481bac
- (void)didTapOnPlaceContextWithViewModel:(id)arg1 parentView:(id)arg2;	// IMP=0x0010000000481699
- (id)placeContextViewModelWithMapItem:(id)arg1;	// IMP=0x00100000004815fd
- (void)shareRowAtIndexPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000481421
- (void)locationDidUpdate;	// IMP=0x0010000000481140
- (void)iterateThroughIndexPathsAndExecuteBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000480f8f
- (void)cachePlaceSummaryTemplates;	// IMP=0x0010000000480bf6
- (id)placeSummaryTemplateForSearchResult:(id)arg1 indexPath:(id)arg2;	// IMP=0x0010000000480a6a
@property(readonly, nonatomic) NSDictionary *itemCountInVenue;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x00100000004802b3
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x001000000047fdd0
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x001000000047fc97
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x001000000047fb4e
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x001000000047fae9
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;	// IMP=0x001000000047f993
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x001000000047f943
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x001000000047f92e
- (id)sectionIndexTitlesForTableView:(id)arg1;	// IMP=0x001000000047f91c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x001000000047edd9
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x001000000047ecd9
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x001000000047ec5e
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x001000000047ec0b
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x001000000047ebc7
- (id)objectAtIndexPath:(id)arg1;	// IMP=0x001000000047eb1b
@property(readonly, nonatomic) double currentContentHeight;
- (int)targetForDragAnalytics;	// IMP=0x001000000047e8c7
- (id)objectsForAnalytics;	// IMP=0x001000000047e874
- (id)shareContextualActionAtIndexPath:(id)arg1;	// IMP=0x001000000047e742
- (id)initWithTableView:(id)arg1;	// IMP=0x001000000047e1dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

