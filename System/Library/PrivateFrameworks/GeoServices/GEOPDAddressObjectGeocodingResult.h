//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAddressObjectGeocodingResult : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_disambiguationLabels;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000004b1dc2
- (unsigned long long)hash;	// IMP=0x00000000004b1c47
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004b1bad
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004b19ed
- (void)writeTo:(id)arg1;	// IMP=0x00000000004b188e
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004b187f
- (id)jsonRepresentation;	// IMP=0x00000000004b10d3
- (id)dictionaryRepresentation;	// IMP=0x00000000004b0d30
- (id)description;	// IMP=0x00000000004b0c81

@end

