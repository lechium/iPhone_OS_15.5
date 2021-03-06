//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDSRawAttribute, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSInferredValue : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDSRawAttribute *_attribute;	// 16 = 0x10
    int _priceRange;	// 24 = 0x18
    int _tradingHours;	// 28 = 0x1c
    _Bool _negateInferredValue;	// 32 = 0x20
    struct {
        unsigned int has_priceRange:1;
        unsigned int has_tradingHours:1;
        unsigned int has_negateInferredValue:1;
    } _flags;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x0000000000658310
- (unsigned long long)hash;	// IMP=0x0000000000658271
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000658152
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000065806c
- (void)writeTo:(id)arg1;	// IMP=0x0000000000657fa4
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000657f95
- (id)jsonRepresentation;	// IMP=0x0000000000657b58
- (id)dictionaryRepresentation;	// IMP=0x0000000000657776
- (id)description;	// IMP=0x00000000006576c7

@end

