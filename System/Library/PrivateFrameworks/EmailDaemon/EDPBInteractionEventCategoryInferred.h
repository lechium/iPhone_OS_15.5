//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <EmailDaemon/EDPBBaseMessageFields-Protocol.h>
#import <EmailDaemon/EDPBDataSetters-Protocol.h>
#import <EmailDaemon/NSCopying-Protocol.h>

@class EDPBModelFeaturesImportant, EDPBModelFeaturesPromotion;

@interface EDPBInteractionEventCategoryInferred : PBCodable <EDPBDataSetters, EDPBBaseMessageFields, NSCopying>
{
    long long _accountId;	// 8 = 0x8
    long long _conversationId;	// 16 = 0x10
    long long _mailboxId;	// 24 = 0x18
    long long _messageId;	// 32 = 0x20
    double _score;	// 40 = 0x28
    int _categoryType;	// 48 = 0x30
    EDPBModelFeaturesImportant *_featuresImportant;	// 56 = 0x38
    EDPBModelFeaturesPromotion *_featuresPromotion;	// 64 = 0x40
    int _mailboxType;	// 72 = 0x48
    unsigned int _modelId;	// 76 = 0x4c
    unsigned int _modelVersion;	// 80 = 0x50
    _Bool _positive;	// 84 = 0x54
    struct {
        unsigned int accountId:1;
        unsigned int conversationId:1;
        unsigned int mailboxId:1;
        unsigned int messageId:1;
        unsigned int score:1;
        unsigned int categoryType:1;
        unsigned int mailboxType:1;
        unsigned int modelId:1;
        unsigned int modelVersion:1;
        unsigned int positive:1;
    } _has;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000a8a06
@property(retain, nonatomic) EDPBModelFeaturesPromotion *featuresPromotion; // @synthesize featuresPromotion=_featuresPromotion;
@property(retain, nonatomic) EDPBModelFeaturesImportant *featuresImportant; // @synthesize featuresImportant=_featuresImportant;
@property(nonatomic) unsigned int modelVersion; // @synthesize modelVersion=_modelVersion;
@property(nonatomic) unsigned int modelId; // @synthesize modelId=_modelId;
@property(nonatomic) _Bool positive; // @synthesize positive=_positive;
@property(nonatomic) double score; // @synthesize score=_score;
@property(nonatomic) long long messageId; // @synthesize messageId=_messageId;
@property(nonatomic) long long conversationId; // @synthesize conversationId=_conversationId;
@property(nonatomic) long long mailboxId; // @synthesize mailboxId=_mailboxId;
@property(nonatomic) long long accountId; // @synthesize accountId=_accountId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000a875b
- (unsigned long long)hash;	// IMP=0x00000000000a84e1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a8229
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a804a
- (void)copyTo:(id)arg1;	// IMP=0x00000000000a7ea9
- (void)writeTo:(id)arg1;	// IMP=0x00000000000a7cd6
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000a7cc8
- (id)dictionaryRepresentation;	// IMP=0x00000000000a6f54
- (id)description;	// IMP=0x00000000000a6e84
@property(readonly, nonatomic) _Bool hasFeaturesPromotion;
@property(readonly, nonatomic) _Bool hasFeaturesImportant;
@property(nonatomic) _Bool hasModelVersion;
@property(nonatomic) _Bool hasModelId;
- (int)StringAsCategoryType:(id)arg1;	// IMP=0x00000000000a6cd8
- (id)categoryTypeAsString:(int)arg1;	// IMP=0x00000000000a6c4e
@property(nonatomic) _Bool hasCategoryType;
@property(nonatomic) int categoryType; // @synthesize categoryType=_categoryType;
@property(nonatomic) _Bool hasPositive;
@property(nonatomic) _Bool hasScore;
@property(nonatomic) _Bool hasMessageId;
@property(nonatomic) _Bool hasConversationId;
- (int)StringAsMailboxType:(id)arg1;	// IMP=0x00000000000a6940
- (id)mailboxTypeAsString:(int)arg1;	// IMP=0x00000000000a6881
@property(nonatomic) _Bool hasMailboxType;
@property(nonatomic) int mailboxType; // @synthesize mailboxType=_mailboxType;
@property(nonatomic) _Bool hasMailboxId;
@property(nonatomic) _Bool hasAccountId;
- (void)withHasher:(id)arg1 setMessage:(id)arg2 data:(id)arg3;	// IMP=0x00000000000a2928

@end
