//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLPInstSchemaCLPCDMReplayTaskEnded, CLPInstSchemaCLPCDMReplayTaskStarted, NSData;

@interface CLPInstSchemaCLPCDMReplayTaskContext
{
    CLPInstSchemaCLPCDMReplayTaskStarted *_startedOrChanged;	// 8 = 0x8
    CLPInstSchemaCLPCDMReplayTaskEnded *_ended;	// 16 = 0x10
    _Bool _hasStartedOrChanged;	// 24 = 0x18
    _Bool _hasEnded;	// 25 = 0x19
    unsigned long long _whichContextevent;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000a5135
@property(nonatomic) _Bool hasEnded; // @synthesize hasEnded=_hasEnded;
@property(nonatomic) _Bool hasStartedOrChanged; // @synthesize hasStartedOrChanged=_hasStartedOrChanged;
@property(readonly, nonatomic) unsigned long long whichContextevent; // @synthesize whichContextevent=_whichContextevent;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000a4f5a
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000a4e9c
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000a4c67
- (unsigned long long)hash;	// IMP=0x00000000000a4c1a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a4958
- (void)writeTo:(id)arg1;	// IMP=0x00000000000a4875
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000a4199
- (void)deleteEnded;	// IMP=0x00000000000a4166
@property(retain, nonatomic) CLPInstSchemaCLPCDMReplayTaskEnded *ended; // @synthesize ended=_ended;
- (void)deleteStartedOrChanged;	// IMP=0x00000000000a4098
@property(retain, nonatomic) CLPInstSchemaCLPCDMReplayTaskStarted *startedOrChanged; // @synthesize startedOrChanged=_startedOrChanged;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000338d45
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000338d0d

@end
