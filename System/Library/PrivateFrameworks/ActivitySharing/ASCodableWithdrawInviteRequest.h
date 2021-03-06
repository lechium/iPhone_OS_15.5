//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <ActivitySharing/NSCopying-Protocol.h>

@class NSString;

@interface ASCodableWithdrawInviteRequest : PBRequest <NSCopying>
{
    NSString *_handshakeToken;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000015229
@property(retain, nonatomic) NSString *handshakeToken; // @synthesize handshakeToken=_handshakeToken;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000151e0
- (unsigned long long)hash;	// IMP=0x00000000000151c3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000015129
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000150b1
- (void)copyTo:(id)arg1;	// IMP=0x0000000000015087
- (void)writeTo:(id)arg1;	// IMP=0x0000000000015063
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000015056
- (id)dictionaryRepresentation;	// IMP=0x0000000000014e88
- (id)description;	// IMP=0x0000000000014dd9
@property(readonly, nonatomic) _Bool hasHandshakeToken;

@end

