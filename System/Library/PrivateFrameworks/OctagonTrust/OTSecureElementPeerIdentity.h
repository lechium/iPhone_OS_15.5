//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <OctagonTrust/NSCopying-Protocol.h>

@class NSData;

@interface OTSecureElementPeerIdentity : PBCodable <NSCopying>
{
    NSData *_peerData;	// 8 = 0x8
    NSData *_peerIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000002427
@property(retain, nonatomic) NSData *peerData; // @synthesize peerData=_peerData;
@property(retain, nonatomic) NSData *peerIdentifier; // @synthesize peerIdentifier=_peerIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000237a
- (unsigned long long)hash;	// IMP=0x000000000000232d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000002265
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000021c7
- (void)copyTo:(id)arg1;	// IMP=0x0000000000002164
- (void)writeTo:(id)arg1;	// IMP=0x0000000000002107
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000020fa
- (id)dictionaryRepresentation;	// IMP=0x0000000000002077
- (id)description;	// IMP=0x0000000000001fc8
@property(readonly, nonatomic) _Bool hasPeerData;
@property(readonly, nonatomic) _Bool hasPeerIdentifier;

@end

