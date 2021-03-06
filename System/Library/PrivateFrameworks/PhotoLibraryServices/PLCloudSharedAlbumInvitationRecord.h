//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSNumber, NSString, PLCloudSharedAlbum;

@interface PLCloudSharedAlbumInvitationRecord
{
}

+ (id)cloudSharedAlbumInvitationRecordsWithAlbumGUID:(id)arg1 inLibrary:(id)arg2;	// IMP=0x0000000000412929
+ (id)cloudSharedAlbumInvitationRecordWithGUID:(id)arg1 inLibrary:(id)arg2;	// IMP=0x0000000000412710
+ (id)insertNewInvitationRecordIntoAlbum:(id)arg1 withFirstName:(id)arg2 lastName:(id)arg3 fullName:(id)arg4 emails:(id)arg5 phones:(id)arg6 inLibrary:(id)arg7;	// IMP=0x00000000004122f1
+ (id)entityName;	// IMP=0x00000000004122e4
- (id)invitationStateDescription;	// IMP=0x00000000004121ee
- (void)setInviteeEmails:(id)arg1 phones:(id)arg2;	// IMP=0x000000000041212a
@property(readonly, nonatomic) __weak NSArray *inviteePhones;
@property(readonly, nonatomic) __weak NSArray *inviteeEmails;
- (id)inviteeDisplayNameIncludingEmail:(_Bool)arg1;	// IMP=0x0000000000411ba9
- (void)delete;	// IMP=0x0000000000411adc
- (void)prepareForDeletion;	// IMP=0x0000000000411a14
- (void)willSave;	// IMP=0x0000000000411960
- (void)awakeFromInsert;	// IMP=0x00000000004118ac
- (id)init;	// IMP=0x000000000041187d

// Remaining properties
@property(retain, nonatomic) PLCloudSharedAlbum *album; // @dynamic album;
@property(retain, nonatomic) NSString *albumGUID; // @dynamic albumGUID;
@property(retain, nonatomic) NSString *cloudGUID; // @dynamic cloudGUID;
@property(retain, nonatomic) NSNumber *invitationState; // @dynamic invitationState;
@property(retain, nonatomic) NSNumber *invitationStateLocal; // @dynamic invitationStateLocal;
@property(retain, nonatomic) NSNumber *inviteeEmailKey; // @dynamic inviteeEmailKey;
@property(retain, nonatomic) NSString *inviteeFirstName; // @dynamic inviteeFirstName;
@property(retain, nonatomic) NSString *inviteeFullName; // @dynamic inviteeFullName;
@property(retain, nonatomic) NSString *inviteeHashedPersonID; // @dynamic inviteeHashedPersonID;
@property(retain, nonatomic) NSString *inviteeLastName; // @dynamic inviteeLastName;
@property(retain, nonatomic) NSDate *inviteeSubscriptionDate; // @dynamic inviteeSubscriptionDate;
@property(nonatomic) _Bool isMine; // @dynamic isMine;

@end

