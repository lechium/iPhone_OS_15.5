//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData;

@interface NPKIDVRemoteDeviceProtoNonceForAuthorizationTokenResponse : PBCodable <NSCopying>
{
    NSData *_errorData;	// 8 = 0x8
    NSData *_nonceData;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000c026a
@property(retain, nonatomic) NSData *errorData; // @synthesize errorData=_errorData;
@property(retain, nonatomic) NSData *nonceData; // @synthesize nonceData=_nonceData;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000c01bd
- (unsigned long long)hash;	// IMP=0x00000000000c0170
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c00a8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c000a
- (void)copyTo:(id)arg1;	// IMP=0x00000000000bffa7
- (void)writeTo:(id)arg1;	// IMP=0x00000000000bff4a
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000bff3d
- (id)dictionaryRepresentation;	// IMP=0x00000000000bfd26
- (id)description;	// IMP=0x00000000000bfc77
@property(readonly, nonatomic) _Bool hasErrorData;
@property(readonly, nonatomic) _Bool hasNonceData;

@end

