//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoMailKitServer/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface NNMKProtoMessageStatusUpdates : PBCodable <NSCopying>
{
    NSData *_dateSynced;	// 8 = 0x8
    unsigned int _fullSyncVersion;	// 16 = 0x10
    NSString *_mailboxId;	// 24 = 0x18
    unsigned int _mailboxSyncVersion;	// 32 = 0x20
    NSMutableArray *_messageStatusUpdates;	// 40 = 0x28
    CDStruct_8d07e858 _has;	// 48 = 0x30
}

+ (Class)messageStatusUpdateType;	// IMP=0x000000000003b877
- (void).cxx_destruct;	// IMP=0x000000000003ca72
@property(nonatomic) unsigned int mailboxSyncVersion; // @synthesize mailboxSyncVersion=_mailboxSyncVersion;
@property(retain, nonatomic) NSString *mailboxId; // @synthesize mailboxId=_mailboxId;
@property(retain, nonatomic) NSMutableArray *messageStatusUpdates; // @synthesize messageStatusUpdates=_messageStatusUpdates;
@property(retain, nonatomic) NSData *dateSynced; // @synthesize dateSynced=_dateSynced;
@property(nonatomic) unsigned int fullSyncVersion; // @synthesize fullSyncVersion=_fullSyncVersion;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000003c7ed
- (unsigned long long)hash;	// IMP=0x000000000003c727
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003c5c4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003c362
- (void)copyTo:(id)arg1;	// IMP=0x000000000003c215
- (void)writeTo:(id)arg1;	// IMP=0x000000000003c04d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000003c040
- (id)dictionaryRepresentation;	// IMP=0x000000000003b995
- (id)description;	// IMP=0x000000000003b8e6
@property(nonatomic) _Bool hasMailboxSyncVersion;
@property(readonly, nonatomic) _Bool hasMailboxId;
- (id)messageStatusUpdateAtIndex:(unsigned long long)arg1;	// IMP=0x000000000003b85a
- (unsigned long long)messageStatusUpdatesCount;	// IMP=0x000000000003b83d
- (void)addMessageStatusUpdate:(id)arg1;	// IMP=0x000000000003b7d3
- (void)clearMessageStatusUpdates;	// IMP=0x000000000003b7b6
@property(readonly, nonatomic) _Bool hasDateSynced;
@property(nonatomic) _Bool hasFullSyncVersion;

@end

