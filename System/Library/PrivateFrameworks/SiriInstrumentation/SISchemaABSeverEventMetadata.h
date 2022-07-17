//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, SISchemaUUID;

@interface SISchemaABSeverEventMetadata
{
    SISchemaUUID *_siriDeviceId;	// 8 = 0x8
    SISchemaUUID *_speechId;	// 16 = 0x10
    long long _timestampNs;	// 24 = 0x18
    CDStruct_8e7b2486 _has;	// 32 = 0x20
    _Bool _hasSiriDeviceId;	// 36 = 0x24
    _Bool _hasSpeechId;	// 37 = 0x25
}

- (void).cxx_destruct;	// IMP=0x000000000000bf1e
@property(nonatomic) _Bool hasSpeechId; // @synthesize hasSpeechId=_hasSpeechId;
@property(nonatomic) _Bool hasSiriDeviceId; // @synthesize hasSiriDeviceId=_hasSiriDeviceId;
@property(nonatomic) long long timestampNs; // @synthesize timestampNs=_timestampNs;
@property(retain, nonatomic) SISchemaUUID *speechId; // @synthesize speechId=_speechId;
@property(retain, nonatomic) SISchemaUUID *siriDeviceId; // @synthesize siriDeviceId=_siriDeviceId;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000000bcbc
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000000bbfe
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000000b965
- (unsigned long long)hash;	// IMP=0x000000000000b8f3
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000b5f5
- (void)writeTo:(id)arg1;	// IMP=0x000000000000b4ec
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000b4df
- (void)deleteTimestampNs;	// IMP=0x000000000000b4b5
@property(nonatomic) _Bool hasTimestampNs;
- (void)deleteSpeechId;	// IMP=0x000000000000b45b
- (void)deleteSiriDeviceId;	// IMP=0x000000000000b432
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000032d721
- (id)suppressMessageUnderConditions;	// IMP=0x000000000032d6e9

@end
