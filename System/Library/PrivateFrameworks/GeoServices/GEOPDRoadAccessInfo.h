//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDRoadAccessInfo : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_roadAccessPoints;	// 16 = 0x10
}

+ (id)roadAccessInfoForPlaceData:(id)arg1;	// IMP=0x00000000009f70e2
- (void).cxx_destruct;	// IMP=0x0000000000be1cdb
- (unsigned long long)hash;	// IMP=0x0000000000be1cbe
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000be1c24
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000be1a64
- (void)writeTo:(id)arg1;	// IMP=0x0000000000be1905
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000be18f6
- (id)jsonRepresentation;	// IMP=0x0000000000be17e4
- (id)dictionaryRepresentation;	// IMP=0x0000000000be1441
- (id)description;	// IMP=0x0000000000be1392

@end
