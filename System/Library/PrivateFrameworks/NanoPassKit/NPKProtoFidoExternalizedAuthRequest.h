//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@interface NPKProtoFidoExternalizedAuthRequest : PBRequest <NSCopying>
{
}

- (void)mergeFrom:(id)arg1;	// IMP=0x000000000008ff16
- (unsigned long long)hash;	// IMP=0x000000000008ff0e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008fec9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008fe90
- (void)copyTo:(id)arg1;	// IMP=0x000000000008fe8a
- (void)writeTo:(id)arg1;	// IMP=0x000000000008fe84
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000008fe77
- (id)dictionaryRepresentation;	// IMP=0x000000000008fd59
- (id)description;	// IMP=0x000000000008fcaa

@end
