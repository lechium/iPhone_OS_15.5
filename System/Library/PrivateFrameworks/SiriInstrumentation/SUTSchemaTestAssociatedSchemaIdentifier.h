//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, SUTSchemaTestGeneratedRequestId, SUTSchemaTestGeneratedTurnID;

@interface SUTSchemaTestAssociatedSchemaIdentifier
{
    SUTSchemaTestGeneratedTurnID *_turnID;	// 8 = 0x8
    SUTSchemaTestGeneratedRequestId *_requestId;	// 16 = 0x10
    _Bool _hasTurnID;	// 24 = 0x18
    _Bool _hasRequestId;	// 25 = 0x19
    unsigned long long _whichIdentifier_Type;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002facf9
@property(nonatomic) _Bool hasRequestId; // @synthesize hasRequestId=_hasRequestId;
@property(nonatomic) _Bool hasTurnID; // @synthesize hasTurnID=_hasTurnID;
@property(readonly, nonatomic) unsigned long long whichIdentifier_Type; // @synthesize whichIdentifier_Type=_whichIdentifier_Type;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002fab1e
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002faa60
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002fa82b
- (unsigned long long)hash;	// IMP=0x00000000002fa7de
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002fa51c
- (void)writeTo:(id)arg1;	// IMP=0x00000000002fa439
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002f9e5b
- (void)deleteRequestId;	// IMP=0x00000000002f9e28
@property(retain, nonatomic) SUTSchemaTestGeneratedRequestId *requestId; // @synthesize requestId=_requestId;
- (void)deleteTurnID;	// IMP=0x00000000002f9d5a
@property(retain, nonatomic) SUTSchemaTestGeneratedTurnID *turnID; // @synthesize turnID=_turnID;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000035d6e6
- (id)suppressMessageUnderConditions;	// IMP=0x000000000035d6ae

@end

