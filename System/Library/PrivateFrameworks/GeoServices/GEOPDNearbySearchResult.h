//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDNearbySearchResult : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000055b2b5
- (unsigned long long)hash;	// IMP=0x000000000055b2ad
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000055b268
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000055b20d
- (void)writeTo:(id)arg1;	// IMP=0x000000000055b1f0
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000055b1e1
- (id)jsonRepresentation;	// IMP=0x000000000055af23
- (id)dictionaryRepresentation;	// IMP=0x000000000055adb8
- (id)description;	// IMP=0x000000000055ad09

@end
