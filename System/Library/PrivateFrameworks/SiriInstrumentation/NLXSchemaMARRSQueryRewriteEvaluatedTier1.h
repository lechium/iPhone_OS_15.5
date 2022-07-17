//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, SISchemaUUID;

@interface NLXSchemaMARRSQueryRewriteEvaluatedTier1
{
    SISchemaUUID *_linkId;	// 8 = 0x8
    NSArray *_rewrittenUserUtterances;	// 16 = 0x10
    _Bool _hasLinkId;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001bd3c4
@property(nonatomic) _Bool hasLinkId; // @synthesize hasLinkId=_hasLinkId;
@property(copy, nonatomic) NSArray *rewrittenUserUtterances; // @synthesize rewrittenUserUtterances=_rewrittenUserUtterances;
@property(retain, nonatomic) SISchemaUUID *linkId; // @synthesize linkId=_linkId;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001bd082
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001bcfc4
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001bcdd8
- (unsigned long long)hash;	// IMP=0x00000000001bcd8b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001bcace
- (void)writeTo:(id)arg1;	// IMP=0x00000000001bc943
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001bc732
- (id)rewrittenUserUtterancesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001bc715
- (unsigned long long)rewrittenUserUtterancesCount;	// IMP=0x00000000001bc6f8
- (void)addRewrittenUserUtterances:(id)arg1;	// IMP=0x00000000001bc67e
- (void)deleteRewrittenUserUtterances;	// IMP=0x00000000001bc66c
- (void)clearRewrittenUserUtterances;	// IMP=0x00000000001bc64f
- (void)deleteLinkId;	// IMP=0x00000000001bc63b
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000349e6d
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000349e35

@end
