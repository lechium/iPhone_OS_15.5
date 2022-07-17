//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXSearchResultsValueDelegate-Protocol.h>
#import <PhotosUICore/PXSearchTopAssetsResultChangeDelegate-Protocol.h>

@class NSArray, NSCalendar, NSDateComponents, NSDateIntervalFormatter, NSDictionary, NSString, PHFetchResult, PLPhotoLibrary, PLSearchIndexDateFormatter, PLSearchProcessor, PSIDatabase, PSIQuery;
@protocol OS_dispatch_queue, PXSearchResultsSectionedDataSourceChangeObserver;

@interface PXSearchResultsSectionedDataSource : NSObject <PXSearchResultsValueDelegate, PXSearchTopAssetsResultChangeDelegate>
{
    _Bool _resultsReady;	// 8 = 0x8
    _Bool _ignorePastResults;	// 9 = 0x9
    _Atomic _Bool _didMerge;	// 10 = 0xa
    _Bool _wordEmbeddingsRequested;	// 11 = 0xb
    id <PXSearchResultsSectionedDataSourceChangeObserver> _changeObserver;	// 16 = 0x10
    CDUnknownBlockType _topAssetFilter;	// 24 = 0x18
    NSArray *_results;	// 32 = 0x20
    NSArray *_uncommittedResults;	// 40 = 0x28
    unsigned long long _sectionFetchIndex;	// 48 = 0x30
    unsigned long long _maxGroupedResultsCount;	// 56 = 0x38
    unsigned long long _queryTag;	// 64 = 0x40
    unsigned long long _uncommittedMaxGroupedResultsCount;	// 72 = 0x48
    unsigned long long _unprocessedSearchResultsCount;	// 80 = 0x50
    PLPhotoLibrary *_photoLibrary;	// 88 = 0x58
    PLSearchIndexDateFormatter *_dateFormatter;	// 96 = 0x60
    NSDateIntervalFormatter *_dateIntervalFormatter;	// 104 = 0x68
    PLSearchProcessor *_searchProcessor;	// 112 = 0x70
    PSIDatabase *_searchIndex;	// 120 = 0x78
    PSIQuery *_query;	// 128 = 0x80
    NSObject<OS_dispatch_queue> *_queue;	// 136 = 0x88
    PHFetchResult *_homePersons;	// 144 = 0x90
    NSArray *_suggestions;	// 152 = 0x98
    NSArray *_uncommittedSuggestions;	// 160 = 0xa0
    NSDictionary *_sceneAncestryInformation;	// 168 = 0xa8
    NSCalendar *_calendar;	// 176 = 0xb0
    NSDateComponents *_dateRangeFormattingComponents;	// 184 = 0xb8
}

+ (id)postQuerySearchResultsLog;	// IMP=0x00000000001698a1
+ (id)topAssetsSectionForSearchResultsValue:(id)arg1;	// IMP=0x0000000000169787
- (void).cxx_destruct;	// IMP=0x000000000016584e
@property(nonatomic) _Bool wordEmbeddingsRequested; // @synthesize wordEmbeddingsRequested=_wordEmbeddingsRequested;
@property(retain, nonatomic) NSDateComponents *dateRangeFormattingComponents; // @synthesize dateRangeFormattingComponents=_dateRangeFormattingComponents;
@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(retain) NSDictionary *sceneAncestryInformation; // @synthesize sceneAncestryInformation=_sceneAncestryInformation;
@property(retain, nonatomic) NSArray *uncommittedSuggestions; // @synthesize uncommittedSuggestions=_uncommittedSuggestions;
@property(retain, nonatomic) NSArray *suggestions; // @synthesize suggestions=_suggestions;
@property(retain, nonatomic) PHFetchResult *homePersons; // @synthesize homePersons=_homePersons;
@property(nonatomic) _Atomic _Bool didMerge; // @synthesize didMerge=_didMerge;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) PSIQuery *query; // @synthesize query=_query;
@property(retain, nonatomic) PSIDatabase *searchIndex; // @synthesize searchIndex=_searchIndex;
@property(retain, nonatomic) PLSearchProcessor *searchProcessor; // @synthesize searchProcessor=_searchProcessor;
@property(retain, nonatomic) NSDateIntervalFormatter *dateIntervalFormatter; // @synthesize dateIntervalFormatter=_dateIntervalFormatter;
@property(retain, nonatomic) PLSearchIndexDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) PLPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(nonatomic) unsigned long long unprocessedSearchResultsCount; // @synthesize unprocessedSearchResultsCount=_unprocessedSearchResultsCount;
@property(nonatomic) unsigned long long uncommittedMaxGroupedResultsCount; // @synthesize uncommittedMaxGroupedResultsCount=_uncommittedMaxGroupedResultsCount;
@property(nonatomic) unsigned long long queryTag; // @synthesize queryTag=_queryTag;
@property(nonatomic) unsigned long long maxGroupedResultsCount; // @synthesize maxGroupedResultsCount=_maxGroupedResultsCount;
@property(nonatomic) unsigned long long sectionFetchIndex; // @synthesize sectionFetchIndex=_sectionFetchIndex;
@property(retain, nonatomic) NSArray *uncommittedResults; // @synthesize uncommittedResults=_uncommittedResults;
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
@property(nonatomic) _Bool ignorePastResults; // @synthesize ignorePastResults=_ignorePastResults;
@property(copy, nonatomic) CDUnknownBlockType topAssetFilter; // @synthesize topAssetFilter=_topAssetFilter;
@property(nonatomic) _Bool resultsReady; // @synthesize resultsReady=_resultsReady;
@property(nonatomic) __weak id <PXSearchResultsSectionedDataSourceChangeObserver> changeObserver; // @synthesize changeObserver=_changeObserver;
- (void)_updateResultsWithMergeTargetPerson:(id)arg1 sourcePerson:(id)arg2 tombstonedCandidatesLocalIdentifiers:(id)arg3;	// IMP=0x0000000000165036
- (void)_confirmationDidFinish:(id)arg1;	// IMP=0x0000000000164bbc
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSDictionary *debugDictionary;
- (id)tapToRadarAttachments;	// IMP=0x00000000001649a4
- (id)_wordEmbeddingSubstitutionsWantsSubstitutedString:(_Bool)arg1;	// IMP=0x00000000001648f6
- (id)selectedWordEmbeddingTextAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000164892
- (id)wordEmbeddingSubstitutions;	// IMP=0x000000000016487e
- (void)didChangeThumbnailAssetsForSearchResult:(id)arg1 atIndexes:(id)arg2;	// IMP=0x000000000016473a
- (void)didChangeThumbnailAssetsForSearchResult:(id)arg1;	// IMP=0x000000000016438a
- (id)stringWithStartDate:(id)arg1 endDate:(id)arg2;	// IMP=0x00000000001641fa
- (_Bool)searchIsFinished:(id)arg1;	// IMP=0x00000000001640ca
- (void)cancel;	// IMP=0x0000000000163fec
- (void)_inqCancel;	// IMP=0x0000000000163f60
- (void)mergePendingChanges;	// IMP=0x0000000000163e8b
- (_Bool)hasPendingChanges;	// IMP=0x0000000000163dfa
- (void)_asyncFetchAssetsWithQueryTag:(unsigned long long)arg1;	// IMP=0x0000000000163d7f
- (id)_fetchObjectsWithEntityName:(id)arg1 uuids:(id)arg2;	// IMP=0x0000000000163c47
- (void)_inqBackgroundProcessAssetResults:(id)arg1 collectionResults:(id)arg2 topAssetsResult:(id)arg3 topCollectionResults:(id)arg4 withTag:(unsigned long long)arg5 searchString:(id)arg6 representedObjects:(id)arg7 maxSuggestionCount:(unsigned long long)arg8 priorityAssetUUID:(id)arg9;	// IMP=0x000000000016357b
- (_Bool)_shouldCancel:(unsigned long long)arg1;	// IMP=0x00000000001634e5
- (void)setSearchString:(id)arg1 representedObjects:(id)arg2 maxSuggestionCount:(unsigned long long)arg3 priorityAssetUUID:(id)arg4;	// IMP=0x0000000000163361
- (id)titleForHeaderInSection:(long long)arg1;	// IMP=0x00000000001632a1
- (_Bool)isTopAssetsSection:(long long)arg1;	// IMP=0x000000000016320c
- (id)allSearchResultsForSection:(long long)arg1;	// IMP=0x000000000016314c
- (id)searchResultAtIndexPath:(id)arg1;	// IMP=0x000000000016304e
- (long long)numberOfSearchResultsInSection:(long long)arg1;	// IMP=0x0000000000162fbb
- (long long)numberOfVisibleSearchResultsInSection:(long long)arg1;	// IMP=0x0000000000162f28
- (void)collapseSection:(long long)arg1;	// IMP=0x0000000000162ed6
- (void)expandSection:(long long)arg1;	// IMP=0x0000000000162e84
- (_Bool)isSectionExpanded:(long long)arg1;	// IMP=0x0000000000162def
- (_Bool)isSectionExpandable:(long long)arg1;	// IMP=0x0000000000162d5a
- (long long)numberOfSections;	// IMP=0x0000000000162ccb
- (id)initForUnitTests;	// IMP=0x0000000000162c72
- (id)initWithSearchIndex:(id)arg1 photoLibrary:(id)arg2;	// IMP=0x0000000000162ab7

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
