//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DODMLASRSchemaDODMLASRDecodingMetrics, NSArray, NSData, NSString;

@interface DODMLASRSchemaDODMLASRDecodingResult
{
    NSString *_configName;	// 8 = 0x8
    NSArray *_tokens;	// 16 = 0x10
    NSArray *_utterances;	// 24 = 0x18
    DODMLASRSchemaDODMLASRDecodingMetrics *_decodingMetrics;	// 32 = 0x20
    unsigned long long _decodeDurationInNs;	// 40 = 0x28
    struct {
        unsigned int decodeDurationInNs:1;
    } _has;	// 48 = 0x30
    _Bool _hasConfigName;	// 52 = 0x34
    _Bool _hasDecodingMetrics;	// 53 = 0x35
}

- (void).cxx_destruct;	// IMP=0x00000000000fa732
@property(nonatomic) _Bool hasDecodingMetrics; // @synthesize hasDecodingMetrics=_hasDecodingMetrics;
@property(nonatomic) _Bool hasConfigName; // @synthesize hasConfigName=_hasConfigName;
@property(nonatomic) unsigned long long decodeDurationInNs; // @synthesize decodeDurationInNs=_decodeDurationInNs;
@property(retain, nonatomic) DODMLASRSchemaDODMLASRDecodingMetrics *decodingMetrics; // @synthesize decodingMetrics=_decodingMetrics;
@property(copy, nonatomic) NSArray *utterances; // @synthesize utterances=_utterances;
@property(copy, nonatomic) NSArray *tokens; // @synthesize tokens=_tokens;
@property(copy, nonatomic) NSString *configName; // @synthesize configName=_configName;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000fa0da
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000fa01c
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000f998d
- (unsigned long long)hash;	// IMP=0x00000000000f98de
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f93f1
- (void)writeTo:(id)arg1;	// IMP=0x00000000000f911a
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000f8e22
- (void)deleteDecodeDurationInNs;	// IMP=0x00000000000f8df8
@property(nonatomic) _Bool hasDecodeDurationInNs;
- (void)deleteDecodingMetrics;	// IMP=0x00000000000f8d9e
- (id)utterancesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000f8d6c
- (unsigned long long)utterancesCount;	// IMP=0x00000000000f8d4f
- (void)addUtterances:(id)arg1;	// IMP=0x00000000000f8cd5
- (void)deleteUtterances;	// IMP=0x00000000000f8cc3
- (void)clearUtterances;	// IMP=0x00000000000f8ca6
- (id)tokensAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000f8c89
- (unsigned long long)tokensCount;	// IMP=0x00000000000f8c6c
- (void)addTokens:(id)arg1;	// IMP=0x00000000000f8bf2
- (void)deleteTokens;	// IMP=0x00000000000f8be0
- (void)clearTokens;	// IMP=0x00000000000f8bc3
- (void)deleteConfigName;	// IMP=0x00000000000f8baf
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000033e13b
- (id)suppressMessageUnderConditions;	// IMP=0x000000000033e103

@end

