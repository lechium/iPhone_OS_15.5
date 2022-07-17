//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NLXSchemaCDMRequestEnded, NLXSchemaCDMRequestFailed, NLXSchemaCDMRequestStarted, NSData;

@interface NLXSchemaCDMRequestContext
{
    NLXSchemaCDMRequestStarted *_startedOrChanged;	// 8 = 0x8
    NLXSchemaCDMRequestEnded *_ended;	// 16 = 0x10
    NLXSchemaCDMRequestFailed *_failed;	// 24 = 0x18
    _Bool _hasStartedOrChanged;	// 32 = 0x20
    _Bool _hasEnded;	// 33 = 0x21
    _Bool _hasFailed;	// 34 = 0x22
    unsigned long long _whichContextevent;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000007ece9
@property(nonatomic) _Bool hasFailed; // @synthesize hasFailed=_hasFailed;
@property(nonatomic) _Bool hasEnded; // @synthesize hasEnded=_hasEnded;
@property(nonatomic) _Bool hasStartedOrChanged; // @synthesize hasStartedOrChanged=_hasStartedOrChanged;
@property(readonly, nonatomic) unsigned long long whichContextevent; // @synthesize whichContextevent=_whichContextevent;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000007ea6d
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000007e9af
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000007e6ca
- (unsigned long long)hash;	// IMP=0x000000000007e65d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007e284
- (void)writeTo:(id)arg1;	// IMP=0x000000000007e145
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000007d7e6
- (void)deleteFailed;	// IMP=0x000000000007d7b3
@property(retain, nonatomic) NLXSchemaCDMRequestFailed *failed; // @synthesize failed=_failed;
- (void)deleteEnded;	// IMP=0x000000000007d6d5
@property(retain, nonatomic) NLXSchemaCDMRequestEnded *ended; // @synthesize ended=_ended;
- (void)deleteStartedOrChanged;	// IMP=0x000000000007d5ed
@property(retain, nonatomic) NLXSchemaCDMRequestStarted *startedOrChanged; // @synthesize startedOrChanged=_startedOrChanged;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x00000000003352fc
- (id)suppressMessageUnderConditions;	// IMP=0x00000000003352c4

@end
