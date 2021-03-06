//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLLocation, GEOAutocompleteSessionData, GEOClientRankingModel, GEOMapServiceTraits, GEOPDPlaceSummaryLayoutMetadata, GEORetainedSearchMetadata, GEOSearchCategory, GEOSortPriorityMapping, MKLocalSearchCompletion, MKPointOfInterestFilter, NSArray, NSMutableArray, NSString, NSTimer;
@protocol MKAutocompleteAnalyticsProvider, MKLocalSearchCompleterDelegate, MKLocationManagerOperation;

@interface MKLocalSearchCompleter : NSObject
{
    NSString *_queryFragment;	// 8 = 0x8
    CDStruct_b7cb895d _region;	// 16 = 0x10
    GEOSearchCategory *_categoryFilter;	// 48 = 0x30
    NSArray *_filters;	// 56 = 0x38
    GEORetainedSearchMetadata *_retainedSearchMetadata;	// 64 = 0x40
    id <MKLocalSearchCompleterDelegate> _delegate;	// 72 = 0x48
    id _context;	// 80 = 0x50
    NSString *_identifier;	// 88 = 0x58
    long long _listType;	// 96 = 0x60
    double _timeSinceLastInBoundingRegion;	// 104 = 0x68
    CLLocation *_deviceLocation;	// 112 = 0x70
    unsigned long long _mapType;	// 120 = 0x78
    double _lastRequestTime;	// 128 = 0x80
    _Bool _dirty;	// 136 = 0x88
    _Bool _resultsAreCurrent;	// 137 = 0x89
    NSArray *_results;	// 144 = 0x90
    NSArray *_sections;	// 152 = 0x98
    GEOClientRankingModel *_clientRankingModel;	// 160 = 0xa0
    GEOSortPriorityMapping *_sortPriorityMapping;	// 168 = 0xa8
    NSTimer *_timer;	// 176 = 0xb0
    int _source;	// 184 = 0xb8
    id <MKLocationManagerOperation> _singleLocationUpdate;	// 192 = 0xc0
    GEOMapServiceTraits *_traits;	// 200 = 0xc8
    unsigned long long _maxNumberOfConcurrentRequests;	// 208 = 0xd0
    NSMutableArray *_inFlightTickets;	// 216 = 0xd8
    NSMutableArray *_pendingTickets;	// 224 = 0xe0
    _Bool _statefulQueriesEnabled;	// 232 = 0xe8
    GEOAutocompleteSessionData *_autocompleteSessionData;	// 240 = 0xf0
    _Bool _shouldDisplayNoResults;	// 248 = 0xf8
    _Bool _shouldEnableRAPForNoResults;	// 249 = 0xf9
    _Bool _autocompleteTopSectionIsQuerySuggestions;	// 250 = 0xfa
    _Bool _showAutocompleteClientSource;	// 251 = 0xfb
    _Bool _shouldPreloadTransitInfo;	// 252 = 0xfc
    _Bool _shouldEnableGrayscaleHighlighting;	// 253 = 0xfd
    _Bool _shouldUseDistanceFeatureServerResults;	// 254 = 0xfe
    long long _filterType;	// 256 = 0x100
    unsigned long long _resultTypes;	// 264 = 0x108
    MKPointOfInterestFilter *_pointOfInterestFilter;	// 272 = 0x110
    id <MKAutocompleteAnalyticsProvider> _analyticsProvider;	// 280 = 0x118
    MKLocalSearchCompletion *_tappedQuerySuggestionCompletion;	// 288 = 0x120
    long long _privateFilterType;	// 296 = 0x128
    GEOPDPlaceSummaryLayoutMetadata *_placeSummaryLayoutMetadata;	// 304 = 0x130
    long long _highlightType;	// 312 = 0x138
}

- (void).cxx_destruct;	// IMP=0x00000000001b4982
@property(readonly, nonatomic, getter=_highlightType) long long highlightType; // @synthesize highlightType=_highlightType;
@property(readonly, nonatomic, getter=_placeSummaryLayoutMetadata) GEOPDPlaceSummaryLayoutMetadata *placeSummaryLayoutMetadata; // @synthesize placeSummaryLayoutMetadata=_placeSummaryLayoutMetadata;
@property(readonly, nonatomic, getter=_shouldUseDistanceFeatureServerResults) _Bool shouldUseDistanceFeatureServerResults; // @synthesize shouldUseDistanceFeatureServerResults=_shouldUseDistanceFeatureServerResults;
@property(readonly, nonatomic, getter=_shouldEnableGrayscaleHighlighting) _Bool shouldEnableGrayscaleHighlighting; // @synthesize shouldEnableGrayscaleHighlighting=_shouldEnableGrayscaleHighlighting;
@property(nonatomic, getter=_privateFilterType, setter=_setPrivateFilterType:) long long privateFilterType; // @synthesize privateFilterType=_privateFilterType;
@property(readonly, nonatomic, getter=_sections) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic, getter=_shouldPreloadTransitInfo, setter=_setShouldPreloadTransitInfo:) _Bool shouldPreloadTransitInfo; // @synthesize shouldPreloadTransitInfo=_shouldPreloadTransitInfo;
@property(readonly, nonatomic, getter=_showAutocompleteClientSource) _Bool showAutocompleteClientSource; // @synthesize showAutocompleteClientSource=_showAutocompleteClientSource;
@property(retain, nonatomic, getter=_tappedQuerySuggestionCompletion, setter=_setTappedQuerySuggestionCompletion:) MKLocalSearchCompletion *tappedQuerySuggestionCompletion; // @synthesize tappedQuerySuggestionCompletion=_tappedQuerySuggestionCompletion;
@property(readonly, nonatomic, getter=_autocompleteTopSectionIsQuerySuggestions) _Bool autocompleteTopSectionIsQuerySuggestions; // @synthesize autocompleteTopSectionIsQuerySuggestions=_autocompleteTopSectionIsQuerySuggestions;
@property(readonly, nonatomic, getter=_sortPriorityMapping) GEOSortPriorityMapping *sortPriorityMapping; // @synthesize sortPriorityMapping=_sortPriorityMapping;
@property(readonly, nonatomic, getter=_clientRankingModel) GEOClientRankingModel *clientRankingModel; // @synthesize clientRankingModel=_clientRankingModel;
@property(readonly, nonatomic, getter=_shouldEnableRAPForNoResults) _Bool shouldEnableRAPForNoResults; // @synthesize shouldEnableRAPForNoResults=_shouldEnableRAPForNoResults;
@property(readonly, nonatomic, getter=_shouldDisplayNoResults) _Bool shouldDisplayNoResults; // @synthesize shouldDisplayNoResults=_shouldDisplayNoResults;
@property(retain, nonatomic) id <MKAutocompleteAnalyticsProvider> analyticsProvider; // @synthesize analyticsProvider=_analyticsProvider;
@property(copy, nonatomic) MKPointOfInterestFilter *pointOfInterestFilter; // @synthesize pointOfInterestFilter=_pointOfInterestFilter;
@property(nonatomic) unsigned long long resultTypes; // @synthesize resultTypes=_resultTypes;
@property(retain, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;
@property(nonatomic) unsigned long long mapType; // @synthesize mapType=_mapType;
@property(retain, nonatomic) CLLocation *deviceLocation; // @synthesize deviceLocation=_deviceLocation;
@property(nonatomic) double timeSinceLastInBoundingRegion; // @synthesize timeSinceLastInBoundingRegion=_timeSinceLastInBoundingRegion;
@property(nonatomic) long long listType; // @synthesize listType=_listType;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id context; // @synthesize context=_context;
@property(nonatomic) __weak id <MKLocalSearchCompleterDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GEORetainedSearchMetadata *retainedSearchMetadata; // @synthesize retainedSearchMetadata=_retainedSearchMetadata;
@property(retain, nonatomic) GEOSearchCategory *categoryFilter; // @synthesize categoryFilter=_categoryFilter;
@property(nonatomic) CDStruct_b7cb895d region; // @synthesize region=_region;
@property(copy, nonatomic) NSString *queryFragment; // @synthesize queryFragment=_queryFragment;
@property(nonatomic) long long entriesType;
@property(copy, nonatomic) NSString *fragment;
@property(nonatomic) CDStruct_b7cb895d boundingRegion;
@property(nonatomic) _Bool statefulQueriesEnabled;
- (void)clearQueryState;	// IMP=0x00000000001b451b
@property(readonly, nonatomic) NSArray *results;
- (void)retry;	// IMP=0x00000000001b44ca
- (void)cancel;	// IMP=0x00000000001b4339
- (void)_cancelTimer;	// IMP=0x00000000001b42f2
- (_Bool)resultsAreCurrent;	// IMP=0x00000000001b42e6
@property(readonly, nonatomic, getter=isSearching) _Bool searching;
- (int)source;	// IMP=0x00000000001b4232
- (void)setSource:(int)arg1;	// IMP=0x00000000001b41e8
- (void)_updateFilters;	// IMP=0x00000000001b402a
@property(nonatomic) long long filterType; // @synthesize filterType=_filterType;
- (double)timeToNextRequest;	// IMP=0x00000000001b391f
- (void)_scheduleRequestWithTimeToNextRequest:(double)arg1;	// IMP=0x00000000001b38bf
- (void)_markDirtyAndScheduleRequestWithTimeToNextRequest:(double)arg1;	// IMP=0x00000000001b380c
- (void)_markDirty;	// IMP=0x00000000001b37de
- (void)_schedulePendingRequest;	// IMP=0x00000000001b3792
- (id)_completionTicketForPrivateFilterType:(long long)arg1 traits:(id)arg2;	// IMP=0x00000000001b3513
- (id)_completionTicketForFilterTypeWithTraits:(id)arg1;	// IMP=0x00000000001b32d2
- (void)_fireRequest;	// IMP=0x00000000001b2740
- (void)_handleError:(id)arg1 forTicket:(id)arg2;	// IMP=0x00000000001b22ab
- (void)_notifyDelegatesWithResults:(id)arg1 sections:(id)arg2 shouldDisplayNoResults:(_Bool)arg3 shouldEnableRAPForNoResults:(_Bool)arg4 ticket:(id)arg5;	// IMP=0x00000000001b1dad
- (void)_handleCompletion:(id)arg1 shouldDisplayNoResults:(_Bool)arg2 shouldEnableRAPForNoResults:(_Bool)arg3 forTicket:(id)arg4;	// IMP=0x00000000001b0f5f
- (void)dealloc;	// IMP=0x00000000001b0f21
- (id)init;	// IMP=0x00000000001b0db2

@end

