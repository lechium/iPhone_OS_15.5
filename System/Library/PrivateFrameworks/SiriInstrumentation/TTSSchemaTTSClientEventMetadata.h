//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, SISchemaUUID;

@interface TTSSchemaTTSClientEventMetadata
{
    SISchemaUUID *_ttsId;	// 8 = 0x8
    _Bool _hasTtsId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002efb01
@property(nonatomic) _Bool hasTtsId; // @synthesize hasTtsId=_hasTtsId;
@property(retain, nonatomic) SISchemaUUID *ttsId; // @synthesize ttsId=_ttsId;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002ef9cf
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002ef911
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002ef78c
- (unsigned long long)hash;	// IMP=0x00000000002ef76f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002ef5ed
- (void)writeTo:(id)arg1;	// IMP=0x00000000002ef566
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002ef559
- (void)deleteTtsId;	// IMP=0x00000000002ef545
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000035cbd9
- (id)suppressMessageUnderConditions;	// IMP=0x000000000035cba1

@end

