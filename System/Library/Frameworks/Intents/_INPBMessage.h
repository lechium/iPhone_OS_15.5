//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBMessage-Protocol.h>

@class NSArray, NSString, _INPBContact, _INPBCurrencyAmountValue, _INPBDataString, _INPBDateTime, _INPBInteger, _INPBMessageLinkMetadata;

@interface _INPBMessage : PBCodable <_INPBMessage, NSSecureCoding, NSCopying>
{
    CDStruct_95bda58d _attributes;	// 8 = 0x8
    struct {
        unsigned int effect:1;
        unsigned int type:1;
    } _has;	// 32 = 0x20
    int _effect;	// 36 = 0x24
    int _type;	// 40 = 0x28
    NSString *_content;	// 48 = 0x30
    NSString *_conversationIdentifier;	// 56 = 0x38
    _INPBDateTime *_dateLastMessageRead;	// 64 = 0x40
    _INPBDateTime *_dateSent;	// 72 = 0x48
    NSString *_fileExtension;	// 80 = 0x50
    NSString *_groupName;	// 88 = 0x58
    NSString *_identifier;	// 96 = 0x60
    _INPBMessageLinkMetadata *_linkMetadata;	// 104 = 0x68
    NSString *_locationName;	// 112 = 0x70
    _INPBInteger *_numberOfAttachments;	// 120 = 0x78
    _INPBCurrencyAmountValue *_paymentAmount;	// 128 = 0x80
    NSArray *_recipients;	// 136 = 0x88
    _INPBMessage *_referencedMessage;	// 144 = 0x90
    _INPBContact *_sender;	// 152 = 0x98
    NSString *_serviceName;	// 160 = 0xa0
    _INPBDataString *_speakableGroupName;	// 168 = 0xa8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000008fd2d
+ (Class)recipientType;	// IMP=0x000000000008fd1c
- (void).cxx_destruct;	// IMP=0x000000000008f2d0
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) _INPBDataString *speakableGroupName; // @synthesize speakableGroupName=_speakableGroupName;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain, nonatomic) _INPBContact *sender; // @synthesize sender=_sender;
@property(retain, nonatomic) _INPBMessage *referencedMessage; // @synthesize referencedMessage=_referencedMessage;
@property(copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(retain, nonatomic) _INPBCurrencyAmountValue *paymentAmount; // @synthesize paymentAmount=_paymentAmount;
@property(retain, nonatomic) _INPBInteger *numberOfAttachments; // @synthesize numberOfAttachments=_numberOfAttachments;
@property(copy, nonatomic) NSString *locationName; // @synthesize locationName=_locationName;
@property(retain, nonatomic) _INPBMessageLinkMetadata *linkMetadata; // @synthesize linkMetadata=_linkMetadata;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(copy, nonatomic) NSString *fileExtension; // @synthesize fileExtension=_fileExtension;
@property(nonatomic) int effect; // @synthesize effect=_effect;
@property(retain, nonatomic) _INPBDateTime *dateSent; // @synthesize dateSent=_dateSent;
@property(retain, nonatomic) _INPBDateTime *dateLastMessageRead; // @synthesize dateLastMessageRead=_dateLastMessageRead;
@property(copy, nonatomic) NSString *conversationIdentifier; // @synthesize conversationIdentifier=_conversationIdentifier;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
- (id)dictionaryRepresentation;	// IMP=0x000000000008e4e8
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008d12d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008cd0a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000008cc78
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000008cb79
- (void)dealloc;	// IMP=0x000000000008cb3b
- (void)writeTo:(id)arg1;	// IMP=0x000000000008c4c8
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000008c4bb
- (int)StringAsType:(id)arg1;	// IMP=0x000000000008c14c
- (id)typeAsString:(int)arg1;	// IMP=0x000000000008bf9d
@property(nonatomic) _Bool hasType;
@property(readonly, nonatomic) _Bool hasSpeakableGroupName;
@property(readonly, nonatomic) _Bool hasServiceName;
@property(readonly, nonatomic) _Bool hasSender;
@property(readonly, nonatomic) _Bool hasReferencedMessage;
- (id)recipientAtIndex:(unsigned long long)arg1;	// IMP=0x000000000008be5e
@property(readonly, nonatomic) unsigned long long recipientsCount;
- (void)addRecipient:(id)arg1;	// IMP=0x000000000008bdc7
- (void)clearRecipients;	// IMP=0x000000000008bdaa
@property(readonly, nonatomic) _Bool hasPaymentAmount;
@property(readonly, nonatomic) _Bool hasNumberOfAttachments;
@property(readonly, nonatomic) _Bool hasLocationName;
@property(readonly, nonatomic) _Bool hasLinkMetadata;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(readonly, nonatomic) _Bool hasGroupName;
@property(readonly, nonatomic) _Bool hasFileExtension;
- (int)StringAsEffect:(id)arg1;	// IMP=0x000000000008b9f4
- (id)effectAsString:(int)arg1;	// IMP=0x000000000008b8fc
@property(nonatomic) _Bool hasEffect;
@property(readonly, nonatomic) _Bool hasDateSent;
@property(readonly, nonatomic) _Bool hasDateLastMessageRead;
@property(readonly, nonatomic) _Bool hasConversationIdentifier;
@property(readonly, nonatomic) _Bool hasContent;
- (int)StringAsAttributes:(id)arg1;	// IMP=0x000000000008b6ec
- (id)attributesAsString:(int)arg1;	// IMP=0x000000000008b65e
- (int)attributeAtIndex:(unsigned long long)arg1;	// IMP=0x000000000008b64a
@property(readonly, nonatomic) unsigned long long attributesCount;
- (void)addAttribute:(int)arg1;	// IMP=0x000000000008b61c
- (void)clearAttributes;	// IMP=0x000000000008b60b
@property(readonly, nonatomic) int *attributes;
- (void)setAttributes:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000008b5e3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
