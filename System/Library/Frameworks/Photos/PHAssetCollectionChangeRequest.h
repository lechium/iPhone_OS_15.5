//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHInsertChangeRequest-Protocol.h>
#import <Photos/PHUpdateChangeRequest-Protocol.h>

@class NSManagedObjectID, NSString, PHAssetCollection, PHObjectPlaceholder, PHRelationshipChangeRequestHelper;

@interface PHAssetCollectionChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>
{
    PHAssetCollection *_originalAssetCollection;	// 16 = 0x10
    PHRelationshipChangeRequestHelper *_assetsHelper;	// 24 = 0x18
    PHRelationshipChangeRequestHelper *_customKeyAssetHelper;	// 32 = 0x20
}

+ (void)_deleteAssetCollections:(id)arg1 withOperation:(long long)arg2 topLevelSelector:(SEL)arg3;	// IMP=0x00000000001463ab
+ (void)undeleteAssetCollections:(id)arg1;	// IMP=0x0000000000146391
+ (void)expungeAssetCollections:(id)arg1;	// IMP=0x0000000000146377
+ (void)deleteAssetCollections:(id)arg1;	// IMP=0x0000000000146360
+ (id)creationRequestForAssetCollectionCopyFromAssetCollection:(id)arg1;	// IMP=0x0000000000145ec5
+ (id)validateAssetCollectionTitle:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000145dc8
+ (id)creationRequestForAssetCollectionWithTitle:(id)arg1;	// IMP=0x0000000000145d61
+ (id)changeRequestForAssetCollection:(id)arg1 assets:(id)arg2;	// IMP=0x0000000000145d4f
+ (id)changeRequestForAssetCollection:(id)arg1;	// IMP=0x0000000000145d3b
+ (id)_changeRequestForAssetCollection:(id)arg1 optionalAssets:(id)arg2;	// IMP=0x0000000000145c34
- (void).cxx_destruct;	// IMP=0x0000000000145bda
@property(readonly, nonatomic) PHRelationshipChangeRequestHelper *customKeyAssetHelper; // @synthesize customKeyAssetHelper=_customKeyAssetHelper;
@property(readonly, nonatomic) PHRelationshipChangeRequestHelper *assetsHelper; // @synthesize assetsHelper=_assetsHelper;
@property(retain, nonatomic) PHAssetCollection *originalAssetCollection; // @synthesize originalAssetCollection=_originalAssetCollection;
@property(readonly, copy) NSString *description;
- (_Bool)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001451c3
- (_Bool)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000144e75
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000144ca0
- (_Bool)validateInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000144be9
- (void)removeAssets:(id)arg1;	// IMP=0x00000000001449db
- (void)addAssets:(id)arg1;	// IMP=0x00000000001447cd
- (void)removeAsset:(id)arg1;	// IMP=0x000000000014471e
- (void)addAsset:(id)arg1;	// IMP=0x000000000014466f
- (void)moveAssetsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2;	// IMP=0x000000000014456d
- (void)replaceAssetsAtIndexes:(id)arg1 withAssets:(id)arg2;	// IMP=0x0000000000144336
- (void)replaceAssetInAssetsAtIndex:(unsigned long long)arg1 withAsset:(id)arg2;	// IMP=0x000000000014425b
- (void)removeAssetsAtIndexes:(id)arg1;	// IMP=0x00000000001441d6
- (void)insertAssets:(id)arg1 atIndexes:(id)arg2;	// IMP=0x0000000000143f9c
- (void)removeAssetFromAssetsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000143f2f
- (void)insertAsset:(id)arg1 inAssetsAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000143e4f
- (id)_mutableAssetsObjectIDsAndUUIDs;	// IMP=0x0000000000143e19
- (void)_prepareAssetIDsIfNeeded;	// IMP=0x0000000000143c7a
- (void)_prepareWithFetchResult:(id)arg1;	// IMP=0x0000000000143bcb
- (void)_setOriginalAssetCollection:(id)arg1;	// IMP=0x0000000000143bb7
- (void)setCustomKeyAsset:(id)arg1;	// IMP=0x0000000000143a7f
- (id)_mutableKeyAssetObjectIDsAndUUIDs;	// IMP=0x0000000000143a49
- (void)_prepareKeyAssetIDIfNeeded;	// IMP=0x0000000000143943
- (void)setIsPinned:(_Bool)arg1;	// IMP=0x000000000014386c
- (_Bool)isPinned;	// IMP=0x00000000001437bb
@property(retain, nonatomic) NSString *title;
@property(nonatomic) _Bool customSortAscending;
@property(nonatomic) unsigned int customSortKey;
@property(readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedAssetCollection;
@property(readonly, nonatomic) NSString *managedEntityName;
- (void)encodeToXPCDict:(id)arg1;	// IMP=0x000000000014314a
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;	// IMP=0x0000000000142ffa
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;	// IMP=0x0000000000142ed4
- (id)initForNewObject;	// IMP=0x0000000000142de8

// Remaining properties
@property(readonly, nonatomic) long long accessScopeOptionsRequirement;
@property(readonly, nonatomic, getter=isClientEntitled) _Bool clientEntitled;
@property(readonly, nonatomic) NSString *clientName;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) _Bool isNewRequest;
@property(readonly, getter=isMutated) _Bool mutated;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
@property(nonatomic) _Bool shouldPerformConcurrentWork;
@property(readonly) Class superclass;

@end

