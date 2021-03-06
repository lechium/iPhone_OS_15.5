//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MHSchemaMHAssistantDaemonAudioStopRecordingEnded, MHSchemaMHAssistantDaemonAudioStopRecordingeStarted, NSData;

@interface MHSchemaMHAssistantDaemonAudioStopRecordingContext
{
    MHSchemaMHAssistantDaemonAudioStopRecordingeStarted *_startedOrChanged;	// 8 = 0x8
    MHSchemaMHAssistantDaemonAudioStopRecordingEnded *_ended;	// 16 = 0x10
    _Bool _hasStartedOrChanged;	// 24 = 0x18
    _Bool _hasEnded;	// 25 = 0x19
    unsigned long long _whichContextevent;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001e07e6
@property(nonatomic) _Bool hasEnded; // @synthesize hasEnded=_hasEnded;
@property(nonatomic) _Bool hasStartedOrChanged; // @synthesize hasStartedOrChanged=_hasStartedOrChanged;
@property(readonly, nonatomic) unsigned long long whichContextevent; // @synthesize whichContextevent=_whichContextevent;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001e060b
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001e054d
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001e0318
- (unsigned long long)hash;	// IMP=0x00000000001e02cb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001e0009
- (void)writeTo:(id)arg1;	// IMP=0x00000000001dff26
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001df949
- (void)deleteEnded;	// IMP=0x00000000001df916
@property(retain, nonatomic) MHSchemaMHAssistantDaemonAudioStopRecordingEnded *ended; // @synthesize ended=_ended;
- (void)deleteStartedOrChanged;	// IMP=0x00000000001df84a
@property(retain, nonatomic) MHSchemaMHAssistantDaemonAudioStopRecordingeStarted *startedOrChanged; // @synthesize startedOrChanged=_startedOrChanged;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000034c431
- (id)suppressMessageUnderConditions;	// IMP=0x000000000034c3f9

@end

