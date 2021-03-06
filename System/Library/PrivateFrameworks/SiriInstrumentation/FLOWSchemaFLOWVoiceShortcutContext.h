//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData;

@interface FLOWSchemaFLOWVoiceShortcutContext
{
    NSArray *_voiceShortcutActions;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000016f882
@property(copy, nonatomic) NSArray *voiceShortcutActions; // @synthesize voiceShortcutActions=_voiceShortcutActions;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000016f5f4
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000016f536
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000016f21f
- (unsigned long long)hash;	// IMP=0x000000000016f202
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000016f080
- (void)writeTo:(id)arg1;	// IMP=0x000000000016ef50
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000016ef43
- (id)voiceShortcutActionAtIndex:(unsigned long long)arg1;	// IMP=0x000000000016ef26
- (unsigned long long)voiceShortcutActionCount;	// IMP=0x000000000016ef09
- (void)addVoiceShortcutAction:(id)arg1;	// IMP=0x000000000016ee8f
- (void)deleteVoiceShortcutAction;	// IMP=0x000000000016ee7d
- (void)clearVoiceShortcutAction;	// IMP=0x000000000016ee60
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x00000000003454b6
- (id)suppressMessageUnderConditions;	// IMP=0x000000000034547e

@end

