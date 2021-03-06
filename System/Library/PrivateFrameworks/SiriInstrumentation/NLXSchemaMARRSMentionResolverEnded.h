//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, SISchemaUUID;

@interface NLXSchemaMARRSMentionResolverEnded
{
    NSArray *_mentionResolverSpans;	// 8 = 0x8
    SISchemaUUID *_linkId;	// 16 = 0x10
    _Bool _hasLinkId;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001b85a6
@property(nonatomic) _Bool hasLinkId; // @synthesize hasLinkId=_hasLinkId;
@property(retain, nonatomic) SISchemaUUID *linkId; // @synthesize linkId=_linkId;
@property(copy, nonatomic) NSArray *mentionResolverSpans; // @synthesize mentionResolverSpans=_mentionResolverSpans;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001b8246
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001b8188
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001b7dcb
- (unsigned long long)hash;	// IMP=0x00000000001b7d7e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001b7ac1
- (void)writeTo:(id)arg1;	// IMP=0x00000000001b7921
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001b76d9
- (void)deleteLinkId;	// IMP=0x00000000001b76c5
- (id)mentionResolverSpansAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001b7693
- (unsigned long long)mentionResolverSpansCount;	// IMP=0x00000000001b7676
- (void)addMentionResolverSpans:(id)arg1;	// IMP=0x00000000001b75fc
- (void)deleteMentionResolverSpans;	// IMP=0x00000000001b75ea
- (void)clearMentionResolverSpans;	// IMP=0x00000000001b75cd
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000349728
- (id)suppressMessageUnderConditions;	// IMP=0x00000000003496f0

@end

