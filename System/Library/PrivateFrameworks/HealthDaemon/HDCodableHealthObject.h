//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDDecoding-Protocol.h>
#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableMetadataDictionary, NSData, NSString;

@interface HDCodableHealthObject : PBCodable <HDDecoding, NSCopying>
{
    double _creationDate;	// 8 = 0x8
    long long _externalSyncObjectCode;	// 16 = 0x10
    HDCodableMetadataDictionary *_metadataDictionary;	// 24 = 0x18
    NSString *_sourceBundleIdentifier;	// 32 = 0x20
    NSData *_uuid;	// 40 = 0x28
    struct {
        unsigned int creationDate:1;
        unsigned int externalSyncObjectCode:1;
    } _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000621012
@property(nonatomic) long long externalSyncObjectCode; // @synthesize externalSyncObjectCode=_externalSyncObjectCode;
@property(nonatomic) double creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSString *sourceBundleIdentifier; // @synthesize sourceBundleIdentifier=_sourceBundleIdentifier;
@property(retain, nonatomic) HDCodableMetadataDictionary *metadataDictionary; // @synthesize metadataDictionary=_metadataDictionary;
@property(retain, nonatomic) NSData *uuid; // @synthesize uuid=_uuid;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000620ea4
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000620baf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000620aa9
- (void)copyTo:(id)arg1;	// IMP=0x00000000006209e4
- (void)writeTo:(id)arg1;	// IMP=0x0000000000620919
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000062090c
- (id)dictionaryRepresentation;	// IMP=0x0000000000620447
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasExternalSyncObjectCode;
@property(nonatomic) _Bool hasCreationDate;
@property(readonly, nonatomic) _Bool hasSourceBundleIdentifier;
@property(readonly, nonatomic) _Bool hasMetadataDictionary;
@property(readonly, nonatomic) _Bool hasUuid;
- (_Bool)applyToObject:(id)arg1;	// IMP=0x000000000038b3a9
- (id)decodedMetadata;	// IMP=0x000000000038b368

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
