//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, RRSchemaRREntityPoolResolveEnded, RRSchemaRREntityPoolResolveFailed, RRSchemaRREntityPoolResolveStarted;

@interface RRSchemaRREntityPoolResolveContext
{
    RRSchemaRREntityPoolResolveStarted *_startedOrChanged;	// 8 = 0x8
    RRSchemaRREntityPoolResolveEnded *_ended;	// 16 = 0x10
    RRSchemaRREntityPoolResolveFailed *_failed;	// 24 = 0x18
    _Bool _hasStartedOrChanged;	// 32 = 0x20
    _Bool _hasEnded;	// 33 = 0x21
    _Bool _hasFailed;	// 34 = 0x22
    unsigned long long _whichContextevent;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000002d0a61
@property(nonatomic) _Bool hasFailed; // @synthesize hasFailed=_hasFailed;
@property(nonatomic) _Bool hasEnded; // @synthesize hasEnded=_hasEnded;
@property(nonatomic) _Bool hasStartedOrChanged; // @synthesize hasStartedOrChanged=_hasStartedOrChanged;
@property(readonly, nonatomic) unsigned long long whichContextevent; // @synthesize whichContextevent=_whichContextevent;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002d07e5
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002d0727
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002d0442
- (unsigned long long)hash;	// IMP=0x00000000002d03d5
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002cfffc
- (void)writeTo:(id)arg1;	// IMP=0x00000000002cfebd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002cf8ae
- (void)deleteFailed;	// IMP=0x00000000002cf87b
@property(retain, nonatomic) RRSchemaRREntityPoolResolveFailed *failed; // @synthesize failed=_failed;
- (void)deleteEnded;	// IMP=0x00000000002cf79d
@property(retain, nonatomic) RRSchemaRREntityPoolResolveEnded *ended; // @synthesize ended=_ended;
- (void)deleteStartedOrChanged;	// IMP=0x00000000002cf6b5
@property(retain, nonatomic) RRSchemaRREntityPoolResolveStarted *startedOrChanged; // @synthesize startedOrChanged=_startedOrChanged;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000035a8f1
- (id)suppressMessageUnderConditions;	// IMP=0x000000000035a8b9

@end

