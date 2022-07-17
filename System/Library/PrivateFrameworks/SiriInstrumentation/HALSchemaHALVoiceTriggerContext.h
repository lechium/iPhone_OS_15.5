//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface HALSchemaHALVoiceTriggerContext
{
    unsigned long long _timeSinceVoiceTriggerHeardInSeconds;	// 8 = 0x8
    struct {
        unsigned int timeSinceVoiceTriggerHeardInSeconds:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) unsigned long long timeSinceVoiceTriggerHeardInSeconds; // @synthesize timeSinceVoiceTriggerHeardInSeconds=_timeSinceVoiceTriggerHeardInSeconds;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000019c427
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000019c369
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000019c239
- (unsigned long long)hash;	// IMP=0x000000000019c211
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000019c16c
- (void)writeTo:(id)arg1;	// IMP=0x000000000019c140
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000019c133
- (void)deleteTimeSinceVoiceTriggerHeardInSeconds;	// IMP=0x000000000019c109
@property(nonatomic) _Bool hasTimeSinceVoiceTriggerHeardInSeconds;
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000347bb7

@end
