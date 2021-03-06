//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoMailKitServer/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface NNMKProtoMessageMailboxMoves : PBCodable <NSCopying>
{
    unsigned int _fullSyncVersion;	// 8 = 0x8
    NSString *_mailboxId;	// 16 = 0x10
    NSMutableArray *_messageIds;	// 24 = 0x18
    CDStruct_a125a100 _has;	// 32 = 0x20
}

+ (Class)messageIdsType;	// IMP=0x000000000002fa38
- (void).cxx_destruct;	// IMP=0x0000000000030690
@property(retain, nonatomic) NSString *mailboxId; // @synthesize mailboxId=_mailboxId;
@property(retain, nonatomic) NSMutableArray *messageIds; // @synthesize messageIds=_messageIds;
@property(nonatomic) unsigned int fullSyncVersion; // @synthesize fullSyncVersion=_fullSyncVersion;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000003049f
- (unsigned long long)hash;	// IMP=0x000000000003041f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003032a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000300fd
- (void)copyTo:(id)arg1;	// IMP=0x000000000002fff5
- (void)writeTo:(id)arg1;	// IMP=0x000000000002fe70
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000002fe63
- (id)dictionaryRepresentation;	// IMP=0x000000000002fb0d
- (id)description;	// IMP=0x000000000002fa5e
@property(readonly, nonatomic) _Bool hasMailboxId;
- (id)messageIdsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000002fa1b
- (unsigned long long)messageIdsCount;	// IMP=0x000000000002f9fe
- (void)addMessageIds:(id)arg1;	// IMP=0x000000000002f994
- (void)clearMessageIds;	// IMP=0x000000000002f977
@property(nonatomic) _Bool hasFullSyncVersion;

@end

