//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MHSchemaMHVoiceTriggerEventInfo, NSData;

@interface MHSchemaMHVoiceTriggerSecondPassTriggered
{
    MHSchemaMHVoiceTriggerEventInfo *_voiceTriggerEventInfo;	// 8 = 0x8
    _Bool _hasVoiceTriggerEventInfo;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002258d8
@property(nonatomic) _Bool hasVoiceTriggerEventInfo; // @synthesize hasVoiceTriggerEventInfo=_hasVoiceTriggerEventInfo;
@property(retain, nonatomic) MHSchemaMHVoiceTriggerEventInfo *voiceTriggerEventInfo; // @synthesize voiceTriggerEventInfo=_voiceTriggerEventInfo;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002257a6
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002256e8
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000225563
- (unsigned long long)hash;	// IMP=0x0000000000225546
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002253c4
- (void)writeTo:(id)arg1;	// IMP=0x000000000022533d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000225330
- (void)deleteVoiceTriggerEventInfo;	// IMP=0x000000000022531c
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000034f96b
- (id)suppressMessageUnderConditions;	// IMP=0x000000000034f933

@end
