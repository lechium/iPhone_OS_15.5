//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MHSchemaMHAssistantDaemonAudioRecordingEnded, MHSchemaMHAssistantDaemonAudioRecordingStarted, NSData;

@interface MHSchemaMHAssistantDaemonAudioRecordingContext
{
    MHSchemaMHAssistantDaemonAudioRecordingStarted *_startedOrChanged;	// 8 = 0x8
    MHSchemaMHAssistantDaemonAudioRecordingEnded *_ended;	// 16 = 0x10
    _Bool _hasStartedOrChanged;	// 24 = 0x18
    _Bool _hasEnded;	// 25 = 0x19
    unsigned long long _whichContextevent;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001d2831
@property(nonatomic) _Bool hasEnded; // @synthesize hasEnded=_hasEnded;
@property(nonatomic) _Bool hasStartedOrChanged; // @synthesize hasStartedOrChanged=_hasStartedOrChanged;
@property(readonly, nonatomic) unsigned long long whichContextevent; // @synthesize whichContextevent=_whichContextevent;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001d2656
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001d2598
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001d2363
- (unsigned long long)hash;	// IMP=0x00000000001d2316
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d2054
- (void)writeTo:(id)arg1;	// IMP=0x00000000001d1f71
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001d186a
- (void)deleteEnded;	// IMP=0x00000000001d1837
@property(retain, nonatomic) MHSchemaMHAssistantDaemonAudioRecordingEnded *ended; // @synthesize ended=_ended;
- (void)deleteStartedOrChanged;	// IMP=0x00000000001d176b
@property(retain, nonatomic) MHSchemaMHAssistantDaemonAudioRecordingStarted *startedOrChanged; // @synthesize startedOrChanged=_startedOrChanged;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000034b330
- (id)suppressMessageUnderConditions;	// IMP=0x000000000034b2f8

@end

