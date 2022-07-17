//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, SISchemaUUID;

@interface PLUSSchemaPLUSClientEventMetadata
{
    SISchemaUUID *_plusId;	// 8 = 0x8
    _Bool _hasPlusId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000029de49
@property(nonatomic) _Bool hasPlusId; // @synthesize hasPlusId=_hasPlusId;
@property(retain, nonatomic) SISchemaUUID *plusId; // @synthesize plusId=_plusId;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000029dd17
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000029dc59
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000029dad4
- (unsigned long long)hash;	// IMP=0x000000000029dab7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000029d935
- (void)writeTo:(id)arg1;	// IMP=0x000000000029d8ae
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000029d8a1
- (void)deletePlusId;	// IMP=0x000000000029d88d
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000356e4c
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000356e14

@end
