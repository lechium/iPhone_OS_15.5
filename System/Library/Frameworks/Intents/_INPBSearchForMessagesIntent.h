//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSearchForMessagesIntent-Protocol.h>

@class NSString, _INPBContactList, _INPBDataStringList, _INPBDateTimeRange, _INPBIntentMetadata, _INPBStringList;

@interface _INPBSearchForMessagesIntent : PBCodable <_INPBSearchForMessagesIntent, NSSecureCoding, NSCopying>
{
    CDStruct_95bda58d _attributes;	// 8 = 0x8
    struct _has;	// 32 = 0x20
    _INPBStringList *_content;	// 32 = 0x20
    _INPBStringList *_conversationIdentifier;	// 40 = 0x28
    _INPBDateTimeRange *_dateTimeRange;	// 48 = 0x30
    _INPBStringList *_groupName;	// 56 = 0x38
    _INPBStringList *_identifier;	// 64 = 0x40
    _INPBIntentMetadata *_intentMetadata;	// 72 = 0x48
    _INPBStringList *_notificationIdentifier;	// 80 = 0x50
    _INPBContactList *_recipient;	// 88 = 0x58
    _INPBStringList *_searchTerm;	// 96 = 0x60
    _INPBContactList *_sender;	// 104 = 0x68
    _INPBDataStringList *_speakableGroupName;	// 112 = 0x70
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000010a50c
- (void).cxx_destruct;	// IMP=0x0000000000109d03
@property(retain, nonatomic) _INPBDataStringList *speakableGroupName; // @synthesize speakableGroupName=_speakableGroupName;
@property(retain, nonatomic) _INPBContactList *sender; // @synthesize sender=_sender;
@property(retain, nonatomic) _INPBStringList *searchTerm; // @synthesize searchTerm=_searchTerm;
@property(retain, nonatomic) _INPBContactList *recipient; // @synthesize recipient=_recipient;
@property(retain, nonatomic) _INPBStringList *notificationIdentifier; // @synthesize notificationIdentifier=_notificationIdentifier;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(retain, nonatomic) _INPBStringList *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) _INPBStringList *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) _INPBDateTimeRange *dateTimeRange; // @synthesize dateTimeRange=_dateTimeRange;
@property(retain, nonatomic) _INPBStringList *conversationIdentifier; // @synthesize conversationIdentifier=_conversationIdentifier;
@property(retain, nonatomic) _INPBStringList *content; // @synthesize content=_content;
- (id)dictionaryRepresentation;	// IMP=0x0000000000109687
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000010897e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001086c5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000108633
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000108534
- (void)dealloc;	// IMP=0x00000000001084f6
- (void)writeTo:(id)arg1;	// IMP=0x000000000010809e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000108091
@property(readonly, nonatomic) _Bool hasSpeakableGroupName;
@property(readonly, nonatomic) _Bool hasSender;
@property(readonly, nonatomic) _Bool hasSearchTerm;
@property(readonly, nonatomic) _Bool hasRecipient;
@property(readonly, nonatomic) _Bool hasNotificationIdentifier;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(readonly, nonatomic) _Bool hasGroupName;
@property(readonly, nonatomic) _Bool hasDateTimeRange;
@property(readonly, nonatomic) _Bool hasConversationIdentifier;
@property(readonly, nonatomic) _Bool hasContent;
- (int)StringAsAttributes:(id)arg1;	// IMP=0x0000000000107dfc
- (id)attributesAsString:(int)arg1;	// IMP=0x0000000000107d71
- (int)attributeAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000107d5d
@property(readonly, nonatomic) unsigned long long attributesCount;
- (void)addAttribute:(int)arg1;	// IMP=0x0000000000107d2f
- (void)clearAttributes;	// IMP=0x0000000000107d1e
@property(readonly, nonatomic) int *attributes;
- (void)setAttributes:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000107cf6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
