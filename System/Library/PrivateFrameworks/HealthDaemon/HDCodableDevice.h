//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSData, NSString;

@interface HDCodableDevice : PBCodable <NSCopying>
{
    double _creationDate;	// 8 = 0x8
    NSString *_fDAUDI;	// 16 = 0x10
    NSString *_firmwareVersion;	// 24 = 0x18
    NSString *_hardwareVersion;	// 32 = 0x20
    NSString *_localIdentifier;	// 40 = 0x28
    NSString *_manufacturer;	// 48 = 0x30
    NSString *_model;	// 56 = 0x38
    NSString *_name;	// 64 = 0x40
    NSString *_softwareVersion;	// 72 = 0x48
    NSData *_uuid;	// 80 = 0x50
    CDStruct_dc48a425 _has;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000370644
@property(nonatomic) double creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSData *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *fDAUDI; // @synthesize fDAUDI=_fDAUDI;
@property(retain, nonatomic) NSString *localIdentifier; // @synthesize localIdentifier=_localIdentifier;
@property(retain, nonatomic) NSString *softwareVersion; // @synthesize softwareVersion=_softwareVersion;
@property(retain, nonatomic) NSString *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property(retain, nonatomic) NSString *hardwareVersion; // @synthesize hardwareVersion=_hardwareVersion;
@property(retain, nonatomic) NSString *model; // @synthesize model=_model;
@property(retain, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000037037e
- (unsigned long long)hash;	// IMP=0x0000000000370168
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000036ff01
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000036fd26
- (void)copyTo:(id)arg1;	// IMP=0x000000000036fbbf
- (void)writeTo:(id)arg1;	// IMP=0x000000000036fa71
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000036fa64
- (id)dictionaryRepresentation;	// IMP=0x000000000036f587
- (id)description;	// IMP=0x000000000036f4d8
@property(nonatomic) _Bool hasCreationDate;
@property(readonly, nonatomic) _Bool hasUuid;
@property(readonly, nonatomic) _Bool hasFDAUDI;
@property(readonly, nonatomic) _Bool hasLocalIdentifier;
@property(readonly, nonatomic) _Bool hasSoftwareVersion;
@property(readonly, nonatomic) _Bool hasFirmwareVersion;
@property(readonly, nonatomic) _Bool hasHardwareVersion;
@property(readonly, nonatomic) _Bool hasModel;
@property(readonly, nonatomic) _Bool hasManufacturer;
@property(readonly, nonatomic) _Bool hasName;

@end

