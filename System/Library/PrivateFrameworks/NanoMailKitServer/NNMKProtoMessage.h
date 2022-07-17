//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoMailKitServer/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface NNMKProtoMessage : PBCodable <NSCopying>
{
    NSString *_accountId;	// 8 = 0x8
    NSMutableArray *_bccs;	// 16 = 0x10
    NSMutableArray *_ccs;	// 24 = 0x18
    NSString *_conversationId;	// 32 = 0x20
    NSData *_dateReceived;	// 40 = 0x28
    NSData *_dateSent;	// 48 = 0x30
    NSString *_from;	// 56 = 0x38
    unsigned int _isSpecialMailboxSpecific;	// 64 = 0x40
    NSString *_mailboxId;	// 72 = 0x48
    NSString *_messageId;	// 80 = 0x50
    NSString *_messageIdHeader;	// 88 = 0x58
    NSString *_notificationMessageId;	// 96 = 0x60
    NSString *_publisherBulletinId;	// 104 = 0x68
    NSString *_remoteId;	// 112 = 0x70
    unsigned int _status;	// 120 = 0x78
    unsigned int _statusVersion;	// 124 = 0x7c
    NSString *_subject;	// 128 = 0x80
    NSMutableArray *_tos;	// 136 = 0x88
    _Bool _isThreadSpecific;	// 144 = 0x90
    struct {
        unsigned int isSpecialMailboxSpecific:1;
        unsigned int status:1;
        unsigned int statusVersion:1;
        unsigned int isThreadSpecific:1;
    } _has;	// 148 = 0x94
}

+ (Class)bccType;	// IMP=0x000000000004b4e2
+ (Class)ccType;	// IMP=0x000000000004b3d1
+ (Class)toType;	// IMP=0x000000000004b2ff
+ (id)protoMessageFromMessage:(id)arg1 organizedByThread:(_Bool)arg2 sanitizeMessageId:(_Bool)arg3 supportsStandaloneMode:(_Bool)arg4;	// IMP=0x00000000000805fe
- (void).cxx_destruct;	// IMP=0x000000000004de4d
@property(nonatomic) unsigned int statusVersion; // @synthesize statusVersion=_statusVersion;
@property(retain, nonatomic) NSString *publisherBulletinId; // @synthesize publisherBulletinId=_publisherBulletinId;
@property(nonatomic) unsigned int isSpecialMailboxSpecific; // @synthesize isSpecialMailboxSpecific=_isSpecialMailboxSpecific;
@property(nonatomic) _Bool isThreadSpecific; // @synthesize isThreadSpecific=_isThreadSpecific;
@property(retain, nonatomic) NSString *mailboxId; // @synthesize mailboxId=_mailboxId;
@property(retain, nonatomic) NSString *notificationMessageId; // @synthesize notificationMessageId=_notificationMessageId;
@property(retain, nonatomic) NSString *remoteId; // @synthesize remoteId=_remoteId;
@property(retain, nonatomic) NSMutableArray *bccs; // @synthesize bccs=_bccs;
@property(retain, nonatomic) NSString *messageIdHeader; // @synthesize messageIdHeader=_messageIdHeader;
@property(retain, nonatomic) NSData *dateReceived; // @synthesize dateReceived=_dateReceived;
@property(retain, nonatomic) NSData *dateSent; // @synthesize dateSent=_dateSent;
@property(retain, nonatomic) NSMutableArray *ccs; // @synthesize ccs=_ccs;
@property(retain, nonatomic) NSMutableArray *tos; // @synthesize tos=_tos;
@property(retain, nonatomic) NSString *from; // @synthesize from=_from;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(retain, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(retain, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
@property(retain, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000004d6aa
- (unsigned long long)hash;	// IMP=0x000000000004d450
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004d020
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004c980
- (void)copyTo:(id)arg1;	// IMP=0x000000000004c58e
- (void)writeTo:(id)arg1;	// IMP=0x000000000004c0b9
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000004c0ac
- (id)dictionaryRepresentation;	// IMP=0x000000000004b6d1
- (id)description;	// IMP=0x000000000004b622
@property(nonatomic) _Bool hasStatusVersion;
@property(readonly, nonatomic) _Bool hasPublisherBulletinId;
@property(nonatomic) _Bool hasIsSpecialMailboxSpecific;
@property(nonatomic) _Bool hasIsThreadSpecific;
@property(readonly, nonatomic) _Bool hasMailboxId;
@property(readonly, nonatomic) _Bool hasNotificationMessageId;
@property(readonly, nonatomic) _Bool hasRemoteId;
- (id)bccAtIndex:(unsigned long long)arg1;	// IMP=0x000000000004b4c5
- (unsigned long long)bccsCount;	// IMP=0x000000000004b4a8
- (void)addBcc:(id)arg1;	// IMP=0x000000000004b43e
- (void)clearBccs;	// IMP=0x000000000004b421
@property(readonly, nonatomic) _Bool hasMessageIdHeader;
@property(readonly, nonatomic) _Bool hasDateReceived;
@property(readonly, nonatomic) _Bool hasDateSent;
- (id)ccAtIndex:(unsigned long long)arg1;	// IMP=0x000000000004b3b4
- (unsigned long long)ccsCount;	// IMP=0x000000000004b397
- (void)addCc:(id)arg1;	// IMP=0x000000000004b32d
- (void)clearCcs;	// IMP=0x000000000004b310
- (id)toAtIndex:(unsigned long long)arg1;	// IMP=0x000000000004b2e2
- (unsigned long long)tosCount;	// IMP=0x000000000004b2c5
- (void)addTo:(id)arg1;	// IMP=0x000000000004b25b
- (void)clearTos;	// IMP=0x000000000004b23e
@property(readonly, nonatomic) _Bool hasFrom;
@property(nonatomic) _Bool hasStatus;
@property(readonly, nonatomic) _Bool hasSubject;
@property(readonly, nonatomic) _Bool hasConversationId;
@property(readonly, nonatomic) _Bool hasAccountId;
@property(readonly, nonatomic) _Bool hasMessageId;

@end
