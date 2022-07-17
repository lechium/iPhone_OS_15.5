//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, SISchemaUUID;

@interface DUSchemaDUEventMetadata
{
    SISchemaUUID *_assetIdentifier;	// 8 = 0x8
    _Bool _hasAssetIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000116fff
@property(nonatomic) _Bool hasAssetIdentifier; // @synthesize hasAssetIdentifier=_hasAssetIdentifier;
@property(retain, nonatomic) SISchemaUUID *assetIdentifier; // @synthesize assetIdentifier=_assetIdentifier;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000116ecd
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000116e0f
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000116c8a
- (unsigned long long)hash;	// IMP=0x0000000000116c6d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000116aeb
- (void)writeTo:(id)arg1;	// IMP=0x0000000000116a64
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000116a57
- (void)deleteAssetIdentifier;	// IMP=0x0000000000116a43
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000033ff4f
- (id)suppressMessageUnderConditions;	// IMP=0x000000000033ff17

@end
