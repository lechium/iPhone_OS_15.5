//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Spotlight/SPDaemonQueryDelegate-Protocol.h>

@class NSMutableArray, NSString, SPClientSession, SPDaemonQueryToken, SPSearchQuery, SPSearchQueryContext;

@interface SPGeneralQueryTask <SPDaemonQueryDelegate>
{
    SPClientSession *_session;	// 144 = 0x90
    SPSearchQuery *_query;	// 152 = 0x98
    SPDaemonQueryToken *_token;	// 160 = 0xa0
    _Bool _started;	// 168 = 0xa8
    _Bool _newQuery;	// 169 = 0xa9
    _Bool _didReceiveCompleteCallback;	// 170 = 0xaa
    NSMutableArray *_mutableSections;	// 176 = 0xb0
    NSString *_mutableSessionEntityString;	// 184 = 0xb8
    SPSearchQueryContext *_previousQueryContext;	// 192 = 0xc0
}

+ (id)contactEntityFromQueryContext:(id)arg1;	// IMP=0x00000000000063d5
+ (id)searchInAppButtonItemWithCommand:(id)arg1;	// IMP=0x0000000000005573
- (void).cxx_destruct;	// IMP=0x000000000000caa1
@property(retain) SPSearchQueryContext *previousQueryContext; // @synthesize previousQueryContext=_previousQueryContext;
@property(readonly) SPSearchQuery *query; // @synthesize query=_query;
@property(retain) NSMutableArray *mutableSections; // @synthesize mutableSections=_mutableSections;
- (id)unsafeSessionEntityString;	// IMP=0x000000000000ca18
- (id)unsafeSections;	// IMP=0x000000000000c92d
- (void)searchDaemonRankingLog:(id)arg1;	// IMP=0x000000000000c91b
- (void)searchDaemonQuery:(id)arg1 encounteredError:(id)arg2;	// IMP=0x000000000000c875
- (void)searchDaemonQuery:(id)arg1 gotResultSet:(id)arg2 replace:(_Bool)arg3 partiallyComplete:(_Bool)arg4 update:(_Bool)arg5 complete:(_Bool)arg6 delayedTopHit:(_Bool)arg7 unchanged:(_Bool)arg8 forceStable:(_Bool)arg9 blendingDuration:(double)arg10 geoEntityString:(id)arg11 supportedAppScopes:(id)arg12 showMoreInAppInfo:(id)arg13;	// IMP=0x000000000000c09b
- (id)defaultSearchThroughSection;	// IMP=0x000000000000bd3a
- (id)searchThroughSection;	// IMP=0x000000000000bb5a
- (id)resultWithIdentifier:(id)arg1 title:(id)arg2 url:(id)arg3 bundleIdentifier:(id)arg4;	// IMP=0x000000000000b871
- (void)addSections:(id)arg1 delayedTopHit:(_Bool)arg2;	// IMP=0x000000000000b79d
- (void)handleOptionsForNewSections:(id)arg1;	// IMP=0x0000000000009572
- (void)truncateSuggestionsSectionToFit:(id)arg1;	// IMP=0x000000000000927a
- (void)mergeSections;	// IMP=0x0000000000007fd1
- (id)searchString;	// IMP=0x0000000000007873
- (void)cancel;	// IMP=0x0000000000007818
- (void)clear;	// IMP=0x00000000000077bd
- (void)start;	// IMP=0x00000000000074dd
- (void)clearInternal:(int)arg1 invalidate:(_Bool)arg2;	// IMP=0x0000000000007405
- (id)initForSession:(id)arg1 withQuery:(id)arg2;	// IMP=0x000000000000736a
- (id)buildResultsInSections:(id)arg1 isUniversalSearchEnabled:(_Bool)arg2;	// IMP=0x0000000000006654
- (void)updateResultsWithContactHeader;	// IMP=0x0000000000006458
- (id)buildResultsInSections:(id)arg1;	// IMP=0x0000000000006376
- (id)buildCollectionResultWithSection:(id)arg1 queryContext:(id)arg2;	// IMP=0x0000000000005b66
- (id)searchStringWithEntityFallback;	// IMP=0x0000000000005a2d
- (id)buildSocialMediaContactSectionWithResultBuilder:(id)arg1;	// IMP=0x00000000000059ba
- (id)buildHeaderContactSectionWithResultBuilder:(id)arg1;	// IMP=0x000000000000594b
- (id)buildFooterContactSectionWithResultBuilder:(id)arg1;	// IMP=0x00000000000058d8
- (id)buildSectionWithResult:(id)arg1 sectionBundleId:(id)arg2 sectionTitleKey:(id)arg3;	// IMP=0x0000000000005689

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
