//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDDecoding-Protocol.h>
#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableMedicalRecord, NSData, NSString;

@interface HDCodableAccountOwner : PBCodable <HDDecoding, NSCopying>
{
    NSData *_birthDate;	// 8 = 0x8
    HDCodableMedicalRecord *_medicalRecord;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000006ef7f3
@property(retain, nonatomic) NSData *birthDate; // @synthesize birthDate=_birthDate;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) HDCodableMedicalRecord *medicalRecord; // @synthesize medicalRecord=_medicalRecord;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000006ef6ea
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006ef585
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006ef4c1
- (void)copyTo:(id)arg1;	// IMP=0x00000000006ef43e
- (void)writeTo:(id)arg1;	// IMP=0x00000000006ef3c4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000006ef3b7
- (id)dictionaryRepresentation;	// IMP=0x00000000006ef0cc
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasBirthDate;
@property(readonly, nonatomic) _Bool hasName;
@property(readonly, nonatomic) _Bool hasMedicalRecord;
- (_Bool)applyToObject:(id)arg1 error:(out id *)arg2;	// IMP=0x00000000001a3326
- (_Bool)applyToObject:(id)arg1;	// IMP=0x00000000001a325a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

