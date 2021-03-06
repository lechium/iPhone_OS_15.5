//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDDecoding-Protocol.h>
#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableMedicalRecord, HDCodableSignedClinicalDataItemList, HDCodableSignedClinicalDataSubject, HDCodableStringList, NSData, NSString;

@interface HDCodableSignedClinicalDataRecord : PBCodable <HDDecoding, NSCopying>
{
    double _expirationDate;	// 8 = 0x8
    double _issuedDate;	// 16 = 0x10
    double _relevantDate;	// 24 = 0x18
    long long _signatureStatus;	// 32 = 0x20
    long long _sourceType;	// 40 = 0x28
    HDCodableStringList *_credentialTypes;	// 48 = 0x30
    NSData *_dataValue;	// 56 = 0x38
    NSString *_issuerIdentifier;	// 64 = 0x40
    HDCodableSignedClinicalDataItemList *_items;	// 72 = 0x48
    HDCodableMedicalRecord *_medicalRecord;	// 80 = 0x50
    HDCodableSignedClinicalDataSubject *_subject;	// 88 = 0x58
    struct {
        unsigned int expirationDate:1;
        unsigned int issuedDate:1;
        unsigned int relevantDate:1;
        unsigned int signatureStatus:1;
        unsigned int sourceType:1;
    } _has;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000031fe33
@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) NSData *dataValue; // @synthesize dataValue=_dataValue;
@property(retain, nonatomic) HDCodableSignedClinicalDataItemList *items; // @synthesize items=_items;
@property(retain, nonatomic) HDCodableSignedClinicalDataSubject *subject; // @synthesize subject=_subject;
@property(nonatomic) long long signatureStatus; // @synthesize signatureStatus=_signatureStatus;
@property(nonatomic) double expirationDate; // @synthesize expirationDate=_expirationDate;
@property(nonatomic) double relevantDate; // @synthesize relevantDate=_relevantDate;
@property(nonatomic) double issuedDate; // @synthesize issuedDate=_issuedDate;
@property(retain, nonatomic) NSString *issuerIdentifier; // @synthesize issuerIdentifier=_issuerIdentifier;
@property(retain, nonatomic) HDCodableStringList *credentialTypes; // @synthesize credentialTypes=_credentialTypes;
@property(retain, nonatomic) HDCodableMedicalRecord *medicalRecord; // @synthesize medicalRecord=_medicalRecord;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000031fb1a
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000031f428
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000031f24b
- (void)copyTo:(id)arg1;	// IMP=0x000000000031f0c4
- (void)writeTo:(id)arg1;	// IMP=0x000000000031ef41
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000031ef34
- (id)dictionaryRepresentation;	// IMP=0x000000000031e658
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasSourceType;
@property(readonly, nonatomic) _Bool hasDataValue;
@property(readonly, nonatomic) _Bool hasItems;
@property(readonly, nonatomic) _Bool hasSubject;
@property(nonatomic) _Bool hasSignatureStatus;
@property(nonatomic) _Bool hasExpirationDate;
@property(nonatomic) _Bool hasRelevantDate;
@property(nonatomic) _Bool hasIssuedDate;
@property(readonly, nonatomic) _Bool hasIssuerIdentifier;
@property(readonly, nonatomic) _Bool hasCredentialTypes;
@property(readonly, nonatomic) _Bool hasMedicalRecord;
- (_Bool)applyToObject:(id)arg1 error:(out id *)arg2;	// IMP=0x00000000004ed41b
- (_Bool)applyToObject:(id)arg1;	// IMP=0x00000000004ed34f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

