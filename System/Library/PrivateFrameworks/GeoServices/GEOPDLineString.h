//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDLineString : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_points;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000b6a208
- (unsigned long long)hash;	// IMP=0x0000000000b6a1eb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b6a151
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b69f91
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b69e32
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b69e23
- (id)jsonRepresentation;	// IMP=0x0000000000b69d11
- (id)dictionaryRepresentation;	// IMP=0x0000000000b69980
- (id)description;	// IMP=0x0000000000b698d1

@end
