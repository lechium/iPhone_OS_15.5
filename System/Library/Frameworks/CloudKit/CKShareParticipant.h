//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKit/CKPropertiesDescription-Protocol.h>
#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKDeviceToDeviceShareInvitationToken, CKRecordID, CKUserIdentity, NSData, NSString;

@interface CKShareParticipant : NSObject <CKPropertiesDescription, NSSecureCoding, NSCopying>
{
    _Bool _wantsNewInvitationToken;	// 8 = 0x8
    _Bool _isCurrentUser;	// 9 = 0x9
    _Bool _isOrgAdminUser;	// 10 = 0xa
    _Bool _createdInProcess;	// 11 = 0xb
    _Bool _acceptedInProcess;	// 12 = 0xc
    _Bool _isAnonymousInvitedParticipant;	// 13 = 0xd
    _Bool _forceSendPublicKeyForAnonymousParticipants;	// 14 = 0xe
    CKUserIdentity *_userIdentity;	// 16 = 0x10
    long long _role;	// 24 = 0x18
    long long _acceptanceStatus;	// 32 = 0x20
    long long _permission;	// 40 = 0x28
    long long _mutableInvitationTokenStatus;	// 48 = 0x30
    CKRecordID *_shareRecordID;	// 56 = 0x38
    NSString *_inviterID;	// 64 = 0x40
    long long _originalParticipantRole;	// 72 = 0x48
    long long _originalAcceptanceStatus;	// 80 = 0x50
    long long _originalPermission;	// 88 = 0x58
    NSData *_protectionInfo;	// 96 = 0x60
    NSData *_protectionInfoPublicKey;	// 104 = 0x68
    NSData *_encryptedPersonalInfo;	// 112 = 0x70
    NSString *_participantID;	// 120 = 0x78
    CKDeviceToDeviceShareInvitationToken *_invitationToken;	// 128 = 0x80
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000dce1c
- (void).cxx_destruct;	// IMP=0x00000000000dd6fe
@property(copy, nonatomic) CKDeviceToDeviceShareInvitationToken *invitationToken; // @synthesize invitationToken=_invitationToken;
@property(copy, nonatomic) NSString *participantID; // @synthesize participantID=_participantID;
@property(nonatomic) _Bool forceSendPublicKeyForAnonymousParticipants; // @synthesize forceSendPublicKeyForAnonymousParticipants=_forceSendPublicKeyForAnonymousParticipants;
@property(nonatomic) _Bool isAnonymousInvitedParticipant; // @synthesize isAnonymousInvitedParticipant=_isAnonymousInvitedParticipant;
@property(retain, nonatomic) NSData *encryptedPersonalInfo; // @synthesize encryptedPersonalInfo=_encryptedPersonalInfo;
@property(retain, nonatomic) NSData *protectionInfoPublicKey; // @synthesize protectionInfoPublicKey=_protectionInfoPublicKey;
@property(retain, nonatomic) NSData *protectionInfo; // @synthesize protectionInfo=_protectionInfo;
@property(nonatomic) _Bool acceptedInProcess; // @synthesize acceptedInProcess=_acceptedInProcess;
@property(nonatomic) _Bool createdInProcess; // @synthesize createdInProcess=_createdInProcess;
@property(nonatomic) long long originalPermission; // @synthesize originalPermission=_originalPermission;
@property(nonatomic) long long originalAcceptanceStatus; // @synthesize originalAcceptanceStatus=_originalAcceptanceStatus;
@property(nonatomic) long long originalParticipantRole; // @synthesize originalParticipantRole=_originalParticipantRole;
@property(retain, nonatomic) NSString *inviterID; // @synthesize inviterID=_inviterID;
@property(retain, nonatomic) CKRecordID *shareRecordID; // @synthesize shareRecordID=_shareRecordID;
@property(nonatomic) long long mutableInvitationTokenStatus; // @synthesize mutableInvitationTokenStatus=_mutableInvitationTokenStatus;
@property(nonatomic) _Bool isOrgAdminUser; // @synthesize isOrgAdminUser=_isOrgAdminUser;
@property(nonatomic) _Bool isCurrentUser; // @synthesize isCurrentUser=_isCurrentUser;
@property(nonatomic) _Bool wantsNewInvitationToken; // @synthesize wantsNewInvitationToken=_wantsNewInvitationToken;
@property(nonatomic) long long permission; // @synthesize permission=_permission;
@property(nonatomic) long long acceptanceStatus; // @synthesize acceptanceStatus=_acceptanceStatus;
@property(nonatomic) long long role; // @synthesize role=_role;
@property(copy, nonatomic) CKUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000dd1a7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000dce24
- (id)unifiedContactsInStore:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000dc74a
@property(nonatomic) long long type;
- (long long)invitationTokenStatus;	// IMP=0x00000000000dc614
- (void)_stripPersonalInfo;	// IMP=0x00000000000dc510
@property(readonly, copy) NSString *debugDescription;
- (id)redactedDescription;	// IMP=0x00000000000dc226
@property(readonly, copy) NSString *description;
- (void)CKDescribePropertiesUsing:(id)arg1;	// IMP=0x00000000000dbd65
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000dba83
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000db714
- (id)_initWithUserIdentity:(id)arg1;	// IMP=0x00000000000db6b7
- (id)_init;	// IMP=0x00000000000db63e

// Remaining properties
@property(readonly) Class superclass;

@end

