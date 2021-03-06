//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOMapServiceCompletionTicket-Protocol.h>

@class GEOMapServiceTraits, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _GEOFailedCompletionTicket <GEOMapServiceCompletionTicket>
{
    NSString *searchQuery;	// 264 = 0x108
    NSString *_searchQuery;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x0000000000717ada
@property(readonly, nonatomic, getter=_searchQuery) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
- (void)applyToPlaceInfo:(id)arg1;	// IMP=0x0000000000717ac3
- (void)applyToCorrectedSearch:(id)arg1;	// IMP=0x0000000000717abd
- (void)submitWithAutoCompletionHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;	// IMP=0x0000000000717a06
- (long long)highlightType;	// IMP=0x00000000007179fe
- (id)placeSummaryLayoutMetadata;	// IMP=0x00000000007179f6
- (_Bool)shouldUseDistanceFeatureServerResults;	// IMP=0x00000000007179ee
- (_Bool)showAutocompleteClientSource;	// IMP=0x00000000007179e6
- (_Bool)autocompleteTopSectionIsQuerySuggestions;	// IMP=0x00000000007179de
- (id)sortPriorityMapping;	// IMP=0x00000000007179d6
- (id)clientRankingModel;	// IMP=0x00000000007179ce
- (_Bool)shouldEnableGrayscaleHighlighting;	// IMP=0x00000000007179c6
- (_Bool)hasShouldEnableGrayscaleHighlighting;	// IMP=0x00000000007179be
- (_Bool)shouldDisplayNoResults;	// IMP=0x00000000007179b6
- (_Bool)hasShouldDisplayNoResults;	// IMP=0x00000000007179ae
- (double)retainSearchTime;	// IMP=0x00000000007179a5
- (_Bool)isRapEnabled;	// IMP=0x000000000071799d
- (void)applyToSuggestionEntry:(id)arg1 withAutocompleteSearchResultIdentifier:(id)arg2;	// IMP=0x0000000000717997
- (void)applyToSuggestionList:(id)arg1;	// IMP=0x0000000000717991
- (_Bool)matchesFragment:(id)arg1;	// IMP=0x0000000000717974
- (id)initWithError:(id)arg1 searchQuery:(id)arg2 traits:(id)arg3;	// IMP=0x00000000007178d3

// Remaining properties
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
@property(readonly, nonatomic) CDStruct_d1a7ebee dataRequestKind;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSDictionary *responseUserInfo;
@property(readonly) Class superclass;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;

@end

