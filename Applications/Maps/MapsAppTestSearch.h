//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface MapsAppTestSearch
{
    NSString *_query;	// 8 = 0x8
    unsigned int _searchTestACMode;	// 16 = 0x10
    unsigned long long _maxACSearchQueryLength;	// 24 = 0x18
    NSMutableArray *_autoCompleteQueries;	// 32 = 0x20
    _Bool _isNearbyTest;	// 40 = 0x28
    unsigned long long _nearbyCategoryIndex;	// 48 = 0x30
    long long _directionIntentTestType;	// 56 = 0x38
    _Bool _isPrewarmingKeyboard;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000003169a4
- (void)continueDirectionIntentTest;	// IMP=0x0010000000316888
- (void)refreshSearchAnnotationPinDroppedForResults:(id)arg1;	// IMP=0x00100000003166ea
- (void)refreshSearchSessionDidChangeSearchResults:(id)arg1;	// IMP=0x0010000000316551
- (void)refreshSearchRequestSent:(id)arg1;	// IMP=0x001000000031643a
- (void)startRefreshSearchTestIfNeeded;	// IMP=0x001000000031607e
- (void)finishSearchTest:(id)arg1;	// IMP=0x0010000000315fb8
- (void)continueToNearbyScrollTests;	// IMP=0x0010000000315e72
- (void)annotationPinDroppedForResults:(id)arg1;	// IMP=0x0010000000315cd8
- (void)annotationPinDroppedForAResult:(id)arg1;	// IMP=0x0010000000315b74
- (void)searchSessionDidFail:(id)arg1;	// IMP=0x0010000000315b6e
- (void)searchSessionDidInvalidate:(id)arg1 reason:(unsigned long long)arg2;	// IMP=0x0010000000315b68
- (void)searchSessionWillPerformSearch:(id)arg1;	// IMP=0x0010000000315b62
- (void)searchSessionDidChangeSearchFieldItem:(id)arg1;	// IMP=0x0010000000315b5c
- (void)continueToAnnotationsTestsWithSearchSession:(id)arg1;	// IMP=0x001000000031596a
- (void)searchSessionDidChangeSearchResults:(id)arg1;	// IMP=0x00100000003157b0
- (void)searchRequestSent:(id)arg1;	// IMP=0x00100000003156db
- (void)sendSearchRequest;	// IMP=0x00100000003155bd
- (void)didEndGEOPPTTest_PlaceRequestTicket_PlaceDataRequest:(id)arg1;	// IMP=0x00100000003153a6
- (void)willBeginGEOPPTTest_PlaceRequestTicket_PlaceDataRequest:(id)arg1;	// IMP=0x0010000000315254
- (void)searchAutoCompleteTestDidFinish;	// IMP=0x0010000000315099
- (void)searchAutoCompleteTestReceiveResponse:(id)arg1;	// IMP=0x0010000000314ca8
- (void)searchAutoCompleteTestSendQuery;	// IMP=0x0010000000314a43
- (void)startSearchAutoCompleteTest;	// IMP=0x0010000000314796
- (void)startScrollNearbyTestCategory;	// IMP=0x0010000000314657
- (void)endNearbyTestCategory:(id)arg1;	// IMP=0x001000000031457a
- (void)startNearbyTestCategory;	// IMP=0x00100000003144be
- (void)startNearbyTest;	// IMP=0x0010000000314489
- (void)startAutocompleteOrNearbySearchTest;	// IMP=0x001000000031445e
- (void)searchKeyboardDidHide;	// IMP=0x001000000031443d
- (void)searchKeyboardDidShow;	// IMP=0x001000000031439d
- (void)searchKeyboardWillShow;	// IMP=0x0010000000314375
- (void)searchUILayoutDone;	// IMP=0x0010000000314302
- (void)didDisplayCarplayBrowseCategories;	// IMP=0x0010000000313cd8
- (void)_prewarmingKeyboardCompleted;	// IMP=0x0010000000313cbb
- (void)_startPrewarmingKeyboard;	// IMP=0x0010000000313c73
- (void)_runTestNow;	// IMP=0x0010000000313397
- (void)runScrollBrowseCategoriesInCarPlay;	// IMP=0x0010000000313189
- (_Bool)runTest;	// IMP=0x0010000000312fb9
- (void)performOnMainQueue:(CDUnknownBlockType)arg1;	// IMP=0x0010000000312f03
- (void)startedSubTest:(id)arg1 withMetrics:(id)arg2;	// IMP=0x0010000000312e10
- (void)finishedSubTest:(id)arg1;	// IMP=0x0010000000312d4a
- (void)startedSubTest:(id)arg1;	// IMP=0x0010000000312c84
- (void)didEndMSGPPTTest_Insights_ACRanking_PreLoad:(id)arg1;	// IMP=0x0010000000312be4
- (void)willBeginMSGPPTTest_Insights_ACRanking_PreLoad:(id)arg1;	// IMP=0x0010000000312b3d
- (void)didEndMSGPPTTest_Insights_ACRanking_RoutineCall:(id)arg1;	// IMP=0x0010000000312a9d
- (void)willBeginMSGPPTTest_Insights_ACRanking_RoutineCall:(id)arg1;	// IMP=0x00100000003129f6
- (void)didEndMSGPPTTest_Insights_ACRanking_PortraitCall:(id)arg1;	// IMP=0x0010000000312956
- (void)willBeginMSGPPTTest_Insights_ACRanking_PortraitCall:(id)arg1;	// IMP=0x00100000003128af
- (void)didEndMSGPPTTest_Insights_ACRanking_Tourist:(id)arg1;	// IMP=0x001000000031280f
- (void)willBeginMSGPPTTest_Insights_ACRanking_Tourist:(id)arg1;	// IMP=0x0010000000312768
- (void)didEndMSGPPTTest_Insights_ACRanking_Contacts:(id)arg1;	// IMP=0x00100000003126c8
- (void)willBeginMSGPPTTest_Insights_ACRanking_Contacts:(id)arg1;	// IMP=0x0010000000312621
- (void)didEndMSGPPTTest_Insights_ACRanking_MapItems:(id)arg1;	// IMP=0x0010000000312581
- (void)willBeginMSGPPTTest_Insights_ACRanking_MapItems:(id)arg1;	// IMP=0x00100000003124da

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
