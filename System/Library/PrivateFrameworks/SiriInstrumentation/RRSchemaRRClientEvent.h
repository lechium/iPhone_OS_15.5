//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, RRSchemaRRClientEventMetadata, RRSchemaRREntityPoolResolveContext, RRSchemaRREntityPoolReturned, RRSchemaRRUsoGraphTier1;

@interface RRSchemaRRClientEvent
{
    RRSchemaRRClientEventMetadata *_eventMetadata;	// 8 = 0x8
    RRSchemaRREntityPoolReturned *_entityPoolReturned;	// 16 = 0x10
    RRSchemaRREntityPoolResolveContext *_entityPoolResolveContext;	// 24 = 0x18
    RRSchemaRRUsoGraphTier1 *_rrUsoGraphTier1;	// 32 = 0x20
    _Bool _hasEventMetadata;	// 40 = 0x28
    _Bool _hasEntityPoolReturned;	// 41 = 0x29
    _Bool _hasEntityPoolResolveContext;	// 42 = 0x2a
    _Bool _hasRrUsoGraphTier1;	// 43 = 0x2b
    unsigned long long _whichEvent_Type;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000002cefd7
@property(nonatomic) _Bool hasRrUsoGraphTier1; // @synthesize hasRrUsoGraphTier1=_hasRrUsoGraphTier1;
@property(nonatomic) _Bool hasEntityPoolResolveContext; // @synthesize hasEntityPoolResolveContext=_hasEntityPoolResolveContext;
@property(nonatomic) _Bool hasEntityPoolReturned; // @synthesize hasEntityPoolReturned=_hasEntityPoolReturned;
@property(nonatomic) _Bool hasEventMetadata; // @synthesize hasEventMetadata=_hasEventMetadata;
@property(retain, nonatomic) RRSchemaRRClientEventMetadata *eventMetadata; // @synthesize eventMetadata=_eventMetadata;
@property(readonly, nonatomic) unsigned long long whichEvent_Type; // @synthesize whichEvent_Type=_whichEvent_Type;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002cec9f
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002cebe1
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002ce84c
- (unsigned long long)hash;	// IMP=0x00000000002ce7c8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002ce2a4
- (void)writeTo:(id)arg1;	// IMP=0x00000000002ce109
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002cd546
- (void)deleteRrUsoGraphTier1;	// IMP=0x00000000002cd513
@property(retain, nonatomic) RRSchemaRRUsoGraphTier1 *rrUsoGraphTier1; // @synthesize rrUsoGraphTier1=_rrUsoGraphTier1;
- (void)deleteEntityPoolResolveContext;	// IMP=0x00000000002cd42a
@property(retain, nonatomic) RRSchemaRREntityPoolResolveContext *entityPoolResolveContext; // @synthesize entityPoolResolveContext=_entityPoolResolveContext;
- (void)deleteEntityPoolReturned;	// IMP=0x00000000002cd34c
@property(retain, nonatomic) RRSchemaRREntityPoolReturned *entityPoolReturned; // @synthesize entityPoolReturned=_entityPoolReturned;
- (void)deleteEventMetadata;	// IMP=0x00000000002cd283
- (id)qualifiedMessageName;	// IMP=0x00000000002cd227
- (int)getAnyEventType;	// IMP=0x00000000002cd21c
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000035a549
- (id)suppressMessageUnderConditions;	// IMP=0x000000000035a511

@end

