//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BookDataStore/BCCloudDataSyncManagerDelegate-Protocol.h>
#import <BookDataStore/BDSCloudGlobalMetadataManager-Protocol.h>
#import <BookDataStore/BDSCloudKitSupportZoneRecovery-Protocol.h>

@class BCCloudChangeTokenController, BCCloudDataManager, BCCloudDataSource, BCCloudDataSyncManager, BDSSaltVersionIdentifierManager, NSManagedObjectModel, NSMutableDictionary, NSString;

@interface BDSCloudGlobalMetadataManager : NSObject <BCCloudDataSyncManagerDelegate, BDSCloudKitSupportZoneRecovery, BDSCloudGlobalMetadataManager>
{
    _Bool _enableCloudSync;	// 8 = 0x8
    BCCloudDataSource *_globalMetadataDataSource;	// 16 = 0x10
    BCCloudDataSyncManager *_syncManager;	// 24 = 0x18
    BCCloudDataManager *_dataManager;	// 32 = 0x20
    NSManagedObjectModel *_objectModel;	// 40 = 0x28
    BCCloudChangeTokenController *_changeTokenController;	// 48 = 0x30
    BDSSaltVersionIdentifierManager *_saltVersionIdentifierManager;	// 56 = 0x38
    NSMutableDictionary *_conflictResolvers;	// 64 = 0x40
}

+ (void)deleteCloudDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000025615
+ (id)sharedManager;	// IMP=0x0000000000024ee3
- (void).cxx_destruct;	// IMP=0x00000000000271f3
@property(retain, nonatomic) NSMutableDictionary *conflictResolvers; // @synthesize conflictResolvers=_conflictResolvers;
@property(retain, nonatomic) BDSSaltVersionIdentifierManager *saltVersionIdentifierManager; // @synthesize saltVersionIdentifierManager=_saltVersionIdentifierManager;
@property(retain, nonatomic) BCCloudChangeTokenController *changeTokenController; // @synthesize changeTokenController=_changeTokenController;
@property(retain, nonatomic) NSManagedObjectModel *objectModel; // @synthesize objectModel=_objectModel;
@property(retain, nonatomic) BCCloudDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(retain, nonatomic) BCCloudDataSyncManager *syncManager; // @synthesize syncManager=_syncManager;
@property(retain, nonatomic) BCCloudDataSource *globalMetadataDataSource; // @synthesize globalMetadataDataSource=_globalMetadataDataSource;
@property(nonatomic) _Bool enableCloudSync; // @synthesize enableCloudSync=_enableCloudSync;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000026f00
- (void)metadataValueForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026dd9
- (void)resolvedMetadataValueForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026bbd
- (void)getMetadataChangesSince:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026b26
- (void)fetchMetadataIncludingDeleted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026aae
- (void)metadatumIncludingDeleted:(_Bool)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000268d3
- (void)metadatumForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026731
- (void)deleteMetadatumForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026677
- (void)updateSyncGenerationFromCloudData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026586
- (void)removeMetadataForSaltedHashedRecordIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002640d
- (void)setMetadata:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002631c
- (void)setMetadatum:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026232
- (void)currentCloudSyncVersions:(CDUnknownBlockType)arg1;	// IMP=0x00000000000261c0
- (id)entityName;	// IMP=0x0000000000026029
- (void)syncManager:(id)arg1 failedRecordIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000025ec3
- (void)syncManager:(id)arg1 resolveConflictsForRecords:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000025d2a
- (void)syncManager:(id)arg1 updateSyncGenerationFromCloudData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000025aac
- (void)syncManager:(id)arg1 fetchedAllRecordsInZone:(id)arg2;	// IMP=0x0000000000025a0c
- (void)syncManager:(id)arg1 removeCloudDataForIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000257a3
- (void)signalSyncToCKForSyncManager:(id)arg1;	// IMP=0x00000000000256c1
- (void)syncManager:(id)arg1 startSyncToCKWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002562e
- (void)dissociateCloudDataFromSyncWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000025545
- (void)hasSaltChangedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000254d3
- (void)removeConflictResolverForKey:(id)arg1;	// IMP=0x0000000000025459
- (void)setConflictResolver:(CDUnknownBlockType)arg1 forKey:(id)arg2;	// IMP=0x000000000002531f
- (id)initWithCloudDataSource:(id)arg1;	// IMP=0x0000000000024fc9
- (id)init;	// IMP=0x0000000000024f38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

