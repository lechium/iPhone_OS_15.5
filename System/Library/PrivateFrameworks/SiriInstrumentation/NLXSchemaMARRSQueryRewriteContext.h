//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NLXSchemaMARRSQueryRewriteEvaluated, NLXSchemaMARRSQueryRewriteFailed, NLXSchemaMARRSQueryRewriteStarted, NSData;

@interface NLXSchemaMARRSQueryRewriteContext
{
    NLXSchemaMARRSQueryRewriteStarted *_started;	// 8 = 0x8
    NLXSchemaMARRSQueryRewriteEvaluated *_evaluated;	// 16 = 0x10
    NLXSchemaMARRSQueryRewriteFailed *_failed;	// 24 = 0x18
    NLXSchemaMARRSQueryRewriteStarted *_startedOrChanged;	// 32 = 0x20
    NLXSchemaMARRSQueryRewriteEvaluated *_ended;	// 40 = 0x28
    _Bool _hasStarted;	// 48 = 0x30
    _Bool _hasEvaluated;	// 49 = 0x31
    _Bool _hasFailed;	// 50 = 0x32
    _Bool _hasStartedOrChanged;	// 51 = 0x33
    _Bool _hasEnded;	// 52 = 0x34
    unsigned long long _whichContextevent;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001bb5d4
@property(nonatomic) _Bool hasEnded; // @synthesize hasEnded=_hasEnded;
@property(nonatomic) _Bool hasStartedOrChanged; // @synthesize hasStartedOrChanged=_hasStartedOrChanged;
@property(nonatomic) _Bool hasFailed; // @synthesize hasFailed=_hasFailed;
@property(nonatomic) _Bool hasEvaluated; // @synthesize hasEvaluated=_hasEvaluated;
@property(nonatomic) _Bool hasStarted; // @synthesize hasStarted=_hasStarted;
@property(readonly, nonatomic) unsigned long long whichContextevent; // @synthesize whichContextevent=_whichContextevent;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001bb201
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001bb143
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001bacfe
- (unsigned long long)hash;	// IMP=0x00000000001bac5b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001ba652
- (void)writeTo:(id)arg1;	// IMP=0x00000000001ba45b
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001b9afc
- (void)deleteEnded;	// IMP=0x00000000001b9ac9
@property(retain, nonatomic) NLXSchemaMARRSQueryRewriteEvaluated *ended; // @synthesize ended=_ended;
- (void)deleteStartedOrChanged;	// IMP=0x00000000001b99c7
@property(retain, nonatomic) NLXSchemaMARRSQueryRewriteStarted *startedOrChanged; // @synthesize startedOrChanged=_startedOrChanged;
- (void)deleteFailed;	// IMP=0x00000000001b98ba
@property(retain, nonatomic) NLXSchemaMARRSQueryRewriteFailed *failed; // @synthesize failed=_failed;
- (void)deleteEvaluated;	// IMP=0x00000000001b97b8
@property(retain, nonatomic) NLXSchemaMARRSQueryRewriteEvaluated *evaluated; // @synthesize evaluated=_evaluated;
- (void)deleteStarted;	// IMP=0x00000000001b96ac
@property(retain, nonatomic) NLXSchemaMARRSQueryRewriteStarted *started; // @synthesize started=_started;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000349a10
- (id)suppressMessageUnderConditions;	// IMP=0x00000000003499d8

@end
