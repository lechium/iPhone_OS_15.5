//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HOMESchemaHOMEAssistantDeviceBirthday, HOMESchemaHOMEAssistantInfoReported, HOMESchemaHOMEClientEventMetadata, NSData;

@interface HOMESchemaHOMEClientEvent
{
    HOMESchemaHOMEClientEventMetadata *_eventMetadata;	// 8 = 0x8
    HOMESchemaHOMEAssistantInfoReported *_assistantInfoReported;	// 16 = 0x10
    HOMESchemaHOMEAssistantDeviceBirthday *_assistantDeviceBirthday;	// 24 = 0x18
    _Bool _hasEventMetadata;	// 32 = 0x20
    _Bool _hasAssistantInfoReported;	// 33 = 0x21
    _Bool _hasAssistantDeviceBirthday;	// 34 = 0x22
    unsigned long long _whichEvent_Type;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000019e7a7
@property(nonatomic) _Bool hasAssistantDeviceBirthday; // @synthesize hasAssistantDeviceBirthday=_hasAssistantDeviceBirthday;
@property(nonatomic) _Bool hasAssistantInfoReported; // @synthesize hasAssistantInfoReported=_hasAssistantInfoReported;
@property(nonatomic) _Bool hasEventMetadata; // @synthesize hasEventMetadata=_hasEventMetadata;
@property(retain, nonatomic) HOMESchemaHOMEClientEventMetadata *eventMetadata; // @synthesize eventMetadata=_eventMetadata;
@property(readonly, nonatomic) unsigned long long whichEvent_Type; // @synthesize whichEvent_Type=_whichEvent_Type;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000019e516
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000019e458
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000019e173
- (unsigned long long)hash;	// IMP=0x000000000019e106
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000019dd2d
- (void)writeTo:(id)arg1;	// IMP=0x000000000019dbee
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000019d773
- (void)deleteAssistantDeviceBirthday;	// IMP=0x000000000019d740
@property(retain, nonatomic) HOMESchemaHOMEAssistantDeviceBirthday *assistantDeviceBirthday; // @synthesize assistantDeviceBirthday=_assistantDeviceBirthday;
- (void)deleteAssistantInfoReported;	// IMP=0x000000000019d672
@property(retain, nonatomic) HOMESchemaHOMEAssistantInfoReported *assistantInfoReported; // @synthesize assistantInfoReported=_assistantInfoReported;
- (void)deleteEventMetadata;	// IMP=0x000000000019d5c3
- (id)qualifiedMessageName;	// IMP=0x000000000019d576
- (int)getAnyEventType;	// IMP=0x000000000019d56b
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000347da3
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000347d6b

@end

