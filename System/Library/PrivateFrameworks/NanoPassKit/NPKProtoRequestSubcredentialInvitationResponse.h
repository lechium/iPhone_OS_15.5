//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData;

@interface NPKProtoRequestSubcredentialInvitationResponse : PBCodable <NSCopying>
{
    NSData *_errorData;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000bf74f
@property(retain, nonatomic) NSData *errorData; // @synthesize errorData=_errorData;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000bf706
- (unsigned long long)hash;	// IMP=0x00000000000bf6e9
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000bf64f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000bf5d7
- (void)copyTo:(id)arg1;	// IMP=0x00000000000bf5ad
- (void)writeTo:(id)arg1;	// IMP=0x00000000000bf589
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000bf57c
- (id)dictionaryRepresentation;	// IMP=0x00000000000bf3ae
- (id)description;	// IMP=0x00000000000bf2ff
@property(readonly, nonatomic) _Bool hasErrorData;

@end
