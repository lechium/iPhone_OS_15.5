//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSString;

@interface USOSchemaUSONodeDataTier1
{
    unsigned int _index;	// 8 = 0x8
    NSString *_stringPayload;	// 16 = 0x10
    int _integerPayload;	// 24 = 0x18
    NSArray *_normalizedStringPayloads;	// 32 = 0x20
    struct {
        unsigned int index:1;
        unsigned int integerPayload:1;
    } _has;	// 40 = 0x28
    _Bool _hasStringPayload;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x0000000000317662
@property(nonatomic) _Bool hasStringPayload; // @synthesize hasStringPayload=_hasStringPayload;
@property(copy, nonatomic) NSArray *normalizedStringPayloads; // @synthesize normalizedStringPayloads=_normalizedStringPayloads;
@property(nonatomic) int integerPayload; // @synthesize integerPayload=_integerPayload;
@property(copy, nonatomic) NSString *stringPayload; // @synthesize stringPayload=_stringPayload;
@property(nonatomic) unsigned int index; // @synthesize index=_index;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000317235
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000317177
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000316f0c
- (unsigned long long)hash;	// IMP=0x0000000000316e62
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000316b30
- (void)writeTo:(id)arg1;	// IMP=0x000000000031697b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000031696e
- (id)normalizedStringPayloadsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000316951
- (unsigned long long)normalizedStringPayloadsCount;	// IMP=0x0000000000316934
- (void)addNormalizedStringPayloads:(id)arg1;	// IMP=0x00000000003168ba
- (void)deleteNormalizedStringPayloads;	// IMP=0x00000000003168a8
- (void)clearNormalizedStringPayloads;	// IMP=0x000000000031688b
- (void)deleteIntegerPayload;	// IMP=0x0000000000316861
@property(nonatomic) _Bool hasIntegerPayload;
- (void)deleteStringPayload;	// IMP=0x0000000000316804
- (void)deleteIndex;	// IMP=0x00000000003167c5
@property(nonatomic) _Bool hasIndex;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000035f7fe
- (id)suppressMessageUnderConditions;	// IMP=0x000000000035f7c6

@end
