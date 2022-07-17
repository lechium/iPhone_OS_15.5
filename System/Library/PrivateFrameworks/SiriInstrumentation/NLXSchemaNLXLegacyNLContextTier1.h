//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, SISchemaUUID;

@interface NLXSchemaNLXLegacyNLContextTier1
{
    SISchemaUUID *_linkId;	// 8 = 0x8
    NSArray *_renderedTexts;	// 16 = 0x10
    _Bool _hasLinkId;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000026fa6a
@property(nonatomic) _Bool hasLinkId; // @synthesize hasLinkId=_hasLinkId;
@property(copy, nonatomic) NSArray *renderedTexts; // @synthesize renderedTexts=_renderedTexts;
@property(retain, nonatomic) SISchemaUUID *linkId; // @synthesize linkId=_linkId;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000026f728
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000026f66a
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000026f47e
- (unsigned long long)hash;	// IMP=0x000000000026f431
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000026f174
- (void)writeTo:(id)arg1;	// IMP=0x000000000026efe9
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000026efdc
- (id)renderedTextsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000026efbf
- (unsigned long long)renderedTextsCount;	// IMP=0x000000000026efa2
- (void)addRenderedTexts:(id)arg1;	// IMP=0x000000000026ef28
- (void)deleteRenderedTexts;	// IMP=0x000000000026ef16
- (void)clearRenderedTexts;	// IMP=0x000000000026eef9
- (void)deleteLinkId;	// IMP=0x000000000026eee5
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000353c42
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000353c0a

@end
