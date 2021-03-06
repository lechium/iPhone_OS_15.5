//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MHSchemaMHAssistantDaemonAudioRecordingInterruptionEnded, MHSchemaMHAssistantDaemonAudioRecordingInterruptionStarted, NSData;

@interface MHSchemaMHAssistantDaemonAudioRecordingInterruptionContext
{
    MHSchemaMHAssistantDaemonAudioRecordingInterruptionStarted *_startedOrChanged;	// 8 = 0x8
    MHSchemaMHAssistantDaemonAudioRecordingInterruptionEnded *_ended;	// 16 = 0x10
    _Bool _hasStartedOrChanged;	// 24 = 0x18
    _Bool _hasEnded;	// 25 = 0x19
    unsigned long long _whichContextevent;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001d56ac
@property(nonatomic) _Bool hasEnded; // @synthesize hasEnded=_hasEnded;
@property(nonatomic) _Bool hasStartedOrChanged; // @synthesize hasStartedOrChanged=_hasStartedOrChanged;
@property(readonly, nonatomic) unsigned long long whichContextevent; // @synthesize whichContextevent=_whichContextevent;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001d54d1
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001d5413
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001d51de
- (unsigned long long)hash;	// IMP=0x00000000001d5191
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d4ecf
- (void)writeTo:(id)arg1;	// IMP=0x00000000001d4dec
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001d47a9
- (void)deleteEnded;	// IMP=0x00000000001d4776
@property(retain, nonatomic) MHSchemaMHAssistantDaemonAudioRecordingInterruptionEnded *ended; // @synthesize ended=_ended;
- (void)deleteStartedOrChanged;	// IMP=0x00000000001d46aa
@property(retain, nonatomic) MHSchemaMHAssistantDaemonAudioRecordingInterruptionStarted *startedOrChanged; // @synthesize startedOrChanged=_startedOrChanged;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000034b6c2
- (id)suppressMessageUnderConditions;	// IMP=0x000000000034b68a

@end

