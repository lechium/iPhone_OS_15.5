//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHInsertChangeRequest-Protocol.h>
#import <Photos/PHUpdateChangeRequest-Protocol.h>

@class NSManagedObjectID, NSString, PHObjectPlaceholder;

@interface PHShareParticipantChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>
{
}

+ (void)deleteShareParticipants:(id)arg1;	// IMP=0x0000000000171785
+ (id)creationRequestForShareParticipantWithPhoneNumber:(id)arg1 permission:(short)arg2;	// IMP=0x000000000017170c
+ (id)creationRequestForShareParticipantWithEmailAddress:(id)arg1 permission:(short)arg2;	// IMP=0x0000000000171693
+ (id)changeRequestForShareParticipant:(id)arg1;	// IMP=0x000000000017167a
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000171525
- (void)setPermission:(short)arg1;	// IMP=0x000000000017144e
- (short)permission;	// IMP=0x000000000017139c
- (void)setRole:(unsigned short)arg1;	// IMP=0x00000000001712c5
- (unsigned short)role;	// IMP=0x0000000000171213
@property(retain, nonatomic) NSString *phoneNumber;
@property(retain, nonatomic) NSString *emailAddress;
@property(readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedShareParticipant;
@property(readonly, nonatomic) NSString *managedEntityName;
- (_Bool)prepareForPhotoLibraryCheck:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000170c43
- (void)encodeToXPCDict:(id)arg1;	// IMP=0x0000000000170bd1
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;	// IMP=0x0000000000170b0b
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;	// IMP=0x0000000000170a61
- (id)initForNewObject;	// IMP=0x00000000001709f8

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

