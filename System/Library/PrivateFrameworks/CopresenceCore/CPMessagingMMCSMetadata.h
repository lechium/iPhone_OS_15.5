//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CopresenceCore/NSCopying-Protocol.h>

@class NSData, NSString;

@interface CPMessagingMMCSMetadata : PBCodable <NSCopying>
{
    NSData *_encryptionKey;	// 8 = 0x8
    NSString *_ownerID;	// 16 = 0x10
    NSData *_signature;	// 24 = 0x18
    NSString *_transferUUID;	// 32 = 0x20
    NSString *_url;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000001cbcb
@property(retain, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSData *encryptionKey; // @synthesize encryptionKey=_encryptionKey;
@property(retain, nonatomic) NSString *ownerID; // @synthesize ownerID=_ownerID;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *transferUUID; // @synthesize transferUUID=_transferUUID;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001ca4f
- (unsigned long long)hash;	// IMP=0x000000000001c9ac
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001c84c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001c734
- (void)copyTo:(id)arg1;	// IMP=0x000000000001c671
- (void)writeTo:(id)arg1;	// IMP=0x000000000001c5bd
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001c5b0
- (id)dictionaryRepresentation;	// IMP=0x000000000001c2b4
- (id)description;	// IMP=0x000000000001c205
@property(readonly, nonatomic) _Bool hasSignature;
@property(readonly, nonatomic) _Bool hasEncryptionKey;
@property(readonly, nonatomic) _Bool hasOwnerID;
@property(readonly, nonatomic) _Bool hasUrl;
@property(readonly, nonatomic) _Bool hasTransferUUID;

@end

