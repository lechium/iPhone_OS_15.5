//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HALSchemaHALForceFetchEnded, HALSchemaHALForceFetchFailed, HALSchemaHALForceFetchStarted, NSData, SISchemaUUID;

@interface HALSchemaHALForceFetchContext
{
    SISchemaUUID *_contextId;	// 8 = 0x8
    HALSchemaHALForceFetchStarted *_startedOrChanged;	// 16 = 0x10
    HALSchemaHALForceFetchEnded *_ended;	// 24 = 0x18
    HALSchemaHALForceFetchFailed *_failed;	// 32 = 0x20
    _Bool _hasContextId;	// 40 = 0x28
    _Bool _hasStartedOrChanged;	// 41 = 0x29
    _Bool _hasEnded;	// 42 = 0x2a
    _Bool _hasFailed;	// 43 = 0x2b
    unsigned long long _whichContextevent;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000019848a
@property(nonatomic) _Bool hasFailed; // @synthesize hasFailed=_hasFailed;
@property(nonatomic) _Bool hasEnded; // @synthesize hasEnded=_hasEnded;
@property(nonatomic) _Bool hasStartedOrChanged; // @synthesize hasStartedOrChanged=_hasStartedOrChanged;
@property(nonatomic) _Bool hasContextId; // @synthesize hasContextId=_hasContextId;
@property(retain, nonatomic) SISchemaUUID *contextId; // @synthesize contextId=_contextId;
@property(readonly, nonatomic) unsigned long long whichContextevent; // @synthesize whichContextevent=_whichContextevent;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000198152
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000198094
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000197cff
- (unsigned long long)hash;	// IMP=0x0000000000197c7b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000197757
- (void)writeTo:(id)arg1;	// IMP=0x00000000001975bc
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000197048
- (void)deleteFailed;	// IMP=0x0000000000197015
@property(retain, nonatomic) HALSchemaHALForceFetchFailed *failed; // @synthesize failed=_failed;
- (void)deleteEnded;	// IMP=0x0000000000196f2c
@property(retain, nonatomic) HALSchemaHALForceFetchEnded *ended; // @synthesize ended=_ended;
- (void)deleteStartedOrChanged;	// IMP=0x0000000000196e4e
@property(retain, nonatomic) HALSchemaHALForceFetchStarted *startedOrChanged; // @synthesize startedOrChanged=_startedOrChanged;
- (void)deleteContextId;	// IMP=0x0000000000196d85
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x00000000003475b3
- (id)suppressMessageUnderConditions;	// IMP=0x000000000034757b

@end

