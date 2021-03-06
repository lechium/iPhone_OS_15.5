//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ASRSchemaASRPreheatEnded, ASRSchemaASRPreheatFailed, ASRSchemaASRPreheatStarted, NSData;

@interface ASRSchemaASRPreheatContext
{
    ASRSchemaASRPreheatStarted *_startedOrChanged;	// 8 = 0x8
    ASRSchemaASRPreheatEnded *_ended;	// 16 = 0x10
    ASRSchemaASRPreheatFailed *_failed;	// 24 = 0x18
    _Bool _hasStartedOrChanged;	// 32 = 0x20
    _Bool _hasEnded;	// 33 = 0x21
    _Bool _hasFailed;	// 34 = 0x22
    unsigned long long _whichContextevent;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000002fdc8
@property(nonatomic) _Bool hasFailed; // @synthesize hasFailed=_hasFailed;
@property(nonatomic) _Bool hasEnded; // @synthesize hasEnded=_hasEnded;
@property(nonatomic) _Bool hasStartedOrChanged; // @synthesize hasStartedOrChanged=_hasStartedOrChanged;
@property(readonly, nonatomic) unsigned long long whichContextevent; // @synthesize whichContextevent=_whichContextevent;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000002fb4c
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000002fa8e
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000002f7a9
- (unsigned long long)hash;	// IMP=0x000000000002f73c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002f363
- (void)writeTo:(id)arg1;	// IMP=0x000000000002f224
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000002ecaa
- (void)deleteFailed;	// IMP=0x000000000002ec77
@property(retain, nonatomic) ASRSchemaASRPreheatFailed *failed; // @synthesize failed=_failed;
- (void)deleteEnded;	// IMP=0x000000000002eb99
@property(retain, nonatomic) ASRSchemaASRPreheatEnded *ended; // @synthesize ended=_ended;
- (void)deleteStartedOrChanged;	// IMP=0x000000000002eabb
@property(retain, nonatomic) ASRSchemaASRPreheatStarted *startedOrChanged; // @synthesize startedOrChanged=_startedOrChanged;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000330478
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000330440

@end

