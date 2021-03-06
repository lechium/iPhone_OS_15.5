//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHInsertChangeRequest-Protocol.h>
#import <Photos/PHUpdateChangeRequest-Protocol.h>

@class NSDictionary, NSManagedObjectID, NSMutableArray, NSMutableSet, NSString, PHObjectPlaceholder, PHPerson, PHRelationshipChangeRequestHelper, PHUserFeedback;

@interface PHPersonChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>
{
    NSMutableArray *_personUUIDsToMerge;	// 16 = 0x10
    NSString *_nominalMergeTargetUUID;	// 24 = 0x18
    NSMutableSet *_faceUUIDsRequiringFaceCropGeneration;	// 32 = 0x20
    NSMutableSet *_rejectedMergeCandidatePersonUUIDs;	// 40 = 0x28
    NSMutableSet *_graphDedupePersonUUIDs;	// 48 = 0x30
    _Bool _didUnsetUserFeedback;	// 56 = 0x38
    PHPerson *_targetPerson;	// 64 = 0x40
    NSString *_identifier;	// 72 = 0x48
    PHUserFeedback *_userFeedback;	// 80 = 0x50
    PHRelationshipChangeRequestHelper *_facesHelper;	// 88 = 0x58
    PHRelationshipChangeRequestHelper *_keyFaceHelper;	// 96 = 0x60
    PHRelationshipChangeRequestHelper *_rejectedFacesHelper;	// 104 = 0x68
    PHRelationshipChangeRequestHelper *_mergeCandidatesHelper;	// 112 = 0x70
    PHRelationshipChangeRequestHelper *_invalidMergeCandidatesHelper;	// 120 = 0x78
}

+ (id)changeRequestForDedupingGraphPersons:(id)arg1;	// IMP=0x00000000001362eb
+ (id)changeRequestsForMergeCandidatePersons:(id)arg1;	// IMP=0x0000000000135f8f
+ (id)changeRequestForMergingPersons:(id)arg1 nominalTargetIdentifier:(id)arg2;	// IMP=0x0000000000135ae6
+ (id)changeRequestForMergingPersons:(id)arg1;	// IMP=0x0000000000135ad2
+ (void)deletePersons:(id)arg1;	// IMP=0x0000000000135a72
+ (id)changeRequestForPerson:(id)arg1;	// IMP=0x00000000001359f1
+ (id)creationRequestForPerson;	// IMP=0x00000000001359c8
- (void).cxx_destruct;	// IMP=0x000000000013589c
@property(readonly, nonatomic) PHRelationshipChangeRequestHelper *invalidMergeCandidatesHelper; // @synthesize invalidMergeCandidatesHelper=_invalidMergeCandidatesHelper;
@property(readonly, nonatomic) PHRelationshipChangeRequestHelper *mergeCandidatesHelper; // @synthesize mergeCandidatesHelper=_mergeCandidatesHelper;
@property(readonly, nonatomic) PHRelationshipChangeRequestHelper *rejectedFacesHelper; // @synthesize rejectedFacesHelper=_rejectedFacesHelper;
@property(readonly, nonatomic) PHRelationshipChangeRequestHelper *keyFaceHelper; // @synthesize keyFaceHelper=_keyFaceHelper;
@property(readonly, nonatomic) PHRelationshipChangeRequestHelper *facesHelper; // @synthesize facesHelper=_facesHelper;
@property(copy, nonatomic) PHUserFeedback *userFeedback; // @synthesize userFeedback=_userFeedback;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) PHPerson *targetPerson; // @synthesize targetPerson=_targetPerson;
- (void)_setGraphDedupePersons:(id)arg1;	// IMP=0x00000000001355d0
- (void)addInvalidMergeCandidatePersons:(id)arg1;	// IMP=0x0000000000135520
- (void)rejectMergeCandidatePersons:(id)arg1;	// IMP=0x0000000000135328
- (void)removeMergeCandidatePersons:(id)arg1;	// IMP=0x000000000013529f
- (void)addMergeCandidatePersons:(id)arg1;	// IMP=0x0000000000135216
- (void)mergePersons:(id)arg1;	// IMP=0x0000000000135004
- (void)_setNominalMergeTargetUUID:(id)arg1;	// IMP=0x0000000000134ff0
- (void)persistSuggestionForClient:(unsigned long long)arg1;	// IMP=0x0000000000134f83
- (void)removeRejectedFaces:(id)arg1;	// IMP=0x0000000000134d2e
- (void)addRejectedFaces:(id)arg1;	// IMP=0x0000000000134d17
- (void)addRejectedFaces:(id)arg1 forCluster:(_Bool)arg2;	// IMP=0x0000000000134a84
- (void)setKeyFace:(id)arg1;	// IMP=0x0000000000134a72
- (void)setKeyFace:(id)arg1 forCluster:(_Bool)arg2;	// IMP=0x0000000000134a5d
- (void)setKeyFaceForUserPick:(id)arg1 forCluster:(_Bool)arg2;	// IMP=0x00000000001349f1
- (void)setKeyFaceForUserPick:(id)arg1;	// IMP=0x00000000001349da
- (void)_setKeyFace:(id)arg1 forCluster:(_Bool)arg2 pickSource:(short)arg3;	// IMP=0x000000000013467c
- (void)removeFaces:(id)arg1;	// IMP=0x00000000001345f3
- (void)addFaces:(id)arg1;	// IMP=0x000000000013456a
- (id)_mutableRequiringFaceCropGenerationFacesUUIDs;	// IMP=0x0000000000134529
- (id)_mutableInvalidMergeCandidateObjectIDsAndUUIDs;	// IMP=0x00000000001344ba
- (id)_mutableMergeCandidateObjectIDsAndUUIDs;	// IMP=0x000000000013444b
- (id)_mutableRejectedFacesObjectIDsAndUUIDs;	// IMP=0x00000000001343dc
- (id)_mutableKeyFaceObjectIDsAndUUIDs;	// IMP=0x00000000001343a6
- (id)_mutableFaceObjectIDsAndUUIDs;	// IMP=0x0000000000134337
- (void)_prepareKeyFaceHelperIfNeeded;	// IMP=0x0000000000134231
- (id)_existentInvalidMergeCandidateObjectIDs;	// IMP=0x0000000000134145
- (id)_existentMergeCandidateObjectIDs;	// IMP=0x0000000000134059
- (id)_noMinimumFaceCountPersonFetchOptions;	// IMP=0x0000000000133fe2
- (id)_existentRejectedFaceObjectIDs;	// IMP=0x0000000000133ec2
- (id)_existentFaceObjectIDs;	// IMP=0x0000000000133da2
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000133c08
- (_Bool)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000131eb0
- (_Bool)_shouldPromotePerson:(id)arg1 toVerifiedType:(int *)arg2;	// IMP=0x0000000000131df6
- (_Bool)validateMutationsToManagedObject:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000131baf
- (_Bool)_hasMutationForVerifiedType:(int *)arg1;	// IMP=0x0000000000131afc
- (_Bool)_containsUserMutations;	// IMP=0x000000000013195c
@property(readonly, nonatomic) NSString *managedEntityName;
@property(nonatomic, getter=isVerified) _Bool verified;
@property(nonatomic) unsigned short sexType;
@property(nonatomic) short detectionType;
@property(nonatomic) unsigned short suggestedForClientType;
@property(nonatomic) short keyFacePickSource;
@property(copy, nonatomic) NSDictionary *contactMatchingDictionary;
@property(nonatomic) unsigned short genderType;
@property(nonatomic) unsigned short ageType;
@property(nonatomic) unsigned short questionType;
@property(nonatomic) long long verifiedType;
@property(nonatomic, getter=isInPersonNamingModel) _Bool inPersonNamingModel;
@property(copy, nonatomic) NSString *personUri;
- (void)setPersonUUID:(id)arg1;	// IMP=0x0000000000130521
- (id)personUUID;	// IMP=0x0000000000130489
@property(copy, nonatomic) NSString *displayName;
@property(copy, nonatomic) NSString *name;
@property(nonatomic) unsigned long long manualOrder;
@property(nonatomic) long long type;
@property(readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedPerson;
- (void)encodeToXPCDict:(id)arg1;	// IMP=0x000000000012f98e
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;	// IMP=0x000000000012f3e4
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;	// IMP=0x000000000012f226
- (id)initForNewObject;	// IMP=0x000000000012f0a4

// Remaining properties
@property(readonly, nonatomic) long long accessScopeOptionsRequirement;
@property(readonly, nonatomic, getter=isClientEntitled) _Bool clientEntitled;
@property(readonly, nonatomic) NSString *clientName;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) _Bool isNewRequest;
@property(readonly, getter=isMutated) _Bool mutated;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
@property(nonatomic) _Bool shouldPerformConcurrentWork;
@property(readonly) Class superclass;

@end

