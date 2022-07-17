//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObjectContext.h>

@class ICBatchFetchHelper, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, RDStoreController, RDStoreControllerValidationPolicy;

@interface RDStoreControllerManagedObjectContext : NSManagedObjectContext
{
    _Bool _shouldPerformCloudSchemaCatchUpSync;	// 8 = 0x8
    _Bool _shouldSortChildrenAfterFetching;	// 9 = 0x9
    RDStoreController *_storeController;	// 16 = 0x10
    RDStoreControllerValidationPolicy *_validationPolicy;	// 24 = 0x18
    NSArray *_affectedStores;	// 32 = 0x20
    ICBatchFetchHelper *_batchFetchHelper;	// 40 = 0x28
    long long _persistenceCloudSchemaVersion;	// 48 = 0x30
    NSMutableSet *_recordIDsToSortChildrenAfterFetching;	// 56 = 0x38
    NSMutableSet *_managedObjectIDsHavingDirtyEffectiveMinimumSupportedVersion;	// 64 = 0x40
    NSMutableDictionary *_fileAttachmentIdentifiersToPurgeByAccountIdentifier;	// 72 = 0x48
    NSDictionary *__unittest_awakeCounts;	// 80 = 0x50
}

+ (id)managedObjectIDsSortedByTopologicalWeightsForEffectiveMinimumSupportedVersionPropagation:(id)arg1;	// IMP=0x00400000000693ce
+ (id)topologicallyWeightedEntitiesForEffectiveMinimumSupportedVersionPropagation;	// IMP=0x001000000006929d
+ (unsigned long long)_heightOfEntityNodeInMOMTreeForEffectiveMinimumSupportedVersionPropagation:(id)arg1 heightMap:(id)arg2;	// IMP=0x0010000000068c55
+ (id)_cdEntityNameOfREMCDObject;	// IMP=0x0010000000068c48
- (void).cxx_destruct;	// IMP=0x001000000006a70b
@property(retain, nonatomic) NSDictionary *_unittest_awakeCounts; // @synthesize _unittest_awakeCounts=__unittest_awakeCounts;
@property(retain, nonatomic) NSMutableDictionary *fileAttachmentIdentifiersToPurgeByAccountIdentifier; // @synthesize fileAttachmentIdentifiersToPurgeByAccountIdentifier=_fileAttachmentIdentifiersToPurgeByAccountIdentifier;
@property(retain, nonatomic) NSMutableSet *managedObjectIDsHavingDirtyEffectiveMinimumSupportedVersion; // @synthesize managedObjectIDsHavingDirtyEffectiveMinimumSupportedVersion=_managedObjectIDsHavingDirtyEffectiveMinimumSupportedVersion;
@property(retain, nonatomic) NSMutableSet *recordIDsToSortChildrenAfterFetching; // @synthesize recordIDsToSortChildrenAfterFetching=_recordIDsToSortChildrenAfterFetching;
@property(nonatomic) _Bool shouldSortChildrenAfterFetching; // @synthesize shouldSortChildrenAfterFetching=_shouldSortChildrenAfterFetching;
@property(nonatomic) long long persistenceCloudSchemaVersion; // @synthesize persistenceCloudSchemaVersion=_persistenceCloudSchemaVersion;
@property(nonatomic) _Bool shouldPerformCloudSchemaCatchUpSync; // @synthesize shouldPerformCloudSchemaCatchUpSync=_shouldPerformCloudSchemaCatchUpSync;
@property(retain, nonatomic) ICBatchFetchHelper *batchFetchHelper; // @synthesize batchFetchHelper=_batchFetchHelper;
@property(retain, nonatomic) NSArray *affectedStores; // @synthesize affectedStores=_affectedStores;
@property(retain, nonatomic) RDStoreControllerValidationPolicy *validationPolicy; // @synthesize validationPolicy=_validationPolicy;
@property(nonatomic) __weak RDStoreController *storeController; // @synthesize storeController=_storeController;
- (unsigned long long)_unittest_validateDirtyEffectiveMinimumSupportedVersionsManually;	// IMP=0x001000000006a57f
- (id)_debug_managedObjectIDsSortedByTopologicalWeightsForEffectiveMinimumSupportedVersionPropagation:(id)arg1;	// IMP=0x001000000006a52e
- (void)_rem_setAllowsExpandedUserInfoKeys:(_Bool)arg1;	// IMP=0x001000000006a4e6
- (void)purgeDeletedFileAttachments;	// IMP=0x0010000000069d8d
- (_Bool)coreDataSave:(id *)arg1;	// IMP=0x0010000000069d0d
- (unsigned long long)_validateDirtyEffectiveMinimumSupportedVersionsWithBatchSize:(unsigned long long)arg1 isManualValidation:(_Bool)arg2;	// IMP=0x001000000006969c
- (void)validateDirtyEffectiveMinimumSupportedVersions;	// IMP=0x001000000006963a
- (_Bool)containerShouldSortChildrenAfterFetchingWithRecordID:(id)arg1;	// IMP=0x0010000000068b4d
- (void)setupToPerformCloudSchemaCatchUpSyncIfNeeded;	// IMP=0x0010000000068a29
- (unsigned long long)countForFetchRequest:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000685ca
- (id)executeFetchRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000067f83
- (id)executeRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000067d3c
- (_Bool)hasPendingListNameRelatedChanges;	// IMP=0x0010000000067842
- (_Bool)save:(id *)arg1;	// IMP=0x0010000000067461
- (id)objectTreeProcessorDelegateFactoryWithTreeNode:(id)arg1;	// IMP=0x001000000005d6e3

@end
