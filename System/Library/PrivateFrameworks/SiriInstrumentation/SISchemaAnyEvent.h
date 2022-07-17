//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface SISchemaAnyEvent
{
    int _anyEventType;	// 8 = 0x8
    NSData *_payload;	// 16 = 0x10
    struct {
        unsigned int anyEventType:1;
    } _has;	// 24 = 0x18
    _Bool _hasPayload;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000048b50
@property(nonatomic) _Bool hasPayload; // @synthesize hasPayload=_hasPayload;
@property(copy, nonatomic) NSData *payload; // @synthesize payload=_payload;
@property(nonatomic) int anyEventType; // @synthesize anyEventType=_anyEventType;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000489a6
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000488e8
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000004842b
- (unsigned long long)hash;	// IMP=0x00000000000483de
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000048218
- (void)writeTo:(id)arg1;	// IMP=0x0000000000048185
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000047f66
- (void)deletePayload;	// IMP=0x0000000000047f52
- (void)deleteAnyEventType;	// IMP=0x0000000000047f13
@property(nonatomic) _Bool hasAnyEventType;
- (Class)topLevelUnionTypeClass;	// IMP=0x0000000000003e0c
- (void)willProduceDictionaryRepresentation:(id)arg1;	// IMP=0x000000000000438e
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000331a80
- (id)unwrap;	// IMP=0x0000000000360f31
- (id)initWithAnyEventType:(int)arg1 payload:(id)arg2;	// IMP=0x0000000000360eaa
- (void)unwrapMessageWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000361223

@end
