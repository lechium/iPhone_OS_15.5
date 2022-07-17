//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBHIconLibraryQueryContext;

@interface SBHIconLibrarySpotlightQueryEngine
{
    SBHIconLibraryQueryContext *_currentlyRunningQueryContext;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000280420
- (void)_processingQueue_noteQueryResultsWereUpdated:(id)arg1 iconLibraryQueryContext:(id)arg2 notifyDelegate:(_Bool)arg3;	// IMP=0x00000000002802fd
- (CDUnknownBlockType)_processingQueue_sortComperatorForQueryContext:(id)arg1;	// IMP=0x0000000000280221
- (void)_processingQueue_updateQueryRelevancyScores:(id)arg1 iconLibraryQueryContext:(id)arg2;	// IMP=0x000000000027ff76
- (void)_processingQueue_unmarkBundleIdentifiers:(id)arg1 iconLibraryQueryContext:(id)arg2;	// IMP=0x000000000027fed8
- (void)_processingQueue_markBundleIdentifiers:(id)arg1 iconLibraryQueryContext:(id)arg2;	// IMP=0x000000000027fdf9
- (_Bool)_processingQueue_isBundleIdentifierValid:(id)arg1 iconLibraryQueryContext:(id)arg2;	// IMP=0x000000000027fd09
- (void)_teardownCSSearchQuery:(id)arg1;	// IMP=0x000000000027fc7e
- (void)_processingQueue_teardownQueryContext:(id)arg1;	// IMP=0x000000000027fa16
- (void)executeQuery:(id)arg1;	// IMP=0x000000000027e407
- (id)_relevancyQueryForLibraryQuery:(id)arg1;	// IMP=0x000000000027e1b2
- (id)_searchQueryForIconLibraryQuery:(id)arg1;	// IMP=0x000000000027dda7
- (void)dealloc;	// IMP=0x000000000027db70

@end
