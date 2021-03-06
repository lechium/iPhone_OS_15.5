//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BiomeStreams/NSCopying-Protocol.h>

@class BMPBContentAttachment, BMPBNamedHandle, NSMutableArray, NSString;

@interface BMPBMessagesContentEvent : PBCodable <NSCopying>
{
    double _absoluteTimestamp;	// 8 = 0x8
    NSMutableArray *_accountHandles;	// 16 = 0x10
    NSString *_accountIdentifier;	// 24 = 0x18
    NSString *_accountType;	// 32 = 0x20
    BMPBContentAttachment *_attachment;	// 40 = 0x28
    NSString *_attachmentURL;	// 48 = 0x30
    NSString *_author;	// 56 = 0x38
    NSString *_content;	// 64 = 0x40
    NSString *_contentProtection;	// 72 = 0x48
    NSString *_conversationId;	// 80 = 0x50
    NSString *_domainId;	// 88 = 0x58
    BMPBNamedHandle *_fromHandle;	// 96 = 0x60
    NSString *_recipients;	// 104 = 0x68
    NSString *_suggestedNickname;	// 112 = 0x70
    NSString *_suggestedPhotoPath;	// 120 = 0x78
    NSMutableArray *_toHandles;	// 128 = 0x80
    NSString *_uniqueId;	// 136 = 0x88
    NSString *_url;	// 144 = 0x90
    CDStruct_d3e759b0 _has;	// 152 = 0x98
}

+ (Class)accountHandlesType;	// IMP=0x000000000002b3b6
+ (Class)toHandlesType;	// IMP=0x000000000002b2ba
- (void).cxx_destruct;	// IMP=0x000000000002da13
@property(retain, nonatomic) NSString *contentProtection; // @synthesize contentProtection=_contentProtection;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) BMPBContentAttachment *attachment; // @synthesize attachment=_attachment;
@property(retain, nonatomic) NSMutableArray *accountHandles; // @synthesize accountHandles=_accountHandles;
@property(retain, nonatomic) NSString *accountType; // @synthesize accountType=_accountType;
@property(retain, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(retain, nonatomic) NSMutableArray *toHandles; // @synthesize toHandles=_toHandles;
@property(retain, nonatomic) BMPBNamedHandle *fromHandle; // @synthesize fromHandle=_fromHandle;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *attachmentURL; // @synthesize attachmentURL=_attachmentURL;
@property(retain, nonatomic) NSString *recipients; // @synthesize recipients=_recipients;
@property(retain, nonatomic) NSString *suggestedPhotoPath; // @synthesize suggestedPhotoPath=_suggestedPhotoPath;
@property(retain, nonatomic) NSString *suggestedNickname; // @synthesize suggestedNickname=_suggestedNickname;
@property(retain, nonatomic) NSString *author; // @synthesize author=_author;
@property(retain, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(nonatomic) double absoluteTimestamp; // @synthesize absoluteTimestamp=_absoluteTimestamp;
@property(retain, nonatomic) NSString *domainId; // @synthesize domainId=_domainId;
@property(retain, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000002d308
- (unsigned long long)hash;	// IMP=0x000000000002cfeb
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002cbd9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002c640
- (void)copyTo:(id)arg1;	// IMP=0x000000000002c2d2
- (void)writeTo:(id)arg1;	// IMP=0x000000000002bedd
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000002bed0
- (id)dictionaryRepresentation;	// IMP=0x000000000002b4b5
- (id)description;	// IMP=0x000000000002b406
@property(readonly, nonatomic) _Bool hasContentProtection;
@property(readonly, nonatomic) _Bool hasUrl;
@property(readonly, nonatomic) _Bool hasAttachment;
- (id)accountHandlesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000002b399
- (unsigned long long)accountHandlesCount;	// IMP=0x000000000002b37c
- (void)addAccountHandles:(id)arg1;	// IMP=0x000000000002b312
- (void)clearAccountHandles;	// IMP=0x000000000002b2f5
@property(readonly, nonatomic) _Bool hasAccountType;
@property(readonly, nonatomic) _Bool hasAccountIdentifier;
- (id)toHandlesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000002b29d
- (unsigned long long)toHandlesCount;	// IMP=0x000000000002b280
- (void)addToHandles:(id)arg1;	// IMP=0x000000000002b216
- (void)clearToHandles;	// IMP=0x000000000002b1f9
@property(readonly, nonatomic) _Bool hasFromHandle;
@property(readonly, nonatomic) _Bool hasContent;
@property(readonly, nonatomic) _Bool hasAttachmentURL;
@property(readonly, nonatomic) _Bool hasRecipients;
@property(readonly, nonatomic) _Bool hasSuggestedPhotoPath;
@property(readonly, nonatomic) _Bool hasSuggestedNickname;
@property(readonly, nonatomic) _Bool hasAuthor;
@property(readonly, nonatomic) _Bool hasConversationId;
@property(nonatomic) _Bool hasAbsoluteTimestamp;
@property(readonly, nonatomic) _Bool hasDomainId;
@property(readonly, nonatomic) _Bool hasUniqueId;

@end

