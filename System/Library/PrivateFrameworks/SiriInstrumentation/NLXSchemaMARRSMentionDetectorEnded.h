//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, SISchemaUUID;

@interface NLXSchemaMARRSMentionDetectorEnded
{
    NSArray *_mentionDetectorSpans;	// 8 = 0x8
    SISchemaUUID *_linkId;	// 16 = 0x10
    _Bool _hasLinkId;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001b6592
@property(nonatomic) _Bool hasLinkId; // @synthesize hasLinkId=_hasLinkId;
@property(retain, nonatomic) SISchemaUUID *linkId; // @synthesize linkId=_linkId;
@property(copy, nonatomic) NSArray *mentionDetectorSpans; // @synthesize mentionDetectorSpans=_mentionDetectorSpans;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001b6232
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001b6174
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001b5db7
- (unsigned long long)hash;	// IMP=0x00000000001b5d6a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001b5aad
- (void)writeTo:(id)arg1;	// IMP=0x00000000001b590d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001b56c5
- (void)deleteLinkId;	// IMP=0x00000000001b56b1
- (id)mentionDetectorSpansAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001b567f
- (unsigned long long)mentionDetectorSpansCount;	// IMP=0x00000000001b5662
- (void)addMentionDetectorSpans:(id)arg1;	// IMP=0x00000000001b55e8
- (void)deleteMentionDetectorSpans;	// IMP=0x00000000001b55d6
- (void)clearMentionDetectorSpans;	// IMP=0x00000000001b55b9
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000349440
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000349408

@end

