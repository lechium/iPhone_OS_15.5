//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CSDMessagingConversationLink, CSDMessagingConversationReport, CSDMessagingEncryptedConversationMessage, NSData, NSMutableArray, NSSet, NSString, NSUUID, TUConversationLink;

@interface CSDMessagingConversationMessage : PBCodable
{
    NSMutableArray *_activeLightweightParticipants;	// 8 = 0x8
    NSMutableArray *_activeParticipants;	// 16 = 0x10
    NSMutableArray *_activitySessions;	// 24 = 0x18
    NSMutableArray *_addedMembers;	// 32 = 0x20
    NSString *_conversationGroupUUIDString;	// 40 = 0x28
    unsigned int _disconnectedReason;	// 48 = 0x30
    int _enclosedEncryptedType;	// 52 = 0x34
    CSDMessagingEncryptedConversationMessage *_encryptedMessage;	// 56 = 0x38
    NSMutableArray *_invitationPreferences;	// 64 = 0x40
    NSString *_letMeInDelegationHandle;	// 72 = 0x48
    NSString *_letMeInDelegationUUID;	// 80 = 0x50
    NSMutableArray *_lightweightMembers;	// 88 = 0x58
    CSDMessagingConversationLink *_link;	// 96 = 0x60
    NSString *_nickname;	// 104 = 0x68
    NSString *_protoUpgradeSessionUUID;	// 112 = 0x70
    NSMutableArray *_removedMembers;	// 120 = 0x78
    CSDMessagingConversationReport *_reportData;	// 128 = 0x80
    int _type;	// 136 = 0x88
    NSData *_unicastConnectorBlob;	// 144 = 0x90
    unsigned int _version;	// 152 = 0x98
    _Bool _isLetMeInApproved;	// 156 = 0x9c
    _Bool _shouldSuppressInCallUI;	// 157 = 0x9d
    struct {
        unsigned int disconnectedReason:1;
        unsigned int enclosedEncryptedType:1;
        unsigned int type:1;
        unsigned int version:1;
        unsigned int isLetMeInApproved:1;
        unsigned int shouldSuppressInCallUI:1;
    } _has;	// 160 = 0xa0
}

+ (Class)activeLightweightParticipantsType;	// IMP=0x0020000000180c73
+ (Class)lightweightMembersType;	// IMP=0x0010000000180ba1
+ (Class)removedMembersType;	// IMP=0x0010000000180aba
+ (Class)invitationPreferencesType;	// IMP=0x00100000001809e8
+ (Class)activitySessionsType;	// IMP=0x0010000000180252
+ (Class)addedMembersType;	// IMP=0x0010000000180126
+ (Class)activeParticipantsType;	// IMP=0x001000000018003f
- (void).cxx_destruct;	// IMP=0x00100000001856d2
@property(retain, nonatomic) NSMutableArray *activeLightweightParticipants; // @synthesize activeLightweightParticipants=_activeLightweightParticipants;
@property(retain, nonatomic) NSMutableArray *lightweightMembers; // @synthesize lightweightMembers=_lightweightMembers;
@property(retain, nonatomic) NSData *unicastConnectorBlob; // @synthesize unicastConnectorBlob=_unicastConnectorBlob;
@property(retain, nonatomic) NSMutableArray *removedMembers; // @synthesize removedMembers=_removedMembers;
@property(retain, nonatomic) NSMutableArray *invitationPreferences; // @synthesize invitationPreferences=_invitationPreferences;
@property(retain, nonatomic) NSString *letMeInDelegationUUID; // @synthesize letMeInDelegationUUID=_letMeInDelegationUUID;
@property(retain, nonatomic) NSString *letMeInDelegationHandle; // @synthesize letMeInDelegationHandle=_letMeInDelegationHandle;
@property(retain, nonatomic) CSDMessagingEncryptedConversationMessage *encryptedMessage; // @synthesize encryptedMessage=_encryptedMessage;
@property(nonatomic) _Bool isLetMeInApproved; // @synthesize isLetMeInApproved=_isLetMeInApproved;
@property(retain, nonatomic) CSDMessagingConversationReport *reportData; // @synthesize reportData=_reportData;
@property(retain, nonatomic) CSDMessagingConversationLink *link; // @synthesize link=_link;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSMutableArray *activitySessions; // @synthesize activitySessions=_activitySessions;
@property(retain, nonatomic) NSString *protoUpgradeSessionUUID; // @synthesize protoUpgradeSessionUUID=_protoUpgradeSessionUUID;
@property(nonatomic) unsigned int disconnectedReason; // @synthesize disconnectedReason=_disconnectedReason;
@property(retain, nonatomic) NSMutableArray *addedMembers; // @synthesize addedMembers=_addedMembers;
@property(retain, nonatomic) NSString *conversationGroupUUIDString; // @synthesize conversationGroupUUIDString=_conversationGroupUUIDString;
@property(retain, nonatomic) NSMutableArray *activeParticipants; // @synthesize activeParticipants=_activeParticipants;
@property(nonatomic) _Bool shouldSuppressInCallUI; // @synthesize shouldSuppressInCallUI=_shouldSuppressInCallUI;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000184b24
- (unsigned long long)hash;	// IMP=0x0010000000184865
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000018438a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000018384f
- (void)copyTo:(id)arg1;	// IMP=0x0010000000183240
- (void)writeTo:(id)arg1;	// IMP=0x0010000000182a21
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000182a14
- (id)dictionaryRepresentation;	// IMP=0x0010000000180d33
- (id)description;	// IMP=0x0010000000180c84
- (id)activeLightweightParticipantsAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000180c56
- (unsigned long long)activeLightweightParticipantsCount;	// IMP=0x0010000000180c39
- (void)addActiveLightweightParticipants:(id)arg1;	// IMP=0x0010000000180bcf
- (void)clearActiveLightweightParticipants;	// IMP=0x0010000000180bb2
- (id)lightweightMembersAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000180b84
- (unsigned long long)lightweightMembersCount;	// IMP=0x0010000000180b67
- (void)addLightweightMembers:(id)arg1;	// IMP=0x0010000000180afd
- (void)clearLightweightMembers;	// IMP=0x0010000000180ae0
@property(readonly, nonatomic) _Bool hasUnicastConnectorBlob;
- (id)removedMembersAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000180a9d
- (unsigned long long)removedMembersCount;	// IMP=0x0010000000180a80
- (void)addRemovedMembers:(id)arg1;	// IMP=0x0010000000180a16
- (void)clearRemovedMembers;	// IMP=0x00100000001809f9
- (id)invitationPreferencesAtIndex:(unsigned long long)arg1;	// IMP=0x00100000001809cb
- (unsigned long long)invitationPreferencesCount;	// IMP=0x00100000001809ae
- (void)addInvitationPreferences:(id)arg1;	// IMP=0x0010000000180944
- (void)clearInvitationPreferences;	// IMP=0x0010000000180927
- (int)StringAsEnclosedEncryptedType:(id)arg1;	// IMP=0x001000000018057c
- (id)enclosedEncryptedTypeAsString:(int)arg1;	// IMP=0x0010000000180394
@property(nonatomic) _Bool hasEnclosedEncryptedType;
@property(nonatomic) int enclosedEncryptedType; // @synthesize enclosedEncryptedType=_enclosedEncryptedType;
@property(readonly, nonatomic) _Bool hasLetMeInDelegationUUID;
@property(readonly, nonatomic) _Bool hasLetMeInDelegationHandle;
@property(readonly, nonatomic) _Bool hasEncryptedMessage;
@property(nonatomic) _Bool hasIsLetMeInApproved;
@property(readonly, nonatomic) _Bool hasReportData;
@property(readonly, nonatomic) _Bool hasLink;
@property(readonly, nonatomic) _Bool hasNickname;
- (id)activitySessionsAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000180235
- (unsigned long long)activitySessionsCount;	// IMP=0x0010000000180218
- (void)addActivitySessions:(id)arg1;	// IMP=0x00100000001801ae
- (void)clearActivitySessions;	// IMP=0x0010000000180191
@property(readonly, nonatomic) _Bool hasProtoUpgradeSessionUUID;
@property(nonatomic) _Bool hasDisconnectedReason;
- (id)addedMembersAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000180109
- (unsigned long long)addedMembersCount;	// IMP=0x00100000001800ec
- (void)addAddedMembers:(id)arg1;	// IMP=0x0010000000180082
- (void)clearAddedMembers;	// IMP=0x0010000000180065
@property(readonly, nonatomic) _Bool hasConversationGroupUUIDString;
- (id)activeParticipantsAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000180022
- (unsigned long long)activeParticipantsCount;	// IMP=0x0010000000180005
- (void)addActiveParticipants:(id)arg1;	// IMP=0x001000000017ff9b
- (void)clearActiveParticipants;	// IMP=0x001000000017ff7e
@property(nonatomic) _Bool hasShouldSuppressInCallUI;
- (int)StringAsType:(id)arg1;	// IMP=0x001000000017fb88
- (id)typeAsString:(int)arg1;	// IMP=0x001000000017f99d
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) _Bool hasVersion;
@property(copy, nonatomic, setter=setTUInvitationPreferences:) NSSet *tuInvitationPreferences;
@property(retain, nonatomic) NSUUID *conversationGroupUUID;
@property(readonly, copy, nonatomic) TUConversationLink *tuConversationLink;
@property(readonly, nonatomic) _Bool constitutesLetMeInApproval;
- (id)initWithEncryptedMessage:(id)arg1 enclosedType:(int)arg2 link:(id)arg3;	// IMP=0x0010000000004d64
- (id)initWithType:(int)arg1 groupUUID:(id)arg2 link:(id)arg3;	// IMP=0x0010000000004c91

@end
