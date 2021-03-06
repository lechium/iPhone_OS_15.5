//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ML3MusicLibrary;

@interface ML3Entity : NSObject
{
    ML3MusicLibrary *_library;	// 8 = 0x8
    long long _persistentID;	// 16 = 0x10
}

+ (void)enumeratePersistentIDsInLibrary:(id)arg1 afterRevision:(long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000027f50
+ (long long)revisionTrackingCode;	// IMP=0x0000000000027f40
+ (id)orderingSQLForProperties:(id)arg1 directionality:(id)arg2;	// IMP=0x0000000000027bd7
+ (id)indexableSQLForProperties:(id)arg1;	// IMP=0x00000000000279d2
+ (id)disambiguatedSelectSQLForProperty:(id)arg1;	// IMP=0x0000000000027965
+ (id)_createDisambiguatedSQLForProperty:(id)arg1;	// IMP=0x000000000002788b
+ (id)disambiguatedSQLForProperty:(id)arg1;	// IMP=0x00000000000277ea
+ (void)predisambiguateProperties:(id)arg1 toDictionary:(id)arg2;	// IMP=0x000000000002762f
+ (id)allProperties;	// IMP=0x0000000000027627
+ (id)predisambiguatedProperties;	// IMP=0x00000000000275a9
+ (id)collectionClassesToUpdateBeforeDelete;	// IMP=0x00000000000275a1
+ (id)persistentIDColumnForTable:(id)arg1;	// IMP=0x0000000000027599
+ (id)extraTablesToInsert;	// IMP=0x0000000000027591
+ (id)extraTablesToDelete;	// IMP=0x0000000000027589
+ (_Bool)removeFromMyLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long *)arg3 count:(unsigned long long)arg4;	// IMP=0x0000000000027581
+ (_Bool)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long *)arg3 count:(unsigned long long)arg4 usingConnection:(id)arg5;	// IMP=0x00000000000273fd
+ (_Bool)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long *)arg3 count:(unsigned long long)arg4;	// IMP=0x00000000000272f2
+ (_Bool)_deleteRowForPersistentIDs:(const long long *)arg1 count:(unsigned long long)arg2 library:(id)arg3 table:(id)arg4 usingColumn:(id)arg5 usingConnection:(id)arg6;	// IMP=0x0000000000027070
+ (_Bool)libraryDynamicChangeForProperty:(id)arg1;	// IMP=0x0000000000027068
+ (_Bool)assistantLibraryContentsChangeForProperty:(id)arg1;	// IMP=0x0000000000027060
+ (_Bool)libraryContentsChangeForProperty:(id)arg1;	// IMP=0x0000000000027058
+ (void)_didChangeValueForProperties:(id)arg1 inLibrary:(id)arg2;	// IMP=0x0000000000026d38
+ (_Bool)setValues:(id)arg1 forProperties:(id)arg2 forEntityPersistentIDs:(id)arg3 inLibrary:(id)arg4 usingConnection:(id)arg5;	// IMP=0x0000000000026821
+ (id)countingQueryForBaseQuery:(id)arg1 countProperty:(id)arg2 forIdentifier:(long long)arg3;	// IMP=0x0000000000026722
+ (_Bool)propertyIsCountProperty:(id)arg1;	// IMP=0x000000000002671a
+ (id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2;	// IMP=0x0000000000026712
+ (id)foreignColumnForProperty:(id)arg1;	// IMP=0x000000000002670a
+ (id)foreignDatabaseTableForProperty:(id)arg1;	// IMP=0x0000000000026702
+ (id)sectionPropertyForProperty:(id)arg1;	// IMP=0x00000000000266fa
+ (id)defaultOrderingTerms;	// IMP=0x00000000000266f2
+ (id)newWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3 usingConnection:(id)arg4;	// IMP=0x000000000002664c
+ (id)newWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3;	// IMP=0x00000000000265c2
+ (id)newWithDictionary:(id)arg1 inLibrary:(id)arg2;	// IMP=0x0000000000026552
+ (id)newWithPersistentID:(long long)arg1 inLibrary:(id)arg2;	// IMP=0x00000000000264fe
+ (id)joinClausesForProperty:(id)arg1;	// IMP=0x00000000000263dd
+ (id)predicateByOptimizingComparisonPredicate:(id)arg1;	// IMP=0x00000000000263d0
+ (id)predicateByOptimizingPredicate:(id)arg1;	// IMP=0x0000000000026369
+ (id)defaultFilterPredicates;	// IMP=0x0000000000026350
+ (id)URLForEntityWithPersistentID:(long long)arg1 libraryUID:(id)arg2;	// IMP=0x0000000000026185
+ (id)entityFromURL:(id)arg1 inLibrary:(id)arg2 verifyExistence:(_Bool)arg3;	// IMP=0x0000000000025ee3
+ (id)entityFromURL:(id)arg1 inLibrary:(id)arg2;	// IMP=0x0000000000025ecb
+ (id)entityURLScheme;	// IMP=0x0000000000025ebe
+ (id)newSelectSQLForProperties:(const id *)arg1 count:(unsigned long long)arg2 predicate:(id)arg3;	// IMP=0x000000000002578e
+ (id)newSelectAllEntitiesSQLForProperties:(const id *)arg1 count:(unsigned long long)arg2 predicate:(id)arg3;	// IMP=0x000000000002529f
+ (id)subselectPropertyForProperty:(id)arg1;	// IMP=0x0000000000025297
+ (id)subselectStatementForProperty:(id)arg1;	// IMP=0x000000000002528f
+ (void)enumeratePersistentIDsInLibrary:(id)arg1 matchingPredicate:(id)arg2 orderingTerms:(id)arg3 persistentIDs:(const long long *)arg4 count:(unsigned long long)arg5 options:(long long)arg6 usingBlock:(CDUnknownBlockType)arg7;	// IMP=0x0000000000024b1e
+ (_Bool)insertionChangesLibraryContents;	// IMP=0x0000000000024b16
+ (_Bool)incrementRevisionWithLibrary:(id)arg1 persistentID:(long long)arg2 deletionType:(int)arg3 revisionType:(int)arg4 usingConnection:(id)arg5;	// IMP=0x000000000002475d
+ (_Bool)incrementRevisionWithLibrary:(id)arg1 persistentID:(long long)arg2 deletionType:(int)arg3 revisionType:(int)arg4;	// IMP=0x0000000000024652
+ (_Bool)incrementRevisionForRevisionTypeContentWithConnection:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long *)arg3 count:(unsigned long long)arg4;	// IMP=0x00000000000244e1
+ (_Bool)incrementRevisionForRevisionTypeContentWithConnection:(id)arg1 deletionType:(int)arg2 persistentIDs:(id)arg3;	// IMP=0x00000000000238f6
+ (_Bool)incrementRevisionForRevisionTypeContentWithLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(id)arg3;	// IMP=0x00000000000237ed
+ (_Bool)_shouldIncrementRevisionForType:(int)arg1 persistentID:(long long)arg2 usingConnection:(id)arg3;	// IMP=0x0000000000023747
+ (id)unsettableProperties;	// IMP=0x000000000002373f
+ (_Bool)insertValues:(id)arg1 intoTable:(id)arg2 persistentID:(long long)arg3 connection:(id)arg4;	// IMP=0x0000000000023225
+ (_Bool)insertValues:(id)arg1 intoTable:(id)arg2 persistentID:(long long)arg3 library:(id)arg4;	// IMP=0x00000000000230d7
+ (id)predicateIncludingSystemwidePredicatesWithPredicate:(id)arg1 library:(id)arg2 options:(long long)arg3;	// IMP=0x0000000000075aee
+ (id)unrestrictedAllItemsQueryWithlibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3;	// IMP=0x0000000000075a20
+ (id)allItemsQueryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 usingSections:(_Bool)arg4;	// IMP=0x000000000007594e
+ (id)unrestrictedQueryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3;	// IMP=0x0000000000075880
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 usingSections:(_Bool)arg4 options:(long long)arg5;	// IMP=0x00000000000757aa
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 usingSections:(_Bool)arg4;	// IMP=0x00000000000756d8
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 propertyToCount:(id)arg4 options:(long long)arg5;	// IMP=0x00000000000755e2
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 propertyToCount:(id)arg4;	// IMP=0x00000000000754fa
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3;	// IMP=0x000000000007542c
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 usingSections:(_Bool)arg3;	// IMP=0x000000000007533a
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 options:(long long)arg3;	// IMP=0x0000000000075260
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2;	// IMP=0x000000000007519b
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 orderingDirectionMappings:(id)arg4 usingSections:(_Bool)arg5;	// IMP=0x0000000000075174
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 usingSections:(_Bool)arg4;	// IMP=0x000000000007514f
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3;	// IMP=0x000000000007512d
+ (id)anyInLibrary:(id)arg1 predicate:(id)arg2 options:(long long)arg3;	// IMP=0x000000000007501f
+ (id)anyInLibrary:(id)arg1 predicate:(id)arg2;	// IMP=0x0000000000074f88
+ (id)aggregateQueryWithUnitQuery:(id)arg1 foreignPersistentIDProperty:(id)arg2;	// IMP=0x000000000009dce8
- (void).cxx_destruct;	// IMP=0x00000000000223af
@property(readonly, nonatomic) long long persistentID; // @synthesize persistentID=_persistentID;
@property(nonatomic) __weak ML3MusicLibrary *library; // @synthesize library=_library;
- (void)incrementRevision;	// IMP=0x000000000002232d
- (_Bool)deleteFromLibrary;	// IMP=0x00000000000222d2
- (void)didChangeValueForProperties:(id)arg1;	// IMP=0x000000000002226a
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x000000000002216f
- (_Bool)setValuesForPropertiesWithDictionary:(id)arg1;	// IMP=0x00000000000220d7
- (_Bool)setValues:(id)arg1 forProperties:(id)arg2 usingConnection:(id)arg3;	// IMP=0x0000000000021f8c
- (void)setValues:(id)arg1 forProperties:(id)arg2 async:(_Bool)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000021d73
- (_Bool)setValues:(id)arg1 forProperties:(id)arg2;	// IMP=0x0000000000021c84
- (_Bool)setValues:(const id *)arg1 forProperties:(const id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000021af0
- (id)valueForProperty:(id)arg1;	// IMP=0x0000000000021a7d
- (id)getValuesForProperties:(id)arg1;	// IMP=0x0000000000021421
- (void)getValues:(id *)arg1 forProperties:(const id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000002103c
- (id)URL;	// IMP=0x0000000000020f95
- (_Bool)matchesPredicate:(id)arg1;	// IMP=0x0000000000020e38
@property(readonly, nonatomic) _Bool existsInLibrary;
- (id)description;	// IMP=0x0000000000020c60
- (unsigned long long)hash;	// IMP=0x0000000000020c56
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000020b9a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000020b3a
- (id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3 usingConnection:(id)arg4;	// IMP=0x00000000000207c0
- (id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3;	// IMP=0x00000000000207ab
- (id)initWithPersistentID:(long long)arg1 inLibrary:(id)arg2;	// IMP=0x00000000000206ce

@end

