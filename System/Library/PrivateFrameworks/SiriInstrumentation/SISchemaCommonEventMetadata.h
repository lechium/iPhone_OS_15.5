//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, SISchemaLogicalTimestamp;

@interface SISchemaCommonEventMetadata
{
    SISchemaLogicalTimestamp *_timestamp;	// 8 = 0x8
    _Bool _hasTimestamp;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000e6aae
@property(nonatomic) _Bool hasTimestamp; // @synthesize hasTimestamp=_hasTimestamp;
@property(retain, nonatomic) SISchemaLogicalTimestamp *timestamp; // @synthesize timestamp=_timestamp;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000e697c
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000e68be
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000e6739
- (unsigned long long)hash;	// IMP=0x00000000000e671c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e659a
- (void)writeTo:(id)arg1;	// IMP=0x00000000000e6513
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000e60d0
- (void)deleteTimestamp;	// IMP=0x00000000000e60bc
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000033cdeb
- (id)suppressMessageUnderConditions;	// IMP=0x000000000033cdb3

@end
