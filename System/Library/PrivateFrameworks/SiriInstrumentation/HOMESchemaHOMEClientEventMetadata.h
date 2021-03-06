//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, SISchemaUUID;

@interface HOMESchemaHOMEClientEventMetadata
{
    SISchemaUUID *_homeComponentId;	// 8 = 0x8
    _Bool _hasHomeComponentId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000019edba
@property(nonatomic) _Bool hasHomeComponentId; // @synthesize hasHomeComponentId=_hasHomeComponentId;
@property(retain, nonatomic) SISchemaUUID *homeComponentId; // @synthesize homeComponentId=_homeComponentId;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000019ec88
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000019ebca
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000019ea45
- (unsigned long long)hash;	// IMP=0x000000000019ea28
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000019e8a6
- (void)writeTo:(id)arg1;	// IMP=0x000000000019e81f
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000019e812
- (void)deleteHomeComponentId;	// IMP=0x000000000019e7fe
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000347fda
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000347fa2

@end

