//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData;

@interface NPKProtoAddISO18013BlobsResponse : PBCodable <NSCopying>
{
    NSData *_errorData;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000010b76b
@property(retain, nonatomic) NSData *errorData; // @synthesize errorData=_errorData;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000010b722
- (unsigned long long)hash;	// IMP=0x000000000010b705
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000010b66b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010b5f3
- (void)copyTo:(id)arg1;	// IMP=0x000000000010b5c9
- (void)writeTo:(id)arg1;	// IMP=0x000000000010b5a5
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000010b598
- (id)dictionaryRepresentation;	// IMP=0x000000000010b3ca
- (id)description;	// IMP=0x000000000010b31b
@property(readonly, nonatomic) _Bool hasErrorData;

@end
