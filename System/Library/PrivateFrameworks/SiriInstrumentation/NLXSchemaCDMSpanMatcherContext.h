//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NLXSchemaCDMSpanMatcherEnded, NLXSchemaCDMSpanMatcherStarted, NSData, SISchemaUUID;

@interface NLXSchemaCDMSpanMatcherContext
{
    SISchemaUUID *_contextId;	// 8 = 0x8
    NLXSchemaCDMSpanMatcherStarted *_startedOrChanged;	// 16 = 0x10
    NLXSchemaCDMSpanMatcherEnded *_ended;	// 24 = 0x18
    _Bool _hasContextId;	// 32 = 0x20
    _Bool _hasStartedOrChanged;	// 33 = 0x21
    _Bool _hasEnded;	// 34 = 0x22
    unsigned long long _whichContextevent;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000008815b
@property(nonatomic) _Bool hasEnded; // @synthesize hasEnded=_hasEnded;
@property(nonatomic) _Bool hasStartedOrChanged; // @synthesize hasStartedOrChanged=_hasStartedOrChanged;
@property(nonatomic) _Bool hasContextId; // @synthesize hasContextId=_hasContextId;
@property(retain, nonatomic) SISchemaUUID *contextId; // @synthesize contextId=_contextId;
@property(readonly, nonatomic) unsigned long long whichContextevent; // @synthesize whichContextevent=_whichContextevent;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000087eca
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000087e0c
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000087b27
- (unsigned long long)hash;	// IMP=0x0000000000087aba
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000876e1
- (void)writeTo:(id)arg1;	// IMP=0x00000000000875a2
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000086f59
- (void)deleteEnded;	// IMP=0x0000000000086f26
@property(retain, nonatomic) NLXSchemaCDMSpanMatcherEnded *ended; // @synthesize ended=_ended;
- (void)deleteStartedOrChanged;	// IMP=0x0000000000086e58
@property(retain, nonatomic) NLXSchemaCDMSpanMatcherStarted *startedOrChanged; // @synthesize startedOrChanged=_startedOrChanged;
- (void)deleteContextId;	// IMP=0x0000000000086dab
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000335e46
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000335e0e

@end
