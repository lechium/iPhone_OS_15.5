//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData;

@interface NPKProtoSignWithFidoKeyResponse : PBCodable <NSCopying>
{
    NSData *_errorData;	// 8 = 0x8
    NSData *_fidoAttestation;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000139039
@property(retain, nonatomic) NSData *errorData; // @synthesize errorData=_errorData;
@property(retain, nonatomic) NSData *fidoAttestation; // @synthesize fidoAttestation=_fidoAttestation;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000138f8c
- (unsigned long long)hash;	// IMP=0x0000000000138f3f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000138e77
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000138dd9
- (void)copyTo:(id)arg1;	// IMP=0x0000000000138d76
- (void)writeTo:(id)arg1;	// IMP=0x0000000000138d19
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000138d0c
- (id)dictionaryRepresentation;	// IMP=0x0000000000138af5
- (id)description;	// IMP=0x0000000000138a46
@property(readonly, nonatomic) _Bool hasErrorData;
@property(readonly, nonatomic) _Bool hasFidoAttestation;

@end
