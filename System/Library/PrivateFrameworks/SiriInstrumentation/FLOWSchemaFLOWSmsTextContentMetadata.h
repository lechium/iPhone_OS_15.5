//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FLOWSchemaFLOWKeyboardUsageMetadata, NSData;

@interface FLOWSchemaFLOWSmsTextContentMetadata
{
    unsigned int _messageCharLength;	// 8 = 0x8
    unsigned int _messageWordLength;	// 12 = 0xc
    FLOWSchemaFLOWKeyboardUsageMetadata *_flowKeyboardUsageMetadata;	// 16 = 0x10
    _Bool _isPunctuationUsed;	// 24 = 0x18
    _Bool _isPayloadMultilingual;	// 25 = 0x19
    struct {
        unsigned int messageCharLength:1;
        unsigned int messageWordLength:1;
        unsigned int isPunctuationUsed:1;
        unsigned int isPayloadMultilingual:1;
    } _has;	// 28 = 0x1c
    _Bool _hasFlowKeyboardUsageMetadata;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000166dcf
@property(nonatomic) _Bool hasFlowKeyboardUsageMetadata; // @synthesize hasFlowKeyboardUsageMetadata=_hasFlowKeyboardUsageMetadata;
@property(nonatomic) _Bool isPayloadMultilingual; // @synthesize isPayloadMultilingual=_isPayloadMultilingual;
@property(nonatomic) _Bool isPunctuationUsed; // @synthesize isPunctuationUsed=_isPunctuationUsed;
@property(retain, nonatomic) FLOWSchemaFLOWKeyboardUsageMetadata *flowKeyboardUsageMetadata; // @synthesize flowKeyboardUsageMetadata=_flowKeyboardUsageMetadata;
@property(nonatomic) unsigned int messageWordLength; // @synthesize messageWordLength=_messageWordLength;
@property(nonatomic) unsigned int messageCharLength; // @synthesize messageCharLength=_messageCharLength;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000166ab3
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001669f5
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001666f3
- (unsigned long long)hash;	// IMP=0x0000000000166636
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001663a9
- (void)writeTo:(id)arg1;	// IMP=0x0000000000166290
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000165e61
- (void)deleteIsPayloadMultilingual;	// IMP=0x0000000000165e37
@property(nonatomic) _Bool hasIsPayloadMultilingual;
- (void)deleteIsPunctuationUsed;	// IMP=0x0000000000165dc2
@property(nonatomic) _Bool hasIsPunctuationUsed;
- (void)deleteFlowKeyboardUsageMetadata;	// IMP=0x0000000000165d63
- (void)deleteMessageWordLength;	// IMP=0x0000000000165d24
@property(nonatomic) _Bool hasMessageWordLength;
- (void)deleteMessageCharLength;	// IMP=0x0000000000165cb1
@property(nonatomic) _Bool hasMessageCharLength;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000344c93
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000344c5b

@end

