//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKit/CKContainerAssignment-Protocol.h>
#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKContainerID, CKDeviceToDeviceShareInvitationToken, CKRecord, CKRecordID, CKRecordZone, CKShare, CKShareParticipant, CKUserIdentity, NSArray, NSData, NSString;

@interface CKShareMetadata : NSObject <CKContainerAssignment, NSCopying, NSSecureCoding>
{
    _Bool _acceptedInProcess;	// 8 = 0x8
    CKShare *_share;	// 16 = 0x10
    CKRecordID *_hierarchicalRootRecordID;	// 24 = 0x18
    long long _participantRole;	// 32 = 0x20
    long long _participantStatus;	// 40 = 0x28
    long long _participantPermission;	// 48 = 0x30
    CKUserIdentity *_ownerIdentity;	// 56 = 0x38
    CKRecord *_rootRecord;	// 64 = 0x40
    CKShareParticipant *_callingParticipant;	// 72 = 0x48
    NSArray *_sharedItemHierarchyIDs;	// 80 = 0x50
    NSString *_rootRecordType;	// 88 = 0x58
    CKDeviceToDeviceShareInvitationToken *_invitationToken;	// 96 = 0x60
    NSData *_protectedFullToken;	// 104 = 0x68
    NSData *_publicToken;	// 112 = 0x70
    NSData *_privateToken;	// 120 = 0x78
    CKRecordZone *_sharedZone;	// 128 = 0x80
    CKContainerID *_containerID;	// 136 = 0x88
    NSArray *_outOfNetworkMatches;	// 144 = 0x90
    NSData *_encryptedData;	// 152 = 0x98
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001516a9
- (void).cxx_destruct;	// IMP=0x0000000000152ca8
@property(retain, nonatomic) NSData *encryptedData; // @synthesize encryptedData=_encryptedData;
@property(nonatomic) _Bool acceptedInProcess; // @synthesize acceptedInProcess=_acceptedInProcess;
@property(retain, nonatomic) NSArray *outOfNetworkMatches; // @synthesize outOfNetworkMatches=_outOfNetworkMatches;
@property(copy, nonatomic) CKContainerID *containerID; // @synthesize containerID=_containerID;
@property(retain, nonatomic) CKRecordZone *sharedZone; // @synthesize sharedZone=_sharedZone;
@property(copy, nonatomic) NSData *privateToken; // @synthesize privateToken=_privateToken;
@property(copy, nonatomic) NSData *publicToken; // @synthesize publicToken=_publicToken;
@property(copy, nonatomic) NSData *protectedFullToken; // @synthesize protectedFullToken=_protectedFullToken;
@property(copy, nonatomic) CKDeviceToDeviceShareInvitationToken *invitationToken; // @synthesize invitationToken=_invitationToken;
@property(retain, nonatomic) NSString *rootRecordType; // @synthesize rootRecordType=_rootRecordType;
@property(copy, nonatomic) NSArray *sharedItemHierarchyIDs; // @synthesize sharedItemHierarchyIDs=_sharedItemHierarchyIDs;
@property(copy, nonatomic) CKShareParticipant *callingParticipant; // @synthesize callingParticipant=_callingParticipant;
@property(copy, nonatomic) CKRecord *rootRecord; // @synthesize rootRecord=_rootRecord;
@property(copy, nonatomic) CKUserIdentity *ownerIdentity; // @synthesize ownerIdentity=_ownerIdentity;
@property(nonatomic) long long participantPermission; // @synthesize participantPermission=_participantPermission;
@property(nonatomic) long long participantStatus; // @synthesize participantStatus=_participantStatus;
@property(nonatomic) long long participantRole; // @synthesize participantRole=_participantRole;
@property(copy, nonatomic) CKRecordID *hierarchicalRootRecordID; // @synthesize hierarchicalRootRecordID=_hierarchicalRootRecordID;
@property(copy, nonatomic) CKShare *share; // @synthesize share=_share;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000151fb9
- (unsigned long long)hash;	// IMP=0x0000000000151efa
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000151a47
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001516b1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001510eb
- (void)fillAnonymousCKUserID:(id)arg1;	// IMP=0x0000000000150d36
@property(readonly, copy, nonatomic) CKRecordID *rootRecordID;
- (long long)environment;	// IMP=0x0000000000150ca6
@property(readonly, copy, nonatomic) NSString *containerIdentifier;
@property(readonly, nonatomic) long long participantType;
- (void)CKAssignToContainerWithID:(id)arg1;	// IMP=0x0000000000150a7d
- (id)ckShortDescription;	// IMP=0x0000000000150957
- (id)description;	// IMP=0x0000000000150945
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;	// IMP=0x00000000001502d3
@property(readonly, nonatomic, getter=baseToken) NSString *baseToken;
- (id)init;	// IMP=0x0000000000150130

@end

