//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <OctagonTrust/NSCopying-Protocol.h>

@class NSString, OTEscrowRecordMetadata;

@interface OTEscrowRecord : PBCodable <NSCopying>
{
    unsigned long long _coolOffEnd;	// 8 = 0x8
    unsigned long long _creationDate;	// 16 = 0x10
    unsigned long long _remainingAttempts;	// 24 = 0x18
    unsigned long long _silentAttemptAllowed;	// 32 = 0x20
    OTEscrowRecordMetadata *_escrowInformationMetadata;	// 40 = 0x28
    NSString *_expectedFederationId;	// 48 = 0x30
    NSString *_federationId;	// 56 = 0x38
    NSString *_label;	// 64 = 0x40
    NSString *_recordId;	// 72 = 0x48
    int _recordStatus;	// 80 = 0x50
    int _recordViability;	// 84 = 0x54
    int _recoveryStatus;	// 88 = 0x58
    NSString *_serialNumber;	// 96 = 0x60
    int _viabilityStatus;	// 104 = 0x68
    struct {
        unsigned int coolOffEnd:1;
        unsigned int creationDate:1;
        unsigned int remainingAttempts:1;
        unsigned int silentAttemptAllowed:1;
        unsigned int recordStatus:1;
        unsigned int recordViability:1;
        unsigned int recoveryStatus:1;
        unsigned int viabilityStatus:1;
    } _has;	// 108 = 0x6c
}

- (void).cxx_destruct;	// IMP=0x000000000001695d
@property(retain, nonatomic) NSString *expectedFederationId; // @synthesize expectedFederationId=_expectedFederationId;
@property(retain, nonatomic) NSString *federationId; // @synthesize federationId=_federationId;
@property(retain, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(nonatomic) unsigned long long coolOffEnd; // @synthesize coolOffEnd=_coolOffEnd;
@property(retain, nonatomic) NSString *recordId; // @synthesize recordId=_recordId;
@property(nonatomic) unsigned long long silentAttemptAllowed; // @synthesize silentAttemptAllowed=_silentAttemptAllowed;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) OTEscrowRecordMetadata *escrowInformationMetadata; // @synthesize escrowInformationMetadata=_escrowInformationMetadata;
@property(nonatomic) unsigned long long remainingAttempts; // @synthesize remainingAttempts=_remainingAttempts;
@property(nonatomic) unsigned long long creationDate; // @synthesize creationDate=_creationDate;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000016655
- (unsigned long long)hash;	// IMP=0x0000000000016443
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001613f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000015ef9
- (void)copyTo:(id)arg1;	// IMP=0x0000000000015d2a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000015b4d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000015b40
- (id)dictionaryRepresentation;	// IMP=0x0000000000015676
- (id)description;	// IMP=0x00000000000155c7
@property(readonly, nonatomic) _Bool hasExpectedFederationId;
@property(readonly, nonatomic) _Bool hasFederationId;
- (int)StringAsViabilityStatus:(id)arg1;	// IMP=0x000000000001550b
- (id)viabilityStatusAsString:(int)arg1;	// IMP=0x00000000000154a5
@property(nonatomic) _Bool hasViabilityStatus;
@property(nonatomic) int viabilityStatus; // @synthesize viabilityStatus=_viabilityStatus;
- (int)StringAsRecordViability:(id)arg1;	// IMP=0x00000000000153ab
- (id)recordViabilityAsString:(int)arg1;	// IMP=0x0000000000015345
@property(nonatomic) _Bool hasRecordViability;
@property(nonatomic) int recordViability; // @synthesize recordViability=_recordViability;
@property(readonly, nonatomic) _Bool hasSerialNumber;
@property(nonatomic) _Bool hasCoolOffEnd;
- (int)StringAsRecoveryStatus:(id)arg1;	// IMP=0x00000000000151ee
- (id)recoveryStatusAsString:(int)arg1;	// IMP=0x0000000000015188
@property(nonatomic) _Bool hasRecoveryStatus;
@property(nonatomic) int recoveryStatus; // @synthesize recoveryStatus=_recoveryStatus;
@property(readonly, nonatomic) _Bool hasRecordId;
- (int)StringAsRecordStatus:(id)arg1;	// IMP=0x00000000000150a7
- (id)recordStatusAsString:(int)arg1;	// IMP=0x0000000000015052
@property(nonatomic) _Bool hasRecordStatus;
@property(nonatomic) int recordStatus; // @synthesize recordStatus=_recordStatus;
@property(nonatomic) _Bool hasSilentAttemptAllowed;
@property(readonly, nonatomic) _Bool hasLabel;
@property(readonly, nonatomic) _Bool hasEscrowInformationMetadata;
@property(nonatomic) _Bool hasRemainingAttempts;
@property(nonatomic) _Bool hasCreationDate;

@end

