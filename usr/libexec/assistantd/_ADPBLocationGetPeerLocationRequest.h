//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@interface _ADPBLocationGetPeerLocationRequest : PBRequest
{
}

+ (unsigned short)_ADPBLocationRequestType;	// IMP=0x002000000020e0c0
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000019f056
- (unsigned long long)hash;	// IMP=0x001000000019f04e
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000019f009
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000019efd0
- (void)copyTo:(id)arg1;	// IMP=0x001000000019efca
- (void)writeTo:(id)arg1;	// IMP=0x001000000019efc4
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000019efb7
- (id)dictionaryRepresentation;	// IMP=0x001000000019ee99
- (id)description;	// IMP=0x001000000019edea
- (void)_ad_performWithPeerLocationManagerRemote:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f0e18

@end

