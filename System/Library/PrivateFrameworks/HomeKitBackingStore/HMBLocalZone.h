//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitBackingStore/HMFLogging-Protocol.h>

@class HMBLocalDatabase, HMBLocalSQLContext, HMBLocalZoneConfiguration, HMBModelContainer, HMFUnfairLock, NAFuture, NSHashTable, NSMutableDictionary, NSString;
@protocol HMBLocalZoneDelegate, HMBLocalZoneID, HMBMirrorProtocol;

@interface HMBLocalZone : HMFObject <HMFLogging>
{
    _Bool _hasStartedUp;	// 8 = 0x8
    HMBLocalDatabase *_localDatabase;	// 16 = 0x10
    HMBModelContainer *_modelContainer;	// 24 = 0x18
    HMBLocalZoneConfiguration *_configuration;	// 32 = 0x20
    id <HMBLocalZoneID> _zoneID;	// 40 = 0x28
    id <HMBMirrorProtocol> _mirror;	// 48 = 0x30
    id <HMBLocalZoneDelegate> _delegate;	// 56 = 0x38
    HMFUnfairLock *_propertyLock;	// 64 = 0x40
    NSHashTable *_observersForAllModels;	// 72 = 0x48
    NSMutableDictionary *_modelObserversByModelID;	// 80 = 0x50
    NSHashTable *_mirrorOutputObservers;	// 88 = 0x58
    unsigned long long _zoneRow;	// 96 = 0x60
    HMBLocalSQLContext *_sql;	// 104 = 0x68
    NAFuture *_shutdownFuture;	// 112 = 0x70
}

+ (id)logCategory;	// IMP=0x0000000000024548
+ (id)outputModelFromUpdateModel:(id)arg1 mergedModel:(id)arg2;	// IMP=0x00000000000148db
+ (_Bool)shouldMirrorInputExternalData:(id)arg1 overwriteExistingExternalData:(id)arg2;	// IMP=0x00000000000143d6
+ (id)outputBlockRowForTuple:(id)arg1 activity:(id)arg2;	// IMP=0x0000000000013fd2
- (void).cxx_destruct;	// IMP=0x0000000000023a6e
@property(retain, nonatomic) NAFuture *shutdownFuture; // @synthesize shutdownFuture=_shutdownFuture;
@property(nonatomic) _Bool hasStartedUp; // @synthesize hasStartedUp=_hasStartedUp;
@property(readonly, nonatomic) HMBLocalSQLContext *sql; // @synthesize sql=_sql;
@property(readonly, nonatomic) unsigned long long zoneRow; // @synthesize zoneRow=_zoneRow;
@property(readonly, nonatomic) NSHashTable *mirrorOutputObservers; // @synthesize mirrorOutputObservers=_mirrorOutputObservers;
@property(readonly, nonatomic) NSMutableDictionary *modelObserversByModelID; // @synthesize modelObserversByModelID=_modelObserversByModelID;
@property(readonly, nonatomic) NSHashTable *observersForAllModels; // @synthesize observersForAllModels=_observersForAllModels;
@property(readonly, nonatomic) HMFUnfairLock *propertyLock; // @synthesize propertyLock=_propertyLock;
@property(nonatomic) __weak id <HMBLocalZoneDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <HMBMirrorProtocol> mirror; // @synthesize mirror=_mirror;
@property(readonly, nonatomic) id <HMBLocalZoneID> zoneID; // @synthesize zoneID=_zoneID;
@property(readonly, nonatomic) HMBLocalZoneConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) HMBModelContainer *modelContainer; // @synthesize modelContainer=_modelContainer;
@property(nonatomic) __weak HMBLocalDatabase *localDatabase; // @synthesize localDatabase=_localDatabase;
@property(readonly, copy) NSString *description;
- (id)logIdentifier;	// IMP=0x000000000002381b
- (_Bool)shouldLogPrivateInformation;	// IMP=0x00000000000237d7
- (id)shutdown;	// IMP=0x000000000002362c
- (id)createLocalInputWithError:(id *)arg1;	// IMP=0x00000000000235be
- (id)removeAllModelsOfTypes:(id)arg1 options:(id)arg2;	// IMP=0x00000000000231bc
- (id)removeModelsAndDescendantModelsWithIDs:(id)arg1 depth:(unsigned long long)arg2 options:(id)arg3;	// IMP=0x0000000000022de3
- (id)removeModelsWithParentModelID:(id)arg1 options:(id)arg2;	// IMP=0x0000000000022a49
- (id)removeModelIDs:(id)arg1 options:(id)arg2;	// IMP=0x00000000000229a6
- (id)updateModels:(id)arg1 options:(id)arg2;	// IMP=0x0000000000022916
- (id)addModels:(id)arg1 options:(id)arg2;	// IMP=0x0000000000022873
- (id)createModels:(id)arg1 options:(id)arg2;	// IMP=0x00000000000227e3
- (id)updateModels:(id)arg1 andRemoveModelIDs:(id)arg2 options:(id)arg3;	// IMP=0x0000000000022741
- (id)addModels:(id)arg1 andRemoveModelIDs:(id)arg2 options:(id)arg3;	// IMP=0x0000000000021937
- (id)flush;	// IMP=0x0000000000021847
- (_Bool)destroyWithError:(id *)arg1;	// IMP=0x0000000000021777
- (void)startUp;	// IMP=0x0000000000021443
- (id)setExternalData:(id)arg1 forExternalID:(id)arg2;	// IMP=0x0000000000021340
- (id)setExternalData:(id)arg1 forModelID:(id)arg2;	// IMP=0x000000000002123d
- (id)modelIDForExternalID:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000211e1
- (id)externalIDForModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000021180
- (id)externalDataForExternalID:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002111f
- (id)externalDataForModelID:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000210be
- (void)removeObserver:(id)arg1 forModelWithID:(id)arg2;	// IMP=0x0000000000020fab
- (void)removeObserverForAllModels:(id)arg1;	// IMP=0x0000000000020ebd
- (void)addObserver:(id)arg1 forModelWithID:(id)arg2;	// IMP=0x0000000000020daa
- (void)addObserverForAllModels:(id)arg1;	// IMP=0x0000000000020cbc
- (void)dealloc;	// IMP=0x0000000000020ba5
- (id)initWithLocalDatabase:(id)arg1 zoneID:(id)arg2 zoneRow:(unsigned long long)arg3 configuration:(id)arg4 mirror:(id)arg5;	// IMP=0x00000000000208d7
- (id)triggerProcessForBlockRow:(unsigned long long)arg1;	// IMP=0x000000000000a34d
- (void)queueIncompleteProcesses;	// IMP=0x0000000000009c7e
- (id)observersForModelWithID:(id)arg1;	// IMP=0x0000000000009a4a
- (void)migrateUnsupportedModels;	// IMP=0x0000000000024f19
- (id)createMirrorInputWithError:(id *)arg1;	// IMP=0x000000000003f8a8
- (_Bool)removeOutputBlockWithRow:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000000005e56e
- (id)markGroupAsSentWithOutputBlock:(unsigned long long)arg1 tuples:(id)arg2;	// IMP=0x000000000005e498
- (id)fetchRecordsForOutputBlock:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000000005e16b
- (id)fetchOptionsForOutputBlock:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000000005dd9c
- (id)allMirrorOutputObservers;	// IMP=0x000000000005dc7e
- (void)removeMirrorOutputObserver:(id)arg1;	// IMP=0x000000000005db90
- (void)addMirrorOutputObserver:(id)arg1;	// IMP=0x000000000005daa2
- (void)rebuildIndexesIfNeeded;	// IMP=0x000000000007177b
- (id)countModelsUsingQuery:(id)arg1 arguments:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000071760
- (id)queryModelsUsingQuery:(id)arg1 arguments:(id)arg2;	// IMP=0x0000000000071745
- (id)queryModelsUsingQuery:(id)arg1;	// IMP=0x000000000007172c
- (id)queryModelsRecursivelyStartingWithModelID:(id)arg1;	// IMP=0x00000000000716d0
- (id)queryModelsWithParentModelID:(id)arg1 ofType:(Class)arg2;	// IMP=0x0000000000071646
- (id)queryModelsWithParentModelID:(id)arg1;	// IMP=0x00000000000715ea
- (id)queryModelsOfType:(Class)arg1;	// IMP=0x0000000000071585
- (id)fetchModels;	// IMP=0x00000000000714cc
- (id)queryModelsOfType:(Class)arg1 properties:(id)arg2 filter:(CDUnknownBlockType)arg3;	// IMP=0x00000000000713c8
- (id)queryModelsOfType:(Class)arg1 filter:(CDUnknownBlockType)arg2;	// IMP=0x00000000000712e8
- (id)queryModelsOfType:(Class)arg1 predicate:(id)arg2;	// IMP=0x000000000007123e
- (_Bool)removeBlockWithRow:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0000000000085ee6
- (id)fetchItemsInBlock:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000085d96
- (id)fetchReadyBlocksWithType:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0000000000085c6f
- (_Bool)_insertDeletionItemsForModelsAndDescendantModelsWithBlockRow:(unsigned long long)arg1 context:(id)arg2 type:(unsigned long long)arg3 modelIDs:(id)arg4 currentDepth:(unsigned long long)arg5 maximumDepth:(unsigned long long)arg6 options:(id)arg7 error:(id *)arg8;	// IMP=0x00000000000856b0
- (unsigned long long)insertBlockToRemoveModelsAndDescendantModelsWithType:(unsigned long long)arg1 modelIDs:(id)arg2 depth:(unsigned long long)arg3 options:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000085541
- (unsigned long long)insertBlockToRemoveChildModelsWithType:(unsigned long long)arg1 parentModelID:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000853dd
- (unsigned long long)insertBlockToRemoveAllModelsWithType:(unsigned long long)arg1 modelTypes:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000085279
- (unsigned long long)insertBlockWithType:(unsigned long long)arg1 options:(id)arg2 items:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000085115
- (id)createInputBlockWithType:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0000000000084f6b
- (id)createOutputBlockWithError:(id *)arg1;	// IMP=0x0000000000084dd3
- (id)remove:(id)arg1;	// IMP=0x000000000008ca46
- (id)update:(id)arg1;	// IMP=0x000000000008ca2d
- (id)update:(id)arg1 remove:(id)arg2;	// IMP=0x000000000008c4ee
- (id)objectFromData:(id)arg1 encoding:(unsigned long long)arg2 storageLocation:(unsigned long long)arg3 recordRowID:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x000000000008c437
- (_Bool)removeAllRecordsWithError:(id *)arg1;	// IMP=0x0000000000094e69
- (id)setExternalID:(id)arg1 externalData:(id)arg2 forRecordRow:(unsigned long long)arg3;	// IMP=0x0000000000094d93
- (id)queryAllRowRecordsReturning:(unsigned long long)arg1;	// IMP=0x0000000000094d22
- (id)fetchRecordRowsWithModelIDs:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000094869
- (id)fetchRecordRowWithExternalID:(id)arg1 returning:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000094702
- (id)fetchRecordRowWithModelID:(id)arg1 returning:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000009459b
- (id)fetchModelWithModelID:(id)arg1 recordRow:(unsigned long long *)arg2 error:(id *)arg3;	// IMP=0x0000000000094384
- (id)fetchModelWithRecordRow:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000000000941ea
- (id)fetchModelsOfType:(Class)arg1 error:(id *)arg2;	// IMP=0x0000000000095bba
- (id)fetchAllModelsWithError:(id *)arg1;	// IMP=0x0000000000095a92
- (id)fetchModelsWithParentModelID:(id)arg1 error:(id *)arg2;	// IMP=0x000000000009592c
- (id)fetchModelsWithParentModelID:(id)arg1 ofType:(Class)arg2 error:(id *)arg3;	// IMP=0x0000000000095773
- (id)fetchModelWithModelID:(id)arg1 ofType:(Class)arg2 error:(id *)arg3;	// IMP=0x00000000000956df
- (id)fetchModelWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000956c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
