//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoMailKitServer/NSCopying-Protocol.h>

@class NNMKProtoMessage, NSData, NSMutableArray, NSString;

@interface NNMKProtoMessageContentSync : PBCodable <NSCopying>
{
    NSMutableArray *_attachments;	// 8 = 0x8
    NSData *_dateSynced;	// 16 = 0x10
    unsigned int _fullSyncVersion;	// 24 = 0x18
    NSData *_htmlContentData;	// 32 = 0x20
    NSString *_messageId;	// 40 = 0x28
    NNMKProtoMessage *_notificationMessage;	// 48 = 0x30
    NSData *_preview;	// 56 = 0x38
    NSData *_text;	// 64 = 0x40
    _Bool _mainAlternativeValid;	// 72 = 0x48
    _Bool _partiallyLoaded;	// 73 = 0x49
    struct {
        unsigned int fullSyncVersion:1;
        unsigned int mainAlternativeValid:1;
        unsigned int partiallyLoaded:1;
    } _has;	// 76 = 0x4c
}

+ (Class)attachmentType;	// IMP=0x0000000000012d06
- (void).cxx_destruct;	// IMP=0x0000000000014650
@property(retain, nonatomic) NSData *htmlContentData; // @synthesize htmlContentData=_htmlContentData;
@property(retain, nonatomic) NNMKProtoMessage *notificationMessage; // @synthesize notificationMessage=_notificationMessage;
@property(retain, nonatomic) NSMutableArray *attachments; // @synthesize attachments=_attachments;
@property(nonatomic) _Bool partiallyLoaded; // @synthesize partiallyLoaded=_partiallyLoaded;
@property(retain, nonatomic) NSData *preview; // @synthesize preview=_preview;
@property(retain, nonatomic) NSData *text; // @synthesize text=_text;
@property(nonatomic) _Bool mainAlternativeValid; // @synthesize mainAlternativeValid=_mainAlternativeValid;
@property(retain, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(retain, nonatomic) NSData *dateSynced; // @synthesize dateSynced=_dateSynced;
@property(nonatomic) unsigned int fullSyncVersion; // @synthesize fullSyncVersion=_fullSyncVersion;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001425c
- (unsigned long long)hash;	// IMP=0x0000000000014101
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000013e86
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000013b42
- (void)copyTo:(id)arg1;	// IMP=0x0000000000013960
- (void)writeTo:(id)arg1;	// IMP=0x000000000001370d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000013700
- (id)dictionaryRepresentation;	// IMP=0x0000000000012df0
- (id)description;	// IMP=0x0000000000012d41
@property(readonly, nonatomic) _Bool hasHtmlContentData;
@property(readonly, nonatomic) _Bool hasNotificationMessage;
- (id)attachmentAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000012ce9
- (unsigned long long)attachmentsCount;	// IMP=0x0000000000012ccc
- (void)addAttachment:(id)arg1;	// IMP=0x0000000000012c62
- (void)clearAttachments;	// IMP=0x0000000000012c45
@property(nonatomic) _Bool hasPartiallyLoaded;
@property(readonly, nonatomic) _Bool hasPreview;
@property(readonly, nonatomic) _Bool hasText;
@property(nonatomic) _Bool hasMainAlternativeValid;
@property(readonly, nonatomic) _Bool hasMessageId;
@property(readonly, nonatomic) _Bool hasDateSynced;
@property(nonatomic) _Bool hasFullSyncVersion;

@end

