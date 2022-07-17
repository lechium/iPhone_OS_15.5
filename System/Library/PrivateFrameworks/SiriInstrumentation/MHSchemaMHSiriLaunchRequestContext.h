//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MHSchemaMHSiriLaunchRequestEnded, MHSchemaMHSiriLaunchRequestStarted, NSData;

@interface MHSchemaMHSiriLaunchRequestContext
{
    MHSchemaMHSiriLaunchRequestStarted *_startedOrChanged;	// 8 = 0x8
    MHSchemaMHSiriLaunchRequestEnded *_ended;	// 16 = 0x10
    _Bool _hasStartedOrChanged;	// 24 = 0x18
    _Bool _hasEnded;	// 25 = 0x19
    unsigned long long _whichContextevent;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000208052
@property(nonatomic) _Bool hasEnded; // @synthesize hasEnded=_hasEnded;
@property(nonatomic) _Bool hasStartedOrChanged; // @synthesize hasStartedOrChanged=_hasStartedOrChanged;
@property(readonly, nonatomic) unsigned long long whichContextevent; // @synthesize whichContextevent=_whichContextevent;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000207e77
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000207db9
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000207b84
- (unsigned long long)hash;	// IMP=0x0000000000207b37
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000207875
- (void)writeTo:(id)arg1;	// IMP=0x0000000000207792
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002073e3
- (void)deleteEnded;	// IMP=0x00000000002073b0
@property(retain, nonatomic) MHSchemaMHSiriLaunchRequestEnded *ended; // @synthesize ended=_ended;
- (void)deleteStartedOrChanged;	// IMP=0x00000000002072e4
@property(retain, nonatomic) MHSchemaMHSiriLaunchRequestStarted *startedOrChanged; // @synthesize startedOrChanged=_startedOrChanged;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000034ea1c
- (id)suppressMessageUnderConditions;	// IMP=0x000000000034e9e4

@end
