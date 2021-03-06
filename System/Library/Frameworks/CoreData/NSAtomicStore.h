//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

@interface NSAtomicStore
{
    NSMutableDictionary *_nodeCache;	// 8 = 0x8
    NSMutableDictionary *_entityCache;	// 16 = 0x10
    NSMutableDictionary *_storeMetadata;	// 24 = 0x18
    long long _nextReference;	// 32 = 0x20
    void *_reserved4;	// 40 = 0x28
    void *_reserved5;	// 48 = 0x30
}

+ (id)metadataForPersistentStoreWithURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006a7dd
+ (void)initialize;	// IMP=0x000000000006a7cc
- (void)setMetadata:(id)arg1;	// IMP=0x000000000006b1e4
- (id)metadata;	// IMP=0x000000000006b17f
- (id)_rawMetadata__;	// IMP=0x000000000006b16e
- (id)referenceObjectForObjectID:(id)arg1;	// IMP=0x000000000006b0fc
- (id)objectIDForEntity:(id)arg1 referenceObject:(id)arg2;	// IMP=0x000000000006b0ab
- (id)newReferenceObjectForManagedObject:(id)arg1;	// IMP=0x000000000006b05f
- (void)updateCacheNode:(id)arg1 fromManagedObject:(id)arg2;	// IMP=0x000000000006b02b
- (id)newCacheNodeForManagedObject:(id)arg1;	// IMP=0x000000000006aff7
- (id)cacheNodeForObjectID:(id)arg1;	// IMP=0x000000000006afda
- (void)willRemoveCacheNodes:(id)arg1;	// IMP=0x000000000006afd4
- (id)cacheNodes;	// IMP=0x000000000006af94
- (void)addCacheNodes:(id)arg1;	// IMP=0x000000000006ac8e
- (_Bool)load:(id *)arg1;	// IMP=0x000000000006ac5a
- (_Bool)save:(id *)arg1;	// IMP=0x000000000006ac26
- (void)dealloc;	// IMP=0x000000000006aba9
- (id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4;	// IMP=0x000000000006a845
- (id)init;	// IMP=0x000000000006a811
- (id)obtainPermanentIDsForObjects:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006d369
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1;	// IMP=0x000000000006d363
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1;	// IMP=0x000000000006d35d
- (void)_preflightCrossCheck;	// IMP=0x000000000006d357
- (void)_didLoadMetadata;	// IMP=0x000000000006d2ff
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id *)arg4;	// IMP=0x000000000006d10d
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id *)arg3;	// IMP=0x000000000006d0de
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id *)arg3;	// IMP=0x000000000006b33a

@end

