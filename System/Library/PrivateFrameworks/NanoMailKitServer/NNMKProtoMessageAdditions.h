//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoMailKitServer/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface NNMKProtoMessageAdditions : PBCodable <NSCopying>
{
    NSData *_dateForRequestingMoreMessages;	// 8 = 0x8
    NSData *_dateSynced;	// 16 = 0x10
    unsigned int _fullSyncVersion;	// 24 = 0x18
    NSString *_mailboxId;	// 32 = 0x20
    unsigned int _mailboxSyncVersion;	// 40 = 0x28
    NSMutableArray *_messageAdditions;	// 48 = 0x30
    _Bool _messagesAreNew;	// 56 = 0x38
    struct {
        unsigned int fullSyncVersion:1;
        unsigned int mailboxSyncVersion:1;
        unsigned int messagesAreNew:1;
    } _has;	// 60 = 0x3c
}

+ (Class)messageAdditionType;	// IMP=0x0000000000064903
- (void).cxx_destruct;	// IMP=0x0000000000065e73
@property(nonatomic) unsigned int mailboxSyncVersion; // @synthesize mailboxSyncVersion=_mailboxSyncVersion;
@property(retain, nonatomic) NSString *mailboxId; // @synthesize mailboxId=_mailboxId;
@property(nonatomic) _Bool messagesAreNew; // @synthesize messagesAreNew=_messagesAreNew;
@property(retain, nonatomic) NSData *dateForRequestingMoreMessages; // @synthesize dateForRequestingMoreMessages=_dateForRequestingMoreMessages;
@property(retain, nonatomic) NSMutableArray *messageAdditions; // @synthesize messageAdditions=_messageAdditions;
@property(retain, nonatomic) NSData *dateSynced; // @synthesize dateSynced=_dateSynced;
@property(nonatomic) unsigned int fullSyncVersion; // @synthesize fullSyncVersion=_fullSyncVersion;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000065b73
- (unsigned long long)hash;	// IMP=0x0000000000065a65
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006589c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000655f2
- (void)copyTo:(id)arg1;	// IMP=0x000000000006546a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000065269
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000006525c
- (id)dictionaryRepresentation;	// IMP=0x0000000000064a81
- (id)description;	// IMP=0x00000000000649d2
@property(nonatomic) _Bool hasMailboxSyncVersion;
@property(readonly, nonatomic) _Bool hasMailboxId;
@property(nonatomic) _Bool hasMessagesAreNew;
@property(readonly, nonatomic) _Bool hasDateForRequestingMoreMessages;
- (id)messageAdditionAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000648e6
- (unsigned long long)messageAdditionsCount;	// IMP=0x00000000000648c9
- (void)addMessageAddition:(id)arg1;	// IMP=0x000000000006485f
- (void)clearMessageAdditions;	// IMP=0x0000000000064842
@property(readonly, nonatomic) _Bool hasDateSynced;
@property(nonatomic) _Bool hasFullSyncVersion;

@end

