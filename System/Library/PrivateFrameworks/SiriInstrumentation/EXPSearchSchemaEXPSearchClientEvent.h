//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EXPSearchSchemaEXPSearchSessionExperiments, NSData;

@interface EXPSearchSchemaEXPSearchClientEvent
{
    EXPSearchSchemaEXPSearchSessionExperiments *_sessionExperiments;	// 8 = 0x8
    _Bool _hasSessionExperiments;	// 16 = 0x10
    unsigned long long _whichEvent_Type;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000012ee7c
@property(nonatomic) _Bool hasSessionExperiments; // @synthesize hasSessionExperiments=_hasSessionExperiments;
@property(readonly, nonatomic) unsigned long long whichEvent_Type; // @synthesize whichEvent_Type=_whichEvent_Type;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000012ed4e
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000012ec90
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000012eb0b
- (unsigned long long)hash;	// IMP=0x000000000012eaee
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000012e948
- (void)writeTo:(id)arg1;	// IMP=0x000000000012e8c1
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000012e4ac
- (void)deleteSessionExperiments;	// IMP=0x000000000012e479
@property(retain, nonatomic) EXPSearchSchemaEXPSearchSessionExperiments *sessionExperiments; // @synthesize sessionExperiments=_sessionExperiments;
- (id)qualifiedMessageName;	// IMP=0x000000000012e3f5
- (int)getAnyEventType;	// IMP=0x000000000012e3ea
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000034178e
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000341756

@end
