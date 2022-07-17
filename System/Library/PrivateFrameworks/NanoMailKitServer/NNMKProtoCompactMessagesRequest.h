//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoMailKitServer/NSCopying-Protocol.h>

@class NSData, NSString;

@interface NNMKProtoCompactMessagesRequest : PBRequest <NSCopying>
{
    NSData *_beforeDateReceived;	// 8 = 0x8
    unsigned int _fullSyncVersion;	// 16 = 0x10
    NSString *_mailboxId;	// 24 = 0x18
    CDStruct_a125a100 _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000003f882
@property(retain, nonatomic) NSString *mailboxId; // @synthesize mailboxId=_mailboxId;
@property(retain, nonatomic) NSData *beforeDateReceived; // @synthesize beforeDateReceived=_beforeDateReceived;
@property(nonatomic) unsigned int fullSyncVersion; // @synthesize fullSyncVersion=_fullSyncVersion;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000003f7a5
- (unsigned long long)hash;	// IMP=0x000000000003f725
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003f630
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003f56f
- (void)copyTo:(id)arg1;	// IMP=0x000000000003f4ec
- (void)writeTo:(id)arg1;	// IMP=0x000000000003f46b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000003f45e
- (id)dictionaryRepresentation;	// IMP=0x000000000003f145
- (id)description;	// IMP=0x000000000003f096
@property(readonly, nonatomic) _Bool hasMailboxId;
@property(readonly, nonatomic) _Bool hasBeforeDateReceived;
@property(nonatomic) _Bool hasFullSyncVersion;

@end
