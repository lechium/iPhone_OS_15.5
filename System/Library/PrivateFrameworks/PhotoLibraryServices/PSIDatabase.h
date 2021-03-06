//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PSIGroupCacheDelegate-Protocol.h>
#import <PhotoLibraryServices/PSIQueryDelegate-Protocol.h>
#import <PhotoLibraryServices/PSITableDelegate-Protocol.h>

@class NSDictionary, NSMutableArray, NSMutableString, NSString, PSIIntArray, PSIStatement, PSITokenizer, PSIWordEmbeddingTable;
@protocol OS_dispatch_queue;

@interface PSIDatabase : NSObject <PSITableDelegate, PSIQueryDelegate, PSIGroupCacheDelegate>
{
    struct sqlite3 *_inqDatabase;	// 8 = 0x8
    _Bool _databaseIsValid;	// 16 = 0x10
    struct __CFDictionary *_inqPreparedStatements;	// 24 = 0x18
    PSIIntArray *_matchingIds;	// 32 = 0x20
    PSIWordEmbeddingTable *_inqWordEmbeddingTable;	// 40 = 0x28
    PSIStatement *_assetUUIDByAssetIdWithAssetIdsStatement;	// 48 = 0x30
    PSIStatement *_collectionResultByCollectionIdWithCollectionIdsStatement;	// 56 = 0x38
    PSIStatement *_inqAssetIdsByGroupIdForAssetIdsStatement;	// 64 = 0x40
    PSIStatement *_inqCollectionIdsByGroupIdForCollectionIdsStatement;	// 72 = 0x48
    PSIStatement *_inqNumberOfAssetsMatchingGroupWithIdStatement;	// 80 = 0x50
    PSIStatement *_inqNumberOfAssetsByGroupIdMatchingGroupsWithIdsStatement;	// 88 = 0x58
    PSIStatement *_inqNumberOfCollectionsMatchingGroupWithIdStatement;	// 96 = 0x60
    PSIStatement *_inqNumberOfCollectionsByGroupIdMatchingGroupsWithIdsStatement;	// 104 = 0x68
    PSIStatement *_inqIdsOfAllGroupsStatement;	// 112 = 0x70
    PSIStatement *_inqIdsOfAllGroupsInPrefixStatement;	// 120 = 0x78
    PSIStatement *_inqIdsOfAllGroupsInLookupStatement;	// 128 = 0x80
    PSIStatement *_inqRemoveGroupsFromLookupStatement;	// 136 = 0x88
    struct __CFDictionary *_inqGroupObjectsById;	// 144 = 0x90
    NSObject<OS_dispatch_queue> *_serialQueue;	// 152 = 0x98
    NSObject<OS_dispatch_queue> *_searchQueue;	// 160 = 0xa0
    NSObject<OS_dispatch_queue> *_groupResultsQueue;	// 168 = 0xa8
    NSDictionary *_inqSearchMetadata;	// 176 = 0xb0
    long long _options;	// 184 = 0xb8
    PSITokenizer *_tokenizer;	// 192 = 0xc0
    NSMutableString *_tokenizerOutputString;	// 200 = 0xc8
    NSMutableArray *_tokenizerOutputTokens;	// 208 = 0xd0
    NSMutableArray *_tokenizerOutputNormalizedTokens;	// 216 = 0xd8
    CDStruct_627e0f85 _tokenizerOutputRanges[8];	// 224 = 0xe0
    NSString *_path;	// 352 = 0x160
}

+ (id)searchDatabaseLog;	// IMP=0x0000000000559410
+ (struct sqlite3 *)_openDatabaseAtPath:(id)arg1 options:(long long)arg2;	// IMP=0x000000000055916d
+ (_Bool)_integrityCheckDatabase:(struct sqlite3 *)arg1;	// IMP=0x00000000005590d8
+ (void)_dropDatabase:(struct sqlite3 *)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000558e8d
+ (void)dropDatabaseAtPath:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000558e1c
- (void).cxx_destruct;	// IMP=0x0000000000550c10
@property(readonly, nonatomic) long long options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
- (struct sqlite3 *)databaseConnection;	// IMP=0x0000000000550bec
- (void)_inqPerformBatch:(CDUnknownBlockType)arg1;	// IMP=0x0000000000550b8b
- (void)_inqPrepareAndExecuteStatement:(const char *)arg1;	// IMP=0x00000000005509a5
- (void)_inqExecutePreparedStatement:(struct sqlite3_stmt *)arg1 withStatementBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000055098e
- (void)_inqExecutePreparedStatement:(struct sqlite3_stmt *)arg1 allowError:(int)arg2 withStatementBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000550779
- (struct sqlite3_stmt *)_inqPrepareStatement:(const char *)arg1;	// IMP=0x0000000000550696
- (id)wordEmbeddingVersion;	// IMP=0x00000000005505bf
- (id)_inqCollectionIdsByGroupIdForCollectionIds:(id)arg1;	// IMP=0x00000000005504d7
- (struct __CFSet *)_inqNewGroupIdsForCollectionIds:(struct __CFSet *)arg1;	// IMP=0x0000000000550425
- (struct __CFSet *)_inqNewGroupIdsForCollectionId:(unsigned long long)arg1;	// IMP=0x0000000000550307
- (id)_inqAssetIdsByGroupIdForAssetIds:(id)arg1;	// IMP=0x000000000055021f
- (struct __CFSet *)_inqNewGroupIdsForAssetIds:(struct __CFSet *)arg1;	// IMP=0x000000000055016d
- (struct __CFSet *)_inqNewGroupIdsForAssetId:(unsigned long long)arg1;	// IMP=0x000000000055004f
- (struct __CFArray *)_inqNewCollectionIdsForGroupId:(unsigned long long)arg1 dateFilter:(id)arg2;	// IMP=0x000000000054f4c8
- (struct __CFArray *)_inqNewCollectionIdsWithDateFilter:(id)arg1;	// IMP=0x000000000054eb4e
- (struct __CFArray *)_inqNewAssetIdsForGroupId:(unsigned long long)arg1 dateFilter:(id)arg2;	// IMP=0x000000000054e10e
- (struct __CFArray *)_inqNewAssetIdsWithDateFilter:(id)arg1;	// IMP=0x000000000054d8b7
- (id)_inqNewSynonymTextsByOwningGroupIdWithGroupIds:(struct __CFSet *)arg1;	// IMP=0x000000000054d7ce
- (id)_inqGroupsWithMatchingGroupIds:(struct __CFSet *)arg1 dateFilter:(id)arg2 includeObjects:(_Bool)arg3 matchingPredicateBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000054d4fc
- (id)_inqNonFilenameGroupsWithMatchingGroupIds:(struct __CFSet *)arg1 dateFilter:(id)arg2 includeObjects:(_Bool)arg3 matchingPredicateBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000054d386
- (id)_inqFilenameGroupsWithMatchingGroupIds:(struct __CFSet *)arg1 dateFilter:(id)arg2 matchingPredicateBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000054c8a3
- (id)_inqGroupWithMatchingGroupId:(unsigned long long)arg1 dateFilter:(id)arg2;	// IMP=0x000000000054c6d7
- (void)_inqUpdateGCTableWithGroupId:(unsigned long long)arg1 collectionId:(unsigned long long)arg2;	// IMP=0x000000000054c51e
- (void)_inqUpdateGATableWithGroupId:(unsigned long long)arg1 assetId:(unsigned long long)arg2;	// IMP=0x000000000054c365
- (void)_inqDeleteFromLookupTableWithGroupId:(unsigned long long)arg1;	// IMP=0x000000000054c296
- (void)_inqAddToLookupTableWithGroupId:(unsigned long long)arg1 text:(id)arg2 category:(short)arg3;	// IMP=0x000000000054c093
- (unsigned long long)_inqGroupIdForCategory:(short)arg1 owningGroupId:(unsigned long long)arg2 contentString:(id)arg3 normalizedString:(id)arg4 identifier:(id)arg5 insertIfNeeded:(_Bool)arg6 tokenOutput:(const struct tokenOutput_t *)arg7 shouldUpdateOwningGroupId:(_Bool)arg8 didUpdateGroup:(out _Bool *)arg9;	// IMP=0x000000000054b84c
- (unsigned long long)_inqCollectionIdWithCollection:(id)arg1;	// IMP=0x000000000054afb0
- (unsigned long long)_inqCollectionIdForUUID:(id)arg1;	// IMP=0x000000000054af99
- (unsigned long long)_inqCollectionIdForUUID:(id)arg1 uuid_0:(unsigned long long *)arg2 uuid_1:(unsigned long long *)arg3;	// IMP=0x000000000054ad1a
- (unsigned long long)_inqAssetIdWithAsset:(id)arg1;	// IMP=0x000000000054aa49
- (unsigned long long)_inqAssetIdForUUID:(id)arg1;	// IMP=0x000000000054aa32
- (unsigned long long)_inqAssetIdForUUID:(id)arg1 uuid_0:(unsigned long long *)arg2 uuid_1:(unsigned long long *)arg3;	// IMP=0x000000000054a7b3
- (void)_inqUpdateSearchTermsWithSearchableTermsByGroupIds:(id)arg1;	// IMP=0x000000000054a47a
- (void)_inqDeleteGroupsWithGraphCollectionsForPersonUUID:(id)arg1;	// IMP=0x000000000054a057
- (void)_inqRemoveUnusedGroups;	// IMP=0x0000000000549e9d
- (void)_inqRemoveUUID:(id)arg1 objectType:(unsigned long long)arg2 isInBatch:(_Bool)arg3;	// IMP=0x0000000000549d3e
- (unsigned long long)_inqUpdateGroupForText:(id)arg1 normalizedText:(id)arg2 identifier:(id)arg3 category:(short)arg4 owningGroupId:(unsigned long long)arg5 shouldUpdateOwningGroupId:(_Bool)arg6 didUpdateGroup:(out _Bool *)arg7;	// IMP=0x0000000000549bf2
- (unsigned long long)_inqUpdateGroupForText:(id)arg1 identifier:(id)arg2 category:(short)arg3 owningGroupId:(unsigned long long)arg4 didUpdateGroup:(out _Bool *)arg5;	// IMP=0x0000000000549b0d
- (void)_inqGetTokensFromString:(id)arg1 category:(short)arg2 tokenOutput:(struct tokenOutput_t *)arg3;	// IMP=0x0000000000549a8f
- (void)_prepareTokenOutput:(struct tokenOutput_t *)arg1 forIndexing:(_Bool)arg2;	// IMP=0x000000000054992a
- (void)_inqRecycleGroups;	// IMP=0x0000000000549919
- (id)_inqDequeueGroupObjectWithId:(unsigned long long)arg1 isCachedGroup:(_Bool *)arg2;	// IMP=0x000000000054988a
- (_Bool)assetExistsWithUUID:(id)arg1;	// IMP=0x00000000005497a1
- (id)dumpLookupStringsWithIndexCategories:(id)arg1;	// IMP=0x00000000005496b1
- (id)dumpPrefixStringsForAssetUUID:(id)arg1;	// IMP=0x0000000000549505
- (id)dumpPrefixStrings;	// IMP=0x0000000000549449
- (double)_scoreForUserCategory:(unsigned long long)arg1;	// IMP=0x0000000000549422
- (id)_inqNumberOfCollectionsByGroupIdMatchingGroupsWithIds:(id)arg1;	// IMP=0x000000000054933a
- (unsigned long long)_inqNumberOfCollectionsMatchingGroupWithId:(unsigned long long)arg1;	// IMP=0x0000000000549277
- (id)_inqNumberOfAssetsByGroupIdMatchingGroupsWithIds:(id)arg1;	// IMP=0x000000000054918f
- (unsigned long long)_inqNumberOfAssetsMatchingGroupWithId:(unsigned long long)arg1;	// IMP=0x00000000005490cc
- (void)_processNextKeywordSuggestionsForQuery:(id)arg1 groupResults:(id)arg2 allowIdentifiers:(_Bool)arg3;	// IMP=0x0000000000544d0c
- (id)collectionResultByCollectionIdWithCollectionIds:(id)arg1;	// IMP=0x0000000000544bf7
- (id)_inqCollectionResultByCollectionIdWithCollectionIds:(id)arg1;	// IMP=0x0000000000544b0f
- (id)assetUUIDByAssetIdWithAssetIds:(id)arg1;	// IMP=0x00000000005449fa
- (id)_inqAssetUUIDByAssetIdWithAssetIds:(id)arg1;	// IMP=0x0000000000544912
- (id)_inqGroupArraysFromGroupIdSets:(id)arg1 dateFilter:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000005445a5
- (id)_inqGroupWithStatement:(struct sqlite3_stmt *)arg1 dateFilter:(id)arg2 includeObjects:(_Bool)arg3 isFilenameStatement:(_Bool)arg4 excludingGroupId:(unsigned long long)arg5;	// IMP=0x0000000000544432
- (id)_inqGroupWithStatement:(struct sqlite3_stmt *)arg1 dateFilter:(id)arg2 includeObjects:(_Bool)arg3;	// IMP=0x000000000054440c
- (id)_inqGroupWithFilenameStatement:(struct sqlite3_stmt *)arg1 dateFilter:(id)arg2 excludingGroupId:(unsigned long long)arg3;	// IMP=0x00000000005443e4
- (struct __CFSet *)_inqNewGroupIdsWithCategories:(id)arg1;	// IMP=0x00000000005442a5
- (struct __CFSet *)_inqNewGroupIdsMatchingString:(id)arg1 categories:(id)arg2 textIsSearchable:(_Bool)arg3;	// IMP=0x0000000000543f2a
- (struct __CFSet *)_inqNewGroupIdsMatchingString:(id)arg1 textIsSearchable:(_Bool)arg2;	// IMP=0x0000000000543f13
- (id)_inqGroupResultWithDateFilter:(id)arg1 datedTokens:(id)arg2;	// IMP=0x0000000000543d63
- (id)_inqContentStringForGroupId:(unsigned long long)arg1;	// IMP=0x0000000000543bce
- (id)_inqCollectionResultsForCollectionIds:(struct __CFArray *)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000543a24
- (id)_inqAssetUUIDsForAssetIds:(struct __CFSet *)arg1;	// IMP=0x0000000000543923
- (id)_inqAssetUUIDsForAssetIds:(struct __CFArray *)arg1 range:(struct _NSRange)arg2 creationDateSorted:(_Bool)arg3;	// IMP=0x0000000000543808
- (id)_inqOwningContentStringForGroupResult:(id)arg1;	// IMP=0x0000000000543702
- (id)newQueryWithSearchText:(id)arg1 queryTokens:(id)arg2 useWildcardSearchText:(_Bool)arg3;	// IMP=0x00000000005435f4
- (id)newQueryWithSearchText:(id)arg1 identifiers:(id)arg2 useWildcardSearchText:(_Bool)arg3;	// IMP=0x0000000000543340
- (id)newQueryWithSearchText:(id)arg1 representedObjects:(id)arg2 useWildcardSearchText:(_Bool)arg3;	// IMP=0x000000000054332e
- (id)newQueryWithSearchText:(id)arg1;	// IMP=0x0000000000543317
- (_Bool)isLookupTableOutOfSync;	// IMP=0x00000000005431cf
- (id)allAssetUUIDsForGroupsWithCategories:(id)arg1;	// IMP=0x0000000000543004
- (id)allCollectionUUIDsWithCollectionType:(unsigned long long)arg1;	// IMP=0x0000000000542eac
- (void)deleteGroupsWithGraphCollectionsForPersonUUIDs:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000542c96
- (void)_removeUUIDs:(id)arg1 objectType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000542afc
- (void)removeCollectionsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000542ae2
- (void)removeCollectionWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000542a1c
- (void)removeAssetsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000542a05
- (void)removeAssetWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000054293f
- (void)addCollections:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000054276b
- (void)addCollection:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000005426a5
- (void)addAssets:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000005424d1
- (void)addAsset:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000054240b
- (void)_ingRebuildPrefixTableIfNeeded;	// IMP=0x0000000000542230
- (_Bool)isDatabaseCorrupted;	// IMP=0x00000000005420f5
- (void)dropDatabaseWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000541fad
- (void)updateSearchMetadata:(id)arg1;	// IMP=0x0000000000541f1b
- (void)_inSearchQueueAsync:(CDUnknownBlockType)arg1;	// IMP=0x0000000000541f07
- (void)_inqSync:(CDUnknownBlockType)arg1;	// IMP=0x0000000000541ef3
- (void)_inqAsync:(CDUnknownBlockType)arg1;	// IMP=0x0000000000541edf
- (void)dealloc;	// IMP=0x0000000000541da2
- (void)_finalizeEverything;	// IMP=0x0000000000541cb5
- (id)initWithPath:(id)arg1 options:(long long)arg2 searchMetadata:(id)arg3;	// IMP=0x0000000000541838
- (long long)lastInsertedRowID;	// IMP=0x000000000055a718
- (void)unbindMatchingIds;	// IMP=0x000000000055a702
- (void)bindMatchingIds:(const long long *)arg1 numberOfMatchingIds:(unsigned long long)arg2;	// IMP=0x000000000055a6ec
- (void)bindMatchingIds:(struct __CFArray *)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000055a6d6
- (void)bindMatchingIds:(struct __CFSet *)arg1;	// IMP=0x000000000055a6c0
- (void)unprepareMatchingIds;	// IMP=0x000000000055a6aa
- (void)prepareForNumberOfMatchingIds:(unsigned long long)arg1;	// IMP=0x000000000055a694
- (void)executeStatement:(id)arg1 withResultEnumerationBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000055a43e
- (void)executeStatement:(id)arg1;	// IMP=0x000000000055a42a
- (void)executeStatementFromString:(id)arg1 withResultEnumerationBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000055a3a2
- (void)executeStatementFromString:(id)arg1;	// IMP=0x000000000055a349
- (id)statementFromString:(id)arg1;	// IMP=0x000000000055a2e8
- (void)fetchAssetUUIDsForAssetIDs:(struct __CFArray *)arg1 creationDateSorted:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000055c4c5
- (void)group:(id)arg1 fetchOwningContentString:(_Bool)arg2 assetIdRange:(struct _NSRange)arg3 collectionIdRange:(struct _NSRange)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000055c33c
- (id)suggestionWhitelistedScenes;	// IMP=0x000000000055c265
- (id)meNodeIdentifier;	// IMP=0x000000000055c18e
- (id)wordEmbeddingMatchesForToken:(id)arg1;	// IMP=0x000000000055c079
- (id)groupResultWithDateFilter:(id)arg1 datedTokens:(id)arg2;	// IMP=0x000000000055bf3b
- (id)groupWithMatchingGroupId:(unsigned long long)arg1 dateFilter:(id)arg2;	// IMP=0x000000000055be1f
- (const struct __CFSet *)groupIdsMatchingString:(id)arg1 categories:(id)arg2 textIsSearchable:(_Bool)arg3;	// IMP=0x000000000055bcfb
- (id)groupArraysFromGroupIdSets:(id)arg1 dateFilter:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000055bb8b
- (void)_executeQuery:(id)arg1 resultsHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000055a93e
- (void)executeQuery:(id)arg1 resultsHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000055a748
@property(readonly) NSObject<OS_dispatch_queue> *groupResultsQueue;
@property(readonly) PSITokenizer *tokenizer;
- (unsigned long long)updateGroupForText:(id)arg1 identifier:(id)arg2 category:(short)arg3 owningGroupId:(unsigned long long)arg4 didUpdateGroup:(out _Bool *)arg5;	// IMP=0x000000000055cf39
- (void)deleteFromLookupTableWithGroupId:(unsigned long long)arg1;	// IMP=0x0000000000559a65
- (id)groupIdsInLookupTable;	// IMP=0x0000000000559973
- (id)groupIdsInPrefixTable;	// IMP=0x00000000005598cc
- (id)allGroupIds;	// IMP=0x0000000000559825
- (void)linkCollectionWithId:(long long)arg1 toGroupWithId:(long long)arg2;	// IMP=0x00000000005597ce
- (void)linkAssetWithId:(long long)arg1 toGroupWithId:(long long)arg2;	// IMP=0x0000000000559777
- (void)removeUnusedGroups;	// IMP=0x000000000055972b
- (long long)insertGroup:(id)arg1;	// IMP=0x000000000055963e
- (long long)insertCollection:(id)arg1;	// IMP=0x0000000000559555
- (long long)insertAsset:(id)arg1;	// IMP=0x000000000055946c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

