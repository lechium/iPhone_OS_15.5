//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPParticipant, CKDPRecordType, NSData, NSString;

@interface CKDPShareMetadata : PBCodable <NSCopying>
{
    CKDPParticipant *_callerParticipant;	// 8 = 0x8
    CKDPParticipant *_ownerParticipant;	// 16 = 0x10
    int _participantPermission;	// 24 = 0x18
    int _participantState;	// 28 = 0x1c
    int _participantType;	// 32 = 0x20
    NSData *_protectedFullToken;	// 40 = 0x28
    CKDPRecordType *_rootRecordType;	// 48 = 0x30
    NSString *_routingKey;	// 56 = 0x38
    struct {
        unsigned int participantPermission:1;
        unsigned int participantState:1;
        unsigned int participantType:1;
    } _has;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000001c39d8
@property(retain, nonatomic) CKDPRecordType *rootRecordType; // @synthesize rootRecordType=_rootRecordType;
@property(retain, nonatomic) CKDPParticipant *callerParticipant; // @synthesize callerParticipant=_callerParticipant;
@property(retain, nonatomic) CKDPParticipant *ownerParticipant; // @synthesize ownerParticipant=_ownerParticipant;
@property(retain, nonatomic) NSData *protectedFullToken; // @synthesize protectedFullToken=_protectedFullToken;
@property(retain, nonatomic) NSString *routingKey; // @synthesize routingKey=_routingKey;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001c37bf
- (unsigned long long)hash;	// IMP=0x00000000001c36bb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001c34e0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001c3375
- (void)copyTo:(id)arg1;	// IMP=0x00000000001c325a
- (void)writeTo:(id)arg1;	// IMP=0x00000000001c3139
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001c312c
- (id)dictionaryRepresentation;	// IMP=0x00000000001c2974
- (id)description;	// IMP=0x00000000001c28c5
@property(readonly, nonatomic) _Bool hasRootRecordType;
- (int)StringAsParticipantType:(id)arg1;	// IMP=0x00000000001c27fc
- (id)participantTypeAsString:(int)arg1;	// IMP=0x00000000001c277d
@property(nonatomic) _Bool hasParticipantType;
@property(nonatomic) int participantType; // @synthesize participantType=_participantType;
- (int)StringAsParticipantState:(id)arg1;	// IMP=0x00000000001c265c
- (id)participantStateAsString:(int)arg1;	// IMP=0x00000000001c25de
@property(nonatomic) _Bool hasParticipantState;
@property(nonatomic) int participantState; // @synthesize participantState=_participantState;
- (int)StringAsParticipantPermission:(id)arg1;	// IMP=0x00000000001c24d6
- (id)participantPermissionAsString:(int)arg1;	// IMP=0x00000000001c246f
@property(nonatomic) _Bool hasParticipantPermission;
@property(nonatomic) int participantPermission; // @synthesize participantPermission=_participantPermission;
@property(readonly, nonatomic) _Bool hasCallerParticipant;
@property(readonly, nonatomic) _Bool hasOwnerParticipant;
@property(readonly, nonatomic) _Bool hasProtectedFullToken;
@property(readonly, nonatomic) _Bool hasRoutingKey;
- (id)_participantTypeCKLogValue;	// IMP=0x000000000017f490
- (id)_participantStateCKLogValue;	// IMP=0x000000000017f402
- (id)_participantPermissionCKLogValue;	// IMP=0x000000000017f397

@end

