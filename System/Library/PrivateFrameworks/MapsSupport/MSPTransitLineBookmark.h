//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MapsSupport/NSCopying-Protocol.h>

@class MSPTransitStorageLine, PBUnknownFields;

@interface MSPTransitLineBookmark : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    MSPTransitStorageLine *_transitLineStorage;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000006f5a8
@property(retain, nonatomic) MSPTransitStorageLine *transitLineStorage; // @synthesize transitLineStorage=_transitLineStorage;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000006f514
- (unsigned long long)hash;	// IMP=0x000000000006f4f7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006f45d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006f3d2
- (void)copyTo:(id)arg1;	// IMP=0x000000000006f3a8
- (void)writeTo:(id)arg1;	// IMP=0x000000000006f34d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000006f340
- (id)dictionaryRepresentation;	// IMP=0x000000000006f051
- (id)description;	// IMP=0x000000000006efa2
@property(readonly, nonatomic) _Bool hasTransitLineStorage;

@end

