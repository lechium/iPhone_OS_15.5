//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoMailKitServer/NSCopying-Protocol.h>

@class NSData, NSString;

@interface NNMKProtoFetchRequest : PBRequest <NSCopying>
{
    NSString *_conversationId;	// 8 = 0x8
    NSData *_currentDateForRequestingMoreMessages;	// 16 = 0x10
    NSData *_currentMessageIdsAndStatus;	// 24 = 0x18
    unsigned int _fullSyncVersion;	// 32 = 0x20
    NSString *_mailboxId;	// 40 = 0x28
    _Bool _wantsBatchedResponse;	// 48 = 0x30
    _Bool _willTrimDatabaseAfterResults;	// 49 = 0x31
    struct {
        unsigned int fullSyncVersion:1;
        unsigned int wantsBatchedResponse:1;
        unsigned int willTrimDatabaseAfterResults:1;
    } _has;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x000000000005477e
@property(retain, nonatomic) NSString *mailboxId; // @synthesize mailboxId=_mailboxId;
@property(nonatomic) _Bool willTrimDatabaseAfterResults; // @synthesize willTrimDatabaseAfterResults=_willTrimDatabaseAfterResults;
@property(retain, nonatomic) NSData *currentDateForRequestingMoreMessages; // @synthesize currentDateForRequestingMoreMessages=_currentDateForRequestingMoreMessages;
@property(retain, nonatomic) NSData *currentMessageIdsAndStatus; // @synthesize currentMessageIdsAndStatus=_currentMessageIdsAndStatus;
@property(nonatomic) _Bool wantsBatchedResponse; // @synthesize wantsBatchedResponse=_wantsBatchedResponse;
@property(retain, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(nonatomic) unsigned int fullSyncVersion; // @synthesize fullSyncVersion=_fullSyncVersion;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000545b9
- (unsigned long long)hash;	// IMP=0x00000000000544ac
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000542d5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000054181
- (void)copyTo:(id)arg1;	// IMP=0x0000000000054080
- (void)writeTo:(id)arg1;	// IMP=0x0000000000053f7d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000053f70
- (id)dictionaryRepresentation;	// IMP=0x00000000000539d0
- (id)description;	// IMP=0x0000000000053921
@property(readonly, nonatomic) _Bool hasMailboxId;
@property(nonatomic) _Bool hasWillTrimDatabaseAfterResults;
@property(readonly, nonatomic) _Bool hasCurrentDateForRequestingMoreMessages;
@property(readonly, nonatomic) _Bool hasCurrentMessageIdsAndStatus;
@property(nonatomic) _Bool hasWantsBatchedResponse;
@property(readonly, nonatomic) _Bool hasConversationId;
@property(nonatomic) _Bool hasFullSyncVersion;

@end
