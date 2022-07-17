//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PBBridgeSupport/NSCopying-Protocol.h>

@class NSData;

@interface PBBProtoAppViewListImageResponse : PBCodable <NSCopying>
{
    NSData *_imageData;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001ba78
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001ba2f
- (unsigned long long)hash;	// IMP=0x000000000001ba12
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001b978
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001b900
- (void)copyTo:(id)arg1;	// IMP=0x000000000001b8d6
- (void)writeTo:(id)arg1;	// IMP=0x000000000001b8b2
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001b8a5
- (id)dictionaryRepresentation;	// IMP=0x000000000001b6d7
- (id)description;	// IMP=0x000000000001b628
@property(readonly, nonatomic) _Bool hasImageData;

@end
