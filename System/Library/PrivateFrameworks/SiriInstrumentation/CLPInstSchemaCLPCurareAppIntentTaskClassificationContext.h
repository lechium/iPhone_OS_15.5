//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLPInstSchemaCLPCurareAppIntentTaskClassificationEnded, CLPInstSchemaCLPCurareAppIntentTaskClassificationStarted, NSData;

@interface CLPInstSchemaCLPCurareAppIntentTaskClassificationContext
{
    CLPInstSchemaCLPCurareAppIntentTaskClassificationStarted *_startedOrChanged;	// 8 = 0x8
    CLPInstSchemaCLPCurareAppIntentTaskClassificationEnded *_ended;	// 16 = 0x10
    _Bool _hasStartedOrChanged;	// 24 = 0x18
    _Bool _hasEnded;	// 25 = 0x19
    unsigned long long _whichContextevent;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000ad1e8
@property(nonatomic) _Bool hasEnded; // @synthesize hasEnded=_hasEnded;
@property(nonatomic) _Bool hasStartedOrChanged; // @synthesize hasStartedOrChanged=_hasStartedOrChanged;
@property(readonly, nonatomic) unsigned long long whichContextevent; // @synthesize whichContextevent=_whichContextevent;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000ad00d
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000acf4f
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000acd1a
- (unsigned long long)hash;	// IMP=0x00000000000acccd
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000aca0b
- (void)writeTo:(id)arg1;	// IMP=0x00000000000ac928
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000ac2c4
- (void)deleteEnded;	// IMP=0x00000000000ac291
@property(retain, nonatomic) CLPInstSchemaCLPCurareAppIntentTaskClassificationEnded *ended; // @synthesize ended=_ended;
- (void)deleteStartedOrChanged;	// IMP=0x00000000000ac1c3
@property(retain, nonatomic) CLPInstSchemaCLPCurareAppIntentTaskClassificationStarted *startedOrChanged; // @synthesize startedOrChanged=_startedOrChanged;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000339970
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000339938

@end
