//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData;

@interface NPKProtoUpdatePeerPaymentAccountResponse : PBCodable <NSCopying>
{
    NSData *_peerPaymentAccountData;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000011143f
@property(retain, nonatomic) NSData *peerPaymentAccountData; // @synthesize peerPaymentAccountData=_peerPaymentAccountData;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001113f6
- (unsigned long long)hash;	// IMP=0x00000000001113d9
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000011133f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001112c7
- (void)copyTo:(id)arg1;	// IMP=0x000000000011129d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000111279
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000011126c
- (id)dictionaryRepresentation;	// IMP=0x000000000011109e
- (id)description;	// IMP=0x0000000000110fef
@property(readonly, nonatomic) _Bool hasPeerPaymentAccountData;

@end

