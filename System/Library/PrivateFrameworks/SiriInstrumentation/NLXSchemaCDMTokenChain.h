//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, SISchemaUUID;

@interface NLXSchemaCDMTokenChain
{
    NSArray *_tokens;	// 8 = 0x8
    SISchemaUUID *_asrHypothesisId;	// 16 = 0x10
    _Bool _hasAsrHypothesisId;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000941cc
@property(nonatomic) _Bool hasAsrHypothesisId; // @synthesize hasAsrHypothesisId=_hasAsrHypothesisId;
@property(retain, nonatomic) SISchemaUUID *asrHypothesisId; // @synthesize asrHypothesisId=_asrHypothesisId;
@property(copy, nonatomic) NSArray *tokens; // @synthesize tokens=_tokens;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000093e6c
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000093dae
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000939f1
- (unsigned long long)hash;	// IMP=0x00000000000939a4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000936e7
- (void)writeTo:(id)arg1;	// IMP=0x0000000000093547
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000932ff
- (void)deleteAsrHypothesisId;	// IMP=0x00000000000932eb
- (id)tokensAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000932b9
- (unsigned long long)tokensCount;	// IMP=0x000000000009329c
- (void)addTokens:(id)arg1;	// IMP=0x0000000000093222
- (void)deleteTokens;	// IMP=0x0000000000093210
- (void)clearTokens;	// IMP=0x00000000000931f3
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000337183
- (id)suppressMessageUnderConditions;	// IMP=0x000000000033714b

@end

