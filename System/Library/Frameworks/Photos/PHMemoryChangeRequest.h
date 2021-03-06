//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHInsertChangeRequest-Protocol.h>
#import <Photos/PHUpdateChangeRequest-Protocol.h>

@class NSData, NSDate, NSDictionary, NSManagedObjectID, NSNumber, NSString, PHMemoryFeature, PHObjectPlaceholder, PHRelationshipChangeRequestHelper, PHUserFeedback;

@interface PHMemoryChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>
{
    _Bool _clientEntitledToMemoryMutation;	// 16 = 0x10
    _Bool _incrementPlayCount;	// 17 = 0x11
    _Bool _incrementShareCount;	// 18 = 0x12
    _Bool _incrementViewCount;	// 19 = 0x13
    _Bool _didUnsetUserFeedback;	// 20 = 0x14
    _Bool _didSetUserCreated;	// 21 = 0x15
    _Bool _userCreated;	// 22 = 0x16
    NSDictionary *_movieAssetState;	// 24 = 0x18
    PHUserFeedback *_userFeedback;	// 32 = 0x20
    NSNumber *_customMaximumNumberOfUserCuratedAssets;	// 40 = 0x28
    PHRelationshipChangeRequestHelper *_keyAssetHelper;	// 48 = 0x30
    PHRelationshipChangeRequestHelper *_representativeAssetsHelper;	// 56 = 0x38
    PHRelationshipChangeRequestHelper *_curatedAssetsHelper;	// 64 = 0x40
    PHRelationshipChangeRequestHelper *_extendedCuratedAssetsHelper;	// 72 = 0x48
    PHRelationshipChangeRequestHelper *_movieCuratedAssetsHelper;	// 80 = 0x50
    PHRelationshipChangeRequestHelper *_userCuratedAssetsHelper;	// 88 = 0x58
}

+ (id)changeRequestForRemotelyViewedMemoryWithLocalIdentifier:(id)arg1;	// IMP=0x00000000000a603a
+ (void)unblockPersonsInMemoriesWithBlockedPersonFeature:(id)arg1;	// IMP=0x00000000000a5d1b
+ (void)blockPerson:(id)arg1 withAsset:(id)arg2;	// IMP=0x00000000000a594b
+ (void)blockPerson:(id)arg1;	// IMP=0x00000000000a5724
+ (void)deleteMemories:(id)arg1;	// IMP=0x00000000000a56c4
+ (id)validateMemoryTitle:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a55d5
+ (id)changeRequestForMemory:(id)arg1;	// IMP=0x00000000000a550d
+ (id)_preferredAttributesForMemoryCreationFromObject:(id)arg1 withSuccess:(_Bool)arg2 title:(id)arg3 subtitle:(id)arg4 error:(id)arg5 proposedAttributes:(id)arg6;	// IMP=0x00000000000a5267
+ (long long)_titleFormatForProposedAttributes:(id)arg1;	// IMP=0x00000000000a51bd
+ (_Bool)_shouldAcceptProposedAttributes:(id)arg1;	// IMP=0x00000000000a50f0
+ (id)preferredAttributesForMemoryCreationFromPeople:(id)arg1 proposedAttributes:(id)arg2;	// IMP=0x00000000000a4d05
+ (id)preferredAttributesForMemoryCreationFromCollectionList:(id)arg1 proposedAttributes:(id)arg2;	// IMP=0x00000000000a4b49
+ (id)preferredAttributesForMemoryCreationFromAssetCollection:(id)arg1 proposedAttributes:(id)arg2;	// IMP=0x00000000000a495f
+ (id)creationRequestForMemoryWithTitle:(id)arg1 subtitle:(id)arg2 creationDate:(id)arg3 category:(unsigned long long)arg4 subcategory:(unsigned long long)arg5 representativeAssetUUIDs:(id)arg6 curatedAssetUUIDs:(id)arg7 extendedCuratedAssetUUIDs:(id)arg8 keyAssetUUID:(id)arg9;	// IMP=0x00000000000a47ec
+ (id)creationRequestForMemoryWithTitle:(id)arg1 subtitle:(id)arg2 creationDate:(id)arg3 category:(unsigned long long)arg4 subcategory:(unsigned long long)arg5 representativeAssets:(id)arg6 curatedAssets:(id)arg7 extendedCuratedAssets:(id)arg8 keyAsset:(id)arg9;	// IMP=0x00000000000a4679
- (void).cxx_destruct;	// IMP=0x00000000000a44cf
@property(readonly, nonatomic) PHRelationshipChangeRequestHelper *userCuratedAssetsHelper; // @synthesize userCuratedAssetsHelper=_userCuratedAssetsHelper;
@property(readonly, nonatomic) PHRelationshipChangeRequestHelper *movieCuratedAssetsHelper; // @synthesize movieCuratedAssetsHelper=_movieCuratedAssetsHelper;
@property(readonly, nonatomic) PHRelationshipChangeRequestHelper *extendedCuratedAssetsHelper; // @synthesize extendedCuratedAssetsHelper=_extendedCuratedAssetsHelper;
@property(readonly, nonatomic) PHRelationshipChangeRequestHelper *curatedAssetsHelper; // @synthesize curatedAssetsHelper=_curatedAssetsHelper;
@property(readonly, nonatomic) PHRelationshipChangeRequestHelper *representativeAssetsHelper; // @synthesize representativeAssetsHelper=_representativeAssetsHelper;
@property(readonly, nonatomic) PHRelationshipChangeRequestHelper *keyAssetHelper; // @synthesize keyAssetHelper=_keyAssetHelper;
@property(retain, nonatomic) NSNumber *customMaximumNumberOfUserCuratedAssets; // @synthesize customMaximumNumberOfUserCuratedAssets=_customMaximumNumberOfUserCuratedAssets;
@property(copy, nonatomic) PHUserFeedback *userFeedback; // @synthesize userFeedback=_userFeedback;
@property(readonly, nonatomic) NSDictionary *movieAssetState; // @synthesize movieAssetState=_movieAssetState;
@property(readonly, nonatomic) _Bool clientEntitledToMemoryMutation; // @synthesize clientEntitledToMemoryMutation=_clientEntitledToMemoryMutation;
@property(readonly, copy) NSString *description;
- (_Bool)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000a2be9
- (_Bool)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000a2812
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a2692
- (_Bool)validateMutationsToManagedObject:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a204b
- (_Bool)validateInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a1f5f
- (void)incrementViewCount;	// IMP=0x00000000000a1f37
- (void)incrementShareCount;	// IMP=0x00000000000a1f0f
- (void)incrementPlayCount;	// IMP=0x00000000000a1ee7
@property(retain, nonatomic) PHMemoryFeature *blacklistedFeature;
- (void)setQueryHintObjects:(id)arg1;	// IMP=0x00000000000a19be
- (void)setQueryHintObject:(id)arg1;	// IMP=0x00000000000a1914
- (void)setMovieStateData:(id)arg1 forAsset:(id)arg2;	// IMP=0x00000000000a1738
- (void)setUserCuratedAssets:(id)arg1;	// IMP=0x00000000000a1239
- (void)setMovieCuratedAssets:(id)arg1;	// IMP=0x00000000000a0db3
- (void)setKeyAssetUUID:(id)arg1;	// IMP=0x00000000000a0cdc
- (void)setRepresentativeAssetUUIDs:(id)arg1 curatedAssetUUIDs:(id)arg2 extendedCuratedAssetUUIDs:(id)arg3 keyAssetUUID:(id)arg4;	// IMP=0x00000000000a0b1a
- (void)setKeyAsset:(id)arg1;	// IMP=0x00000000000a0a41
- (void)setRepresentativeAssets:(id)arg1 curatedAssets:(id)arg2 extendedCuratedAssets:(id)arg3 keyAsset:(id)arg4;	// IMP=0x00000000000a042c
- (id)_mutableKeyAssetObjectIDsAndUUIDs;	// IMP=0x00000000000a03f6
- (id)_mutableExtendedCuratedAssetObjectIDsAndUUIDs;	// IMP=0x00000000000a03c0
- (id)_mutableCuratedAssetObjectIDsAndUUIDs;	// IMP=0x00000000000a038a
- (id)_mutableRepresentativeAssetObjectIDsAndUUIDs;	// IMP=0x00000000000a0354
- (void)_prepareAssetIDsIfNeeded;	// IMP=0x000000000009ffe7
@property(retain, nonatomic) NSString *storyTitleCategory;
@property(nonatomic, getter=isUserCreated) _Bool userCreated; // @synthesize userCreated=_userCreated;
@property(nonatomic) long long featuredState;
@property(nonatomic) unsigned long long notificationState;
@property(retain, nonatomic) NSDate *lastEnrichmentDate;
@property(retain, nonatomic) NSDate *lastMoviePlayedDate;
@property(retain, nonatomic) NSDate *lastViewedDate;
@property(nonatomic) long long photosGraphVersion;
@property(retain, nonatomic) NSData *photosGraphData;
@property(retain, nonatomic) NSData *movieData;
- (void)setStorySerializedTitleCategory:(long long)arg1;	// IMP=0x000000000009ef25
- (long long)storySerializedTitleCategory;	// IMP=0x000000000009ee72
@property(nonatomic) long long storyColorGradeKind;
@property(retain, nonatomic) NSString *graphMemoryIdentifier;
@property(retain, nonatomic) NSString *subtitle;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) NSDate *creationDate;
@property(nonatomic) double score;
- (void)setSubcategory:(unsigned long long)arg1;	// IMP=0x000000000009e21f
- (unsigned long long)subcategory;	// IMP=0x000000000009e16c
@property(nonatomic) unsigned long long category;
@property(nonatomic) unsigned short pendingState;
@property(nonatomic, getter=isFavorite) _Bool favorite;
@property(nonatomic, getter=isRejected) _Bool rejected;
@property(readonly, nonatomic) NSString *managedEntityName;
- (void)encodeToXPCDict:(id)arg1;	// IMP=0x000000000009d7d9
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;	// IMP=0x000000000009d283
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;	// IMP=0x000000000009d124
- (id)initForNewObject;	// IMP=0x000000000009cf70
@property(readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedMemory;

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

