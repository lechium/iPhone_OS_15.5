//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData;

@interface NPKIDVRemoteDeviceProtoPartitionsCredentialIdentifiersResponse : PBCodable <NSCopying>
{
    NSData *_errorData;	// 8 = 0x8
    NSData *_partitionsCredentialIdentifiersData;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000144b6
@property(retain, nonatomic) NSData *errorData; // @synthesize errorData=_errorData;
@property(retain, nonatomic) NSData *partitionsCredentialIdentifiersData; // @synthesize partitionsCredentialIdentifiersData=_partitionsCredentialIdentifiersData;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000014409
- (unsigned long long)hash;	// IMP=0x00000000000143bc
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000142f4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000014256
- (void)copyTo:(id)arg1;	// IMP=0x00000000000141f3
- (void)writeTo:(id)arg1;	// IMP=0x0000000000014196
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000014189
- (id)dictionaryRepresentation;	// IMP=0x0000000000013f72
- (id)description;	// IMP=0x0000000000013ec3
@property(readonly, nonatomic) _Bool hasErrorData;
@property(readonly, nonatomic) _Bool hasPartitionsCredentialIdentifiersData;

@end
